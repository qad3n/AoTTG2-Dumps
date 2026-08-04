// Type: CustomSkins.BaseCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/BaseCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/BaseCustomSkinLoader.cs
// --------------------------------

// CustomSkins.BaseCustomSkinLoader$$Awake
// il2cpp: void CustomSkins_BaseCustomSkinLoader__Awake (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4573ba0

void CustomSkins_BaseCustomSkinLoader__Awake(CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,pUVar1);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4573bc0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_BaseCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  InvokerMethod pIVar3;
  bool_conflict bVar4;
  uint uVar5;
  undefined8 uVar6;
  System_NotImplementedException_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  undefined4 extraout_var;
  Il2CppObject *item;
  CustomSkins_BaseCustomSkinPart_o *pCVar7;
  CustomSkins_BaseCustomSkinPart_o *extraout_RAX;
  undefined4 extraout_var_00;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo_255AB00 *in_RCX;
  MethodInfo_255AB00 *pMVar10;
  MethodInfo_255AB00 *b;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  MethodInfo_255A300 *__this_04;
  MethodInfo_255AB00 *pMVar14;
  MethodInfo_255AB00 *__this_05;
  MethodInfo_255AB00 *pMVar15;
  
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCustomSkinPart_GetCustomSkinPart);
  il2cpp_runtime_helper_022b2b10(__this_00);
  if (g_data_057af08e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af08e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = (MethodInfo_255A300 *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (CustomSkins_BaseCustomSkinPart_o *)CONCAT44(extraout_var,bVar4);
  }
  if ((x != (UnityEngine_Object_o *)0x0) &&
     (__this_04 = MethodInfo_Renderer_GetComponentInChildren_Renderer,
     item = UnityEngine_GameObject__GetComponentInChildren_object_((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponentInChildren_Renderer)
     , pMVar14 = MethodInfo_Void_Add, __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_01->fields)._items;
    in_RCX = (MethodInfo_255AB00 *)0x0;
    if (pSVar8 != (System_Object_array *)0x0) {
      uVar5 = (__this_01->fields)._size;
      if (uVar5 < (uint)pSVar8->max_length) {
        (__this_01->fields)._size = uVar5 + 1;
        pSVar8->m_Items[(int)uVar5] = item;
        pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5,item);
        return pCVar7;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,item,(MethodInfo_362C220 *)pMVar14->klass->rgctx_data[0xe].method);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af090 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af090 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo_255AB00 *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (CustomSkins_BaseCustomSkinPart_o *)CONCAT44(extraout_var_00,bVar4);
  }
  if ((x_00 == (UnityEngine_Object_o *)0x0) ||
     (pMVar14 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)x_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer), pSVar8 == (System_Object_array *)0x0)
     ) {
label_04573e49:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)pSVar8->max_length;
    if (__this_04 == (MethodInfo_255A300 *)0x0) {
      if ((int)pCVar7 < 1) {
        return pCVar7;
      }
      goto label_04573e49;
    }
    if ((int)pCVar7 < 1) {
      return pCVar7;
    }
    uVar12 = 0;
    if (((ulong)pCVar7 & 0xffffffff) != 0) {
      do {
        in_RCX = MethodInfo_Void_Add;
        pMVar14 = (MethodInfo_255AB00 *)pSVar8->m_Items[uVar12];
        piVar2 = (int *)((long)&__this_04->name + 4);
        *piVar2 = *piVar2 + 1;
        pIVar3 = __this_04->invoker_method;
        if (pIVar3 == (InvokerMethod)0x0) goto label_04573e49;
        uVar5 = *(uint *)&__this_04->name;
        if (uVar5 < *(uint *)(pIVar3 + 0x18)) {
          *(uint *)&__this_04->name = uVar5 + 1;
          *(MethodInfo_255AB00 **)(pIVar3 + (long)(int)uVar5 * 8 + 0x20) = pMVar14;
          il2cpp_runtime_helper_022b4080(pIVar3 + (long)(int)uVar5 * 8 + 0x20);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pMVar14,
                     (MethodInfo_362C220 *)in_RCX->klass->rgctx_data[0xe].method);
        }
        uVar12 = uVar12 + 1;
        uVar5 = (uint)pSVar8->max_length;
        in_RCX = (MethodInfo_255AB00 *)(long)(int)uVar5;
        if ((long)in_RCX <= (long)uVar12) {
          return (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
        }
      } while (uVar12 < uVar5);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  b = in_RCX;
  pMVar15 = pMVar14;
  if (g_data_057af091 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af091 = '\x01';
  }
  if ((__this_02 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_05 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_02,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pMVar15 = __this_05, pSVar8 == (System_Object_array *)0x0)) {
label_04573ff7:
    __this_05 = pMVar15;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar5 = (uint)pSVar8->max_length;
    pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
    if (pMVar14 == (MethodInfo_255AB00 *)0x0) {
      if (0 < (int)uVar5) {
        lVar13 = 0;
        do {
          if ((uint)pCVar7 <= (uint)lVar13) goto label_04573ffc;
          pMVar15 = __this_05;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04573ff7;
          pMVar15 = (MethodInfo_255AB00 *)0x0;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          if ((pSVar9 == (System_String_o *)0x0) ||
             (__this_05 = in_RCX,
             bVar4 = System_String__Contains(pSVar9,(System_String_o *)in_RCX,(MethodInfo *)0x0),
             pMVar15 = __this_05, (char)bVar4 != '\0')) goto label_04573ff7;
          uVar5 = (uint)pSVar8->max_length;
          pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar5);
      }
      return pCVar7;
    }
    if ((int)uVar5 < 1) {
      return pCVar7;
    }
    uVar11 = 0;
    if (uVar5 != 0) {
      do {
        __this_05 = (MethodInfo_255AB00 *)pSVar8->m_Items[(int)uVar11];
        if (__this_05 == (MethodInfo_255AB00 *)0x0) goto label_04573ff7;
        pMVar15 = (MethodInfo_255AB00 *)0x0;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_05,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_04573ff7;
        pMVar15 = in_RCX;
        bVar4 = System_String__Contains(pSVar9,(System_String_o *)in_RCX,(MethodInfo *)0x0);
        pMVar10 = MethodInfo_Void_Add;
        if ((char)bVar4 == '\0') {
label_04573f0a:
          __this_05 = pMVar15;
          uVar5 = (uint)pSVar8->max_length;
          if ((int)uVar5 <= (int)(uVar11 + 1)) {
            return (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
          }
        }
        else {
          piVar2 = (int *)((long)&pMVar14->name + 4);
          *piVar2 = *piVar2 + 1;
          pIVar3 = pMVar14->invoker_method;
          b = pMVar10;
          if (pIVar3 == (InvokerMethod)0x0) goto label_04573ff7;
          uVar5 = *(uint *)&pMVar14->name;
          if (*(uint *)(pIVar3 + 0x18) <= uVar5) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar14,(Il2CppObject *)__this_05,
                       (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
            b = pMVar10;
            pMVar15 = __this_05;
            goto label_04573f0a;
          }
          b = (MethodInfo_255AB00 *)(ulong)(uVar5 + 1);
          *(uint *)&pMVar14->name = uVar5 + 1;
          *(MethodInfo_255AB00 **)(pIVar3 + (long)(int)uVar5 * 8 + 0x20) = __this_05;
          il2cpp_runtime_helper_022b4080(pIVar3 + (long)(int)uVar5 * 8 + 0x20);
          uVar5 = (uint)pSVar8->max_length;
          if ((int)uVar5 <= (int)(uVar11 + 1)) {
            return (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
          }
        }
        uVar11 = uVar11 + 1;
        pMVar15 = __this_05;
      } while (uVar11 < uVar5);
    }
  }
label_04573ffc:
  il2cpp_runtime_helper_022b2ca0();
  pMVar14 = __this_05;
  if (g_data_057af092 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af092 = '\x01';
  }
  if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
     (pMVar15 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_03,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pMVar14 = pMVar15, pSVar8 != (System_Object_array *)0x0)) {
    uVar5 = (uint)pSVar8->max_length;
    pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
    if (__this_05 == (MethodInfo_255AB00 *)0x0) {
      if (0 < (int)uVar5) {
        lVar13 = 0;
        do {
          if ((uint)pCVar7 <= (uint)lVar13) goto label_04574197;
          pMVar14 = pMVar15;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          pMVar15 = b;
          bVar4 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar14 = pMVar15;
          if ((char)bVar4 != '\0') goto label_04574192;
          uVar5 = (uint)pSVar8->max_length;
          pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar5);
      }
    }
    else if (0 < (int)uVar5) {
      uVar11 = 0;
      if (uVar5 != 0) {
        do {
          pMVar15 = (MethodInfo_255AB00 *)pSVar8->m_Items[(int)uVar11];
          if (pMVar15 == (MethodInfo_255AB00 *)0x0) goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0);
          pMVar14 = b;
          bVar4 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar10 = MethodInfo_Void_Add;
          if ((char)bVar4 == '\0') {
label_045740ba:
            pMVar15 = pMVar14;
            uVar5 = (uint)pSVar8->max_length;
            if ((int)uVar5 <= (int)(uVar11 + 1)) {
              return (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
            }
          }
          else {
            piVar2 = (int *)((long)&__this_05->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar3 = __this_05->invoker_method;
            if (pIVar3 == (InvokerMethod)0x0) goto label_04574192;
            uVar5 = *(uint *)&__this_05->name;
            if (*(uint *)(pIVar3 + 0x18) <= uVar5) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pMVar15,
                         (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
              pMVar14 = pMVar15;
              goto label_045740ba;
            }
            *(uint *)&__this_05->name = uVar5 + 1;
            *(MethodInfo_255AB00 **)(pIVar3 + (long)(int)uVar5 * 8 + 0x20) = pMVar15;
            il2cpp_runtime_helper_022b4080(pIVar3 + (long)(int)uVar5 * 8 + 0x20);
            uVar5 = (uint)pSVar8->max_length;
            if ((int)uVar5 <= (int)(uVar11 + 1)) {
              return (CustomSkins_BaseCustomSkinPart_o *)(ulong)uVar5;
            }
          }
          uVar11 = uVar11 + 1;
          pMVar14 = pMVar15;
        } while (uVar11 < uVar5);
      }
      goto label_04574197;
    }
    return pCVar7;
  }
label_04574192:
  pMVar15 = pMVar14;
  il2cpp_runtime_helper_022b2c90();
label_04574197:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)
           System_Enum__GetValues((System_Type_o *)pMVar15,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  pCVar7 = (CustomSkins_BaseCustomSkinPart_o *)
           System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return pCVar7;
}


// CustomSkins.BaseCustomSkinLoader$$GetRendererId
// il2cpp: System_String_o* CustomSkins_BaseCustomSkinLoader__GetRendererId (CustomSkins_BaseCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4573960

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
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$AddRendererIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x4573c00

void CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  UnityEngine_Renderer_array *pUVar3;
  InvokerMethod pIVar4;
  bool_conflict bVar5;
  int iVar6;
  uint uVar7;
  UnityEngine_Renderer_o *item;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo *pMVar10;
  MethodInfo *b;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  MethodInfo_255A300 *__this_02;
  MethodInfo *pMVar14;
  MethodInfo *__this_03;
  MethodInfo *pMVar15;
  
  if (g_data_057af08e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af08e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (MethodInfo_255A300 *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (__this_02 = MethodInfo_Renderer_GetComponentInChildren_Renderer,
     item = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponentInChildren_object_(obj,MethodInfo_Renderer_GetComponentInChildren_Renderer)
     , pMVar14 = MethodInfo_Void_Add, renderers != (System_Collections_Generic_List_Renderer__o *)0x0)) {
    piVar1 = &(renderers->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (renderers->fields)._items;
    method = (MethodInfo *)0x0;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar7 = (renderers->fields)._size;
      if (uVar7 < (uint)pUVar3->max_length) {
        (renderers->fields)._size = uVar7 + 1;
        pUVar3->m_Items[(int)uVar7] = item;
        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar7,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                 (MethodInfo_362C220 *)pMVar14->klass->rgctx_data[0xe].method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af090 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af090 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if ((x == (UnityEngine_Object_o *)0x0) ||
     (pMVar14 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)x,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pSVar8 == (System_Object_array *)0x0)) {
label_04573e49:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar6 = (int)pSVar8->max_length;
    if (__this_02 == (MethodInfo_255A300 *)0x0) {
      if (iVar6 < 1) {
        return;
      }
      goto label_04573e49;
    }
    if (iVar6 < 1) {
      return;
    }
    uVar12 = 0;
    if ((pSVar8->max_length & 0xffffffff) != 0) {
      do {
        method = MethodInfo_Void_Add;
        pMVar14 = (MethodInfo *)pSVar8->m_Items[uVar12];
        piVar2 = (int *)((long)&__this_02->name + 4);
        *piVar2 = *piVar2 + 1;
        pIVar4 = __this_02->invoker_method;
        if (pIVar4 == (InvokerMethod)0x0) goto label_04573e49;
        uVar7 = *(uint *)&__this_02->name;
        if (uVar7 < *(uint *)(pIVar4 + 0x18)) {
          *(uint *)&__this_02->name = uVar7 + 1;
          *(MethodInfo **)(pIVar4 + (long)(int)uVar7 * 8 + 0x20) = pMVar14;
          il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar7 * 8 + 0x20);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pMVar14,
                     (MethodInfo_362C220 *)method->klass->rgctx_data[0xe].method);
        }
        uVar12 = uVar12 + 1;
        uVar7 = (uint)pSVar8->max_length;
        method = (MethodInfo *)(long)(int)uVar7;
        if ((long)method <= (long)uVar12) {
          return;
        }
      } while (uVar12 < uVar7);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  b = method;
  pMVar15 = pMVar14;
  if (g_data_057af091 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af091 = '\x01';
  }
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_03 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        (__this_00,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer), pMVar15 = __this_03,
     pSVar8 == (System_Object_array *)0x0)) {
label_04573ff7:
    __this_03 = pMVar15;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar7 = (uint)pSVar8->max_length;
    if (pMVar14 == (MethodInfo *)0x0) {
      if (0 < (int)uVar7) {
        lVar13 = 0;
        do {
          if (uVar7 <= (uint)lVar13) goto label_04573ffc;
          pMVar15 = __this_03;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04573ff7;
          pMVar15 = (MethodInfo *)0x0;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          if ((pSVar9 == (System_String_o *)0x0) ||
             (__this_03 = method,
             bVar5 = System_String__Contains(pSVar9,(System_String_o *)method,(MethodInfo *)0x0),
             pMVar15 = __this_03, (char)bVar5 != '\0')) goto label_04573ff7;
          uVar7 = (uint)pSVar8->max_length;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar7);
      }
      return;
    }
    if ((int)uVar7 < 1) {
      return;
    }
    uVar11 = 0;
    if (uVar7 != 0) {
      do {
        __this_03 = (MethodInfo *)pSVar8->m_Items[(int)uVar11];
        if (__this_03 == (MethodInfo *)0x0) goto label_04573ff7;
        pMVar15 = (MethodInfo *)0x0;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_04573ff7;
        pMVar15 = method;
        bVar5 = System_String__Contains(pSVar9,(System_String_o *)method,(MethodInfo *)0x0);
        pMVar10 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
label_04573f0a:
          __this_03 = pMVar15;
          uVar7 = (uint)pSVar8->max_length;
          if ((int)uVar7 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        else {
          piVar2 = (int *)((long)&pMVar14->name + 4);
          *piVar2 = *piVar2 + 1;
          pIVar4 = pMVar14->invoker_method;
          b = pMVar10;
          if (pIVar4 == (InvokerMethod)0x0) goto label_04573ff7;
          uVar7 = *(uint *)&pMVar14->name;
          if (*(uint *)(pIVar4 + 0x18) <= uVar7) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar14,(Il2CppObject *)__this_03,
                       (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
            b = pMVar10;
            pMVar15 = __this_03;
            goto label_04573f0a;
          }
          b = (MethodInfo *)(ulong)(uVar7 + 1);
          *(uint *)&pMVar14->name = uVar7 + 1;
          *(MethodInfo **)(pIVar4 + (long)(int)uVar7 * 8 + 0x20) = __this_03;
          il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar7 * 8 + 0x20);
          uVar7 = (uint)pSVar8->max_length;
          if ((int)uVar7 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        uVar11 = uVar11 + 1;
        pMVar15 = __this_03;
      } while (uVar11 < uVar7);
    }
  }
label_04573ffc:
  il2cpp_runtime_helper_022b2ca0();
  pMVar14 = __this_03;
  if (g_data_057af092 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af092 = '\x01';
  }
  if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
     (pMVar15 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        (__this_01,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer), pMVar14 = pMVar15,
     pSVar8 != (System_Object_array *)0x0)) {
    uVar7 = (uint)pSVar8->max_length;
    if (__this_03 == (MethodInfo *)0x0) {
      if (0 < (int)uVar7) {
        lVar13 = 0;
        do {
          if (uVar7 <= (uint)lVar13) goto label_04574197;
          pMVar14 = pMVar15;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          pMVar15 = b;
          bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar14 = pMVar15;
          if ((char)bVar5 != '\0') goto label_04574192;
          uVar7 = (uint)pSVar8->max_length;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar7);
      }
    }
    else if (0 < (int)uVar7) {
      uVar11 = 0;
      if (uVar7 != 0) {
        do {
          pMVar15 = (MethodInfo *)pSVar8->m_Items[(int)uVar11];
          if (pMVar15 == (MethodInfo *)0x0) goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0);
          pMVar14 = b;
          bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar10 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') {
label_045740ba:
            pMVar15 = pMVar14;
            uVar7 = (uint)pSVar8->max_length;
            if ((int)uVar7 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          else {
            piVar2 = (int *)((long)&__this_03->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar4 = __this_03->invoker_method;
            if (pIVar4 == (InvokerMethod)0x0) goto label_04574192;
            uVar7 = *(uint *)&__this_03->name;
            if (*(uint *)(pIVar4 + 0x18) <= uVar7) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pMVar15,
                         (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
              pMVar14 = pMVar15;
              goto label_045740ba;
            }
            *(uint *)&__this_03->name = uVar7 + 1;
            *(MethodInfo **)(pIVar4 + (long)(int)uVar7 * 8 + 0x20) = pMVar15;
            il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar7 * 8 + 0x20);
            uVar7 = (uint)pSVar8->max_length;
            if ((int)uVar7 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          uVar11 = uVar11 + 1;
          pMVar14 = pMVar15;
        } while (uVar11 < uVar7);
      }
      goto label_04574197;
    }
    return;
  }
label_04574192:
  pMVar15 = pMVar14;
  il2cpp_runtime_helper_022b2c90();
label_04574197:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)
           System_Enum__GetValues((System_Type_o *)pMVar15,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  System_Linq_Enumerable__ToList_int_
            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderers
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderers (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x4573840

void CustomSkins_BaseCustomSkinLoader__AddAllRenderers
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  int iVar5;
  System_Object_array *pSVar6;
  System_String_o *str0;
  System_String_o *str1;
  ulong unaff_RBX;
  undefined4 uVar7;
  MethodInfo_255AB00 *item;
  long *plVar8;
  undefined4 uStack_34;
  ulong uStack_30;
  
  item = (MethodInfo_255AB00 *)renderers;
  if (g_data_057af08f == '\0') {
    uStack_30 = 0x4573863;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    plVar8 = &MethodInfo_Void_Add;
    uStack_30 = 0x457386f;
    il2cpp_runtime_helper_023445d0();
    g_data_057af08f = '\x01';
    __this = (CustomSkins_BaseCustomSkinLoader_o *)plVar8;
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    uStack_30 = 0x4573891;
    item = MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(obj,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    uVar7 = SUB84(item,0);
    __this = (CustomSkins_BaseCustomSkinLoader_o *)obj;
    if (pSVar6 != (System_Object_array *)0x0) {
      iVar5 = (int)pSVar6->max_length;
      if (renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
        if (iVar5 < 1) {
          return;
        }
        unaff_RBX = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            lVar4 = MethodInfo_Void_Add;
            item = (MethodInfo_255AB00 *)pSVar6->m_Items[unaff_RBX];
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (renderers->fields)._items;
            __this = (CustomSkins_BaseCustomSkinLoader_o *)obj;
            if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_04573949;
            uVar2 = (renderers->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (renderers->fields)._size = uVar2 + 1;
              obj = (UnityEngine_GameObject_o *)(pUVar3->m_Items + (int)uVar2);
              pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)item;
              uStack_30 = 0x4573937;
              il2cpp_runtime_helper_022b4080();
              uVar7 = SUB84(item,0);
            }
            else {
              uStack_30 = 0x45738e7;
              obj = (UnityEngine_GameObject_o *)renderers;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              uVar7 = SUB84(item,0);
            }
            unaff_RBX = unaff_RBX + 1;
            uVar2 = (uint)pSVar6->max_length;
            if ((long)(int)uVar2 <= (long)unaff_RBX) {
              return;
            }
          } while (unaff_RBX < uVar2);
        }
        goto label_0457394e;
      }
      if (iVar5 < 1) {
        return;
      }
    }
  }
label_04573949:
  obj = (UnityEngine_GameObject_o *)__this;
  uVar7 = SUB84(item,0);
  uStack_30 = 0x457394e;
  il2cpp_runtime_helper_022b2c90();
label_0457394e:
  uStack_30 = 0x4573953;
  il2cpp_runtime_helper_022b2ca0();
  uStack_34 = uVar7;
  uStack_30 = unaff_RBX;
  str0 = (System_String_o *)
         (*(((System_Collections_Generic_List_Renderer__o *)obj)->klass->vtable)._4_unknown.methodPtr)();
  str1 = System_Int32__ToString((int32_t)&uStack_34,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0(str0,str1,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddAllRenderersIfExists
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x4573d00

void CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  UnityEngine_Renderer_array *pUVar3;
  InvokerMethod pIVar4;
  bool_conflict bVar5;
  int iVar6;
  uint uVar7;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo *pMVar10;
  MethodInfo *b;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  MethodInfo *pMVar14;
  MethodInfo *__this_02;
  MethodInfo *pMVar15;
  
  if (g_data_057af090 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af090 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if ((obj == (UnityEngine_GameObject_o *)0x0) ||
     (pMVar14 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        (obj,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer), pSVar8 == (System_Object_array *)0x0)) {
label_04573e49:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar6 = (int)pSVar8->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (iVar6 < 1) {
        return;
      }
      goto label_04573e49;
    }
    if (iVar6 < 1) {
      return;
    }
    uVar12 = 0;
    if ((pSVar8->max_length & 0xffffffff) != 0) {
      do {
        method = MethodInfo_Void_Add;
        pMVar14 = (MethodInfo *)pSVar8->m_Items[uVar12];
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (renderers->fields)._items;
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_04573e49;
        uVar7 = (renderers->fields)._size;
        if (uVar7 < (uint)pUVar3->max_length) {
          (renderers->fields)._size = uVar7 + 1;
          pUVar3->m_Items[(int)uVar7] = (UnityEngine_Renderer_o *)pMVar14;
          il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)pMVar14,
                     (MethodInfo_362C220 *)method->klass->rgctx_data[0xe].method);
        }
        uVar12 = uVar12 + 1;
        uVar7 = (uint)pSVar8->max_length;
        method = (MethodInfo *)(long)(int)uVar7;
        if ((long)method <= (long)uVar12) {
          return;
        }
      } while (uVar12 < uVar7);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  b = method;
  pMVar15 = pMVar14;
  if (g_data_057af091 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af091 = '\x01';
  }
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_02 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        (__this_00,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer), pMVar15 = __this_02,
     pSVar8 == (System_Object_array *)0x0)) {
label_04573ff7:
    __this_02 = pMVar15;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar7 = (uint)pSVar8->max_length;
    if (pMVar14 == (MethodInfo *)0x0) {
      if (0 < (int)uVar7) {
        lVar13 = 0;
        do {
          if (uVar7 <= (uint)lVar13) goto label_04573ffc;
          pMVar15 = __this_02;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04573ff7;
          pMVar15 = (MethodInfo *)0x0;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          if ((pSVar9 == (System_String_o *)0x0) ||
             (__this_02 = method,
             bVar5 = System_String__Contains(pSVar9,(System_String_o *)method,(MethodInfo *)0x0),
             pMVar15 = __this_02, (char)bVar5 != '\0')) goto label_04573ff7;
          uVar7 = (uint)pSVar8->max_length;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar7);
      }
      return;
    }
    if ((int)uVar7 < 1) {
      return;
    }
    uVar11 = 0;
    if (uVar7 != 0) {
      do {
        __this_02 = (MethodInfo *)pSVar8->m_Items[(int)uVar11];
        if (__this_02 == (MethodInfo *)0x0) goto label_04573ff7;
        pMVar15 = (MethodInfo *)0x0;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_04573ff7;
        pMVar15 = method;
        bVar5 = System_String__Contains(pSVar9,(System_String_o *)method,(MethodInfo *)0x0);
        pMVar10 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
label_04573f0a:
          __this_02 = pMVar15;
          uVar7 = (uint)pSVar8->max_length;
          if ((int)uVar7 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        else {
          piVar2 = (int *)((long)&pMVar14->name + 4);
          *piVar2 = *piVar2 + 1;
          pIVar4 = pMVar14->invoker_method;
          b = pMVar10;
          if (pIVar4 == (InvokerMethod)0x0) goto label_04573ff7;
          uVar7 = *(uint *)&pMVar14->name;
          if (*(uint *)(pIVar4 + 0x18) <= uVar7) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar14,(Il2CppObject *)__this_02,
                       (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
            b = pMVar10;
            pMVar15 = __this_02;
            goto label_04573f0a;
          }
          b = (MethodInfo *)(ulong)(uVar7 + 1);
          *(uint *)&pMVar14->name = uVar7 + 1;
          *(MethodInfo **)(pIVar4 + (long)(int)uVar7 * 8 + 0x20) = __this_02;
          il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar7 * 8 + 0x20);
          uVar7 = (uint)pSVar8->max_length;
          if ((int)uVar7 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        uVar11 = uVar11 + 1;
        pMVar15 = __this_02;
      } while (uVar11 < uVar7);
    }
  }
label_04573ffc:
  il2cpp_runtime_helper_022b2ca0();
  pMVar14 = __this_02;
  if (g_data_057af092 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af092 = '\x01';
  }
  if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
     (pMVar15 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        (__this_01,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer), pMVar14 = pMVar15,
     pSVar8 != (System_Object_array *)0x0)) {
    uVar7 = (uint)pSVar8->max_length;
    if (__this_02 == (MethodInfo *)0x0) {
      if (0 < (int)uVar7) {
        lVar13 = 0;
        do {
          if (uVar7 <= (uint)lVar13) goto label_04574197;
          pMVar14 = pMVar15;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13] == (UnityEngine_Object_o *)0x0)
          goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar13],(MethodInfo *)0x0);
          pMVar15 = b;
          bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar14 = pMVar15;
          if ((char)bVar5 != '\0') goto label_04574192;
          uVar7 = (uint)pSVar8->max_length;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar7);
      }
    }
    else if (0 < (int)uVar7) {
      uVar11 = 0;
      if (uVar7 != 0) {
        do {
          pMVar15 = (MethodInfo *)pSVar8->m_Items[(int)uVar11];
          if (pMVar15 == (MethodInfo *)0x0) goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0);
          pMVar14 = b;
          bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar10 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') {
label_045740ba:
            pMVar15 = pMVar14;
            uVar7 = (uint)pSVar8->max_length;
            if ((int)uVar7 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          else {
            piVar2 = (int *)((long)&__this_02->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar4 = __this_02->invoker_method;
            if (pIVar4 == (InvokerMethod)0x0) goto label_04574192;
            uVar7 = *(uint *)&__this_02->name;
            if (*(uint *)(pIVar4 + 0x18) <= uVar7) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pMVar15,
                         (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
              pMVar14 = pMVar15;
              goto label_045740ba;
            }
            *(uint *)&__this_02->name = uVar7 + 1;
            *(MethodInfo **)(pIVar4 + (long)(int)uVar7 * 8 + 0x20) = pMVar15;
            il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar7 * 8 + 0x20);
            uVar7 = (uint)pSVar8->max_length;
            if ((int)uVar7 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          uVar11 = uVar11 + 1;
          pMVar14 = pMVar15;
        } while (uVar11 < uVar7);
      }
      goto label_04574197;
    }
    return;
  }
label_04574192:
  pMVar15 = pMVar14;
  il2cpp_runtime_helper_022b2c90();
label_04574197:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)
           System_Enum__GetValues((System_Type_o *)pMVar15,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  System_Linq_Enumerable__ToList_int_
            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersContainingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x4573e60

void CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  UnityEngine_Renderer_array *pUVar3;
  InvokerMethod pIVar4;
  MethodInfo_255AB00 *pMVar5;
  uint uVar6;
  bool_conflict bVar7;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo_255AB00 *pMVar10;
  MethodInfo_255AB00 *b;
  UnityEngine_GameObject_o *__this_00;
  uint uVar11;
  long lVar12;
  MethodInfo_255AB00 *__this_01;
  MethodInfo_255AB00 *pMVar13;
  
  b = (MethodInfo_255AB00 *)name;
  pMVar13 = (MethodInfo_255AB00 *)renderers;
  if (g_data_057af091 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af091 = '\x01';
  }
  if ((obj == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(obj,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pMVar13 = __this_01, pSVar8 == (System_Object_array *)0x0)) {
label_04573ff7:
    __this_01 = pMVar13;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar6 = (uint)pSVar8->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < (int)uVar6) {
        lVar12 = 0;
        do {
          if (uVar6 <= (uint)lVar12) goto label_04573ffc;
          pMVar13 = __this_01;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar12] == (UnityEngine_Object_o *)0x0)
          goto label_04573ff7;
          pMVar13 = (MethodInfo_255AB00 *)0x0;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar12],(MethodInfo *)0x0);
          if ((pSVar9 == (System_String_o *)0x0) ||
             (__this_01 = (MethodInfo_255AB00 *)name,
             bVar7 = System_String__Contains(pSVar9,name,(MethodInfo *)0x0), pMVar13 = __this_01,
             (char)bVar7 != '\0')) goto label_04573ff7;
          uVar6 = (uint)pSVar8->max_length;
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)uVar6);
      }
      return;
    }
    if ((int)uVar6 < 1) {
      return;
    }
    uVar11 = 0;
    if (uVar6 != 0) {
      do {
        __this_01 = (MethodInfo_255AB00 *)pSVar8->m_Items[(int)uVar11];
        if (__this_01 == (MethodInfo_255AB00 *)0x0) goto label_04573ff7;
        pMVar13 = (MethodInfo_255AB00 *)0x0;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_04573ff7;
        pMVar13 = (MethodInfo_255AB00 *)name;
        bVar7 = System_String__Contains(pSVar9,name,(MethodInfo *)0x0);
        pMVar10 = MethodInfo_Void_Add;
        if ((char)bVar7 == '\0') {
label_04573f0a:
          __this_01 = pMVar13;
          uVar6 = (uint)pSVar8->max_length;
          if ((int)uVar6 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        else {
          piVar1 = &(renderers->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (renderers->fields)._items;
          b = pMVar10;
          if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_04573ff7;
          uVar6 = (renderers->fields)._size;
          if ((uint)pUVar3->max_length <= uVar6) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)__this_01,
                       (MethodInfo_362C220 *)pMVar10->klass->rgctx_data[0xe].method);
            b = pMVar10;
            pMVar13 = __this_01;
            goto label_04573f0a;
          }
          b = (MethodInfo_255AB00 *)(ulong)(uVar6 + 1);
          (renderers->fields)._size = uVar6 + 1;
          pUVar3->m_Items[(int)uVar6] = (UnityEngine_Renderer_o *)__this_01;
          il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar6);
          uVar6 = (uint)pSVar8->max_length;
          if ((int)uVar6 <= (int)(uVar11 + 1)) {
            return;
          }
        }
        uVar11 = uVar11 + 1;
        pMVar13 = __this_01;
      } while (uVar11 < uVar6);
    }
  }
