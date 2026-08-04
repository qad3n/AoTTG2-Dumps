// Type: Settings.BaseSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// --------------------------------

// Settings.BaseSettingsContainer.<>c$$.cctor
// il2cpp: void Settings_BaseSettingsContainer___c___cctor (const MethodInfo* method);
// 0x41ff460

void Settings_BaseSettingsContainer___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad893 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad893 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Settings.BaseSettingsContainer.<>c$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___c___ctor (Settings_BaseSettingsContainer___c_o* __this, const MethodInfo* method);
// 0x41ff4d0

void Settings_BaseSettingsContainer___c___ctor
               (Settings_BaseSettingsContainer___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.BaseSettingsContainer.<>c$$<RegisterSettings>b__4_1
// il2cpp: bool Settings_BaseSettingsContainer___c___RegisterSettings_b__4_1 (Settings_BaseSettingsContainer___c_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x41ff4e0

bool_conflict
Settings_BaseSettingsContainer___c___RegisterSettings_b__4_1
          (Settings_BaseSettingsContainer___c_o *__this,System_Reflection_FieldInfo_o *field,
          MethodInfo *method)

{
  long lVar1;
  byte bVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  long *plVar4;
  System_Type_o *pSVar5;
  SimpleJSONFixed_JSONBool_o *__this_00;
  MethodInfo *extraout_RDX;
  System_Reflection_FieldInfo_o *pSVar6;
  System_RuntimeTypeHandle_o *pSVar7;
  MethodInfo_2A23E90 **ppMVar8;
  
  pSVar6 = field;
  if (g_data_057ad894 == '\0') {
    pSVar7 = &TypeRef_BaseSetting;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad894 = '\x01';
    method = extraout_RDX;
    __this = (Settings_BaseSettingsContainer___c_o *)pSVar7;
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar4 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                               (field,(field->klass->vtable)._17_unknown.method,method);
    __this = (Settings_BaseSettingsContainer___c_o *)TypeRef_BaseSetting;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Reflection_FieldInfo_o *)0x0;
    pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)__this,(MethodInfo *)0x0);
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      bVar3 = (**(code **)(lVar1 + 0x288))
                        (plVar4,pSVar5,*(undefined8 *)(lVar1 + 0x290),lVar1,*(code **)(lVar1 + 0x288));
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar8 = (MethodInfo_2A23E90 **)__this;
  if (g_data_057ad897 == '\0') {
    ppMVar8 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad897 = '\x01';
  }
  if (pSVar6 != (System_Reflection_FieldInfo_o *)0x0) {
    bVar2 = (*pSVar6->klass[1]._1.interopData)(pSVar6,pSVar6->klass[1]._1.klass);
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this,(uint)bVar2,MethodInfo_Void_set_Value);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad898 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ad898 = '\x01';
  }
  bVar2 = *(byte *)((long)&(((Settings_TypedSetting_bool__o *)ppMVar8)->fields).DefaultValue + 1);
  __this_00 = (SimpleJSONFixed_JSONBool_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  SimpleJSONFixed_JSONBool___ctor(__this_00,(uint)bVar2,(MethodInfo *)0x0);
  return (bool_conflict)__this_00;
}


// Settings.BaseSettingsContainer$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___ctor (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fdcf0

void Settings_BaseSettingsContainer___ctor(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  
  if (g_data_057ad88d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OrderedDictionary);
    g_data_057ad88d = '\x01';
  }
  __this_00 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Settings = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  (__this->fields).TypedSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TypedSettings);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._10_Setup.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._10_Setup.method,extraout_RDX,vtableDispatch)
  ;
  return;
}


// Settings.BaseSettingsContainer$$Setup
// il2cpp: void Settings_BaseSettingsContainer__Setup (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fde80

void Settings_BaseSettingsContainer__Setup(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSettingsContainer__RegisterSettings(__this,method);
  vtableDispatch = (__this->klass->vtable)._11_Apply.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._11_Apply.method,extraout_RDX,vtableDispatch)
  ;
  return;
}


