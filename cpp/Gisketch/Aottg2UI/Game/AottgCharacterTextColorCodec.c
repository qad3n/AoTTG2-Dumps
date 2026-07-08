// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorCodec.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec.Document$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* __this, const MethodInfo* method);
// 0x41db0f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_05704e9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704e9c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Colors = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Colors);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Parse
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse (System_String_o* serialized, const MethodInfo* method);
// 0x41cfa90

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
          (System_String_o *serialized,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar3;
  uint16_t value;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar5;
  MethodInfo *in_RCX;
  int iVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *pGVar7;
  System_String_o *local_40;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *local_38;
  
  if (DAT_05704e8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Document);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e8c = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
              il2cpp_runtime_glue(TypeInfo_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    pGVar7 = &__this_00->fields;
    (__this_00->fields).Text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(pGVar7);
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if ((serialized != (System_String_o *)0x0) ||
       (serialized = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       serialized != (System_String_o *)0x0)) {
      iVar6 = (serialized->fields)._stringLength;
      local_38 = pGVar7;
      if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                              (serialized,iVar6,&local_40,in_RCX);
            if ((char)bVar4 == '\0') {
              System_String__get_Chars(serialized,iVar6,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            iVar6 = iVar6 + 8;
          } while (iVar6 < (serialized->fields)._stringLength);
        }
      }
      else if (0 < iVar6) {
        iVar6 = 0;
        pSVar5 = "FFFFFF";
        do {
          while (bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                   (serialized,iVar6,&local_40,in_RCX), (char)bVar4 == '\0') {
            value = System_String__get_Chars(serialized,iVar6,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_01,value,(MethodInfo *)0x0);
            in_RCX = MethodInfo_Void_Add;
            __this = (__this_00->fields).Colors;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041cfcd5;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto LAB_041cfcd5;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              in_RCX = (MethodInfo *)(ulong)(uVar2 + 1);
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar5);
              iVar6 = iVar6 + 1;
              if ((serialized->fields)._stringLength <= iVar6) goto LAB_041cfc99;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                         (MethodInfo_35A7350 *)in_RCX->klass->rgctx_data[0xe].method);
              iVar6 = iVar6 + 1;
              if ((serialized->fields)._stringLength <= iVar6) goto LAB_041cfc99;
            }
          }
          iVar6 = iVar6 + 8;
          pSVar5 = local_40;
        } while (iVar6 < (serialized->fields)._stringLength);
      }
LAB_041cfc99:
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        pSVar5 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        (__this_00->fields).Text = pSVar5;
        il2cpp_runtime_glue(local_38,pSVar5);
        return __this_00;
      }
    }
  }
