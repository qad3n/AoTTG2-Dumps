// Type: PhotonExtensions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PhotonExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// --------------------------------

// PhotonExtensions$$SetCustomProperty
// il2cpp: void PhotonExtensions__SetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
// 0x181dad0f0

void PhotonExtensions__SetCustomProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  Unity_VisualScripting_Namespace_o *a;
  ExitGames_Client_Photon_Hashtable_o *pEVar2;
  
  if (Il2CppMethodInitialized_1843448f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    Il2CppMethodInitialized_1843448f6 = '\x01';
  }
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar2 = (player->fields)._CustomProperties_k__BackingField,
     pEVar2 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar2,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar1) {
      pEVar2 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dad206;
      a = (Unity_VisualScripting_Namespace_o *)
          ExitGames_Client_Photon_Hashtable__get_Item(pEVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
    }
    else {
      a = (Unity_VisualScripting_Namespace_o *)0x0;
    }
    bVar1 = Unity_VisualScripting_Namespace__op_Equality
                      (a,(Unity_VisualScripting_Namespace_o *)value,(MethodInfo *)0x0);
    if (!bVar1) {
      pEVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
      ExitGames_Client_Photon_Hashtable___ctor(pEVar2,(MethodInfo *)0x0);
      if (pEVar2 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dad206;
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pEVar2,(Il2CppObject *)key,value,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
      Photon_Realtime_Player__SetCustomProperties
                (player,pEVar2,(ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_181dad206:
  ThrowNullReferenceException();
}


// PhotonExtensions$$SetCustomProperties
// il2cpp: void PhotonExtensions__SetCustomProperties (Photon_Realtime_Player_o* player, System_Collections_Generic_Dictionary_string__object__o* dictionary, const MethodInfo* method);
// 0x181dace40
// eh: try 0x181dacf70..0x181dad0e1 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dad04e: mov rdx, qword ptr [rip + 0x231052b]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x181dad055: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181dad05a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dad05f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dad064: test rcx, rcx
// asm:   0x181dad067: jne 0x181dad0e1
// asm:   0x181dad069: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x181dad071: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x181dad0e1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void PhotonExtensions__SetCustomProperties
               (Photon_Realtime_Player_o *player,
               System_Collections_Generic_Dictionary_string__object__o *dictionary,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  Il2CppObject *key;
  bool bVar2;
  int32_t iVar3;
  ExitGames_Client_Photon_Hashtable_o *__this;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Unity_VisualScripting_Namespace_o *b;
  Unity_VisualScripting_Namespace_o *a;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_1843448f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
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
    Il2CppMethodInitialized_1843448f7 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(__this,(MethodInfo *)0x0);
  if (dictionary != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)dictionary,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_48,(MethodInfo_156BDD0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                          );
        key = local_38;
        if (!bVar2) break;
        b = (Unity_VisualScripting_Namespace_o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)dictionary,local_38,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        if (Il2CppMethodInitialized_1843448f8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
          Il2CppMethodInitialized_1843448f8 = '\x01';
        }
        if (player == (Photon_Realtime_Player_o *)0x0) {
          ThrowNullReferenceException();
        }
        pEVar1 = (player->fields)._CustomProperties_k__BackingField;
        if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,key,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (bVar2) {
          pEVar1 = (player->fields)._CustomProperties_k__BackingField;
          if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
            ThrowNullReferenceException();
          }
          a = (Unity_VisualScripting_Namespace_o *)
              ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,key,(MethodInfo *)0x0);
        }
        else {
          a = (Unity_VisualScripting_Namespace_o *)0x0;
        }
        bVar2 = Unity_VisualScripting_Namespace__op_Equality(a,b,(MethodInfo *)0x0);
        if (!bVar2) {
          if (__this == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this,key,(Il2CppObject *)b,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add)
          ;
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
                );
      if (__this != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13CDEB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
        if (0 < iVar3) {
          if (player == (Photon_Realtime_Player_o *)0x0) goto label_181dad0c5;
          Photon_Realtime_Player__SetCustomProperties
                    (player,__this,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                     (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_181dad0c5:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetCustomProperty
// il2cpp: Il2CppObject* PhotonExtensions__GetCustomProperty (Photon_Realtime_Player_o* player, System_String_o* key, const MethodInfo* method);
// 0x181dac6c0

Il2CppObject *
PhotonExtensions__GetCustomProperty(Photon_Realtime_Player_o *player,System_String_o *key,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
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
// 0x181dac820

int32_t PhotonExtensions__GetIntProperty
                  (Photon_Realtime_Player_o *player,System_String_o *key,int32_t defaultValue,
                  MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  int32_t *piVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dac8e0;
      obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354e08) {
          pIVar4 = obj;
        }
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
            piVar3 = il2cpp_object_unbox(obj);
            return *piVar3;
          }
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
      }
    }
    return defaultValue;
  }
label_181dac8e0:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetFloatProperty
// il2cpp: float PhotonExtensions__GetFloatProperty (Photon_Realtime_Player_o* player, System_String_o* key, float defaultValue, const MethodInfo* method);
// 0x181dac740

float PhotonExtensions__GetFloatProperty
                (Photon_Realtime_Player_o *player,System_String_o *key,float defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  float *pfVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dac803;
      obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354e38) {
          pIVar4 = obj;
        }
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class == (g_data_184354e38->_1).element_class) {
            pfVar3 = il2cpp_object_unbox(obj);
            return *pfVar3;
          }
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e38);
        }
      }
    }
    return defaultValue;
  }
