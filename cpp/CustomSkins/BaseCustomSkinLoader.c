// Type: CustomSkins.BaseCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/BaseCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs
// --------------------------------

// CustomSkins.BaseCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_BaseCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595f1d0

bool CustomSkins_BaseCustomSkinLoader__get_AllowLocalFileTextures
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  return false;
}


// CustomSkins.BaseCustomSkinLoader$$Awake
// il2cpp: void CustomSkins_BaseCustomSkinLoader__Awake (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595f1e0

void CustomSkins_BaseCustomSkinLoader__Awake(CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x595f200

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
// 0x595ec20

System_String_o *
CustomSkins_BaseCustomSkinLoader__GetRendererId
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str1;
  int32_t local_c;
  
  local_c = partId;
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_unknown.methodPtr)();
  str1 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$AddRendererIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x595f240

void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_Renderer_o *item;
  
  if (Il2CppMethodInitialized_0754590b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754590b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (obj != (UnityEngine_GameObject_o *)0x0) {
      item = UnityEngine_GameObject__GetComponentInChildren_object_
                       (obj,(MethodInfo_353B8D0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
      pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
      if (renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (renderers->fields)._items;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          uVar2 = (renderers->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (renderers->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderers
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderers (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x595eb10

void CustomSkins_BaseCustomSkinLoader__AddAllRenderers
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  int iVar5;
  System_Object_array *pSVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_0754590c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_0754590c = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (obj,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar6 != (System_Object_array *)0x0) {
      iVar5 = (int)pSVar6->max_length;
      if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
        if (0 < iVar5) goto label_0595ec07;
      }
      else if (0 < iVar5) {
        uVar7 = pSVar6->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
          if (uVar7 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          item = (UnityEngine_Renderer_o *)pSVar6->m_Items[uVar8];
          piVar1 = &(renderers->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (renderers->fields)._items;
          if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_0595ec07;
          uVar2 = (renderers->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (renderers->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
      return;
    }
  }
label_0595ec07:
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderersIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x595f340

void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int iVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_0754590d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754590d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if ((obj == (UnityEngine_GameObject_o *)0x0) ||
     (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         (obj,true,(MethodInfo_353C0B0 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218)
     , pSVar7 == (System_Object_array *)0x0)) {
label_0595f477:
    ThrowNullReferenceException();
  }
  iVar6 = (int)pSVar7->max_length;
  if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
    if (0 < iVar6) goto label_0595f477;
  }
  else if (0 < iVar6) {
    uVar8 = pSVar7->max_length & 0xffffffff;
    uVar9 = 0;
    do {
      pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
      if (uVar8 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      item = (UnityEngine_Renderer_o *)pSVar7->m_Items[uVar9];
      piVar1 = &(renderers->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (renderers->fields)._items;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_0595f477;
      uVar2 = (renderers->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (renderers->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      uVar9 = uVar9 + 1;
      uVar2 = (uint)pSVar7->max_length;
      uVar8 = (ulong)uVar2;
    } while ((long)uVar9 < (long)(int)uVar2);
  }
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersContainingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x595f490

void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Renderer_array *pUVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  System_String_o *pSVar7;
  uint uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_0754590e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_0754590e = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (obj,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
        if (0 < (int)uVar5) {
          lVar9 = 0;
          do {
            if (uVar5 <= (uint)lVar9) goto label_0595f61b;
            if ((UnityEngine_Object_o *)pSVar6->m_Items[lVar9] == (UnityEngine_Object_o *)0x0)
            goto label_0595f616;
            pSVar7 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pSVar6->m_Items[lVar9],(MethodInfo *)0x0);
            if (pSVar7 == (System_String_o *)0x0) goto label_0595f616;
            bVar4 = System_String__Contains(pSVar7,name,(MethodInfo *)0x0);
            if (bVar4) goto label_0595f616;
            uVar5 = (uint)pSVar6->max_length;
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar5);
        }
      }
      else if (0 < (int)uVar5) {
        uVar8 = 0;
        do {
          if (uVar5 <= uVar8) {
label_0595f61b:
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar8];
          if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_0595f616;
          pSVar7 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) goto label_0595f616;
          bVar4 = System_String__Contains(pSVar7,name,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
          if (bVar4) {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (renderers->fields)._items;
            if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_0595f616;
            uVar5 = (renderers->fields)._size;
            if (uVar5 < (uint)pUVar2->max_length) {
              (renderers->fields)._size = uVar5 + 1;
              pUVar2->m_Items[(int)uVar5] = (UnityEngine_Renderer_o *)__this_00;
              Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)__this_00,
                         (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar8 < (int)uVar5);
      }
      return;
    }
  }
label_0595f616:
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersMatchingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x595f620

void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Renderer_array *pUVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  System_String_o *pSVar7;
  uint uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_0754590f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_0754590f = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (obj,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
        if (0 < (int)uVar5) {
          lVar9 = 0;
          do {
            if (uVar5 <= (uint)lVar9) goto label_0595f796;
            if ((UnityEngine_Object_o *)pSVar6->m_Items[lVar9] == (UnityEngine_Object_o *)0x0)
            goto label_0595f791;
            pSVar7 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pSVar6->m_Items[lVar9],(MethodInfo *)0x0);
            bVar4 = System_String__op_Equality(pSVar7,name,(MethodInfo *)0x0);
            if (bVar4) goto label_0595f791;
            uVar5 = (uint)pSVar6->max_length;
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar5);
        }
      }
      else if (0 < (int)uVar5) {
        uVar8 = 0;
        do {
          if (uVar5 <= uVar8) {
label_0595f796:
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar8];
          if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_0595f791;
          pSVar7 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality(pSVar7,name,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
          if (bVar4) {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (renderers->fields)._items;
            if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_0595f791;
            uVar5 = (renderers->fields)._size;
            if (uVar5 < (uint)pUVar2->max_length) {
              (renderers->fields)._size = uVar5 + 1;
              pUVar2->m_Items[(int)uVar5] = (UnityEngine_Renderer_o *)__this_00;
              Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)__this_00,
                         (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar8 < (int)uVar5);
      }
      return;
    }
  }
label_0595f791:
  ThrowNullReferenceException();
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPartIds
// il2cpp: System_Collections_Generic_List_int__o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds (CustomSkins_BaseCustomSkinLoader_o* __this, System_Type_o* t, const MethodInfo* method);
// 0x595f7a0

System_Collections_Generic_List_int__o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
          (CustomSkins_BaseCustomSkinLoader_o *__this,System_Type_o *t,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    Il2CppMethodInitialized_07545910 = '\x01';
  }
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(t,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_
                        (source,(MethodInfo_34E07A0 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  pSVar1 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  return (System_Collections_Generic_List_int__o *)pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$OnDestroy
// il2cpp: void CustomSkins_BaseCustomSkinLoader__OnDestroy (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595f820
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595f83d: cmp byte ptr [rip + 0x1be6111], 0
// asm:   0x595f844: je 0x595f896

void CustomSkins_BaseCustomSkinLoader__OnDestroy
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545911 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  if (Il2CppMethodInitialized_07545955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545955 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = 0;
    return;
  }
  *(undefined4 *)((long)((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader)->static_fields + 0x18) = 0;
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___ctor (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595edb0

void CustomSkins_BaseCustomSkinLoader___ctor(CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___cctor (const MethodInfo* method);
// 0x595f940

void CustomSkins_BaseCustomSkinLoader___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"transparent");
    Il2CppMethodInitialized_07545912 = '\x01';
  }
  TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL = "transparent";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL);
  return;
}


