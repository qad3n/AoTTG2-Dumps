// Type: Settings.PresetSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/PresetSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// --------------------------------

// Settings.PresetSettingsContainer$$get_PresetFolderPath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__get_PresetFolderPath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x4202770

System_String_o *
Settings_PresetSettingsContainer__get_PresetFolderPath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ad8b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"/Presets");
    g_data_057ad8b9 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"/Presets",(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$Load
// il2cpp: void Settings_PresetSettingsContainer__Load (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x42027d0

void Settings_PresetSettingsContainer__Load(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  System_Collections_ICollection_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_String_c *pSVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  char cVar13;
  bool_conflict bVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *pSVar16;
  System_Collections_ICollection_o *pSVar17;
  VirtualInvokeData *pVVar18;
  Il2CppObject *pIVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *unaff_RBP;
  MethodInfo *method_00;
  long lVar23;
  long lVar24;
  MethodInfo_3104E10 **unaff_R15;
  System_String_o *pSVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined8 in_stack_ffffffffffffff68;
  Settings_PresetSettingsContainer_o *pSVar28;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar29;
  Il2CppRGCTXData *pIVar30;
  _union_231609 _Var31;
  undefined1 auStack_58 [16];
  _union_231609 _Stack_48;
  
  if (g_data_057ad8ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad8ba = '\x01';
  }
  pSVar28 = __this;
  pSVar15 = (System_String_o *)
            (*(__this->klass->vtable)._21_GetPresetFilePath.methodPtr)
                      (__this,(__this->klass->vtable)._21_GetPresetFilePath.method);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_String);
  bVar14 = System_IO_File__Exists(pSVar15,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
label_04202d03:
    method_00 = (__this->klass->vtable)._4_SetDefault.method;
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this);
    Settings_SaveableSettingsContainer__Load((Settings_SaveableSettingsContainer_o *)__this,method_00);
    if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,__this_02,
                 MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
      pSVar29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
      pIVar30 = (Il2CppRGCTXData *)auStack_58._8_8_;
      _Var31 = _Stack_48;
      while( true ) {
        do {
          __this_00.fields._8_8_ = pSVar28;
          __this_00.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
          __this_00.fields._current.fields.key = (Il2CppObject *)pSVar29;
          __this_00.fields._current.fields.value = (Il2CppObject *)pIVar30;
          __this_00.fields._32_8_ = _Var31.genericMethod;
          bVar14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
          if ((char)bVar14 == '\0') {
            __this_01.fields._8_8_ = pSVar28;
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
            __this_01.fields._current.fields.key = (Il2CppObject *)pSVar29;
            __this_01.fields._current.fields.value = (Il2CppObject *)pIVar30;
            __this_01.fields._32_8_ = _Var31.genericMethod;
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                      (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
            return;
          }
          auVar27 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
          pSVar8 = (pSVar28->fields).Settings;
          if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04202f6f;
          unaff_RBP = (long *)System_Collections_Specialized_OrderedDictionary__get_Item
                                        (pSVar8,auVar27._0_8_,(MethodInfo *)0x0);
          if ((Il2CppObject *)unaff_RBP != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((((Il2CppObject *)unaff_RBP)->klass->_2).naturalAligment < bVar1) ||
               ((((Il2CppObject *)unaff_RBP)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting))
            goto label_04202f67;
          }
          lVar23 = il2cpp_runtime_helper_023051f0(unaff_RBP,TypeInfo_ISetSettingsContainer);
          pSVar16 = TypeInfo_ISetSettingsContainer;
        } while (lVar23 == 0);
        if ((Il2CppObject *)unaff_RBP == (Il2CppObject *)0x0) break;
        lVar23 = il2cpp_runtime_helper_023051f0(unaff_RBP,TypeInfo_ISetSettingsContainer);
        pSVar25 = TypeInfo_ISetSettingsContainer;
        pSVar15 = pSVar16;
        if (lVar23 == 0) goto label_04202f79;
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(unaff_RBP);
        if (pSVar15 == (System_String_o *)0x0) goto label_04202f84;
        pSVar11 = pSVar15->klass;
        uVar6._0_1_ = (pSVar11->_2).rank;
        uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(System_String_o **)((long)&pIVar10->interfaceType + lVar23) == pSVar25) {
              pVVar18 = &(pSVar11->vtable)._0_Equals + (*(int *)((long)&pIVar10->offset + lVar23) + 9);
              goto label_04202d80;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar23);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,pSVar25,9);
label_04202d80:
        (*pVVar18->methodPtr)(pSVar15,auVar27._8_8_,pVVar18->method);
        unaff_R15 = (MethodInfo_3104E10 **)pSVar25;
      }