label_04573ffc:
  il2cpp_runtime_helper_022b2ca0();
  pMVar13 = __this_01;
  if (g_data_057af092 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af092 = '\x01';
  }
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pMVar10 = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pMVar13 = pMVar10, pSVar8 != (System_Object_array *)0x0)) {
    uVar6 = (uint)pSVar8->max_length;
    if (__this_01 == (MethodInfo_255AB00 *)0x0) {
      if (0 < (int)uVar6) {
        lVar12 = 0;
        do {
          if (uVar6 <= (uint)lVar12) goto label_04574197;
          pMVar13 = pMVar10;
          if ((UnityEngine_Object_o *)pSVar8->m_Items[lVar12] == (UnityEngine_Object_o *)0x0)
          goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar8->m_Items[lVar12],(MethodInfo *)0x0);
          pMVar10 = b;
          bVar7 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar13 = pMVar10;
          if ((char)bVar7 != '\0') goto label_04574192;
          uVar6 = (uint)pSVar8->max_length;
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)uVar6);
      }
    }
    else if (0 < (int)uVar6) {
      uVar11 = 0;
      if (uVar6 != 0) {
        do {
          pMVar10 = (MethodInfo_255AB00 *)pSVar8->m_Items[(int)uVar11];
          if (pMVar10 == (MethodInfo_255AB00 *)0x0) goto label_04574192;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pMVar10,(MethodInfo *)0x0);
          pMVar13 = b;
          bVar7 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') {
label_045740ba:
            pMVar10 = pMVar13;
            uVar6 = (uint)pSVar8->max_length;
            if ((int)uVar6 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          else {
            piVar2 = (int *)((long)&__this_01->name + 4);
            *piVar2 = *piVar2 + 1;
            pIVar4 = __this_01->invoker_method;
            if (pIVar4 == (InvokerMethod)0x0) goto label_04574192;
            uVar6 = *(uint *)&__this_01->name;
            if (*(uint *)(pIVar4 + 0x18) <= uVar6) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pMVar10,
                         (MethodInfo_362C220 *)pMVar5->klass->rgctx_data[0xe].method);
              pMVar13 = pMVar10;
              goto label_045740ba;
            }
            *(uint *)&__this_01->name = uVar6 + 1;
            *(MethodInfo_255AB00 **)(pIVar4 + (long)(int)uVar6 * 8 + 0x20) = pMVar10;
            il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar6 * 8 + 0x20);
            uVar6 = (uint)pSVar8->max_length;
            if ((int)uVar6 <= (int)(uVar11 + 1)) {
              return;
            }
          }
          uVar11 = uVar11 + 1;
          pMVar13 = pMVar10;
        } while (uVar11 < uVar6);
      }
      goto label_04574197;
    }
    return;
  }
