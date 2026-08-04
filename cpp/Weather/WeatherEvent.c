// Type: Weather.WeatherEvent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherEvent.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// --------------------------------

// Weather.WeatherEvent$$.ctor
// il2cpp: void Weather_WeatherEvent___ctor (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406d9e0

void Weather_WeatherEvent___ctor(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  
  if (g_data_057ac2f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    g_data_057ac2f6 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_Object);
  (__this->fields).Values = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Values,__this_00);
  __this_01 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_float);
  System_Collections_Generic_List_float____ctor(__this_01,MethodInfo_List_1_System_Single);
  (__this->fields).Weights = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Weights);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherEvent$$GetValue
// il2cpp: Il2CppObject* Weather_WeatherEvent__GetValue (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406daa0

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
  Weather_WeatherEvent_o *pWVar9;
  Utility_Color255_o *__this_00;
  int32_t *piVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  undefined *puVar14;
  Il2CppObject *unaff_RBP;
  long lVar15;
  Utility_Color255_o *unaff_R14;
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
  
  if (g_data_057ac2f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac2f7 = '\x01';
  }
  uVar13 = (__this->fields).Action;
  uVar7 = (ulong)(int)uVar13;
  if ((uVar7 < 0x12) && ((0x3fb7fU >> (uVar13 & 0x1f) & 1) != 0)) {
    puVar14 = &g_data_00d98fac;
label_0406db31:
    uVar5 = *(undefined4 *)(puVar14 + uVar7 * 4);
  }
  else {
    uVar13 = (__this->fields).Effect - 1;
    uVar5 = 0;
    if (uVar13 < 0x11) {
      uVar7 = (ulong)(int)uVar13;
      puVar14 = &g_data_00d98ff4;
      goto label_0406db31;
    }
  }
  iVar2 = (__this->fields).ValueSelectType;
  if (iVar2 == 3) {
    pSVar4 = (__this->fields).Values;
    weights = (__this->fields).Weights;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
      pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar4,0,MethodInfo_Object_get_Item);
      return pIVar8;
    }
    goto label_0406e0a4;
  }
  __this_00 = (Utility_Color255_o *)0x0;
  unaff_R14 = (Utility_Color255_o *)0x0;
  switch(uVar5) {
  case 1:
    pSVar4 = (__this->fields).Values;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) break;
    unaff_R14 = (Utility_Color255_o *)&MethodInfo_Object_get_Item;
    pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar4,0,MethodInfo_Object_get_Item);
    pSVar4 = (__this->fields).Values;
    if ((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pWVar9 = (Weather_WeatherEvent_o *)
                 System_Collections_Generic_List_object___get_Item(pSVar4,1,MethodInfo_Object_get_Item), unaff_RBP = pIVar8,
       pIVar8 == (Il2CppObject *)0x0)) break;
    unaff_R14 = (Utility_Color255_o *)&g_data_057b9b70;
    if ((pIVar8->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
      pfVar12 = (float *)il2cpp_runtime_helper_02305440(pIVar8);
      __this = pWVar9;
      if (pWVar9 == (Weather_WeatherEvent_o *)0x0) break;
      if ((((Il2CppClass *)pWVar9->klass)->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
        fVar17 = *pfVar12;
        pfVar12 = (float *)il2cpp_runtime_helper_02305440();
        local_48 = UnityEngine_Random__Range(fVar17,*pfVar12,(MethodInfo *)0x0);
        lVar15 = g_data_057b9be8;
label_0406dfeb:
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(lVar15,&local_48);
        return pIVar8;
      }
      goto label_0406e0a9;
    }
    goto label_0406e0b1;
  case 2:
    pSVar4 = (__this->fields).Values;
    if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_R14 = (Utility_Color255_o *)&MethodInfo_Object_get_Item;
      pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar4,0,MethodInfo_Object_get_Item);
      pSVar4 = (__this->fields).Values;
      if ((pSVar4 != (System_Collections_Generic_List_object__o *)0x0) &&
         (pWVar9 = (Weather_WeatherEvent_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar4,1,MethodInfo_Object_get_Item),
         unaff_RBP = pIVar8, pIVar8 != (Il2CppObject *)0x0)) {
        unaff_R14 = (Utility_Color255_o *)&g_data_057b9b70;
        if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_0406e0b1;
        piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar8);
        __this = pWVar9;
        if (pWVar9 != (Weather_WeatherEvent_o *)0x0) {
          if ((((Il2CppClass *)pWVar9->klass)->_1).element_class == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
            iVar6 = *piVar10;
            piVar11 = (int *)il2cpp_runtime_helper_02305440(pWVar9);
            local_48 = (float)UnityEngine_Random__Range_4df2410(iVar6,*piVar11 + 1,(MethodInfo *)0x0);
            lVar15 = g_data_057b9bb8;
            goto label_0406dfeb;
          }
          goto label_0406e0a9;
        }
      }
    }
    break;
  default:
    goto switchD_0406db9a_caseD_3;
  case 4:
    pSVar4 = (__this->fields).Values;
    unaff_R14 = __this_00;
    if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
      pIVar8 = (Il2CppObject *)&MethodInfo_Object_get_Item;
      unaff_R14 = (Utility_Color255_o *)
                  System_Collections_Generic_List_object___get_Item(pSVar4,0,MethodInfo_Object_get_Item);
      if (unaff_R14 != (Utility_Color255_o *)0x0) {
        bVar1 = (TypeInfo_Color255->_2).naturalAligment;
        if (((((Il2CppClass *)unaff_R14->klass)->_2).naturalAligment < bVar1) ||
           ((((Il2CppClass *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255))
        goto label_0406e0c1;
      }
      pSVar4 = (__this->fields).Values;
      unaff_RBP = pIVar8;
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        pWVar9 = (Weather_WeatherEvent_o *)
                 System_Collections_Generic_List_object___get_Item(pSVar4,1,MethodInfo_Object_get_Item);
        if (pWVar9 != (Weather_WeatherEvent_o *)0x0) {
          bVar1 = (TypeInfo_Color255->_2).naturalAligment;
          if (((((Il2CppClass *)pWVar9->klass)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)pWVar9->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255))
          goto label_0406e0a9;
        }
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = pWVar9;
        unaff_RBP = (Il2CppObject *)&TypeInfo_MiscExtensions;
        if (unaff_R14 != (Utility_Color255_o *)0x0) {
          iVar2 = (unaff_R14->fields).R;
          if (((iVar2 == (unaff_R14->fields).G) && (iVar2 == (unaff_R14->fields).B)) &&
             ((unaff_R14->fields).A == 0xff)) {
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (pWVar9 != (Weather_WeatherEvent_o *)0x0) {
              iVar2 = (pWVar9->fields).Action;
              if (((iVar2 != (pWVar9->fields).Effect) || (iVar2 != (pWVar9->fields).ValueSelectType)) ||
                 (*(int *)&(pWVar9->fields).field_0xc != 0xff)) goto label_0406e006;
              r = UnityEngine_Random__Range_4df2410((unaff_R14->fields).R,iVar2,(MethodInfo *)0x0);
              __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              iVar6 = 0xff;
              g = r;
              b = r;
label_0406e08a:
              Utility_Color255___ctor(__this_00,r,g,b,iVar6,(MethodInfo *)0x0);
switchD_0406db9a_caseD_3:
              return (Il2CppObject *)__this_00;
            }
          }
          else if (pWVar9 != (Weather_WeatherEvent_o *)0x0) {
label_0406e006:
            iVar2 = (unaff_R14->fields).R;
            iVar3 = (pWVar9->fields).Action;
            iVar6 = iVar3;
            if (iVar2 <= iVar3) {
              iVar6 = iVar2;
            }
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            r = UnityEngine_Random__Range_4df2410(iVar6,iVar3,(MethodInfo *)0x0);
            iVar2 = (unaff_R14->fields).G;
            iVar3 = (pWVar9->fields).Effect;
            iVar6 = iVar3;
            if (iVar2 <= iVar3) {
              iVar6 = iVar2;
            }
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            g = UnityEngine_Random__Range_4df2410(iVar6,iVar3,(MethodInfo *)0x0);
            iVar2 = (unaff_R14->fields).B;
            iVar3 = (pWVar9->fields).ValueSelectType;
            iVar6 = iVar3;
            if (iVar2 <= iVar3) {
              iVar6 = iVar2;
            }
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            b = UnityEngine_Random__Range_4df2410(iVar6,iVar3,(MethodInfo *)0x0);
            iVar2 = (unaff_R14->fields).A;
            iVar3 = *(int *)&(pWVar9->fields).field_0xc;
            iVar6 = iVar3;
            if (iVar2 <= iVar3) {
              iVar6 = iVar2;
            }
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            iVar6 = UnityEngine_Random__Range_4df2410(iVar6,iVar3,(MethodInfo *)0x0);
            __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            goto label_0406e08a;
          }
        }
      }
    }
    break;
  case 6:
    pSVar4 = (__this->fields).Values;
    unaff_R14 = __this_00;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) break;
    pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar4,0,MethodInfo_Object_get_Item);
    unaff_RBP = (Il2CppObject *)&MethodInfo_Object_get_Item;
    if (pIVar8 == (Il2CppObject *)0x0) break;
    unaff_R14 = (Utility_Color255_o *)&TypeInfo_Vector3;
    if ((pIVar8->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
      pfVar12 = (float *)il2cpp_runtime_helper_02305440(pIVar8);
      pSVar4 = (__this->fields).Values;
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        fVar17 = *pfVar12;
        maxInclusive = pfVar12[1];
        maxInclusive_00 = pfVar12[2];
        pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar4,1,MethodInfo_Object_get_Item);
        if (pIVar8 != (Il2CppObject *)0x0) {
          if ((pIVar8->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
            pfVar12 = (float *)il2cpp_runtime_helper_02305440();
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
            goto label_0406dfeb;
          }
          goto label_0406e0b9;
        }
      }
      break;
    }
    goto label_0406e0b9;
  }
