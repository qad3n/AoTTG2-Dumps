// Type: Map.CustomAssetEntry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/CustomAssetEntry.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomAssetEntry$$Parse
// il2cpp: Map_CustomAssetEntry_o* Map_CustomAssetEntry__Parse (System_String_o* str, const MethodInfo* method);
// 0x181e9c250

Map_CustomAssetEntry_o * Map_CustomAssetEntry__Parse(System_String_o *str,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  int32_t length;
  int32_t iVar2;
  Map_CustomAssetEntry_o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843450fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_1843450fa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  if (Il2CppMethodInitialized_184345101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_184345101 = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).Bundle = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Bundle,pSVar4);
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).DefaultUrl = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).DefaultUrl,pSVar4);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this_00->fields).PlatformUrls = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).PlatformUrls,__this_01);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (str != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(str,0x2c,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      if (pSVar3->max_length != 0) {
        if ((int)pSVar3->max_length == 0) {
label_181e9c518:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar3->m_Items[0] == (System_String_o *)0x0) goto label_181e9c512;
        pSVar4 = System_String__Trim(pSVar3->m_Items[0],(MethodInfo *)0x0);
        (__this_00->fields).Bundle = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).Bundle,pSVar4);
      }
      uVar6 = 1;
label_181e9c3b5:
      do {
        if ((int)pSVar3->max_length <= (int)uVar6) {
          return __this_00;
        }
        if ((uint)pSVar3->max_length <= uVar6) goto label_181e9c518;
        if (pSVar3->m_Items[(int)uVar6] == (System_String_o *)0x0) break;
        pSVar4 = System_String__Trim(pSVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) break;
        length = System_String__IndexOf(pSVar4,0x3d,(MethodInfo *)0x0);
        if (length < 1) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        else {
          pSVar5 = System_String__Substring_1972740(pSVar4,0,length,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) break;
          pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
        }
        if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
        }
        iVar2 = System_Array__IndexOf_object_
                          ((System_Object_array *)TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys,
                           (Il2CppObject *)pSVar5,(MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string)
        ;
        if (iVar2 < 0) {
          bVar1 = System_String__op_Equality
                            ((__this_00->fields).DefaultUrl,
                             (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
          if (bVar1) {
            (__this_00->fields).DefaultUrl = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).DefaultUrl,pSVar4);
            uVar6 = uVar6 + 1;
            goto label_181e9c3b5;
          }
        }
        else {
          __this = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).PlatformUrls
          ;
          pSVar4 = System_String__Substring(pSVar4,length + 1,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) break;
          pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
          if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar4,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
label_181e9c512:
  ThrowNullReferenceException();
}


// Map.CustomAssetEntry$$Serialize
// il2cpp: System_String_o* Map_CustomAssetEntry__Serialize (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x181e9c520

System_String_o * Map_CustomAssetEntry__Serialize(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843450fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_1843450fb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar5 = (__this->fields).Bundle;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (__this_00->fields)._items;
    if (pSVar2 == (System_String_array *)0x0) goto label_181e9c757;
    uVar6 = (__this_00->fields)._size;
    if (uVar6 < (uint)pSVar2->max_length) {
      (__this_00->fields)._size = uVar6 + 1;
      if ((uint)pSVar2->max_length <= uVar6) goto label_181e9c75d;
      pSVar2->m_Items[(int)uVar6] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar6,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar5 = (__this->fields).DefaultUrl;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (__this_00->fields)._items;
    if (pSVar2 == (System_String_array *)0x0) goto label_181e9c757;
    uVar6 = (__this_00->fields)._size;
    if (uVar6 < (uint)pSVar2->max_length) {
      (__this_00->fields)._size = uVar6 + 1;
      if ((uint)pSVar2->max_length <= uVar6) goto label_181e9c75d;
      pSVar2->m_Items[(int)uVar6] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar6,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
    if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    }
    pSVar2 = TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys;
    if (pSVar2 != (System_String_array *)0x0) {
      uVar6 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar6) {
          pSVar5 = System_String__Join_196ecd0
                             (",",
                              (System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)0x0)
          ;
          return pSVar5;
        }
        if ((uint)pSVar2->max_length <= uVar6) break;
        pSVar5 = pSVar2->m_Items[(int)uVar6];
        a = Map_CustomAssetEntry__GetPlatformUrl(__this,pSVar5,(MethodInfo *)0x0);
        bVar4 = System_String__op_Inequality
                          (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        if (bVar4) {
          pSVar5 = System_String__Concat_1969b70(pSVar5,"=",a,(MethodInfo *)0x0);
          il2cpp_runtime_helper_180012890(__this_00,pSVar5);
        }
        uVar6 = uVar6 + 1;
      }
label_181e9c75d:
      ThrowIndexOutOfRangeException();
    }
  }