// Settings.BaseSettingsContainer$$RegisterSettings
// il2cpp: void Settings_BaseSettingsContainer__RegisterSettings (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fdea0

void Settings_BaseSettingsContainer__RegisterSettings
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  char cVar5;
  bool_conflict bVar6;
  System_Type_o *pSVar7;
  System_Reflection_FieldInfo_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar8;
  VirtualInvokeData *pVVar9;
  undefined8 *puVar10;
  long *plVar11;
  Il2CppObject *value;
  Il2CppObject *pIVar12;
  MethodInfo *method_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long *unaff_R12;
  undefined1 auVar16 [12];
  
  if (g_data_057ad88e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Reflection_FieldInfo_Where_FieldInf);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_FieldInfo_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_FieldInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_FieldInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterSettings_b__4_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad88e = '\x01';
  }
  pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    source = System_Type__GetFields(pSVar7,(MethodInfo *)0x0);
    unaff_R12 = &TypeInfo_c;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (predicate == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_FieldInfo_bool);
      System_Func_object__bool____ctor();
      lVar13 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar13 + 8) = predicate;
      il2cpp_runtime_helper_022b4080(lVar13 + 8,predicate);
    }
    pSVar8 = System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_System_Reflection_FieldInfo_Where_FieldInf);
    if (pSVar8 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar3 = pSVar8->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerable_FieldInfo) {
            pVVar9 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
            goto label_041fe071;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IEnumerable_FieldInfo,0);
label_041fe071:
      unaff_R12 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
      if (unaff_R12 == (long *)0x0) goto label_041fe2e6;
label_041fe090:
      lVar13 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
            goto label_041fe0e3;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_041fe0e3:
      cVar5 = (*(code *)*puVar10)(unaff_R12,puVar10[1]);
      if (cVar5 == '\0') {
        lVar13 = 0;
        goto label_041fe24b;
      }
      lVar13 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator_FieldInfo) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
            goto label_041fe153;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator_FieldInfo,0);
label_041fe153:
      plVar11 = (long *)(*(code *)*puVar10)(unaff_R12,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        value = (Il2CppObject *)
                (**(code **)(*plVar11 + 0x2d8))(plVar11,__this,*(undefined8 *)(*plVar11 + 0x2e0));
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((value->klass->_2).naturalAligment < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            il2cpp_runtime_helper_022b2fd0(value);
            goto label_041fe2d2;
          }
        }
        __this_00 = (__this->fields).Settings;
        pIVar12 = (Il2CppObject *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041fe2d7;
        System_Collections_Specialized_OrderedDictionary__Add(__this_00,pIVar12,value,(MethodInfo *)0x0);
        method_00 = *(MethodInfo **)(*plVar11 + 0x250);
        pSVar7 = (System_Type_o *)(**(code **)(*plVar11 + 0x248))(plVar11);
        bVar6 = Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_4_0(pSVar7,method_00);
        if ((char)bVar6 != '\0') {
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).TypedSettings;
          pIVar12 = (Il2CppObject *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0))
          ;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_041fe2dc;
          System_Collections_Generic_Dictionary_object__object___Add(__this_01,pIVar12,value,MethodInfo_Void_Add);
        }
        goto label_041fe090;
      }
label_041fe2d2:
      il2cpp_runtime_helper_022b2c90();
label_041fe2d7:
      il2cpp_runtime_helper_022b2c90();
label_041fe2dc:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041fe2e6:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar16 = il2cpp_runtime_helper_022fefe0();
    if (auVar16._8_4_ != 1) break;
    plVar11 = (long *)__cxa_begin_catch();
    lVar13 = *plVar11;
    __cxa_end_catch();