label_0406e0a4:
  il2cpp_runtime_helper_022b2c90();
  pWVar9 = __this;
  pIVar8 = unaff_RBP;
label_0406e0a9:
  il2cpp_runtime_helper_022b2fd0(pWVar9);
label_0406e0b1:
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2fd0(pIVar8);
label_0406e0b9:
  il2cpp_runtime_helper_022b2fd0(pIVar8);
label_0406e0c1:
  il2cpp_runtime_helper_022b2fd0();
  uVar13 = (unaff_R14->fields).R;
  if (((ulong)(long)(int)uVar13 < 0x12) && ((0x3fb7fU >> (uVar13 & 0x1f) & 1) != 0)) {
    return (Il2CppObject *)(ulong)*(uint *)(&g_data_00d98fac + (long)(int)uVar13 * 4);
  }
  uVar13 = (unaff_R14->fields).G - 1;
  if (0x10 < uVar13) {
    return (Il2CppObject *)0x0;
  }
  return (Il2CppObject *)(ulong)*(uint *)(&g_data_00d98ff4 + (long)(int)uVar13 * 4);
}


// Weather.WeatherEvent$$GetValueType
// il2cpp: int32_t Weather_WeatherEvent__GetValueType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e0d0

int32_t Weather_WeatherEvent__GetValueType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).Action;
  if (((ulong)(long)(int)uVar1 < 0x12) && ((0x3fb7fU >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(int32_t *)(&g_data_00d98fac + (long)(int)uVar1 * 4);
  }
  uVar1 = (__this->fields).Effect - 1;
  if (uVar1 < 0x11) {
    return *(int32_t *)(&g_data_00d98ff4 + (long)(int)uVar1 * 4);
  }
  return 0;
}


// Weather.WeatherEvent$$GetSettingType
// il2cpp: int32_t Weather_WeatherEvent__GetSettingType (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e110

int32_t Weather_WeatherEvent__GetSettingType(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).Action;
  if (((ulong)(long)(int)uVar1 < 0x12) && ((0x3fb7fU >> (uVar1 & 0x1f) & 1) != 0)) {
    return *(int32_t *)(&g_data_00d99038 + (long)(int)uVar1 * 4);
  }
  uVar1 = (__this->fields).Effect - 1;
  if (uVar1 < 0x11) {
    return *(int32_t *)(&g_data_00d99080 + (long)(int)uVar1 * 4);
  }
  return 0;
}


