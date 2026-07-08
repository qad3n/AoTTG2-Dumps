// Type: Anticheat.ModeratorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/ModeratorManager.cs
// Prior source: NEW in this update
// --------------------------------

// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x41bd260

void Anticheat_ModeratorManager_<>c__DisplayClass100_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bd270

void Anticheat_ModeratorManager_<>c__DisplayClass100_0__<RequestRegionBanList>b__0
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  long lVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RegionBanEntry_array *pAVar4;
  Il2CppObject *__this_00;
  
  if (DAT_05704d96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_RegionBanPage);
    DAT_05704d96 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  iVar2 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar3 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  pAVar4 = Anticheat_ModeratorManager__ParseRegionBanEntries(entries,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  if (lVar1 != 0) {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RegionBanPage);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(int32_t *)&__this_00[1].klass = iVar2;
      *(int32_t *)((long)&__this_00[1].klass + 4) = iVar3;
      __this_00[1].monitor = pAVar4;
      il2cpp_runtime_glue(&__this_00[1].monitor,pAVar4);
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),__this_00,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x41bd3d0

void Anticheat_ModeratorManager_<>c__DisplayClass100_0__<RequestRegionBanList>b__1
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704d97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704d97 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x41bd430

void Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bd440

void Anticheat_ModeratorManager_<>c__DisplayClass106_0__<SendBatchRoomRemove>b__0
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  int iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int *piVar5;
  System_String_array *values;
  int iVar6;
  int iVar7;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (DAT_05704d98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" failed.");
    il2cpp_init_method_metadata(&"Rate limited. Retry in ");
    il2cpp_init_method_metadata(&"Done: ");
    il2cpp_init_method_metadata(&" processed, ");
    il2cpp_init_method_metadata(&"s.");
    DAT_05704d98 = '\x01';
  }
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bd834;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40))
      goto LAB_041bd839;
      il2cpp_glue_022c7330(pIVar3);
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pSVar4 = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      pSVar4 = (System_String_o *)
               System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x02',MethodInfo_Object_get_Item);
      if ((pSVar4 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar4->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar4);
      }
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x03',MethodInfo_Boolean_ContainsKey);
    iVar7 = 0;
    iVar6 = 0;
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x03',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bd834;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_041bd839;
      piVar5 = (int *)il2cpp_glue_022c7330(pIVar3);
      iVar6 = *piVar5;
    }
    iStack_34 = iVar6;
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x04',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x04',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bd834;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_041bd839;
      piVar5 = (int *)il2cpp_glue_022c7330(pIVar3);
      iVar7 = *piVar5;
    }
    iStack_38 = iVar7;
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x05',MethodInfo_Boolean_ContainsKey);
    iVar1 = 0;
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x05',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bd834;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
LAB_041bd839:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      piVar5 = (int *)il2cpp_glue_022c7330(pIVar3);
      iVar1 = *piVar5;
    }
    iStack_3c = iVar1;
    if (iVar6 < 1) {
      if ((0 < iStack_3c) || (0 < iVar7)) {
        values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = "Done: ";
            il2cpp_runtime_glue(values->m_Items);
            pSVar4 = System_Int32__ToString((int32_t)&iStack_38,(MethodInfo *)0x0);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = pSVar4;
              il2cpp_runtime_glue(values->m_Items + 1,pSVar4);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = " processed, ";
                il2cpp_runtime_glue(values->m_Items + 2);
                pSVar4 = System_Int32__ToString((int32_t)&iStack_3c,(MethodInfo *)0x0);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = pSVar4;
                  il2cpp_runtime_glue(values->m_Items + 3,pSVar4);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = " failed.";
                    il2cpp_runtime_glue(values->m_Items + 4);
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    goto LAB_041bd7fc;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_041bd834;
      }
    }
    else {
      pSVar4 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("Rate limited. Retry in ",pSVar4,"s.",(MethodInfo *)0x0);
    }
LAB_041bd7fc:
    localStatus = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(pSVar4,localStatus,(MethodInfo *)0x0);
    return;
  }
LAB_041bd834:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x41bd850

void Anticheat_ModeratorManager_<>c__DisplayClass106_0__<SendBatchRoomRemove>b__1
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704d99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704d99 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x41bd8b0

void Anticheat_ModeratorManager_<>c__DisplayClass85_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bd8c0

void Anticheat_ModeratorManager_<>c__DisplayClass85_0__<RequestPlayerList>b__0
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  
  if (DAT_05704d9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d9a = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  Anticheat_ModeratorManager__PopulatePlayerList(data,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x41bd940

void Anticheat_ModeratorManager_<>c__DisplayClass85_0__<RequestPlayerList>b__1
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704d9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704d9b = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x41bd9a0

void Anticheat_ModeratorManager_<>c__DisplayClass89_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bd9b0

void Anticheat_ModeratorManager_<>c__DisplayClass89_0__<KickPlayer>b__0
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704d9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d9c = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bdb27;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041bdb27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x41bdb40

void Anticheat_ModeratorManager_<>c__DisplayClass89_0__<KickPlayer>b__1
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704d9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704d9d = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x41bdba0

void Anticheat_ModeratorManager_<>c__DisplayClass90_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bdbb0

void Anticheat_ModeratorManager_<>c__DisplayClass90_0__<RoomBan>b__0
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704d9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d9e = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bdd27;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041bdd27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x41bdd40

void Anticheat_ModeratorManager_<>c__DisplayClass90_0__<RoomBan>b__1
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704d9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704d9f = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x41bdda0

void Anticheat_ModeratorManager_<>c__DisplayClass91_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bddb0

void Anticheat_ModeratorManager_<>c__DisplayClass91_0__<RoomBanPlayerEntry>b__0
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704da0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704da0 = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041bdf27;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041bdf27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x41bdf40

void Anticheat_ModeratorManager_<>c__DisplayClass91_0__<RoomBanPlayerEntry>b__1
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704da1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704da1 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x41bdfa0

void Anticheat_ModeratorManager_<>c__DisplayClass92_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41bdfb0

void Anticheat_ModeratorManager_<>c__DisplayClass92_0__<RoomUnban>b__0
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704da2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704da2 = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041be127;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestRoomBanList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041be127:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x41be140

void Anticheat_ModeratorManager_<>c__DisplayClass92_0__<RoomUnban>b__1
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704da3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704da3 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x41be1a0

void Anticheat_ModeratorManager_<>c__DisplayClass94_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41be1b0

void Anticheat_ModeratorManager_<>c__DisplayClass94_0__<RequestRoomBanList>b__0
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  long lVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RoomBanEntry_array *pAVar4;
  Il2CppObject *__this_00;
  
  if (DAT_05704da4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomBanPage);
    DAT_05704da4 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  iVar2 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar3 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  pAVar4 = Anticheat_ModeratorManager__ParseRoomBanEntries(entries,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RoomBanPage);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(int32_t *)&__this_00[1].klass = iVar2;
      *(int32_t *)((long)&__this_00[1].klass + 4) = iVar3;
      __this_00[1].monitor = pAVar4;
      il2cpp_runtime_glue(&__this_00[1].monitor,pAVar4);
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),__this_00,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x41be310

void Anticheat_ModeratorManager_<>c__DisplayClass94_0__<RequestRoomBanList>b__1
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704da5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704da5 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x41be370

void Anticheat_ModeratorManager_<>c__DisplayClass96_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41be380

void Anticheat_ModeratorManager_<>c__DisplayClass96_0__<RegionBan>b__0
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704da6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704da6 = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041be4f7;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041be4f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x41be510

void Anticheat_ModeratorManager_<>c__DisplayClass96_0__<RegionBan>b__1
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704da7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704da7 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x41be570

void Anticheat_ModeratorManager_<>c__DisplayClass97_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41be580

void Anticheat_ModeratorManager_<>c__DisplayClass97_0__<RegionBanPlayerEntry>b__0
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704da8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704da8 = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041be6f7;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041be6f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x41be710

void Anticheat_ModeratorManager_<>c__DisplayClass97_0__<RegionBanPlayerEntry>b__1
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704da9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704da9 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x41be770

void Anticheat_ModeratorManager_<>c__DisplayClass98_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41be780

void Anticheat_ModeratorManager_<>c__DisplayClass98_0__<RegionUnban>b__0
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (DAT_05704daa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704daa = '\x01';
  }
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x01',MethodInfo_Boolean_ContainsKey);
    cVar5 = '\0';
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                         (data,'\x01',MethodInfo_Object_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041be8f7;
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3);
      }
      pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3);
      cVar5 = *pcVar4;
    }
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                      (data,'\x02',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      text = *(System_String_o **)DAT_057110b0->static_fields;
    }
    else {
      text = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(data,'\x02',MethodInfo_Object_get_Item)
      ;
      if ((text != (System_String_o *)0x0) && ((Il2CppClass *)text->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(text);
      }
    }
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
    if (cVar5 != '\0') {
      pSVar1 = (__this->fields).localStatus;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_041be8f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x41be910

void Anticheat_ModeratorManager_<>c__DisplayClass98_0__<RegionUnban>b__1
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (DAT_05704dab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"Request timed out");
    DAT_05704dab = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$get_IsAuthenticated
// il2cpp: bool Anticheat_ModeratorManager__get_IsAuthenticated (const MethodInfo* method);
// 0x41b6040

bool_conflict Anticheat_ModeratorManager__get_IsAuthenticated(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704d4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d4d = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
}


// Anticheat.ModeratorManager$$set_IsAuthenticated
// il2cpp: void Anticheat_ModeratorManager__set_IsAuthenticated (bool value, const MethodInfo* method);
// 0x41b60b0

void Anticheat_ModeratorManager__set_IsAuthenticated(bool_conflict value,MethodInfo *method)

{
  if (DAT_05704d4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d4e = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = (char)value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthLevel
// il2cpp: int32_t Anticheat_ModeratorManager__get_AuthLevel (const MethodInfo* method);
// 0x41b6100

int32_t Anticheat_ModeratorManager__get_AuthLevel(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704d4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d4f = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc);
  }
  il2cpp_init_class();
  return *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc);
}


// Anticheat.ModeratorManager$$set_AuthLevel
// il2cpp: void Anticheat_ModeratorManager__set_AuthLevel (int32_t value, const MethodInfo* method);
// 0x41b6170

void Anticheat_ModeratorManager__set_AuthLevel(int32_t value,MethodInfo *method)

{
  if (DAT_05704d50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d50 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthUsername
// il2cpp: System_String_o* Anticheat_ModeratorManager__get_AuthUsername (const MethodInfo* method);
// 0x41b61c0

System_String_o * Anticheat_ModeratorManager__get_AuthUsername(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704d51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704d51 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  else {
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  if (pSVar2 != (System_String_o *)0x0) {
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Anticheat.ModeratorManager$$get_ActivePlayers
// il2cpp: System_Collections_Generic_Dictionary_int__PlayerEntry__o* Anticheat_ModeratorManager__get_ActivePlayers (const MethodInfo* method);
// 0x41b6240

System_Collections_Generic_Dictionary_int__PlayerEntry__o *
Anticheat_ModeratorManager__get_ActivePlayers(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704d52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d52 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)
            (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)
          (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
}


// Anticheat.ModeratorManager$$set_ActivePlayers
// il2cpp: void Anticheat_ModeratorManager__set_ActivePlayers (System_Collections_Generic_Dictionary_int__PlayerEntry__o* value, const MethodInfo* method);
// 0x41b62b0

void Anticheat_ModeratorManager__set_ActivePlayers
               (System_Collections_Generic_Dictionary_int__PlayerEntry__o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704d53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d53 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_glue(lVar1 + 0x10,value);
  return;
}


// Anticheat.ModeratorManager$$get_PastPlayers
// il2cpp: System_Collections_Generic_List_PlayerEntry__o* Anticheat_ModeratorManager__get_PastPlayers (const MethodInfo* method);
// 0x41b6310

System_Collections_Generic_List_PlayerEntry__o *
Anticheat_ModeratorManager__get_PastPlayers(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704d54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d54 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_List_PlayerEntry__o **)
            (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_Collections_Generic_List_PlayerEntry__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18)
  ;
}


// Anticheat.ModeratorManager$$set_PastPlayers
// il2cpp: void Anticheat_ModeratorManager__set_PastPlayers (System_Collections_Generic_List_PlayerEntry__o* value, const MethodInfo* method);
// 0x41b6380

void Anticheat_ModeratorManager__set_PastPlayers
               (System_Collections_Generic_List_PlayerEntry__o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704d55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d55 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_List_PlayerEntry__o **)(lVar1 + 0x18) = value;
  il2cpp_runtime_glue(lVar1 + 0x18,value);
  return;
}


// Anticheat.ModeratorManager$$add_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__add_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x41b63e0

void Anticheat_ModeratorManager__add_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05704d56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d56 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
  do {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20,pSVar1,a);
    bVar2 = a != pSVar1;
    a = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$remove_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__remove_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x41b64c0

void Anticheat_ModeratorManager__remove_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05704d57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d57 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
  do {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20,pSVar1,source);
    bVar2 = source != pSVar1;
    source = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$add_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__add_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x41b65a0

void Anticheat_ModeratorManager__add_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05704d58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d58 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
  do {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar1,a);
    bVar2 = a != pSVar1;
    a = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$remove_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__remove_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x41b6680

void Anticheat_ModeratorManager__remove_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05704d59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d59 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
  do {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar1,source);
    bVar2 = source != pSVar1;
    source = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$add_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__add_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x41b6760

void Anticheat_ModeratorManager__add_StatusMessage
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (DAT_05704d5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5a = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  do {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_string);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar3,a);
    bVar4 = a != pSVar2;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__remove_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x41b6860

void Anticheat_ModeratorManager__remove_StatusMessage
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (DAT_05704d5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5b = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_string);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar3,source);
    bVar4 = source != pSVar2;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x41b6960

void Anticheat_ModeratorManager__add_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (DAT_05704d5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_RoomBanPage);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5c = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  do {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RoomBanPage;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_RoomBanPage);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar3,a);
    bVar4 = a != pSVar2;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x41b6a60

void Anticheat_ModeratorManager__remove_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (DAT_05704d5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_RoomBanPage);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RoomBanPage;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_RoomBanPage);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar3,source);
    bVar4 = source != pSVar2;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x41b6b60

