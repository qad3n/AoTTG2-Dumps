// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptions.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* items, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b21860

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,
               Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *items,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = items;
  il2cpp_runtime_glue(&__this->fields,items);
  (__this->fields)._localizer = localizer;
  il2cpp_runtime_glue(&(__this->fields)._localizer,localizer);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x3b1f7e0

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    return (int32_t)pGVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_EnabledCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x3b1e850

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  int iVar3;
  uint uVar4;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    if ((int)uVar1 < 1) {
      return 0;
    }
    uVar4 = 0;
    iVar3 = 0;
    while( true ) {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pGVar2->m_Items[(int)uVar4] ==
          (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      iVar3 = iVar3 + (uint)(byte)(pGVar2->m_Items[(int)uVar4]->fields).enabled;
      uVar4 = uVar4 + 1;
      if ((int)uVar1 <= (int)uVar4) {
        return iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Create
// il2cpp: Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b1e190

Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
          System_String_array *options,
          Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar2;
  System_String_o **ppSVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **ppGVar4;
  ulong uVar5;
  
  if (DAT_0570157a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgChoiceOptions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_0570157a = '\x01';
  }
  if (((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
      (pGVar1 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                (node->fields).options,
      pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) ||
     (pGVar1->max_length == 0)) {
    if ((options == (System_String_array *)0x0) || (options->max_length == 0)) {
      options = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      if (options == (System_String_array *)0x0) goto LAB_03b1e42b;
      if ((int)options->max_length == 0) goto LAB_03b1e411;
      options->m_Items[0] = value;
      il2cpp_runtime_glue(options->m_Items,value);
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchChoiceOptionDefinition);
    if (0 < (int)options->max_length) {
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if ((int)options->max_length != 0) {
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
            (pGVar2->fields).value = options->m_Items[0];
            il2cpp_runtime_glue(&pGVar2->fields);
            if ((int)options->max_length == 0) goto LAB_03b1e411;
            (pGVar2->fields).text = options->m_Items[0];
            il2cpp_runtime_glue(&(pGVar2->fields).text);
          }
LAB_03b1e42b:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03b1e411:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      ppSVar3 = options->m_Items;
      ppGVar4 = pGVar1->m_Items;
      uVar5 = 0;
      do {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if ((uint)options->max_length <= uVar5) goto LAB_03b1e411;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto LAB_03b1e42b;
        (pGVar2->fields).value = *ppSVar3;
        il2cpp_runtime_glue(&pGVar2->fields);
        if ((uint)options->max_length <= uVar5) goto LAB_03b1e411;
        (pGVar2->fields).text = *ppSVar3;
        il2cpp_runtime_glue(&(pGVar2->fields).text);
        if ((uint)pGVar1->max_length <= uVar5) goto LAB_03b1e411;
        *ppGVar4 = pGVar2;
        il2cpp_runtime_glue(ppGVar4);
        uVar5 = uVar5 + 1;
        ppSVar3 = ppSVar3 + 1;
        ppGVar4 = ppGVar4 + 1;
      } while ((long)uVar5 < (long)(int)options->max_length);
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)il2cpp_runtime_glue(TypeInfo_AottgChoiceOptions);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._items = pGVar1;
    il2cpp_runtime_glue(&__this->fields,pGVar1);
  }
  else {
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)il2cpp_runtime_glue(TypeInfo_AottgChoiceOptions);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._items = pGVar1;
    il2cpp_runtime_glue(&__this->fields,pGVar1);
  }
  (__this->fields)._localizer = localizer;
  il2cpp_runtime_glue(&(__this->fields)._localizer,localizer);
  return __this;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b200a0

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  uint uVar3;
  uint uVar4;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = (uint)pGVar2->max_length;
  uVar4 = uVar1 - 1;
  if (index < (int)uVar4) {
    uVar4 = index;
  }
  uVar3 = 0;
  if (-1 < index) {
    uVar3 = uVar4;
  }
  if (uVar3 < uVar1) {
    return pGVar2->m_Items[(int)uVar3];
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Enabled
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b1e800

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  uint uVar4;
  undefined4 in_register_00000034;
  ulong uVar5;
  
  uVar5 = CONCAT44(in_register_00000034,index);
  if (index < 0) {
    return 0;
  }
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    if ((int)uVar1 <= index) {
      return 0;
    }
    uVar4 = uVar1 - 1;
    method = (MethodInfo *)(ulong)uVar4;
    if ((int)uVar4 <= index) {
      index = uVar4;
    }
    uVar5 = (ulong)(uint)index;
    if (uVar1 <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar3 = pGVar2->m_Items[index];
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pGVar3 >> 8),(char)(pGVar3->fields).enabled != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this,uVar5,method);
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b213d0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  System_String_o *pSVar4;
  uint uVar5;
  bool_conflict bVar6;
  uint uVar7;
  undefined4 in_register_00000034;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    method = (MethodInfo *)(ulong)uVar1;
    uVar5 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar5 = index;
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)uVar5;
    uVar7 = 0;
    if (-1 < index) {
      uVar7 = uVar5;
    }
    if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar3 = pGVar2->m_Items[(int)uVar7];
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).value,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (pGVar3->fields).value;
      }
      pSVar4 = (pGVar3->fields).text;
      if (pSVar4 != (System_String_o *)0x0) {
        return pSVar4;
      }
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this,CONCAT44(in_register_00000034,index),method);
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b1ff00

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c *pGVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  bool_conflict bVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  if (DAT_0570157b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IGisketchLocalizer);
    DAT_0570157b = '\x01';
  }
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    uVar13 = uVar2 - 1;
    if (index < (int)uVar13) {
      uVar13 = index;
    }
    uVar12 = 0;
    if (-1 < index) {
      uVar12 = uVar13;
    }
    if (uVar2 <= uVar12) {
LAB_03b20090:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar4 = pGVar3->m_Items[(int)uVar12];
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar9 = System_String__IsNullOrEmpty((pGVar4->fields).textKey,(MethodInfo *)0x0);
      if (((char)bVar9 == '\0') &&
         (pGVar5 = (__this->fields)._localizer,
         pGVar5 != (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)) {
        pSVar11 = (pGVar4->fields).text;
        pSVar6 = (pGVar4->fields).textKey;
        pGVar7 = pGVar5->klass;
        uVar1._0_1_ = (pGVar7->_2).rank;
        uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar8 = (pGVar7->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar14) == TypeInfo_IGisketchLocalizer) {
              pVVar10 = pGVar7->vtable + *(int *)((long)&pIVar8->offset + lVar14);
              goto LAB_03b2006e;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pGVar5,TypeInfo_IGisketchLocalizer,0);
LAB_03b2006e:
        pSVar11 = (System_String_o *)
                  (*pVVar10->methodPtr)(pGVar5,pSVar6,pSVar11,pVVar10->method,pVVar10->methodPtr);
        return pSVar11;
      }
      bVar9 = System_String__IsNullOrEmpty((pGVar4->fields).text,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return (pGVar4->fields).text;
      }
      pGVar3 = (__this->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        uVar2 = (uint)pGVar3->max_length;
        uVar13 = uVar2 - 1;
        if (index < (int)uVar13) {
          uVar13 = index;
        }
        uVar12 = 0;
        if (-1 < index) {
          uVar12 = uVar13;
        }
        if (uVar2 <= uVar12) goto LAB_03b20090;
        pGVar4 = pGVar3->m_Items[(int)uVar12];
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          bVar9 = System_String__IsNullOrEmpty((pGVar4->fields).value,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return (pGVar4->fields).value;
          }
          pSVar11 = (pGVar4->fields).text;
          if (pSVar11 != (System_String_o *)0x0) {
            return pSVar11;
          }
          return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$NextEnabledIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t start, int32_t step, const MethodInfo* method);
// 0x3b1e660

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t start,int32_t step
                  ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  int32_t iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar7 = (uint)pGVar1->max_length;
    if (0 < (int)uVar7) {
      iVar6 = step + start + uVar7;
      iVar4 = 1;
      do {
        uVar5 = iVar6 % (int)uVar7;
        if ((-1 < (int)uVar7) && (-1 < (int)uVar5)) {
          uVar3 = uVar7 - 1;
          if ((int)uVar5 < (int)(uVar7 - 1)) {
            uVar3 = uVar5;
          }
          if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pGVar1->m_Items[(int)uVar3] ==
              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1e6eb;
          if ((char)(pGVar1->m_Items[(int)uVar3]->fields).enabled != '\0') {
            return uVar5;
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + step;
      } while (iVar4 <= (int)uVar7);
    }
    if (-1 < start) {
      iVar2 = uVar7 - 1;
      if (start < (int)(uVar7 - 1)) {
        iVar2 = start;
      }
      return iVar2;
    }
    return 0;
  }
LAB_03b1e6eb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$ApplyDisabledArrowVisual
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual (UnityEngine_GameObject_o* go, bool enabled, const MethodInfo* method);
// 0x3b218a0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
               (UnityEngine_GameObject_o *go,bool_conflict enabled,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  if (DAT_0570157c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDisabledSelectableOpacity_GetComponent_G,CONCAT44(in_register_00000034,enabled));
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570157c = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)
             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_GisketchDisabledSelectableOpacity_GetComponent_G);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return;
    }
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0) {
      Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