LAB_041cfcd5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Plain
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain (System_String_o* serialized, const MethodInfo* method);
// 0x41d64d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain
          (System_String_o *serialized,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(serialized,method);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (pGVar1->fields).Text;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$FromEditableRaw
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw (System_String_o* value, const MethodInfo* method);
// 0x41d9590

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw
          (System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  undefined1 local_19;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_18;
  System_String_o *local_10;
  
  local_18 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  local_10 = (System_String_o *)0x0;
  local_19 = 0;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                     &local_18,&local_10,(bool_conflict *)&local_19,in_R9);
  if ((char)bVar1 != '\0') {
    if (local_18 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                      ((local_18->fields).Text,
                       (System_Collections_Generic_IList_string__o *)(local_18->fields).Colors,
                       method_00);
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, const MethodInfo* method);
// 0x41d9a70

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
          (System_String_o *value,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
          MethodInfo *method)

{
  uint uVar1;
  MethodInfo *in_R9;
  byte local_9;
  System_String_o *local_8;
  
  local_9 = 0;
  local_8 = (System_String_o *)0x0;
  uVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                     document,&local_8,(bool_conflict *)&local_9,in_R9);
  return (uint)local_9 & uVar1 & 0xff;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, System_String_o** trailingColor, bool* colorsVisibleText, const MethodInfo* method);
// 0x41d9620

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
          (System_String_o *value,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
          System_String_o **trailingColor,bool_conflict *colorsVisibleText,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar2;
  System_Collections_Generic_List_string__o *__this_00;
  uint uVar3;
  long lVar4;
  System_String_o **ppSVar5;
  uint16_t value_00;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar7;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  int index;
  uint uVar9;
  int32_t local_7c;
  System_String_o *local_78;
  ulong local_70;
  System_String_o *local_68;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **local_60;
  System_Collections_Generic_List_string__o *local_58;
  bool_conflict *local_50;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_48;
  System_String_o *local_40;
  System_String_o **local_38;
  
  local_60 = document;
  local_50 = colorsVisibleText;
  local_48 = existing;
  if (DAT_05704e8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Document);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e8d = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  local_7c = 0;
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
           il2cpp_runtime_glue(TypeInfo_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    (pGVar7->fields).Text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(&pGVar7->fields);
    *local_60 = pGVar7;
    il2cpp_runtime_glue();
    __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    uVar9 = 0;
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    local_78 = "FFFFFF";
    *trailingColor = (System_String_o *)0x0;
    il2cpp_runtime_glue(trailingColor,0);
    *(undefined1 *)local_50 = 0;
    if ((value != (System_String_o *)0x0) ||
       (value = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), value != (System_String_o *)0x0
       )) {
      local_38 = trailingColor;
      if ((value->fields)._stringLength < 1) {
        local_70 = 0;
      }
      else {
        local_58 = (System_Collections_Generic_List_string__o *)0x0;
        index = 0;
        local_70 = 0;
        local_68 = value;
        do {
          while( true ) {
            while (bVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                                     (value,index,&local_40,&local_7c,
                                      (MethodInfo *)colorsVisibleText), (char)bVar6 != '\0') {
              local_78 = local_40;
              index = index + local_7c;
              local_70 = CONCAT71((uint7)(uint3)((uint)local_7c >> 8),1);
              uVar9 = 1;
              if ((value->fields)._stringLength <= index) goto LAB_041d99ee;
            }
            value_00 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_041d9a5f;
            System_Text_StringBuilder__Append(__this_01,value_00,(MethodInfo *)0x0);
            value = local_68;
            lVar4 = MethodInfo_Void_Add;
            if (*local_60 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
            goto LAB_041d9a5f;
            __this = ((*local_60)->fields).Colors;
            if ((local_70 & 1) != 0) break;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041d9a5f;
            uVar9 = (__this->fields)._size;
            if (DAT_05704e96 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
              il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
              il2cpp_init_method_metadata(&"FFFFFF");
              DAT_05704e96 = '\x01';
            }
            lVar4 = MethodInfo_Void_Add;
            pSVar8 = "FFFFFF";
            if ((((local_48 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0
                  ) && (-1 < (int)uVar9)) &&
                (__this_00 = (local_48->fields).Colors,
                __this_00 != (System_Collections_Generic_List_string__o *)0x0)) &&
               ((int)uVar9 < (__this_00->fields)._size)) {
              method_00 = (MethodInfo *)(ulong)uVar9;
              pSVar8 = (System_String_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,uVar9,
                                  MethodInfo_String_get_Item);
              pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                 (pSVar8,method_00);
              lVar4 = MethodInfo_Void_Add;
            }
            MethodInfo_Void_Add = lVar4;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041d9a5f;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar2 = (__this->fields)._items;
            if (pSVar2 == (System_String_array *)0x0) goto LAB_041d9a5f;
            uVar9 = (__this->fields)._size;
            if (uVar9 < (uint)pSVar2->max_length) {
              (__this->fields)._size = uVar9 + 1;
              pSVar2->m_Items[(int)uVar9] = pSVar8;
              il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar9);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar9 = 0;
            index = index + 1;
            value = local_68;
            local_58 = __this;
            if ((local_68->fields)._stringLength <= index) goto LAB_041d99ee;
          }
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041d9a5f;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this->fields)._items;
          if (pSVar2 == (System_String_array *)0x0) goto LAB_041d9a5f;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pSVar2->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pSVar2->m_Items[(int)uVar9] = local_78;
            il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)local_78,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined1 *)local_50 = 1;
          uVar9 = 0;
          index = index + 1;
        } while (index < (value->fields)._stringLength);
      }
LAB_041d99ee:
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        pGVar7 = *local_60;
        pSVar8 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        ppSVar5 = local_38;
        if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (pGVar7->fields).Text = pSVar8;
          il2cpp_runtime_glue(&pGVar7->fields,pSVar8);
          uVar3 = (uint)local_70;
          if ((uVar9 & uVar3 & 1) != 0) {
            *ppSVar5 = local_78;
            il2cpp_runtime_glue(ppSVar5);
          }
          return uVar3 & 0xffffff01;
        }
      }
    }
  }
LAB_041d9a5f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Serialize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x41cfcf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  uint16_t value;
  int iVar5;
  bool_conflict bVar6;
  System_Text_StringBuilder_o *__this;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_Text_StringBuilder_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  long lVar11;
  uint index;
  
  if (DAT_05704e8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata(&TypeInfo_IList_string);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e8e = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (text != (System_String_o *)0x0) {
    if (0 < (text->fields)._stringLength) {
      index = 0;
      pSVar10 = "FFFFFF";
      do {
        pSVar8 = "FFFFFF";
        if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
          pSVar3 = colors->klass;
          uVar1._0_1_ = (pSVar3->_2).rank;
          uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pSVar3->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ICollection_string) {
                pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
                goto LAB_041cfe51;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar11);
          }
          pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041cfe51:
          iVar5 = (*pVVar7->methodPtr)(colors,pVVar7->method);
          pSVar8 = "FFFFFF";
          if ((int)index < iVar5) {
            pSVar3 = colors->klass;
            uVar2._0_1_ = (pSVar3->_2).rank;
            uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar4 = (pSVar3->_1).interfaceOffsets;
              lVar11 = 0;
              do {
                if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IList_string) {
                  pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
                  goto LAB_041cfecf;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar11);
            }
            pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041cfecf:
            method_00 = (MethodInfo *)(ulong)index;
            pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(colors,method_00,pVVar7->method);
            pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                               (pSVar8,method_00);
          }
        }
        bVar6 = System_String__op_Inequality(pSVar8,pSVar10,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          value = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_041cff8f;
        }
        else {
          if ((((__this == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar9 = System_Text_StringBuilder__Append(__this,0x5b,(MethodInfo *)0x0),
               pSVar8 == (System_String_o *)0x0)) ||
              (pSVar10 = System_String__ToLowerInvariant(pSVar8,(MethodInfo *)0x0),
              pSVar9 == (System_Text_StringBuilder_o *)0x0)) ||
             (pSVar9 = System_Text_StringBuilder__Append(pSVar9,pSVar10,(MethodInfo *)0x0),
             pSVar9 == (System_Text_StringBuilder_o *)0x0)) goto LAB_041cff8f;
          System_Text_StringBuilder__Append(pSVar9,0x5d,(MethodInfo *)0x0);
          value = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          pSVar10 = pSVar8;
        }
        System_Text_StringBuilder__Append(__this,value,(MethodInfo *)0x0);
        index = index + 1;
      } while ((int)index < (text->fields)._stringLength);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._3_ToString.methodPtr)
                          (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar10;
    }
  }
