// Type: CustomSkins.BaseCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.BaseCustomSkinLoader$$Awake
// il2cpp: void CustomSkins_BaseCustomSkinLoader__Awake (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x423f550

void CustomSkins_BaseCustomSkinLoader__Awake
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._owner,pUVar1);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x423f570

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinPart_GetCustomSkinPart);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.BaseCustomSkinLoader$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinLoader__GetRendererId (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x423efd0

System_String_o *
CustomSkins_BaseCustomSkinLoader__GetRendererId
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str1;
  int32_t local_c;
  
  local_c = partId;
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_unknown.methodPtr)();
  str1 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$AddRendererIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x423f5b0

void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_Renderer_o *item;
  
  if (DAT_0570519b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570519b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (obj != (UnityEngine_GameObject_o *)0x0) {
      item = (UnityEngine_Renderer_o *)
             UnityEngine_GameObject__GetComponentInChildren<object>(obj,MethodInfo_Renderer_GetComponentInChildren_Renderer);
      lVar4 = MethodInfo_Void_Add;
      if (renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (renderers->fields)._items;
        if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
          uVar2 = (renderers->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (renderers->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderers
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderers (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x423eeb0

void CustomSkins_BaseCustomSkinLoader__AddAllRenderers
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  int iVar5;
  System_Object_array *pSVar6;
  ulong uVar7;
  
  if (DAT_0570519c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570519c = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>(obj,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
     pSVar6 != (System_Object_array *)0x0)) {
    iVar5 = (int)pSVar6->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < iVar5) goto LAB_0423efb9;
    }
    else if (0 < iVar5) {
      uVar7 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          lVar4 = MethodInfo_Void_Add;
          item = (UnityEngine_Renderer_o *)pSVar6->m_Items[uVar7];
          piVar1 = &(renderers->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (renderers->fields)._items;
          if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto LAB_0423efb9;
          uVar2 = (renderers->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (renderers->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pSVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return;
          }
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return;
  }
LAB_0423efb9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderersIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x423f6b0

void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  int iVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  
  if (DAT_0570519d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570519d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if ((obj == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren<object>(obj,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
       pSVar7 == (System_Object_array *)0x0)) {
LAB_0423f7f9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar6 = (int)pSVar7->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < iVar6) goto LAB_0423f7f9;
    }
    else if (0 < iVar6) {
      uVar8 = 0;
      if ((pSVar7->max_length & 0xffffffff) != 0) {
        do {
          lVar4 = MethodInfo_Void_Add;
          item = (UnityEngine_Renderer_o *)pSVar7->m_Items[uVar8];
          piVar1 = &(renderers->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (renderers->fields)._items;
          if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto LAB_0423f7f9;
          uVar2 = (renderers->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (renderers->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((long)(int)uVar2 <= (long)uVar8) {
            return;
          }
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersContainingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x423f810

void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Renderer_array *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  uint uVar7;
  long lVar8;
  
  if (DAT_0570519e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570519e = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>(obj,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < (int)uVar4) {
        lVar8 = 0;
        do {
          if (uVar4 <= (uint)lVar8) goto LAB_0423f9ac;
          if ((((UnityEngine_Object_o *)pSVar5->m_Items[lVar8] == (UnityEngine_Object_o *)0x0) ||
              (pSVar6 = UnityEngine_Object__get_name
                                  ((UnityEngine_Object_o *)pSVar5->m_Items[lVar8],(MethodInfo *)0x0)
              , pSVar6 == (System_String_o *)0x0)) ||
             (bVar3 = System_String__Contains(pSVar6,name,(MethodInfo *)0x0), (char)bVar3 != '\0'))
          goto LAB_0423f9a7;
          uVar4 = (uint)pSVar5->max_length;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar4);
      }
    }
    else if (0 < (int)uVar4) {
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          __this_00 = (UnityEngine_Object_o *)pSVar5->m_Items[(int)uVar7];
          if ((__this_00 == (UnityEngine_Object_o *)0x0) ||
             (pSVar6 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
             pSVar6 == (System_String_o *)0x0)) goto LAB_0423f9a7;
          bVar3 = System_String__Contains(pSVar6,name,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar3 == '\0') {
LAB_0423f8ba:
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          else {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (renderers->fields)._items;
            if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_0423f9a7;
            uVar4 = (renderers->fields)._size;
            if ((uint)pUVar2->max_length <= uVar4) {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              goto LAB_0423f8ba;
            }
            (renderers->fields)._size = uVar4 + 1;
            pUVar2->m_Items[(int)uVar4] = (UnityEngine_Renderer_o *)__this_00;
            il2cpp_runtime_glue(pUVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
LAB_0423f9ac:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return;
  }
LAB_0423f9a7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersMatchingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x423f9c0

void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Renderer_array *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  uint uVar7;
  long lVar8;
  
  if (DAT_0570519f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570519f = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>(obj,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < (int)uVar4) {
        lVar8 = 0;
        do {
          if (uVar4 <= (uint)lVar8) goto LAB_0423fb47;
          if ((UnityEngine_Object_o *)pSVar5->m_Items[lVar8] == (UnityEngine_Object_o *)0x0)
          goto LAB_0423fb42;
          pSVar6 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar5->m_Items[lVar8],(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') goto LAB_0423fb42;
          uVar4 = (uint)pSVar5->max_length;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar4);
      }
    }
    else if (0 < (int)uVar4) {
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          __this_00 = (UnityEngine_Object_o *)pSVar5->m_Items[(int)uVar7];
          if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_0423fb42;
          pSVar6 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar3 == '\0') {
LAB_0423fa6a:
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          else {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (renderers->fields)._items;
            if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto LAB_0423fb42;
            uVar4 = (renderers->fields)._size;
            if ((uint)pUVar2->max_length <= uVar4) {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              goto LAB_0423fa6a;
            }
            (renderers->fields)._size = uVar4 + 1;
            pUVar2->m_Items[(int)uVar4] = (UnityEngine_Renderer_o *)__this_00;
            il2cpp_runtime_glue(pUVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
LAB_0423fb47:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return;
  }
LAB_0423fb42:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPartIds
// il2cpp: System_Collections_Generic_List_int__o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds (CustomSkins_BaseCustomSkinLoader_o* __this, System_Type_o* t, const MethodInfo* method);
// 0x423fb50

System_Collections_Generic_List_int__o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
          (CustomSkins_BaseCustomSkinLoader_o *__this,System_Type_o *t,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (DAT_057051a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32__ToList_Int32);
    DAT_057051a0 = '\x01';
  }
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(t,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast<int>(source,MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
  pSVar1 = System_Linq_Enumerable__ToList<int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32__ToList_Int32);
  return (System_Collections_Generic_List_int__o *)pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$OnDestroy
// il2cpp: void CustomSkins_BaseCustomSkinLoader__OnDestroy (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x423fbd0

void CustomSkins_BaseCustomSkinLoader__OnDestroy
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057051e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051e9 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
    return;
  }
  il2cpp_init_class();
  *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___ctor (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x423f160

void CustomSkins_BaseCustomSkinLoader___ctor
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___cctor (const MethodInfo* method);
// 0x423fcf0

void CustomSkins_BaseCustomSkinLoader___cctor(MethodInfo *method)

{
  if (DAT_057051a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_init_method_metadata(&"transparent");
    DAT_057051a2 = '\x01';
  }
  **(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8) = "transparent";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BaseCustomSkinLoader + 0xb8),"transparent");
  return;
}