label_04202f74:
      il2cpp_runtime_helper_022b2c90();
label_04202f79:
      pSVar25 = (System_String_o *)unaff_R15;
      il2cpp_runtime_helper_022b2fd0(unaff_RBP,pSVar15);
label_04202f84:
      il2cpp_runtime_helper_022b2fd0(unaff_RBP,pSVar25);
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(pSVar15);
  }
  else {
    pSVar16 = System_IO_File__ReadAllText(pSVar15,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this,pSVar16,(__this->klass->vtable)._8_DeserializeFromJsonString.method);
    pSVar8 = (__this->fields).Settings;
    if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
label_04202b8d:
      il2cpp_runtime_helper_022b2c90();
label_04202b92:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar17 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar8,(MethodInfo *)0x0);
      pSVar15 = (System_String_o *)0x0;
      if (pSVar17 == (System_Collections_ICollection_o *)0x0) goto label_04202b92;
      pSVar9 = pSVar17->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IEnumerable) {
            pVVar18 = pSVar9->vtable + *(int *)((long)&pIVar10->offset + lVar23);
            goto label_042029a1;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable,0);
label_042029a1:
      pSVar15 = (System_String_o *)(*pVVar18->methodPtr)(pSVar17,pVVar18->method);
      if (pSVar15 != (System_String_o *)0x0) {
        lVar23 = 0;
        unaff_R15 = &MethodInfo_Void_Add;
label_042029d0:
        pSVar11 = pSVar15->klass;
        uVar3._0_1_ = (pSVar11->_2).rank;
        uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              pVVar18 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
              goto label_04202a23;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar24);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_04202a23:
        cVar13 = (*pVVar18->methodPtr)(pSVar15,pVVar18->method);
        if (cVar13 == '\0') goto label_04202c7c;
        pSVar11 = pSVar15->klass;
        uVar4._0_1_ = (pSVar11->_2).rank;
        uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              pVVar18 = &(pSVar11->vtable)._0_Equals + (*(int *)((long)&pIVar10->offset + lVar24) + 1);
              goto label_04202aa8;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar24);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,1);
label_04202aa8:
        unaff_RBP = (long *)(*pVVar18->methodPtr)(pSVar15,pVVar18->method);
        if (((Il2CppObject *)unaff_RBP != (Il2CppObject *)0x0) &&
           (((Il2CppObject *)unaff_RBP)->klass != g_data_057b9c00)) goto label_04202b85;
        pSVar8 = (__this->fields).Settings;
        if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04202b80;
        pIVar19 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar8,(Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
        if (pIVar19 == (Il2CppObject *)0x0) goto label_04202b7b;
        bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if ((bVar1 <= (pIVar19->klass->_2).naturalAligment) &&
           ((pIVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseSetting)) {
          pIVar12 = pIVar19->klass;
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((pIVar12->_2).naturalAligment < bVar1) ||
             ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_022b2fd0(pIVar19);
            goto label_04202b6e;
          }
          pIVar19 = (Il2CppObject *)(*pIVar12->vtable[7].methodPtr)(pIVar19,pIVar12->vtable[7].method);
          if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04202b76;
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_02,(Il2CppObject *)unaff_RBP,pIVar19,MethodInfo_Void_Add);
          goto label_042029d0;
        }
label_04202b6e:
        il2cpp_runtime_helper_022b2fd0(pIVar19);