// Weather.WeatherEvent$$SupportedWeatherEffects
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e150

System_String_array *
Weather_WeatherEvent__SupportedWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  if (g_data_057ac2f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac2f8 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) != 0) {
      return (System_String_array *)**(undefined8 **)(TypeInfo_WeatherEvent + 0xb8);
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_array *)**(undefined8 **)(TypeInfo_WeatherEvent + 0xb8);
  }
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar2;
}


// Weather.WeatherEvent$$SupportsWeatherEffects
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherEffects (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e1e0

bool_conflict Weather_WeatherEvent__SupportsWeatherEffects(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool_conflict bVar4;
  long lVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  Weather_WeatherEvent_o *__this_00;
  undefined1 auStack_48 [32];
  System_Collections_Generic_List_object__o *pSStack_28;
  undefined4 uStack_20;
  Weather_WeatherEvent_o *pWStack_18;
  
  if (g_data_057ac2f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac2f8 = '\x01';
  }
  uVar1 = (__this->fields).Action;
  if ((uVar1 < 0xd) && ((0x16c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    __this = (Weather_WeatherEvent_o *)&TypeInfo_WeatherEvent;
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = **(long **)(TypeInfo_WeatherEvent + 0xb8);
    lVar8 = TypeInfo_WeatherEvent;
  }
  else {
    lVar8 = TypeInfo_string;
    lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  }
  if (lVar5 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar5 >> 8),*(int *)(lVar5 + 0x18) != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pWStack_18 = __this;
  if (g_data_057ac2f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherValueSelectType);
    g_data_057ac2f9 = '\x01';
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  switch(iVar2) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
switchD_0406e2c5_caseD_0:
    bVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return bVar4;
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
switchD_0406e2c5_caseD_2:
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return (bool_conflict)*(undefined8 *)(*(long *)(TypeInfo_WeatherEvent + 0xb8) + 8);
  case 0xe:
switchD_0406e2c5_caseD_e:
    lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    auStack_48._0_8_ = TypeInfo_WeatherValueSelectType;
    auStack_48._8_8_ = (void *)0xffffffffffffffff;
    auStack_48._16_4_ = 1;
    __this_00 = (Weather_WeatherEvent_o *)auStack_48;
    method_00 = (MethodInfo *)0x0;
    pSVar6 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
    if (lVar5 == 0) goto label_0406e43e;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(System_String_o **)(lVar5 + 0x20) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar5 + 0x20);
      auStack_48._24_8_ = TypeInfo_WeatherValueSelectType;
      pSStack_28 = (System_Collections_Generic_List_object__o *)0xffffffffffffffff;
      uStack_20 = 3;
      __this_00 = (Weather_WeatherEvent_o *)(auStack_48 + 0x18);
      method_00 = (MethodInfo *)0x0;
      pSVar6 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
      if (1 < *(uint *)(lVar5 + 0x18)) {
        lVar8 = lVar5 + 0x28;
        *(System_String_o **)(lVar5 + 0x28) = pSVar6;
        goto label_0406e426;
      }
    }
    goto label_0406e439;
  case 0xf:
  case 0x11:
    goto switchD_0406e2c5_caseD_f;
  }
  iVar3 = *(int *)(lVar8 + 0x14);
  if ((iVar3 - 6U < 0xc) || (iVar3 - 1U < 4)) goto switchD_0406e2c5_caseD_2;
  if (iVar3 != 5) goto switchD_0406e2c5_caseD_0;
  if ((iVar2 != 0x11) && (iVar2 != 0xf)) goto switchD_0406e2c5_caseD_e;
switchD_0406e2c5_caseD_f:
  lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  auStack_48._0_8_ = TypeInfo_WeatherValueSelectType;
  auStack_48._8_8_ = (void *)0xffffffffffffffff;
  auStack_48._16_4_ = 1;
  __this_00 = (Weather_WeatherEvent_o *)auStack_48;
  method_00 = (MethodInfo *)0x0;
  pSVar6 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      lVar8 = lVar5 + 0x20;
      *(System_String_o **)(lVar5 + 0x20) = pSVar6;
label_0406e426:
      il2cpp_runtime_helper_022b4080(lVar8,pSVar6);
      return (bool_conflict)lVar5;
    }