label_041fe24b:
    if (unaff_R12 != (long *)0x0) {
      lVar14 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_041fe2ad;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_041fe2ad:
      (*(code *)*puVar10)(unaff_R12,puVar10[1]);
    }
    if (lVar13 == 0) {
      return;
    }
  }
  if (unaff_R12 != (long *)0x0) {
    lVar13 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_041fe3fd;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_041fe3fd:
    (*(code *)*puVar10)(unaff_R12,puVar10[1]);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// Settings.BaseSettingsContainer$$SetDefault
// il2cpp: void Settings_BaseSettingsContainer__SetDefault (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fe530

void Settings_BaseSettingsContainer__SetDefault(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_ICollection_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Settings_BaseSettingsContainer_c *pSVar8;
  char cVar9;
  System_Collections_ICollection_o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  Settings_BaseSettingsContainer_o *pSVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [12];
  
  if (g_data_057ad88f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    g_data_057ad88f = '\x01';
  }
  __this_00 = (__this->fields).Settings;
  if (__this_00 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    pSVar10 = System_Collections_Specialized_OrderedDictionary__get_Values(__this_00,(MethodInfo *)0x0);
    if (pSVar10 != (System_Collections_ICollection_o *)0x0) {
      pSVar6 = pSVar10->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerable) {
            pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
            goto label_041fe601;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar15);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerable,0);
label_041fe601:
      __this = (Settings_BaseSettingsContainer_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
      if (__this != (Settings_BaseSettingsContainer_o *)0x0) {
        lVar15 = 0;
        do {
          pSVar8 = __this->klass;
          uVar2._0_1_ = (pSVar8->_2).rank;
          uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar16);
                goto label_041fe683;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IEnumerator,0);
label_041fe683:
          cVar9 = (*pVVar11->methodPtr)(__this,pVVar11->method);
          if (cVar9 == '\0') goto label_041fe7d1;
          pSVar8 = __this->klass;
          uVar3._0_1_ = (pSVar8->_2).rank;
          uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                pVVar11 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
                goto label_041fe708;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar16);
          }
          pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IEnumerator,1);
label_041fe708:
          plVar12 = (long *)(*pVVar11->methodPtr)(__this,pVVar11->method);
          if (plVar12 == (long *)0x0) goto label_041fe77f;
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
              TypeInfo_BaseSetting)) goto label_041fe777;
          lVar16 = *plVar12;
          if ((*(byte *)(lVar16 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
             (*(long *)(*(long *)(lVar16 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
              TypeInfo_BaseSetting)) goto label_041fe76f;
          (**(code **)(lVar16 + 0x178))(plVar12,*(undefined8 *)(lVar16 + 0x180));
        } while( true );
      }
      goto label_041fe789;
    }
  }
  goto label_041fe784;
label_041fe76f:
  plVar12 = (long *)il2cpp_runtime_helper_022b2fd0(plVar12);
label_041fe777:
  il2cpp_runtime_helper_022b2fd0(plVar12);
label_041fe77f:
  il2cpp_runtime_helper_022b2c90();
label_041fe784:
  il2cpp_runtime_helper_022b2c90();
label_041fe789:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  uVar14 = auVar17._0_8_;
  if (auVar17._8_4_ != 1) {
    lVar15 = 0;
    do {
      __this = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_023051f0(__this,TypeInfo_IDisposable);
      if (__this != (Settings_BaseSettingsContainer_o *)0x0) {
        pSVar8 = __this->klass;
        uVar5._0_1_ = (pSVar8->_2).rank;
        uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar8->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IDisposable) {
              pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_041fe8cd;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar16);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_041fe8cd:
        (*pVVar11->methodPtr)(__this,pVVar11->method);
      }
      if (lVar15 == 0) {
        _Unwind_Resume(uVar14);
      }
      il2cpp_runtime_helper_022fefe0(lVar15);
label_041fe8eb:
      uVar14 = il2cpp_runtime_helper_022fefe0(lVar15);
    } while( true );
  }
  plVar12 = (long *)__cxa_begin_catch(uVar14);
  lVar15 = *plVar12;
  __cxa_end_catch();
