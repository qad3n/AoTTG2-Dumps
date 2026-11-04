// Type: CustomSkins.TitanSkinPicker
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TitanSkinPicker.cs
// Prior real C# source: none
// --------------------------------

// CustomSkins.TitanSkinPicker.<>c$$.cctor
// il2cpp: void CustomSkins_TitanSkinPicker___c___cctor (const MethodInfo* method);
// 0x181e9ada0

void CustomSkins_TitanSkinPicker___c___cctor(MethodInfo *method)

{
  CustomSkins_TitanSkinPicker___c_o *__this;
  
  if (Il2CppMethodInitialized_184344fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanSkinPicker_c);
    Il2CppMethodInitialized_184344fdc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9,__this);
  return;
}


// CustomSkins.TitanSkinPicker.<>c$$.ctor
// il2cpp: void CustomSkins_TitanSkinPicker___c___ctor (CustomSkins_TitanSkinPicker___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomSkins_TitanSkinPicker___c___ctor(CustomSkins_TitanSkinPicker___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TitanSkinPicker.<>c$$<GetSkinUrls>b__1_2
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker___c___GetSkinUrls_b__1_2 (CustomSkins_TitanSkinPicker___c_o* __this, Settings_TitanCustomSkinSlot_o* s, const MethodInfo* method);
// 0x181e9a710