label_04574192:
  pMVar10 = pMVar13;
  il2cpp_runtime_helper_022b2c90();
label_04574197:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)
           System_Enum__GetValues((System_Type_o *)pMVar10,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  System_Linq_Enumerable__ToList_int_
            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$AddRenderersMatchingName
// il2cpp: void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName (CustomSkins_BaseCustomSkinLoader_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* obj, System_String_o* name, const MethodInfo* method);
// 0x4574010

void CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
               (CustomSkins_BaseCustomSkinLoader_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *obj,
               System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Renderer_array *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  uint uVar7;
  long lVar8;
  MethodInfo_255AB00 *pMVar9;
  MethodInfo_255AB00 *enumType;
  
  pMVar9 = (MethodInfo_255AB00 *)renderers;
  if (g_data_057af092 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057af092 = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (enumType = MethodInfo_Renderer_GetComponentsInChildren_Renderer,
     pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(obj,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pMVar9 = enumType, pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
      if (0 < (int)uVar4) {
        lVar8 = 0;
        do {
          if (uVar4 <= (uint)lVar8) goto label_04574197;
          pMVar9 = enumType;
          if ((UnityEngine_Object_o *)pSVar5->m_Items[lVar8] == (UnityEngine_Object_o *)0x0)
          goto label_04574192;
          pSVar6 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar5->m_Items[lVar8],(MethodInfo *)0x0);
          enumType = (MethodInfo_255AB00 *)name;
          bVar3 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
          pMVar9 = enumType;
          if ((char)bVar3 != '\0') goto label_04574192;
          uVar4 = (uint)pSVar5->max_length;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar4);
      }
    }
    else if (0 < (int)uVar4) {
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          enumType = (MethodInfo_255AB00 *)pSVar5->m_Items[(int)uVar7];
          if (enumType == (MethodInfo_255AB00 *)0x0) goto label_04574192;
          pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)enumType,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo_255AB00 *)name;
          bVar3 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar3 == '\0') {
label_045740ba:
            enumType = pMVar9;
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          else {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (renderers->fields)._items;
            if (pUVar2 == (UnityEngine_Renderer_array *)0x0) goto label_04574192;
            uVar4 = (renderers->fields)._size;
            if ((uint)pUVar2->max_length <= uVar4) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)enumType,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              pMVar9 = enumType;
              goto label_045740ba;
            }
            (renderers->fields)._size = uVar4 + 1;
            pUVar2->m_Items[(int)uVar4] = (UnityEngine_Renderer_o *)enumType;
            il2cpp_runtime_helper_022b4080(pUVar2->m_Items + (int)uVar4);
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)(uVar7 + 1)) {
              return;
            }
          }
          uVar7 = uVar7 + 1;
          pMVar9 = enumType;
        } while (uVar7 < uVar4);
      }
      goto label_04574197;
    }
    return;
  }
