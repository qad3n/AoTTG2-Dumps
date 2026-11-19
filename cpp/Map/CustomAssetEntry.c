// Type: Map.CustomAssetEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/CustomAssetEntry.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomAssetEntry$$Parse
// il2cpp: Map_CustomAssetEntry_o* Map_CustomAssetEntry__Parse (System_String_o* str, const MethodInfo* method);
// 0x599d5e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599d818: jmp 0x599d769

Map_CustomAssetEntry_o * Map_CustomAssetEntry__Parse(System_String_o *str,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int32_t length;
  int32_t iVar5;
  Map_CustomAssetEntry_o *__this_00;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o **targetAddress;
  long lVar9;
  
  if (Il2CppMethodInitialized_07545a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07545a96 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  Map_CustomAssetEntry___ctor(__this_00,method);
  if ((str == (System_String_o *)0x0) ||
     (pSVar6 = System_String__Split(str,0x2c,0,(MethodInfo *)0x0), pSVar6 == (System_String_array *)0x0)) {
label_0599d877:
    ThrowNullReferenceException();
  }
  if (pSVar6->max_length != 0) {
    if ((int)pSVar6->max_length == 0) {
label_0599d87c:
      ThrowIndexOutOfRangeException();
    }
    if ((pSVar6->m_Items[0] == (System_String_o *)0x0) ||
       (pSVar7 = System_String__Trim(pSVar6->m_Items[0],(MethodInfo *)0x0),
       __this_00 == (Map_CustomAssetEntry_o *)0x0)) goto label_0599d877;
    (__this_00->fields).Bundle = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Bundle);
    uVar4 = (uint)pSVar6->max_length;
    if (1 < (int)uVar4) {
      targetAddress = &(__this_00->fields).DefaultUrl;
      lVar9 = 5;
      do {
        iVar2 = (int)lVar9;
        if (uVar4 <= iVar2 - 4U) goto label_0599d87c;
        if ((pSVar6->m_Items[lVar9 + -4] == (System_String_o *)0x0) ||
           (pSVar7 = System_String__Trim(pSVar6->m_Items[lVar9 + -4],(MethodInfo *)0x0),
           pSVar7 == (System_String_o *)0x0)) goto label_0599d877;
        length = System_String__IndexOf(pSVar7,0x3d,(MethodInfo *)0x0);
        if (length < 1) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          uVar1 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
        }
        else {
          pSVar8 = System_String__Substring_53042f0(pSVar7,0,length,(MethodInfo *)0x0);
          if (pSVar8 == (System_String_o *)0x0) goto label_0599d877;
          pSVar8 = System_String__ToLower(pSVar8,(MethodInfo *)0x0);
          uVar1 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
        }
        iVar5 = System_Array__IndexOf_object_
                          ((System_Object_array *)TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys,
                           (Il2CppObject *)pSVar8,(MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string
                          );
        if (iVar5 < 0) {
          bVar3 = System_String__op_Equality
                            (*targetAddress,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             (MethodInfo *)0x0);
          if (bVar3) {
            *targetAddress = pSVar7;
            Il2CppCodeGenWriteBarrier(targetAddress);
          }
        }
        else {
          __this = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).PlatformUrls
          ;
          pSVar7 = System_String__Substring(pSVar7,length + 1,(MethodInfo *)0x0);
          if ((pSVar7 == (System_String_o *)0x0) ||
             (pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0),
             __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0599d877;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar7,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
        uVar4 = (uint)pSVar6->max_length;
        lVar9 = lVar9 + 1;
      } while (iVar2 + -3 < (int)uVar4);
    }
  }
  return __this_00;
}


// Map.CustomAssetEntry$$Serialize
// il2cpp: System_String_o* Map_CustomAssetEntry__Serialize (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x59a3e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a3fcd: jmp 0x59a3ff9

System_String_o * Map_CustomAssetEntry__Serialize(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *a;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_01;
  ulong uVar8;
  System_String_o *pSVar9;
  System_String_o **value;
  ulong uVar10;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07545a97 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar9 = (__this->fields).Bundle;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_01->fields)._items;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar9 = (__this->fields).DefaultUrl;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          uVar3 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          uVar3 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
        }
        pSVar4 = TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys;
        if (pSVar4 != (System_String_array *)0x0) {
          if (0 < (int)pSVar4->max_length) {
            uVar8 = pSVar4->max_length & 0xffffffff;
            uVar10 = 0;
            do {
              if (uVar8 <= uVar10) {
                ThrowIndexOutOfRangeException();
              }
              pSVar9 = pSVar4->m_Items[uVar10];
              if (Il2CppMethodInitialized_07545a99 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
                Il2CppMethodInitialized_07545a99 = '\x01';
              }
              local_38 = (System_String_o *)0x0;
              bVar7 = System_String__op_Equality
                                (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                 (MethodInfo *)0x0);
              value = &(__this->fields).DefaultUrl;
              if (!bVar7) {
                __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields).PlatformUrls;
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_059a41a9;
                value = &local_38;
                bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                  (__this_00,(Il2CppObject *)pSVar9,(Il2CppObject **)value,
                                   (MethodInfo_4AAF440 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue)
                ;
                if (!bVar7) {
                  value = *(System_String_o ***)(g_data_07556758 + 0xb8);
                }
              }
              a = *value;
              bVar7 = System_String__op_Inequality
                                (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0
                                );
              if (bVar7) {
                pSVar9 = System_String__Concat_5301f10(pSVar9,"=",a,(MethodInfo *)0x0);
                pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_01->fields)._items;
                if (pSVar5 == (System_String_array *)0x0) goto label_059a41a9;
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pSVar5->m_Items[(int)uVar2] = pSVar9;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                             (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                }
              }
              uVar10 = uVar10 + 1;
              uVar2 = (uint)pSVar4->max_length;
              uVar8 = (ulong)uVar2;
            } while ((long)uVar10 < (long)(int)uVar2);
          }
          pSVar9 = System_String__Join_5303350
                             (",",
                              (System_Collections_Generic_IEnumerable_string__o *)__this_01,(MethodInfo *)0x0)
          ;
          return pSVar9;
        }
      }
    }
  }