LAB_041cff8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$SerializeGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient (System_String_o* text, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x41d9fa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
          (System_String_o *text,System_Collections_Generic_IList_string__o *stops,
          MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  uint uVar3;
  System_Collections_Generic_IList_string__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  int iVar6;
  System_Object_array *method_00;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  int32_t iVar8;
  long lVar9;
  
  if (DAT_05704e8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata();
    DAT_05704e8f = '\x01';
  }
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), text == (System_String_o *)0x0)) {
LAB_041da16e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((stops != (System_Collections_Generic_IList_string__o *)0x0) &&
     ((text->fields)._stringLength != 0)) {
    pSVar4 = stops->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar9) == TypeInfo_ICollection_string) {
          method_00 = (System_Object_array *)
                      (pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar9));
          goto LAB_041da081;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar9);
    }
    method_00 = (System_Object_array *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041da081:
    iVar6 = (*(code *)(method_00->obj).klass)(stops,(method_00->obj).monitor);
    if (iVar6 != 0) {
      iVar8 = (text->fields)._stringLength;
      __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this,iVar8,MethodInfo_List_1_System_String);
      iVar8 = (text->fields)._stringLength;
      method_01 = extraout_RDX;
      if (0 < iVar8) {
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                    (0,iVar8,stops,(MethodInfo *)method_00);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar6 = 0;
        do {
          while( true ) {
            pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                               (iVar6,iVar8,stops,(MethodInfo *)method_00);
            lVar9 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (__this->fields)._items;
            if (method_00 == (System_Object_array *)0x0) goto LAB_041da16e;
            uVar3 = (__this->fields)._size;
            if ((uint)method_00->max_length <= uVar3) break;
            (__this->fields)._size = uVar3 + 1;
            method_00->m_Items[(int)uVar3] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_glue(method_00->m_Items + (int)uVar3,pSVar7);
            iVar6 = iVar6 + 1;
            iVar8 = (text->fields)._stringLength;
            method_01 = extraout_RDX_01;
            if (iVar8 <= iVar6) goto LAB_041da14f;
          }
          method_00 = *(System_Object_array **)(*(long *)(lVar9 + 0x20) + 0xc0);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar7,(MethodInfo_35A7350 *)method_00->m_Items[10]);
          iVar6 = iVar6 + 1;
          iVar8 = (text->fields)._stringLength;
          method_01 = extraout_RDX_00;
        } while (iVar6 < iVar8);
      }
