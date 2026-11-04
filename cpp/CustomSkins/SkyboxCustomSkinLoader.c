// Type: CustomSkins.SkyboxCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor(CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e99a80
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e99ae4: lea rcx, [rsp + 0x30]
// asm:   0x181e99ae9: call 0x181e7c130  ; il2cpp_runtime_helper_181e7c130()
// asm:   0x181e99aee: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e99af3: test rcx, rcx
// asm:   0x181e99af6: jne 0x181e99afe
// asm:   0x181e99afe: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184344f9a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      Il2CppMethodInitialized_184344f9a = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext
// il2cpp: bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e99740
// eh: try 0x181e997b8..0x181e99a2c -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e999e8: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181e999ed: test rbx, rbx
// asm:   0x181e999f0: jne 0x181e99a2c
// asm:   0x181e999f2: movzx eax, byte ptr [rsp + 0x70]
// asm:   0x181e99a2c: lea rcx, [rsp + 0x30]
// asm:   0x181e99a31: call 0x181e7c190  ; il2cpp_runtime_helper_181e7c190()
// asm:   0x181e99a36: mov rcx, rbx
// asm:   0x181e99a39: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  CustomSkins_SkyboxCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  System_String_o *pSVar4;
  Il2CppType *handle;
  bool bVar5;
  UnityEngine_Material_o *value;
  System_Type_o *t;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  CustomSkins_BaseCustomSkinPart_o *__this_02;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value_00;
  System_String_o *url;
  System_Collections_Generic_List_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_184344f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomSkins_SkyboxCustomSkinPartId);
    Il2CppMethodInitialized_184344f99 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    value = CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial((MethodInfo *)0x0);
    TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial,value);
    handle = TypeRef_CustomSkins_SkyboxCustomSkinPartId;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    t = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
                          ((CustomSkins_BaseCustomSkinLoader_o *)__this_00,t,(MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              (&local_20,__this_01,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    (__this->fields).__7__wrap1.fields._list = local_20.fields._list;
    (__this->fields).__7__wrap1.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap1.fields._version = local_20.fields._version;
    *(Il2CppObject **)&(__this->fields).__7__wrap1.fields._current = local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap1,(void *)0x0);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  while( true ) {
    bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)&(__this->fields).__7__wrap1,
                       (MethodInfo_1530180 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    if (!bVar5) {
      if (Il2CppMethodInitialized_184344f9a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        Il2CppMethodInitialized_184344f9a = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      (__this->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (__this->fields).__7__wrap1.fields._index = 0;
      (__this->fields).__7__wrap1.fields._version = 0;
      *(undefined8 *)&(__this->fields).__7__wrap1.fields._current = 0;
      return false;
    }
    if (__this_00 == (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (__this->fields).__7__wrap1.fields._current;
    __this_02 = (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                          (__this_00,uVar2,(__this_00->klass->vtable)._6_GetCustomSkinPart.method);
    pSVar3 = (__this->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar3->max_length <= uVar2) break;
    pSVar4 = (System_String_o *)pSVar3->m_Items[(int)uVar2];
    url = (System_String_o *)0x0;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
        url = pSVar4;
      }
      if (url == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    if (__this_02 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_02,url,(MethodInfo *)0x0);
    if (!bVar5) {
      routine = CustomSkins_BaseCustomSkinPart__LoadSkin(__this_02,url,(MethodInfo *)0x0);
      value_00 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                           ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1 (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e99b10

void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1
               (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    Il2CppMethodInitialized_184344f9a = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_int___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
             MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  return;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset (CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e99a40

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
// 0x180573e90

Il2CppObject*
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current(CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.SkyboxCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e943d0

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"skybox");
    Il2CppMethodInitialized_184344f93 = '\x01';
  }
  return "skybox";
}


// CustomSkins.SkyboxCustomSkinLoader$$CreateSkyboxMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial (const MethodInfo* method);
// 0x181e93fe0

UnityEngine_Material_o * CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Skyboxes/EmptySkybox");
    Il2CppMethodInitialized_184344f94 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Skyboxes/EmptySkybox",true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  return pUVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_SkyboxCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x181e94270

System_Collections_IEnumerator_o *
CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_SkyboxCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4);
    Il2CppMethodInitialized_184344f95 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_SkyboxCustomSkinLoader_LoadSkinsFromRPC_d__4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e94090

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_SkyboxCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  UnityEngine_Material_o *value;
  System_String_o *pSVar1;
  System_String_o *value_00;
  CustomSkins_SkyboxCustomSkinPart_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  float fStackX_c;
  System_Nullable_Vector2__Fields local_68;
  System_Enum_o local_58;
  int32_t local_48;
  
  if (Il2CppMethodInitialized_184344f96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPart);
    Il2CppMethodInitialized_184344f96 = '\x01';
  }
  value = TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial;
  if (Il2CppMethodInitialized_184344f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPartId);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    Il2CppMethodInitialized_184344f97 = '\x01';
  }
  local_58.klass = (System_Enum_c *)TypeInfo_CustomSkins_SkyboxCustomSkinPartId;
  local_58.monitor = &g_data_ffffffffffffffff;
  local_48 = partId;
  pSVar1 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("_",pSVar1,"Tex",(MethodInfo *)0x0)
  ;
  value_00 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                       ((CustomSkins_BaseCustomSkinLoader_o *)__this,partId,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_SkyboxCustomSkinPart);
  local_68.hasValue = false;
  local_68._1_3_ = 0;
  local_68.value.fields.x = 0.0;
  local_68.value.fields.y = 0.0;
  if (Il2CppMethodInitialized_184344fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_184344fa1 = '\x01';
  }
  (__this_00->fields)._defaultTextureScale.fields.x = 1.0;
  (__this_00->fields)._defaultTextureScale.fields.y = 1.0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader,__this);
  (__this_00->fields)._renderers = (System_Collections_Generic_List_Renderer__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers,(void *)0x0);
  (__this_00->fields)._rendererId = value_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId,value_00);
  (__this_00->fields)._maxSize = 2000000;
  if (local_68.hasValue == false) {
    fVar3 = (__this_00->fields)._defaultTextureScale.fields.x;
    fStackX_c = (__this_00->fields)._defaultTextureScale.fields.y;
  }
  else {
    UVar2 = System_Nullable_Vector2___get_Value
                      ((System_Nullable_Vector2__o *)&local_68,
                       (MethodInfo_AE2BD0 *)MethodInfo_System_Nullable_Vector2_get_Value);
    fVar3 = UVar2.fields.x;
    fStackX_c = UVar2.fields.y;
  }
  (__this_00->fields)._textureScale.fields.x = fVar3;
  (__this_00->fields)._textureScale.fields.y = fStackX_c;
  (__this_00->fields)._useTransparentMaterial = false;
  (__this_00->fields)._skyboxMaterial = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._skyboxMaterial,value);
  (__this_00->fields)._textureName = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._textureName,pSVar1);
  return (CustomSkins_BaseCustomSkinPart_o *)__this_00;
}


// CustomSkins.SkyboxCustomSkinLoader$$PartIdToTextureName
// il2cpp: System_String_o* CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName (CustomSkins_SkyboxCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e94300

System_String_o *
CustomSkins_SkyboxCustomSkinLoader__PartIdToTextureName
          (CustomSkins_SkyboxCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinPartId);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    Il2CppMethodInitialized_184344f97 = '\x01';
  }
  local_28.klass = (System_Enum_c *)TypeInfo_CustomSkins_SkyboxCustomSkinPartId;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = partId;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("_",pSVar1,"Tex",(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// CustomSkins.SkyboxCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinLoader___ctor (CustomSkins_SkyboxCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e94380

void CustomSkins_SkyboxCustomSkinLoader___ctor
               (CustomSkins_SkyboxCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_184344f98 = '\x01';
  }
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  CustomSkins_BaseCustomSkinLoader___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