label_181dac803:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_Player_o* player, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x181dac500

bool PhotonExtensions__GetBoolProperty
               (Photon_Realtime_Player_o *player,System_String_o *key,bool defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  undefined1 *puVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dac5c4;
      obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354de8) {
          pIVar4 = obj;
        }
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
            puVar3 = il2cpp_object_unbox(obj);
            return (bool)*puVar3;
          }
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354de8);
        }
      }
    }
    return defaultValue;
  }
label_181dac5c4:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x181dacc10

System_String_o *
PhotonExtensions__GetStringProperty
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843448f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_1843448f9 = '\x01';
  }
  if (Il2CppMethodInitialized_1843448f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448f8 = '\x01';
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pEVar1 = (player->fields)._CustomProperties_k__BackingField,
     pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (player->fields)._CustomProperties_k__BackingField;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dacd9b;
      pSVar3 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
          pSVar4 = pSVar3;
        }
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = (System_String_o *)0x0;
          if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
            pSVar4 = pSVar3;
          }
          if (pSVar4 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
          }
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
                              (key,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                               (MethodInfo *)0x0);
            if (!bVar2) {
              return pSVar4;
            }
          }
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
          }
          pSVar3 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(player,pSVar4,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
    return defaultValue;
  }
label_181dacd9b:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetStringProperty
// il2cpp: System_String_o* PhotonExtensions__GetStringProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
// 0x181dacb40

System_String_o *
PhotonExtensions__GetStringProperty_1dacb40
          (Photon_Realtime_RoomInfo_o *room,System_String_o *key,System_String_o *defaultValue,
          MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843448fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448fa = '\x01';
  }
  if ((room != (Photon_Realtime_RoomInfo_o *)0x0) &&
     (pEVar1 = (room->fields).customProperties, pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (room->fields).customProperties;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dacbf7;
      pSVar3 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
          pSVar4 = pSVar3;
        }
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = (System_String_o *)0x0;
          if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
            pSVar4 = pSVar3;
          }
          if (pSVar4 != (System_String_o *)0x0) {
            return pSVar4;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
        }
      }
    }
    return defaultValue;
  }
label_181dacbf7:
  ThrowNullReferenceException();
}


// PhotonExtensions$$GetBoolProperty
// il2cpp: bool PhotonExtensions__GetBoolProperty (Photon_Realtime_RoomInfo_o* room, System_String_o* key, bool defaultValue, const MethodInfo* method);
// 0x181dac5e0