label_0406e439:
    il2cpp_runtime_helper_022b2ca0();
  }
label_0406e43e:
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = Weather_WeatherEvent__SupportedWeatherValueSelectTypes(__this_00,method_00);
  if (pSVar7 != (System_String_array *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar7 >> 8),(int)pSVar7->max_length != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac2fa = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
  **(undefined8 **)(TypeInfo_WeatherEvent + 0xb8) = pSVar7;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherEvent + 0xb8),pSVar7);
  pSVar7 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
  lVar5 = *(long *)(TypeInfo_WeatherEvent + 0xb8);
  *(System_String_array **)(lVar5 + 8) = pSVar7;
  bVar4 = il2cpp_runtime_helper_022b4080(lVar5 + 8,pSVar7);
  return bVar4;
}


// Weather.WeatherEvent$$SupportedWeatherValueSelectTypes
// il2cpp: System_String_array* Weather_WeatherEvent__SupportedWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e270

System_String_array *
Weather_WeatherEvent__SupportedWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  long lVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  Weather_WeatherEvent_o *__this_00;
  System_String_o **ppSVar6;
  undefined1 local_40 [24];
  Weather_WeatherEvent_c *local_28;
  System_Collections_Generic_List_object__o *local_20;
  int32_t local_18;
  
  if (g_data_057ac2f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherValueSelectType);
    g_data_057ac2f9 = '\x01';
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
switchD_0406e2c5_caseD_0:
    pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return pSVar4;
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
switchD_0406e2c5_caseD_2:
    if (*(int *)(TypeInfo_WeatherEvent + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return *(System_String_array **)(*(long *)(TypeInfo_WeatherEvent + 0xb8) + 8);
  case 0xe:
switchD_0406e2c5_caseD_e:
    pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    local_40._0_8_ = TypeInfo_WeatherValueSelectType;
    local_40._8_8_ = (void *)0xffffffffffffffff;
    local_40._16_4_ = 1;
    __this_00 = (Weather_WeatherEvent_o *)local_40;
    method_00 = (MethodInfo *)0x0;
    pSVar5 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) goto label_0406e43e;
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = pSVar5;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
      local_28 = TypeInfo_WeatherValueSelectType;
      local_20 = (System_Collections_Generic_List_object__o *)0xffffffffffffffff;
      local_18 = 3;
      __this_00 = (Weather_WeatherEvent_o *)&stack0xffffffffffffffd8;
      method_00 = (MethodInfo *)0x0;
      pSVar5 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
      if (1 < (uint)pSVar4->max_length) {
        ppSVar6 = pSVar4->m_Items + 1;
        pSVar4->m_Items[1] = pSVar5;
        goto label_0406e426;
      }
    }
    goto label_0406e439;
  case 0xf:
  case 0x11:
    goto switchD_0406e2c5_caseD_f;
  }
  iVar2 = (__this->fields).Effect;
  if ((iVar2 - 6U < 0xc) || (iVar2 - 1U < 4)) goto switchD_0406e2c5_caseD_2;
  if (iVar2 != 5) goto switchD_0406e2c5_caseD_0;
  if ((iVar1 != 0x11) && (iVar1 != 0xf)) goto switchD_0406e2c5_caseD_e;
