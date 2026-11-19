// Type: Weather.WeatherEvent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherEvent.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// --------------------------------

// Weather.WeatherEvent$$.ctor
// il2cpp: void Weather_WeatherEvent___ctor (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x58575f0

void Weather_WeatherEvent___ctor(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  
  if (Il2CppMethodInitialized_0754507e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_0754507e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).Values = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Values);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            (__this_01,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  (__this->fields).Weights = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weights);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherEvent$$GetValue
// il2cpp: Il2CppObject* Weather_WeatherEvent__GetValue (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x58576b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5857cd8: xor r9d, r9d
// asm:   0x5857cdb: call 0x5de7730  ; Utility_Color255___ctor()
// asm:   0x5857ce0: jmp 0x5857c00

Il2CppObject * Weather_WeatherEvent__GetValue(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_float__o *weights;
  bool bVar3;
  int iVar4;
  int32_t r;
  int32_t iVar5;
  int32_t b;
  int32_t a;
  Il2CppObject *pIVar6;
  Il2CppObject *obj;
  float *pfVar7;
  Utility_Color255_o *__this_00;
  int32_t *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  Il2CppClass *klass;
  float minInclusive;
  float fVar12;
  float fVar13;
  float maxInclusive;
  float maxInclusive_00;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  
  if (Il2CppMethodInitialized_0754507f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754507f = '\x01';
  }
  bVar3 = false;
  iVar4 = 0;
  switch((__this->fields).Action) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
    goto switchD_0585772c_caseD_0;
  case 2:
  case 3:
    iVar10 = 2;
    break;
  default:
    iVar4 = 3;
    bVar3 = false;
    iVar10 = 0;
    switch((__this->fields).Effect) {
    case 1:
    case 4:
    case 6:
    case 7:
    case 9:
      iVar10 = 4;
      goto switchD_05857c37_default;
    case 2:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
      goto switchD_0585772c_caseD_b;
    case 3:
    case 0xe:
      iVar4 = 6;
      bVar3 = true;
      break;
    case 5:
      break;
    default:
      goto switchD_05857c37_default;
    }
    goto switchD_0585772c_caseD_0;
  case 0xb:
  case 0xc:
  case 0xd:
switchD_0585772c_caseD_b:
    iVar10 = 1;
    break;
  case 0xe:
  case 0xf:
  case 0x11:
    iVar10 = 3;
  }
switchD_05857c37_default:
  iVar4 = iVar10;
  bVar3 = false;
