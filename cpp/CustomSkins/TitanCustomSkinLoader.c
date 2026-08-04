// Type: CustomSkins.TitanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/TitanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4092b70

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4092e20

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4092e30

bool_conflict
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  uint uVar1;
  CustomSkins_TitanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_01;
  UnityEngine_Coroutine_o *pUVar8;
  CustomSkins_BaseCustomSkinPart_o *pCVar9;
  System_String_o *pSVar10;
  Il2CppClass *unaff_R15;
  undefined1 auVar11 [16];
  
  uVar1 = (__this->fields).__1__state;
  if (3 < uVar1) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar2 = (__this->fields).data;
    if (pSVar2 == (System_Object_array *)0x0) goto label_04093205;
    if ((int)pSVar2->max_length == 0) goto label_0409320a;
    if (pSVar2->m_Items[0] == (Il2CppObject *)0x0) goto label_04093205;
    if ((pSVar2->m_Items[0]->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40))
    goto label_0409320f;
    pcVar5 = (char *)il2cpp_runtime_helper_02305440();
    pIVar7 = g_data_057b9c00;
    pSVar2 = (__this->fields).data;
    if (pSVar2 == (System_Object_array *)0x0) goto label_04093205;
    uVar1 = (uint)pSVar2->max_length;
    if (uVar1 < 2) goto label_0409320a;
    unaff_R15 = (Il2CppClass *)pSVar2->m_Items[1];
    if ((unaff_R15 == (Il2CppClass *)0x0) || ((unaff_R15->_1).image == g_data_057b9c00)) {
      if (*pcVar5 == '\0') {
        if (uVar1 < 3) goto label_0409320a;
        pSVar10 = (System_String_o *)pSVar2->m_Items[2];
        if (pSVar10 == (System_String_o *)0x0) {
          (__this->fields)._eyeUrl_5__2 = (System_String_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._eyeUrl_5__2,0);
        }
        else {
          if (((Il2CppClass *)pSVar10->klass != g_data_057b9c00) ||
             ((__this->fields)._eyeUrl_5__2 = pSVar10, (Il2CppClass *)pSVar10->klass != pIVar7))
          goto label_0409321c;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._eyeUrl_5__2,pSVar10);
        }
        if (__this_00 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
          auVar11 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                              (__this_00,1,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
          pCVar9 = auVar11._0_8_;
          if (pCVar9 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
            bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache
                              (pCVar9,(System_String_o *)unaff_R15,auVar11._8_8_);
            if ((char)bVar4 != '\0') goto label_04092fcc;
            if (g_data_057ac42a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
              g_data_057ac42a = '\x01';
            }
            pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
            System_Object___ctor(pIVar6,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar6[1].klass = 0;
            if (pIVar6 != (Il2CppObject *)0x0) {
              __this_01 = pIVar6 + 2;
              pIVar6[2].monitor = pCVar9;
              il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pCVar9);
              pIVar6[2].klass = unaff_R15;
              il2cpp_runtime_helper_022b4080(__this_01,unaff_R15);
              pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                 ((UnityEngine_MonoBehaviour_o *)__this_00,
                                  (System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)pUVar8;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
              (__this->fields).__1__state = 2;
              goto label_040931f2;
            }
          }
        }
      }
      else if (__this_00 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
        auVar11 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                            (__this_00,0,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
        pCVar9 = auVar11._0_8_;
        if (pCVar9 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar9,(System_String_o *)unaff_R15,auVar11._8_8_)
          ;
          if ((char)bVar4 != '\0') {
            return 0;
          }
          if (g_data_057ac42a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
            g_data_057ac42a = '\x01';
          }
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
          System_Object___ctor(pIVar6,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar6[1].klass = 0;
          if (pIVar6 != (Il2CppObject *)0x0) {
            __this_01 = pIVar6 + 2;
            pIVar6[2].monitor = pCVar9;
            il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pCVar9);
            pIVar6[2].klass = unaff_R15;
            il2cpp_runtime_helper_022b4080(__this_01,unaff_R15);
            pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                               ((UnityEngine_MonoBehaviour_o *)__this_00,
                                (System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)pUVar8;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
            (__this->fields).__1__state = 1;
            goto label_040931f2;
          }
        }
      }
      goto label_04093205;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    return 0;
  case 2:
    (__this->fields).__1__state = -1;
    if (__this_00 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
label_04092fcc:
      auVar11 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                          (__this_00,2,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
      pIVar7 = auVar11._0_8_;
      if (pIVar7 != (Il2CppClass *)0x0) {
        bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache
                          ((CustomSkins_BaseCustomSkinPart_o *)pIVar7,(__this->fields)._eyeUrl_5__2,
                           auVar11._8_8_);
        if ((char)bVar4 != '\0') {
label_040930a6:
          (__this->fields)._eyeUrl_5__2 = (System_String_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._eyeUrl_5__2,0);
          return 0;
        }
        pIVar3 = (Il2CppClass *)(__this->fields)._eyeUrl_5__2;
        if (g_data_057ac42a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
          g_data_057ac42a = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&__this_01[1].klass = 0;
        unaff_R15 = pIVar7;
        if (__this_01 != (Il2CppObject *)0x0) {
          __this_01[2].monitor = pIVar7;
          il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pIVar7);
          __this_01[2].klass = pIVar3;
          il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar3);
          pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             ((UnityEngine_MonoBehaviour_o *)__this_00,
                              (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar8;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
          (__this->fields).__1__state = 3;
label_040931f2:
          return (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
        }
      }
    }
label_04093205:
    il2cpp_runtime_helper_022b2c90();
label_0409320a:
    il2cpp_runtime_helper_022b2ca0();
label_0409320f:
    il2cpp_runtime_helper_022b2fd0();
    break;
  case 3:
    (__this->fields).__1__state = -1;
    goto label_040930a6;
  }
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_0409321c:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)pSVar10[1].klass;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4093230

Il2CppObject *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4093240

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

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


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4093280

Il2CppObject *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4092ab0

System_String_o *
CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac422 == '\0') {
    il2cpp_runtime_helper_023445d0(&"titan");
    g_data_057ac422 = '\x01';
  }
  return "titan";
}


// CustomSkins.TitanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_TitanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4092ae0

System_Collections_IEnumerator_o *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_TitanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac423 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__2);
    g_data_057ac423 = '\x01';
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


// CustomSkins.TitanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart (CustomSkins_TitanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4092b90

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_TitanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *rendererId;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  CustomSkins_BaseCustomSkinPart_o *extraout_RAX;
  CustomSkins_BaseCustomSkinPart_o *extraout_RAX_00;
  CustomSkins_BaseCustomSkinLoader_o *__this_01;
  int32_t maxSize;
  UnityEngine_Vector2_Fields in_XMM1_Qa;
  System_Nullable_Vector2__o textureScale;
  System_Nullable_Vector2__o __this_02;
  MethodInfo *in_stack_ffffffffffffffc0;
  undefined8 uStack_30;
  float fStack_28;
  undefined8 uVar2;
  float fVar3;
  
  if (g_data_057ac424 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector2);
    il2cpp_runtime_helper_023445d0(&"hair");
    il2cpp_runtime_helper_023445d0(&"eye");
    g_data_057ac424 = '\x01';
  }
  __this_01 = (CustomSkins_BaseCustomSkinLoader_o *)(__this->fields)._owner;
  if (__this_01 != (CustomSkins_BaseCustomSkinLoader_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_BasicTitan_GetComponent_BasicTitan);
    renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
    if (partId == 2) {
      CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,(__this->fields)._owner,"eye",
                 (MethodInfo *)0x0);
      rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                             ((CustomSkins_BaseCustomSkinLoader_o *)__this,2,(MethodInfo *)0x0);
      fStack_28 = 0.0;
      uStack_30 = 0;
      __this_02.fields.value.fields.y = 4.0;
      __this_02.fields._0_8_ = &uStack_30;
      System_Nullable_Vector2____ctor(__this_02,(UnityEngine_Vector2_o)in_XMM1_Qa,MethodInfo_Nullable_1_UnityEngine_Vector2);
      __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
      maxSize = 500000;
      uVar2 = uStack_30;
      fVar3 = fStack_28;
    }
    else if (partId == 1) {
      CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,(__this->fields)._owner,"hair",
                 (MethodInfo *)0x0);
      rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                             ((CustomSkins_BaseCustomSkinLoader_o *)__this,1,(MethodInfo *)0x0);
      __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
      maxSize = 1000000;
      uVar2 = 0;
      fVar3 = 0.0;
    }
    else {
      if (partId != 0) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      rendererId = CustomSkins_BaseCustomSkinLoader__GetRendererId
                             ((CustomSkins_BaseCustomSkinLoader_o *)__this,0,(MethodInfo *)0x0);
      __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
      maxSize = 500000;
      uVar2 = 0;
      fVar3 = 0.0;
    }
    textureScale.fields.value.fields.y = fVar3;
    textureScale.fields.hasValue = (int)uVar2;
    textureScale.fields.value.fields.x = (float)(int)((ulong)uVar2 >> 0x20);
    CustomSkins_BaseCustomSkinPart___ctor
              (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,rendererId,maxSize,
               textureScale,0,in_stack_ffffffffffffffc0);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac425 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac425 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomSkins_BaseCustomSkinLoader___ctor(__this_01,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomSkins_BaseCustomSkinLoader___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomSkins.TitanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader___ctor (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4092db0

void CustomSkins_TitanCustomSkinLoader___ctor(CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac425 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac425 = '\x01';
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


