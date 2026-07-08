// Type: Settings.PresetSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/PresetSettingsContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs  [CHANGED since prior version]
// --------------------------------

// Settings.PresetSettingsContainer$$get_PresetFolderPath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__get_PresetFolderPath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f10380

System_String_o *
Settings_PresetSettingsContainer__get_PresetFolderPath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05703c91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&"/Presets");
    DAT_05703c91 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"/Presets",(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$Load
// il2cpp: void Settings_PresetSettingsContainer__Load (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f103e0

/* WARNING: Removing unreachable block (ram,0x03f10ba4) */

void Settings_PresetSettingsContainer__Load
               (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_ICollection_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_ICollection_o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  long lVar16;
  MethodInfo *method_00;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_ffffffffffffff68;
  Settings_PresetSettingsContainer_o *pSVar20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar21;
  Il2CppRGCTXData *pIVar22;
  _union_229680 _Var23;
  undefined1 auStack_58 [16];
  _union_229680 _Stack_48;
  
  if (DAT_05703c92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_String__get);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_ISetSettingsContainer);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703c92 = '\x01';
  }
  pSVar20 = __this;
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._21_GetPresetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._21_GetPresetFilePath.method);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_String);
  bVar8 = System_IO_File__Exists(pSVar9,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pSVar9 = System_IO_File__ReadAllText(pSVar9,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this,pSVar9,(__this->klass->vtable)._8_DeserializeFromJsonString.method);
    pSVar3 = (__this->fields).Settings;
    if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
    if (pSVar10 == (System_Collections_ICollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = pSVar10->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_IEnumerable) {
          pVVar11 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
          goto LAB_03f105b1;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar17);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable,0);
LAB_03f105b1:
    plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar17 = 0;
    do {
      lVar16 = *plVar12;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar18) == TypeInfo_IEnumerator) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar18) * 0x10 + lVar16 + 0x138
                      );
            goto LAB_03f10633;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar18);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_03f10633:
      cVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (cVar7 == '\0') {
        plVar12 = (long *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable);
        if (plVar12 == (long *)0x0) goto LAB_03f10906;
        lVar16 = *plVar12;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto LAB_03f108df;
        lVar18 = 0;
        goto LAB_03f108d0;
      }
      lVar16 = *plVar12;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar18) == TypeInfo_IEnumerator) {
            puVar13 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar18) + 1) * 0x10 + lVar16 +
                      0x138);
            goto LAB_03f106b8;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar18);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,1);
LAB_03f106b8:
      pIVar14 = (Il2CppObject *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((pIVar14 != (Il2CppObject *)0x0) && (pIVar14->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar14);
      }
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar15 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar3,pIVar14,(MethodInfo *)0x0);
      if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar15->klass->_2).naturalAligment < bVar1) ||
         ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar15);
      }
      pIVar6 = pIVar15->klass;
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar15);
      }
      pIVar15 = (Il2CppObject *)(*pIVar6->vtable[7].methodPtr)(pIVar15,pIVar6->vtable[7].method);
      if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_02,pIVar14,pIVar15,MethodInfo_Void_Add);
    } while( true );
  }
  goto LAB_03f10913;
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar18) {
LAB_03f108d0:
    if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)
                (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto LAB_03f108fd;
    }
  }
LAB_03f108df:
  puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_03f108fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_03f10906:
  in_stack_ffffffffffffff68 = 0;
  if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_022c0ed0();
  }
LAB_03f10913:
  method_00 = (__this->klass->vtable)._4_SetDefault.method;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this);
  Settings_SaveableSettingsContainer__Load((Settings_SaveableSettingsContainer_o *)__this,method_00)
  ;
  if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
             __this_02,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
  pSVar21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
  pIVar22 = (Il2CppRGCTXData *)auStack_58._8_8_;
  _Var23 = _Stack_48;
  do {
    do {
      __this_00.fields._8_8_ = pSVar20;
      __this_00.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this_00.fields._current.fields.key = (Il2CppObject *)pSVar21;
      __this_00.fields._current.fields.value = (Il2CppObject *)pIVar22;
      __this_00.fields._32_8_ = _Var23.genericMethod;
      bVar8 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
      if ((char)bVar8 == '\0') {
        __this_01.fields._8_8_ = pSVar20;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
        __this_01.fields._current.fields.key = (Il2CppObject *)pSVar21;
        __this_01.fields._current.fields.value = (Il2CppObject *)pIVar22;
        __this_01.fields._32_8_ = _Var23.genericMethod;
        System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                  (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
        return;
      }
      auVar19 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_System_String__get);
      pSVar3 = (pSVar20->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar3,auVar19._0_8_,(MethodInfo *)0x0);
      if (pIVar14 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar1) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
      }
      lVar16 = il2cpp_runtime_glue(pIVar14,TypeInfo_ISetSettingsContainer);
      lVar17 = TypeInfo_ISetSettingsContainer;
    } while (lVar16 == 0);
    if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar18 = il2cpp_runtime_glue(pIVar14,TypeInfo_ISetSettingsContainer);
    lVar16 = TypeInfo_ISetSettingsContainer;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar14,lVar17);
    }
    plVar12 = (long *)il2cpp_runtime_glue(pIVar14);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar14,lVar16);
    }
    lVar17 = *plVar12;
    if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
      lVar18 = 0;
      do {
        if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == lVar16) {
          puVar13 = (undefined8 *)
                    (lVar17 + (long)(*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) + 9) * 0x10 +
                    0x138);
          goto LAB_03f10990;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,lVar16,9);
LAB_03f10990:
    (*(code *)*puVar13)(plVar12,auVar19._8_8_,puVar13[1]);
  } while( true );
}


// Settings.PresetSettingsContainer$$GetPresetFilePath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__GetPresetFilePath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f10f90

System_String_o *
Settings_PresetSettingsContainer__GetPresetFilePath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (DAT_05703c93 == '\0') {
    il2cpp_init_method_metadata(&"/");
    DAT_05703c93 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._20_get_PresetFolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._20_get_PresetFolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._14_unknown.methodPtr)
                   (__this,(__this->klass->vtable)._14_unknown.method);
  pSVar1 = System_String__Concat(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$.ctor
// il2cpp: void Settings_PresetSettingsContainer___ctor (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f11000

void Settings_PresetSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor(__this,method);
  return;
}