switchD_0585772c_caseD_0:
  iVar10 = (__this->fields).ValueSelectType;
  if (iVar10 == 3) {
    pSVar2 = (__this->fields).Values;
    weights = (__this->fields).Weights;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar6 = Utility_Util__GetRandomFromWeightedList(pSVar2,weights,(MethodInfo *)0x0);
    return pIVar6;
  }
  if (iVar10 != 2) {
    if (iVar10 != 1) {
      return (Il2CppObject *)0x0;
    }
    pSVar2 = (__this->fields).Values;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      pIVar6 = System_Collections_Generic_List_object___get_Item
                         (pSVar2,0,(MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_object_get_Item);
      return pIVar6;
    }
label_05857cf1:
    ThrowNullReferenceException();
  }
  if (iVar4 != 4) {
    if (iVar4 == 2) {
      pSVar2 = (__this->fields).Values;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           (pSVar2,0,(MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_object_get_Item);
        pSVar2 = (__this->fields).Values;
        if ((pSVar2 != (System_Collections_Generic_List_object__o *)0x0) &&
           (obj = System_Collections_Generic_List_object___get_Item
                            (pSVar2,1,(MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_object_get_Item),
           pIVar6 != (Il2CppObject *)0x0)) {
          if ((pIVar6->klass->_1).element_class != (g_data_07556710->_1).element_class) {
label_05857cfe:
            il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
          }
          piVar8 = il2cpp_vm_Object_Unbox(pIVar6);
          if (obj != (Il2CppObject *)0x0) {
            if ((obj->klass->_1).element_class == (g_data_07556710->_1).element_class) {
              iVar5 = *piVar8;
              piVar9 = il2cpp_vm_Object_Unbox(obj);
              local_48 = (float)UnityEngine_Random__Range_690e2b0(iVar5,*piVar9 + 1,(MethodInfo *)0x0);
              klass = g_data_07556710;
              goto label_05857bef;
            }
            goto label_05857cf6;
          }
        }
      }
    }
    else if (iVar4 == 1) {
      pSVar2 = (__this->fields).Values;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           (pSVar2,0,(MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_object_get_Item);
        pSVar2 = (__this->fields).Values;
        if ((pSVar2 != (System_Collections_Generic_List_object__o *)0x0) &&
           (obj = System_Collections_Generic_List_object___get_Item
                            (pSVar2,1,(MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_object_get_Item),
           pIVar6 != (Il2CppObject *)0x0)) {
          if ((pIVar6->klass->_1).element_class != (g_data_07556740->_1).element_class) goto label_05857cfe;
          pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
          if (obj != (Il2CppObject *)0x0) {
            if ((obj->klass->_1).element_class != (g_data_07556740->_1).element_class) goto label_05857cf6;
            fVar13 = *pfVar7;
            pfVar7 = il2cpp_vm_Object_Unbox(obj);
            local_48 = UnityEngine_Random__Range(fVar13,*pfVar7,(MethodInfo *)0x0);
            klass = g_data_07556740;
label_05857bef:
            pIVar6 = il2cpp_vm_Object_Box(klass,&local_48);
            return pIVar6;
          }
        }
      }
    }
    else {
      if (!bVar3) {
        return (Il2CppObject *)0x0;
      }
      pSVar2 = (__this->fields).Values;
      if ((pSVar2 != (System_Collections_Generic_List_object__o *)0x0) &&
         (pIVar6 = System_Collections_Generic_List_object___get_Item
                             (pSVar2,0,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item),
         pIVar6 != (Il2CppObject *)0x0)) {
        if ((pIVar6->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
label_05857d0e:
          il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
        }
        pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
        pSVar2 = (__this->fields).Values;
        if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
          fVar13 = *pfVar7;
          maxInclusive = pfVar7[1];
          maxInclusive_00 = pfVar7[2];
          pIVar6 = System_Collections_Generic_List_object___get_Item
                             (pSVar2,1,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if (pIVar6 != (Il2CppObject *)0x0) {
            if ((pIVar6->klass->_1).element_class == (TypeInfo_UnityEngine_Vector3->_1).element_class) {
              pfVar7 = il2cpp_vm_Object_Unbox(pIVar6);
              fVar12 = *pfVar7;
              local_38 = pfVar7[1];
              local_34 = pfVar7[2];
              minInclusive = fVar13;
              if (fVar12 <= fVar13) {
                minInclusive = fVar12;
              }
              if (fVar13 <= fVar12) {
                fVar13 = fVar12;
              }
              fVar12 = UnityEngine_Random__Range(minInclusive,fVar13,(MethodInfo *)0x0);
              fVar13 = maxInclusive;
              if (local_38 <= maxInclusive) {
                fVar13 = local_38;
              }
              if (maxInclusive <= local_38) {
                maxInclusive = local_38;
              }
              local_44 = UnityEngine_Random__Range(fVar13,maxInclusive,(MethodInfo *)0x0);
              fVar13 = maxInclusive_00;
              if (local_34 <= maxInclusive_00) {
                fVar13 = local_34;
              }
              if (maxInclusive_00 <= local_34) {
                maxInclusive_00 = local_34;
              }
              local_40 = UnityEngine_Random__Range(fVar13,maxInclusive_00,(MethodInfo *)0x0);
              klass = (Il2CppClass *)TypeInfo_UnityEngine_Vector3;
              local_48 = fVar12;
              goto label_05857bef;
            }
            goto label_05857d0e;
          }
        }
      }
    }
    goto label_05857cf1;
  }
  pSVar2 = (__this->fields).Values;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_05857cf1;
  pIVar6 = System_Collections_Generic_List_object___get_Item
                     (pSVar2,0,(MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_object_get_Item);
  if (pIVar6 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
    if (((pIVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
    }
  }
  pSVar2 = (__this->fields).Values;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_05857cf1;
  obj = System_Collections_Generic_List_object___get_Item
                  (pSVar2,1,(MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
  if (obj != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255)) {
label_05857cf6:
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  if (pIVar6 == (Il2CppObject *)0x0) goto label_05857cf1;
  if (((*(int *)&pIVar6[1].klass == *(int *)((long)&pIVar6[1].klass + 4)) &&
      (*(int *)&pIVar6[1].klass == *(int *)&pIVar6[1].monitor)) &&
     (*(int *)((long)&pIVar6[1].monitor + 4) == 0xff)) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    if (obj == (Il2CppObject *)0x0) goto label_05857cf1;
    iVar4 = *(int *)&obj[1].klass;
    if (((iVar4 == *(int *)((long)&obj[1].klass + 4)) && (iVar4 == *(int *)&obj[1].monitor)) &&
       (*(int *)((long)&obj[1].monitor + 4) == 0xff)) {
      r = UnityEngine_Random__Range_690e2b0(*(int32_t *)&pIVar6[1].klass,iVar4,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      a = 0xff;
      iVar5 = r;
      b = r;
      goto label_05857cd8;
    }
  }
  else {
    if (obj == (Il2CppObject *)0x0) goto label_05857cf1;
    iVar4 = *(int *)&obj[1].klass;
  }
  iVar10 = *(int *)&pIVar6[1].klass;
  iVar11 = iVar4;
  if (iVar10 < iVar4) {
    iVar11 = iVar10;
  }
  if (iVar4 < iVar10) {
    iVar4 = iVar10;
  }
  r = UnityEngine_Random__Range_690e2b0(iVar11,iVar4,(MethodInfo *)0x0);
  iVar4 = *(int *)((long)&pIVar6[1].klass + 4);
  iVar10 = *(int *)((long)&obj[1].klass + 4);
  iVar11 = iVar10;
  if (iVar4 < iVar10) {
    iVar11 = iVar4;
  }
  if (iVar10 < iVar4) {
    iVar10 = iVar4;
  }
  iVar5 = UnityEngine_Random__Range_690e2b0(iVar11,iVar10,(MethodInfo *)0x0);
  iVar4 = *(int *)&pIVar6[1].monitor;
  iVar10 = *(int *)&obj[1].monitor;
  iVar11 = iVar10;
  if (iVar4 < iVar10) {
    iVar11 = iVar4;
  }
  if (iVar10 < iVar4) {
    iVar10 = iVar4;
  }
  b = UnityEngine_Random__Range_690e2b0(iVar11,iVar10,(MethodInfo *)0x0);
  iVar4 = *(int *)((long)&pIVar6[1].monitor + 4);
  iVar10 = *(int *)((long)&obj[1].monitor + 4);
  iVar11 = iVar10;
  if (iVar4 < iVar10) {
    iVar11 = iVar4;
  }
  if (iVar10 < iVar4) {
    iVar10 = iVar4;
  }
  a = UnityEngine_Random__Range_690e2b0(iVar11,iVar10,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
label_05857cd8:
  Utility_Color255___ctor(__this_00,r,iVar5,b,a,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// Weather.WeatherEvent$$GetValueType
// il2cpp: int32_t Weather_WeatherEvent__GetValueType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x5857d20

int32_t Weather_WeatherEvent__GetValueType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = (__this->fields).Action;
  uVar1 = (ulong)(int)uVar2;
  if ((uVar1 < 0x12) && ((0x3fb7fU >> (uVar2 & 0x1f) & 1) != 0)) {
    puVar3 = &g_data_010a5274;
  }
  else {
    uVar2 = (__this->fields).Effect - 1;
    if (0x10 < uVar2) {
      return 0;
    }
    uVar1 = (ulong)(int)uVar2;
    puVar3 = &g_data_010a52bc;
  }
  return *(int32_t *)(puVar3 + uVar1 * 4);
}


// Weather.WeatherEvent$$GetSettingType
// il2cpp: int32_t Weather_WeatherEvent__GetSettingType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x5857d60

int32_t Weather_WeatherEvent__GetSettingType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = (__this->fields).Action;
  uVar1 = (ulong)(int)uVar2;
  if ((uVar1 < 0x12) && ((0x3fb7fU >> (uVar2 & 0x1f) & 1) != 0)) {
    puVar3 = &g_data_010a5300;
  }
  else {
    uVar2 = (__this->fields).Effect - 1;
    if (0x10 < uVar2) {
      return 0;
    }
    uVar1 = (ulong)(int)uVar2;
    puVar3 = &g_data_010a5348;
  }
  return *(int32_t *)(puVar3 + uVar1 * 4);
}


// Weather.WeatherEvent$$SupportedWeatherEffects
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x5857da0

System_String_array *
Weather_WeatherEvent__SupportedWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_07545080 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((0xc < uVar1) || ((0x16c0U >> (uVar1 & 0x1f) & 1) == 0)) {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar2;
  }
  if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    return TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects;
  }
  return TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects;
}


// Weather.WeatherEvent$$SupportsWeatherEffects
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x5857e30

bool Weather_WeatherEvent__SupportsWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_07545080 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    pSVar2 = TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects;
  }
  else {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int)pSVar2->max_length != 0;
}


// Weather.WeatherEvent$$SupportedWeatherValueSelectTypes
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x5857ec0

System_String_array *
Weather_WeatherEvent__SupportedWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o **targetAddress;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_07545081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherValueSelectType);
    Il2CppMethodInitialized_07545081 = '\x01';
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
switchD_05857f15_caseD_0:
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  default:
    iVar2 = (__this->fields).Effect;
    if ((0xb < iVar2 - 6U) && (3 < iVar2 - 1U)) {
      if (iVar2 != 5) goto switchD_05857f15_caseD_0;
      if ((iVar1 != 0x11) && (iVar1 != 0xf)) goto switchD_05857f15_caseD_e;
      goto switchD_05857f15_caseD_f;
    }
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
    if ((TypeInfo_Weather_WeatherEvent->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
    }
    pSVar3 = TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherValueSelectTypes;
    break;
  case 0xe:
switchD_05857f15_caseD_e:
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    local_40.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = 1;
    pSVar4 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) goto label_05858091;
    if ((int)pSVar3->max_length == 0) goto label_0585808c;
    pSVar3->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    local_28.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
    local_28.monitor = (void *)0xffffffffffffffff;
    local_18 = 3;
    pSVar4 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    if ((pSVar3->max_length & 0xfffffffe) == 0) goto label_0585808c;
    targetAddress = pSVar3->m_Items + 1;
    pSVar3->m_Items[1] = pSVar4;
    goto label_05858079;
  case 0xf:
  case 0x11:
switchD_05857f15_caseD_f:
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    local_40.klass = (System_Enum_c *)TypeInfo_Weather_WeatherValueSelectType;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = 1;
    pSVar4 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
label_05858091:
      ThrowNullReferenceException();
    }
    if ((int)pSVar3->max_length == 0) {
label_0585808c:
      ThrowIndexOutOfRangeException();
    }
    targetAddress = pSVar3->m_Items;
    pSVar3->m_Items[0] = pSVar4;
label_05858079:
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return pSVar3;
}


// Weather.WeatherEvent$$SupportsWeatherValueSelectTypes
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x58580a0

bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  pSVar1 = Weather_WeatherEvent__SupportedWeatherValueSelectTypes(__this,method);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int)pSVar1->max_length != 0;
}


// Weather.WeatherEvent$$.cctor
// il2cpp: void Weather_WeatherEvent___cctor (const MethodInfo* method);
// 0x58580c0

void Weather_WeatherEvent___cctor(MethodInfo *method)

{
  Weather_WeatherEvent_StaticFields *pWVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherValueSelectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_07545082 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_
                     ((MethodInfo_377C980 *)MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherEffect)
  ;
  TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherEvent->static_fields->AllWeatherEffects);
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_
                     ((MethodInfo_377C980 *)
                      MethodInfo_Utility_Util_EnumToStringArrayExceptNone_WeatherValueSelectType);
  pWVar1 = TypeInfo_Weather_WeatherEvent->static_fields;
  pWVar1->AllWeatherValueSelectTypes = pSVar2;
  Il2CppCodeGenWriteBarrier(&pWVar1->AllWeatherValueSelectTypes);
  return;
}