switchD_0406e2c5_caseD_f:
  pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  local_40._0_8_ = TypeInfo_WeatherValueSelectType;
  local_40._8_8_ = (void *)0xffffffffffffffff;
  local_40._16_4_ = 1;
  __this_00 = (Weather_WeatherEvent_o *)local_40;
  method_00 = (MethodInfo *)0x0;
  pSVar5 = System_Enum__ToString((System_Enum_o *)__this_00,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_array *)0x0) {
    if ((int)pSVar4->max_length != 0) {
      ppSVar6 = pSVar4->m_Items;
      pSVar4->m_Items[0] = pSVar5;
label_0406e426:
      il2cpp_runtime_helper_022b4080(ppSVar6,pSVar5);
      return pSVar4;
    }
label_0406e439:
    il2cpp_runtime_helper_022b2ca0();
  }
label_0406e43e:
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = Weather_WeatherEvent__SupportedWeatherValueSelectTypes(__this_00,method_00);
  if (pSVar4 == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac2fa == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
      g_data_057ac2fa = '\x01';
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
    **(undefined8 **)(TypeInfo_WeatherEvent + 0xb8) = pSVar4;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherEvent + 0xb8),pSVar4);
    pSVar4 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
    lVar3 = *(long *)(TypeInfo_WeatherEvent + 0xb8);
    *(System_String_array **)(lVar3 + 8) = pSVar4;
    pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b4080(lVar3 + 8,pSVar4);
    return pSVar4;
  }
  return (System_String_array *)CONCAT71((int7)((ulong)pSVar4 >> 8),(int)pSVar4->max_length != 0);
}