label_059a41a9:
  ThrowNullReferenceException();
}


// Map.CustomAssetEntry$$GetUrl
// il2cpp: System_String_o* Map_CustomAssetEntry__GetUrl (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x599d890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599d950: jmp 0x599d8db

System_String_o * Map_CustomAssetEntry__GetUrl(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  Il2CppClass *klass;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_07545a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    Il2CppMethodInitialized_07545a98 = '\x01';
    uVar1 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_CustomAssetEntry;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_CustomAssetEntry;
  }
  TypeInfo_Map_CustomAssetEntry = (Map_CustomAssetEntry_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = Map_CustomAssetEntry__get_CurrentPlatformKey((MethodInfo *)klass);
  }
  else {
    pSVar3 = Map_CustomAssetEntry__get_CurrentPlatformKey((MethodInfo *)klass);
  }
  if (Il2CppMethodInitialized_07545a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07545a99 = '\x01';
  }
  ppSVar4 = &local_28;
  local_28 = (System_String_o *)0x0;
  bVar2 = System_String__op_Equality
                    (pSVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    ppSVar4 = &(__this->fields).DefaultUrl;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PlatformUrls;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_28,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (!bVar2) {
      ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
  }
  pSVar3 = *ppSVar4;
  bVar2 = System_String__op_Inequality
                    (pSVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = (__this->fields).DefaultUrl;
  }
  return pSVar3;
}


// Map.CustomAssetEntry$$GetPlatformUrl
// il2cpp: System_String_o* Map_CustomAssetEntry__GetPlatformUrl (Map_CustomAssetEntry_o* __this, System_String_o* key, const MethodInfo* method);
// 0x59a41c0

System_String_o *
Map_CustomAssetEntry__GetPlatformUrl(Map_CustomAssetEntry_o *__this,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o **value;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_07545a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07545a99 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar1 = System_String__op_Equality
                    (key,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    value = &(__this->fields).DefaultUrl;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PlatformUrls;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    value = &local_20;
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)value,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (!bVar1) {
      value = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
  }
  return *value;
}


// Map.CustomAssetEntry$$SetPlatformUrl
// il2cpp: void Map_CustomAssetEntry__SetPlatformUrl (Map_CustomAssetEntry_o* __this, System_String_o* key, System_String_o* url, const MethodInfo* method);
// 0x59a4380