LAB_041da14f:
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (text,(System_Collections_Generic_IList_string__o *)__this,method_01);
      return pSVar7;
    }
  }
  return text;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Retarget
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget (System_String_o* previousSerialized, System_String_o* nextText, const MethodInfo* method);
// 0x41da6d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
          (System_String_o *previousSerialized,System_String_o *nextText,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  System_Object_array *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  long lVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *previous;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  pMVar9 = (MethodInfo *)nextText;
  if (DAT_05704e90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e90 = '\x01';
  }
  previous = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(previousSerialized,pMVar9);
  if ((nextText != (System_String_o *)0x0) ||
     (nextText = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
     nextText != (System_String_o *)0x0)) {
    capacity = (nextText->fields)._stringLength;
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this,capacity,MethodInfo_List_1_System_String);
    if (0 < (nextText->fields)._stringLength) {
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_041daaf5;
      iVar10 = 0;
      do {
        while( true ) {
          pIVar7 = "FFFFFF";
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto LAB_041daaf5;
          uVar12 = (__this->fields)._size;
          if ((uint)pSVar2->max_length <= uVar12) break;
          (__this->fields)._size = uVar12 + 1;
          pSVar2->m_Items[(int)uVar12] = pIVar7;
          il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar12);
          iVar10 = iVar10 + 1;
          if ((nextText->fields)._stringLength <= iVar10) goto LAB_041da828;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar7,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        iVar10 = iVar10 + 1;
      } while (iVar10 < (nextText->fields)._stringLength);
    }
LAB_041da828:
    if ((previous != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
       (pSVar8 = (previous->fields).Text, pSVar8 != (System_String_o *)0x0)) {
      iVar10 = 0;
      do {
        if (((pSVar8->fields)._stringLength <= iVar10) ||
           ((nextText->fields)._stringLength <= iVar10)) {
LAB_041da899:
          iVar13 = (pSVar8->fields)._stringLength;
          if (0 < iVar13 - iVar10) {
            pMVar9 = (MethodInfo *)0x0;
            iVar11 = -1;
            uVar12 = 0;
            goto LAB_041da8d0;
          }
          uVar12 = 0;
          pMVar9 = (MethodInfo *)0x0;
          goto joined_r0x041daa9d;
        }
        uVar5 = System_String__get_Chars(pSVar8,iVar10,(MethodInfo *)0x0);
        uVar6 = System_String__get_Chars(nextText,iVar10,(MethodInfo *)0x0);
        if (uVar5 != uVar6) {
          pSVar8 = (previous->fields).Text;
          if (pSVar8 != (System_String_o *)0x0) goto LAB_041da899;
          break;
        }
        iVar10 = iVar10 + 1;
        pSVar8 = (previous->fields).Text;
      } while (pSVar8 != (System_String_o *)0x0);
    }
  }
LAB_041daaf5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while( true ) {
    uVar5 = System_String__get_Chars(pSVar8,iVar13 + iVar11,(MethodInfo *)0x0);
    uVar6 = System_String__get_Chars
                      (nextText,(nextText->fields)._stringLength + iVar11,(MethodInfo *)0x0);
    if (uVar5 != uVar6) {
      uVar12 = iVar11 + 1;
      break;
    }
    pSVar8 = (previous->fields).Text;
    if (pSVar8 == (System_String_o *)0x0) goto LAB_041daaf5;
    uVar12 = ~uVar14;
    pMVar9 = (MethodInfo *)(ulong)(uVar14 + 1);
    iVar13 = (pSVar8->fields)._stringLength;
    iVar11 = iVar11 + -1;
    if (iVar13 + -iVar10 <= (int)(uVar14 + 1)) break;
LAB_041da8d0:
    uVar14 = (uint)pMVar9;
    if ((nextText->fields)._stringLength + -iVar10 <= (int)uVar14) break;
  }
joined_r0x041daa9d:
  method_00 = pMVar9;
  if (iVar10 != 0) {
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      pSVar3 = (previous->fields).Colors;
      if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_String_get_Item);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto LAB_041daaf5;
    }
    iVar13 = 0;
    do {
      pSVar3 = (previous->fields).Colors;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_041daaf5;
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,iVar13,MethodInfo_String_get_Item);
      method_00 = MethodInfo_Void_set_Item;
      System_Collections_Generic_List<object>__set_Item
                (__this,iVar13,pIVar7,(MethodInfo_35A7040 *)MethodInfo_Void_set_Item);
      iVar13 = iVar13 + 1;
    } while (iVar10 != iVar13);
  }
  iVar13 = (int)pMVar9;
  if (iVar13 != 0) {
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (previous->fields).Text;
      if ((pSVar8 != (System_String_o *)0x0) &&
         (pSVar3 = (previous->fields).Colors,
         pSVar3 != (System_Collections_Generic_List_string__o *)0x0)) {
        System_Collections_Generic_List<object>__get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar3,
                   uVar12 + (pSVar8->fields)._stringLength,MethodInfo_String_get_Item);
      }
      goto LAB_041daaf5;
    }
    do {
      pSVar8 = (previous->fields).Text;
      if ((pSVar8 == (System_String_o *)0x0) ||
         (pSVar3 = (previous->fields).Colors,
         pSVar3 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_041daaf5;
      iVar11 = (nextText->fields)._stringLength;
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,
                          (pSVar8->fields)._stringLength + uVar12,MethodInfo_String_get_Item);
      method_00 = MethodInfo_Void_set_Item;
      System_Collections_Generic_List<object>__set_Item
                (__this,iVar11 + uVar12,pIVar7,(MethodInfo_35A7040 *)MethodInfo_Void_set_Item);
      uVar12 = uVar12 + 1;
      uVar14 = (int)pMVar9 - 1;
      pMVar9 = (MethodInfo *)(ulong)uVar14;
    } while (uVar14 != 0);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                     (previous,iVar10,iVar13,method_00);
  iVar13 = (nextText->fields)._stringLength - iVar13;
  pMVar9 = extraout_RDX;
  if (iVar10 < iVar13) {
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_041daaf5;
    do {
      System_Collections_Generic_List<object>__set_Item
                (__this,iVar10,(Il2CppObject *)pSVar8,(MethodInfo_35A7040 *)MethodInfo_Void_set_Item);
      iVar10 = iVar10 + 1;
      pMVar9 = extraout_RDX_00;
    } while (iVar13 != iVar10);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (nextText,(System_Collections_Generic_IList_string__o *)__this,pMVar9);
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$RichText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x41d2ac0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  uint16_t c;
  int iVar5;
  bool_conflict bVar6;
  System_Text_StringBuilder_o *__this;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_Text_StringBuilder_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  uint index;
  MethodInfo *method_01;
  long lVar11;
  
  if (DAT_05704e91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata(&TypeInfo_IList_string);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"FFFFFF");
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    DAT_05704e91 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (text != (System_String_o *)0x0) {
    pSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    if (0 < (text->fields)._stringLength) {
      index = 0;
      do {
        pSVar8 = "FFFFFF";
        if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
          pSVar3 = colors->klass;
          uVar1._0_1_ = (pSVar3->_2).rank;
          uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pSVar3->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_ICollection_string) {
                pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
                goto LAB_041d2c31;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar11);
          }
          pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_ICollection_string,0);
LAB_041d2c31:
          iVar5 = (*pVVar7->methodPtr)(colors,pVVar7->method);
          pSVar8 = "FFFFFF";
          if ((int)index < iVar5) {
            pSVar3 = colors->klass;
            uVar2._0_1_ = (pSVar3->_2).rank;
            uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar4 = (pSVar3->_1).interfaceOffsets;
              lVar11 = 0;
              do {
                if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IList_string) {
                  pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
                  goto LAB_041d2caf;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar11);
            }
            pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(colors,TypeInfo_IList_string,0);
LAB_041d2caf:
            method_01 = (MethodInfo *)(ulong)index;
            pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(colors,method_01,pVVar7->method);
            pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                               (pSVar8,method_01);
          }
        }
        bVar6 = System_String__op_Inequality(pSVar8,pSVar10,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_041d2db4;
            System_Text_StringBuilder__Append(__this,"</color>",(MethodInfo *)0x0);
          }
          else if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_041d2db4;
          pSVar9 = System_Text_StringBuilder__Append(__this,"<color=#",(MethodInfo *)0x0);
          if ((pSVar9 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar9 = System_Text_StringBuilder__Append(pSVar9,pSVar8,(MethodInfo *)0x0),
             pSVar9 == (System_Text_StringBuilder_o *)0x0)) goto LAB_041d2db4;
          System_Text_StringBuilder__Append(pSVar9,0x3e,(MethodInfo *)0x0);
          pSVar10 = pSVar8;
        }
        c = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped(__this,c,method_00);
        index = index + 1;
      } while ((int)index < (text->fields)._stringLength);
    }
    bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (__this != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(__this,"</color>",(MethodInfo *)0x0);
        goto LAB_041d2d90;
      }
    }
    else if (__this != (System_Text_StringBuilder_o *)0x0) {
LAB_041d2d90:
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._3_ToString.methodPtr)
                          (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar10;
    }
  }