void Anticheat_ModeratorManager__add_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (DAT_05704d5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_RegionBanPage);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5e = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  do {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RegionBanPage;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_RegionBanPage);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar3,a);
    bVar4 = a != pSVar2;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x41b6c60

void Anticheat_ModeratorManager__remove_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (DAT_05704d5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_RegionBanPage);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d5f = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RegionBanPage;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_RegionBanPage);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar3,source);
    bVar4 = source != pSVar2;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$Init
// il2cpp: void Anticheat_ModeratorManager__Init (const MethodInfo* method);
// 0x41b6d60

void Anticheat_ModeratorManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05704d60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManage);
    DAT_05704d60 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManage);
  **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar1);
  return;
}


// Anticheat.ModeratorManager$$OnEnable
// il2cpp: void Anticheat_ModeratorManager__OnEnable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b6de0

void Anticheat_ModeratorManager__OnEnable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (DAT_05704d61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_ClearAuth);
    il2cpp_init_method_metadata(&MethodInfo_Void_UpdateAuthFromRoles);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704d61 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnDisable
// il2cpp: void Anticheat_ModeratorManager__OnDisable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b6ee0

void Anticheat_ModeratorManager__OnDisable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (DAT_05704d62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_ClearAuth);
    il2cpp_init_method_metadata(&MethodInfo_Void_UpdateAuthFromRoles);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704d62 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$Update
// il2cpp: void Anticheat_ModeratorManager__Update (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b6fe0

void Anticheat_ModeratorManager__Update(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  long lVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  Il2CppObject *key;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  System_Collections_Generic_List_object__o *__this_04;
  float in_stack_ffffffffffffff54;
  Il2CppMethodPointer pIVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  _union_229684 key_00;
  _union_229684 _Var15;
  Il2CppObject *pIStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  _union_229684 _Stack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_247328 _Stack_38;
  
  if (DAT_05704d69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_Single__get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704d69 = '\x01';
  }
  auStack_88._16_8_ = (Il2CppType **)0x0;
  auStack_88._24_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_88._8_8_ = (Il2CppType *)0x0;
  auStack_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar14 = (InvokerMethod)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    iVar7 = System_Collections_Generic_Dictionary<object__float>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Int32_get_Count)
    ;
    if (iVar7 != 0) {
      fVar9 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      pSVar3 = (__this->fields)._pendingTimestamps;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)
      goto LAB_041b742e;
      System_Collections_Generic_Dictionary<object__float>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      auStack_88._32_8_ = _Stack_38;
      auStack_88._16_8_ = _Stack_48;
      auStack_88._24_8_ = pIStack_40;
      auStack_88._0_8_ = auStack_58._0_8_;
      auStack_88._8_8_ = auStack_58._8_8_;
      __this_04 = (System_Collections_Generic_List_object__o *)0x0;
      while( true ) {
        __this_02.fields._version = (int32_t)fVar9;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
        __this_02.fields._index = (int32_t)in_stack_ffffffffffffff54;
        __this_02.fields._current.fields.key = (Il2CppObject *)pIVar11;
        __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_02.fields._32_8_ = pIVar14;
        bVar8 = System_Collections_Generic_Dictionary_Enumerator<object__float>__MoveNext
                          (__this_02,(MethodInfo_31D1410 *)auStack_88);
        if ((char)bVar8 == '\0') break;
        key = (Il2CppObject *)il2cpp_glue_041bd250((MethodInfo_31D1410 *)auStack_88,MethodInfo_KeyValuePair_2_System_String_System_Single__get);
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_stack_ffffffffffffff54 = extraout_XMM0_Da;
        fVar10 = System_Collections_Generic_Dictionary<object__float>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                            MethodInfo_Single_get_Item);
        if (fVar10 <= fVar9 - in_stack_ffffffffffffff54) {
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_04 = (System_Collections_Generic_List_object__o *)
                        il2cpp_runtime_glue(TypeInfo_List_string);
            System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
            if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_04->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = key;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,key);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,key,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._version = (int32_t)fVar9;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
      __this_03.fields._index = (int32_t)in_stack_ffffffffffffff54;
      __this_03.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_03.fields._32_8_ = pIVar14;
      System_Collections_Generic_Dictionary_Enumerator<object__float>__Dispose
                (__this_03,(MethodInfo_31D1540 *)auStack_88);
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_04,
                   MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
        key_00 = _Stack_48;
        while( true ) {
          __this_00.fields._index = (int32_t)fVar9;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_04;
          __this_00.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_00.fields._current = (Il2CppObject *)pSVar12;
          bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff58);
          if ((char)bVar8 == '\0') break;
          pSVar3 = (__this->fields)._pendingTimestamps;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          _Var15 = key_00;
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar3 = (__this->fields)._pendingTimeouts;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar5,key_00.genericMethod,&pIStack_90,MethodInfo_Boolean_TryGetValue);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
          key_00 = _Var15;
          if (pIStack_90 != (Il2CppObject *)0x0) {
            (*pIStack_90[1].monitor)(pIStack_90[4].klass,pIStack_90[2].monitor);
            key_00 = _Var15;
          }
        }
        __this_01.fields._index = (int32_t)fVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_04;
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
        __this_01.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
      }
    }
    return;
  }
LAB_041b742e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$OnEvent
// il2cpp: void Anticheat_ModeratorManager__OnEvent (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x41b7610

void Anticheat_ModeratorManager__OnEvent
               (Anticheat_ModeratorManager_o *__this,
               ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  uint8_t uVar1;
  ExitGames_Client_Photon_ParameterDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *key;
  MethodInfo_37C6AF0 *method_00;
  MethodInfo_37C6A60 *method_01;
  MethodInfo_37C6AF0 *extraout_RDX;
  MethodInfo_37C6A60 *method_02;
  MethodInfo_37C6A60 *method_03;
  MethodInfo *method_04;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar6;
  System_Collections_Generic_KeyValuePair_K__V__o SVar7;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_04;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_05;
  undefined8 uStack_48;
  MethodInfo_37C6AF0 *pMStack_40;
  Il2CppObject *pIStack_38;
  
  if (DAT_05704d63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&MethodInfo_Byte_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu);
    DAT_05704d63 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  uStack_48 = 0;
  pMStack_40 = (MethodInfo_37C6AF0 *)0x0;
  if (photonEvent != (ExitGames_Client_Photon_EventData_o *)0x0) {
    method_04 = (MethodInfo *)0x0;
    iVar4 = ExitGames_Client_Photon_EventData__get_Sender(photonEvent,(MethodInfo *)0x0);
    if (iVar4 == -1) {
      uVar1 = (photonEvent->fields).Code;
      if (uVar1 == 0xbe) {
        __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)
                    il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
        System_Collections_Generic_Dictionary<byte__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_Byte_System_Object);
        __this_00 = (photonEvent->fields).Parameters;
        if (__this_00 != (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) {
          EVar6 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator
                            (__this_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo_37C6AF0 *)EVar6.fields._dict;
          uStack_48 = CONCAT44(uStack_48._4_4_,EVar6.fields._index);
          pMStack_40 = method_00;
          if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            EVar6.fields._dict = MethodInfo_Boolean_MoveNext;
            EVar6.fields._0_8_ = &uStack_48;
            bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                              (EVar6,method_00);
            method_03 = method_02;
            if ((char)bVar5 != '\0') {
              __this_05.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
              __this_05.fields._0_8_ = &uStack_48;
              ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                        (__this_05,method_02);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            while (__this_02.fields._dict = MethodInfo_Boolean_MoveNext, __this_02.fields._0_8_ = &uStack_48,
                  bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                                    (__this_02,method_00), method_03 = method_01,
                  (char)bVar5 != '\0') {
              __this_03.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
              __this_03.fields._0_8_ = &uStack_48;
              SVar7 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                                (__this_03,method_01);
              System_Collections_Generic_Dictionary<byte__object>__set_Item
                        (__this_01,(uint8_t)SVar7.fields.key,SVar7.fields.value,MethodInfo_Void_set_Item);
              method_00 = extraout_RDX;
            }
          }
          __this_04.fields._dict = MethodInfo_Void_Dispose;
          __this_04.fields._0_8_ = &uStack_48;
          ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__Dispose
                    (__this_04,(MethodInfo_37C6B50 *)method_03);
          if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            return;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this_01,'\0',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            return;
          }
          key = System_Collections_Generic_Dictionary<byte__object>__get_Item
                          (__this_01,'\0',MethodInfo_Object_get_Item);
          if ((key != (Il2CppObject *)0x0) && (key->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(key);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            bVar5 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                              (pSVar2,key,&pIStack_38,MethodInfo_Boolean_TryGetValue);
            if ((char)bVar5 == '\0') {
              return;
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._pendingCallbacks;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__Remove(pSVar2,key,MethodInfo_Boolean_Remove)
              ;
              pSVar3 = (__this->fields)._pendingTimestamps;
              if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                System_Collections_Generic_Dictionary<object__float>__Remove
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                           MethodInfo_Boolean_Remove);
                pSVar3 = (__this->fields)._pendingTimeouts;
                if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                  System_Collections_Generic_Dictionary<object__float>__Remove
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                             MethodInfo_Boolean_Remove);
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._pendingTimeoutCallbacks;
                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__object>__Remove
                              (pSVar2,key,MethodInfo_Boolean_Remove);
                    if (pIStack_38 == (Il2CppObject *)0x0) {
                      return;
                    }
                    (*pIStack_38[1].monitor)(pIStack_38[4].klass,__this_01,pIStack_38[2].monitor);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LAB_041b7945;
      }
      if (uVar1 == 0xbd) {
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_ModeratorManager__HandlePlayerJoinNotification(photonEvent,method_04);
      }
      else if (uVar1 == 0xbc) {
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_ModeratorManager__HandlePlayerListNotification(photonEvent,method_04);
      }
    }
    return;
  }
LAB_041b7945:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$OnPlayerEnteredRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerEnteredRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x41b81e0

void Anticheat_ModeratorManager__OnPlayerEnteredRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newPlayer,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerLeftRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x41b81f0

void Anticheat_ModeratorManager__OnPlayerLeftRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *otherPlayer,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t key;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  Il2CppObject *pIStack_18;
  
  if (DAT_05704d64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d64 = '\x01';
  }
  pIStack_18 = (Il2CppObject *)0x0;
  if (otherPlayer == (Photon_Realtime_Player_o *)0x0) goto LAB_041b8456;
  key = (otherPlayer->fields).actorNumber;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704754 != '\0') goto LAB_041b8267;
