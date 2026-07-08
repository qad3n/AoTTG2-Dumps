// Type: CustomSkins.TitanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/TitanCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4245aa0

void CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2___ctor
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4245dc0

void CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_IDisposable_Dispose
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4245dd0

bool_conflict
CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2__MoveNext
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  uint uVar1;
  CustomSkins_TitanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  Il2CppClass *url;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  char *pcVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *__this_01;
  UnityEngine_Coroutine_o *pUVar8;
  CustomSkins_BaseCustomSkinPart_o *pCVar9;
  undefined1 auVar10 [16];
  
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 4) {
    __this_00 = (__this->fields).__4__this;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      pSVar2 = (__this->fields).data;
      if (pSVar2 == (System_Object_array *)0x0) goto LAB_042461a5;
      if ((int)pSVar2->max_length == 0) goto LAB_042461aa;
      if (pSVar2->m_Items[0] == (Il2CppObject *)0x0) goto LAB_042461a5;
      if ((pSVar2->m_Items[0]->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pcVar6 = (char *)il2cpp_glue_022c7330();
      pIVar3 = DAT_057110b0;
      pSVar2 = (__this->fields).data;
      if (pSVar2 == (System_Object_array *)0x0) goto LAB_042461a5;
      uVar1 = (uint)pSVar2->max_length;
      if (uVar1 < 2) {
LAB_042461aa:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      url = (Il2CppClass *)pSVar2->m_Items[1];
      if ((url != (Il2CppClass *)0x0) && ((url->_1).image != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(url);
      }
      if (*pcVar6 == '\0') {
        if (uVar1 < 3) goto LAB_042461aa;
        pSVar4 = (System_String_o *)pSVar2->m_Items[2];
        if (pSVar4 == (System_String_o *)0x0) {
          (__this->fields)._eyeUrl_5__2 = (System_String_o *)0x0;
          il2cpp_runtime_glue(&(__this->fields)._eyeUrl_5__2,0);
        }
        else {
          if (((Il2CppClass *)pSVar4->klass != DAT_057110b0) ||
             ((__this->fields)._eyeUrl_5__2 = pSVar4, (Il2CppClass *)pSVar4->klass != pIVar3)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar4);
          }
          il2cpp_runtime_glue(&(__this->fields)._eyeUrl_5__2,pSVar4);
        }
        if (__this_00 == (CustomSkins_TitanCustomSkinLoader_o *)0x0) goto LAB_042461a5;
        auVar10 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                            (__this_00,1,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
        pCVar9 = auVar10._0_8_;
        if (pCVar9 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto LAB_042461a5;
        bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar9,(System_String_o *)url,auVar10._8_8_);
        if ((char)bVar5 != '\0') goto LAB_04245f6c;
        if (DAT_057051d1 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
          DAT_057051d1 = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar7[1].klass = 0;
        if (pIVar7 == (Il2CppObject *)0x0) goto LAB_042461a5;
        __this_01 = pIVar7 + 2;
        pIVar7[2].monitor = pCVar9;
        il2cpp_runtime_glue(&pIVar7[2].monitor,pCVar9);
        pIVar7[2].klass = url;
        il2cpp_runtime_glue(__this_01,url);
        pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine
                           ((UnityEngine_MonoBehaviour_o *)__this_00,
                            (System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar8;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar8);
        (__this->fields).__1__state = 2;
      }
      else {
        if (__this_00 == (CustomSkins_TitanCustomSkinLoader_o *)0x0) goto LAB_042461a5;
        auVar10 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                            (__this_00,0,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
        pCVar9 = auVar10._0_8_;
        if (pCVar9 == (CustomSkins_BaseCustomSkinPart_o *)0x0) goto LAB_042461a5;
        bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache
                          (pCVar9,(System_String_o *)url,auVar10._8_8_);
        if ((char)bVar5 != '\0') goto LAB_0424606a;
        if (DAT_057051d1 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
          DAT_057051d1 = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar7[1].klass = 0;
        if (pIVar7 == (Il2CppObject *)0x0) goto LAB_042461a5;
        __this_01 = pIVar7 + 2;
        pIVar7[2].monitor = pCVar9;
        il2cpp_runtime_glue(&pIVar7[2].monitor,pCVar9);
        pIVar7[2].klass = url;
        il2cpp_runtime_glue(__this_01,url);
        pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine
                           ((UnityEngine_MonoBehaviour_o *)__this_00,
                            (System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar8;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar8);
        (__this->fields).__1__state = 1;
      }
      break;
    case 1:
      (__this->fields).__1__state = -1;
      goto LAB_0424606a;
    case 2:
      (__this->fields).__1__state = -1;
      if (__this_00 == (CustomSkins_TitanCustomSkinLoader_o *)0x0) goto LAB_042461a5;
LAB_04245f6c:
      auVar10 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                          (__this_00,2,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
      pCVar9 = auVar10._0_8_;
      if (pCVar9 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
LAB_042461a5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache
                        (pCVar9,(__this->fields)._eyeUrl_5__2,auVar10._8_8_);
      if ((char)bVar5 != '\0') {
LAB_04246046:
        (__this->fields)._eyeUrl_5__2 = (System_String_o *)0x0;
        il2cpp_runtime_glue(&(__this->fields)._eyeUrl_5__2,0);
        return 0;
      }
      pIVar3 = (Il2CppClass *)(__this->fields)._eyeUrl_5__2;
      if (DAT_057051d1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
        DAT_057051d1 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 == (Il2CppObject *)0x0) goto LAB_042461a5;
      __this_01[2].monitor = pCVar9;
      il2cpp_runtime_glue(&__this_01[2].monitor,pCVar9);
      __this_01[2].klass = pIVar3;
      il2cpp_runtime_glue(__this_01 + 2,pIVar3);
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this_00,
                          (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar8;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar8);
      (__this->fields).__1__state = 3;
      break;
    case 3:
      (__this->fields).__1__state = -1;
      goto LAB_04246046;
    }
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
  }
  else {
LAB_0424606a:
    bVar5 = 0;
  }
  return bVar5;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x42461d0

Il2CppObject *
CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x42461e0

void CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
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


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4246220

Il2CppObject *
CustomSkins_TitanCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x42459e0

System_String_o *
CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051c9 == '\0') {
    il2cpp_init_method_metadata(&"titan");
    DAT_057051c9 = '\x01';
  }
  return "titan";
}


// CustomSkins.TitanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_TitanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4245a10

System_Collections_IEnumerator_o *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_TitanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__2);
    DAT_057051ca = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinsFromRPC_d__2);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)data;
    il2cpp_runtime_glue(__this_00 + 2,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TitanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart (CustomSkins_TitanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4245ac0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_TitanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  System_Collections_Generic_List_Renderer__o *__this_02;
  int32_t maxSize;
  MethodInfo *in_R8;
  UnityEngine_Vector2_Fields in_XMM1_Qa;
  System_Nullable_Vector2__o textureScale;
  System_Nullable_Vector2__o __this_03;
  MethodInfo *in_stack_ffffffffffffffc0;
  ulong uStack_30;
  float fStack_28;
  ulong uVar3;
  float fVar4;
  
  if (DAT_057051cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinPart);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector2);
    il2cpp_init_method_metadata(&"hair");
    il2cpp_init_method_metadata(&"eye");
    DAT_057051cb = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_BasicTitan_GetComponent_BasicTitan);
    renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
    __this_02 = renderers;
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
    if (partId == 2) {
      CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this_02,renderers,(__this->fields)._owner,
                 "eye",in_R8);
      uStack_30 = CONCAT44(uStack_30._4_4_,2);
      pSVar1 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
      pSVar2 = System_Int32__ToString((int32_t)&uStack_30,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
      fStack_28 = 0.0;
      uStack_30 = 0;
      __this_03.fields.value.fields.y = 4.0;
      __this_03.fields._0_8_ = &uStack_30;
      System_Nullable<Vector2>___ctor(__this_03,(UnityEngine_Vector2_o)in_XMM1_Qa,MethodInfo_Nullable_1_UnityEngine_Vector2);
      __this_01 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
      maxSize = 500000;
      uVar3 = uStack_30;
      fVar4 = fStack_28;
    }
    else if (partId == 1) {
      CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
                ((CustomSkins_BaseCustomSkinLoader_o *)__this_02,renderers,(__this->fields)._owner,
                 "hair",in_R8);
      uStack_30 = CONCAT44(uStack_30._4_4_,1);
      pSVar1 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
      pSVar2 = System_Int32__ToString((int32_t)&uStack_30,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
      __this_01 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
      maxSize = 1000000;
      uVar3 = 0;
      fVar4 = 0.0;
    }
    else {
      if (partId != 0) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      uStack_30 = uStack_30 & 0xffffffff00000000;
      pSVar1 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this);
      pSVar2 = System_Int32__ToString((int32_t)&uStack_30,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(pSVar1,pSVar2,(MethodInfo *)0x0);
      __this_01 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
      maxSize = 500000;
      uVar3 = 0;
      fVar4 = 0.0;
    }
    textureScale.fields.value.fields.y = fVar4;
    textureScale.fields.hasValue = (int)uVar3;
    textureScale.fields.value.fields.x = (float)(int)(uVar3 >> 0x20);
    CustomSkins_BaseCustomSkinPart___ctor
              (__this_01,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,maxSize,
               textureScale,0,in_stack_ffffffffffffffc0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TitanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader___ctor (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4245d50

void CustomSkins_TitanCustomSkinLoader___ctor
               (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051cc = '\x01';
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


