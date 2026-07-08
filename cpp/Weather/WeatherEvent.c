// Type: Weather.WeatherEvent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/WeatherEvent.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/WeatherEvent.cs  [CHANGED since prior version]
// --------------------------------

// Weather.WeatherEvent$$.ctor
// il2cpp: void Weather_WeatherEvent___ctor (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78090

void Weather_WeatherEvent___ctor(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  
  if (DAT_05702646 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_List_float);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    DAT_05702646 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_Object);
  (__this->fields).Values = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Values,__this_00);
  __this_01 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_glue(TypeInfo_List_float);
  System_Collections_Generic_List<float>___ctor(__this_01,MethodInfo_List_1_System_Single);
  (__this->fields).Weights = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Weights);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherEvent$$GetValue
// il2cpp: Il2CppObject* Weather_WeatherEvent__GetValue (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78150

Il2CppObject * Weather_WeatherEvent__GetValue(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Collections_Generic_List_float__o *weights;
  undefined4 uVar5;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t iVar6;
  ulong uVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  Utility_Color255_o *__this_00;
  int32_t *piVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  undefined *puVar14;
  long lVar15;
  float minInclusive;
  float fVar16;
  float fVar17;
  float maxInclusive;
  float maxInclusive_00;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  
  if (DAT_05702647 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702647 = '\x01';
  }
  uVar13 = (__this->fields).Action;
  uVar7 = (ulong)(int)uVar13;
  if ((uVar7 < 0x12) && ((0x3fb7fU >> (uVar13 & 0x1f) & 1) != 0)) {
    puVar14 = &DAT_00d81938;
LAB_03d781e1:
    uVar5 = *(undefined4 *)(puVar14 + uVar7 * 4);
  }
  else {
    uVar13 = (__this->fields).Effect - 1;
    uVar5 = 0;
    if (uVar13 < 0x11) {
      uVar7 = (ulong)(int)uVar13;
      puVar14 = &DAT_00d81980;
      goto LAB_03d781e1;
    }
  }
  iVar2 = (__this->fields).ValueSelectType;
  if (iVar2 == 3) {
    pSVar4 = (__this->fields).Values;
    weights = (__this->fields).Weights;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar8 = Utility_Util__GetRandomFromWeightedList(pSVar4,weights,(MethodInfo *)0x0);
    return pIVar8;
  }
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      return (Il2CppObject *)0x0;
    }
    pSVar4 = (__this->fields).Values;
    if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
      pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,0,MethodInfo_Object_get_Item);
      return pIVar8;
    }
    goto LAB_03d78754;
  }
  pIVar8 = (Il2CppObject *)0x0;
  switch(uVar5) {
  case 1:
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03d78754:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,0,MethodInfo_Object_get_Item);
    pSVar4 = (__this->fields).Values;
    if ((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar9 = System_Collections_Generic_List<object>__get_Item(pSVar4,1,MethodInfo_Object_get_Item),
       pIVar8 == (Il2CppObject *)0x0)) goto LAB_03d78754;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40)) {
LAB_03d78761:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar8);
    }
    pfVar12 = (float *)il2cpp_glue_022c7330(pIVar8);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03d78754;
    if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40))
    goto LAB_03d78759;
    fVar17 = *pfVar12;
    pfVar12 = (float *)il2cpp_glue_022c7330();
    local_48 = UnityEngine_Random__Range(fVar17,*pfVar12,(MethodInfo *)0x0);
    lVar15 = DAT_05711098;
    break;
  case 2:
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d78754;
    pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,0,MethodInfo_Object_get_Item);
    pSVar4 = (__this->fields).Values;
    if ((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar9 = System_Collections_Generic_List<object>__get_Item(pSVar4,1,MethodInfo_Object_get_Item),
       pIVar8 == (Il2CppObject *)0x0)) goto LAB_03d78754;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03d78761;
    piVar10 = (int32_t *)il2cpp_glue_022c7330(pIVar8);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03d78754;
    if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03d78759;
    iVar6 = *piVar10;
    piVar11 = (int *)il2cpp_glue_022c7330(pIVar9);
    local_48 = (float)UnityEngine_Random__Range(iVar6,*piVar11 + 1,(MethodInfo *)0x0);
    lVar15 = DAT_05711068;
    break;
  default:
    goto switchD_03d7824a_caseD_3;
  case 4:
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d78754;
    pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,0,MethodInfo_Object_get_Item);
    if (pIVar8 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_Color255->_2).naturalAligment;
      if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
         ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar8);
      }
    }
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d78754;
    pIVar9 = System_Collections_Generic_List<object>__get_Item(pSVar4,1,MethodInfo_Object_get_Item);
    if (pIVar9 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_Color255->_2).naturalAligment;
      if (((pIVar9->klass->_2).naturalAligment < bVar1) ||
         ((pIVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255)) {
LAB_03d78759:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar9);
      }
    }
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03d78754;
    if (((*(int *)&pIVar8[1].klass == *(int *)((long)&pIVar8[1].klass + 4)) &&
        (*(int *)&pIVar8[1].klass == *(int *)&pIVar8[1].monitor)) &&
       (*(int *)((long)&pIVar8[1].monitor + 4) == 0xff)) {
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03d78754;
      iVar2 = *(int *)&pIVar9[1].klass;
      if (((iVar2 == *(int *)((long)&pIVar9[1].klass + 4)) && (iVar2 == *(int *)&pIVar9[1].monitor))
         && (*(int *)((long)&pIVar9[1].monitor + 4) == 0xff)) {
        r = UnityEngine_Random__Range(*(int32_t *)&pIVar8[1].klass,iVar2,(MethodInfo *)0x0);
        __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        iVar6 = 0xff;
        g = r;
        b = r;
        goto LAB_03d7873a;
      }
    }
    else if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03d78754;
    iVar2 = *(int *)&pIVar8[1].klass;
    iVar3 = *(int *)&pIVar9[1].klass;
    iVar6 = iVar3;
    if (iVar2 <= iVar3) {
      iVar6 = iVar2;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    r = UnityEngine_Random__Range(iVar6,iVar3,(MethodInfo *)0x0);
    iVar2 = *(int *)((long)&pIVar8[1].klass + 4);
    iVar3 = *(int *)((long)&pIVar9[1].klass + 4);
    iVar6 = iVar3;
    if (iVar2 <= iVar3) {
      iVar6 = iVar2;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    g = UnityEngine_Random__Range(iVar6,iVar3,(MethodInfo *)0x0);
    iVar2 = *(int *)&pIVar8[1].monitor;
    iVar3 = *(int *)&pIVar9[1].monitor;
    iVar6 = iVar3;
    if (iVar2 <= iVar3) {
      iVar6 = iVar2;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    b = UnityEngine_Random__Range(iVar6,iVar3,(MethodInfo *)0x0);
    iVar2 = *(int *)((long)&pIVar8[1].monitor + 4);
    iVar3 = *(int *)((long)&pIVar9[1].monitor + 4);
    iVar6 = iVar3;
    if (iVar2 <= iVar3) {
      iVar6 = iVar2;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar6 = UnityEngine_Random__Range(iVar6,iVar3,(MethodInfo *)0x0);
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
LAB_03d7873a:
    Utility_Color255___ctor(__this_00,r,g,b,iVar6,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  case 6:
    pSVar4 = (__this->fields).Values;
    if ((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,0,MethodInfo_Object_get_Item),
       pIVar8 == (Il2CppObject *)0x0)) goto LAB_03d78754;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
LAB_03d78769:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar8);
    }
    pfVar12 = (float *)il2cpp_glue_022c7330(pIVar8);
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d78754;
    fVar17 = *pfVar12;
    maxInclusive = pfVar12[1];
    maxInclusive_00 = pfVar12[2];
    pIVar8 = System_Collections_Generic_List<object>__get_Item(pSVar4,1,MethodInfo_Object_get_Item);
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03d78754;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40))
    goto LAB_03d78769;
    pfVar12 = (float *)il2cpp_glue_022c7330();
    fVar16 = *pfVar12;
    local_38 = pfVar12[1];
    local_34 = pfVar12[2];
    minInclusive = fVar17;
    if (fVar16 <= fVar17) {
      minInclusive = fVar16;
    }
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
    }
    fVar16 = UnityEngine_Random__Range(minInclusive,fVar17,(MethodInfo *)0x0);
    fVar17 = maxInclusive;
    if (local_38 <= maxInclusive) {
      fVar17 = local_38;
    }
    if (maxInclusive <= local_38) {
      maxInclusive = local_38;
    }
    local_44 = UnityEngine_Random__Range(fVar17,maxInclusive,(MethodInfo *)0x0);
    fVar17 = maxInclusive_00;
    if (local_34 <= maxInclusive_00) {
      fVar17 = local_34;
    }
    if (maxInclusive_00 <= local_34) {
      maxInclusive_00 = local_34;
    }
    local_40 = UnityEngine_Random__Range(fVar17,maxInclusive_00,(MethodInfo *)0x0);
    lVar15 = TypeInfo_Vector3;
    local_48 = fVar16;
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(lVar15,&local_48);
switchD_03d7824a_caseD_3:
  return pIVar8;
}