label_04574192:
  enumType = pMVar9;
  il2cpp_runtime_helper_022b2c90();
label_04574197:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)
           System_Enum__GetValues((System_Type_o *)enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  System_Linq_Enumerable__ToList_int_
            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$GetCustomSkinPartIds
// il2cpp: System_Collections_Generic_List_int__o* CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds (CustomSkins_BaseCustomSkinLoader_o* __this, System_Type_o* t, const MethodInfo* method);
// 0x45741a0

System_Collections_Generic_List_int__o *
CustomSkins_BaseCustomSkinLoader__GetCustomSkinPartIds
          (CustomSkins_BaseCustomSkinLoader_o *__this,System_Type_o *t,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (g_data_057af093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    g_data_057af093 = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(t,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  pSVar1 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Int32_ToList_Int32);
  return (System_Collections_Generic_List_int__o *)pSVar1;
}


// CustomSkins.BaseCustomSkinLoader$$OnDestroy
// il2cpp: void CustomSkins_BaseCustomSkinLoader__OnDestroy (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4574220

void CustomSkins_BaseCustomSkinLoader__OnDestroy
               (CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057af094 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057af094 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 != 0) {
    CustomSkins_TextureDownloader__ResetConcurrentDownloads((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomSkins_TextureDownloader__ResetConcurrentDownloads((MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___ctor (CustomSkins_BaseCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4573a10

void CustomSkins_BaseCustomSkinLoader___ctor(CustomSkins_BaseCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.BaseCustomSkinLoader$$.cctor
// il2cpp: void CustomSkins_BaseCustomSkinLoader___cctor (const MethodInfo* method);
// 0x4574280

void CustomSkins_BaseCustomSkinLoader___cctor(MethodInfo *method)

{
  if (g_data_057af095 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&"transparent");
    g_data_057af095 = '\x01';
  }
  **(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8) = "transparent";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BaseCustomSkinLoader + 0xb8),"transparent");
  return;
}


