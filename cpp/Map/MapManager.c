// Type: Map.MapManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapManager.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapManager.cs
// --------------------------------

// Map.MapManager$$Init
// il2cpp: void Map_MapManager__Init (const MethodInfo* method);
// 0x181eb2ad0

void Map_MapManager__Init(MethodInfo *method)

{
  Map_MapManager_o *value;
  Map_MapLoader_o *value_00;
  Events_OnPreLoadScene_o *pEVar1;
  Map_MapScriptBasicMaterial_o *__this;
  Utility_Color255_o *__this_00;
  Events_OnLoadScene_o *value_01;
  
  if (Il2CppMethodInitialized_1843450e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapManager);
    Il2CppMethodInitialized_1843450e1 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Map_MapManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapManager);
  TypeInfo_Map_MapManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->_instance,value);
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  Map_MapTransfer__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (Il2CppMethodInitialized_18434509d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Transparent");
    Il2CppMethodInitialized_18434509d = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  value_00 = Utility_SingletonFactory__CreateSingleton_object_
                       ((Il2CppObject *)TypeInfo_Map_MapLoader->static_fields->_instance,
                        (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader);
  TypeInfo_Map_MapLoader->static_fields->_instance = value_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_instance,value_00);
  pEVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)pEVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_MapLoader_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(pEVar1,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
  Map_MapScriptBasicMaterial___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Map_MapScriptBasicMaterial_o *)0x0) {
    (__this->fields).Shader = "Transparent";
    Il2CppCodeGenWriteBarrier(&(__this->fields).Shader,"Transparent");
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,0x7e,0xff,0xff,0x50,
               (MethodInfo *)0x0);
    (__this->fields).Color = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Color,__this_00);
    TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial,__this);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__Init((MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    Map_BuiltinMapPrefabs__Init((MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    Map_BuiltinMapTextures__Init((MethodInfo *)0x0);
    value_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
    Events_OnLoadScene___ctor
              ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_MapManager_OnLoadScene,(MethodInfo *)0x0);
    Events_EventManager__add_OnLoadScene(value_01,(MethodInfo *)0x0);
    pEVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
    Events_OnPreLoadScene___ctor
              ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)pEVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_MapManager_OnPreLoadScene,(MethodInfo *)0x0);
    Events_EventManager__add_OnPreLoadScene(pEVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$TryGetRandomTagXform
// il2cpp: bool Map_MapManager__TryGetRandomTagXform (System_String_o* tag, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x181eb4180

bool Map_MapManager__TryGetRandomTagXform
               (System_String_o *tag,UnityEngine_Transform_o **xform,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *value;
  
  if (Il2CppMethodInitialized_1843450e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450e2 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (!bVar1) {
    *xform = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier(xform,(void *)0x0);
    return false;
  }
  if (exists != (UnityEngine_Object_o *)0x0) {
    value = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
    *xform = value;
    Il2CppCodeGenWriteBarrier(xform,value);
    return true;
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$TryGetRandomTagsXform
// il2cpp: bool Map_MapManager__TryGetRandomTagsXform (System_Collections_Generic_List_string__o* tags, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x181eb46f0
// eh: try 0x181eb47c0..0x181eb48cc -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb487a: mov rdx, qword ptr [rip + 0x21e3097]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181eb4881: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb4886: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb488b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eb4890: test rcx, rcx
// asm:   0x181eb4893: jne 0x181eb48cc
// asm:   0x181eb4895: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x181eb48cc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Map_MapManager__TryGetRandomTagsXform
               (System_Collections_Generic_List_string__o *tags,UnityEngine_Transform_o **xform,
               MethodInfo *method)

{
  Il2CppObject *tag;
  bool bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *value;
  undefined1 local_40 [16];
  System_String_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843450e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450e3 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (tags == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)tags,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = (Il2CppObject *)local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    tag = local_28.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      *xform = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(xform,(void *)0x0);
      return false;
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag((System_String_o *)tag,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  } while (!bVar1);
  if (exists != (UnityEngine_Object_o *)0x0) {
    value = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
    *xform = value;
    Il2CppCodeGenWriteBarrier(xform,value);
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    return true;
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$TryGetRandomTagXforms
// il2cpp: bool Map_MapManager__TryGetRandomTagXforms (System_String_o* tag, UnityEngine_Vector3_o avoidPosition, float avoidRadius, int32_t count, System_Collections_Generic_List_Transform__o** xforms, const MethodInfo* method);
// 0x181eb4250
// eh: try 0x181eb4450..0x181eb46e5 -> pad 0x1833190b0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb4449: nop dword ptr [rax]
// asm:   0x181eb4510: mov rdx, qword ptr [rip + 0x21d6fb1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x181eb4517: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181eb451c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb4521: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181eb4526: test rcx, rcx
// asm:   0x181eb4529: jne 0x181eb46e5
// asm:   0x181eb452f: xor r14d, r14d
// asm:   0x181eb4532: mov r13, qword ptr [rsp + 0x100]
// asm:   0x181eb453a: movss xmm7, dword ptr [rsp + 0xf0]
// asm:   0x181eb4543: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x181eb457a: xorps xmm6, xmm6
// asm:   0x181eb457d: mov r15, qword ptr [rsp + 0xe8]
// asm:   0x181eb46e5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833190b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833190b5: push rbp
// asm:   0x1833190b6: sub rsp, 0x20
// asm:   0x1833190ba: mov rbp, rdx
// asm:   0x1833190bd: mov rax, qword ptr [rbp + 0x30]
// asm:   0x1833190c1: mov rcx, qword ptr [rax]
// asm:   0x1833190c4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x1833190c8: movabs rax, 0
// asm:   0x1833190d2: add rsp, 0x20
// asm:   0x1833190d6: pop rbp
// asm:   0x1833190d7: ret 

bool Map_MapManager__TryGetRandomTagXforms
               (System_String_o *tag,UnityEngine_Vector3_o *avoidPosition,float avoidRadius,int32_t count,
               System_Collections_Generic_List_Transform__o **xforms,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Transform_array *pUVar3;
  System_Collections_Generic_List_Transform__o *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t index;
  System_Collections_Generic_List_Transform__o *__this_00;
  System_Collections_Generic_List_Transform__o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  int iVar10;
  int iVar11;
  UnityEngine_Vector3_o *pUVar12;
  float fVar13;
  System_Collections_Generic_List_T__o *local_res8;
  UnityEngine_Vector3_o *local_res10;
  float local_res18;
  int32_t local_res20;
  System_Collections_Generic_List_Transform__o *local_b8;
  float local_b0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  undefined1 local_70 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_68;
  Il2CppObject *local_60;
  
  local_res10 = avoidPosition;
  local_res18 = avoidRadius;
  local_res20 = count;
  if (Il2CppMethodInitialized_1843450e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_ctor_40e9478);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450e4 = '\x01';
  }
  iVar10 = 0;
  local_res8 = (System_Collections_Generic_List_T__o *)0x0;
  local_70 = (undefined1  [8])0x0;
  pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  *xforms = (System_Collections_Generic_List_Transform__o *)0x0;
  Il2CppCodeGenWriteBarrier(xforms,(void *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_181eb46c4:
    ThrowNullReferenceException();
  }
  bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)tag,(Il2CppObject **)&local_res8,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_TryGetValue);
  if (bVar6) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
    *xforms = pSVar7;
    Il2CppCodeGenWriteBarrier(xforms,pSVar7);
    if (local_res8 == (System_Collections_Generic_List_T__o *)0x0) goto label_181eb46c4;
    local_b8 = __this_00;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,local_res8,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_70 = (undefined1  [8])local_88._0_8_;
    pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88._8_8_;
    local_60 = local_78;
    local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_88._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_70,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext), bVar6
          ) {
      if (local_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_60[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_GameObject__get_transform(local_60[1].monitor,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_Transform_Add;
      if (__this_00 == (System_Collections_Generic_List_Transform__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 == (UnityEngine_Transform_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = pUVar8;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,pUVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)pSVar7,
               (System_Collections_Generic_IEnumerable_T__o *)__this_00,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_Transform_ctor_40e9478);
    pUVar12 = local_res10;
    iVar11 = iVar10;
    if (0 < local_res20) {
      do {
        if (pSVar7 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_181eb46c4;
        if ((pSVar7->fields)._size < 1) {
          pSVar7 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
          System_Collections_Generic_List_object____ctor_94fb10
                    ((System_Collections_Generic_List_object__o *)pSVar7,
                     (System_Collections_Generic_IEnumerable_T__o *)__this_00,
                     (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_Transform_ctor_40e9478);
          if (pSVar7 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_181eb46c4;
        }
        index = UnityEngine_Random__RandomRangeInt(0,(pSVar7->fields)._size,(MethodInfo *)0x0);
        pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item
                           );
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_181eb46c4;
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_88,pUVar8,(MethodInfo *)0x0);
        if (avoidRadius <= 0.0) {
label_181eb4645:
          pSVar4 = *xforms;
          pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar7,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          if (pSVar4 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_181eb46c4;
          il2cpp_runtime_helper_180012890(pSVar4,pUVar8,MethodInfo_System_Collections_Generic_List_Transform_Add);
          pUVar12 = local_res10;
        }
        else {
          local_b8 = *(System_Collections_Generic_List_Transform__o **)&pUVar12->fields;
          local_b0 = (pUVar12->fields).z;
          local_98._0_4_ = (pUVar9->fields).x;
          local_98._4_4_ = (pUVar9->fields).y;
          local_90 = (pUVar9->fields).z;
          fVar13 = (float)il2cpp_runtime_helper_180562c80(&local_98,&local_b8,0);
          if ((avoidRadius < fVar13) || (100 < iVar11)) goto label_181eb4645;
          iVar10 = iVar10 + -1;
          iVar11 = iVar11 + 1;
        }
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar7,index,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Transform_RemoveAt);
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_res20);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


// Map.MapManager$$GetRandomTag
// il2cpp: UnityEngine_GameObject_o* Map_MapManager__GetRandomTag (System_String_o* tag, const MethodInfo* method);
// 0x181eb2950

UnityEngine_GameObject_o * Map_MapManager__GetRandomTag(System_String_o *tag,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_T__o *items;
  Map_MapObject_o *pMVar4;
  
  if (Il2CppMethodInitialized_1843450e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_1843450e5 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this != (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)tag,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar2) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)tag,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item),
       pIVar3 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar3[1].monitor < 1) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        items = (System_Collections_Generic_List_T__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar1,(Il2CppObject *)tag,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pMVar4 = Utility_RandomGen__ChooseRandom_object_
                           (items,(MethodInfo_732DC0 *)MethodInfo_MiscExtensions_GetRandomItem_MapObject);
        if (pMVar4 != (Map_MapObject_o *)0x0) {
          return (pMVar4->fields).GameObject;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$OnPreLoadScene
// il2cpp: void Map_MapManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181eb3880

void Map_MapManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_1843450e6 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  TypeInfo_Map_MapManager->static_fields->MapLoaded = false;
  return;
}


// Map.MapManager$$OnLoadScene
// il2cpp: void Map_MapManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181eb34c0

void Map_MapManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  
  if (Il2CppMethodInitialized_1843450e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_1843450e7 = '\x01';
  }
  if (sceneName != 2) {
    if (sceneName != 3) {
      customAssets = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string)
      ;
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)customAssets,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      objects = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)objects,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__StartLoadObjects
                (customAssets,objects,(Map_MapScriptOptions_o *)0x0,(Settings_WeatherSet_o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    Map_MapManager__StartMapEditor((MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  Map_MapManager__StartInGame((MethodInfo *)0x0);
  return;
}


// Map.MapManager$$StartInGame
// il2cpp: void Map_MapManager__StartInGame (const MethodInfo* method);
// 0x181eb38d0
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb3de8: mov rax, qword ptr [rip + 0x220c3d9]  ; TypeInfo_Map_MapManager
// asm:   0x181eb3def: mov rdx, qword ptr [rdx + 0x20]
// asm:   0x181eb3df3: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x181eb3dfa: mov qword ptr [rcx + 0x28], rdx
// asm:   0x181eb3dfe: mov rax, qword ptr [rip + 0x220c3c3]  ; TypeInfo_Map_MapManager
// asm:   0x181eb3e05: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x181eb3e0c: add rcx, 0x28
// asm:   0x181eb3e10: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181eb3e15: xor edx, edx
// asm:   0x181eb3e17: movzx ecx, bl
// asm:   0x181eb3e1a: call 0x181eb2e60  ; Map_MapManager__LoadMap()
// asm:   0x181eb3e1f: jmp 0x181eb3b3b

void Map_MapManager__StartInGame(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *category;
  Photon_Pun_PhotonView_o *__this;
  Photon_Realtime_Player_o *__this_00;
  bool bVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  Map_MapScript_o *pMVar8;
  Photon_Pun_PhotonMessageInfo_o *pPVar9;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_1843450e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinMapRPC");
    Il2CppMethodInitialized_1843450e8 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    bVar5 = System_String__op_Equality((pSVar3->fields)._value,"Custom",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar3 = (pSVar2->fields).MapName;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        pSVar7 = (pSVar3->fields)._value;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar7 = Map_BuiltinLevels__LoadMap("Custom",pSVar7,(MethodInfo *)0x0);
        pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
        Map_MapScript___ctor(pMVar8,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        TypeInfo_Map_MapManager->static_fields->MapScript = pMVar8;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->MapScript,pMVar8);
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar8 != (Map_MapScript_o *)0x0) {
          (*(pMVar8->klass->vtable)._5_Deserialize.methodPtr)
                    (pMVar8,pSVar7,(pMVar8->klass->vtable)._5_Deserialize.method);
          pSVar3 = (pSVar2->fields).MapName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            pSVar7 = (pSVar3->fields)._value;
            if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
            }
            Map_MapTransfer__Start(pSVar7,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pPVar9 = Utility_Util__CreateLocalPhotonInfo(&local_28,(MethodInfo *)0x0);
            __this_00 = (pPVar9->fields).Sender;
            if (Il2CppMethodInitialized_1843450eb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
              Il2CppMethodInitialized_1843450eb = '\x01';
            }
            if ((__this_00 != (Photon_Realtime_Player_o *)0x0) &&
               (bVar5 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0), !bVar5)) {
              return;
            }
            if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
            }
            pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
            if (pMVar8 != (Map_MapScript_o *)0x0) {
              bVar5 = System_String__op_Inequality
                                (TypeInfo_Map_MapManager->static_fields->LastMapHash,(pMVar8->fields).MapHash,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                bVar5 = true;
              }
              else {
                if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
                }
                pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                    (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
                   (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0))
                goto label_181eb3e24;
                bVar5 = System_String__op_Inequality
                                  (TypeInfo_Map_MapManager->static_fields->LastGameMode,
                                   (pSVar3->fields)._value,(MethodInfo *)0x0);
              }
              if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
              }
              pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
              if (pMVar8 != (Map_MapScript_o *)0x0) {
                pSVar7 = (pMVar8->fields).MapHash;
                TypeInfo_Map_MapManager->static_fields->LastMapHash = pSVar7;
                Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastMapHash,pSVar7);
                pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
                    (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
                   (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
                  pSVar7 = (pSVar3->fields)._value;
                  TypeInfo_Map_MapManager->static_fields->LastGameMode = pSVar7;
                  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastGameMode,pSVar7);
                  Map_MapManager__LoadMap(bVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pSVar3 = (pSVar2->fields).MapCategory;
      if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
         (pSVar4 = (pSVar2->fields).MapName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        pSVar7 = (pSVar4->fields)._value;
        category = (pSVar3->fields)._value;
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        Map_MapTransfer__UseBuiltin(category,pSVar7,(MethodInfo *)0x0);
        TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = true;
        __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        pSVar3 = (pSVar2->fields).MapCategory;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar7 = (pSVar3->fields)._value;
          if ((pSVar7 != (System_String_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar7,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
label_181eb3e4a:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar7;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar7);
          pSVar3 = (pSVar2->fields).MapName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            pSVar7 = (pSVar3->fields)._value;
            if ((pSVar7 != (System_String_o *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar7,(((parameters->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if ((uint)parameters->max_length < 2) goto label_181eb3e4a;
            parameters->m_Items[1] = (Il2CppObject *)pSVar7;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pSVar7);
            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_181eb3e24:
  ThrowNullReferenceException();
}


// Map.MapManager$$StartMapEditor
// il2cpp: void Map_MapManager__StartMapEditor (const MethodInfo* method);
// 0x181eb3e50

void Map_MapManager__StartMapEditor(MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_StringSetting_o *__this;
  Map_MapScriptCustomAssets_o *pMVar2;
  Map_MapScriptObjects_o *pMVar3;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  System_Collections_Generic_List_string__o *customAssets;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  bool bVar4;
  System_String_array *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Map_MapScript_o *pMVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_1843450e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Untitled");
    Il2CppMethodInitialized_1843450e9 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (pSVar1 == (Settings_MapEditorSettings_o *)0x0) goto label_181eb4176;
  __this = (pSVar1->fields).CurrentMap;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  source = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (__this == (Settings_StringSetting_o *)0x0) goto label_181eb4176;
  bVar4 = System_String__op_Equality
                    ((__this->fields)._value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar4) {
label_181eb3fae:
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181eb4176;
    if ((__this_00->fields)._size < 1) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)"Untitled",
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar6 = (__this->fields)._value;
      pMVar5 = Map_MapScript__CreateDefault((MethodInfo *)0x0);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap(pSVar6,pMVar5,(MethodInfo *)0x0);
    }
    else {
      pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pSVar6,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181eb4176;
    bVar4 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)(__this->fields)._value,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar4) goto label_181eb3fae;
  }
  pMVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(pMVar5,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  TypeInfo_Map_MapManager->static_fields->MapScript = pMVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->MapScript,pMVar5);
  pSVar6 = (__this->fields)._value;
  pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = Map_BuiltinLevels__LoadMap("Custom",pSVar6,(MethodInfo *)0x0);
  if (pMVar5 != (Map_MapScript_o *)0x0) {
    (*(pMVar5->klass->vtable)._5_Deserialize.methodPtr)
              (pMVar5,pSVar6,(pMVar5->klass->vtable)._5_Deserialize.method);
    pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (((pMVar5 != (Map_MapScript_o *)0x0) &&
        (pMVar2 = (pMVar5->fields).CustomAssets, pMVar2 != (Map_MapScriptCustomAssets_o *)0x0)) &&
       (pMVar3 = (TypeInfo_Map_MapManager->static_fields->MapScript->fields).Objects,
       pMVar3 != (Map_MapScriptObjects_o *)0x0)) {
      objects = (pMVar3->fields).Objects;
      customAssets = (pMVar2->fields).CustomAssets;
      pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
      options = (pMVar5->fields).Options;
      weather = (pMVar5->fields).Weather;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,true,(MethodInfo *)0x0);
      return;
    }
  }
label_181eb4176:
  ThrowNullReferenceException();
}


// Map.MapManager$$OnLoadBuiltinMapRPC
// il2cpp: void Map_MapManager__OnLoadBuiltinMapRPC (System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181eb2ff0

void Map_MapManager__OnLoadBuiltinMapRPC
               (System_String_o *category,System_String_o *name,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *__this;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Map_MapScript_o *pMVar6;
  
  if (Il2CppMethodInitialized_1843450ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843450ea = '\x01';
  }
  __this = (info->fields).Sender;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar4 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar5 = Map_BuiltinLevels__LoadMap(category,name,(MethodInfo *)0x0);
    pMVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
    Map_MapScript___ctor(pMVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    TypeInfo_Map_MapManager->static_fields->MapScript = pMVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->MapScript,pMVar6);
    pMVar6 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar6 != (Map_MapScript_o *)0x0) {
      (*(pMVar6->klass->vtable)._5_Deserialize.methodPtr)
                (pMVar6,pSVar5,(pMVar6->klass->vtable)._5_Deserialize.method);
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      TypeInfo_Map_MapTransfer->static_fields->MapHash = pSVar5;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->MapHash,pSVar5);
      pMVar6 = TypeInfo_Map_MapManager->static_fields->MapScript;
      if (pMVar6 != (Map_MapScript_o *)0x0) {
        bVar4 = System_String__op_Inequality
                          (TypeInfo_Map_MapManager->static_fields->LastMapHash,(pMVar6->fields).MapHash,
                           (MethodInfo *)0x0);
        if (bVar4) {
          bVar4 = true;
        }
        else {
          if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
          }
          pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
              (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
             (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0))
          goto label_181eb32e2;
          bVar4 = System_String__op_Inequality
                            (TypeInfo_Map_MapManager->static_fields->LastGameMode,(pSVar3->fields)._value,
                             (MethodInfo *)0x0);
        }
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar6 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar6 != (Map_MapScript_o *)0x0) {
          pSVar5 = (pMVar6->fields).MapHash;
          TypeInfo_Map_MapManager->static_fields->LastMapHash = pSVar5;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastMapHash,pSVar5);
          pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
              (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
             (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
            pSVar5 = (pSVar3->fields)._value;
            TypeInfo_Map_MapManager->static_fields->LastGameMode = pSVar5;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastGameMode,pSVar5);
            Map_MapManager__LoadMap(bVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_181eb32e2:
  ThrowNullReferenceException();
}


// Map.MapManager$$OnLoadCachedMapRPC
// il2cpp: void Map_MapManager__OnLoadCachedMapRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181eb32f0

void Map_MapManager__OnLoadCachedMapRPC(Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  System_String_o *pSVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_1843450eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843450eb = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar6 = Photon_Realtime_Player__get_IsMasterClient((info->fields).Sender,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (pMVar1 != (Map_MapScript_o *)0x0) {
    bVar6 = System_String__op_Inequality
                      (TypeInfo_Map_MapManager->static_fields->LastMapHash,(pMVar1->fields).MapHash,
                       (MethodInfo *)0x0);
    if (bVar6) {
      bVar6 = true;
    }
    else {
      if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
          (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_InGameGeneralSettings_o *)0x0)) ||
         (pSVar5 = (pSVar4->fields).GameMode, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_181eb34ba;
      bVar6 = System_String__op_Inequality
                        (TypeInfo_Map_MapManager->static_fields->LastGameMode,(pSVar5->fields)._value,
                         (MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar1 != (Map_MapScript_o *)0x0) {
      pSVar2 = (pMVar1->fields).MapHash;
      TypeInfo_Map_MapManager->static_fields->LastMapHash = pSVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastMapHash,pSVar2);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).GameMode, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        pSVar2 = (pSVar5->fields)._value;
        TypeInfo_Map_MapManager->static_fields->LastGameMode = pSVar2;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastGameMode,pSVar2);
        Map_MapManager__LoadMap(bVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181eb34ba:
  ThrowNullReferenceException();
}


// Map.MapManager$$LoadMap
// il2cpp: void Map_MapManager__LoadMap (bool mapChanged, const MethodInfo* method);
// 0x181eb2e60

void Map_MapManager__LoadMap(bool mapChanged,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScriptCustomAssets_o *pMVar2;
  Map_MapScriptObjects_o *pMVar3;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_1843450ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomMapHash");
    Il2CppMethodInitialized_1843450ec = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  TypeInfo_Map_MapManager->static_fields->NeedsNavMeshUpdate = mapChanged;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  PhotonExtensions__SetCustomProperty
            (player,"CustomMapHash",(Il2CppObject *)TypeInfo_Map_MapTransfer->static_fields->MapHash,
             (MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (((pMVar1 != (Map_MapScript_o *)0x0) &&
      (pMVar2 = (pMVar1->fields).CustomAssets, pMVar2 != (Map_MapScriptCustomAssets_o *)0x0)) &&
     (pMVar3 = (TypeInfo_Map_MapManager->static_fields->MapScript->fields).Objects,
     pMVar3 != (Map_MapScriptObjects_o *)0x0)) {
    customAssets = (pMVar2->fields).CustomAssets;
    objects = (pMVar3->fields).Objects;
    pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
    options = (pMVar1->fields).Options;
    weather = (pMVar1->fields).Weather;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$OnPlayerEnteredRoom
// il2cpp: void Map_MapManager__OnPlayerEnteredRoom (Map_MapManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181eb3600
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb3840: xor edx, edx
// asm:   0x181eb3842: mov rcx, rbp
// asm:   0x181eb3845: call 0x181edcb10  ; Map_MapTransfer__Transfer()
// asm:   0x181eb384a: jmp 0x181eb3811

void Map_MapManager__OnPlayerEnteredRoom
               (Map_MapManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *pSVar4;
  bool bVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  
  if (Il2CppMethodInitialized_1843450ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinMapRPC");
    Il2CppMethodInitialized_1843450ed = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if (TypeInfo_Map_MapTransfer->static_fields->MapTransferReady != false) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) {
        bVar5 = System_String__op_Equality((pSVar3->fields)._value,"Custom",(MethodInfo *)0x0);
        if (bVar5) {
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          Map_MapTransfer__Transfer(player,(MethodInfo *)0x0);
          return;
        }
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        pSVar3 = (pSVar2->fields).MapCategory;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar4 = (pSVar3->fields)._value;
          if ((pSVar4 != (System_String_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
label_181eb3872:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar4);
          pSVar3 = (pSVar2->fields).MapName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            pSVar4 = (pSVar3->fields)._value;
            if ((pSVar4 != (System_String_o *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if ((uint)parameters->max_length < 2) goto label_181eb3872;
            parameters->m_Items[1] = (Il2CppObject *)pSVar4;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pSVar4);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_1d4d8d0
                        (__this_00,"LoadBuiltinMapRPC",player,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Map.MapManager$$.ctor
// il2cpp: void Map_MapManager___ctor (Map_MapManager_o* __this, const MethodInfo* method);
// 0x18190eda0

void
Map_MapManager___ctor(Map_MapManager_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$.cctor
// il2cpp: void Map_MapManager___cctor (const MethodInfo* method);
// 0x181eb48e0

void Map_MapManager___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843450ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_1843450ee = '\x01';
  }
  TypeInfo_Map_MapManager->static_fields->NeedsNavMeshUpdate = true;
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_Map_MapManager->static_fields->LastMapHash = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastMapHash,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_Map_MapManager->static_fields->LastGameMode = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->LastGameMode,pSVar1);
  return;
}