label_041fe7d1:
  pSVar13 = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_023051f0(__this,TypeInfo_IDisposable);
  if (pSVar13 != (Settings_BaseSettingsContainer_o *)0x0) {
    pSVar8 = pSVar13->klass;
    uVar4._0_1_ = (pSVar8->_2).rank;
    uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar8->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IDisposable) {
          pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar16);
          goto label_041fe83d;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar16);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IDisposable,0);
label_041fe83d:
    (*pVVar11->methodPtr)(pSVar13,pVVar11->method);
    __this = pSVar13;
  }
  if (lVar15 != 0) goto label_041fe8eb;
  return;
}


// Settings.BaseSettingsContainer$$Apply
// il2cpp: void Settings_BaseSettingsContainer__Apply (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fe910

void Settings_BaseSettingsContainer__Apply(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.BaseSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BaseSettingsContainer__SerializeToJsonObject (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41fe920

SimpleJSONFixed_JSONNode_o *
Settings_BaseSettingsContainer__SerializeToJsonObject
          (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_ICollection_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  char cVar7;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_Collections_ICollection_o *pSVar8;
  VirtualInvokeData *pVVar9;
  undefined8 *puVar10;
  Il2CppObject *key;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *unaff_R13;
  long *unaff_R15;
  undefined1 auVar16 [12];
  
  if (g_data_057ad890 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ad890 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).Settings;
  if ((pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) &&
     (pSVar8 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0),
     pSVar8 != (System_Collections_ICollection_o *)0x0)) {
    pSVar4 = pSVar8->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerable) {
          pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar14);
          goto label_041fea11;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IEnumerable,0);
label_041fea11:
    unaff_R13 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (unaff_R13 == (long *)0x0) goto label_041fec99;
    unaff_R15 = &TypeInfo_IEnumerator;
label_041fea30:
    lVar14 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138);
          goto label_041fea83;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_041fea83:
    cVar7 = (*(code *)*puVar10)(unaff_R13,puVar10[1]);
    if (cVar7 == '\0') {
      unaff_R15 = (long *)0x0;
      goto label_041febe5;
    }
    lVar14 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar10 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) + 1) * 0x10 + lVar14 + 0x138);
          goto label_041feb08;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_041feb08:
    key = (Il2CppObject *)(*(code *)*puVar10)(unaff_R13,puVar10[1]);
    if ((key != (Il2CppObject *)0x0) && (key->klass != g_data_057b9c00)) goto label_041fec8c;
    pSVar3 = (__this->fields).Settings;
    if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      pIVar11 = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar3,key,(MethodInfo *)0x0);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_041fec82;
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar11->klass->_2).naturalAligment < bVar1) ||
         ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2fd0(pIVar11);
label_041fec75:
        il2cpp_runtime_helper_022b2fd0(pIVar11);
        goto label_041fec7d;
      }
      pIVar6 = pIVar11->klass;
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) goto label_041fec75;
      uVar12 = (*pIVar6->vtable[5].methodPtr)(pIVar11,pIVar6->vtable[5].method);
      if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_041fec87;
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,key,uVar12,(__this_00->klass->vtable)._20_Add.method);
      goto label_041fea30;
    }
label_041fec7d:
    il2cpp_runtime_helper_022b2c90();
label_041fec82:
    il2cpp_runtime_helper_022b2c90();
label_041fec87:
    il2cpp_runtime_helper_022b2c90();
label_041fec8c:
    il2cpp_runtime_helper_022b2fd0(key);
  }
  il2cpp_runtime_helper_022b2c90();
