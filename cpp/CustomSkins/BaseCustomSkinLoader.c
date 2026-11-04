// Type: CustomSkins.BaseCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs
// --------------------------------

// CustomSkins.BaseCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_BaseCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomSkins_BaseCustomSkinLoader__get_AllowLocalFileTextures(CustomSkins_BaseCustomSkinLoader_o* __this, MethodInfo* method)

{
  return false;
}


// CustomSkins.BaseCustomSkinLoader$$Awake
// il2cpp: void CustomSkins_BaseCustomSkinLoader__Awake (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e62b70

void CustomSkins_BaseCustomSkinLoader__Awake(CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *value;
  
  value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,value);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e62c20

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomSkins_BaseCustomSkinLoader_GetCustomSkinPart);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.BaseCustomSkinLoader$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinLoader__GetRendererId (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e62c60

System_String_o *
CustomSkins_BaseCustomSkinLoader__GetRendererId
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str1;
  int32_t local_res10 [6];
  
  local_res10[0] = partId;
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_unknown.methodPtr)();
  str1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$AddRendererIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x181e628e0

void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Renderer_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f6a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__GetComponentInChildren_object_
                         (obj,(MethodInfo_6F5040 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer),
     renderers != (System_Collections_Generic_List_Renderer__o *)0x0)) {
    il2cpp_runtime_helper_180012890(renderers,pUVar2,MethodInfo_System_Collections_Generic_List_Renderer_Add);
    return;
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderers
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderers (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x181e627e0

void CustomSkins_BaseCustomSkinLoader__AddAllRenderers
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_Renderer_o *item;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_184344f6b = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (obj,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar6 = 0;
      do {
        pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
        if ((int)pSVar5->max_length <= (int)uVar6) {
          return;
        }
        if ((uint)pSVar5->max_length <= uVar6) {
label_181e628ca:
          ThrowIndexOutOfRangeException();
        }
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) break;
        pUVar3 = (renderers->fields)._items;
        item = (UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar6];
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) break;
        uVar2 = (renderers->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (renderers->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) goto label_181e628ca;
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          uVar6 = uVar6 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          uVar6 = uVar6 + 1;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderersIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x181e626a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6273d: nop dword ptr [rax]
// asm:   0x181e627b5: mov rsi, qword ptr [rsp + 0x30]

void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *item;
  MethodInfo *pMVar4;
  bool bVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184344f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f6c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((obj == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar6 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                           (obj,true,(MethodInfo_6F5750 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0
                           ), pUVar6 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
label_181e627cb:
      ThrowNullReferenceException();
    }
    uVar7 = 0;
    while (pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add,
          (int)uVar7 < (int)pUVar6->max_length) {
      if ((uint)pUVar6->max_length <= uVar7) {
label_181e627c5:
        ThrowIndexOutOfRangeException();
      }
      if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181e627cb;
      pUVar3 = (renderers->fields)._items;
      item = (&pUVar6->m_Items[0].klass)[(int)uVar7];
      piVar1 = &(renderers->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181e627cb;
      uVar2 = (renderers->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (renderers->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) goto label_181e627c5;
        pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
        uVar7 = uVar7 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar7 = uVar7 + 1;
      }
    }
  }
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersContainingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x181e62990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e629ff: nop 

void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *pSVar2;
  System_String_o *__this_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_184344f6d = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (obj,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Object_o *)0x0) break;
        __this_00 = UnityEngine_Object__get_name
                              ((UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) break;
        bVar1 = System_String__Contains(__this_00,name,(MethodInfo *)0x0);
        if (bVar1) {
          if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) break;
          il2cpp_runtime_helper_180012890(renderers);
        }
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersMatchingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x181e62a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e62aef: nop 

void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *pSVar2;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_184344f6e = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (obj,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar3 = 0;
      do {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Object_o *)0x0) break;
        a = UnityEngine_Object__get_name
                      ((UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
        if (bVar1) {
          if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) break;
          il2cpp_runtime_helper_180012890(renderers);
        }
        uVar3 = uVar3 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPartIds
// il2cpp: System_Collections_Generic_List_int__o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds (CustomSkins_BaseCustomSkinLoader_o* __this, System_Type_o* t, const MethodInfo* method);
// 0x181e62ba0

System_Collections_Generic_List_int__o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
          (CustomSkins_BaseCustomSkinLoader_o *__this,System_Type_o *t,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    Il2CppMethodInitialized_184344f6f = '\x01';
  }
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(t,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_6B7500 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  pSVar1 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  return (System_Collections_Generic_List_int__o *)pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$OnDestroy
// il2cpp: void CustomSkins_BaseCustomSkinLoader__OnDestroy (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e62ca0

void CustomSkins_BaseCustomSkinLoader__OnDestroy
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344f70 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  CustomSkins_TextureDownloader__ResetConcurrentDownloads((MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___ctor (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x180528540

void
CustomSkins_BaseCustomSkinLoader___ctor(CustomSkins_BaseCustomSkinLoader_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___cctor (const MethodInfo* method);
// 0x181e62ce0

void CustomSkins_BaseCustomSkinLoader___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"transparent");
    Il2CppMethodInitialized_184344f71 = '\x01';
  }
  TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL = "transparent";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL,"transparent");
  return;
}


