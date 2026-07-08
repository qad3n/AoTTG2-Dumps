// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileParser.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (System_String_o* json, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x41aa150

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
          (System_String_o *json,ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,
          System_String_o **error,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *node;
  
  if (DAT_05704ceb == '\0') {
    il2cpp_init_method_metadata(&"empty_response");
    DAT_05704ceb = '\x01';
  }
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_glue(profile);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_glue(error);
  bVar2 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  pSVar1 = "empty_response";
  if ((char)bVar2 == '\0') {
    node = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar2 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
                      (node,profile,error,method);
  }
  else {
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    bVar2 = 0;
    il2cpp_runtime_glue(profile,0);
    *error = pSVar1;
    il2cpp_runtime_glue(error,pSVar1);
  }
  return bVar2;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x41aa2c0

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
          MethodInfo *method)

{
  System_DateTimeOffset_o createdAt;
  char cVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_o *pSVar7;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  System_DateTimeOffset_o SVar9;
  MethodInfo *in_stack_ffffffffffffff60;
  System_DateTimeOffset_o local_98;
  System_String_o *local_88;
  System_String_o *local_80;
  System_String_array *local_78;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_DateTime_Fields local_58;
  int16_t iStack_50;
  undefined6 uStack_4e;
  System_Guid_Fields local_48;
  
  if (DAT_05704cec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfile);
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"bad_response");
    il2cpp_init_method_metadata(&"bad_display_name");
    il2cpp_init_method_metadata(&"characterInfo");
    il2cpp_init_method_metadata(&"bad_account_id");
    il2cpp_init_method_metadata(&"displayName");
    il2cpp_init_method_metadata(&"accountId");
    il2cpp_init_method_metadata(&"createdAt");
    il2cpp_init_method_metadata(&"characterName");
    il2cpp_init_method_metadata(&"avatarKey");
    il2cpp_init_method_metadata(&"description");
    il2cpp_init_method_metadata(&"roles");
    il2cpp_init_method_metadata(&"bannerKey");
    DAT_05704cec = '\x01';
  }
  local_98.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_98.fields._offsetMinutes = 0;
  local_98.fields._10_6_ = 0;
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_glue(profile);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_glue(error);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041aa796:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar8 = "accountId";
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    pSVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar4,pMVar8);
    bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = System_Guid__TryParse(pSVar5,(System_Guid_o *)&local_48,(MethodInfo *)0x0),
       (char)bVar2 != '\0')) {
      pMVar8 = "displayName";
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"displayName",(node->klass->vtable)._7_get_Item.method);
      pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar4,pMVar8);
      bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        local_98.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
        local_98.fields._offsetMinutes = 0;
        local_98.fields._10_6_ = 0;
        pMVar8 = "createdAt";
        local_60 = pSVar6;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"createdAt",(node->klass->vtable)._7_get_Item.method);
        pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(pSVar4,pMVar8)
        ;
        bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_init_class();
          }
          formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_init_class();
          }
          System_DateTimeOffset__TryParse
                    (pSVar6,(System_IFormatProvider_o *)formatProvider,0x80,&local_98,
                     (MethodInfo *)0x0);
        }
        pMVar8 = "characterName";
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"characterName",(node->klass->vtable)._7_get_Item.method);
        pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                           (pSVar4,pMVar8);
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
        if (DAT_05704ced == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_JSONNode);
          DAT_05704ced = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_String_o *)0x0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041aa796;
          cVar1 = (*(pSVar4->klass->vtable)._15_get_IsNull.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable)._15_get_IsNull.method);
          if (cVar1 == '\0') {
            pSVar7 = (System_String_o *)
                     (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
          }
          else {
            pSVar7 = (System_String_o *)0x0;
          }
        }
        pMVar8 = "roles";
        local_70 = pSVar7;
        local_68 = pSVar6;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"roles",(node->klass->vtable)._7_get_Item.method);
        local_78 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
                             (pSVar4,pMVar8);
        pMVar8 = "description";
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"description",(node->klass->vtable)._7_get_Item.method);
        local_80 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                             (pSVar4,pMVar8);
        pMVar8 = "avatarKey";
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"avatarKey",(node->klass->vtable)._7_get_Item.method);
        local_88 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                             (pSVar4,pMVar8);
        pMVar8 = "bannerKey";
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"bannerKey",(node->klass->vtable)._7_get_Item.method);
        pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                           (pSVar4,pMVar8);
        pMVar8 = extraout_RDX;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar8 = extraout_RDX_00;
        }
        SVar9.fields._8_8_ = 0;
        SVar9.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)&local_98;
        SVar9 = System_DateTimeOffset__ToUniversalTime(SVar9,pMVar8);
        __this = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)
                 il2cpp_runtime_glue(TypeInfo_AottgPublicProfile);
        iStack_50 = SVar9.fields._offsetMinutes;
        createdAt.fields._10_6_ = uStack_4e;
        createdAt.fields._offsetMinutes = iStack_50;
        createdAt.fields._dateTime.fields._dateData = SVar9.fields._dateTime.fields._dateData.fields
        ;
        local_58 = SVar9.fields._dateTime.fields._dateData.fields;
        ApplicationManagers_PublicProfiles_AottgPublicProfile___ctor
                  (__this,pSVar5,local_60,local_68,local_70,local_78,local_80,local_88,pSVar6,
                   createdAt,in_stack_ffffffffffffff60);
        *profile = __this;
        il2cpp_runtime_glue(profile,__this);
        return (bool_conflict)CONCAT71(SVar9.fields._dateTime.fields._dateData._1_7_,1);
      }
      puVar3 = &"bad_display_name";
    }
    else {
      puVar3 = &"bad_account_id";
    }
  }
  else {
    puVar3 = &"bad_response";
  }
  pSVar5 = (System_String_o *)*puVar3;
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_glue(profile,0);
  *error = pSVar5;
  il2cpp_runtime_glue(error,pSVar5);
  return 0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$RawJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41aa910

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  undefined8 extraout_RDX;
  
  if (DAT_05704ced == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704ced = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (cVar1 == '\0') {
      vtable_dispatch = (node->klass->vtable)._3_ToString.methodPtr;
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (node,(node->klass->vtable)._3_ToString.method,extraout_RDX,
                          vtable_dispatch);
      return pSVar3;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$StringArray
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41aa9a0

/* WARNING: Removing unreachable block (ram,0x041aadd4) */
/* WARNING: Removing unreachable block (ram,0x041aae15) */
/* WARNING: Type propagation algorithm not settling */

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *value;
  System_String_array *pSVar11;
  MethodInfo *method_00;
  long lVar12;
  
  if (DAT_05704cee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704cee = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
LAB_041aab15:
    lVar10 = MethodInfo_String___Empty_String;
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar12 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar12 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar12 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar12 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0(lVar10);
    }
    return (System_String_array *)**(undefined8 **)(lVar10 + 0xb8);
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar6 = (*(node->klass->vtable)._16_get_IsArray.methodPtr)
                      (node,(node->klass->vtable)._16_get_IsArray.method);
    if (cVar6 == '\0') goto LAB_041aab15;
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
    plVar8 = (long *)(*(node->klass->vtable)._27_get_Children.methodPtr)
                               (node,(node->klass->vtable)._27_get_Children.method);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
            puVar9 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar12) * 0x10 + lVar10 + 0x138)
            ;
            goto LAB_041aabc5;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar12);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerable_JSONNode,0);
