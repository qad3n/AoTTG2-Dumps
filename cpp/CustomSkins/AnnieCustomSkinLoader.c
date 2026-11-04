// Type: CustomSkins.AnnieCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/AnnieCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/AnnieCustomSkinLoader.cs
// --------------------------------

// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor(CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose(CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, MethodInfo* method)

{
  return;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x181e78910

bool
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext(CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, MethodInfo* method)

{
  int iVar1;
  System_Object_array *pSVar2;
  System_String_o *pSVar3;
  CustomSkins_ErenCustomSkinLoader_o *__this_00;
  bool bVar4;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  System_String_o *url;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).data;
  if (pSVar2 != (System_Object_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = (System_String_o *)pSVar2->m_Items[0];
    url = (System_String_o *)0x0;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
        url = pSVar3;
      }
      if (url == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    __this_00 = (__this->fields).__4__this;
    if ((__this_00 != (CustomSkins_ErenCustomSkinLoader_o *)0x0) &&
       (__this_01 = (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                              (__this_00,0,(__this_00->klass->vtable)._6_GetCustomSkinPart.method),
       __this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0)) {
      bVar4 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_01,url,(MethodInfo *)0x0);
      if (bVar4) {
        return false;
      }
      routine = CustomSkins_BaseCustomSkinPart__LoadSkin(__this_01,url,(MethodInfo *)0x0);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.AnnieCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x181e78a50

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
// 0x180573e90

Il2CppObject*
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current(CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.AnnieCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_AnnieCustomSkinLoader__get_RendererIdPrefix (CustomSkins_AnnieCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e62670

System_String_o *
CustomSkins_AnnieCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_AnnieCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"annie");
    Il2CppMethodInitialized_184344f66 = '\x01';
  }
  return "annie";
}


// CustomSkins.AnnieCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_AnnieCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x181e62590

System_Collections_IEnumerator_o *
CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_AnnieCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_AnnieCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_AnnieCustomSkinLoader_LoadSkinsFromRPC_d__2);
    Il2CppMethodInitialized_184344f67 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_AnnieCustomSkinLoader_LoadSkinsFromRPC_d__2);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.AnnieCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_AnnieCustomSkinLoader__GetCustomSkinPart (CustomSkins_AnnieCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e62380

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_AnnieCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_AnnieCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_Renderer_o *item;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_Renderer__o *renderers;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  uint uVar7;
  int32_t local_res10 [2];
  System_Nullable_Vector2__Fields local_28;
  
  if (Il2CppMethodInitialized_184344f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_184344f68 = '\x01';
  }
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)renderers,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  if (partId != 0) {
    return (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  __this_00 = (__this->fields)._owner;
  if (Il2CppMethodInitialized_184344f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    Il2CppMethodInitialized_184344f6b = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (__this_00,
                        (MethodInfo_6F5810 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar7 = 0;
      do {
        pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
        if ((int)pSVar5->max_length <= (int)uVar7) {
          local_res10[0] = 0;
          pSVar6 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
          str1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat_1969e50(pSVar6,str1,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
          local_28.hasValue = false;
          local_28._1_3_ = 0;
          local_28.value.fields.x = 0.0;
          local_28.value.fields.y = 0.0;
          CustomSkins_BaseCustomSkinPart___ctor
                    (__this_01,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar6,2000000,
                     (System_Nullable_Vector2__o *)&local_28,false,(MethodInfo *)0x0);
          return __this_01;
        }
        if ((uint)pSVar5->max_length <= uVar7) {
label_181e62582:
          ThrowIndexOutOfRangeException();
        }
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) break;
        pUVar3 = (renderers->fields)._items;
        item = (UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar7];
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) break;
        uVar2 = (renderers->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (renderers->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) goto label_181e62582;
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          uVar7 = uVar7 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          uVar7 = uVar7 + 1;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.AnnieCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_AnnieCustomSkinLoader___ctor (CustomSkins_AnnieCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e62620

void CustomSkins_AnnieCustomSkinLoader___ctor(CustomSkins_AnnieCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_184344f69 = '\x01';
  }
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


