// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* items, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x180c8dad0

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* items, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,_country);
  (__this->fields)._localizer = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._localizer,_language);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x18092b6e0

int32_t
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, MethodInfo* method)

{
  System_Single_array *pSVar1;
  
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Single_array *)0x0) {
    return (int32_t)pSVar1->max_length;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_EnabledCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x1818f7970

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    iVar4 = 0;
    uVar3 = 0;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return iVar4;
      }
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      lVar2 = (longlong)(int)uVar3;
      if (pGVar1->m_Items[lVar2] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      uVar3 = uVar3 + 1;
      iVar4 = (iVar4 + 1) - (uint)((pGVar1->m_Items[lVar2]->fields).enabled == false);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Create
// il2cpp: Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x1818f73f0

Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843421df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_1843421df = '\x01';
  }
  if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
      ((node->fields).choiceOptions != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) &&
     (pGVar3 = (node->fields).choiceOptions, pGVar3->max_length != 0)) {
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar2,(MethodInfo *)0x0);
    (pGVar2->fields)._items = pGVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._items,pGVar3);
    (pGVar2->fields)._localizer = localizer;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._localizer,localizer);
    return pGVar2;
  }
  if ((options == (System_String_array *)0x0) || (options->max_length == 0)) {
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (options == (System_String_array *)0x0) {
label_1818f7603:
      ThrowNullReferenceException();
    }
    if ((int)options->max_length == 0) goto label_1818f7609;
    options->m_Items[0] = value;
    Il2CppCodeGenWriteBarrier(options->m_Items,value);
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,
                      (uint32_t)options->max_length);
  uVar4 = 0;
  while( true ) {
    if ((int)options->max_length <= (int)uVar4) {
      pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceOptions)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar2,(MethodInfo *)0x0);
      (pGVar2->fields)._items = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._items,pGVar3);
      (pGVar2->fields)._localizer = localizer;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._localizer,localizer);
      return pGVar2;
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this,(MethodInfo *)0x0);
    if ((uint)options->max_length <= uVar4) break;
    if (__this == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_1818f7603;
    pSVar1 = options->m_Items[(int)uVar4];
    (__this->fields).value = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value,pSVar1);
    if ((uint)options->max_length <= uVar4) break;
    pSVar1 = options->m_Items[(int)uVar4];
    (__this->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,pSVar1);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_1818f7603;
    if ((uint)pGVar3->max_length <= uVar4) break;
    pGVar3->m_Items[(int)uVar4] = __this;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar4,__this);
    uVar4 = uVar4 + 1;
  }
label_1818f7609:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f7720

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  uint uVar2;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (((index < 0) || (uVar2 = (int)pGVar1->max_length - 1, index <= (int)uVar2)) &&
     (uVar2 = index, index < 0)) {
    uVar2 = 0;
  }
  if (uVar2 < (uint)pGVar1->max_length) {
    return pGVar1->m_Items[(int)uVar2];
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Enabled
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f7610

bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  uint uVar2;
  
  if (index < 0) {
    return false;
  }
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    if ((int)pGVar1->max_length <= index) {
      return false;
    }
    uVar2 = (int)pGVar1->max_length - 1;
    if ((int)uVar2 < index) {
      index = uVar2;
    }
    if ((uint)pGVar1->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar1->m_Items[index] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      return (pGVar1->m_Items[index]->fields).enabled;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f78f0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar2;
  bool bVar3;
  uint uVar4;
  System_String_o *pSVar5;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    if (((index < 0) || (uVar4 = (int)pGVar1->max_length - 1, index <= (int)uVar4)) &&
       (uVar4 = index, index < 0)) {
      uVar4 = 0;
    }
    if ((uint)pGVar1->max_length <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    pGVar2 = pGVar1->m_Items[(int)uVar4];
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pGVar2->fields).value,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar5 = (pGVar2->fields).text;
        if (pSVar5 == (System_String_o *)0x0) {
          return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
      }
      else {
        pSVar5 = (pGVar2->fields).value;
      }
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x1818f7770

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  Il2CppObject *obj;
  Il2CppClass *pIVar4;
  System_String_o *fallback;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  ushort uVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_1843421e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_1843421e0 = '\x01';
  }
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    if (((index < 0) || (uVar10 = (int)pGVar2->max_length - 1, index <= (int)uVar10)) &&
       (uVar10 = index, index < 0)) {
      uVar10 = 0;
    }
    if ((uint)pGVar2->max_length <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    pGVar3 = pGVar2->m_Items[(int)uVar10];
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).textKey,(MethodInfo *)0x0);
      if ((bVar6) ||
         ((__this->fields)._localizer == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)) {
        bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).text,(MethodInfo *)0x0);
        if (!bVar6) {
          return (pGVar3->fields).text;
        }
        pSVar8 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value(__this,index,(MethodInfo *)0x0);
        return pSVar8;
      }
      obj = (Il2CppObject *)(__this->fields)._localizer;
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = obj->klass;
        pSVar8 = (pGVar3->fields).textKey;
        fallback = (pGVar3->fields).text;
        uVar1 = (pIVar4->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          uVar9 = 0;
          do {
            if (pIVar5[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
              pVVar7 = pIVar4->vtable + pIVar5[uVar9].offset;
              goto label_1818f7862;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar1);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_1818f7862:
        pSVar8 = (*pVVar7->methodPtr)(obj,pSVar8,fallback,pVVar7->method);
        return pSVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$NextEnabledIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t start, int32_t step, const MethodInfo* method);
// 0x1818f7670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f76e1: mov eax, edx

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t start,int32_t step,
                  MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
label_1818f7713:
    ThrowNullReferenceException();
  }
  iVar4 = 1;
  do {
    if ((int)pGVar1->max_length < iVar4) {
      if ((-1 < start) && (iVar4 = (int)pGVar1->max_length + -1, iVar4 < start)) {
        return iVar4;
      }
      if (start < 0) {
        start = 0;
      }
      return start;
    }
    uVar3 = (iVar4 * step + (int)pGVar1->max_length + start) % (int)pGVar1->max_length;
    if ((-1 < (int)uVar3) && ((int)uVar3 < (int)pGVar1->max_length)) {
      uVar2 = (int)pGVar1->max_length - 1;
      if ((int)uVar3 <= (int)uVar2) {
        uVar2 = uVar3;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar1->m_Items[(int)uVar2] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_1818f7713;
      if ((pGVar1->m_Items[(int)uVar2]->fields).enabled != false) {
        return uVar3;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$ApplyDisabledArrowVisual
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual (UnityEngine_GameObject_o* go, bool enabled, const MethodInfo* method);
// 0x1818f7360

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
               (UnityEngine_GameObject_o *go,bool enabled,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this;
  
  if (Il2CppMethodInitialized_1843421e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421e1 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDisabledSelectableOpacity);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0) {
      Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