// Weather.WeatherEvent$$GetValueType
// il2cpp: int32_t Weather_WeatherEvent__GetValueType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78780

int32_t Weather_WeatherEvent__GetValueType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).Action;
  if (((ulong)(long)(int)uVar1 < 0x12) && ((0x3fb7fU >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(int32_t *)(&DAT_00d81938 + (long)(int)uVar1 * 4);
  }
  uVar1 = (__this->fields).Effect - 1;
  if (uVar1 < 0x11) {
    return *(int32_t *)(&DAT_00d81980 + (long)(int)uVar1 * 4);
  }
  return 0;
}


// Weather.WeatherEvent$$GetSettingType
// il2cpp: int32_t Weather_WeatherEvent__GetSettingType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d787c0

int32_t Weather_WeatherEvent__GetSettingType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).Action;
  if (((ulong)(long)(int)uVar1 < 0x12) && ((0x3fb7fU >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(int32_t *)(&DAT_00d819c4 + (long)(int)uVar1 * 4);
  }
  uVar1 = (__this->fields).Effect - 1;
  if (uVar1 < 0x11) {
    return *(int32_t *)(&DAT_00d81a0c + (long)(int)uVar1 * 4);
  }
  return 0;
}


// Weather.WeatherEvent$$SupportedWeatherEffects
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78800

System_String_array *
Weather_WeatherEvent__SupportedWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  if (DAT_05702648 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    DAT_05702648 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) != 0) {
      return (System_String_array *)**(undefined8 **)(TypeInfo_WeatherEvent + 0xb8);
    }
    il2cpp_init_class();
    return (System_String_array *)**(undefined8 **)(TypeInfo_WeatherEvent + 0xb8);
  }
  pSVar2 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  return pSVar2;
}