label_04202b76:
        il2cpp_runtime_helper_022b2c90();
label_04202b7b:
        il2cpp_runtime_helper_022b2c90();
label_04202b80:
        il2cpp_runtime_helper_022b2c90();
label_04202b85:
        il2cpp_runtime_helper_022b2fd0(unaff_RBP);
        goto label_04202b8d;
      }
    }
    __this = pSVar28;
    auVar26 = il2cpp_runtime_helper_022b2c90();
    unaff_R15 = auVar26._0_8_;
    if (auVar26._8_4_ != 1) {
      lVar23 = 0;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
      pSVar28 = __this;
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar11 = pSVar15->klass;
        uVar7._0_1_ = (pSVar11->_2).rank;
        uVar7._1_1_ = (pSVar11->_2).minimumAlignment;
        if ((ulong)uVar7 != 0) {
          pIVar10 = (pSVar11->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
              pVVar18 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
              goto label_04202f4a;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar24);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
        pSVar28 = __this;
label_04202f4a:
        (*pVVar18->methodPtr)(pSVar15,pVVar18->method);
      }
      if (lVar23 == 0) goto joined_r0x04202ffe;
      il2cpp_runtime_helper_022fefe0(lVar23);
label_04202f67:
      il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_04202f6f:
      il2cpp_runtime_helper_022b2c90();
      goto label_04202f74;
    }
    plVar20 = (long *)__cxa_begin_catch(unaff_R15);
    lVar23 = *plVar20;
    __cxa_end_catch();
    pSVar28 = __this;
label_04202c7c:
    unaff_RBP = &TypeInfo_IDisposable;
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023051f0(pSVar15,TypeInfo_IDisposable);
    if (pSVar15 != (System_String_o *)0x0) {
      pSVar11 = pSVar15->klass;
      uVar5._0_1_ = (pSVar11->_2).rank;
      uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pSVar11->_1).interfaceOffsets;
        lVar24 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar24) == TypeInfo_IDisposable) {
            pVVar18 = &(pSVar11->vtable)._0_Equals + *(int *)((long)&pIVar10->offset + lVar24);
            goto label_04202ced;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar24);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04202ced:
      (*pVVar18->methodPtr)(pSVar15,pVVar18->method);
    }
    in_stack_ffffffffffffff68 = 0;
    if (lVar23 == 0) goto label_04202d03;
  }
  auVar26 = il2cpp_runtime_helper_022fefe0();
joined_r0x04202ffe:
  if (auVar26._8_4_ != 1) {
    _Unwind_Resume(auVar26._0_8_);
  }
  puVar21 = (undefined8 *)__cxa_begin_catch(auVar26._0_8_);
  cVar13 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar21);
  if (cVar13 != '\0') {
    __cxa_end_catch();
    pSVar15 = (System_String_o *)
              (*(pSVar28->klass->vtable)._14_unknown.methodPtr)
                        (pSVar28,(pSVar28->klass->vtable)._14_unknown.method);
    pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load preset container: ");
    pSVar15 = System_String__Concat_3ae5ba0(pSVar16,pSVar15,(MethodInfo *)0x0);
    lVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    if (*(int *)(lVar23 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar23);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return;
  }
  puVar22 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar22 = *puVar21;
  __cxa_throw(puVar22,&PTR_PTR_05215060,0);
}


// Settings.PresetSettingsContainer$$GetPresetFilePath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__GetPresetFilePath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x4203380

System_String_o *
Settings_PresetSettingsContainer__GetPresetFilePath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (g_data_057ad8bb == '\0') {
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad8bb = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._20_get_PresetFolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._20_get_PresetFolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._14_unknown.methodPtr)(__this,(__this->klass->vtable)._14_unknown.method);
  pSVar1 = System_String__Concat_3af7150(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$.ctor
// il2cpp: void Settings_PresetSettingsContainer___ctor (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x42033f0

void Settings_PresetSettingsContainer___ctor(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor(__this,method);
  return;
}