label_041fec99:
  il2cpp_runtime_helper_022b2c90();
  while (auVar16 = il2cpp_runtime_helper_022fefe0(unaff_R15), auVar16._8_4_ == 1) {
    puVar10 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    unaff_R15 = (long *)*puVar10;
    __cxa_end_catch();
label_041febe5:
    plVar13 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
    if (plVar13 != (long *)0x0) {
      lVar14 = *plVar13;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_041fec4d;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_041fec4d:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
    if (unaff_R15 == (long *)0x0) {
      return (SimpleJSONFixed_JSONNode_o *)__this_00;
    }
  }
  plVar13 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_041fed8d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_041fed8d:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// Settings.BaseSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_BaseSettingsContainer__DeserializeFromJsonObject (Settings_BaseSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x41fedc0

void Settings_BaseSettingsContainer__DeserializeFromJsonObject
               (Settings_BaseSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_ICollection_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  System_Collections_ICollection_o *pSVar9;
  VirtualInvokeData *pVVar10;
  undefined8 *puVar11;
  Il2CppObject *pIVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  Il2CppObject *unaff_RBP;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  long *unaff_R15;
  undefined1 auVar18 [12];
  
  if (g_data_057ad891 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ad891 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
    if (((json->klass->_2).naturalAligment < bVar1) ||
       ((json->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) goto label_041ff1ed;
  }
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041ff1f5;
  pSVar9 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
  if (pSVar9 != (System_Collections_ICollection_o *)0x0) {
    pSVar4 = pSVar9->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IEnumerable) {
          pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
          goto label_041feee1;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar16);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IEnumerable,0);
label_041feee1:
    unaff_R13 = (long *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
    if (unaff_R13 != (long *)0x0) {
      unaff_R15 = &TypeInfo_IEnumerator;
label_041fef10:
      lVar16 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
            goto label_041fef63;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_041fef63:
      cVar7 = (*(code *)*puVar11)(unaff_R13,puVar11[1]);
      if (cVar7 == '\0') {
        unaff_R15 = (long *)0x0;
        goto label_041ff10d;
      }
      lVar16 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) + 1) * 0x10 + lVar16 + 0x138);
            goto label_041fefe8;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_041fefe8:
      pIVar12 = (Il2CppObject *)(*(code *)*puVar11)(unaff_R13,puVar11[1]);
      if ((pIVar12 == (Il2CppObject *)0x0) || (pIVar12->klass == g_data_057b9c00)) {
        if (json != (SimpleJSONFixed_JSONNode_o *)0x0) goto code_r0x041ff019;
        il2cpp_runtime_helper_022b2c90();
        goto label_041ff1cb;
      }
      goto label_041ff1db;
    }
    goto label_041ff1ff;
  }
  goto label_041ff1fa;
code_r0x041ff019:
  unaff_RBP = (Il2CppObject *)
              (*(json->klass->vtable)._7_get_Item.methodPtr)
                        (json,pIVar12,(json->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)unaff_RBP,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_041fef10;
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_041ff1e3;
  unaff_RBP = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar3,pIVar12,(MethodInfo *)0x0);
  uVar13 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                     (json,pIVar12,(json->klass->vtable)._7_get_Item.method);
  if (unaff_RBP == (Il2CppObject *)0x0) goto label_041ff1e8;
  bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
  if ((bVar1 <= (unaff_RBP->klass->_2).naturalAligment) &&
     ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseSetting)) {
    pIVar6 = unaff_RBP->klass;
    bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if (((pIVar6->_2).naturalAligment < bVar1) ||
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) goto label_041ff1d3;
    (*pIVar6->vtable[6].methodPtr)(unaff_RBP,uVar13,pIVar6->vtable[6].method);
    goto label_041fef10;
  }
label_041ff1cb:
  il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_041ff1d3:
  il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_041ff1db:
  il2cpp_runtime_helper_022b2fd0(pIVar12);
label_041ff1e3:
  il2cpp_runtime_helper_022b2c90();
label_041ff1e8:
  il2cpp_runtime_helper_022b2c90();
label_041ff1ed:
  il2cpp_runtime_helper_022b2fd0(json);
label_041ff1f5:
  il2cpp_runtime_helper_022b2c90();
label_041ff1fa:
  il2cpp_runtime_helper_022b2c90();
