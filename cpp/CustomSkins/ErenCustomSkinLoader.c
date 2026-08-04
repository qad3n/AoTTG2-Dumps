// Type: CustomSkins.ErenCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/ErenCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ErenCustomSkinLoader.cs
// --------------------------------

// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$.ctor
// il2cpp: void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x408efa0

void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2___ctor
               (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408f110

void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_IDisposable_Dispose
               (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$MoveNext
// il2cpp: bool CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408f120

bool_conflict
CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__MoveNext
          (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomSkins_ErenCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar2;
  bool_conflict bVar3;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  Il2CppObject *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  undefined8 uVar5;
  Il2CppClass *unaff_R15;
  undefined1 auVar6 [16];
  
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
label_0408f26c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    unaff_R15 = (Il2CppClass *)pSVar2->m_Items[0];
    if ((unaff_R15 != (Il2CppClass *)0x0) && ((unaff_R15->_1).image != g_data_057b9c00)) goto label_0408f276;
    if (__this_00 != (CustomSkins_ErenCustomSkinLoader_o *)0x0) {
      auVar6 = (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                         (__this_00,0,(__this_00->klass->vtable)._5_GetCustomSkinPart.method);
      __this_01 = auVar6._0_8_;
      if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        bVar3 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_01,(System_String_o *)unaff_R15,auVar6._8_8_)
        ;
        if ((char)bVar3 != '\0') {
          return 0;
        }
        if (g_data_057ac42a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
          g_data_057ac42a = '\x01';
        }
        __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
        System_Object___ctor(__this_02,(MethodInfo *)0x0);
        *(undefined4 *)&__this_02[1].klass = 0;
        if (__this_02 != (Il2CppObject *)0x0) {
          __this_02[2].monitor = __this_01;
          il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,__this_01);
          __this_02[2].klass = unaff_R15;
          il2cpp_runtime_helper_022b4080(__this_02 + 2,unaff_R15);
          pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             ((UnityEngine_MonoBehaviour_o *)__this_00,
                              (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar4;
          uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar4);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        }
      }
    }
    goto label_0408f26c;
  }
  il2cpp_runtime_helper_022b2ca0();
label_0408f276:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(unaff_R15->_1).namespaze;
}


// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408f280

Il2CppObject *
CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408f290

void CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_Reset
               (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

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


// CustomSkins.ErenCustomSkinLoader.<LoadSkinsFromRPC>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o* __this, const MethodInfo* method);
// 0x408f2d0

Il2CppObject *
CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2__System_Collections_IEnumerator_get_Current
          (CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ErenCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ErenCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ErenCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408eee0

System_String_o *
CustomSkins_ErenCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ErenCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac409 == '\0') {
    il2cpp_runtime_helper_023445d0(&"eren");
    g_data_057ac409 = '\x01';
  }
  return "eren";
}


// CustomSkins.ErenCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ErenCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x408ef10

System_Collections_IEnumerator_o *
CustomSkins_ErenCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ErenCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac40a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__2);
    g_data_057ac40a = '\x01';
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


// CustomSkins.ErenCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ErenCustomSkinLoader__GetCustomSkinPart (CustomSkins_ErenCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x408efc0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ErenCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ErenCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *rendererId;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ac40b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    g_data_057ac40b = '\x01';
  }
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  if (partId == 0) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,(__this->fields)._owner,
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


// CustomSkins.ErenCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ErenCustomSkinLoader___ctor (CustomSkins_ErenCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408f0a0

void CustomSkins_ErenCustomSkinLoader___ctor(CustomSkins_ErenCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac40c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac40c = '\x01';
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