label_181e9c757:
  ThrowNullReferenceException();
}


// Map.CustomAssetEntry$$GetUrl
// il2cpp: System_String_o* Map_CustomAssetEntry__GetUrl (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x181e9c110
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9c1c0: mov rdx, qword ptr [rip + 0x21ed781]  ; "android"
// asm:   0x181e9c1c7: jmp 0x181e9c20e
// asm:   0x181e9c1d3: mov rdx, qword ptr [rip + 0x21ea796]  ; "linux"
// asm:   0x181e9c1da: jmp 0x181e9c20e
// asm:   0x181e9c1e1: mov rdx, qword ptr [rip + 0x21f0fa8]  ; "mac"
// asm:   0x181e9c1e8: jmp 0x181e9c20e
// asm:   0x181e9c207: mov rdx, qword ptr [rip + 0x21e9fd2]  ; "win"

System_String_o * Map_CustomAssetEntry__GetUrl(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843450fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    Il2CppMethodInitialized_1843450fc = '\x01';
  }
  if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  }
  if (Il2CppMethodInitialized_184345100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"win");
    il2cpp_codegen_initialize_runtime_metadata(&"mac");
    il2cpp_codegen_initialize_runtime_metadata(&"android");
    il2cpp_codegen_initialize_runtime_metadata(&"linux");
    Il2CppMethodInitialized_184345100 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  uVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if ((int)uVar2 < 8) {
    pSVar3 = "mac";
    if (((uVar2 < 2) || (pSVar3 = "win", uVar2 == 2)) || (uVar2 == 7)) goto label_181e9c20e;
  }
  else {
    pSVar3 = "android";
    if (((uVar2 == 0xb) || (pSVar3 = "linux", uVar2 == 0xd)) || (uVar2 == 0x10))
    goto label_181e9c20e;
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_181e9c20e:
  pSVar3 = Map_CustomAssetEntry__GetPlatformUrl(__this,pSVar3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality
                    (pSVar3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = (__this->fields).DefaultUrl;
  }
  return pSVar3;
}


// Map.CustomAssetEntry$$GetPlatformUrl
// il2cpp: System_String_o* Map_CustomAssetEntry__GetPlatformUrl (Map_CustomAssetEntry_o* __this, System_String_o* key, const MethodInfo* method);
// 0x181e9c050

System_String_o *
Map_CustomAssetEntry__GetPlatformUrl(Map_CustomAssetEntry_o *__this,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843450fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_1843450fd = '\x01';
  }
  local_res10[0] = (System_String_o *)0x0;
  bVar1 = System_String__op_Equality
                    (key,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields).DefaultUrl;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PlatformUrls;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)key,(Il2CppObject **)local_res10,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar1) {
    return local_res10[0];
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Map.CustomAssetEntry$$SetPlatformUrl
// il2cpp: void Map_CustomAssetEntry__SetPlatformUrl (Map_CustomAssetEntry_o* __this, System_String_o* key, System_String_o* url, const MethodInfo* method);
// 0x181e9c770

void Map_CustomAssetEntry__SetPlatformUrl
               (Map_CustomAssetEntry_o *__this,System_String_o *key,System_String_o *url,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843450fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_1843450fe = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (key,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).DefaultUrl = url;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultUrl,url);
    return;
  }
  bVar1 = System_String__op_Equality
                    (url,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PlatformUrls;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!bVar1) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)key,(Il2CppObject *)url,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return;
  }
  System_Collections_Generic_Dictionary_object__object___Remove
            (__this_00,(Il2CppObject *)key,
             (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
  return;
}


// Map.CustomAssetEntry$$GetPlatformKey
// il2cpp: System_String_o* Map_CustomAssetEntry__GetPlatformKey (System_String_o* name, const MethodInfo* method);
// 0x181e9bf80

System_String_o * Map_CustomAssetEntry__GetPlatformKey(System_String_o *name,MethodInfo *method)

{
  System_String_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_1843450ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    Il2CppMethodInitialized_1843450ff = '\x01';
  }
  if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
  }
  uVar2 = System_Array__IndexOf_object_
                    ((System_Object_array *)TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames,
                     (Il2CppObject *)name,(MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
  if (-1 < (int)uVar2) {
    if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    }
    pSVar1 = TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys;
    if (pSVar1 != (System_String_array *)0x0) {
      if (uVar2 < (uint)pSVar1->max_length) {
        return pSVar1->m_Items[(int)uVar2];
      }
      ThrowIndexOutOfRangeException();
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Map.CustomAssetEntry$$get_CurrentPlatformKey
// il2cpp: System_String_o* Map_CustomAssetEntry__get_CurrentPlatformKey (const MethodInfo* method);
// 0x181e9cb30

System_String_o * Map_CustomAssetEntry__get_CurrentPlatformKey(MethodInfo *method)

{
  uint uVar1;
  
  if (Il2CppMethodInitialized_184345100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"win");
    il2cpp_codegen_initialize_runtime_metadata(&"mac");
    il2cpp_codegen_initialize_runtime_metadata(&"android");
    il2cpp_codegen_initialize_runtime_metadata(&"linux");
    Il2CppMethodInitialized_184345100 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  uVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if ((int)uVar1 < 8) {
    if (uVar1 < 2) {
      return "mac";
    }
    if ((uVar1 == 2) || (uVar1 == 7)) {
      return "win";
    }
  }
  else {
    if (uVar1 == 0xb) {
      return "android";
    }
    if ((uVar1 == 0xd) || (uVar1 == 0x10)) {
      return "linux";
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Map.CustomAssetEntry$$.ctor
// il2cpp: void Map_CustomAssetEntry___ctor (Map_CustomAssetEntry_o* __this, const MethodInfo* method);
// 0x181e9ca70

void Map_CustomAssetEntry___ctor(Map_CustomAssetEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184345101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_184345101 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Bundle = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Bundle,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).DefaultUrl = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultUrl,pSVar1);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields).PlatformUrls = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlatformUrls,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomAssetEntry$$.cctor
// il2cpp: void Map_CustomAssetEntry___cctor (const MethodInfo* method);
// 0x181e9c860

void Map_CustomAssetEntry___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184345102 == '\0') {
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
    Il2CppMethodInitialized_184345102 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "win";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "win";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "mac";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "mac";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "linux";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "linux";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "android";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "android";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys = pSVar2;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomAssetEntry->static_fields->PlatformKeys,pSVar2);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
            pSVar1 = "Windows";
            if (pSVar2 == (System_String_array *)0x0) goto label_181e9ca64;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "Windows";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              pSVar1 = "Mac";
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "Mac";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                pSVar1 = "Linux";
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = "Linux";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                  pSVar1 = "Android";
                  if (3 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[3] = "Android";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                    TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames = pSVar2;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Map_CustomAssetEntry->static_fields->PlatformNames,pSVar2);
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
label_181e9ca64:
  ThrowNullReferenceException();
}