LAB_041d2db4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$NormalizeRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb (System_String_o* value, const MethodInfo* method);
// 0x41d9e10

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
          (System_String_o *value,MethodInfo *method)

{
  UnityEngine_Color_o color;
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  int32_t index;
  int index_00;
  UnityEngine_Color_Fields local_28;
  
  if (DAT_05704e92 == '\0') {
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e92 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (value == (System_String_o *)0x0) goto LAB_041d9f98;
    if ((value->fields)._stringLength != 6) goto LAB_041d9e9e;
    index = 0;
    do {
      uVar1 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
      if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41)))
      goto LAB_041d9e9e;
      index = index + 1;
    } while (index < (value->fields)._stringLength);
LAB_041d9f6e:
    pSVar3 = System_String__ToUpperInvariant(value,(MethodInfo *)0x0);
  }
  else {
LAB_041d9e9e:
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (value == (System_String_o *)0x0) goto LAB_041d9f98;
      if (((value->fields)._stringLength == 7) &&
         (uVar1 = System_String__get_Chars(value,0,(MethodInfo *)0x0), uVar1 == 0x23)) {
        pSVar3 = System_String__Substring(value,1,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (pSVar3 == (System_String_o *)0x0) {
LAB_041d9f98:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((pSVar3->fields)._stringLength == 6) {
            index_00 = 0;
            do {
              uVar1 = System_String__get_Chars(pSVar3,index_00,(MethodInfo *)0x0);
              if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41)))
              goto LAB_041d9f3a;
              index_00 = index_00 + 1;
            } while (index_00 < (pSVar3->fields)._stringLength);
            value = System_String__Substring(value,1,(MethodInfo *)0x0);
            if (value == (System_String_o *)0x0) goto LAB_041d9f98;
            goto LAB_041d9f6e;
          }
        }
      }
    }