System_String_o *
CustomSkins_TitanSkinPicker___c___GetSkinUrls_b__1_2
          (CustomSkins_TitanSkinPicker___c_o *__this,Settings_TitanCustomSkinSlot_o *s,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344fdd = '\x01';
  }
  if ((s != (Settings_TitanCustomSkinSlot_o *)0x0) &&
     (pSVar1 = (s->fields).Eye, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker.<>c$$<GetSkinUrls>b__1_3
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker___c___GetSkinUrls_b__1_3 (CustomSkins_TitanSkinPicker___c_o* __this, Settings_TitanCustomSkinSlot_o* s, const MethodInfo* method);
// 0x181e9a760

System_String_o *
CustomSkins_TitanSkinPicker___c___GetSkinUrls_b__1_3
          (CustomSkins_TitanSkinPicker___c_o *__this,Settings_TitanCustomSkinSlot_o *s,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344fde = '\x01';
  }
  if ((s != (Settings_TitanCustomSkinSlot_o *)0x0) &&
     (pSVar1 = (s->fields).Hair, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$.ctor
// il2cpp: void CustomSkins_TitanSkinPicker___c__DisplayClass1_0___ctor (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomSkins_TitanSkinPicker___c__DisplayClass1_0___ctor(CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$<GetSkinUrls>b__0
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker___c__DisplayClass1_0___GetSkinUrls_b__0 (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o* __this, Settings_TitanCustomSkinSlot_o* s, const MethodInfo* method);
// 0x181e9aaf0

System_String_o *
CustomSkins_TitanSkinPicker___c__DisplayClass1_0___GetSkinUrls_b__0
          (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o *__this,Settings_TitanCustomSkinSlot_o *s,
          MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  uint32_t uVar4;
  System_Data_SqlTypes_SqlInt32_Fields local_res8;
  System_Data_SqlTypes_SqlInt32_Fields local_res10;
  
  if (Il2CppMethodInitialized_184344fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fdf = '\x01';
  }
  local_res8.m_fNotNull = false;
  local_res8._1_3_ = 0;
  local_res8.m_value = 0;
  System_Nullable_int____ctor
            ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,(__this->fields).body,
             MethodInfo_System_Nullable_int_ctor);
  if ((s == (Settings_TitanCustomSkinSlot_o *)0x0) ||
     (pSVar2 = (s->fields).BodyModel, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._value;
  local_res10 = local_res8;
  if (Il2CppMethodInitialized_184344fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    Il2CppMethodInitialized_184344fdb = '\x01';
  }
  if ((local_res10.m_fNotNull != false) && (0 < iVar1)) {
    uVar4 = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)&local_res10,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
    if (iVar1 - 1U != uVar4) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  pSVar3 = (s->fields).Body;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    return (pSVar3->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker.<>c__DisplayClass1_0$$<GetSkinUrls>b__1
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker___c__DisplayClass1_0___GetSkinUrls_b__1 (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o* __this, Settings_TitanCustomSkinSlot_o* s, const MethodInfo* method);
// 0x181e9ac10

System_String_o *
CustomSkins_TitanSkinPicker___c__DisplayClass1_0___GetSkinUrls_b__1
          (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o *__this,Settings_TitanCustomSkinSlot_o *s,
          MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  uint32_t uVar4;
  System_Data_SqlTypes_SqlInt32_Fields local_res8;
  System_Data_SqlTypes_SqlInt32_Fields local_res10;
  
  if (Il2CppMethodInitialized_184344fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fe0 = '\x01';
  }
  local_res8.m_fNotNull = false;
  local_res8._1_3_ = 0;
  local_res8.m_value = 0;
  System_Nullable_int____ctor
            ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,(__this->fields).head,
             MethodInfo_System_Nullable_int_ctor);
  if ((s == (Settings_TitanCustomSkinSlot_o *)0x0) ||
     (pSVar2 = (s->fields).HeadModel, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._value;
  local_res10 = local_res8;
  if (Il2CppMethodInitialized_184344fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    Il2CppMethodInitialized_184344fdb = '\x01';
  }
  if ((local_res10.m_fNotNull != false) && (0 < iVar1)) {
    uVar4 = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)&local_res10,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
    if (iVar1 - 1U != uVar4) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  pSVar3 = (s->fields).Head;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    return (pSVar3->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$Pick
// il2cpp: CustomSkins_TitanSkinSelection_o* CustomSkins_TitanSkinPicker__Pick (bool ai, SimpleJSONFixed_JSONNode_o* aiData, Settings_TitanCustomSet_o* forcedSet, const MethodInfo* method);
// 0x181e97010
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e97338: mov rax, r15
// asm:   0x181e9733b: jmp 0x181e9738b
// asm:   0x181e974fb: mov rdi, r14
// asm:   0x181e974fe: jmp 0x181e9753c

CustomSkins_TitanSkinSelection_o *
CustomSkins_TitanSkinPicker__Pick
          (bool ai,SimpleJSONFixed_JSONNode_o *aiData,Settings_TitanCustomSet_o *forcedSet,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameTitanSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  System_Collections_Generic_List_T__o *list;
  Settings_CustomSkinSettings_o *pSVar8;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  bool bVar11;
  int32_t iVar12;
  int32_t iVar13;
  uint32_t uVar14;
  System_Int32_array *pSVar15;
  CustomSkins_TitanSkinSelection_o *__this_00;
  Settings_TitanCustomSkinSet_o *skinSet;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  int iVar18;
  System_String_o *pSVar19;
  System_Nullable_int__Fields local_res10;
  System_Nullable_int__Fields local_res18 [2];
  System_Data_SqlTypes_SqlInt32_Fields local_38;
  System_Nullable_int__Fields local_30;
  
  if (Il2CppMethodInitialized_184344fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanSkinSelection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fd4 = '\x01';
  }
  pSVar17 = (System_String_o *)0x0;
  local_res10.hasValue = false;
  local_res10._1_3_ = 0;
  local_res10.value = 0;
  local_res18[0].hasValue = false;
  local_res18[0]._1_3_ = 0;
  local_res18[0].value = 0;
  local_38.m_fNotNull = false;
  local_38._1_3_ = 0;
  local_38.m_value = 0;
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  pSVar15 = Characters_BasicTitanSetup__GetRandomBodyHeadCombo(aiData,(MethodInfo *)0x0);
  local_res10.hasValue = false;
  local_res10._1_3_ = 0;
  local_res10.value = 0;
  local_res18[0].hasValue = false;
  local_res18[0]._1_3_ = 0;
  local_res18[0].value = 0;
  local_38.m_fNotNull = false;
  local_38._1_3_ = 0;
  local_38.m_value = 0;
  pSVar19 = pSVar17;
  if (forcedSet != (Settings_TitanCustomSet_o *)0x0) {
    pSVar3 = (forcedSet->fields).Body;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_181e9776d;
    if (-1 < (pSVar3->fields)._value) {
      System_Nullable_int____ctor
                ((System_Data_SqlTypes_SqlInt32_o *)&local_res10,(pSVar3->fields)._value,
                 MethodInfo_System_Nullable_int_ctor);
    }
    pSVar3 = (forcedSet->fields).Head;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_181e9776d;
    if (-1 < (pSVar3->fields)._value) {
      System_Nullable_int____ctor
                ((System_Data_SqlTypes_SqlInt32_o *)local_res18,(pSVar3->fields)._value,
                 MethodInfo_System_Nullable_int_ctor);
    }
    pSVar3 = (forcedSet->fields).Eye;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_181e9776d;
    if (-1 < (pSVar3->fields)._value) {
      System_Nullable_int____ctor
                ((System_Data_SqlTypes_SqlInt32_o *)&local_38,(pSVar3->fields)._value,
                 MethodInfo_System_Nullable_int_ctor);
    }
    bVar11 = Settings_TitanCustomSet__IsRandomHair(forcedSet,(MethodInfo *)0x0);
    if (!bVar11) {
      pSVar4 = (forcedSet->fields).Hair;
      if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181e9776d;
      pSVar19 = (pSVar4->fields)._value;
    }
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
      (pSVar6 = (pSVar5->fields).Titan, pSVar6 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar7 = (pSVar6->fields).TitanStandardModels, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar7->fields)._value != false) {
      System_Nullable_int____ctor
                ((System_Data_SqlTypes_SqlInt32_o *)&local_res10,0,MethodInfo_System_Nullable_int_ctor);
      System_Nullable_int____ctor
                ((System_Data_SqlTypes_SqlInt32_o *)local_res18,0,MethodInfo_System_Nullable_int_ctor);
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinSelection);
    pSVar16 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this_00->fields).Hair = pSVar16;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hair,pSVar16);
    (__this_00->fields).SkinSlot = -1;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    if (local_res10.hasValue == false) {
      if (pSVar15 == (System_Int32_array *)0x0) goto label_181e9776d;
      if ((int)pSVar15->max_length == 0) goto label_181e97773;
      iVar12 = pSVar15->m_Items[0];
    }
    else {
      iVar12 = local_res10.value;
    }
    if (__this_00 != (CustomSkins_TitanSkinSelection_o *)0x0) {
      (__this_00->fields).Body = iVar12;
      if (local_res18[0].hasValue == false) {
        if (pSVar15 == (System_Int32_array *)0x0) goto label_181e9776d;
        if ((uint)pSVar15->max_length < 2) {
label_181e97773:
          ThrowIndexOutOfRangeException();
        }
        iVar12 = pSVar15->m_Items[1];
      }
      else {
        iVar12 = local_res18[0].value;
      }
      (__this_00->fields).Head = iVar12;
      if (local_38.m_fNotNull == false) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        list = (System_Collections_Generic_List_T__o *)
               TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        iVar12 = MiscExtensions__GetRandomItem_int_
                           (list,(MethodInfo_732D60 *)MethodInfo_MiscExtensions_GetRandomItem_int);
      }
      else {
        iVar12 = local_38.m_value;
      }
      (__this_00->fields).Eye = iVar12;
      pSVar16 = pSVar19;
      if (pSVar19 == (System_String_o *)0x0) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        pSVar10 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar16 = Utility_RandomGen__ChooseRandom_object_
                            ((System_Collections_Generic_List_T__o *)pSVar10,
                             (MethodInfo_732DC0 *)MethodInfo_MiscExtensions_GetRandomItem_string);
      }
      (__this_00->fields).Hair = pSVar16;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hair,pSVar16);
      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar8 != (Settings_CustomSkinSettings_o *)0x0) &&
          (__this = (pSVar8->fields).Titan,
          __this != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0)) &&
         (pSVar7 = (__this->fields).SkinsEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
        if (((pSVar7->fields)._value != false) &&
           (skinSet = (Settings_TitanCustomSkinSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)__this,
                                 (MethodInfo_C8EAF0 *)
                                 MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet),
           skinSet != (Settings_TitanCustomSkinSet_o *)0x0)) {
          bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
          if ((bVar1 <= (skinSet->klass->_2).typeHierarchyDepth) &&
             ((skinSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
            pSVar9 = (skinSet->fields).Slots;
            if (pSVar9 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) goto label_181e9776d;
            iVar12 = Settings_ListSetting_object___GetCount
                               ((Settings_ListSetting_T__o *)pSVar9,
                                (MethodInfo_182B100 *)
                                MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
            if (iVar12 != 0) {
              pSVar7 = (skinSet->fields).OverrideModels;
              if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_181e9776d;
              if ((pSVar7->fields)._value != false) {
                iVar12 = CustomSkins_TitanSkinPicker__PickSlotIndex
                                   (skinSet,(System_Nullable_int__o)local_res10,
                                    (System_Nullable_int__o)local_res18[0],ai,(MethodInfo *)0x0);
                bVar11 = Il2CppMethodInitialized_184344fd8 == '\0';
                (__this_00->fields).SkinSlot = iVar12;
                if (bVar11) {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
                  Il2CppMethodInitialized_184344fd8 = '\x01';
                }
                if (-1 < iVar12) {
                  pSVar9 = (skinSet->fields).Slots;
                  if (pSVar9 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
                    iVar13 = Settings_ListSetting_object___GetCount
                                       ((Settings_ListSetting_T__o *)pSVar9,
                                        (MethodInfo_182B100 *)
                                        MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
                    if (iVar13 <= iVar12) {
                      return __this_00;
                    }
                    pSVar9 = (skinSet->fields).Slots;
                    if (pSVar9 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
                      pSVar16 = (System_String_o *)
                                Settings_ListSetting_object___GetItemAt
                                          ((Settings_ListSetting_T__o *)pSVar9,iVar12,
                                           (MethodInfo_182B120 *)
                                           MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt);
                      if (pSVar16 != (System_String_o *)0x0) {
                        bVar1 = (TypeInfo_Settings_TitanCustomSkinSlot->_2).typeHierarchyDepth;
                        if (((pSVar16->klass->_2).typeHierarchyDepth < bVar1) ||
                           (bVar11 = true,
                           (pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot)) {
                          bVar11 = false;
                        }
                        if (bVar11) {
                          pSVar17 = pSVar16;
                        }
                      }
                      if (pSVar17 == (System_String_o *)0x0) {
                        return __this_00;
                      }
                      if (pSVar17[3].fields != (System_String_Fields)0x0) {
                        bVar11 = CustomSkins_TitanSkinPicker__IsEligible
                                           ((System_Nullable_int__o)local_res10,
                                            *(int32_t *)((longlong)pSVar17[3].fields + 0x1c),(MethodInfo *)0x0
                                           );
                        if (bVar11) {
                          if (local_res10.hasValue == false) {
                            if (pSVar17[3].fields == (System_String_Fields)0x0) goto label_181e9776d;
                            iVar2 = *(int *)((longlong)pSVar17[3].fields + 0x1c);
                            iVar18 = (__this_00->fields).Body;
                            if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            }
                            if ((0 < iVar2) &&
                               (iVar2 <= TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount)) {
                              iVar18 = iVar2 + -1;
                            }
                          }
                          else {
                            iVar18 = local_res10.value;
                          }
                          (__this_00->fields).Body = iVar18;
                        }
                        if ((*(uint64_t *)((char *)pSVar17 + 0x60)) != (System_String_c *)0x0) {
                          iVar18 = *(int *)((longlong)&(((*(Il2CppClass **)((char *)pSVar17 + 0x60)))->_1).namespaze + 4);
                          local_30 = local_res18[0];
                          if (Il2CppMethodInitialized_184344fdb == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_System_Nullable_int_get_HasValue);
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_System_Nullable_int_get_Value);
                            Il2CppMethodInitialized_184344fdb = '\x01';
                          }
                          if (((local_30.hasValue == false) || (iVar18 < 1)) ||
                             (uVar14 = System_Nullable_uint___get_Value
                                                 ((System_Nullable_uint__o *)&local_30,
                                                  (MethodInfo_AE29B0 *)
                                                  MethodInfo_System_Nullable_int_get_Value),
                             iVar18 - 1U == uVar14)) {
                            if (local_res18[0].hasValue == false) {
                              if ((*(uint64_t *)((char *)pSVar17 + 0x60)) == (System_String_c *)0x0) goto label_181e9776d;
                              iVar2 = *(int *)((longlong)&(((*(Il2CppClass **)((char *)pSVar17 + 0x60)))->_1).namespaze + 4);
                              iVar18 = (__this_00->fields).Head;
                              if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                              }
                              if ((0 < iVar2) &&
                                 (iVar2 <= TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount)) {
                                iVar18 = iVar2 + -1;
                              }
                            }
                            else {
                              iVar18 = local_res18[0].value;
                            }
                            (__this_00->fields).Head = iVar18;
                          }
                          if (local_38.m_fNotNull == false) {
                            if ((*(uint64_t *)((char *)pSVar17 + 0x68)) == (void *)0x0) goto label_181e9776d;
                            iVar2 = *(int *)((longlong)(*(uint64_t *)((char *)pSVar17 + 0x68)) + 0x1c);
                            iVar18 = (__this_00->fields).Eye;
                            if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            }
                            if ((0 < iVar2) &&
                               (iVar2 <= TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount)) {
                              iVar18 = iVar2 + -1;
                            }
                            (__this_00->fields).Eye = iVar18;
                          }
                          if (pSVar19 != (System_String_o *)0x0) {
                            return __this_00;
                          }
                          if (pSVar17[4].fields != (System_String_Fields)0x0) {
                            iVar18 = *(int *)((longlong)pSVar17[4].fields + 0x1c);
                            if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            }
                            pSVar10 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
                            if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
                              if (iVar18 < 1) {
                                return __this_00;
                              }
                              if ((pSVar10->fields)._size < iVar18) {
                                return __this_00;
                              }
                              if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                              }
                              pSVar10 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
                              if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
                                pSVar17 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                    ((System_Collections_Generic_List_object__o *)pSVar10,
                                                     iVar18 + -1,
                                                     (MethodInfo_92B830 *)
                                                     MethodInfo_System_Collections_Generic_List_string_get_Item
                                                    );
                                (__this_00->fields).Hair = pSVar17;
                                Il2CppCodeGenWriteBarrier(&(__this_00->fields).Hair,pSVar17);
                                return __this_00;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto label_181e9776d;
                }
              }
            }
          }
        }
        return __this_00;
      }
    }
  }
label_181e9776d:
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$GetSkinUrls
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker__GetSkinUrls (Settings_TitanCustomSkinSet_o* skinSet, int32_t slotIndex, int32_t body, int32_t head, bool ai, const MethodInfo* method);
// 0x181e96430

System_String_o *
CustomSkins_TitanSkinPicker__GetSkinUrls
          (Settings_TitanCustomSkinSet_o *skinSet,int32_t slotIndex,int32_t body,int32_t head,bool ai,
          MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  System_Collections_Generic_List_TitanCustomSkinSlot__o *slots;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Il2CppObject *pIVar7;
  bool bVar8;
  int32_t iVar9;
  CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o *object;
  Settings_TitanCustomSkinSlot_o *pSVar10;
  System_Func_TitanCustomSkinSlot__string__o *pSVar11;
  System_String_o *a;
  System_String_o *a_00;
  System_String_o *a_01;
  System_String_array *value;
  System_String_o *pSVar12;
  
  if (Il2CppMethodInitialized_184344fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_TitanCustomSkinSlot_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanSkinPicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344fd5 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (CustomSkins_TitanSkinPicker___c__DisplayClass1_0_o *)0x0) goto label_181e96929;
  (object->fields).body = body;
  (object->fields).head = head;
  if (skinSet == (Settings_TitanCustomSkinSet_o *)0x0) goto label_181e96916;
  pSVar1 = (skinSet->fields).Slots;
  if (pSVar1 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) goto label_181e96929;
  iVar9 = Settings_ListSetting_object___GetCount
                    ((Settings_ListSetting_T__o *)pSVar1,
                     (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
  if (iVar9 == 0) goto label_181e96916;
  pSVar1 = (skinSet->fields).Slots;
  if (pSVar1 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) goto label_181e96929;
  slots = (System_Collections_Generic_List_TitanCustomSkinSlot__o *)(pSVar1->fields)._value;
  pSVar10 = CustomSkins_TitanSkinPicker__GetSlot(skinSet,slotIndex,(MethodInfo *)0x0);
  if (pSVar10 == (Settings_TitanCustomSkinSlot_o *)0x0) {
label_181e9660a:
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TitanCustomSkinSlot_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar11,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__0,
               (MethodInfo_16E67D0 *)0x0);
    pSVar12 = CustomSkins_TitanSkinPicker__PickUrl(slots,ai,pSVar11,(MethodInfo *)0x0);
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TitanCustomSkinSlot_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar11,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c__DisplayClass1_0_GetSkinUrls_b__1,
               (MethodInfo_16E67D0 *)0x0);
    a = CustomSkins_TitanSkinPicker__PickUrl(slots,ai,pSVar11,(MethodInfo *)0x0);
    if ((TypeInfo_CustomSkins_TitanSkinPicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c);
    }
    pSVar11 = TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_2;
    if (pSVar11 == (System_Func_TitanCustomSkinSlot__string__o *)0x0) {
      if ((TypeInfo_CustomSkins_TitanSkinPicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c);
      }
      pIVar7 = (Il2CppObject *)TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9;
      pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TitanCustomSkinSlot_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar11,pIVar7,
                 (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_2,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_2 = pSVar11;
      Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_2,pSVar11);
    }
    a_00 = CustomSkins_TitanSkinPicker__PickUrl(slots,ai,pSVar11,(MethodInfo *)0x0);
    if ((TypeInfo_CustomSkins_TitanSkinPicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c);
    }
    pSVar11 = TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_3;
    if (pSVar11 == (System_Func_TitanCustomSkinSlot__string__o *)0x0) {
      if ((TypeInfo_CustomSkins_TitanSkinPicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TitanSkinPicker_c);
      }
      pIVar7 = (Il2CppObject *)TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9;
      pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TitanCustomSkinSlot_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar11,pIVar7,
                 (intptr_t)MethodInfo_CustomSkins_TitanSkinPicker_c_GetSkinUrls_b__1_3,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_3 = pSVar11;
      Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_TitanSkinPicker_c->static_fields->__9__1_3,pSVar11);
    }
    a_01 = CustomSkins_TitanSkinPicker__PickUrl(slots,ai,pSVar11,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_184344fda == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_184344fda = '\x01';
    }
    pSVar2 = (pSVar10->fields).Target;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_181e96929;
    if (((pSVar2->fields)._value != 0) && ((pSVar2->fields)._value != !ai + 1)) goto label_181e9660a;
    pSVar3 = (pSVar10->fields).Body;
    if ((((pSVar3 == (Settings_StringSetting_o *)0x0) ||
         (pSVar4 = (pSVar10->fields).Head, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
        (pSVar5 = (pSVar10->fields).Eye, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
       (pSVar6 = (pSVar10->fields).Hair, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_181e96929;
    pSVar12 = (pSVar3->fields)._value;
    a = (pSVar4->fields)._value;
    a_00 = (pSVar5->fields)._value;
    a_01 = (pSVar6->fields)._value;
  }
  bVar8 = System_String__op_Equality
                    (pSVar12,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (((bVar8) &&
      (bVar8 = System_String__op_Equality
                         (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0),
      bVar8)) &&
     ((bVar8 = System_String__op_Equality
                         (a_00,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0),
      bVar8 && (bVar8 = System_String__op_Equality
                                  (a_01,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                   (MethodInfo *)0x0), bVar8)))) {
label_181e96916:
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar12;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar12);
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = a;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,a);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = a_00;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,a_00);
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = a_01;
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,a_01);
            pSVar12 = System_String__Join(",",value,(MethodInfo *)0x0);
            return pSVar12;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181e96929:
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$PickUrl
// il2cpp: System_String_o* CustomSkins_TitanSkinPicker__PickUrl (System_Collections_Generic_List_TitanCustomSkinSlot__o* slots, bool ai, System_Func_TitanCustomSkinSlot__string__o* getUrl, const MethodInfo* method);
// 0x181e96d70
// eh: try 0x181e96e90..0x181e97005 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e96f6a: mov rdx, qword ptr [rip + 0x2203647]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_Dispose
// asm:   0x181e96f71: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e96f76: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e96f7b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e96f80: test rcx, rcx
// asm:   0x181e96f83: jne 0x181e97005
// asm:   0x181e96f89: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181e97005: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o *
CustomSkins_TitanSkinPicker__PickUrl
          (System_Collections_Generic_List_TitanCustomSkinSlot__o *slots,bool ai,
          System_Func_TitanCustomSkinSlot__string__o *getUrl,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *items;
  System_String_o *pSVar4;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_184344fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184344fd6 = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Il2CppObject *)0x0;
  items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)items,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (slots != (System_Collections_Generic_List_TitanCustomSkinSlot__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_T__o *)slots,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_GetEnumerator);
    local_38 = (undefined1  [8])local_50._0_8_;
    pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
    local_28 = local_40;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_MoveNext);
      pIVar2 = local_28;
      if (!bVar3) break;
      if (Il2CppMethodInitialized_184344fda == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        Il2CppMethodInitialized_184344fda = '\x01';
      }
      if (pIVar2 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar2[3].klass;
      if (pIVar1 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(int *)((longlong)&(pIVar1->_1).namespaze + 4) == 0) ||
         (*(int *)((longlong)&(pIVar1->_1).namespaze + 4) == !ai + 1)) {
        if (getUrl == (System_Func_TitanCustomSkinSlot__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (System_String_o *)
                 (*(code *)(getUrl->fields).invoke_impl)((getUrl->fields).method_code,pIVar2);
        bVar3 = System_String__op_Inequality
                          (pSVar4,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0
                          );
        if (bVar3) {
          if (items == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(items,pSVar4,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanCustomSkinSlot_Dispose);
    if (items != (System_Collections_Generic_List_string__o *)0x0) {
      if ((items->fields)._size == 0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar4 = Utility_RandomGen__ChooseRandom_object_
                           ((System_Collections_Generic_List_T__o *)items,
                            (MethodInfo_732DC0 *)MethodInfo_MiscExtensions_GetRandomItem_string);
      }
      return pSVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$FindSlotIndex
// il2cpp: int32_t CustomSkins_TitanSkinPicker__FindSlotIndex (Settings_TitanCustomSkinSet_o* skinSet, int32_t body, int32_t head, bool ai, const MethodInfo* method);
// 0x181e96240
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e962df: nop 
// asm:   0x181e963f5: mov eax, ebx
// asm:   0x181e963f7: jmp 0x181e963fe

int32_t CustomSkins_TitanSkinPicker__FindSlotIndex
                  (Settings_TitanCustomSkinSet_o *skinSet,int32_t body,int32_t head,bool ai,MethodInfo *method
                  )

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  System_Collections_Generic_List_object__o *__this;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  Settings_TitanCustomSkinSlot_o *pSVar4;
  int32_t index;
  System_Nullable_int__Fields local_res8;
  
  if (Il2CppMethodInitialized_184344fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fd7 = '\x01';
  }
  if (skinSet == (Settings_TitanCustomSkinSet_o *)0x0) {
    return -1;
  }
  pSVar1 = (skinSet->fields).Slots;
  if (pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    index = 0;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        if ((__this->fields)._size <= index) {
          return -1;
        }
        pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (__this,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
        if (Il2CppMethodInitialized_184344fda == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
          Il2CppMethodInitialized_184344fda = '\x01';
        }
        if ((pSVar4 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
           (pSVar2 = (pSVar4->fields).Target, pSVar2 == (Settings_IntSetting_o *)0x0)) break;
        if (((pSVar2->fields)._value == 0) || ((pSVar2->fields)._value == !ai + 1)) {
          local_res8.hasValue = false;
          local_res8._1_3_ = 0;
          local_res8.value = 0;
          System_Nullable_int____ctor
                    ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,body,MethodInfo_System_Nullable_int_ctor);
          pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
          if ((pSVar4 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
             (pSVar2 = (pSVar4->fields).BodyModel, pSVar2 == (Settings_IntSetting_o *)0x0)) {
            ThrowNullReferenceException();
          }
          bVar3 = CustomSkins_TitanSkinPicker__IsEligible
                            ((System_Nullable_int__o)local_res8,(pSVar2->fields)._value,(MethodInfo *)0x0);
          if (bVar3) {
            local_res8.hasValue = false;
            local_res8._1_3_ = 0;
            local_res8.value = 0;
            System_Nullable_int____ctor
                      ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,head,MethodInfo_System_Nullable_int_ctor
                      );
            pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
            if ((pSVar4 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
               (pSVar2 = (pSVar4->fields).HeadModel, pSVar2 == (Settings_IntSetting_o *)0x0)) {
              ThrowNullReferenceException();
            }
            bVar3 = CustomSkins_TitanSkinPicker__IsEligible
                              ((System_Nullable_int__o)local_res8,(pSVar2->fields)._value,(MethodInfo *)0x0);
            if (bVar3) {
              return index;
            }
          }
        }
        index = index + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$GetSlot
// il2cpp: Settings_TitanCustomSkinSlot_o* CustomSkins_TitanSkinPicker__GetSlot (Settings_TitanCustomSkinSet_o* skinSet, int32_t slotIndex, const MethodInfo* method);
// 0x181e96940

Settings_TitanCustomSkinSlot_o *
CustomSkins_TitanSkinPicker__GetSlot
          (Settings_TitanCustomSkinSet_o *skinSet,int32_t slotIndex,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Settings_TitanCustomSkinSlot_o *pSVar5;
  Settings_TitanCustomSkinSlot_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_184344fd8 = '\x01';
  }
  if ((skinSet == (Settings_TitanCustomSkinSet_o *)0x0) || (slotIndex < 0)) {
    return (Settings_TitanCustomSkinSlot_o *)0x0;
  }
  pSVar2 = (skinSet->fields).Slots;
  if (pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
    iVar4 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar2,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (iVar4 <= slotIndex) {
      return (Settings_TitanCustomSkinSlot_o *)0x0;
    }
    pSVar2 = (skinSet->fields).Slots;
    if (pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
      pSVar5 = (Settings_TitanCustomSkinSlot_o *)
               Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)pSVar2,slotIndex,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt)
      ;
      pSVar6 = (Settings_TitanCustomSkinSlot_o *)0x0;
      if (pSVar5 != (Settings_TitanCustomSkinSlot_o *)0x0) {
        bVar1 = (TypeInfo_Settings_TitanCustomSkinSlot->_2).typeHierarchyDepth;
        if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot)) {
          bVar3 = false;
        }
        if (bVar3) {
          pSVar6 = pSVar5;
        }
      }
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$PickSlotIndex
// il2cpp: int32_t CustomSkins_TitanSkinPicker__PickSlotIndex (Settings_TitanCustomSkinSet_o* skinSet, System_Nullable_int__o pinnedBody, System_Nullable_int__o pinnedHead, bool ai, const MethodInfo* method);
// 0x181e96b20

int32_t CustomSkins_TitanSkinPicker__PickSlotIndex
                  (Settings_TitanCustomSkinSet_o *skinSet,System_Nullable_int__o pinnedBody,
                  System_Nullable_int__o pinnedHead,bool ai,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  System_Collections_Generic_List_object__o *__this;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_T__o *list;
  Settings_TitanCustomSkinSlot_o *pSVar5;
  int index;
  
  if (Il2CppMethodInitialized_184344fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fd9 = '\x01';
  }
  if ((skinSet != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar1 = (skinSet->fields).Slots, pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    __this = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    list = (System_Collections_Generic_List_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)list,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    index = 0;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      for (; index < (__this->fields)._size; index = index + 1) {
        pSVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (__this,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
        if (Il2CppMethodInitialized_184344fda == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
          Il2CppMethodInitialized_184344fda = '\x01';
        }
        if ((pSVar5 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
           (pSVar2 = (pSVar5->fields).Target, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_181e96d68;
        if (((pSVar2->fields)._value == 0) || ((pSVar2->fields)._value == !ai + 1)) {
          pSVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
          if ((pSVar5 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
             (pSVar2 = (pSVar5->fields).BodyModel, pSVar2 == (Settings_IntSetting_o *)0x0))
          goto label_181e96d68;
          bVar3 = CustomSkins_TitanSkinPicker__IsEligible
                            (pinnedBody,(pSVar2->fields)._value,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_get_Item);
            if ((pSVar5 == (Settings_TitanCustomSkinSlot_o *)0x0) ||
               (pSVar2 = (pSVar5->fields).HeadModel, pSVar2 == (Settings_IntSetting_o *)0x0))
            goto label_181e96d68;
            bVar3 = CustomSkins_TitanSkinPicker__IsEligible
                              (pinnedHead,(pSVar2->fields)._value,(MethodInfo *)0x0);
            if (bVar3) {
              if (list == (System_Collections_Generic_List_T__o *)0x0) goto label_181e96d68;
              il2cpp_runtime_helper_180026690(list,index,MethodInfo_System_Collections_Generic_List_int_Add);
            }
          }
        }
      }
      if (list != (System_Collections_Generic_List_T__o *)0x0) {
        if ((list->fields)._size == 0) {
          iVar4 = -1;
        }
        else {
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          iVar4 = MiscExtensions__GetRandomItem_int_
                            (list,(MethodInfo_732D60 *)MethodInfo_MiscExtensions_GetRandomItem_int);
        }
        return iVar4;
      }
    }
  }
label_181e96d68:
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$MatchesTarget
// il2cpp: bool CustomSkins_TitanSkinPicker__MatchesTarget (Settings_TitanCustomSkinSlot_o* slot, bool ai, const MethodInfo* method);
// 0x181e96aa0

bool CustomSkins_TitanSkinPicker__MatchesTarget
               (Settings_TitanCustomSkinSlot_o *slot,bool ai,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344fda = '\x01';
  }
  if ((slot != (Settings_TitanCustomSkinSlot_o *)0x0) &&
     (pSVar1 = (slot->fields).Target, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar1->fields)._value == 0) {
      return true;
    }
    return (pSVar1->fields)._value == !ai + 1;
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanSkinPicker$$IsEligible
// il2cpp: bool CustomSkins_TitanSkinPicker__IsEligible (System_Nullable_int__o pinned, int32_t model, const MethodInfo* method);
// 0x181e96a30

bool CustomSkins_TitanSkinPicker__IsEligible(System_Nullable_int__o pinned,int32_t model,MethodInfo *method)

{
  uint32_t uVar1;
  System_Nullable_int__Fields local_res8 [4];
  
  local_res8[0] = pinned.fields;
  if (Il2CppMethodInitialized_184344fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    Il2CppMethodInitialized_184344fdb = '\x01';
  }
  if ((local_res8[0].hasValue != false) && (0 < model)) {
    uVar1 = System_Nullable_uint___get_Value
                      ((System_Nullable_uint__o *)local_res8,
                       (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
    return model - 1U == uVar1;
  }
  return true;
}


// CustomSkins.TitanSkinPicker$$ResolveModel
// il2cpp: int32_t CustomSkins_TitanSkinPicker__ResolveModel (int32_t model, int32_t fallback, int32_t count, const MethodInfo* method);
// 0x181e97780

int32_t CustomSkins_TitanSkinPicker__ResolveModel
                  (int32_t model,int32_t fallback,int32_t count,MethodInfo *method)

{
  if ((0 < model) && (model <= count)) {
    fallback = model + -1;
  }
  return fallback;
}