LAB_041b8296:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8273;
LAB_041b82b5:
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  else {
    if (DAT_05704754 == '\0') goto LAB_041b8296;
LAB_041b8267:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b82b5;
LAB_041b8273:
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_041b8456;
  bVar6 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                    (pSVar3,key,&pIStack_18,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar6 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704754 != '\0') goto LAB_041b8302;
LAB_041b8331:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b830e;
LAB_041b8350:
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  else {
    if (DAT_05704754 == '\0') goto LAB_041b8331;
LAB_041b8302:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8350;
LAB_041b830e:
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_041b8456;
  System_Collections_Generic_Dictionary<int__object>__Remove(pSVar3,key,MethodInfo_Boolean_Remove);
  if (DAT_05704755 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704755 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8392;
LAB_041b83c6:
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
    lVar5 = MethodInfo_Void_Add;
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b83c6;
LAB_041b8392:
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
    lVar5 = MethodInfo_Void_Add;
  }
  MethodInfo_Void_Add = lVar5;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIStack_18;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,pIStack_18,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      return;
    }
  }
LAB_041b8456:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$OnRoomPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnRoomPropertiesUpdate (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x41b8460

void Anticheat_ModeratorManager__OnRoomPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,
               ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x41b8470

void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnMasterClientSwitched
// il2cpp: void Anticheat_ModeratorManager__OnMasterClientSwitched (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x41b8480

void Anticheat_ModeratorManager__OnMasterClientSwitched
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinedRoom
// il2cpp: void Anticheat_ModeratorManager__OnJoinedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b8490

void Anticheat_ModeratorManager__OnJoinedRoom
               (Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_array *source;
  MethodInfo *pMVar5;
  
  if (DAT_05704d65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d65 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704d67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_String);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"admin");
    il2cpp_init_method_metadata(&"moderator");
    il2cpp_init_method_metadata(&"trusted");
    DAT_05704d67 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041b8500;
LAB_041b8573:
    il2cpp_init_class();
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041b8573;
LAB_041b8500:
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  if (source == (System_String_array *)0x0) {
LAB_041b875f:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      pMVar5 = TypeInfo_ModeratorManager;
      il2cpp_init_class();
      Anticheat_ModeratorManager__ClearAuth(pMVar5);
      return;
    }
    Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
    return;
  }
  bVar4 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,"admin",
                     MethodInfo_Boolean_Contains_String);
  if ((char)bVar4 == '\0') {
    bVar4 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,"moderator",
                       MethodInfo_Boolean_Contains_String);
    if ((char)bVar4 == '\0') {
      bVar4 = System_Linq_Enumerable__Contains<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,"trusted",
                         MethodInfo_Boolean_Contains_String);
      if ((char)bVar4 == '\0') goto LAB_041b875f;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        if (DAT_05704d94 != '\0') goto LAB_041b870a;
LAB_041b88a3:
        il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
        DAT_05704d94 = '\x01';
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b871a;
LAB_041b88c6:
        il2cpp_init_class();
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (DAT_05704d95 != '\0') goto LAB_041b8732;
LAB_041b88e6:
        il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
        DAT_05704d95 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
        pMVar5 = TypeInfo_ModeratorManager;
      }
      else {
        if (DAT_05704d94 == '\0') goto LAB_041b88a3;
LAB_041b870a:
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b88c6;
LAB_041b871a:
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (DAT_05704d95 == '\0') goto LAB_041b88e6;
LAB_041b8732:
        iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pMVar5 = TypeInfo_ModeratorManager;
      }
      pIVar2 = pMVar5[2].virtualMethodPointer;
      *(undefined4 *)(pIVar2 + 0xc) = 0;
      lVar3 = *(long *)(pIVar2 + 0x20);
      goto joined_r0x041b8754;
    }
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      if (DAT_05704d94 != '\0') goto LAB_041b8675;
LAB_041b8822:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d94 = '\x01';
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b8685;
LAB_041b8845:
      il2cpp_init_class();
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (DAT_05704d95 != '\0') goto LAB_041b869d;
LAB_041b8865:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d95 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
      pMVar5 = TypeInfo_ModeratorManager;
    }
    else {
      if (DAT_05704d94 == '\0') goto LAB_041b8822;
LAB_041b8675:
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b8845;
LAB_041b8685:
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (DAT_05704d95 == '\0') goto LAB_041b8865;
LAB_041b869d:
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pMVar5 = TypeInfo_ModeratorManager;
    }
    pIVar2 = pMVar5[2].virtualMethodPointer;
    *(undefined4 *)(pIVar2 + 0xc) = 1;
    lVar3 = *(long *)(pIVar2 + 0x20);
    goto joined_r0x041b8754;
  }
  if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d94 != '\0') goto LAB_041b85d3;
LAB_041b87a1:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d94 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b85e3;
LAB_041b87c4:
    il2cpp_init_class();
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (DAT_05704d95 != '\0') goto LAB_041b85fb;
LAB_041b87e4:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d95 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
    pMVar5 = TypeInfo_ModeratorManager;
  }
  else {
    if (DAT_05704d94 == '\0') goto LAB_041b87a1;
LAB_041b85d3:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b87c4;
LAB_041b85e3:
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (DAT_05704d95 == '\0') goto LAB_041b87e4;
LAB_041b85fb:
    iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pMVar5 = TypeInfo_ModeratorManager;
  }
  pIVar2 = pMVar5[2].virtualMethodPointer;
  *(undefined4 *)(pIVar2 + 0xc) = 2;
  lVar3 = *(long *)(pIVar2 + 0x20);
joined_r0x041b8754:
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}


// Anticheat.ModeratorManager$$OnLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnLeftRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b8920

void Anticheat_ModeratorManager__OnLeftRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_05704d66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d66 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b89e9;
LAB_041b8948:
    Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
    if (DAT_05704754 != '\0') goto LAB_041b895a;
LAB_041b8a00:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b8a23;
LAB_041b896a:
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x10);
  }
  else {
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b8948;
LAB_041b89e9:
    method_00 = TypeInfo_ModeratorManager;
    il2cpp_init_class();
    Anticheat_ModeratorManager__ClearAuth(method_00);
    if (DAT_05704754 == '\0') goto LAB_041b8a00;
LAB_041b895a:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b896a;
LAB_041b8a23:
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x10);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_041b8b2c;
  System_Collections_Generic_Dictionary<int__object>__Clear(__this_00,MethodInfo_Void_Clear);
  if (DAT_05704755 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704755 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b8a97;
LAB_041b8a63:
    lVar1 = *(long *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x18);
  }
  else {
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b8a63;
LAB_041b8a97:
    il2cpp_init_class();
    lVar1 = *(long *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x18);
  }
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    length = *(int32_t *)(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length,(MethodInfo *)0x0);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._pendingCallbacks;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
      pSVar3 = (__this->fields)._pendingTimestamps;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary<object__float>__Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
            return;
          }
        }
      }
    }
  }
LAB_041b8b2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$UpdateAuthFromRoles
// il2cpp: void Anticheat_ModeratorManager__UpdateAuthFromRoles (const MethodInfo* method);
// 0x41b84e0

void Anticheat_ModeratorManager__UpdateAuthFromRoles(MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_array *source;
  MethodInfo *pMVar5;
  
  if (DAT_05704d67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_String);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&"admin");
    il2cpp_init_method_metadata(&"moderator");
    il2cpp_init_method_metadata(&"trusted");
    DAT_05704d67 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041b8573;
LAB_041b8500:
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041b8500;
LAB_041b8573:
    il2cpp_init_class();
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  if (source == (System_String_array *)0x0) {
LAB_041b875f:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) {
      Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
      return;
    }
    pMVar5 = TypeInfo_ModeratorManager;
    il2cpp_init_class();
    Anticheat_ModeratorManager__ClearAuth(pMVar5);
    return;
  }
  bVar4 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,"admin",
                     MethodInfo_Boolean_Contains_String);
  if ((char)bVar4 == '\0') {
    bVar4 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,"moderator",
                       MethodInfo_Boolean_Contains_String);
    if ((char)bVar4 == '\0') {
      bVar4 = System_Linq_Enumerable__Contains<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,"trusted",
                         MethodInfo_Boolean_Contains_String);
      if ((char)bVar4 == '\0') goto LAB_041b875f;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        if (DAT_05704d94 == '\0') goto LAB_041b88a3;
LAB_041b870a:
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b871a;
LAB_041b88c6:
        il2cpp_init_class();
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (DAT_05704d95 == '\0') goto LAB_041b88e6;
LAB_041b8732:
        iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      else {
        if (DAT_05704d94 != '\0') goto LAB_041b870a;
LAB_041b88a3:
        il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
        DAT_05704d94 = '\x01';
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b88c6;
LAB_041b871a:
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (DAT_05704d95 != '\0') goto LAB_041b8732;
LAB_041b88e6:
        il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
        DAT_05704d95 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
        pMVar5 = TypeInfo_ModeratorManager;
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pMVar5 = TypeInfo_ModeratorManager;
      }
      pIVar2 = pMVar5[2].virtualMethodPointer;
      *(undefined4 *)(pIVar2 + 0xc) = 0;
      lVar3 = *(long *)(pIVar2 + 0x20);
      goto joined_r0x041b8754;
    }
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      if (DAT_05704d94 == '\0') goto LAB_041b8822;
LAB_041b8675:
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b8685;
LAB_041b8845:
      il2cpp_init_class();
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (DAT_05704d95 == '\0') goto LAB_041b8865;
LAB_041b869d:
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
    else {
      if (DAT_05704d94 != '\0') goto LAB_041b8675;
LAB_041b8822:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d94 = '\x01';
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b8845;
LAB_041b8685:
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (DAT_05704d95 != '\0') goto LAB_041b869d;
LAB_041b8865:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d95 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
      pMVar5 = TypeInfo_ModeratorManager;
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pMVar5 = TypeInfo_ModeratorManager;
    }
    pIVar2 = pMVar5[2].virtualMethodPointer;
    *(undefined4 *)(pIVar2 + 0xc) = 1;
    lVar3 = *(long *)(pIVar2 + 0x20);
    goto joined_r0x041b8754;
  }
  if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d94 == '\0') goto LAB_041b87a1;
LAB_041b85d3:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto LAB_041b85e3;
LAB_041b87c4:
    il2cpp_init_class();
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (DAT_05704d95 == '\0') goto LAB_041b87e4;
LAB_041b85fb:
    iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
  }
  else {
    if (DAT_05704d94 != '\0') goto LAB_041b85d3;
LAB_041b87a1:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d94 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto LAB_041b87c4;
LAB_041b85e3:
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (DAT_05704d95 != '\0') goto LAB_041b85fb;
LAB_041b87e4:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d95 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
    pMVar5 = TypeInfo_ModeratorManager;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pMVar5 = TypeInfo_ModeratorManager;
  }
  pIVar2 = pMVar5[2].virtualMethodPointer;
  *(undefined4 *)(pIVar2 + 0xc) = 2;
  lVar3 = *(long *)(pIVar2 + 0x20);
joined_r0x041b8754:
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}