LAB_041d9f3a:
    bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    pSVar3 = "FFFFFF";
    if ((char)bVar2 != '\0') {
      color.fields.b = local_28.b;
      color.fields.a = local_28.a;
      color.fields.r = local_28.r;
      color.fields.g = local_28.g;
      pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    }
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$GradientColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor (int32_t index, int32_t length, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x41da190

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
          (int32_t index,int32_t length,System_Collections_Generic_IList_string__o *stops,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_Collections_Generic_IList_string__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  uint uVar10;
  int iVar11;
  bool_conflict bVar12;
  VirtualInvokeData *pVVar13;
  System_String_o *pSVar14;
  uint uVar15;
  MethodInfo *method_00;
  long lVar16;
  uint uVar17;
  MethodInfo *pMVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_68;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  if (DAT_05704e93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ICollection_string);
    il2cpp_init_method_metadata();
    DAT_05704e93 = '\x01';
  }
  if (stops == (System_Collections_Generic_IList_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = stops->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_ICollection_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da231;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar16);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041da231:
  iVar11 = (*pVVar13->methodPtr)(stops,pVVar13->method);
  if ((length < 2) || (iVar11 == 1)) {
    pSVar8 = stops->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IList_string) {
          pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
          goto LAB_041da2f1;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar16);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_IList_string,0);
LAB_041da2f1:
    pMVar18 = (MethodInfo *)0x0;
    pSVar14 = (System_String_o *)(*pVVar13->methodPtr)(stops,0,pVVar13->method);
    pSVar14 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar14,pMVar18);
    return pSVar14;
  }
  pSVar8 = stops->klass;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_ICollection_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da323;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar16);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041da323:
  iVar11 = (*pVVar13->methodPtr)(stops,pVVar13->method);
  fVar19 = (float)(iVar11 + -1);
  if (DAT_056fdee5 == '\0') {
    local_58 = (float)(iVar11 + -1);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdee5 = '\x01';
    fVar19 = local_58;
  }
  fVar19 = ((float)index / (float)(length + -1)) * fVar19;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar20 = floorf(fVar19);
  uVar15 = (uint)fVar20;
  pSVar8 = stops->klass;
  uVar4._0_1_ = (pSVar8->_2).rank;
  uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_ICollection_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da3f1;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar16);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041da3f1:
  iVar11 = (*pVVar13->methodPtr)(stops,pVVar13->method);
  uVar10 = iVar11 - 1U;
  if ((int)uVar15 < (int)(iVar11 - 1U)) {
    uVar10 = uVar15;
  }
  uVar17 = 0;
  if (-1 < (int)uVar15) {
    uVar17 = uVar10;
  }
  pSVar8 = stops->klass;
  uVar5._0_1_ = (pSVar8->_2).rank;
  uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar5 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_ICollection_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da461;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar5 << 4 != lVar16);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_ICollection_string,0);
LAB_041da461:
  iVar11 = (*pVVar13->methodPtr)(stops,pVVar13->method);
  uVar15 = iVar11 - 1U;
  if ((int)(uVar17 + 1) <= (int)(iVar11 - 1U)) {
    uVar15 = uVar17 + 1;
  }
  pMVar18 = (MethodInfo *)(ulong)uVar15;
  pSVar8 = stops->klass;
  uVar6._0_1_ = (pSVar8->_2).rank;
  uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IList_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da4e1;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar16);
  }
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_IList_string,0);
LAB_041da4e1:
  local_58 = (float)(int)uVar17;
  method_00 = (MethodInfo *)(ulong)uVar17;
  pSVar14 = (System_String_o *)(*pVVar13->methodPtr)(stops,method_00,pVVar13->method);
  if (DAT_05704e94 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e94 = '\x01';
  }
  fVar19 = fVar19 - local_58;
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  pSVar14 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar14,method_00);
  pSVar14 = System_String__Concat("#",pSVar14,(MethodInfo *)0x0);
  bVar12 = UnityEngine_ColorUtility__TryParseHtmlString
                     (pSVar14,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    local_58 = 1.0;
    fStack_54 = 1.0;
    local_48 = local_58;
    fStack_44 = fStack_54;
  }
  else {
    local_48 = local_68.r;
    fStack_44 = local_68.g;
    local_58 = local_68.b;
    fStack_54 = local_68.a;
  }
  fVar20 = 1.0;
  if (fVar19 <= 1.0) {
    fVar20 = fVar19;
  }
  pSVar8 = stops->klass;
  uVar7._0_1_ = (pSVar8->_2).rank;
  uVar7._1_1_ = (pSVar8->_2).minimumAlignment;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  if ((ulong)uVar7 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar16) == TypeInfo_IList_string) {
        pVVar13 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar16);
        goto LAB_041da603;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar7 << 4 != lVar16);
  }
  local_38 = ZEXT416((uint)fVar20);
  pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(stops,TypeInfo_IList_string,0);
  fVar20 = (float)local_38._0_4_;
LAB_041da603:
  fVar20 = (float)(-(uint)(0.0 <= fVar19) & (uint)fVar20);
  pSVar14 = (System_String_o *)(*pVVar13->methodPtr)(stops,pMVar18,pVVar13->method);
  if (DAT_05704e94 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e94 = '\x01';
  }
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  pSVar14 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar14,pMVar18);
  pSVar14 = System_String__Concat("#",pSVar14,(MethodInfo *)0x0);
  bVar12 = UnityEngine_ColorUtility__TryParseHtmlString
                     (pSVar14,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    fVar19 = 1.0;
    fVar21 = 1.0;
    fVar22 = fVar19;
    fVar23 = fVar21;
  }
  else {
    fVar19 = local_68.r;
    fVar21 = local_68.g;
    fVar22 = local_68.b;
    fVar23 = local_68.a;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar20) {
    fVar24 = fVar20;
  }
  color.fields.r = (fVar19 - local_48) * fVar24 + local_48;
  color.fields.g = (fVar21 - fStack_44) * fVar24 + fStack_44;
  color.fields.b = (fVar22 - local_58) * fVar24 + local_58;
  color.fields.a = (fVar23 - fStack_54) * fVar24 + fStack_54;
  pSVar14 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
  return pSVar14;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ParseRgb
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb (System_String_o* value, const MethodInfo* method);
// 0x41dacc0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
          (System_String_o *value,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_Fields local_18;
  
  if (DAT_05704e94 == '\0') {
    il2cpp_init_method_metadata(&"#");
    DAT_05704e94 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(value,method);
  pSVar3 = System_String__Concat("#",pSVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UVar4.fields.b = 1.0;
    UVar4.fields.a = 1.0;
    UVar4.fields.r = 1.0;
    UVar4.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar4.fields;
  }
  UVar1.b = local_18.b;
  UVar1.a = local_18.a;
  UVar1.r = local_18.r;
  UVar1.g = local_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsRgb
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb (System_String_o* value, const MethodInfo* method);
// 0x41dac50

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb
          (System_String_o *value,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  int32_t index;
  
  bVar3 = 0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    index = 0;
    bVar3 = 0;
    if ((value->fields)._stringLength == 6) {
      do {
        uVar1 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
          return 0;
        }
        index = index + 1;
      } while (index < (value->fields)._stringLength);
      bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)index >> 8),1);
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag (System_String_o* text, int32_t index, System_String_o** color, const MethodInfo* method);
// 0x41d93d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
          (System_String_o *text,int32_t index,System_String_o **color,MethodInfo *method)

