// Type: PhotonExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/PhotonExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// --------------------------------

// PhotonExtensions$$SetCustomProperty
// il2cpp: void PhotonExtensions__SetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
// 0x5851270
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585128a: cmp byte ptr [rip + 0x1cf3dbf], 0
// asm:   0x5851291: je 0x58512c5
// asm:   0x5851293: test r12, r12
// asm:   0x5851298: jmp 0x5851394

void PhotonExtensions__SetCustomProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *objA;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  
  if (Il2CppMethodInitialized_0754504c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    Il2CppMethodInitialized_0754504c = '\x01';
  }
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar2 = (player->fields)._CustomProperties_k__BackingField,
     pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar2,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar1) {
      pEVar2 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851394;
      objA = ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
    }
    else {
      objA = (Il2CppObject *)0x0;
    }
    bVar1 = System_Object__Equals_5515710(objA,value,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pEVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
    ExitGames_Client_Photon_Hashtable___ctor(pEVar2,(MethodInfo *)0x0);
    if (pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pEVar2,(Il2CppObject *)key,value,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
      Photon_Realtime_Player__SetCustomProperties
                (player,pEVar2,(ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05851394:
  ThrowNullReferenceException();
}


// PhotonExtensions$$SetCustomProperties
// il2cpp: void PhotonExtensions__SetCustomProperties (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, const MethodInfo* method);
// 0x5851420

void PhotonExtensions__SetCustomProperties
               (Photon_Realtime_Player_o *player,
               System_Collections_Generic_Dictionary_string__object__o *dictionary,MethodInfo *method)

{
  int32_t iVar1;
  ExitGames_Client_Photon_Hashtable_o *propertiesToSet;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_0754504d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    Il2CppMethodInitialized_0754504d = '\x01';
    method = extraout_RDX;
  }
  propertiesToSet = PhotonExtensions__GetChangedProperties(player,dictionary,method);
  if (propertiesToSet != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_object__object___get_Count
                      ((System_Collections_Generic_Dictionary_object__object__o *)propertiesToSet,
                       (MethodInfo_4AAD0E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    if (iVar1 < 1) {
      return;
    }
    if (player != (Photon_Realtime_Player_o *)0x0) {
      Photon_Realtime_Player__SetCustomProperties
                (player,propertiesToSet,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                 (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// PhotonExtensions$$ForceUpdateProps
// il2cpp: void PhotonExtensions__ForceUpdateProps (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, System_String_o* firstProperty, System_String_o* secondProperty, const MethodInfo* method);
// 0x5851830

void PhotonExtensions__ForceUpdateProps
               (Photon_Realtime_Player_o *player,
               System_Collections_Generic_Dictionary_string__object__o *dictionary,
               System_String_o *firstProperty,System_String_o *secondProperty,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *__this;
  Il2CppObject *pIVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)firstProperty;
  if (Il2CppMethodInitialized_0754504e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    Il2CppMethodInitialized_0754504e = '\x01';
    method_00 = extraout_RDX;
  }
  __this = PhotonExtensions__GetChangedProperties(player,dictionary,method_00);
  if (dictionary != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                        (Il2CppObject *)firstProperty,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    if (__this != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      ExitGames_Client_Photon_Hashtable__set_Item
                (__this,(Il2CppObject *)firstProperty,pIVar1,(MethodInfo *)0x0);
      pIVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                          (Il2CppObject *)secondProperty,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
      ExitGames_Client_Photon_Hashtable__set_Item
                (__this,(Il2CppObject *)secondProperty,pIVar1,(MethodInfo *)0x0);
      if (player != (Photon_Realtime_Player_o *)0x0) {
        Photon_Realtime_Player__SetCustomProperties
                  (player,__this,(ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetChangedProperties
// il2cpp: ExitGames_Client_Photon_Hashtable_o* PhotonExtensions__GetChangedProperties (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, const MethodInfo* method);
// 0x58514a0
// eh: try 0x58515da..0x58517b9 -> pad 0x58517cd (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58517eb..0x58517f0 -> pad 0x5851813 cleanup
// eh: try 0x5851816..0x5851820 -> pad 0x5851828 catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58515c6: mov rbx, rsp
// asm:   0x58515c9: lea r13, [rip + 0x1a39458]  ; MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey
// asm:   0x58516d6: mov r14, rsp
// asm:   0x58516d9: lea r13, [rip + 0x1a39348]  ; MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey
// asm:   0x58517b9: jmp 0x58517d3
// asm:   0x58517bb: jmp 0x58517d3
// asm:   0x58517bd: jmp 0x58517d3
// asm:   0x58517bf: jmp 0x58517d3
// asm:   0x58517c1: jmp 0x58517d3
// asm:   0x58517c3: jmp 0x58517d3
// asm:   0x58517c5: jmp 0x58517d3
// asm:   0x58517c7: jmp 0x58517d3
// asm:   0x58517c9: jmp 0x58517d3
// asm:   0x58517cb: jmp 0x58517d3
// asm:   0x58517cd: jmp 0x58517d3
// asm:   0x58517cf: jmp 0x58517d3
// asm:   0x58517d1: jmp 0x58517d3
// asm:   0x58517d3: mov rbx, rax
// asm:   0x58517d6: cmp edx, 1
// asm:   0x58517d9: jne 0x5851816
// asm:   0x58517db: mov rdi, rbx
// asm:   0x58517de: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58517e3: mov rbx, qword ptr [rax]
// asm:   0x58517e6: mov qword ptr [rsp + 0x20], rbx
// asm:   0x58517eb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58517f0: lea rax, [rip + 0x1a3e8f1]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x58517f7: mov rsi, qword ptr [rax]
// asm:   0x58517fa: mov rdi, rsp
// asm:   0x58517fd: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5851802: test rbx, rbx
// asm:   0x5851805: je 0x58516c2
// asm:   0x585180b: mov rdi, rbx
// asm:   0x585180e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5851813: mov rbx, rax
// asm:   0x5851816: lea rdi, [rsp + 0x20]
// asm:   0x585181b: call 0x2fce4b0  ; il2cpp_runtime_helper_02fce4b0()
// asm:   0x5851820: mov rdi, rbx
// asm:   0x5851823: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5851828: mov rdi, rax
// asm:   0x585182b: call 0x2ab61e0  ; __clang_call_terminate()

ExitGames_Client_Photon_Hashtable_o *
PhotonExtensions__GetChangedProperties
          (Photon_Realtime_Player_o *player,
          System_Collections_Generic_Dictionary_string__object__o *dictionary,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this;
  Il2CppObject *pIVar4;
  Il2CppObject *objA;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  ExitGames_Client_Photon_Hashtable_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_0754504f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    Il2CppMethodInitialized_0754504f = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  local_50 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(local_50,(MethodInfo *)0x0);
  if ((dictionary == (System_Collections_Generic_Dictionary_string__object__o *)0x0) ||
     (__this = System_Collections_Generic_Dictionary_object__object___get_Keys
                         ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                          (MethodInfo_4AAD0F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys),
     __this == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,__this
             ,(MethodInfo_511A520 *)
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
  local_68.fields._currentKey = local_38;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    local_48._8_8_ = &local_68;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (&local_68,
                       (MethodInfo_4CE7080 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                      );
    if (bVar3) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                 local_68.fields._currentKey,
                 (MethodInfo_4AAD450 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item
                );
      if (Il2CppMethodInitialized_07545050 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        Il2CppMethodInitialized_07545050 = '\x01';
      }
label_058517b4:
      ThrowNullReferenceException();
    }
  }
  else {
    local_48._8_8_ = &local_68;
    pSVar2 = &local_68;
    if (local_50 == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      while (local_48._8_8_ = pSVar2,
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                              ), pIVar5 = local_68.fields._currentKey, bVar3) {
        pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                            local_68.fields._currentKey,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        if (Il2CppMethodInitialized_07545050 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
          Il2CppMethodInitialized_07545050 = '\x01';
        }
        pEVar1 = (player->fields)._CustomProperties_k__BackingField;
        if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_058517b4;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,pIVar5,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (bVar3) {
          pEVar1 = (player->fields)._CustomProperties_k__BackingField;
          if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_058517b4;
          pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,pIVar5,(MethodInfo *)0x0);
        }
        else {
          pIVar5 = (Il2CppObject *)0x0;
        }
        bVar3 = System_Object__Equals_5515710(pIVar5,pIVar4,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_48._8_8_;
        if (!bVar3) {
          ThrowNullReferenceException();
        }
      }
    }
    else {
      while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               (&local_68,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                               ), pIVar5 = local_68.fields._currentKey, bVar3) {
        pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,
                            local_68.fields._currentKey,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        if (Il2CppMethodInitialized_07545050 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
          Il2CppMethodInitialized_07545050 = '\x01';
        }
        pEVar1 = (player->fields)._CustomProperties_k__BackingField;
        if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_058517b4;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,pIVar5,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (bVar3) {
          pEVar1 = (player->fields)._CustomProperties_k__BackingField;
          if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_058517b4;
          objA = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,pIVar5,(MethodInfo *)0x0);
        }
        else {
          objA = (Il2CppObject *)0x0;
        }
        bVar3 = System_Object__Equals_5515710(objA,pIVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)local_50,pIVar5,pIVar4,
                     (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add)
          ;
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (&local_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose);
  return local_50;
}


// PhotonExtensions$$GetCustomProperty
// il2cpp: Il2CppObject* PhotonExtensions__GetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, const MethodInfo* method);
// 0x58513a0

Il2CppObject *
PhotonExtensions__GetCustomProperty(Photon_Realtime_Player_o *player,System_String_o *key,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pEVar1 = (player->fields)._CustomProperties_k__BackingField;
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      pIVar3 = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetIntProperty
// il2cpp: int32_t PhotonExtensions__GetIntProperty (Photon_Realtime_Player_o* player, System_String_o* key, int32_t defaultValue, const MethodInfo* method);
// 0x58518f0

int32_t PhotonExtensions__GetIntProperty
                  (Photon_Realtime_Player_o *player,System_String_o *key,int32_t defaultValue,
                  MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  int32_t *piVar3;
  
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851978:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar2) {
    pEVar1 = (player->fields)._CustomProperties_k__BackingField;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851978;
    obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_07556710)) {
      piVar3 = il2cpp_vm_Object_Unbox(obj);
      defaultValue = *piVar3;
    }
  }
  return defaultValue;
}


// PhotonExtensions$$GetFloatProperty
// il2cpp: float PhotonExtensions__GetFloatProperty (Photon_Realtime_Player_o* player, System_String_o* key, float defaultValue, const MethodInfo* method);
// 0x5851980

float PhotonExtensions__GetFloatProperty
                (Photon_Realtime_Player_o *player,System_String_o *key,float defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  float *pfVar3;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851a18:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  fStack_14 = defaultValue;
  if (bVar2) {
    pEVar1 = (player->fields)._CustomProperties_k__BackingField;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851a18;
    obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_07556740)) {
      pfVar3 = il2cpp_vm_Object_Unbox(obj);
      fStack_14 = *pfVar3;
    }
  }
  return fStack_14;
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_Player_o* player, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x5851a20

bool PhotonExtensions__GetBoolProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,bool defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  char *pcVar3;
  
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851aac:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar2) {
    pEVar1 = (player->fields)._CustomProperties_k__BackingField;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851aac;
    obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_075566f0)) {
      pcVar3 = il2cpp_vm_Object_Unbox(obj);
      defaultValue = *pcVar3 != '\0';
    }
  }
  return defaultValue;
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x5851ac0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5851ada: cmp byte ptr [rip + 0x1cf356f], 0
// asm:   0x5851ae1: je 0x5851b15
// asm:   0x5851ae3: test rbx, rbx
// asm:   0x5851ae8: jmp 0x5851c31
// asm:   0x5851c29: mov r12, r15
// asm:   0x5851c2c: jmp 0x5851b86

System_String_o *
PhotonExtensions__GetStringProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_07545051 = '\x01';
  }
  if (Il2CppMethodInitialized_07545050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545050 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851c31:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar2) {
    pEVar1 = (player->fields)._CustomProperties_k__BackingField;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851c31;
    pSVar3 = (System_String_o *)
             ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_o *)0x0) && (pSVar3->klass == g_data_07556758)) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      bVar2 = System_String__op_Equality
                        (key,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        bVar2 = System_String__op_Equality
                          (key,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,(MethodInfo *)0x0);
        if (!bVar2) {
          return pSVar3;
        }
      }
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      pSVar3 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(player,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return defaultValue;
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x5851c40

System_String_o *
PhotonExtensions__GetStringProperty_5751c40
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545052 = '\x01';
  }
  if ((room == (Photon_Realtime_RoomInfo_o *)0x0) ||
     (pEVar1 = (room->fields).customProperties, pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851cc4:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar2) {
    pEVar1 = (room->fields).customProperties;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851cc4;
    pSVar3 = (System_String_o *)
             ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar3->klass == g_data_07556758)) {
      defaultValue = pSVar3;
    }
  }
  return defaultValue;
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x5851cd0

bool PhotonExtensions__GetBoolProperty_5751cd0
               (Photon_Realtime_RoomInfo_o *room,System_String_o *key,bool defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  char *pcVar3;
  
  if (Il2CppMethodInitialized_07545053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_07545053 = '\x01';
  }
  if ((room == (Photon_Realtime_RoomInfo_o *)0x0) ||
     (pEVar1 = (room->fields).customProperties, pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
label_05851d5c:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar2) {
    pEVar1 = (room->fields).customProperties;
    if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05851d5c;
    obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
    if ((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_075566f0)) {
      pcVar3 = il2cpp_vm_Object_Unbox(obj);
      defaultValue = *pcVar3 != '\0';
    }
  }
  return defaultValue;
}


// PhotonExtensions$$HasSpawnPoint
// il2cpp: bool PhotonExtensions__HasSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5851d70

bool PhotonExtensions__HasSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07545054 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,"null",
                 in_RCX);
  bVar1 = System_String__op_Inequality(a,"null",(MethodInfo *)0x0);
  return bVar1;
}


// PhotonExtensions$$GetSpawnPoint
// il2cpp: UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5851df0

UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar2;
  int32_t key;
  System_String_o *__this_00;
  System_String_array *pSVar3;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *in_RCX;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_Fields UVar6;
  Il2CppObject *local_40;
  float local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07545055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"0,0,0");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07545055 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_28._0_4_ = (pUVar1->zeroVector).fields.x;
  local_28._4_4_ = (pUVar1->zeroVector).fields.y;
  uStack_20 = 0;
  local_38 = (pUVar1->zeroVector).fields.z;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  __this_00 = PhotonExtensions__GetStringProperty
                        (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
                         "0,0,0",in_RCX);
  if (__this_00 != (System_String_o *)0x0) {
    bVar2 = System_String__Contains(__this_00,",",(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_array *)0x0) {
        if ((int)pSVar3->max_length != 0) {
          fVar4 = System_Single__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
          local_28 = CONCAT44(extraout_XMM0_Db,fVar4);
          uStack_20 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          if ((pSVar3->max_length & 0xfffffffe) != 0) {
            local_38 = System_Single__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar3->max_length) {
              fVar4 = System_Single__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
              local_28._4_4_ = local_38;
              local_38 = fVar4;
              goto label_05851f62;
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      key = System_Int32__Parse(__this_00,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                          (__this,key,&local_40,
                           (MethodInfo_4A114B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
        if (!bVar2) {
label_05851f62:
          UVar5.fields.y = local_28._4_4_;
          UVar5.fields.x = (float)(undefined4)local_28;
          UVar5.fields.z = local_38;
          return (UnityEngine_Vector3_o)UVar5.fields;
        }
        if ((local_40 != (Il2CppObject *)0x0) && (local_40[1].monitor != (UnityEngine_GameObject_o *)0x0)) {
          __this_01 = UnityEngine_GameObject__get_transform(local_40[1].monitor,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UVar6 = (UnityEngine_Vector3_Fields)
                    UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
            return (UnityEngine_Vector3_o)UVar6;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