label_041ff1ff:
  il2cpp_runtime_helper_022b2c90();
  while (auVar18 = il2cpp_runtime_helper_022fefe0(unaff_R15), uVar13 = auVar18._0_8_, auVar18._8_4_ == 1) {
    puVar11 = (undefined8 *)__cxa_begin_catch(uVar13);
    unaff_R15 = (long *)*puVar11;
    __cxa_end_catch();
label_041ff10d:
    plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
    if (plVar14 != (long *)0x0) {
      lVar16 = *plVar14;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
            puVar11 = (undefined8 *)
                      (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
            goto label_041ff17d;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_041ff17d:
      (*(code *)*puVar11)(plVar14,puVar11[1]);
    }
    if (unaff_R15 == (long *)0x0) {
      cVar7 = (*(__this->klass->vtable)._12_Validate.methodPtr)
                        (__this,(__this->klass->vtable)._12_Validate.method);
      if (cVar7 == '\0') {
        (*(__this->klass->vtable)._4_SetDefault.methodPtr)
                  (__this,(__this->klass->vtable)._4_SetDefault.method);
      }
      return;
    }
  }
  plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar14 != (long *)0x0) {
    lVar16 = *plVar14;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_041ff364;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_041ff364:
    (*(code *)*puVar11)(plVar14,puVar11[1]);
  }
  if (auVar18._8_4_ != 1) {
    _Unwind_Resume(uVar13);
  }
  puVar11 = (undefined8 *)__cxa_begin_catch(uVar13);
  cVar7 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar7 == '\0') {
    puVar15 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar15 = *puVar11;
    __cxa_throw(puVar15,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  lVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
  if (*(int *)(lVar16 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar16);
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&"Failed to deserialize json.");
  UnityEngine_Debug__Log(pIVar12,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.BaseSettingsContainer$$Validate
// il2cpp: bool Settings_BaseSettingsContainer__Validate (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x41ff450

bool_conflict
Settings_BaseSettingsContainer__Validate(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Settings.BaseSettingsContainer$$<RegisterSettings>g__IsTypedSetting|4_0
// il2cpp: bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_4_0 (System_Type_o* settingType, const MethodInfo* method);
// 0x41fe430

bool_conflict
Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_4_0
          (System_Type_o *settingType,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Specialized_OrderedDictionary_o *__this;
  System_Collections_ICollection_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Type_c *pSVar8;
  char cVar9;
  bool_conflict bVar10;
  System_Type_o *pSVar11;
  long *plVar12;
  System_Type_o *left;
  System_Collections_ICollection_o *pSVar13;
  VirtualInvokeData *pVVar14;
  System_RuntimeTypeHandle_o handle;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [12];
  
  if (g_data_057ad892 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TypedSetting_T);
    g_data_057ad892 = '\x01';
  }
  handle.fields.value = TypeRef_TypedSetting_T.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (settingType != (System_Type_o *)0x0) {
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)settingType;
    plVar12 = (long *)(*(settingType->klass->vtable)._116_unknown.methodPtr)();
    if (plVar12 != (long *)0x0) {
      cVar9 = (**(code **)(*plVar12 + 0x3b8))(plVar12,*(undefined8 *)(*plVar12 + 0x3c0));
      if (cVar9 == '\0') {
        return 0;
      }
      plVar12 = (long *)(*(settingType->klass->vtable)._116_unknown.methodPtr)();
      handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)settingType;
      if (plVar12 != (long *)0x0) {
        left = (System_Type_o *)(**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450));
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = System_Type__op_Equality(left,pSVar11,(MethodInfo *)0x0);
        return bVar10;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad88f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    g_data_057ad88f = '\x01';
  }
  __this = (System_Collections_Specialized_OrderedDictionary_o *)
           (((System_Type_o *)handle.fields.value)->fields)._impl.fields.value;
  if (__this != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    pSVar13 = System_Collections_Specialized_OrderedDictionary__get_Values(__this,(MethodInfo *)0x0);
    if (pSVar13 != (System_Collections_ICollection_o *)0x0) {
      pSVar6 = pSVar13->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerable) {
            pVVar14 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
            goto label_041fe601;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar16);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IEnumerable,0);
label_041fe601:
      handle.fields.value = (System_RuntimeTypeHandle_Fields)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
      if (handle.fields.value != 0) {
        lVar16 = 0;
        do {
          pSVar8 = ((System_Type_o *)handle.fields.value)->klass;
          uVar2._0_1_ = (pSVar8->_2).rank;
          uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                pVVar14 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
                goto label_041fe683;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar17);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,0);
label_041fe683:
          cVar9 = (*pVVar14->methodPtr)(handle.fields.value,pVVar14->method);
          if (cVar9 == '\0') goto label_041fe7d1;
          pSVar8 = ((System_Type_o *)handle.fields.value)->klass;
          uVar3._0_1_ = (pSVar8->_2).rank;
          uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
                pVVar14 = &(pSVar8->vtable)._0_Equals + (*(int *)((long)&pIVar7->offset + lVar17) + 1);
                goto label_041fe708;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar17);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,1);
label_041fe708:
          plVar12 = (long *)(*pVVar14->methodPtr)(handle.fields.value,pVVar14->method);
          if (plVar12 == (long *)0x0) goto label_041fe77f;
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
              TypeInfo_BaseSetting)) goto label_041fe777;
          lVar17 = *plVar12;
          if ((*(byte *)(lVar17 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
             (*(long *)(*(long *)(lVar17 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
              TypeInfo_BaseSetting)) goto label_041fe76f;
          (**(code **)(lVar17 + 0x178))(plVar12,*(undefined8 *)(lVar17 + 0x180));
        } while( true );
      }
      goto label_041fe789;
    }
  }
  goto label_041fe784;
