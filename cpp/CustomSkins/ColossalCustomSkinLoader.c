// Type: CustomSkins.ColossalCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/ColossalCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ColossalCustomSkinLoader.cs
// --------------------------------

// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x408e8a0

void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408eb00

void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408eb10

bool_conflict
CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomSkins_ColossalCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  void *pvVar3;
  char cVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  Il2CppObject *pIVar7;
  UnityEngine_Coroutine_o *pUVar8;
  undefined8 uVar9;
  System_String_o *pSVar10;
  UnityEngine_Material_o *cachedMaterial;
  Il2CppObject *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  undefined7 uVar12;
  Il2CppClass *pIVar13;
  long *plVar14;
  Il2CppClass *unaff_R15;
  undefined1 auVar15 [16];
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  if (iVar1 != 0) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).data;
  if (pSVar2 == (System_Object_array *)0x0) {
label_0408ec5c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    unaff_R15 = (Il2CppClass *)pSVar2->m_Items[0];
    if ((unaff_R15 != (Il2CppClass *)0x0) &&
       (method = (MethodInfo *)g_data_057b9c00, (unaff_R15->_1).image != g_data_057b9c00)) goto label_0408ec66;
    if (__this_00 != (CustomSkins_ColossalCustomSkinLoader_o *)0x0) {
      method = (MethodInfo *)0x0;
      auVar15 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                          (__this_00,0,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
      __this_01 = auVar15._0_8_;
      if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (__this_01,(System_String_o *)unaff_R15,auVar15._8_8_);
        if ((char)bVar5 != '\0') {
          return 0;
        }
        if (g_data_057ac42a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
          g_data_057ac42a = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
        method = (MethodInfo *)0x0;
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar7[1].klass = 0;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar7[2].monitor = __this_01;
          il2cpp_runtime_helper_022b4080(&pIVar7[2].monitor,__this_01);
          pIVar7[2].klass = unaff_R15;
          il2cpp_runtime_helper_022b4080(pIVar7 + 2,unaff_R15);
          pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             ((UnityEngine_MonoBehaviour_o *)__this_00,
                              (System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar8;
          uVar9 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
        }
      }
    }
    goto label_0408ec5c;
  }
  il2cpp_runtime_helper_022b2ca0();
label_0408ec66:
  il2cpp_runtime_helper_022b2fd0();
  pIVar13 = (Il2CppClass *)method;
  plVar14 = (long *)unaff_R15;
  if (g_data_057ac427 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    plVar14 = &TypeInfo_TextureDownloader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac427 = '\x01';
  }
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    pSVar10 = System_String__ToLower((System_String_o *)method,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_String__op_Equality
                      (pSVar10,(System_String_o *)**(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8),(MethodInfo *)0x0);
    pvVar3 = (unaff_R15->_1).image;
    uVar12 = (undefined7)((ulong)pSVar10 >> 8);
    if ((char)bVar5 == '\0') {
      pMVar11 = *(MethodInfo **)((long)pvVar3 + 0x180);
      cVar4 = (**(code **)((long)pvVar3 + 0x178))(unaff_R15);
      bVar5 = (bool_conflict)CONCAT71(uVar12,1);
      if (cVar4 != '\0') {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = CustomSkins_TextureDownloader__ValidTextureURL((System_String_o *)method,pMVar11);
        if ((char)bVar6 != '\0') {
          pSVar10 = (unaff_R15->_1).byval_arg.data;
          pMVar11 = extraout_RDX;
          if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar11 = extraout_RDX_00;
          }
          bVar6 = CustomSkins_MaterialCache__ContainsKey(pSVar10,(System_String_o *)method,pMVar11);
          if ((char)bVar6 == '\0') {
            bVar5 = 0;
          }
          else {
            pSVar10 = (unaff_R15->_1).byval_arg.data;
            pMVar11 = extraout_RDX_01;
            if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar11 = extraout_RDX_02;
            }
            cachedMaterial = CustomSkins_MaterialCache__GetMaterial(pSVar10,(System_String_o *)method,pMVar11)
            ;
            bVar6 = CustomSkins_BaseCustomSkinPart__TryApplyCachedTextureToEffectMaterials
                              ((CustomSkins_BaseCustomSkinPart_o *)unaff_R15,cachedMaterial,method_00);
            if ((char)bVar6 == '\0') {
              pvVar3 = (unaff_R15->_1).image;
              (**(code **)((long)pvVar3 + 0x198))
                        (unaff_R15,cachedMaterial,*(undefined8 *)((long)pvVar3 + 0x1a0));
            }
          }
        }
      }
    }
    else {
      (**(code **)((long)pvVar3 + 0x188))(unaff_R15,*(undefined8 *)((long)pvVar3 + 400));
      bVar5 = (bool_conflict)CONCAT71(uVar12,1);
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac42a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
    g_data_057ac42a = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
  pIVar7 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].monitor = plVar14;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,plVar14);
    __this_02[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar13);
    return (bool_conflict)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)pIVar7[1].monitor;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408ee80

Il2CppObject *
CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408ee90

void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

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


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408eed0

Il2CppObject *
CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ColossalCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ColossalCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ColossalCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408e7e0

System_String_o *
CustomSkins_ColossalCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ColossalCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac405 == '\0') {
    il2cpp_runtime_helper_023445d0(&"colossal");
    g_data_057ac405 = '\x01';
  }
  return "colossal";
}


// CustomSkins.ColossalCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ColossalCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x408e810

System_Collections_IEnumerator_o *
CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ColossalCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac406 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__2);
    g_data_057ac406 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinsFromRPC_d__2);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)data;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomSkins.ColossalCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ColossalCustomSkinLoader__GetCustomSkinPart (CustomSkins_ColossalCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x408e8c0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ColossalCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ColossalCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *rendererId;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ac407 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&"hair");
    g_data_057ac407 = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  if (partId == 0) {
    CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,(__this->fields)._owner,"hair",
               (MethodInfo *)0x0);
    rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                           ((CustomSkins_BaseCustomSkinLoader_o *)__this,0,(MethodInfo *)0x0);
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    CustomSkins_BaseCustomSkinPart___ctor
              (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,rendererId,2000000,
               (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffd0);
  }
  else {
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  return __this_00;
}


// CustomSkins.ColossalCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ColossalCustomSkinLoader___ctor (CustomSkins_ColossalCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408ea90

void CustomSkins_ColossalCustomSkinLoader___ctor
               (CustomSkins_ColossalCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac408 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac408 = '\x01';
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