// Anticheat.ModeratorManager$$ClearAuth
// il2cpp: void Anticheat_ModeratorManager__ClearAuth (const MethodInfo* method);
// 0x41b8b40

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__ClearAuth(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  long lVar3;
  bool bVar4;
  
  if (DAT_05704d68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d68 = '\x01';
    in_RDX = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8b68;
LAB_041b8c25:
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
    if (DAT_05704752 != '\0') goto LAB_041b8b75;
LAB_041b8c37:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704752 = '\x01';
    in_RDX = extraout_RDX_01;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8b86;
LAB_041b8c5b:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
    in_RDX = extraout_RDX_02;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_07;
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8c25;
LAB_041b8b68:
    if (DAT_05704752 == '\0') goto LAB_041b8c37;
LAB_041b8b75:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8c5b;
LAB_041b8b86:
    cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    if (DAT_05704753 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704753 = '\x01';
      in_RDX = extraout_RDX_08;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8ca1;
LAB_041b8d6a:
      il2cpp_init_class();
      bVar4 = *(int *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) == -1;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        in_RDX = extraout_RDX_11;
        goto joined_r0x041b8cb6;
      }
      in_RDX = extraout_RDX_09;
      if (DAT_05704d94 == '\0') goto LAB_041b8e48;
LAB_041b8d9b:
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8e6c;
LAB_041b8dac:
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
      if (DAT_05704d95 == '\0') goto LAB_041b8e8d;
LAB_041b8dc4:
      if (*(int *)(lVar3 + 0xe4) == 0) goto LAB_041b8ead;
LAB_041b8dd1:
      *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0xffffffff;
      if (bVar4) {
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8d6a;
LAB_041b8ca1:
      bVar4 = *(int *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) == -1;
joined_r0x041b8cb6:
      if (DAT_05704d94 != '\0') goto LAB_041b8d9b;
LAB_041b8e48:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d94 = '\x01';
      in_RDX = extraout_RDX_12;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8dac;
LAB_041b8e6c:
      il2cpp_init_class();
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
      in_RDX = extraout_RDX_13;
      if (DAT_05704d95 != '\0') goto LAB_041b8dc4;
LAB_041b8e8d:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d95 = '\x01';
      lVar3 = TypeInfo_ModeratorManager;
      in_RDX = extraout_RDX_14;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8dd1;
LAB_041b8ead:
      il2cpp_init_class();
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined4 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = 0xffffffff;
      in_RDX = extraout_RDX_15;
      if (bVar4) {
        return;
      }
    }
    iVar2 = *(int *)(lVar3 + 0xe4);
    goto joined_r0x041b8bef;
  }
  if (DAT_05704d94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d94 = '\x01';
    in_RDX = extraout_RDX_03;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b8bb5;
LAB_041b8ce5:
    il2cpp_init_class();
    lVar3 = TypeInfo_ModeratorManager;
    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
    in_RDX = extraout_RDX_04;
    if (DAT_05704d95 != '\0') goto LAB_041b8bcd;
LAB_041b8d06:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d95 = '\x01';
    iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    lVar3 = TypeInfo_ModeratorManager;
    in_RDX = extraout_RDX_05;
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b8ce5;
LAB_041b8bb5:
    lVar3 = TypeInfo_ModeratorManager;
    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
    if (DAT_05704d95 == '\0') goto LAB_041b8d06;
LAB_041b8bcd:
    iVar2 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = TypeInfo_ModeratorManager;
    in_RDX = extraout_RDX_06;
  }
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0xffffffff;
  iVar2 = *(int *)(lVar3 + 0xe4);
joined_r0x041b8bef:
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
    in_RDX = extraout_RDX_10;
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  }
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))
            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),in_RDX,
             *(code **)(lVar3 + 0x18));
  return;
}


// Anticheat.ModeratorManager$$OnFriendListUpdate
// il2cpp: void Anticheat_ModeratorManager__OnFriendListUpdate (Anticheat_ModeratorManager_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x41b8ee0

void Anticheat_ModeratorManager__OnFriendListUpdate
               (Anticheat_ModeratorManager_o *__this,
               System_Collections_Generic_List_FriendInfo__o *friendList,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreatedRoom
// il2cpp: void Anticheat_ModeratorManager__OnCreatedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b8ef0

void Anticheat_ModeratorManager__OnCreatedRoom
               (Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreateRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnCreateRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x41b8f00

void Anticheat_ModeratorManager__OnCreateRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x41b8f10

void Anticheat_ModeratorManager__OnJoinRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRandomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRandomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x41b8f20

void Anticheat_ModeratorManager__OnJoinRandomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$TickTimeouts
// il2cpp: void Anticheat_ModeratorManager__TickTimeouts (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41b6ff0

void Anticheat_ModeratorManager__TickTimeouts
               (Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  long lVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  Il2CppObject *key;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  System_Collections_Generic_List_object__o *__this_04;
  float in_stack_ffffffffffffff54;
  Il2CppMethodPointer pIVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  _union_229684 key_00;
  _union_229684 _Var15;
  Il2CppObject *pIStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  _union_229684 _Stack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_247328 _Stack_38;
  
  if (DAT_05704d69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_Single__get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704d69 = '\x01';
  }
  auStack_88._16_8_ = (Il2CppType **)0x0;
  auStack_88._24_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_88._8_8_ = (Il2CppType *)0x0;
  auStack_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar14 = (InvokerMethod)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    iVar7 = System_Collections_Generic_Dictionary<object__float>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Int32_get_Count)
    ;
    if (iVar7 != 0) {
      fVar9 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      pSVar3 = (__this->fields)._pendingTimestamps;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)
      goto LAB_041b742e;
      System_Collections_Generic_Dictionary<object__float>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      auStack_88._32_8_ = _Stack_38;
      auStack_88._16_8_ = _Stack_48;
      auStack_88._24_8_ = pIStack_40;
      auStack_88._0_8_ = auStack_58._0_8_;
      auStack_88._8_8_ = auStack_58._8_8_;
      __this_04 = (System_Collections_Generic_List_object__o *)0x0;
      while( true ) {
        __this_02.fields._version = (int32_t)fVar9;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
        __this_02.fields._index = (int32_t)in_stack_ffffffffffffff54;
        __this_02.fields._current.fields.key = (Il2CppObject *)pIVar11;
        __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_02.fields._32_8_ = pIVar14;
        bVar8 = System_Collections_Generic_Dictionary_Enumerator<object__float>__MoveNext
                          (__this_02,(MethodInfo_31D1410 *)auStack_88);
        if ((char)bVar8 == '\0') break;
        key = (Il2CppObject *)il2cpp_glue_041bd250((MethodInfo_31D1410 *)auStack_88,MethodInfo_KeyValuePair_2_System_String_System_Single__get);
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_stack_ffffffffffffff54 = extraout_XMM0_Da;
        fVar10 = System_Collections_Generic_Dictionary<object__float>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                            MethodInfo_Single_get_Item);
        if (fVar10 <= fVar9 - in_stack_ffffffffffffff54) {
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_04 = (System_Collections_Generic_List_object__o *)
                        il2cpp_runtime_glue(TypeInfo_List_string);
            System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
            if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_04->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = key;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,key);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,key,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._version = (int32_t)fVar9;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04;
      __this_03.fields._index = (int32_t)in_stack_ffffffffffffff54;
      __this_03.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_03.fields._32_8_ = pIVar14;
      System_Collections_Generic_Dictionary_Enumerator<object__float>__Dispose
                (__this_03,(MethodInfo_31D1540 *)auStack_88);
      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_04,
                   MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
        key_00 = _Stack_48;
        while( true ) {
          __this_00.fields._index = (int32_t)fVar9;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_04;
          __this_00.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_00.fields._current = (Il2CppObject *)pSVar12;
          bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff58);
          if ((char)bVar8 == '\0') break;
          pSVar3 = (__this->fields)._pendingTimestamps;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          _Var15 = key_00;
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar3 = (__this->fields)._pendingTimeouts;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar5,key_00.genericMethod,&pIStack_90,MethodInfo_Boolean_TryGetValue);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
          key_00 = _Var15;
          if (pIStack_90 != (Il2CppObject *)0x0) {
            (*pIStack_90[1].monitor)(pIStack_90[4].klass,pIStack_90[2].monitor);
            key_00 = _Var15;
          }
        }
        __this_01.fields._index = (int32_t)fVar9;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_04;
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
        __this_01.fields._current = (Il2CppObject *)pSVar12;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
      }
    }
    return;
  }
LAB_041b742e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$TrackRequest
// il2cpp: System_String_o* Anticheat_ModeratorManager__TrackRequest (float timeoutSec, System_Action_Dictionary_byte__object___o* onResponse, System_Action_o* onTimeout, const MethodInfo* method);
// 0x41b8f30

System_String_o *
Anticheat_ModeratorManager__TrackRequest
          (float timeoutSec,System_Action_Dictionary_byte__object___o *onResponse,
          System_Action_o *onTimeout,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  System_String_o *key;
  float value;
  System_Guid_o __this;
  System_Guid_Fields local_38;
  
  if (DAT_05704d6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata();
    DAT_05704d6a = '\x01';
  }
  local_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
  __this.fields._d = '\0';
  __this.fields._e = '\0';
  __this.fields._f = '\0';
  __this.fields._g = '\0';
  __this.fields._h = '\0';
  __this.fields._i = '\0';
  __this.fields._j = '\0';
  __this.fields._k = '\0';
  __this.fields._0_8_ = &local_38;
  key = System_Guid__ToString(__this,local_38._8_8_);
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((**(long **)(TypeInfo_ModeratorManager + 0xb8) != 0) &&
     (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (**(long **)(TypeInfo_ModeratorManager + 0xb8) + 0x20),
     pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar1,(Il2CppObject *)key,(Il2CppObject *)onResponse,MethodInfo_Void_set_Item);
    if (**(long **)(TypeInfo_ModeratorManager + 0xb8) != 0) {
      pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (**(long **)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      value = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  (pSVar2,(Il2CppObject *)key,value,MethodInfo_Void_set_Item);
        if ((**(long **)(TypeInfo_ModeratorManager + 0xb8) != 0) &&
           (pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                      (**(long **)(TypeInfo_ModeratorManager + 0xb8) + 0x30),
           pSVar2 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary<object__float>__set_Item
                    (pSVar2,(Il2CppObject *)key,timeoutSec,MethodInfo_Void_set_Item);
          if (onTimeout != (System_Action_o *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((**(long **)(TypeInfo_ModeratorManager + 0xb8) == 0) ||
               (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (**(long **)(TypeInfo_ModeratorManager + 0xb8) + 0x38),
               pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
            goto LAB_041b90c1;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar1,(Il2CppObject *)key,(Il2CppObject *)onTimeout,MethodInfo_Void_set_Item);
          }
          return key;
        }
      }
    }
  }
LAB_041b90c1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RaiseModEvent
// il2cpp: void Anticheat_ModeratorManager__RaiseModEvent (uint8_t code, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41b90d0

void Anticheat_ModeratorManager__RaiseModEvent
               (uint8_t code,System_Collections_Generic_Dictionary_byte__object__o *data,
               MethodInfo *method)

{
  Photon_Realtime_RaiseEventOptions_o *__this;
  System_Int32_array *pSVar1;
  Photon_Realtime_Player_o *pPVar2;
  MethodInfo *in_R9;
  ExitGames_Client_Photon_SendOptions_o sendOptions;
  
  if (DAT_05704d6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RaiseEventOptions);
    il2cpp_init_method_metadata(&TypeInfo_SendOptions);
    DAT_05704d6b = '\x01';
  }
  __this = (Photon_Realtime_RaiseEventOptions_o *)il2cpp_runtime_glue(TypeInfo_RaiseEventOptions);
  Photon_Realtime_RaiseEventOptions___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,1);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar2 != (Photon_Realtime_Player_o *)0x0) && (pSVar1 != (System_Int32_array *)0x0)) {
    if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar1->m_Items[0] = (pPVar2->fields).actorNumber;
    if (__this != (Photon_Realtime_RaiseEventOptions_o *)0x0) {
      (__this->fields).TargetActors = pSVar1;
      il2cpp_runtime_glue(&(__this->fields).TargetActors,pSVar1);
      if (*(int *)(TypeInfo_SendOptions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      sendOptions.fields._8_4_ = 0;
      sendOptions.fields._0_8_ = **(ulong **)(TypeInfo_SendOptions + 0xb8);
      Photon_Pun_PhotonNetwork__RaiseEvent(code,(Il2CppObject *)data,__this,sendOptions,in_R9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$InvokeStatus
// il2cpp: void Anticheat_ModeratorManager__InvokeStatus (System_String_o* text, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41b91f0

void Anticheat_ModeratorManager__InvokeStatus
               (System_String_o *text,System_Action_string__o *localStatus,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704d6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),text,*(undefined8 *)(lVar2 + 0x28));
  }
  if (localStatus == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(localStatus->fields).invoke_impl)
            ((localStatus->fields).method_code,text,(localStatus->fields).method);
  return;
}


// Anticheat.ModeratorManager$$GetResponseEntries
// il2cpp: System_Collections_Generic_Dictionary_byte__object__array* Anticheat_ModeratorManager__GetResponseEntries (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t entriesKey, const MethodInfo* method);
// 0x41b92a0

System_Collections_Generic_Dictionary_byte__object__array *
Anticheat_ModeratorManager__GetResponseEntries
          (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t entriesKey,
          MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar9;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar10;
  ulong uVar11;
  System_Collections_Generic_Dictionary_byte__object__o **ppSVar12;
  long *plVar13;
  
  if (DAT_05704d6d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05704d6d = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
LAB_041b94a2:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                    (data,entriesKey,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                       (data,entriesKey,MethodInfo_Object_get_Item);
    pSVar4 = (System_Collections_Generic_Dictionary_byte__object__array *)
             il2cpp_runtime_glue(pIVar3,TypeInfo_Dictionary_byte__object);
    if (pSVar4 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      return pSVar4;
    }
    lVar5 = il2cpp_runtime_glue(pIVar3,TypeInfo_object);
    if (lVar5 != 0) {
      pSVar4 = (System_Collections_Generic_Dictionary_byte__object__array *)
               il2cpp_glue_02274930(TypeInfo_Dictionary_byte__object,*(undefined4 *)(lVar5 + 0x18));
      if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
        return pSVar4;
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        plVar13 = (long *)(lVar5 + 0x20);
        ppSVar12 = pSVar4->m_Items;
        uVar11 = 0;
        do {
          if (uVar6 <= uVar11) goto LAB_041b949d;
          pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)*plVar13;
          if (pSVar10 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
LAB_041b9450:
            pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
          }
          else {
            bVar1 = (TypeInfo_Dictionary_byte__object->_2).naturalAligment;
            if ((bVar1 <= (pSVar10->klass->_2).naturalAligment) &&
               ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Dictionary_byte__object)) {
              lVar7 = il2cpp_runtime_glue(pSVar10,(((pSVar4->obj).klass)->_1).element_class);
              if (lVar7 == 0) {
                uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar8,0);
              }
              pSVar9 = pSVar10->klass;
              bVar1 = (TypeInfo_Dictionary_byte__object->_2).naturalAligment;
              if (bVar1 <= (pSVar9->_2).naturalAligment) goto LAB_041b9404;
              goto LAB_041b9450;
            }
            pSVar9 = pSVar10->klass;
            bVar1 = (TypeInfo_Dictionary_byte__object->_2).naturalAligment;
            if ((pSVar9->_2).naturalAligment < bVar1) goto LAB_041b9450;
LAB_041b9404:
            if ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Dictionary_byte__object) goto LAB_041b9450;
          }
          if ((uint)pSVar4->max_length <= uVar11) {
LAB_041b949d:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          *ppSVar12 = pSVar10;
          il2cpp_runtime_glue(ppSVar12,pSVar10);
          uVar11 = uVar11 + 1;
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          plVar13 = plVar13 + 1;
          ppSVar12 = ppSVar12 + 1;
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar11) {
            return pSVar4;
          }
        } while( true );
      }
      goto LAB_041b94a2;
    }
  }
  return (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
}


