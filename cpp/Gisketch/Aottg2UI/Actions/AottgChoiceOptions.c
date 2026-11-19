// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* items, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x5398440

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,
               Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *items,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  (__this->fields)._localizer = localizer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._localizer);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x5396350

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int32_t)pGVar1->max_length;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_EnabledCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x5395380

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  int iVar3;
  int iVar4;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    iVar1 = (int)pGVar2->max_length;
    if (iVar1 < 1) {
      return 0;
    }
    iVar4 = 0;
    iVar3 = 0;
    while (pGVar2->m_Items[iVar4] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      iVar3 = iVar3 + (uint)(pGVar2->m_Items[iVar4]->fields).enabled;
      iVar4 = iVar4 + 1;
      if (iVar1 == iVar4) {
        return iVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Create
// il2cpp: Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x5394bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5394d0e: nop 

Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar2;
  System_String_o **ppSVar3;
  il2cpp_array_size_t iVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **targetAddress;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07542b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07542b5e = '\x01';
  }
  if (((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
      (pGVar1 = (node->fields).choiceOptions,
      pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) ||
     (pGVar1->max_length == 0)) {
    if ((options == (System_String_array *)0x0) || (iVar4 = options->max_length, iVar4 == 0)) {
      options = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      if (options == (System_String_array *)0x0) goto label_05394e5d;
      if ((int)options->max_length == 0) goto label_05394e24;
      options->m_Items[0] = value;
      Il2CppCodeGenWriteBarrier(options->m_Items);
      iVar4 = options->max_length;
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,(uint32_t)iVar4);
    if (0 < (int)options->max_length) {
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if ((int)options->max_length == 0) {
label_05394e24:
          ThrowIndexOutOfRangeException();
        }
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          (pGVar2->fields).value = options->m_Items[0];
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
          if ((int)options->max_length == 0) goto label_05394e24;
          (pGVar2->fields).text = options->m_Items[0];
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text);
        }
label_05394e5d:
        ThrowNullReferenceException();
      }
      targetAddress = pGVar1->m_Items;
      ppSVar3 = options->m_Items;
      uVar5 = 0;
      do {
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if ((uint)options->max_length <= uVar5) goto label_05394e24;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_05394e5d;
        (pGVar2->fields).value = *ppSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
        if ((uint)options->max_length <= uVar5) goto label_05394e24;
        (pGVar2->fields).text = *ppSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text);
        if ((uint)pGVar1->max_length <= uVar5) goto label_05394e24;
        *targetAddress = pGVar2;
        Il2CppCodeGenWriteBarrier(targetAddress);
        uVar5 = uVar5 + 1;
        ppSVar3 = ppSVar3 + 1;
        targetAddress = targetAddress + 1;
      } while ((long)uVar5 < (long)(int)options->max_length);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._items = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._items = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  }
  (__this->fields)._localizer = localizer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._localizer);
  return __this;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x5396c10

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  
  pGVar3 = (__this->fields)._items;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pGVar3->max_length;
  uVar1 = uVar2 - 1;
  if (index < (int)uVar1) {
    uVar1 = index;
  }
  uVar4 = 0;
  if (-1 < index) {
    uVar4 = uVar1;
  }
  if (uVar2 <= uVar4) {
    ThrowIndexOutOfRangeException();
  }
  return pGVar3->m_Items[(int)uVar4];
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Enabled
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x5395330

bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  uint uVar3;
  
  if (index < 0) {
    return false;
  }
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    if ((int)uVar1 <= index) {
      return false;
    }
    uVar3 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar3 = index;
    }
    if (uVar1 <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar2->m_Items[(int)uVar3] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      return (pGVar2->m_Items[(int)uVar3]->fields).enabled != false;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x5395240

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar4;
  System_String_o *pSVar5;
  bool bVar6;
  uint uVar7;
  
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    uVar1 = uVar2 - 1;
    if (index < (int)uVar1) {
      uVar1 = index;
    }
    uVar7 = 0;
    if (-1 < index) {
      uVar7 = uVar1;
    }
    if (uVar2 <= uVar7) {
      ThrowIndexOutOfRangeException();
    }
    pGVar4 = pGVar3->m_Items[(int)uVar7];
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).value,(MethodInfo *)0x0);
      if (!bVar6) {
        return (pGVar4->fields).value;
      }
      pSVar5 = (pGVar4->fields).text;
      if (pSVar5 == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x5396a70

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  Il2CppObject *obj;
  System_String_o *key;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  uint uVar9;
  ulong uVar10;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar11;
  uint uVar12;
  long lVar13;
  
  if (Il2CppMethodInitialized_07542b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_07542b5f = '\x01';
  }
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    uVar12 = uVar1 - 1;
    if (index < (int)uVar12) {
      uVar12 = index;
    }
    uVar9 = 0;
    if (-1 < index) {
      uVar9 = uVar12;
    }
    if (uVar1 <= uVar9) {
label_05396c00:
      ThrowIndexOutOfRangeException();
    }
    pGVar3 = pGVar2->m_Items[(int)uVar9];
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).textKey,(MethodInfo *)0x0);
      if ((!bVar6) && (obj = (Il2CppObject *)(__this->fields)._localizer, obj != (Il2CppObject *)0x0)) {
        pSVar8 = (pGVar3->fields).text;
        key = (pGVar3->fields).textKey;
        pIVar4 = obj->klass;
        uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c **)
                 ((long)&pIVar5->interfaceType + lVar13) ==
                TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
              pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_05396bde;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar10 * 0x10 != lVar13);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_05396bde:
        pSVar8 = (*pVVar7->methodPtr)(obj,key,pSVar8,pVVar7->method);
        return pSVar8;
      }
      bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).text,(MethodInfo *)0x0);
      if (!bVar6) {
        return (pGVar3->fields).text;
      }
      pGVar2 = (__this->fields)._items;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        uVar1 = (uint)pGVar2->max_length;
        uVar12 = uVar1 - 1;
        if (index < (int)uVar12) {
          uVar12 = index;
        }
        uVar9 = 0;
        if (-1 < index) {
          uVar9 = uVar12;
        }
        if (uVar1 <= uVar9) goto label_05396c00;
        pGVar3 = pGVar2->m_Items[(int)uVar9];
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).value,(MethodInfo *)0x0);
          if (bVar6) {
            pSVar8 = (pGVar3->fields).text;
            if (pSVar8 != (System_String_o *)0x0) {
              return pSVar8;
            }
            pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)(g_data_07556758 + 0xb8);
          }
          else {
            pGVar11 = &pGVar3->fields;
          }
          return pGVar11->value;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$NextEnabledIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t start, int32_t step, const MethodInfo* method);
// 0x53950a0

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t start,int32_t step,
                  MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
label_0539511c:
    ThrowNullReferenceException();
  }
  uVar5 = (uint)pGVar1->max_length;
  uVar7 = uVar5 - 1;
  if (0 < (int)uVar5) {
    iVar6 = step + start + uVar5;
    iVar3 = 1;
    do {
      uVar4 = iVar6 % (int)uVar5;
      if (-1 < (int)uVar4) {
        uVar2 = uVar4;
        if ((int)uVar7 <= (int)uVar4) {
          uVar2 = uVar7;
        }
        if (uVar5 <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        if (pGVar1->m_Items[(int)uVar2] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto label_0539511c;
        if ((pGVar1->m_Items[(int)uVar2]->fields).enabled != false) {
          return uVar4;
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + step;
    } while (iVar3 <= (int)uVar5);
  }
  if (start < (int)uVar7) {
    uVar7 = start;
  }
  uVar5 = 0;
  if (-1 < start) {
    uVar5 = uVar7;
  }
  return uVar5;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$ApplyDisabledArrowVisual
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual (UnityEngine_GameObject_o* go, bool enabled, const MethodInfo* method);
// 0x5398480

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
               (UnityEngine_GameObject_o *go,bool enabled,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b60 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDisabledSelectableOpacity);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0) {
      Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