// Weather.WeatherEvent$$SupportsWeatherValueSelectTypes
// il2cpp: bool Weather_WeatherEvent__SupportsWeatherValueSelectTypes (Weather_WeatherEvent_o* __this, const MethodInfo* method);
// 0x406e450

bool_conflict
Weather_WeatherEvent__SupportsWeatherValueSelectTypes(Weather_WeatherEvent_o *__this,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  
  pSVar3 = Weather_WeatherEvent__SupportedWeatherValueSelectTypes(__this,method);
  if (pSVar3 != (System_String_array *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar3 >> 8),(int)pSVar3->max_length != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac2fa = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
  **(undefined8 **)(TypeInfo_WeatherEvent + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherEvent + 0xb8),pSVar3);
  pSVar3 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
  lVar1 = *(long *)(TypeInfo_WeatherEvent + 0xb8);
  *(System_String_array **)(lVar1 + 8) = pSVar3;
  bVar2 = il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  return bVar2;
}


// Weather.WeatherEvent$$.cctor
// il2cpp: void Weather_WeatherEvent___cctor (const MethodInfo* method);
// 0x406e470

void Weather_WeatherEvent___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_array *pSVar2;
  
  if (g_data_057ac2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac2fa = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherEffect);
  **(undefined8 **)(TypeInfo_WeatherEvent + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherEvent + 0xb8),pSVar2);
  pSVar2 = Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_String_EnumToStringArrayExceptNone_WeatherValueSelectTyp);
  lVar1 = *(long *)(TypeInfo_WeatherEvent + 0xb8);
  *(System_String_array **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


