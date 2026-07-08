// Type: Settings.BaseSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/BaseSettingsContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs  [CHANGED since prior version]
// --------------------------------

// Settings.BaseSettingsContainer.<>c$$.cctor
// il2cpp: void Settings_BaseSettingsContainer___c___cctor (const MethodInfo* method);
// 0x3f0cf40

void Settings_BaseSettingsContainer_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703c6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c6b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Settings.BaseSettingsContainer.<>c$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___c___ctor (Settings_BaseSettingsContainer___c_o* __this, const MethodInfo* method);
// 0x3f0cfb0

void Settings_BaseSettingsContainer_<>c___ctor
               (Settings_BaseSettingsContainer___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.BaseSettingsContainer.<>c$$<RegisterSettings>b__4_1
// il2cpp: bool Settings_BaseSettingsContainer___c___RegisterSettings_b__4_1 (Settings_BaseSettingsContainer___c_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x3f0cfc0

bool_conflict
Settings_BaseSettingsContainer_<>c__<RegisterSettings>b__4_1
          (Settings_BaseSettingsContainer___c_o *__this,System_Reflection_FieldInfo_o *field,
          MethodInfo *method)

{
  long lVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  long *plVar3;
  System_Type_o *pSVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703c6c == '\0') {
    il2cpp_init_method_metadata(&TypeRef_BaseSetting);
    DAT_05703c6c = '\x01';
    method = extraout_RDX;
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)
                               (field,(field->klass->vtable)._17_unknown.method,method);
    handle = TypeRef_BaseSetting;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (plVar3 != (long *)0x0) {
      lVar1 = *plVar3;
      bVar2 = (**(code **)(lVar1 + 0x288))
                        (plVar3,pSVar4,*(undefined8 *)(lVar1 + 0x290),lVar1,
                         *(code **)(lVar1 + 0x288));
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.BaseSettingsContainer$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___ctor (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0b7d0

void Settings_BaseSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  
  if (DAT_05703c65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_OrderedDictionary);
    DAT_05703c65 = '\x01';
  }
  __this_00 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_glue(TypeInfo_OrderedDictionary)
  ;
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Settings = __this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  (__this->fields).TypedSettings =
       (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields).TypedSettings);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._10_Setup.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._10_Setup.method,extraout_RDX,vtable_dispatch);
  return;
}


// Settings.BaseSettingsContainer$$Setup
// il2cpp: void Settings_BaseSettingsContainer__Setup (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0b960

void Settings_BaseSettingsContainer__Setup
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSettingsContainer__RegisterSettings(__this,method);
  vtable_dispatch = (__this->klass->vtable)._11_Apply.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._11_Apply.method,extraout_RDX,vtable_dispatch);
  return;
}


// Settings.BaseSettingsContainer$$RegisterSettings
// il2cpp: void Settings_BaseSettingsContainer__RegisterSettings (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0b980

/* WARNING: Removing unreachable block (ram,0x03f0bdcb) */

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
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  Il2CppObject *value;
  Il2CppObject *pIVar13;
  MethodInfo *method_00;
  long lVar14;
  long lVar15;
  
  if (DAT_05703c66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Reflection_FieldInfo__Where);
    il2cpp_init_method_metadata(&TypeInfo_Func_FieldInfo__bool);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_FieldInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_FieldInfo);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RegisterSettings_b__4_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703c66 = '\x01';
  }
  pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    source = System_Type__GetFields(pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (predicate == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_FieldInfo__bool);
      System_Func<object__bool>___ctor();
      lVar14 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar14 + 8) = predicate;
      il2cpp_runtime_glue(lVar14 + 8,predicate);
    }
    pSVar8 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        MethodInfo_IEnumerable_1_System_Reflection_FieldInfo__Where);
    if (pSVar8 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar3 = pSVar8->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_IEnumerable_FieldInfo) {
            pVVar9 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
            goto LAB_03f0bb51;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar14);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerable_FieldInfo,0);
LAB_03f0bb51:
      plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar14 = *plVar10;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 +
                        0x138);
              goto LAB_03f0bbc3;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,0);
LAB_03f0bbc3:
        cVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (cVar5 == '\0') {
          if (plVar10 == (long *)0x0) {
            return;
          }
          lVar14 = *plVar10;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto LAB_03f0bd6f;
          lVar15 = 0;
          goto LAB_03f0bd60;
        }
        lVar14 = *plVar10;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator_FieldInfo) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 +
                        0x138);
              goto LAB_03f0bc33;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator_FieldInfo,0);
