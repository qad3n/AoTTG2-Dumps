// Type: CustomSkins.ColossalCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/ColossalCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/ColossalCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4241910

void CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2___ctor
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4241ac0

void CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_IDisposable_Dispose
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4241ad0

bool_conflict
CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2__MoveNext
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomSkins_ColossalCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  Il2CppClass *url;
  bool_conflict bVar3;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  Il2CppObject *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pSVar2 = (__this->fields).data;
    if (pSVar2 != (System_Object_array *)0x0) {
      if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      url = (Il2CppClass *)pSVar2->m_Items[0];
      if ((url != (Il2CppClass *)0x0) && ((url->_1).image != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(url);
      }
      if (__this_00 != (CustomSkins_ColossalCustomSkinLoader_o *)0x0) {
        auVar6 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                           (__this_00,0,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
        __this_01 = auVar6._0_8_;
        if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
          bVar3 = CustomSkins_BaseCustomSkinPart__LoadCache
                            (__this_01,(System_String_o *)url,auVar6._8_8_);
          if ((char)bVar3 != '\0') {
            return 0;
          }
          if (DAT_057051d1 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
            DAT_057051d1 = '\x01';
          }
          __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
          System_Object___ctor(__this_02,(MethodInfo *)0x0);
          *(undefined4 *)&__this_02[1].klass = 0;
          if (__this_02 != (Il2CppObject *)0x0) {
            __this_02[2].monitor = __this_01;
            il2cpp_runtime_glue(&__this_02[2].monitor,__this_01);
            __this_02[2].klass = url;
            il2cpp_runtime_glue(__this_02 + 2,url);
            pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                               ((UnityEngine_MonoBehaviour_o *)__this_00,
                                (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)pUVar4;
            uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4241c30

Il2CppObject *
CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4241c40

void CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,
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


// CustomSkins.ColossalCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x4241c80

Il2CppObject *
CustomSkins_ColossalCustomSkinLoader_<LoadSkinsFromRPC>d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ColossalCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ColossalCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ColossalCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4241850

System_String_o *
CustomSkins_ColossalCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ColossalCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051ac == '\0') {
    il2cpp_init_method_metadata(&"colossal");
    DAT_057051ac = '\x01';
  }
  return "colossal";
}


// CustomSkins.ColossalCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ColossalCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4241880

System_Collections_IEnumerator_o *
CustomSkins_ColossalCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ColossalCustomSkinLoader_o *__this,System_Object_array *data,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__2);
    DAT_057051ad = '\x01';
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


// CustomSkins.ColossalCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ColossalCustomSkinLoader__GetCustomSkinPart (CustomSkins_ColossalCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4241930

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ColossalCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ColossalCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *str1;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  System_Collections_Generic_List_Renderer__o *__this_01;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffd0;
  undefined4 uStack_24;
  
  if (DAT_057051ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinPart);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    il2cpp_init_method_metadata(&"hair");
    DAT_057051ae = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  if (partId == 0) {
    CustomSkins_BaseCustomSkinLoader__AddRenderersContainingName
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,(__this->fields)._owner,
               "hair",in_R8);
    uStack_24 = 0;
    pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(__this)
    ;
    str1 = System_Int32__ToString((int32_t)&uStack_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    CustomSkins_BaseCustomSkinPart___ctor
              (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,2000000,
               (System_Nullable_Vector2__o)ZEXT812(0),0,in_stack_ffffffffffffffd0);
  }
  else {
    __this_00 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  return __this_00;
}


// CustomSkins.ColossalCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ColossalCustomSkinLoader___ctor (CustomSkins_ColossalCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4241a50

void CustomSkins_ColossalCustomSkinLoader___ctor
               (CustomSkins_ColossalCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051af = '\x01';
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