void Map_CustomAssetEntry__SetPlatformUrl
               (Map_CustomAssetEntry_o *__this,System_String_o *key,System_String_o *url,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07545a9a = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (key,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).DefaultUrl = url;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultUrl);
    return;
  }
  bVar1 = System_String__op_Equality
                    (url,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PlatformUrls;
  if (bVar1) {
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,(Il2CppObject *)key,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      return;
    }
  }
  else if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)key,(Il2CppObject *)url,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomAssetEntry$$GetPlatformKey
// il2cpp: System_String_o* Map_CustomAssetEntry__GetPlatformKey (System_String_o* name, const MethodInfo* method);
// 0x59a4470

System_String_o * Map_CustomAssetEntry__GetPlatformKey(System_String_o *name,MethodInfo *method)

{
  System_String_array *pSVar1;
  uint uVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07545a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    Il2CppMethodInitialized_07545a9b = '\x01';
  }
  if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  }
  uVar2 = System_Array__IndexOf_object_
                    ((System_Object_array *)TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames,
                     (Il2CppObject *)name,(MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if ((int)uVar2 < 0) {
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    }
    pSVar1 = TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys;
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar1->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    ppSVar3 = pSVar1->m_Items + uVar2;
  }
  return *ppSVar3;
}


// Map.CustomAssetEntry$$get_CurrentPlatformKey
// il2cpp: System_String_o* Map_CustomAssetEntry__get_CurrentPlatformKey (const MethodInfo* method);
// 0x59a4270

System_String_o * Map_CustomAssetEntry__get_CurrentPlatformKey(MethodInfo *method)

{
  uint uVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07545a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"win");
    il2cpp_codegen_initialize_runtime_metadata(&"mac");
    il2cpp_codegen_initialize_runtime_metadata(&"android");
    il2cpp_codegen_initialize_runtime_metadata(&"linux");
    Il2CppMethodInitialized_07545a9c = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_059a4291;
label_059a4321:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    uVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_059a4321;
label_059a4291:
    uVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if ((int)uVar1 < 8) {
    if (uVar1 < 2) {
      return "mac";
    }
    ppSVar2 = &"win";
    if ((uVar1 != 2) && (uVar1 != 7)) {
label_059a4351:
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    ppSVar2 = &"linux";
    if ((uVar1 != 0x10) && (uVar1 != 0xd)) {
      if (uVar1 != 0xb) goto label_059a4351;
      ppSVar2 = &"android";
    }
  }
  return *ppSVar2;
}


// Map.CustomAssetEntry$$.ctor
// il2cpp: void Map_CustomAssetEntry___ctor (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x59a3dc0

void Map_CustomAssetEntry___ctor(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_07545a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_07545a9d = '\x01';
  }
  (__this->fields).Bundle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Bundle);
  (__this->fields).DefaultUrl = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultUrl);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields).PlatformUrls = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlatformUrls);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomAssetEntry$$.cctor
// il2cpp: void Map_CustomAssetEntry___cctor (const MethodInfo* method);
// 0x59a4540

void Map_CustomAssetEntry___cctor(MethodInfo *method)

{
  Map_CustomAssetEntry_StaticFields *pMVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Mac");
    il2cpp_codegen_initialize_runtime_metadata(&"win");
    il2cpp_codegen_initialize_runtime_metadata(&"Windows");
    il2cpp_codegen_initialize_runtime_metadata(&"Linux");
    il2cpp_codegen_initialize_runtime_metadata(&"Android");
    il2cpp_codegen_initialize_runtime_metadata(&"mac");
    il2cpp_codegen_initialize_runtime_metadata(&"android");
    il2cpp_codegen_initialize_runtime_metadata(&"linux");
    Il2CppMethodInitialized_07545a9e = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar2 == (System_String_array *)0x0) {
label_059a475e:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "win";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "mac";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "linux";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "android";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys = pSVar2;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys);
          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
          if (pSVar2 == (System_String_array *)0x0) goto label_059a475e;
          if ((int)pSVar2->max_length != 0) {
            pSVar2->m_Items[0] = "Windows";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
            if ((pSVar2->max_length & 0xfffffffe) != 0) {
              pSVar2->m_Items[1] = "Mac";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
              if (2 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[2] = "Linux";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                if ((pSVar2->max_length & 0xfffffffc) != 0) {
                  pSVar2->m_Items[3] = "Android";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
                  pMVar1 = TypeInfo_Map_CustomAssetEntry->static_fields;
                  pMVar1->PlatformNames = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pMVar1->PlatformNames);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