LAB_03f0bc33:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value = (Il2CppObject *)
                (**(code **)(*plVar12 + 0x2d8))(plVar12,__this,*(undefined8 *)(*plVar12 + 0x2e0));
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((value->klass->_2).naturalAligment < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(value);
          }
        }
        __this_00 = (__this->fields).Settings;
        pIVar13 = (Il2CppObject *)
                  (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Specialized_OrderedDictionary__Add
                  (__this_00,pIVar13,value,(MethodInfo *)0x0);
        method_00 = *(MethodInfo **)(*plVar12 + 0x250);
        pSVar7 = (System_Type_o *)(**(code **)(*plVar12 + 0x248))(plVar12);
        bVar6 = Settings_BaseSettingsContainer__<RegisterSettings>g__IsTypedSetting_4_0
                          (pSVar7,method_00);
        if ((char)bVar6 != '\0') {
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).TypedSettings;
          pIVar13 = (Il2CppObject *)
                    (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this_01,pIVar13,value,MethodInfo_Void_Add);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
LAB_03f0bd60:
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_03f0bd8d;
    }
  }
LAB_03f0bd6f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03f0bd8d:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


// Settings.BaseSettingsContainer$$SetDefault
// il2cpp: void Settings_BaseSettingsContainer__SetDefault (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0c010

/* WARNING: Removing unreachable block (ram,0x03f0c3cb) */

void Settings_BaseSettingsContainer__SetDefault
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_ICollection_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  System_Collections_ICollection_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if (DAT_05703c67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    DAT_05703c67 = '\x01';
  }
  __this_00 = (__this->fields).Settings;
  if ((__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
     (pSVar5 = System_Collections_Specialized_OrderedDictionary__get_Values
                         (__this_00,(MethodInfo *)0x0),
     pSVar5 == (System_Collections_ICollection_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = pSVar5->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IEnumerable) {
        pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto LAB_03f0c0e1;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar10);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar5,TypeInfo_IEnumerable,0);
LAB_03f0c0e1:
  plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar10 = *plVar7;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar8 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_03f0c163;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_03f0c163:
    cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (cVar4 == '\0') {
      plVar7 = (long *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) == 0) goto LAB_03f0c2ff;
      lVar11 = 0;
      break;
    }
    lVar10 = *plVar7;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar8 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) + 1) * 0x10 + lVar10 +
                   0x138);
          goto LAB_03f0c1e8;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,1);
LAB_03f0c1e8:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
       (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
        TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar9);
    }
    lVar10 = *plVar9;
    if ((*(byte *)(lVar10 + 0x130) < *(byte *)(TypeInfo_BaseSetting + 0x130)) ||
       (*(long *)(*(long *)(lVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseSetting + 0x130) * 8) !=
        TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar9);
    }
    (**(code **)(lVar10 + 0x178))(plVar9,*(undefined8 *)(lVar10 + 0x180));
  } while( true );
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11) {
    if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto LAB_03f0c31d;
    }
  }
LAB_03f0c2ff:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_03f0c31d:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


// Settings.BaseSettingsContainer$$Apply
// il2cpp: void Settings_BaseSettingsContainer__Apply (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0c3f0

void Settings_BaseSettingsContainer__Apply
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.BaseSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BaseSettingsContainer__SerializeToJsonObject (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0c400

/* WARNING: Removing unreachable block (ram,0x03f0c77e) */

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
  long *plVar10;
  undefined8 *puVar11;
  Il2CppObject *key;
  Il2CppObject *pIVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  if (DAT_05703c68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_05703c68 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).Settings;
  if ((pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
     (pSVar8 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0),
     pSVar8 == (System_Collections_ICollection_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = pSVar8->klass;
  uVar2._0_1_ = (pSVar4->_2).rank;
  uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar14 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerable) {
        pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar14);
        goto LAB_03f0c4f1;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar14);
  }
  pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerable,0);
LAB_03f0c4f1:
  plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar14 = *plVar10;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138);
          goto LAB_03f0c563;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,0);
LAB_03f0c563:
    cVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (cVar7 == '\0') {
      plVar10 = (long *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable);
      if (plVar10 == (long *)0x0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
      lVar14 = *plVar10;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto LAB_03f0c70f;
      lVar15 = 0;
      break;
    }
    lVar14 = *plVar10;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) + 1) * 0x10 + lVar14 +
                    0x138);
          goto LAB_03f0c5e8;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,1);
LAB_03f0c5e8:
    key = (Il2CppObject *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((key != (Il2CppObject *)0x0) && (key->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(key);
    }
    pSVar3 = (__this->fields).Settings;
    if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar12 = System_Collections_Specialized_OrderedDictionary__get_Item
                        (pSVar3,key,(MethodInfo *)0x0);
    if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if (((pIVar12->klass->_2).naturalAligment < bVar1) ||
       ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar12);
    }
    pIVar6 = pIVar12->klass;
    bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if (((pIVar6->_2).naturalAligment < bVar1) ||
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar12);
    }
    uVar13 = (*pIVar6->vtable[5].methodPtr)(pIVar12,pIVar6->vtable[5].method);
    if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,key,uVar13,(__this_00->klass->vtable)._20_Add.method);
  } while( true );
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_03f0c72d;
    }
  }