LAB_041aabc5:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar10 = *plVar8;
        if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar12) * 0x10 + lVar10 +
                       0x138);
              goto LAB_041aac73;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar12);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_041aac73:
        cVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (cVar6 == '\0') {
          if (plVar8 == (long *)0x0) goto LAB_041aadc6;
          lVar10 = *plVar8;
          if ((ulong)*(ushort *)(lVar10 + 0x12e) == 0) goto LAB_041aad9f;
          lVar12 = 0;
          goto LAB_041aad90;
        }
        lVar10 = *plVar8;
        if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar12) * 0x10 + lVar10 +
                       0x138);
              goto LAB_041aace3;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar12);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_JSONNode,0);
LAB_041aace3:
        method_00 = (MethodInfo *)puVar9[1];
        node_00 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar9)(plVar8);
        value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                          (node_00,method_00);
        bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        lVar10 = MethodInfo_Void_Add;
        if ((char)bVar7 == '\0') {
          if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar4 = (__this->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)value;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4,value);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)value,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_041aae0b;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar12) {
LAB_041aad90:
    if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_041aadbd;
    }
  }
LAB_041aad9f:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_041aadbd:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_041aadc6:
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar11 = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
    return pSVar11;
  }
LAB_041aae0b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$NullableTrimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41aa870

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (DAT_05704cef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704cef = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (node->klass->vtable)._15_get_IsNull.method;
    cVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)(node);
    if (cVar1 == '\0') {
      value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(node,method_00);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        value = (System_String_o *)0x0;
      }
      return value;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41aa7a0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704cf0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704cf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      cVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                        (node,(node->klass->vtable)._15_get_IsNull.method);
      if (cVar1 != '\0') goto LAB_041aa804;
      pSVar3 = (System_String_o *)(*(node->klass->vtable)._9_get_Value.methodPtr)(node);
      if ((pSVar3 != (System_String_o *)0x0) ||
         (pSVar3 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
         pSVar3 != (System_String_o *)0x0)) {
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041aa804:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Fail
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail (ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, System_String_o* value, const MethodInfo* method);
// 0x41aa290

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error
          ,System_String_o *value,MethodInfo *method)

{
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_glue(profile,0);
  *error = value;
  il2cpp_runtime_glue(error,value);
  return 0;
}