label_041fe76f:
  plVar12 = (long *)il2cpp_runtime_helper_022b2fd0(plVar12);
label_041fe777:
  il2cpp_runtime_helper_022b2fd0(plVar12);
label_041fe77f:
  il2cpp_runtime_helper_022b2c90();
label_041fe784:
  il2cpp_runtime_helper_022b2c90();
label_041fe789:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  uVar15 = auVar18._0_8_;
  if (auVar18._8_4_ != 1) {
    lVar16 = 0;
    do {
      handle.fields.value =
           (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023051f0(handle.fields.value,TypeInfo_IDisposable);
      if (handle.fields.value != 0) {
        pSVar8 = ((System_Type_o *)handle.fields.value)->klass;
        uVar5._0_1_ = (pSVar8->_2).rank;
        uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar8->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IDisposable) {
              pVVar14 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
              goto label_041fe8cd;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar17);
        }
        pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IDisposable,0);
label_041fe8cd:
        (*pVVar14->methodPtr)(handle.fields.value,pVVar14->method);
      }
      if (lVar16 == 0) {
        _Unwind_Resume(uVar15);
      }
      il2cpp_runtime_helper_022fefe0(lVar16);
label_041fe8eb:
      uVar15 = il2cpp_runtime_helper_022fefe0(lVar16);
    } while( true );
  }
  plVar12 = (long *)__cxa_begin_catch(uVar15);
  lVar16 = *plVar12;
  __cxa_end_catch();
label_041fe7d1:
  pSVar11 = (System_Type_o *)il2cpp_runtime_helper_023051f0(handle.fields.value,TypeInfo_IDisposable);
  bVar10 = 0;
  if (pSVar11 != (System_Type_o *)0x0) {
    pSVar8 = pSVar11->klass;
    uVar4._0_1_ = (pSVar8->_2).rank;
    uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar8->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IDisposable) {
          pVVar14 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
          goto label_041fe83d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar17);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IDisposable,0);
label_041fe83d:
    bVar10 = (*pVVar14->methodPtr)(pSVar11,pVVar14->method);
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar11;
  }
  if (lVar16 != 0) goto label_041fe8eb;
  return bVar10;
}