// Anticheat.ModeratorManager$$ReadInt
// il2cpp: int32_t Anticheat_ModeratorManager__ReadInt (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t key, int32_t defaultValue, const MethodInfo* method);
// 0x41b94c0

int32_t Anticheat_ModeratorManager__ReadInt
                  (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t key,
                  int32_t defaultValue,MethodInfo *method)

{
  System_String_c *pSVar1;
  uint in_EAX;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *s;
  uint *puVar4;
  short *psVar5;
  byte *pbVar6;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05704d6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    DAT_05704d6e = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey(data,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item(data,key,MethodInfo_Object_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        s = (System_String_o *)
            System_Collections_Generic_Dictionary<byte__object>__get_Item(data,key,MethodInfo_Object_get_Item);
        if (s != (System_String_o *)0x0) {
          pSVar1 = s->klass;
          if ((pSVar1 == DAT_05711068) || (pSVar1 == DAT_05711088)) {
            puVar4 = (uint *)il2cpp_glue_022c7330(s);
            defaultValue = *puVar4;
          }
          else if (pSVar1 == DAT_05711058) {
            psVar5 = (short *)il2cpp_glue_022c7330(s);
            defaultValue = (int32_t)*psVar5;
          }
          else if (pSVar1 == DAT_05711038) {
            pbVar6 = (byte *)il2cpp_glue_022c7330(s);
            defaultValue = (int32_t)*pbVar6;
          }
          else if (pSVar1 == DAT_057110b0) {
            bVar2 = System_Int32__TryParse(s,(int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              defaultValue = uStack_28._4_4_;
            }
          }
        }
      }
    }
  }
  return defaultValue;
}


// Anticheat.ModeratorManager$$ParsePlayerEntry
// il2cpp: Anticheat_PlayerEntry_o* Anticheat_ModeratorManager__ParsePlayerEntry (System_Collections_Generic_Dictionary_byte__object__o* entry, const MethodInfo* method);
// 0x41b95d0

Anticheat_PlayerEntry_o *
Anticheat_ModeratorManager__ParsePlayerEntry
          (System_Collections_Generic_Dictionary_byte__object__o *entry,MethodInfo *method)

{
  bool_conflict bVar1;
  Anticheat_PlayerEntry_o *__this;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  int32_t *piVar4;
  int32_t iVar5;
  
  if (DAT_05704d6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PlayerEntry);
    DAT_05704d6f = '\x01';
  }
  __this = (Anticheat_PlayerEntry_o *)il2cpp_runtime_glue(TypeInfo_PlayerEntry);
  Anticheat_PlayerEntry___ctor(__this,(MethodInfo *)0x0);
  if (entry == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
LAB_041b97f1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey(entry,'\0',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 == '\0') {
    pSVar2 = DAT_057110b0->static_fields->Empty;
  }
  else {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item(entry,'\0',MethodInfo_Object_get_Item);
    if ((pSVar2 != (System_String_o *)0x0) && (pSVar2->klass != DAT_057110b0)) goto LAB_041b975e;
  }
  if (__this == (Anticheat_PlayerEntry_o *)0x0) goto LAB_041b97f1;
  (__this->fields).SessionId = pSVar2;
  il2cpp_runtime_glue(&__this->fields);
  bVar1 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                    (entry,'\x01',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 == '\0') {
    pSVar2 = DAT_057110b0->static_fields->Empty;
  }
  else {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item
                       (entry,'\x01',MethodInfo_Object_get_Item);
    if ((pSVar2 != (System_String_o *)0x0) && (pSVar2->klass != DAT_057110b0)) goto LAB_041b975e;
  }
  (__this->fields).IPAddress = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).IPAddress);
  bVar1 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                    (entry,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 == '\0') {
    pSVar2 = DAT_057110b0->static_fields->Empty;
  }
  else {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<byte__object>__get_Item
                       (entry,'\x02',MethodInfo_Object_get_Item);
    if ((pSVar2 != (System_String_o *)0x0) && (pSVar2->klass != DAT_057110b0)) {
LAB_041b975e:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar2,DAT_057110b0);
    }
  }
  (__this->fields).Username = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Username);
  bVar1 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                    (entry,'\x03',MethodInfo_Boolean_ContainsKey);
  iVar5 = 0;
  if ((char)bVar1 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                       (entry,'\x03',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_041b97f1;
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar3);
    }
    piVar4 = (int32_t *)il2cpp_glue_022c7330(pIVar3);
    iVar5 = *piVar4;
  }
  (__this->fields).ActorNumber = iVar5;
  return __this;
}


// Anticheat.ModeratorManager$$RequestPlayerList
// il2cpp: void Anticheat_ModeratorManager__RequestPlayerList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41b9800

void Anticheat_ModeratorManager__RequestPlayerList
               (System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar3;
  
  if (DAT_05704d70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestPlayerList_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestPlayerList_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass85_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d70 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass85_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass85_0);
  Anticheat_ModeratorManager_<>c__DisplayClass85_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass85_0_o *)0x0) goto LAB_041b9a66;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041b9a20;
LAB_041b98fe:
    uVar3 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b990f;
LAB_041b9a44:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041b98fe;
LAB_041b9a20:
    uVar3 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b9a44;
LAB_041b990f:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar3,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar3,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb6,__this_00,method_01);
    return;
  }
LAB_041b9a66:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$PopulatePlayerList
// il2cpp: void Anticheat_ModeratorManager__PopulatePlayerList (System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x41b9a70

void Anticheat_ModeratorManager__PopulatePlayerList
               (System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *entry;
  long lVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  Anticheat_PlayerEntry_o *value;
  MethodInfo *method_00;
  ulong uVar6;
  MethodInfo *method_01;
  
  if (DAT_05704d71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d71 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704754 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__Clear(pSVar3,MethodInfo_Void_Clear);
    method_01 = (MethodInfo *)0x1;
    pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(data,'\x01',method_00);
    if ((pSVar5 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
       ((int)pSVar5->max_length < 1)) {
LAB_041b9c7a:
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar4 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      }
      else {
        lVar4 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      }
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
    uVar6 = 0;
    if ((pSVar5->max_length & 0xffffffff) != 0) {
      do {
        entry = pSVar5->m_Items[uVar6];
        if (entry != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          value = Anticheat_ModeratorManager__ParsePlayerEntry(entry,method_01);
          if (value == (Anticheat_PlayerEntry_o *)0x0) goto LAB_041b9cd4;
          if (0 < (value->fields).ActorNumber) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_init_class();
              if (DAT_05704754 != '\0') goto LAB_041b9c2e;
LAB_041b9c4e:
              il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
              DAT_05704754 = '\x01';
              iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
            }
            else {
              if (DAT_05704754 == '\0') goto LAB_041b9c4e;
LAB_041b9c2e:
              iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
            }
            pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                      (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
            goto LAB_041b9cd4;
            uVar2 = (value->fields).ActorNumber;
            method_01 = (MethodInfo *)(ulong)uVar2;
            System_Collections_Generic_Dictionary<int__object>__set_Item
                      (pSVar3,uVar2,(Il2CppObject *)value,MethodInfo_Void_set_Item);
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar5->max_length;
        if ((long)(int)uVar2 <= (long)uVar6) goto LAB_041b9c7a;
      } while (uVar6 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041b9cd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$HandlePlayerListNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerListNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x41b7a10

void Anticheat_ModeratorManager__HandlePlayerListNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar7;
  Anticheat_PlayerEntry_o *value;
  MethodInfo_37C6AF0 *method_00;
  MethodInfo_37C6A60 *method_01;
  MethodInfo_37C6AF0 *extraout_RDX;
  MethodInfo_37C6A60 *method_02;
  MethodInfo_37C6A60 *method_03;
  MethodInfo *method_04;
  ulong uVar8;
  MethodInfo *method_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar9;
  System_Collections_Generic_KeyValuePair_K__V__o SVar10;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_00;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  undefined8 local_38;
  MethodInfo_37C6AF0 *pMStack_30;
  
  if (DAT_05704d72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&MethodInfo_Byte_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu);
    DAT_05704d72 = '\x01';
  }
  local_38 = 0;
  pMStack_30 = (MethodInfo_37C6AF0 *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object)
  ;
  System_Collections_Generic_Dictionary<byte__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
     (__this = (photonEvent->fields).Parameters,
     __this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) goto LAB_041b7d7e;
  EVar9 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo_37C6AF0 *)EVar9.fields._dict;
  local_38 = CONCAT44(local_38._4_4_,EVar9.fields._index);
  pMStack_30 = method_00;
  if (pSVar6 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    EVar9.fields._dict = MethodInfo_Boolean_MoveNext;
    EVar9.fields._0_8_ = &local_38;
    bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                      (EVar9,method_00);
    method_03 = method_02;
    if ((char)bVar5 != '\0') {
      __this_03.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
      __this_03.fields._0_8_ = &local_38;
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                (__this_03,method_02);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_00.fields._dict = MethodInfo_Boolean_MoveNext, __this_00.fields._0_8_ = &local_38,
          bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                            (__this_00,method_00), method_03 = method_01, (char)bVar5 != '\0') {
      __this_01.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
      __this_01.fields._0_8_ = &local_38;
      SVar10 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                         (__this_01,method_01);
      System_Collections_Generic_Dictionary<byte__object>__set_Item
                (pSVar6,(uint8_t)SVar10.fields.key,SVar10.fields.value,MethodInfo_Void_set_Item);
      method_00 = extraout_RDX;
    }
  }
  __this_02.fields._dict = MethodInfo_Void_Dispose;
  __this_02.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__Dispose
            (__this_02,(MethodInfo_37C6B50 *)method_03);
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704754 != '\0') goto LAB_041b7ba3;
LAB_041b7bd2:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    if (DAT_05704754 == '\0') goto LAB_041b7bd2;
LAB_041b7ba3:
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__Clear(pSVar3,MethodInfo_Void_Clear);
    method_05 = (MethodInfo *)0x0;
    pSVar7 = Anticheat_ModeratorManager__GetResponseEntries(pSVar6,'\0',method_04);
    if ((pSVar7 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
       ((int)pSVar7->max_length < 1)) {
LAB_041b7d41:
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      return;
    }
    uVar8 = 0;
    if ((pSVar7->max_length & 0xffffffff) != 0) {
      do {
        pSVar6 = pSVar7->m_Items[uVar8];
        if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar6,method_05);
          if (value == (Anticheat_PlayerEntry_o *)0x0) goto LAB_041b7d7e;
          if (0 < (value->fields).ActorNumber) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_init_class();
              if (DAT_05704754 != '\0') goto LAB_041b7cc9;
LAB_041b7cf8:
              il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
              DAT_05704754 = '\x01';
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b7cd5;
LAB_041b7d13:
              il2cpp_init_class();
              pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
            }
            else {
              if (DAT_05704754 == '\0') goto LAB_041b7cf8;
LAB_041b7cc9:
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b7d13;
LAB_041b7cd5:
              pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
            }
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
            goto LAB_041b7d7e;
            uVar2 = (value->fields).ActorNumber;
            method_05 = (MethodInfo *)(ulong)uVar2;
            System_Collections_Generic_Dictionary<int__object>__set_Item
                      (pSVar3,uVar2,(Il2CppObject *)value,MethodInfo_Void_set_Item);
          }
        }
        uVar8 = uVar8 + 1;
        uVar2 = (uint)pSVar7->max_length;
        if ((long)(int)uVar2 <= (long)uVar8) goto LAB_041b7d41;
      } while (uVar8 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041b7d7e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$HandlePlayerJoinNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerJoinNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x41b7e50

void Anticheat_ModeratorManager__HandlePlayerJoinNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  long lVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar4;
  Anticheat_PlayerEntry_o *value;
  MethodInfo_37C6AF0 *method_00;
  MethodInfo_37C6A60 *method_01;
  MethodInfo_37C6AF0 *extraout_RDX;
  MethodInfo_37C6A60 *method_02;
  MethodInfo_37C6A60 *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar5;
  System_Collections_Generic_KeyValuePair_K__V__o SVar6;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_04;
  undefined8 local_38;
  MethodInfo_37C6AF0 *pMStack_30;
  
  if (DAT_05704d73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&MethodInfo_Byte_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu);
    DAT_05704d73 = '\x01';
  }
  local_38 = 0;
  pMStack_30 = (MethodInfo_37C6AF0 *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object)
  ;
  System_Collections_Generic_Dictionary<byte__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
     (__this = (photonEvent->fields).Parameters,
     __this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) goto LAB_041b8113;
  EVar5 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo_37C6AF0 *)EVar5.fields._dict;
  local_38 = CONCAT44(local_38._4_4_,EVar5.fields._index);
  pMStack_30 = method_00;
  if (pSVar3 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    EVar5.fields._dict = MethodInfo_Boolean_MoveNext;
    EVar5.fields._0_8_ = &local_38;
    bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                      (EVar5,method_00);
    method_03 = method_02;
    if ((char)bVar2 != '\0') {
      __this_04.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
      __this_04.fields._0_8_ = &local_38;
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                (__this_04,method_02);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._dict = MethodInfo_Boolean_MoveNext, __this_01.fields._0_8_ = &local_38,
          bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__MoveNext
                            (__this_01,method_00), method_03 = method_01, (char)bVar2 != '\0') {
      __this_02.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object__get_Cu;
      __this_02.fields._0_8_ = &local_38;
      SVar6 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__get_Current
                        (__this_02,method_01);
      System_Collections_Generic_Dictionary<byte__object>__set_Item
                (pSVar3,(uint8_t)SVar6.fields.key,SVar6.fields.value,MethodInfo_Void_set_Item);
      method_00 = extraout_RDX;
    }
  }
  __this_03.fields._dict = MethodInfo_Void_Dispose;
  __this_03.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator<byte__object>__Dispose
            (__this_03,(MethodInfo_37C6B50 *)method_03);
  method_04 = extraout_RDX_00;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    method_04 = extraout_RDX_01;
  }
  method_05 = (MethodInfo *)0x0;
  pSVar4 = Anticheat_ModeratorManager__GetResponseEntries(pSVar3,'\0',method_04);
  if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    return;
  }
  if (pSVar4->max_length == 0) {
    return;
  }
  if ((int)pSVar4->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = pSVar4->m_Items[0];
  if (pSVar3 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar3,method_05);
  if (value == (Anticheat_PlayerEntry_o *)0x0) goto LAB_041b8113;
  if ((value->fields).ActorNumber < 1) goto LAB_041b8085;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704754 != '\0') goto LAB_041b804c;