LAB_03f0c70f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03f0c72d:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.BaseSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_BaseSettingsContainer__DeserializeFromJsonObject (Settings_BaseSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0c8a0

/* WARNING: Removing unreachable block (ram,0x03f0cce4) */

void Settings_BaseSettingsContainer__DeserializeFromJsonObject
               (Settings_BaseSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

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
  long *plVar11;
  undefined8 *puVar12;
  Il2CppObject *key;
  SimpleJSONFixed_JSONNode_o *a;
  Il2CppObject *pIVar13;
  undefined8 uVar14;
  MethodInfo *extraout_RDX;
  long lVar15;
  long lVar16;
  
  if (DAT_05703c69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_05703c69 = '\x01';
    method = extraout_RDX;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
    if (((json->klass->_2).naturalAligment < bVar1) ||
       ((json->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(json,TypeInfo_JSONObject,method);
    }
  }
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
  if (pSVar9 == (System_Collections_ICollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = pSVar9->klass;
  uVar2._0_1_ = (pSVar4->_2).rank;
  uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_IEnumerable) {
        pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar15);
        goto LAB_03f0c9c1;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar15);
  }
  pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IEnumerable,0);
LAB_03f0c9c1:
  plVar11 = (long *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar15 = *plVar11;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + lVar15 + 0x138);
          goto LAB_03f0ca43;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator,0);
LAB_03f0ca43:
    cVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (cVar7 == '\0') {
      plVar11 = (long *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable);
      if (plVar11 == (long *)0x0) goto LAB_03f0cc66;
      lVar15 = *plVar11;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto LAB_03f0cc3f;
      lVar16 = 0;
      break;
    }
    lVar15 = *plVar11;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
          puVar12 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 1) * 0x10 + lVar15 +
                    0x138);
          goto LAB_03f0cac8;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator,1);
LAB_03f0cac8:
    key = (Il2CppObject *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if ((key != (Il2CppObject *)0x0) && (key->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(key);
    }
    if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(json->klass->vtable)._7_get_Item.methodPtr)
                  (json,key,(json->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar13 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar3,key,(MethodInfo *)0x0);
      uVar14 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                         (json,key,(json->klass->vtable)._7_get_Item.method);
      if (pIVar13 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar13->klass->_2).naturalAligment < bVar1) ||
         ((pIVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar13);
      }
      pIVar6 = pIVar13->klass;
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar13);
      }
      (*pIVar6->vtable[6].methodPtr)(pIVar13,uVar14,pIVar6->vtable[6].method);
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_03f0cc5d;
    }
  }
LAB_03f0cc3f:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable,0);
LAB_03f0cc5d:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_03f0cc66:
  cVar7 = (*(__this->klass->vtable)._12_Validate.methodPtr)
                    (__this,(__this->klass->vtable)._12_Validate.method);
  if (cVar7 == '\0') {
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)
              (__this,(__this->klass->vtable)._4_SetDefault.method);
  }
  return;
}


// Settings.BaseSettingsContainer$$Validate
// il2cpp: bool Settings_BaseSettingsContainer__Validate (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f0cf30

bool_conflict
Settings_BaseSettingsContainer__Validate
          (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Settings.BaseSettingsContainer$$<RegisterSettings>g__IsTypedSetting|4_0
// il2cpp: bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_4_0 (System_Type_o* settingType, const MethodInfo* method);
// 0x3f0bf10

bool_conflict
Settings_BaseSettingsContainer__<RegisterSettings>g__IsTypedSetting_4_0
          (System_Type_o *settingType,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  char cVar1;
  bool_conflict bVar2;
  System_Type_o *right;
  long *plVar3;
  System_Type_o *left;
  
  if (DAT_05703c6a == '\0') {
    il2cpp_init_method_metadata(&TypeRef_TypedSetting_T);
    DAT_05703c6a = '\x01';
  }
  handle.fields.value = TypeRef_TypedSetting_T.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (settingType != (System_Type_o *)0x0) {
    plVar3 = (long *)(*(settingType->klass->vtable)._116_unknown.methodPtr)
                               (settingType,(settingType->klass->vtable)._116_unknown.method);
    if (plVar3 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return 0;
      }
      plVar3 = (long *)(*(settingType->klass->vtable)._116_unknown.methodPtr)
                                 (settingType,(settingType->klass->vtable)._116_unknown.method);
      if (plVar3 != (long *)0x0) {
        left = (System_Type_o *)
               (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


