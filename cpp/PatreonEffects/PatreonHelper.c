// Type: PatreonEffects.PatreonHelper
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/PatreonHelper.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x1820cd030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cd04f: nop 

bool PatreonEffects_PatreonHelper__HasTier
               (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  uint uVar3;
  
  if ((tierIds != (System_String_array *)0x0) && (tierIds->max_length != 0)) {
    for (uVar3 = 0; (int)uVar3 < (int)tierIds->max_length; uVar3 = uVar3 + 1) {
      if ((uint)tierIds->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = tierIds->m_Items[(int)uVar3];
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pSVar2 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
        bVar1 = System_String__Equals_196c550(pSVar2,targetTier,4,(MethodInfo *)0x0);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_Collections_IEnumerable_o* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x1820cd0c0
// eh: try 0x1820cd160..0x1820cd294 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cd257: jmp 0x1820cd26d
// asm:   0x1820cd259: lea rcx, [rsp + 0x30]
// asm:   0x1820cd25e: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820cd263: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820cd268: test rcx, rcx
// asm:   0x1820cd26b: jne 0x1820cd294
// asm:   0x1820cd294: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool PatreonEffects_PatreonHelper__HasTier_20cd0c0
               (System_Collections_IEnumerable_o *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  bool bVar1;
  void *pvVar2;
  System_String_o *pSVar3;
  System_String_o *value;
  Il2CppObject *local_res8;
  Il2CppObject *local_res20;
  Il2CppObject **local_28;
  Il2CppObject **local_20;
  
  if (Il2CppMethodInitialized_184346988 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184346988 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  if (tierIds == (System_Collections_IEnumerable_o *)0x0) {
label_1820cd26d:
    bVar1 = false;
  }
  else {
    local_res8 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,(Il2CppObject *)tierIds);
    local_28 = &local_res8;
    local_20 = &local_res20;
    do {
      do {
        do {
          if (local_res8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar2 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
          if ((char)pvVar2 == '\0') {
            local_res20 = il2cpp_vm_Object_IsInst(local_res8,(Il2CppClass *)TypeInfo_System_IDisposable);
            if (local_res20 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
            }
            goto label_1820cd26d;
          }
          if (local_res8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = InterfaceInvoker0_Invoke
                             (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
        } while (pSVar3 == (System_String_o *)0x0);
        value = (System_String_o *)0x0;
        if (pSVar3->klass == g_data_184354e50) {
          value = pSVar3;
        }
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar1) {
          value = (System_String_o *)
                  (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
        }
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      } while (bVar1);
      if (value == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = System_String__Trim(value,(MethodInfo *)0x0);
      bVar1 = System_String__Equals_196c550(pSVar3,targetTier,4,(MethodInfo *)0x0);
    } while (!bVar1);
    il2cpp_runtime_helper_1806aa210(&local_28);
    bVar1 = true;
  }
  return bVar1;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteBool
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteBool (Photon_Realtime_Player_o* player, System_String_o* key, bool* value, const MethodInfo* method);
// 0x1820cd9d0

bool PatreonEffects_PatreonHelper__TryGetRemoteBool
               (Photon_Realtime_Player_o *player,System_String_o *key,bool *value,MethodInfo *method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  Il2CppObject *pIVar2;
  
  *value = false;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    obj = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354de8) {
        pIVar2 = obj;
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
          puVar1 = il2cpp_object_unbox(obj);
          *value = (bool)*puVar1;
          return true;
        }
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354de8);
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteString
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteString (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x1820cdb20

bool PatreonEffects_PatreonHelper__TryGetRemoteString
               (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value_00;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value,(void *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      value_00 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
        value_00 = pSVar2;
      }
      if (value_00 != (System_String_o *)0x0) {
        bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
        if (!bVar1) {
          *value = value_00;
          Il2CppCodeGenWriteBarrier(value,value_00);
          return true;
        }
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryParseTierIdsString
// il2cpp: bool PatreonEffects_PatreonHelper__TryParseTierIdsString (System_String_o* raw, System_Collections_Generic_List_string__o** parsed, const MethodInfo* method);
// 0x1820cde40
// eh: try 0x1820cdf52..0x1820ce1d9 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cdfcc: nop dword ptr [rax]
// asm:   0x1820ce070: xor ebx, ebx
// asm:   0x1820ce072: mov r12, qword ptr [rsp + 0x68]
// asm:   0x1820ce077: mov r13, qword ptr [rsp + 0x60]
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

bool PatreonEffects_PatreonHelper__TryParseTierIdsString
               (System_String_o *raw,System_Collections_Generic_List_string__o **parsed,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  uint uVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  
  if (Il2CppMethodInitialized_184346989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_184346989 = '\x01';
  }
  pMVar9 = (MethodInfo *)0x0;
  *parsed = (System_Collections_Generic_List_string__o *)0x0;
  Il2CppCodeGenWriteBarrier(parsed,(void *)0x0);
  bVar2 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  if (raw != (System_String_o *)0x0) {
    value = System_String__Trim(raw,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    if (value != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(value,"[",(MethodInfo *)0x0);
      if ((bVar2) && (bVar2 = System_String__EndsWith(value,"]",(MethodInfo *)0x0), bVar2))
      {
        a = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method)
          ;
          if (bVar2) {
            pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string)
            ;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
            pMVar10 = pMVar9;
            while( true ) {
              pSVar5 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                 (a,(a->klass->vtable)._11_get_Count.method);
              if ((int)pSVar5 <= (int)pMVar10) break;
              pSVar5 = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,pMVar10);
              if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = pSVar5->klass;
              pSVar6 = (System_String_o *)
                       (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar5,(UnityEngine_GameObject_o *)
                                         (pSVar1->vtable)._9_SetUnhandledAttributes.method,
                                  (MethodInfo *)pSVar1);
              bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
              if (!bVar2) {
                if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(pSVar4,pSVar6);
              }
              pMVar10 = (MethodInfo *)(ulonglong)((int)pMVar10 + 1);
            }
            if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            if (0 < (pSVar4->fields)._size) {
              *parsed = pSVar4;
              Il2CppCodeGenWriteBarrier(parsed,pSVar4);
              return true;
            }
          }
        }
      }
      iVar3 = System_String__IndexOf(value,0x2c,(MethodInfo *)0x0);
      if (-1 < iVar3) {
        pSVar7 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
        pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        if (pSVar7 == (System_String_array *)0x0) goto label_1820ce1df;
        while (uVar8 = (uint)pMVar9, (int)uVar8 < (int)pSVar7->max_length) {
          if ((uint)pSVar7->max_length <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          else {
            pSVar6 = System_String__Trim(pSVar7->m_Items[(int)uVar8],(MethodInfo *)0x0);
          }
          bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
          if (!bVar2) {
            if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_1820ce1df;
            il2cpp_runtime_helper_180012890(pSVar4,pSVar6,MethodInfo_System_Collections_Generic_List_string_Add);
          }
          pMVar9 = (MethodInfo *)(ulonglong)(uVar8 + 1);
        }
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_1820ce1df;
        if (0 < (pSVar4->fields)._size) {
          *parsed = pSVar4;
          Il2CppCodeGenWriteBarrier(parsed,pSVar4);
          return true;
        }
      }
      pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar4,value,MethodInfo_System_Collections_Generic_List_string_Add);
        *parsed = pSVar4;
        Il2CppCodeGenWriteBarrier(parsed,pSVar4);
        return true;
      }
    }
  }
label_1820ce1df:
  ThrowNullReferenceException();
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierIds
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds (Photon_Realtime_Player_o* player, System_Collections_IEnumerable_o** tierIds, const MethodInfo* method);
// 0x1820cdbc0

bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds
               (Photon_Realtime_Player_o *player,System_Collections_IEnumerable_o **tierIds,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *obj;
  Il2CppObject *value;
  System_String_o *raw;
  System_Collections_Generic_List_string__o *local_res8;
  
  if (Il2CppMethodInitialized_18434698a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_18434698a = '\x01';
  }
  local_res8 = (System_Collections_Generic_List_string__o *)0x0;
  *tierIds = (System_Collections_IEnumerable_o *)0x0;
  Il2CppCodeGenWriteBarrier(tierIds,(void *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = (System_String_o *)
          PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TierIds,(MethodInfo *)0x0);
    if (obj != (System_String_o *)0x0) {
      raw = (System_String_o *)0x0;
      if ((Il2CppClass *)obj->klass == g_data_184354e50) {
        raw = obj;
      }
      if (raw == (System_String_o *)0x0) {
        value = il2cpp_vm_Object_IsInst
                          ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
        if (value != (Il2CppObject *)0x0) {
          *tierIds = (System_Collections_IEnumerable_o *)value;
          Il2CppCodeGenWriteBarrier(tierIds,value);
          return true;
        }
      }
      else {
        bVar1 = PatreonEffects_PatreonHelper__TryParseTierIdsString(raw,&local_res8,(MethodInfo *)0x0);
        if (bVar1) {
          *tierIds = (System_Collections_IEnumerable_o *)local_res8;
          Il2CppCodeGenWriteBarrier(tierIds,local_res8);
          return true;
        }
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$ToTierLabel
// il2cpp: System_String_o* PatreonEffects_PatreonHelper__ToTierLabel (bool hasTier2, bool hasTier3, const MethodInfo* method);
// 0x1820cd5d0

System_String_o * PatreonEffects_PatreonHelper__ToTierLabel(bool hasTier2,bool hasTier3,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434698b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Tier 2");
    il2cpp_codegen_initialize_runtime_metadata(&"Tier 3");
    Il2CppMethodInitialized_18434698b = '\x01';
  }
  if (!hasTier3) {
    pSVar1 = "Tier 2";
    if (!hasTier2) {
      pSVar1 = (System_String_o *)0x0;
    }
    return pSVar1;
  }
  return "Tier 3";
}


// PatreonEffects.PatreonHelper$$TryGetLocalPatreonFlags
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags (bool* linked, bool* hasTier2, bool* hasTier3, const MethodInfo* method);
// 0x1820cd640

bool PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
               (bool *linked,bool *hasTier2,bool *hasTier3,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar3;
  
  if (Il2CppMethodInitialized_18434698c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434698c = '\x01';
  }
  *linked = false;
  *hasTier2 = false;
  *hasTier3 = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField !=
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
label_1820cd7e8:
      ThrowNullReferenceException();
    }
    if ((pAVar1->fields).Profile != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843469c1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843469c1 = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
      if ((pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) ||
         (pAVar2 = (pAVar1->fields).Profile,
         pAVar2 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) goto label_1820cd7e8;
      pAVar3 = (pAVar2->fields).Patreon;
      if (pAVar3 != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
        *linked = (pAVar3->fields).Linked;
        *hasTier2 = (pAVar3->fields).HasTier2;
        *hasTier3 = (pAVar3->fields).HasTier3;
        return true;
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetLocalTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel (System_String_o** tierLabel, const MethodInfo* method);
// 0x1820cd7f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cd8bb: jmp 0x1820cd8c4
// asm:   0x1820cd8bd: mov rdx, qword ptr [rip + 0x1fa1a84]  ; "Tier 3"

bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel(System_String_o **tierLabel,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  bool local_res8 [16];
  bool local_res18 [8];
  bool local_res20 [8];
  
  if (Il2CppMethodInitialized_18434698d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434698d = '\x01';
  }
  local_res8[0] = false;
  local_res20[0] = false;
  local_res18[0] = false;
  *tierLabel = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(tierLabel,(void *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (((bVar1) &&
      (bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                         (local_res8,local_res20,local_res18,(MethodInfo *)0x0), bVar1)) &&
     (local_res8[0] != false)) {
    if (Il2CppMethodInitialized_18434698b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Tier 2");
      il2cpp_codegen_initialize_runtime_metadata(&"Tier 3");
      Il2CppMethodInitialized_18434698b = '\x01';
    }
    value = "Tier 3";
    if ((local_res18[0] == false) && (value = "Tier 2", local_res20[0] == false)) {
      value = (System_String_o *)0x0;
    }
    *tierLabel = value;
    Il2CppCodeGenWriteBarrier(tierLabel,value);
    bVar1 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
    return !bVar1;
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel (Photon_Realtime_Player_o* player, System_String_o** tierLabel, const MethodInfo* method);
// 0x1820cdce0

bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
               (Photon_Realtime_Player_o *player,System_String_o **tierLabel,MethodInfo *method)

{
  bool bVar1;
  bool hasTier3;
  Il2CppObject *obj;
  char *pcVar2;
  System_String_o *value;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerable_o *local_res8;
  
  if (Il2CppMethodInitialized_18434698e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767500");
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_18434698e = '\x01';
  }
  local_res8 = (System_Collections_IEnumerable_o *)0x0;
  *tierLabel = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(tierLabel,(void *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354de8) {
        pIVar3 = obj;
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar2 = il2cpp_object_unbox(obj);
        if (*pcVar2 == '\0') {
          return false;
        }
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                        (local_res8,"28767500",(MethodInfo *)0x0);
      hasTier3 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                           (local_res8,"28767505",(MethodInfo *)0x0);
      value = PatreonEffects_PatreonHelper__ToTierLabel(bVar1,hasTier3,(MethodInfo *)0x0);
      *tierLabel = value;
      Il2CppCodeGenWriteBarrier(tierLabel,value);
      bVar1 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteDisplayName
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName (Photon_Realtime_Player_o* player, System_String_o** displayName, const MethodInfo* method);
// 0x1820cda40

bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
               (Photon_Realtime_Player_o *player,System_String_o **displayName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_18434698f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_18434698f = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName;
  *displayName = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(displayName,(void *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      value = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
        value = pSVar2;
      }
      if (value != (System_String_o *)0x0) {
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          *displayName = value;
          Il2CppCodeGenWriteBarrier(displayName,value);
          return true;
        }
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteAccountId
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId (Photon_Realtime_Player_o* player, System_String_o** accountId, const MethodInfo* method);
// 0x1820cd8f0

bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId
               (Photon_Realtime_Player_o *player,System_String_o **accountId,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184346990 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->AccountId;
  *accountId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(accountId,(void *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      value = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
        value = pSVar2;
      }
      if (value != (System_String_o *)0x0) {
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          *accountId = value;
          Il2CppCodeGenWriteBarrier(accountId,value);
          return true;
        }
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess (const MethodInfo* method);
// 0x1820cd330

bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess(MethodInfo *method)

{
  bool bVar1;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  
  if (Il2CppMethodInitialized_184346991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184346991 = '\x01';
  }
  local_res10[0] = false;
  local_res20[0] = false;
  local_res18[0] = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      (local_res10,local_res20,local_res18,(MethodInfo *)0x0);
    if ((bVar1) && (local_res10[0] != false)) {
      return local_res18[0] != false || local_res20[0] != false;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cd4b0

bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerable_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184346992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767500");
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_184346992 = '\x01';
  }
  local_res8[0] = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354de8) {
        pIVar3 = obj;
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar2 = il2cpp_object_unbox(obj);
        if (*pcVar2 == '\0') {
          return false;
        }
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                        (local_res8[0],"28767500",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                          (local_res8[0],"28767505",(MethodInfo *)0x0);
        return bVar1;
      }
      return true;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cce70

bool PatreonEffects_PatreonHelper__HasNameEffectAccess(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerable_o *local_res8 [2];
  bool local_res18 [8];
  bool local_res20 [8];
  
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((player->fields).IsLocal == false) {
      if (Il2CppMethodInitialized_184346992 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
        il2cpp_codegen_initialize_runtime_metadata(&"28767500");
        il2cpp_codegen_initialize_runtime_metadata(&"28767505");
        Il2CppMethodInitialized_184346992 = '\x01';
      }
      local_res8[0] = (System_Collections_IEnumerable_o *)0x0;
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      obj = PhotonExtensions__GetCustomProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                       (MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar3 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354de8) {
          pIVar3 = obj;
        }
        if (pIVar3 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pcVar2 = il2cpp_object_unbox(obj);
          if (*pcVar2 == '\0') {
            return false;
          }
        }
      }
      bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,local_res8,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                          (local_res8[0],"28767500",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                            (local_res8[0],"28767505",(MethodInfo *)0x0);
          return bVar1;
        }
        return true;
      }
    }
    else {
      if (Il2CppMethodInitialized_184346991 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184346991 = '\x01';
      }
      local_res8[0] = (System_Collections_IEnumerable_o *)((ulonglong)local_res8[0] & 0xffffffffffffff00);
      local_res20[0] = false;
      local_res18[0] = false;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if (((bVar1) &&
          (bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                             ((bool *)local_res8,local_res20,local_res18,(MethodInfo *)0x0), bVar1)) &&
         ((char)local_res8[0] != '\0')) {
        return local_res18[0] != false || local_res20[0] != false;
      }
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess (const MethodInfo* method);
// 0x1820cd2a0

bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess(MethodInfo *method)

{
  bool bVar1;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  
  if (Il2CppMethodInitialized_184346993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184346993 = '\x01';
  }
  local_res10[0] = false;
  local_res20[0] = false;
  local_res18[0] = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      (local_res10,local_res20,local_res18,(MethodInfo *)0x0);
    if ((bVar1) && (local_res10[0] != false)) {
      return local_res18[0];
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cd3c0

bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerable_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184346994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_184346994 = '\x01';
  }
  local_res8[0] = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    if (obj != (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
      if (obj->klass == g_data_184354de8) {
        pIVar3 = obj;
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar2 = il2cpp_object_unbox(obj);
        if (*pcVar2 == '\0') {
          return false;
        }
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                        (local_res8[0],"28767505",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cccf0

bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerable_o *local_res8 [2];
  bool local_res18 [8];
  bool local_res20 [8];
  
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((player->fields).IsLocal == false) {
      if (Il2CppMethodInitialized_184346994 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
        il2cpp_codegen_initialize_runtime_metadata(&"28767505");
        Il2CppMethodInitialized_184346994 = '\x01';
      }
      local_res8[0] = (System_Collections_IEnumerable_o *)0x0;
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      obj = PhotonExtensions__GetCustomProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                       (MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar3 = (Il2CppObject *)0x0;
        if (obj->klass == g_data_184354de8) {
          pIVar3 = obj;
        }
        if (pIVar3 != (Il2CppObject *)0x0) {
          if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pcVar2 = il2cpp_object_unbox(obj);
          if (*pcVar2 == '\0') {
            return false;
          }
        }
      }
      bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,local_res8,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = PatreonEffects_PatreonHelper__HasTier_20cd0c0
                          (local_res8[0],"28767505",(MethodInfo *)0x0);
        return bVar1;
      }
    }
    else {
      if (Il2CppMethodInitialized_184346993 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184346993 = '\x01';
      }
      local_res8[0] = (System_Collections_IEnumerable_o *)((ulonglong)local_res8[0] & 0xffffffffffffff00);
      local_res20[0] = false;
      local_res18[0] = false;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if (((bVar1) &&
          (bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                             ((bool *)local_res8,local_res20,local_res18,(MethodInfo *)0x0), bVar1)) &&
         ((char)local_res8[0] != '\0')) {
        return local_res18[0];
      }
    }
  }
  return false;
}


