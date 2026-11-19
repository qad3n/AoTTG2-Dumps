// Type: CustomSkins.AnnieCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/AnnieCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/AnnieCustomSkinLoader.cs
// --------------------------------

// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x595e9f0

void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor
               (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x595edc0

void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose
               (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x595edd0

bool CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext
               (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomSkins_AnnieCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  System_String_o *url;
  bool bVar3;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  int32_t iVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  bVar3 = false;
  if (iVar1 == 1) {
    iVar5 = -1;
label_0595ef02:
    (__this->fields).__1__state = iVar5;
    return bVar3;
  }
  if (iVar1 != 0) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).data;
  if (pSVar2 != (System_Object_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    url = (System_String_o *)pSVar2->m_Items[0];
    if ((url != (System_String_o *)0x0) && (url->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(url);
    }
    if (__this_00 != (CustomSkins_AnnieCustomSkinLoader_o *)0x0) {
      auVar6 = (undefined1  [16])
               (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                         (__this_00,0,(__this_00->klass->vtable)._6_GetCustomSkinPart.method);
      __this_01 = auVar6._0_8_;
      if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        bVar3 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_01,url,auVar6._8_8_);
        if (bVar3) {
          return false;
        }
        if (Il2CppMethodInitialized_07545932 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
          Il2CppMethodInitialized_07545932 = '\x01';
        }
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        (__this_02->fields).__1__state = 0;
        (__this_02->fields).__4__this = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
        (__this_02->fields).url = url;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).url);
        pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                           ((UnityEngine_MonoBehaviour_o *)__this_00,
                            (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        bVar3 = true;
        iVar5 = 1;
        goto label_0595ef02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x595f170

Il2CppObject *
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x595f180

void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomSkins_AnnieCustomSkinLoader_LoadSkinsFromRPC_d__2_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x595f1c0

Il2CppObject *
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.AnnieCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_AnnieCustomSkinLoader__get_RendererIdPrefix (CustomSkins_AnnieCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595e940

System_String_o *
CustomSkins_AnnieCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_AnnieCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"annie");
    Il2CppMethodInitialized_07545907 = '\x01';
  }
  return "annie";
}


// CustomSkins.AnnieCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_AnnieCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x595e970

System_Collections_IEnumerator_o *
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_AnnieCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this_00;
  
  if (Il2CppMethodInitialized_07545908 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_AnnieCustomSkinLoader_LoadSkinsFromRPC_d__2);
    Il2CppMethodInitialized_07545908 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_AnnieCustomSkinLoader_LoadSkinsFromRPC_d__2);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.AnnieCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_AnnieCustomSkinLoader__GetCustomSkinPart (CustomSkins_AnnieCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x595ea10

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_AnnieCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_AnnieCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *str1;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_Renderer__o *__this_01;
  MethodInfo *in_stack_ffffffffffffffd0;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_07545909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_07545909 = '\x01';
  }
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  if (partId == 0) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,(__this->fields)._owner,in_RCX);
    iStack_24 = 0;
    pSVar1 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    str1 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320(pSVar1,str1,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    CustomSkins_BaseCustomSkinPart___ctor
              (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,2000000,
               (System_Nullable_Vector2__o)ZEXT812(0),false,in_stack_ffffffffffffffd0);
  }
  else {
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  return __this_00;
}


// CustomSkins.AnnieCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_AnnieCustomSkinLoader___ctor (CustomSkins_AnnieCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x595ed40

void CustomSkins_AnnieCustomSkinLoader___ctor(CustomSkins_AnnieCustomSkinLoader_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754590a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_0754590a = '\x01';
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