bool PhotonExtensions__GetBoolProperty_1dac5e0
               (Photon_Realtime_RoomInfo_o *room,System_String_o *key,bool defaultValue,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  bool bVar2;
  Il2CppObject *obj;
  undefined1 *puVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_1843448fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    Il2CppMethodInitialized_1843448fb = '\x01';
  }
  if ((room != (Photon_Realtime_RoomInfo_o *)0x0) &&
     (pEVar1 = (room->fields).customProperties, pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar2) {
      pEVar1 = (room->fields).customProperties;
      if (pEVar1 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_181dac6a4;
      obj = ExitGames_Client_Photon_Hashtable__get_Item(pEVar1,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354de8) {
          pIVar4 = obj;
        }
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
            puVar3 = il2cpp_object_unbox(obj);
            return (bool)*puVar3;
          }
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354de8);
        }
      }
    }
    return defaultValue;
  }
label_181dac6a4:
  ThrowNullReferenceException();
}


// PhotonExtensions$$HasSpawnPoint
// il2cpp: bool PhotonExtensions__HasSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181dacdb0

bool PhotonExtensions__HasSpawnPoint(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_1843448fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843448fc = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,"null",
                 (MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(a,"null",(MethodInfo *)0x0);
  return bVar1;
}


// PhotonExtensions$$GetSpawnPoint
// il2cpp: UnityEngine_Vector3_o PhotonExtensions__GetSpawnPoint (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181dac8f0

UnityEngine_Vector3_o *
PhotonExtensions__GetSpawnPoint
          (UnityEngine_Vector3_o *__return_storage_ptr__,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  int32_t key;
  System_String_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  System_String_array *pSVar4;
  GameManagers_PlayerProperty_c *klass;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Il2CppObject *local_res8;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843448fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"0,0,0");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_1843448fd = '\x01';
  }
  bVar5 = g_data_18433dbea == '\0';
  (__return_storage_ptr__->fields).x = 0.0;
  (__return_storage_ptr__->fields).y = 0.0;
  (__return_storage_ptr__->fields).z = 0.0;
  local_res8 = (Il2CppObject *)0x0;
  if (bVar5) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_18433dbea = '\x01';
  }
  klass = TypeInfo_GameManagers_PlayerProperty;
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
  fVar7 = (pUVar2->zeroVector).fields.y;
  fVar6 = (pUVar2->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar2->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar7;
  (__return_storage_ptr__->fields).z = fVar6;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    klass = TypeInfo_GameManagers_PlayerProperty;
  }
  __this_00 = PhotonExtensions__GetStringProperty
                        (player,klass->static_fields->SpawnPoint,"0,0,0",(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    bVar5 = System_String__Contains(__this_00,",",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar4 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        if ((((int)pSVar4->max_length != 0) &&
            (fVar6 = System_Single__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0), 1 < (uint)pSVar4->max_length)
            ) && (fVar7 = System_Single__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0),
                 2 < (uint)pSVar4->max_length)) {
          fVar8 = System_Single__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0);
          (__return_storage_ptr__->fields).z = fVar8;
          (__return_storage_ptr__->fields).x = fVar6;
          (__return_storage_ptr__->fields).y = fVar7;
          return __return_storage_ptr__;
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
        bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                          (__this,key,&local_res8,
                           (MethodInfo_141F4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        if (((local_res8 != (Il2CppObject *)0x0) && (local_res8[1].monitor != (UnityEngine_GameObject_o *)0x0)
            ) && (__this_01 = UnityEngine_GameObject__get_transform(local_res8[1].monitor,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_Transform_o *)0x0)) {
          pUVar3 = UnityEngine_Transform__get_position(local_38,__this_01,(MethodInfo *)0x0);
          fVar7 = (pUVar3->fields).y;
          fVar6 = (pUVar3->fields).z;
          (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
          (__return_storage_ptr__->fields).y = fVar7;
          (__return_storage_ptr__->fields).z = fVar6;
          return __return_storage_ptr__;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