LAB_041b80d4:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704754 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b805c;
LAB_041b80f7:
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  else {
    if (DAT_05704754 == '\0') goto LAB_041b80d4;
LAB_041b804c:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b80f7;
LAB_041b805c:
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__set_Item
              (__this_00,(value->fields).ActorNumber,(Il2CppObject *)value,MethodInfo_Void_set_Item);
LAB_041b8085:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
    return;
  }
LAB_041b8113:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$KickPlayer
// il2cpp: void Anticheat_ModeratorManager__KickPlayer (int32_t actorNumber, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41b9ce0

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__KickPlayer
               (int32_t actorNumber,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar4;
  int32_t local_34 [3];
  
  if (DAT_05704d74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__KickPlayer_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__KickPlayer_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass89_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d74 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass89_0);
  Anticheat_ModeratorManager_<>c__DisplayClass89_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) goto LAB_041b9fce;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041b9f88;
LAB_041b9de5:
    uVar4 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041b9df6;
LAB_041b9fac:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041b9de5;
LAB_041b9f88:
    uVar4 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041b9fac;
LAB_041b9df6:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar4,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    local_34[2] = 1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_34 + 2);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    local_34[1] = 0;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_34 + 1);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    local_34[0] = actorNumber;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x03',pIVar3,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041b9fce:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RoomBan
// il2cpp: void Anticheat_ModeratorManager__RoomBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41b9fe0

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__RoomBan
               (int32_t actorNumber,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 uVar4;
  int32_t local_3c [3];
  
  if (DAT_05704d75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomBan_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomBan_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass90_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d75 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass90_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass90_0);
  Anticheat_ModeratorManager_<>c__DisplayClass90_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass90_0_o *)0x0) goto LAB_041ba33d;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041ba2e8;
LAB_041ba0f1:
    uVar4 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041ba101;
LAB_041ba312:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041ba0f1;
LAB_041ba2e8:
    uVar4 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041ba312;
LAB_041ba101:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar4,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    local_3c[2] = ipBan & 0xffU | 2;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c + 2);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    local_3c[1] = 0;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c + 1);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    local_3c[0] = actorNumber;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x03',pIVar3,MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041ba33d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RoomBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RoomBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41ba350

void Anticheat_ModeratorManager__RoomBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool_conflict ipBan,
               System_Action_string__o *localStatus,System_String_o *reason,MethodInfo *method)

{
  int iVar1;
  System_Action_string__o *pSVar2;
  long lVar3;
  System_String_o *value;
  undefined8 uVar4;
  bool_conflict bVar5;
  Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value_00;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Anticheat_ModeratorManager___c__DisplayClass91_0_Fields *pAVar7;
  int local_3c;
  int local_38;
  uint local_34;
  
  if (DAT_05704d76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomBanPlayerEntry_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomBanPlayerEntry_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass91_0);
    il2cpp_init_method_metadata(&"Player has no session ID to ban.");
    il2cpp_init_method_metadata(&"Invalid player entry.");
    il2cpp_init_method_metadata(&"Sending request...");
    il2cpp_init_method_metadata(&"Player has no IP address to ban.");
    DAT_05704d76 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass91_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass91_0);
  Anticheat_ModeratorManager_<>c__DisplayClass91_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass91_0_o *)0x0) goto LAB_041ba8cd;
  pAVar7 = &__this->fields;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(pAVar7);
  if (player == (Anticheat_PlayerEntry_o *)0x0) {
    pSVar2 = pAVar7->localStatus;
    uVar4 = "Invalid player entry.";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      uVar4 = "Invalid player entry.";
    }
joined_r0x041ba87e:
    if (DAT_05704d6c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d6c = '\x01';
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar4,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
    if (pSVar2 == (System_Action_string__o *)0x0) {
      return;
    }
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar4,(pSVar2->fields).method);
    return;
  }
  if ((char)ipBan == '\0') {
    bVar5 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = pAVar7->localStatus;
      uVar4 = "Player has no session ID to ban.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        uVar4 = "Player has no session ID to ban.";
      }
      goto joined_r0x041ba87e;
    }
    local_3c = 1;
    value = (player->fields).SessionId;
    pSVar2 = pAVar7->localStatus;
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    bVar5 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = pAVar7->localStatus;
      uVar4 = "Player has no IP address to ban.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        uVar4 = "Player has no IP address to ban.";
      }
      goto joined_r0x041ba87e;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704752 == '\0') goto LAB_041ba89b;
LAB_041ba5ce:
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (DAT_05704752 != '\0') goto LAB_041ba5ce;
LAB_041ba89b:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704752 = '\x01';
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    local_3c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    value = (player->fields).IPAddress;
    pSVar2 = pAVar7->localStatus;
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uVar4 = "Sending request...";
  if (DAT_05704d6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041ba840;
LAB_041ba668:
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041ba668;
LAB_041ba840:
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar4,*(undefined8 *)(lVar3 + 0x28));
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar4,(pSVar2->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value_00 = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    local_34 = ipBan & 0xffU | 2;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
    local_38 = local_3c;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value,MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041ba8cd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RoomUnban
// il2cpp: void Anticheat_ModeratorManager__RoomUnban (Anticheat_RoomBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41ba8e0

void Anticheat_ModeratorManager__RoomUnban
               (Anticheat_RoomBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *pSVar3;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  int iVar6;
  int local_44;
  int local_40;
  int local_3c;
  System_String_o *local_38;
  
  if (DAT_05704d77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomUnban_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RoomUnban_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass92_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d77 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass92_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass92_0);
  Anticheat_ModeratorManager_<>c__DisplayClass92_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass92_0_o *)0x0) goto LAB_041bacff;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c != '\0') goto LAB_041ba9ea;
LAB_041bab25:
    uVar5 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041ba9fb;
LAB_041bab49:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c == '\0') goto LAB_041bab25;
LAB_041ba9ea:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bab49;
LAB_041ba9fb:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar5,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  if (banEntry == (Anticheat_RoomBanEntry_o *)0x0) goto LAB_041bacff;
  iVar6 = (banEntry->fields).ActorNumber;
  local_38 = reason;
  if ((char)(banEntry->fields).IsIPBan == '\0') {
    if (0 < iVar6) goto LAB_041bab73;
    value = (banEntry->fields).SessionId;
    iVar6 = 1;
  }
  else if (iVar6 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704752 != '\0') goto LAB_041baad7;
LAB_041baccd:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704752 = '\x01';
      iVar6 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (DAT_05704752 == '\0') goto LAB_041baccd;