{
  int index_00;
  int index_01;
  uint16_t uVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  
  *color = (System_String_o *)0x0;
  il2cpp_runtime_glue(color,0);
  if (text == (System_String_o *)0x0) {
LAB_041d958a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index_00 = index + 7;
  if (index_00 < (text->fields)._stringLength) {
    bVar3 = 0;
    uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar1 == 0x5b) {
      bVar3 = 0;
      uVar1 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
      if (uVar1 == 0x5d) {
        index_01 = index + 1;
        if (index_01 < index_00) {
          uVar1 = System_String__get_Chars(text,index_01,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 4,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 6,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
        }
        pSVar2 = System_String__Substring(text,index_01,6,(MethodInfo *)0x0);
        if (pSVar2 == (System_String_o *)0x0) goto LAB_041d958a;
        pSVar2 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
        *color = pSVar2;
        il2cpp_runtime_glue(color,pSVar2);
        bVar3 = 1;
      }
    }
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsImportColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag (System_String_o* text, int32_t index, System_String_o** color, int32_t* length, const MethodInfo* method);
// 0x41d9ab0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
          (System_String_o *text,int32_t index,System_String_o **color,int32_t *length,
          MethodInfo *method)

{
  uint index_00;
  int index_01;
  uint index_02;
  int index_03;
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  MethodInfo *method_00;
  
  *color = (System_String_o *)0x0;
  il2cpp_runtime_glue(color);
  *length = 0;
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  if (text == (System_String_o *)0x0) {
LAB_041d9d7f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (index < (text->fields)._stringLength) {
    uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar1 != 0x5b) {
      return 0;
    }
    index_00 = index + 4;
    uVar4 = (ulong)index_00;
    if ((((((int)index_00 < (text->fields)._stringLength) &&
          (uVar1 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0), uVar1 == 0x5d)) &&
         (-2 < index)) && ((int)index_00 <= (text->fields)._stringLength)) &&
       ((index_02 = index + 1, (int)index_00 <= (int)index_02 ||
        ((((uVar1 = System_String__get_Chars(text,index_02,(MethodInfo *)0x0),
           (ushort)(uVar1 - 0x30) < 10 || ((ushort)((uVar1 & 0xffdf) - 0x41) < 6)) &&
          ((uVar1 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0),
           (ushort)(uVar1 - 0x30) < 10 || ((ushort)((uVar1 & 0xffdf) - 0x41) < 6)))) &&
         ((uVar1 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0),
          (ushort)(uVar1 - 0x30) < 10 || ((ushort)((uVar1 & 0xffdf) - 0x41) < 6)))))))) {
      method_00 = (MethodInfo *)(ulong)index_02;
      pSVar3 = System_String__Substring(text,index_02,3,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(pSVar3,method_00);
      *color = pSVar3;
      il2cpp_runtime_glue(color,pSVar3);
      *length = 5;
LAB_041d9d77:
      return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
    }
    index_01 = index + 7;
    if (index_01 < (text->fields)._stringLength) {
      uVar1 = System_String__get_Chars(text,index_01,(MethodInfo *)0x0);
      if (uVar1 != 0x5d) {
        return 0;
      }
      if ((-2 < index) && (index_01 <= (text->fields)._stringLength)) {
        index_03 = index + 1;
        if (index_03 < index_01) {
          uVar1 = System_String__get_Chars(text,index_03,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar1 = System_String__get_Chars(text,index + 6,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
            return 0;
          }
        }
        uVar4 = 0;
        pSVar3 = System_String__Substring(text,index_03,6,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) goto LAB_041d9d7f;
        pSVar3 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
        *color = pSVar3;
        il2cpp_runtime_glue(color,pSVar3);
        *length = 8;
        goto LAB_041d9d77;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHexRange
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange (System_String_o* text, int32_t start, int32_t count, const MethodInfo* method);
// 0x41dad60

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange
          (System_String_o *text,int32_t start,int32_t count,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  undefined8 unaff_R14;
  
  if (-1 < (start | count)) {
    if (text == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (count + start <= (text->fields)._stringLength) {
      bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
      if (count + start <= start) {
        return bVar2;
      }
      while ((uVar1 = System_String__get_Chars(text,start,(MethodInfo *)0x0),
             (ushort)(uVar1 - 0x30) < 10 || ((ushort)((uVar1 & 0xffdf) - 0x41) < 6))) {
        start = start + 1;
        count = count + -1;
        if (count == 0) {
          return bVar2;
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExpandRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb (System_String_o* rgb, const MethodInfo* method);
// 0x41dadd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb
          (System_String_o *rgb,MethodInfo *method)

{
  uint16_t uVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  uint16_t local_2c;
  uint16_t local_2a;
  uint16_t local_28;
  uint16_t local_26;
  uint16_t local_24;
  uint16_t local_22;
  
  if (DAT_05704e95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05704e95 = '\x01';
  }
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object);
  if (rgb == (System_String_o *)0x0) {
LAB_041db0e3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_22 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_22);
  if (args == (System_Object_array *)0x0) goto LAB_041db0e3;
  if (pIVar2 != (Il2CppObject *)0x0) {
    lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_041db0d4;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    il2cpp_runtime_glue(args->m_Items);
    uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
    local_24 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_24);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041db0d4;
    }
    if ((uint)args->max_length < 2) goto LAB_041db0cf;
    args->m_Items[1] = pIVar2;
    il2cpp_runtime_glue(args->m_Items + 1,pIVar2);
    uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
    local_26 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_26);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041db0d4;
    }
    if ((uint)args->max_length < 3) goto LAB_041db0cf;
    args->m_Items[2] = pIVar2;
    il2cpp_runtime_glue(args->m_Items + 2,pIVar2);
    uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
    local_28 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_28);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041db0d4;
    }
    if ((uint)args->max_length < 4) goto LAB_041db0cf;
    args->m_Items[3] = pIVar2;
    il2cpp_runtime_glue(args->m_Items + 3,pIVar2);
    uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
    local_2a = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_2a);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041db0d4;
    }
    if (4 < (uint)args->max_length) {
      args->m_Items[4] = pIVar2;
      il2cpp_runtime_glue(args->m_Items + 4,pIVar2);
      uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
      local_2c = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_2c);
      if (pIVar2 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_041db0d4:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
      }
      if (5 < (uint)args->max_length) {
        args->m_Items[5] = pIVar2;
        il2cpp_runtime_glue(args->m_Items + 5);
        pSVar4 = System_String__Concat(args,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
LAB_041db0cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExistingColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, int32_t index, const MethodInfo* method);
// 0x41d9d90

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (DAT_05704e96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e96 = '\x01';
  }
  if ((((existing != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
       (-1 < index)) &&
      (__this = (existing->fields).Colors,
      __this != (System_Collections_Generic_List_string__o *)0x0)) &&
     (index < (__this->fields)._size)) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_String_get_Item);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,method_00);
    return pSVar1;
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$EditColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* previous, int32_t prefix, int32_t suffix, const MethodInfo* method);
// 0x41dab00

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *previous,int32_t prefix,
          int32_t suffix,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  uint index;
  MethodInfo *method_00;
  
  if (DAT_05704e97 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"FFFFFF");
    DAT_05704e97 = '\x01';
  }
  if ((previous != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (__this = (previous->fields).Colors, __this != (System_Collections_Generic_List_string__o *)0x0
     )) {
    if ((0 < prefix) && (prefix <= (__this->fields)._size)) {
      index = prefix - 1;
LAB_041dab9c:
      method_00 = (MethodInfo *)(ulong)index;
      pSVar1 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_String_get_Item);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,method_00);
      return pSVar1;
    }
    if (0 < suffix) {
      pSVar1 = (previous->fields).Text;
      if (pSVar1 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      index = (pSVar1->fields)._stringLength - suffix;
      if ((-1 < (int)index) && ((int)index < (__this->fields)._size)) goto LAB_041dab9c;
    }
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHex
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex (uint16_t c, const MethodInfo* method);
// 0x41dad40

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex(uint16_t c,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined6 in_register_0000003a;
  
  iVar1 = (int)CONCAT62(in_register_0000003a,c);
  iVar2 = iVar1 + -0x30;
  if ((9 < (ushort)iVar2) && (iVar2 = iVar1 + -0x61, 5 < (ushort)iVar2)) {
    return CONCAT31((int3)((uint)iVar2 >> 8),(ushort)(c - 0x41) < 6);
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$AppendEscaped
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped (System_Text_StringBuilder_o* builder, uint16_t c, const MethodInfo* method);
// 0x41dabc0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped
               (System_Text_StringBuilder_o *builder,uint16_t c,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704e98 == '\0') {
    il2cpp_init_method_metadata(&"&gt;");
    il2cpp_init_method_metadata(&"&lt;");
    DAT_05704e98 = '\x01';
  }
  if (c == 0x3c) {
    if (builder == (System_Text_StringBuilder_o *)0x0) {
LAB_041dac3c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar1 = &"&lt;";
  }
  else {
    if (builder == (System_Text_StringBuilder_o *)0x0) goto LAB_041dac3c;
    if (c != 0x3e) {
      System_Text_StringBuilder__Append(builder,c,(MethodInfo *)0x0);
      return;
    }
    puVar1 = &"&gt;";
  }
  System_Text_StringBuilder__Append(builder,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return;
}