// Weather.WeatherEvent$$SupportsWeatherEffects
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78890

bool_conflict
Weather_WeatherEvent__SupportsWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_05702648 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    DAT_05702648 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = **(long **)(TypeInfo_WeatherEvent + 0xb8);
  }
  else {
    lVar2 = il2cpp_glue_02274930(TypeInfo_string,0);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(int *)(lVar2 + 0x18) != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherEvent$$SupportedWeatherValueSelectTypes
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78920

System_String_array *
Weather_WeatherEvent__SupportedWeatherValueSelectTypes
          (Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (DAT_05702649 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    il2cpp_init_method_metadata(&TypeInfo_WeatherValueSelectType);
    DAT_05702649 = '\x01';
  }
  iVar1 = (__this->fields).Action;
  switch(iVar1) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
switchD_03d78975_caseD_0:
    pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
    return pSVar3;
  default:
    iVar2 = (__this->fields).Effect;
    if ((0xb < iVar2 - 6U) && (3 < iVar2 - 1U)) {
      if (iVar2 != 5) goto switchD_03d78975_caseD_0;
      if ((iVar1 != 0x11) && (iVar1 != 0xf)) goto switchD_03d78975_caseD_e;
      goto switchD_03d78975_caseD_f;
    }
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_String_array **)(*(long *)(TypeInfo_WeatherEvent + 0xb8) + 8);
    break;
  case 0xe:
switchD_03d78975_caseD_e:
    pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    local_40.klass = TypeInfo_WeatherValueSelectType;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = 1;
    pSVar4 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) goto LAB_03d78aee;
    if ((int)pSVar3->max_length == 0) goto LAB_03d78ae9;
    pSVar3->m_Items[0] = pSVar4;
    il2cpp_runtime_glue(pSVar3->m_Items);
    local_28.klass = TypeInfo_WeatherValueSelectType;
    local_28.monitor = (void *)0xffffffffffffffff;
    local_18 = 3;
    pSVar4 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    if ((uint)pSVar3->max_length < 2) goto LAB_03d78ae9;
    ppSVar5 = pSVar3->m_Items + 1;
    pSVar3->m_Items[1] = pSVar4;
    goto LAB_03d78ad6;
  case 0xf:
  case 0x11:
switchD_03d78975_caseD_f:
    pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    local_40.klass = TypeInfo_WeatherValueSelectType;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = 1;
    pSVar4 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
LAB_03d78aee:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar3->max_length == 0) {
LAB_03d78ae9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar5 = pSVar3->m_Items;
    pSVar3->m_Items[0] = pSVar4;
LAB_03d78ad6:
    il2cpp_runtime_glue(ppSVar5,pSVar4);
  }
  return pSVar3;
}


// Weather.WeatherEvent$$SupportsWeatherValueSelectTypes
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x3d78b00

bool_conflict
Weather_WeatherEvent__SupportsWeatherValueSelectTypes
          (Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  pSVar1 = Weather_WeatherEvent__SupportedWeatherValueSelectTypes(__this,method);
  if (pSVar1 != (System_String_array *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(int)pSVar1->max_length != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherEvent$$.cctor
// il2cpp: void Weather_WeatherEvent___cctor (const MethodInfo* method);
// 0x3d78b20

void Weather_WeatherEvent___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_array *pSVar2;
  
  if (DAT_0570264a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___EnumToStringArrayExceptNone_WeatherEffe);
    il2cpp_init_method_metadata(&MethodInfo_String___EnumToStringArrayExceptNone_WeatherValu);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    DAT_0570264a = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone<Int32Enum>(MethodInfo_String___EnumToStringArrayExceptNone_WeatherEffe);
  **(undefined8 **)(TypeInfo_WeatherEvent + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_WeatherEvent + 0xb8),pSVar2);
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone<Int32Enum>(MethodInfo_String___EnumToStringArrayExceptNone_WeatherValu);
  lVar1 = *(long *)(TypeInfo_WeatherEvent + 0xb8);
  *(System_String_array **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