LAB_041baad7:
      iVar6 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar6 == 0) {
      il2cpp_init_class();
    }
    iVar6 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    value = (banEntry->fields).IPAddress;
  }
  else {
LAB_041bab73:
    local_3c = iVar6;
    value = (System_String_o *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
    iVar6 = 0;
  }
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
    local_40 = 5 - (uint)((char)(banEntry->fields).IsIPBan == '\0');
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar4,MethodInfo_Void_Add);
    local_44 = iVar6;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar4,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value,MethodInfo_Void_Add);
    pSVar3 = local_38;
    if (local_38 == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bacff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41bad10

void Anticheat_ModeratorManager__RequestRoomBanList
               (System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704d78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d78 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__RequestRoomBanList(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41bad60

void Anticheat_ModeratorManager__RequestRoomBanList
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iVar4;
  undefined8 uVar5;
  int32_t local_38;
  int32_t local_34;
  
  if (DAT_05704d79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestRoomBanList_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestRoomBanList_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass94_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d79 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass94_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass94_0);
  Anticheat_ModeratorManager_<>c__DisplayClass94_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass94_0_o *)0x0) goto LAB_041bb03b;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041baff5;
LAB_041bae67:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bae78;
LAB_041bb019:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bae67;
LAB_041baff5:
    uVar5 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bb019;
LAB_041bae78:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar5,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    local_34 = 0;
    if (-1 < startIndex) {
      local_34 = startIndex;
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    iVar4 = 1;
    if (0 < amount) {
      iVar4 = amount;
    }
    _local_38 = CONCAT44(local_34,iVar4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb5,__this_00,method_01);
    return;
  }
LAB_041bb03b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$ParseRoomBanEntries
// il2cpp: Anticheat_RoomBanEntry_array* Anticheat_ModeratorManager__ParseRoomBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x41bb040

/* WARNING: Type propagation algorithm not settling */

Anticheat_RoomBanEntry_array *
Anticheat_ModeratorManager__ParseRoomBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Object_array *pSVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  int *piVar9;
  Anticheat_RoomBanEntry_o *__this_01;
  Anticheat_RoomBanEntry_array *pAVar10;
  long lVar11;
  long lVar12;
  System_String_o *value;
  ulong uVar13;
  int iVar14;
  int local_64;
  System_String_o *local_60;
  System_String_o *local_58;
  
  if (DAT_05704d7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RoomBanEntry___Empty_RoomBanEntry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_RoomBanEntry___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Anticheat_RoomBanEntry);
    il2cpp_init_method_metadata(&TypeInfo_List_RoomBanEntry);
    il2cpp_init_method_metadata(&TypeInfo_RoomBanEntry);
    DAT_05704d7a = '\x01';
  }
  lVar11 = MethodInfo_RoomBanEntry___Empty_RoomBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if (*(long *)(MethodInfo_RoomBanEntry___Empty_RoomBanEntry + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_RoomBanEntry___Empty_RoomBanEntry);
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(MethodInfo_RoomBanEntry___Empty_RoomBanEntry + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar12 = il2cpp_glue_022c28b0();
      iVar14 = *(int *)(lVar12 + 0xe4);
    }
    else {
      iVar14 = *(int *)(lVar12 + 0xe4);
    }
    if (iVar14 == 0) {
      il2cpp_init_class();
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar11 = il2cpp_glue_022c28b0(lVar11);
    }
    return (Anticheat_RoomBanEntry_array *)**(undefined8 **)(lVar11 + 0xb8);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_RoomBanEntry);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_Anticheat_RoomBanEntry);
  if (0 < (int)entries->max_length) {
    uVar13 = 0;
    if ((entries->max_length & 0xffffffff) != 0) {
      do {
        __this = entries->m_Items[uVar13];
        if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\0',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar6 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar6 = (System_String_o *)
                     System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\0',MethodInfo_Object_get_Item);
            if ((pSVar6 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar6->klass != DAT_057110b0)
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar6);
            }
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x01',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar7 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar7 = (System_String_o *)
                     System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\x01',MethodInfo_Object_get_Item);
            if ((pSVar7 != (System_String_o *)0x0) &&
               (local_60 = pSVar7, (Il2CppClass *)pSVar7->klass != DAT_057110b0)) goto LAB_041bb5d2;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x02',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            local_58 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            local_58 = (System_String_o *)
                       System_Collections_Generic_Dictionary<byte__object>__get_Item
                                 (__this,'\x02',MethodInfo_Object_get_Item);
            if ((local_58 != (System_String_o *)0x0) &&
               (local_60 = local_58, (Il2CppClass *)local_58->klass != DAT_057110b0))
            goto LAB_041bb5d2;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x03',MethodInfo_Boolean_ContainsKey);
          iVar14 = 0;
          local_64 = 0;
          if ((char)bVar5 != '\0') {
            pIVar8 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\x03',MethodInfo_Object_get_Item);
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_041bb5b5;
            if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
            goto LAB_041bb5bf;
            piVar9 = (int *)il2cpp_glue_022c7330(pIVar8);
            local_64 = *piVar9;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x04',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 != '\0') {
            pIVar8 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\x04',MethodInfo_Object_get_Item);
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_041bb5b5;
            if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
LAB_041bb5bf:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar8);
            }
            piVar9 = (int *)il2cpp_glue_022c7330(pIVar8);
            iVar14 = *piVar9;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x06',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            local_60 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            local_60 = (System_String_o *)
                       System_Collections_Generic_Dictionary<byte__object>__get_Item
                                 (__this,'\x06',MethodInfo_Object_get_Item);
            if ((local_60 != (System_String_o *)0x0) &&
               ((Il2CppClass *)local_60->klass != DAT_057110b0)) {
LAB_041bb5d2:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(local_60);
            }
          }
          value = pSVar6;
          if (iVar14 == 1) {
            value = pSVar7;
          }
          bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          __this_01 = (Anticheat_RoomBanEntry_o *)il2cpp_runtime_glue(TypeInfo_RoomBanEntry);
          Anticheat_RoomBanEntry___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (Anticheat_RoomBanEntry_o *)0x0) goto LAB_041bb5b5;
          (__this_01->fields).SessionId = pSVar6;
          il2cpp_runtime_glue(&__this_01->fields,pSVar6);
          (__this_01->fields).IPAddress = pSVar7;
          il2cpp_runtime_glue(&(__this_01->fields).IPAddress,pSVar7);
          (__this_01->fields).Username = local_58;
          il2cpp_runtime_glue(&(__this_01->fields).Username);
          (__this_01->fields).ActorNumber = local_64;
          *(bool *)&(__this_01->fields).IsIPBan = iVar14 == 1;
          (__this_01->fields).Reason = local_60;
          il2cpp_runtime_glue(&(__this_01->fields).Reason);
          *(byte *)&(__this_01->fields).CanUnban = (byte)bVar5 ^ 1 | 0 < local_64;
          lVar11 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_041bb5b5;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_041bb5b5;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)__this_01,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar13 = uVar13 + 1;
        uVar3 = (uint)entries->max_length;
        if ((long)(int)uVar3 <= (long)uVar13) goto LAB_041bb4ef;
      } while (uVar13 < uVar3);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041bb4ef:
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pAVar10 = (Anticheat_RoomBanEntry_array *)
              System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_RoomBanEntry___ToArray);
    return pAVar10;
  }
LAB_041bb5b5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RegionBan
// il2cpp: void Anticheat_ModeratorManager__RegionBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41bb5e0

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__RegionBan
               (int32_t actorNumber,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 uVar4;
  int32_t local_3c [3];
  
  if (DAT_05704d7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionBan_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionBan_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass96_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d7b = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass96_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass96_0);
  Anticheat_ModeratorManager_<>c__DisplayClass96_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass96_0_o *)0x0) goto LAB_041bb93d;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bb8e8;
LAB_041bb6f1:
    uVar4 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bb701;
LAB_041bb912:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bb6f1;
LAB_041bb8e8:
    uVar4 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bb912;
LAB_041bb701:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar4,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(10.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    local_3c[2] = ipBan & 0xffU | 2;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c + 2);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    local_3c[1] = 0;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c + 1);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    local_3c[0] = actorNumber;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_3c);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x03',pIVar3,MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,method_01);
    return;
  }
LAB_041bb93d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RegionBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RegionBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41bb950

void Anticheat_ModeratorManager__RegionBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool_conflict ipBan,
               System_Action_string__o *localStatus,System_String_o *reason,MethodInfo *method)

{
  int iVar1;
  System_Action_string__o *pSVar2;
  long lVar3;
  System_String_o *value;
  undefined8 uVar4;
  bool_conflict bVar5;
  Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value_00;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Anticheat_ModeratorManager___c__DisplayClass97_0_Fields *pAVar7;
  int local_3c;
  int local_38;
  uint local_34;
  
  if (DAT_05704d7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionBanPlayerEntry_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionBanPlayerEntry_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass97_0);
    il2cpp_init_method_metadata(&"Player has no session ID to ban.");
    il2cpp_init_method_metadata(&"Invalid player entry.");
    il2cpp_init_method_metadata(&"Sending request...");
    il2cpp_init_method_metadata(&"Player has no IP address to ban.");
    DAT_05704d7c = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass97_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass97_0);
  Anticheat_ModeratorManager_<>c__DisplayClass97_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass97_0_o *)0x0) goto LAB_041bbecd;
  pAVar7 = &__this->fields;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(pAVar7);
  if (player == (Anticheat_PlayerEntry_o *)0x0) {
    pSVar2 = pAVar7->localStatus;
    uVar4 = "Invalid player entry.";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      uVar4 = "Invalid player entry.";
    }
joined_r0x041bbe7e:
    if (DAT_05704d6c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704d6c = '\x01';
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar4,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
    if (pSVar2 == (System_Action_string__o *)0x0) {
      return;
    }
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar4,(pSVar2->fields).method);
    return;
  }
  if ((char)ipBan == '\0') {
    bVar5 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = pAVar7->localStatus;
      uVar4 = "Player has no session ID to ban.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        uVar4 = "Player has no session ID to ban.";
      }
      goto joined_r0x041bbe7e;
    }
    local_3c = 1;
    value = (player->fields).SessionId;
    pSVar2 = pAVar7->localStatus;
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    bVar5 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = pAVar7->localStatus;
      uVar4 = "Player has no IP address to ban.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
        uVar4 = "Player has no IP address to ban.";
      }
      goto joined_r0x041bbe7e;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704752 == '\0') goto LAB_041bbe9b;
LAB_041bbbce:
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (DAT_05704752 != '\0') goto LAB_041bbbce;
LAB_041bbe9b:
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      DAT_05704752 = '\x01';
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    local_3c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    value = (player->fields).IPAddress;
    pSVar2 = pAVar7->localStatus;
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uVar4 = "Sending request...";
  if (DAT_05704d6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bbe40;
LAB_041bbc68:
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bbc68;
LAB_041bbe40:
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar4,*(undefined8 *)(lVar3 + 0x28));
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar4,(pSVar2->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value_00 = Anticheat_ModeratorManager__TrackRequest(10.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    local_34 = ipBan & 0xffU | 2;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
    local_38 = local_3c;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value,MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,method_01);
    return;
  }
LAB_041bbecd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RegionUnban
// il2cpp: void Anticheat_ModeratorManager__RegionUnban (Anticheat_RegionBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x41bbee0

void Anticheat_ModeratorManager__RegionUnban
               (Anticheat_RegionBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 uVar4;
  undefined4 local_38;
  int local_34;
  
  if (DAT_05704d7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionUnban_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegionUnban_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass98_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d7d = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass98_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass98_0);
  Anticheat_ModeratorManager_<>c__DisplayClass98_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass98_0_o *)0x0) goto LAB_041bc218;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bc1d2;
LAB_041bbfe7:
    uVar4 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bbff8;
LAB_041bc1f6:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bbfe7;
LAB_041bc1d2:
    uVar4 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bc1f6;
LAB_041bbff8:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar4,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(10.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) &&
     (System_Collections_Generic_Dictionary<byte__object>__Add
                (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add),
     banEntry != (Anticheat_RegionBanEntry_o *)0x0)) {
    local_34 = 5 - (uint)((char)(banEntry->fields).IsIPBan == '\0');
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    _local_38 = CONCAT44(local_34,3);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)(banEntry->fields).TargetId,MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,method_01);
    return;
  }
LAB_041bc218:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41bc220

void Anticheat_ModeratorManager__RequestRegionBanList
               (System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704d7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d7e = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_ModeratorManager__RequestRegionBanList(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41bc270

void Anticheat_ModeratorManager__RequestRegionBanList
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iVar4;
  undefined8 uVar5;
  int32_t local_38;
  int32_t local_34;
  
  if (DAT_05704d7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestRegionBanList_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RequestRegionBanList_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass100_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d7f = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass100_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass100_0);
  Anticheat_ModeratorManager_<>c__DisplayClass100_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass100_0_o *)0x0) goto LAB_041bc54b;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bc505;
LAB_041bc377:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bc388;
LAB_041bc529:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bc377;
LAB_041bc505:
    uVar5 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bc529;
LAB_041bc388:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar5,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    local_34 = 0;
    if (-1 < startIndex) {
      local_34 = startIndex;
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    iVar4 = 1;
    if (0 < amount) {
      iVar4 = amount;
    }
    _local_38 = CONCAT44(local_34,iVar4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb8,__this_00,method_01);
    return;
  }
LAB_041bc54b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$ParseRegionBanEntries
// il2cpp: Anticheat_RegionBanEntry_array* Anticheat_ModeratorManager__ParseRegionBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x41bc550

/* WARNING: Type propagation algorithm not settling */

Anticheat_RegionBanEntry_array *
Anticheat_ModeratorManager__ParseRegionBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Object_array *pSVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  int *piVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Anticheat_RegionBanEntry_o *__this_01;
  Anticheat_RegionBanEntry_array *pAVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  
  if (DAT_05704d80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RegionBanEntry___Empty_RegionBanEntry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_RegionBanEntry___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Anticheat_RegionBanEntry);
    il2cpp_init_method_metadata(&TypeInfo_List_RegionBanEntry);
    il2cpp_init_method_metadata(&TypeInfo_RegionBanEntry);
    DAT_05704d80 = '\x01';
  }
  lVar13 = MethodInfo_RegionBanEntry___Empty_RegionBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if (*(long *)(MethodInfo_RegionBanEntry___Empty_RegionBanEntry + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_RegionBanEntry___Empty_RegionBanEntry);
      lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    else {
      lVar14 = *(long *)(*(long *)(MethodInfo_RegionBanEntry___Empty_RegionBanEntry + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar14 = il2cpp_glue_022c28b0();
      iVar15 = *(int *)(lVar14 + 0xe4);
    }
    else {
      iVar15 = *(int *)(lVar14 + 0xe4);
    }
    if (iVar15 == 0) {
      il2cpp_init_class();
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar13 = il2cpp_glue_022c28b0(lVar13);
    }
    return (Anticheat_RegionBanEntry_array *)**(undefined8 **)(lVar13 + 0xb8);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_RegionBanEntry);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_Anticheat_RegionBanEntry);
  if (0 < (int)entries->max_length) {
    uVar16 = 0;
    if ((entries->max_length & 0xffffffff) != 0) {
      do {
        __this = entries->m_Items[uVar16];
        if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\0',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar6 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar6 = (System_String_o *)
                     System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\0',MethodInfo_Object_get_Item);
            if ((pSVar6 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar6->klass != DAT_057110b0)
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar6);
            }
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x01',MethodInfo_Boolean_ContainsKey);
          iVar15 = 0;
          if ((char)bVar5 != '\0') {
            pIVar7 = System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\x01',MethodInfo_Object_get_Item);
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_041bca2a;
            if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar7);
            }
            piVar8 = (int *)il2cpp_glue_022c7330(pIVar7);
            iVar15 = *piVar8;
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x02',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar9 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar9 = (System_String_o *)
                     System_Collections_Generic_Dictionary<byte__object>__get_Item
                               (__this,'\x02',MethodInfo_Object_get_Item);
            if ((pSVar9 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar9->klass != DAT_057110b0)
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar9);
            }
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x05',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar10 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar10 = (System_String_o *)
                      System_Collections_Generic_Dictionary<byte__object>__get_Item
                                (__this,'\x05',MethodInfo_Object_get_Item);
            if ((pSVar10 != (System_String_o *)0x0) &&
               ((Il2CppClass *)pSVar10->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar10);
            }
          }
          bVar5 = System_Collections_Generic_Dictionary<byte__object>__ContainsKey
                            (__this,'\x06',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar11 = *(System_String_o **)DAT_057110b0->static_fields;
          }
          else {
            pSVar11 = (System_String_o *)
                      System_Collections_Generic_Dictionary<byte__object>__get_Item
                                (__this,'\x06',MethodInfo_Object_get_Item);
            if ((pSVar11 != (System_String_o *)0x0) &&
               ((Il2CppClass *)pSVar11->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar11);
            }
          }
          __this_01 = (Anticheat_RegionBanEntry_o *)il2cpp_runtime_glue(TypeInfo_RegionBanEntry);
          Anticheat_RegionBanEntry___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (Anticheat_RegionBanEntry_o *)0x0) goto LAB_041bca2a;
          (__this_01->fields).TargetId = pSVar6;
          il2cpp_runtime_glue(&__this_01->fields,pSVar6);
          (__this_01->fields).Username = pSVar9;
          il2cpp_runtime_glue(&(__this_01->fields).Username,pSVar9);
          *(bool *)&(__this_01->fields).IsIPBan = iVar15 == 3;
          (__this_01->fields).Reason = pSVar10;
          il2cpp_runtime_glue(&(__this_01->fields).Reason,pSVar10);
          (__this_01->fields).BannedBy = pSVar11;
          il2cpp_runtime_glue(&(__this_01->fields).BannedBy,pSVar11);
          lVar13 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_041bca2a;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_041bca2a;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)__this_01,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar16 = uVar16 + 1;
        uVar3 = (uint)entries->max_length;
        if ((long)(int)uVar3 <= (long)uVar16) goto LAB_041bc964;
      } while (uVar16 < uVar3);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041bc964:
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pAVar12 = (Anticheat_RegionBanEntry_array *)
              System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_RegionBanEntry___ToArray);
    return pAVar12;
  }
LAB_041bca2a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$BatchSessionBan
// il2cpp: void Anticheat_ModeratorManager__BatchSessionBan (System_String_o* targets, const MethodInfo* method);
// 0x41bca60

void Anticheat_ModeratorManager__BatchSessionBan(System_String_o *targets,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *value;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value_00;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  if (DAT_05704d81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d81 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704d85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass106_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d85 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass106_0);
  Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto LAB_041bcdb7;
  (__this->fields).localStatus = (System_Action_string__o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bcd73;
LAB_041bcbe1:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bcbf1;
LAB_041bcd96:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bcbe1;
LAB_041bcd73:
    uVar5 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bcd96;
LAB_041bcbf1:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar5,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value_00 = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    local_34[0] = 2;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar4,MethodInfo_Void_Add);
    local_38 = 1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar4,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bcdb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$BatchIPBan
// il2cpp: void Anticheat_ModeratorManager__BatchIPBan (System_String_o* targets, const MethodInfo* method);
// 0x41bcdc0

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__BatchIPBan(System_String_o *targets,MethodInfo *method)

{
  char cVar1;
  System_Action_string__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  int iVar5;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  System_String_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar7;
  int aiStack_38 [4];
  
  if (DAT_05704d82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d82 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value_00 = (System_String_o *)0x0;
  }
  else {
    value_00 = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar4 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704752 != '\0') goto LAB_041bce2a;
LAB_041bce7c:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704752 = '\x01';
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    if (DAT_05704752 == '\0') goto LAB_041bce7c;
LAB_041bce2a:
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704d85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass106_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d85 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass106_0);
  Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto LAB_041bcdb7;
  (__this->fields).localStatus = (System_Action_string__o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  pSVar2 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c != '\0') goto LAB_041bcbe1;
LAB_041bcd73:
    uVar7 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bcbf1;
LAB_041bcd96:
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c == '\0') goto LAB_041bcd73;
LAB_041bcbe1:
    uVar7 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bcd96;
LAB_041bcbf1:
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar7,*(undefined8 *)(lVar3 + 0x28));
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar7,(pSVar2->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    aiStack_38[1] = 3;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_38 + 1);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
    aiStack_38[0] = (uint)(cVar1 == '\0') * 2 + 2;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bcdb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$BatchSessionUnban
// il2cpp: void Anticheat_ModeratorManager__BatchSessionUnban (System_String_o* targets, const MethodInfo* method);
// 0x41bceb0

void Anticheat_ModeratorManager__BatchSessionUnban(System_String_o *targets,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  bool_conflict bVar3;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar4;
  System_String_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  if (DAT_05704d83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d83 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value_00 = (System_String_o *)0x0;
  }
  else {
    value_00 = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704d85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass106_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d85 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass106_0);
  Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto LAB_041bcdb7;
  (__this->fields).localStatus = (System_Action_string__o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bcd73;
LAB_041bcbe1:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bcbf1;
LAB_041bcd96:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bcbe1;
LAB_041bcd73:
    uVar5 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bcd96;
LAB_041bcbf1:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar5,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    auStack_34[0] = 4;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar4,MethodInfo_Void_Add);
    uStack_38 = 1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar4,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bcdb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$BatchIPUnban
// il2cpp: void Anticheat_ModeratorManager__BatchIPUnban (System_String_o* targets, const MethodInfo* method);
// 0x41bcf30

/* WARNING: Type propagation algorithm not settling */

void Anticheat_ModeratorManager__BatchIPUnban(System_String_o *targets,MethodInfo *method)

{
  char cVar1;
  System_Action_string__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  int iVar5;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  System_String_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar7;
  int aiStack_38 [4];
  
  if (DAT_05704d84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d84 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value_00 = (System_String_o *)0x0;
  }
  else {
    value_00 = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar4 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704752 != '\0') goto LAB_041bcf9a;
LAB_041bcfec:
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704752 = '\x01';
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    if (DAT_05704752 == '\0') goto LAB_041bcfec;
LAB_041bcf9a:
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
    iVar5 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704d85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass106_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d85 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass106_0);
  Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto LAB_041bcdb7;
  (__this->fields).localStatus = (System_Action_string__o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  pSVar2 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c != '\0') goto LAB_041bcbe1;
LAB_041bcd73:
    uVar7 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bcbf1;
LAB_041bcd96:
    il2cpp_init_class();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c == '\0') goto LAB_041bcd73;
LAB_041bcbe1:
    uVar7 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bcd96;
LAB_041bcbf1:
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar7,*(undefined8 *)(lVar3 + 0x28));
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,uVar7,(pSVar2->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    aiStack_38[1] = 5;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_38 + 1);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
    aiStack_38[0] = (uint)(cVar1 == '\0') * 2 + 2;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bcdb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$SendBatchRoomRemove
// il2cpp: void Anticheat_ModeratorManager__SendBatchRoomRemove (int32_t removeType, int32_t targetBy, System_String_o* targets, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x41bcad0

void Anticheat_ModeratorManager__SendBatchRoomRemove
               (int32_t removeType,int32_t targetBy,System_String_o *targets,
               System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar4;
  int32_t iStack_38;
  int32_t iStack_34;
  
  if (DAT_05704d85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_byte__object);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendBatchRoomRemove_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass106_0);
    il2cpp_init_method_metadata(&"Sending request...");
    DAT_05704d85 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass106_0);
  Anticheat_ModeratorManager_<>c__DisplayClass106_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto LAB_041bcdb7;
  (__this->fields).localStatus = localStatus;
  il2cpp_runtime_glue(&__this->fields,localStatus);
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704d6c == '\0') goto LAB_041bcd73;
LAB_041bcbe1:
    uVar4 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto LAB_041bcbf1;
LAB_041bcd96:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (DAT_05704d6c != '\0') goto LAB_041bcbe1;
LAB_041bcd73:
    uVar4 = "Sending request...";
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d6c = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto LAB_041bcd96;
LAB_041bcbf1:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,uVar4,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_glue(TypeInfo_Action_Dictionary_byte__object);
  System_Action<object>___ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(15.0,onResponse,onTimeout,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_byte__object);
  System_Collections_Generic_Dictionary<byte__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
    iStack_34 = removeType;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_34);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x01',pIVar3,MethodInfo_Void_Add);
    iStack_38 = targetBy;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_38);
    System_Collections_Generic_Dictionary<byte__object>__Add(__this_00,'\x02',pIVar3,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<byte__object>__Add
              (__this_00,'\x03',(Il2CppObject *)targets,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,method_01);
    return;
  }
LAB_041bcdb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ModeratorManager$$.ctor
// il2cpp: void Anticheat_ModeratorManager___ctor (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x41bd020

void Anticheat_ModeratorManager___ctor(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  
  if (DAT_05704d86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Action_1_Syste);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Action);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Action);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Action_Dictionary_byte__objec);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_05704d86 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Action_Dictionary_byte__objec);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Action_1_Syste);
  (__this->fields)._pendingCallbacks =
       (System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._pendingCallbacks,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_string__float__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._pendingTimestamps = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._pendingTimestamps,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_string__float__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._pendingTimeouts = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._pendingTimeouts,pSVar2);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Action);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Action);
  (__this->fields)._pendingTimeoutCallbacks =
       (System_Collections_Generic_Dictionary_string__Action__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._pendingTimeoutCallbacks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$.cctor
// il2cpp: void Anticheat_ModeratorManager___cctor (const MethodInfo* method);
// 0x41bd160

void Anticheat_ModeratorManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_05704d87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_Anticheat_PlayerEntry);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__PlayerEntry);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Anticheat_PlayerEntry);
    il2cpp_init_method_metadata(&TypeInfo_List_PlayerEntry);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05704d87 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = 0xffffffff;
  __this = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__PlayerEntry);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this,MethodInfo_Dictionary_2_System_Int32_Anticheat_PlayerEntry);
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_glue(lVar1 + 0x10,__this);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_PlayerEntry);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_Anticheat_PlayerEntry);
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x18) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x18,__this_00);
  return;
}


