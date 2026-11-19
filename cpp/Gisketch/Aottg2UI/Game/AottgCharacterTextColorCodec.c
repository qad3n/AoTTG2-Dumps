// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorCodec.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec.Document$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* __this, const MethodInfo* method);
// 0x58e8d90

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_0754554d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754554d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Colors = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Colors);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Parse
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse (System_String_o* serialized, const MethodInfo* method);
// 0x58e0740

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(System_String_o *serialized,MethodInfo *method)

{
  System_Collections_Generic_List_string__o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  bool bVar4;
  uint16_t value;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar7;
  MethodInfo *in_RCX;
  int32_t index;
  int iVar8;
  System_String_o *local_48;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_40;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *local_38;
  
  if (Il2CppMethodInitialized_07545540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545540 = '\x01';
  }
  local_48 = (System_String_o *)0x0;
  pGVar5 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  if (Il2CppMethodInitialized_0754554d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754554d = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  targetAddress = &(pGVar5->fields).Colors;
  (pGVar5->fields).Colors = pSVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  local_38 = &pGVar5->fields;
  (pGVar5->fields).Text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&local_38->Text);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if ((serialized != (System_String_o *)0x0) ||
     (serialized = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), serialized != (System_String_o *)0x0))
  {
    iVar8 = (serialized->fields)._stringLength;
    local_40 = pGVar5;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if (iVar8 < 1) goto label_058e09e6;
      index = 0;
      do {
        bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                          (serialized,index,&local_48,in_RCX);
        if (!bVar4) {
          System_String__get_Chars(serialized,index,(MethodInfo *)0x0);
          goto label_058e09e6;
        }
        index = index + 8;
      } while (index < (serialized->fields)._stringLength);
    }
    else if (0 < iVar8) {
      iVar8 = 0;
      pSVar7 = "FFFFFF";
      do {
        bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                          (serialized,iVar8,&local_48,in_RCX);
        if (bVar4) {
          iVar8 = iVar8 + 7;
          pSVar7 = local_48;
        }
        else {
          value = System_String__get_Chars(serialized,iVar8,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_530f6a0(__this,value,(MethodInfo *)0x0);
          in_RCX = MethodInfo_System_Collections_Generic_List_string_Add;
          pSVar6 = *targetAddress;
          if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_058e09e6;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_058e09e6;
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            in_RCX = (MethodInfo *)(ulong)(uVar2 + 1);
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)in_RCX->klass->rgctx_data[0xe].method);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (serialized->fields)._stringLength);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar7 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      pGVar5 = local_40;
      (local_40->fields).Text = pSVar7;
      Il2CppCodeGenWriteBarrier(&local_38->Text);
      return pGVar5;
    }
  }
label_058e09e6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Plain
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain (System_String_o* serialized, const MethodInfo* method);
// 0x58e55d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain(System_String_o *serialized,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(serialized,method);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pGVar1->fields).Text;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$FromEditableRaw
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw (System_String_o* value, const MethodInfo* method);
// 0x58e9030

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw
          (System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  bool bStack_19;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_18;
  System_String_o *pSStack_10;
  
  pGStack_18 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  pSStack_10 = (System_String_o *)0x0;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_57e90b0
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,&pGStack_18,
                     &pSStack_10,&bStack_19,in_R9);
  if (bVar1) {
    if (pGStack_18 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                      ((pGStack_18->fields).Text,
                       (System_Collections_Generic_IList_string__o *)(pGStack_18->fields).Colors,method_00);
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, const MethodInfo* method);
// 0x58e98f0

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
               (System_String_o *value,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_R9;
  bool bStack_9;
  System_String_o *pSStack_8;
  
  bStack_9 = false;
  pSStack_8 = (System_String_o *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_57e90b0
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,document,
                     &pSStack_8,&bStack_9,in_R9);
  return (bool)(bStack_9 & bVar1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, System_String_o** trailingColor, bool* colorsVisibleText, const MethodInfo* method);
// 0x58e90b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e9476: jmp 0x58e94fd
// asm:   0x58e950c: jmp 0x58e958a

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_57e90b0
               (System_String_o *value,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
               System_String_o **trailingColor,bool *colorsVisibleText,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar3;
  bool bVar4;
  bool bVar5;
  uint16_t value_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar8;
  int32_t index;
  MethodInfo *pMVar9;
  int iVar10;
  byte bVar11;
  int32_t local_6c;
  System_String_o *local_68;
  System_String_o *local_60;
  System_Text_StringBuilder_o *local_58;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **local_50;
  System_String_o **local_48;
  bool *local_40;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_38;
  
  local_50 = document;
  local_40 = colorsVisibleText;
  local_38 = existing;
  if (Il2CppMethodInitialized_07545541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545541 = '\x01';
  }
  local_60 = (System_String_o *)0x0;
  local_6c = 0;
  pGVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  if (Il2CppMethodInitialized_0754554d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_0754554d = '\x01';
  }
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (pGVar6->fields).Colors = pSVar7;
  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Colors);
  System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
  (pGVar6->fields).Text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Text);
  *local_50 = pGVar6;
  Il2CppCodeGenWriteBarrier(local_50);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  local_68 = "FFFFFF";
  *trailingColor = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(trailingColor);
  *local_40 = false;
  if ((value == (System_String_o *)0x0) &&
     (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value == (System_String_o *)0x0))
  goto label_058e958a;
  iVar10 = (value->fields)._stringLength;
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
    if (iVar10 < 1) goto label_058e958a;
    index = 0;
    local_58 = __this_00;
    do {
      bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                        (value,index,&local_60,&local_6c,(MethodInfo *)colorsVisibleText);
      if (!bVar5) {
        System_String__get_Chars(value,index,(MethodInfo *)0x0);
        goto label_058e958a;
      }
      index = index + local_6c;
    } while (index < (value->fields)._stringLength);
    bVar5 = true;
    bVar11 = 1;
    local_68 = local_60;
    local_48 = trailingColor;
label_058e94fd:
    __this_00 = local_58;
    trailingColor = local_48;
    if (local_58 == (System_Text_StringBuilder_o *)0x0) goto label_058e958a;
  }
  else {
    if (0 < iVar10) {
      iVar10 = 0;
      bVar5 = false;
      local_58 = __this_00;
      local_48 = trailingColor;
label_058e92b3:
      do {
        bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                          (value,iVar10,&local_60,&local_6c,(MethodInfo *)colorsVisibleText);
        if (bVar4) {
          local_68 = local_60;
          iVar10 = iVar10 + local_6c + -1;
          bVar5 = true;
          bVar11 = 1;
        }
        else {
          value_00 = System_String__get_Chars(value,iVar10,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_530f6a0(local_58,value_00,(MethodInfo *)0x0);
          pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (*local_50 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
          goto label_058e958a;
          pSVar7 = ((*local_50)->fields).Colors;
          if (bVar5) {
            if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_058e958a;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar7->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto label_058e958a;
            uVar2 = (pSVar7->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar7->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = local_68;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)local_68,
                         (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
            }
            *local_40 = true;
            bVar11 = 0;
            iVar10 = iVar10 + 1;
            if ((value->fields)._stringLength <= iVar10) break;
            goto label_058e92b3;
          }
          if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_058e958a;
          uVar2 = (pSVar7->fields)._size;
          if (Il2CppMethodInitialized_0754554a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_string_get_Count);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_string_get_Item);
            il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
            Il2CppMethodInitialized_0754554a = '\x01';
          }
          if ((((local_38 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) ||
               ((int)uVar2 < 0)) ||
              (__this = (local_38->fields).Colors, __this == (System_Collections_Generic_List_string__o *)0x0)
              ) || ((__this->fields)._size <= (int)uVar2)) {
            pSVar8 = "FFFFFF";
          }
          else {
            pMVar9 = (MethodInfo *)(ulong)uVar2;
            pSVar8 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this,uVar2,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar8,pMVar9);
          }
          pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_058e958a;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar7->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_058e958a;
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar8;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar8,
                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
          }
          bVar11 = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (value->fields)._stringLength);
      goto label_058e94fd;
    }
    bVar5 = false;
    bVar11 = 0;
  }
  pGVar6 = *local_50;
  pSVar8 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    (pGVar6->fields).Text = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Text);
    if ((bVar11 & bVar5) != 0) {
      *trailingColor = local_68;
      Il2CppCodeGenWriteBarrier(trailingColor);
    }
    return bVar5;
  }
label_058e958a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Serialize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x58e9590

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  uint16_t uVar4;
  int32_t iVar5;
  System_Text_StringBuilder_o *__this;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  System_Text_StringBuilder_o *pSVar8;
  System_String_o *pSVar9;
  ulong uVar10;
  uint index;
  int iVar11;
  MethodInfo *method_00;
  long lVar12;
  
  if (Il2CppMethodInitialized_07545542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545542 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (text != (System_String_o *)0x0) {
    iVar11 = (text->fields)._stringLength;
    if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        if (0 < iVar11) {
          bVar3 = System_String__op_Inequality("FFFFFF","FFFFFF",(MethodInfo *)0x0);
          if (!bVar3) {
            System_String__get_Chars(text,0,(MethodInfo *)0x0);
          }
        }
        goto label_058e98e9;
      }
      if (iVar11 < 1) goto label_058e98a4;
      iVar11 = 0;
      pSVar9 = "FFFFFF";
      do {
        pSVar7 = "FFFFFF";
        bVar3 = System_String__op_Inequality("FFFFFF",pSVar9,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar8 = System_Text_StringBuilder__Append_530f6a0(__this,0x5b,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) goto label_058e98e9;
          pSVar9 = System_String__ToLowerInvariant(pSVar7,(MethodInfo *)0x0);
          if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
          pSVar8 = System_Text_StringBuilder__Append_530ed80(pSVar8,pSVar9,(MethodInfo *)0x0);
          if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
          System_Text_StringBuilder__Append_530f6a0(pSVar8,0x5d,(MethodInfo *)0x0);
          pSVar9 = pSVar7;
        }
        uVar4 = System_String__get_Chars(text,iVar11,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append_530f6a0(__this,uVar4,(MethodInfo *)0x0);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (text->fields)._stringLength);
    }
    else if (0 < iVar11) {
      index = 0;
      pSVar9 = "FFFFFF";
      do {
        pSVar1 = colors->klass;
        uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar2 = (pSVar1->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar12)
                == TypeInfo_System_Collections_Generic_ICollection_string) {
              pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_058e96e3;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar10 * 0x10 != lVar12);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)colors,
                            (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e96e3:
        iVar5 = (*pVVar6->methodPtr)((Il2CppObject *)colors,pVVar6->method);
        if ((int)index < iVar5) {
          pSVar1 = colors->klass;
          uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
          if (uVar10 != 0) {
            pIVar2 = (pSVar1->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_Generic_IList_string) {
                pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
                goto label_058e975f;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar10 * 0x10 != lVar12);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)colors,
                              (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_058e975f:
          method_00 = (MethodInfo *)(ulong)index;
          pSVar7 = (*pVVar6->methodPtr)((Il2CppObject *)colors,index,pVVar6->method);
          pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar7,method_00);
        }
        else {
          pSVar7 = "FFFFFF";
        }
        bVar3 = System_String__op_Inequality(pSVar7,pSVar9,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
          pSVar8 = System_Text_StringBuilder__Append_530f6a0(__this,0x5b,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) goto label_058e98e9;
          pSVar9 = System_String__ToLowerInvariant(pSVar7,(MethodInfo *)0x0);
          if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
          pSVar8 = System_Text_StringBuilder__Append_530ed80(pSVar8,pSVar9,(MethodInfo *)0x0);
          if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
          System_Text_StringBuilder__Append_530f6a0(pSVar8,0x5d,(MethodInfo *)0x0);
          uVar4 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          pSVar9 = pSVar7;
        }
        else {
          uVar4 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_058e98e9;
        }
        System_Text_StringBuilder__Append_530f6a0(__this,uVar4,(MethodInfo *)0x0);
        index = index + 1;
      } while ((int)index < (text->fields)._stringLength);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
label_058e98a4:
      pSVar9 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar9;
    }
  }
label_058e98e9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$SerializeGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient (System_String_o* text, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x58e9ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e9f9e: nop 

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
          (System_String_o *text,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_IList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int32_t iVar5;
  Il2CppRGCTXData *method_00;
  System_Collections_Generic_List_string__o *__this;
  MethodInfo *item;
  System_String_o *pSVar6;
  ulong uVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  int index;
  long lVar9;
  
  if (Il2CppMethodInitialized_07545543 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545543 = '\x01';
  }
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), text == (System_String_o *)0x0)) {
label_058ea0bb:
    ThrowNullReferenceException();
  }
  if ((stops != (System_Collections_Generic_IList_string__o *)0x0) && ((text->fields)._stringLength != 0)) {
    pSVar3 = stops->klass;
    uVar7 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar4->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_ICollection_string) {
          method_00 = (Il2CppRGCTXData *)(pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9));
          goto label_058e9fd1;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar7 * 0x10 != lVar9);
    }
    method_00 = (Il2CppRGCTXData *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)stops,
                           (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e9fd1:
    iVar5 = (*method_00->rgctxDataDummy)((Il2CppObject *)stops,method_00[1].method);
    if (iVar5 != 0) {
      iVar5 = (text->fields)._stringLength;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this,iVar5,
                 (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
      iVar5 = (text->fields)._stringLength;
      pMVar8 = extraout_RDX;
      if (0 < iVar5) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                    (0,iVar5,stops,(MethodInfo *)method_00);
          ThrowNullReferenceException();
        }
        index = 0;
        do {
          while( true ) {
            item = (MethodInfo *)
                   Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                             (index,iVar5,stops,(MethodInfo *)method_00);
            pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (Il2CppRGCTXData *)(__this->fields)._items;
            if (method_00 == (Il2CppRGCTXData *)0x0) goto label_058ea0bb;
            uVar2 = (__this->fields)._size;
            if (*(uint *)&method_00[3].rgctxDataDummy <= uVar2) break;
            (__this->fields)._size = uVar2 + 1;
            method_00[(long)(int)uVar2 + 4].method = item;
            Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
            index = index + 1;
            iVar5 = (text->fields)._stringLength;
            pMVar8 = extraout_RDX_01;
            if (iVar5 <= index) goto label_058ea09c;
          }
          method_00 = pMVar8->klass->rgctx_data;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)method_00[0xe].method);
          index = index + 1;
          iVar5 = (text->fields)._stringLength;
          pMVar8 = extraout_RDX_00;
        } while (index < iVar5);
      }
label_058ea09c:
      pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         (text,(System_Collections_Generic_IList_string__o *)__this,pMVar8);
      return pSVar6;
    }
  }
  return text;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Retarget
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget (System_String_o* previousSerialized, System_String_o* nextText, const MethodInfo* method);
// 0x58ea620
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ea7db: jmp 0x58ea851
// asm:   0x58ea7f9: nop dword ptr [rax]
// asm:   0x58ea8c9: nop dword ptr [rax]
// asm:   0x58ea94b: lea r15, [rip + 0x19ac0c6]  ; MethodInfo_System_Collections_Generic_List_string_set_Item
// asm:   0x58ea952: nop word ptr cs:[rax + rax]

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
          (System_String_o *previousSerialized,System_String_o *nextText,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *method_00;
  System_Collections_Generic_List_string__o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  int iVar11;
  int32_t index;
  int32_t iVar12;
  int iVar13;
  
  pMVar10 = (MethodInfo *)nextText;
  if (Il2CppMethodInitialized_07545544 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545544 = '\x01';
  }
  method_00 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(previousSerialized,pMVar10);
  if ((nextText != (System_String_o *)0x0) ||
     (nextText = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), nextText != (System_String_o *)0x0)) {
    iVar12 = (nextText->fields)._stringLength;
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395c990
              ((System_Collections_Generic_List_object__o *)pSVar8,iVar12,
               (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    if (0 < (nextText->fields)._stringLength) {
      if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ea851;
      iVar11 = 0;
      do {
        while( true ) {
          pSVar9 = "FFFFFF";
          pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar8->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_058ea851;
          uVar2 = (pSVar8->fields)._size;
          if ((uint)pSVar4->max_length <= uVar2) break;
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          iVar11 = iVar11 + 1;
          if ((nextText->fields)._stringLength <= iVar11) goto label_058ea775;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (nextText->fields)._stringLength);
    }
label_058ea775:
    if ((method_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
       (pSVar9 = (method_00->fields).Text, pSVar9 != (System_String_o *)0x0)) {
      iVar12 = 0;
      do {
        if (((pSVar9->fields)._stringLength <= iVar12) || ((nextText->fields)._stringLength <= iVar12)) {
label_058ea7eb:
          iVar11 = 0;
          iVar13 = -1;
          goto label_058ea800;
        }
        uVar6 = System_String__get_Chars(pSVar9,iVar12,(MethodInfo *)0x0);
        uVar7 = System_String__get_Chars(nextText,iVar12,(MethodInfo *)0x0);
        if (uVar6 != uVar7) {
          pSVar9 = (method_00->fields).Text;
          if (pSVar9 != (System_String_o *)0x0) goto label_058ea7eb;
          break;
        }
        iVar12 = iVar12 + 1;
        pSVar9 = (method_00->fields).Text;
      } while (pSVar9 != (System_String_o *)0x0);
    }
  }
  goto label_058ea851;
  while( true ) {
    pSVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,index,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    System_Collections_Generic_List_object___set_Item
              ((System_Collections_Generic_List_object__o *)pSVar8,index,(Il2CppObject *)pSVar9,
               (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    index = index + 1;
    if (iVar12 == index) break;
label_058ea880:
    pSVar5 = (method_00->fields).Colors;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ea851;
  }
label_058ea8af:
  if (iVar11 != 0) {
    if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) {
      pSVar9 = (method_00->fields).Text;
      if ((pSVar9 != (System_String_o *)0x0) &&
         (pSVar8 = (method_00->fields).Colors, pSVar8 != (System_Collections_Generic_List_string__o *)0x0)) {
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar8,(pSVar9->fields)._stringLength - iVar11
                   ,(MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        ThrowNullReferenceException();
      }
      goto label_058ea851;
    }
    iVar13 = -iVar11;
    do {
      pSVar9 = (method_00->fields).Text;
      if ((pSVar9 == (System_String_o *)0x0) ||
         (pSVar5 = (method_00->fields).Colors, pSVar5 == (System_Collections_Generic_List_string__o *)0x0))
      goto label_058ea851;
      iVar3 = (nextText->fields)._stringLength;
      pSVar9 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,
                          (pSVar9->fields)._stringLength + iVar13,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar3 + iVar13,(Il2CppObject *)pSVar9,
                 (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                     (method_00,iVar12,iVar11,(MethodInfo *)method_00);
  iVar11 = (nextText->fields)._stringLength - iVar11;
  pMVar10 = extraout_RDX;
  if (iVar12 < iVar11) {
    if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) goto label_058ea851;
    do {
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,iVar12,(Il2CppObject *)pSVar9,
                 (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
      iVar12 = iVar12 + 1;
      pMVar10 = extraout_RDX_00;
    } while (iVar12 < iVar11);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (nextText,(System_Collections_Generic_IList_string__o *)pSVar8,pMVar10);
  return pSVar9;
  while( true ) {
    uVar6 = System_String__get_Chars(pSVar9,iVar3 + iVar13,(MethodInfo *)0x0);
    uVar7 = System_String__get_Chars(nextText,(nextText->fields)._stringLength + iVar13,(MethodInfo *)0x0);
    if (uVar6 != uVar7) goto label_058ea856;
    iVar11 = iVar11 + 1;
    pSVar9 = (method_00->fields).Text;
    iVar13 = iVar13 + -1;
    if (pSVar9 == (System_String_o *)0x0) break;
label_058ea800:
    iVar3 = (pSVar9->fields)._stringLength;
    if ((-iVar12 + iVar3 <= iVar11) || ((nextText->fields)._stringLength + -iVar12 <= iVar11)) {
label_058ea856:
      if (iVar12 == 0) goto label_058ea8af;
      if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
        index = 0;
        goto label_058ea880;
      }
      pSVar8 = (method_00->fields).Colors;
      if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar8,0,
                   (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        ThrowNullReferenceException();
      }
      break;
    }
  }
label_058ea851:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$RichText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x58e0d10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e0df0: mov rbp, r13
// asm:   0x58e0f3d: jmp 0x58e1004
// asm:   0x58e0faf: mov rbp, r13
// asm:   0x58e0fc5: jmp 0x58e1004

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  uint16_t c;
  int32_t iVar4;
  System_Text_StringBuilder_o *__this;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_String_o *pSVar8;
  ulong uVar9;
  MethodInfo *method_00;
  uint index;
  MethodInfo *method_01;
  long lVar10;
  
  if (Il2CppMethodInitialized_07545545 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    Il2CppMethodInitialized_07545545 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (text != (System_String_o *)0x0) {
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if (0 < (text->fields)._stringLength) {
      index = 0;
      do {
        if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
label_058e0ee0:
          pSVar6 = "FFFFFF";
        }
        else {
          pSVar1 = colors->klass;
          uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar2 = (pSVar1->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(System_Collections_Generic_ICollection_string__c **)
                   ((long)&pIVar2->interfaceType + lVar10) ==
                  TypeInfo_System_Collections_Generic_ICollection_string) {
                pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
                goto label_058e0e81;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)colors,
                              (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e0e81:
          iVar4 = (*pVVar5->methodPtr)((Il2CppObject *)colors,pVVar5->method);
          if (iVar4 <= (int)index) goto label_058e0ee0;
          pSVar1 = colors->klass;
          uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar2 = (pSVar1->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar10) ==
                  TypeInfo_System_Collections_Generic_IList_string) {
                pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
                goto label_058e0eff;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)colors,
                              (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0);
label_058e0eff:
          method_01 = (MethodInfo *)(ulong)index;
          pSVar6 = (*pVVar5->methodPtr)((Il2CppObject *)colors,index,pVVar5->method);
          pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar6,method_01);
        }
        bVar3 = System_String__op_Inequality(pSVar6,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
          if (bVar3) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_058e1004;
          }
          else {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_058e1004;
            System_Text_StringBuilder__Append_530ed80(__this,"</color>",(MethodInfo *)0x0);
          }
          pSVar7 = System_Text_StringBuilder__Append_530ed80(__this,"<color=#",(MethodInfo *)0x0);
          if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,pSVar6,(MethodInfo *)0x0),
             pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto label_058e1004;
          System_Text_StringBuilder__Append_530f6a0(pSVar7,0x3e,(MethodInfo *)0x0);
          pSVar8 = pSVar6;
        }
        c = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped(__this,c,method_00);
        index = index + 1;
      } while ((int)index < (text->fields)._stringLength);
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this != (System_Text_StringBuilder_o *)0x0) goto label_058e0fe0;
    }
    else if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530ed80(__this,"</color>",(MethodInfo *)0x0);
label_058e0fe0:
      pSVar8 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar8;
    }
  }
label_058e1004:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$NormalizeRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb (System_String_o* value, const MethodInfo* method);
// 0x58e9d40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e9ebc: mov rdi, r15
// asm:   0x58e9ee5: mov rdi, rax
// asm:   0x58e9ee8: jmp 0x58e9ebf

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  int iVar4;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_30;
  
  if (Il2CppMethodInitialized_07545546 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_07545546 = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) goto label_058e9eea;
    if ((value->fields)._stringLength == 6) {
      iVar4 = 0;
      do {
        uVar2 = System_String__get_Chars(value,iVar4,(MethodInfo *)0x0);
        if ((9 < (ushort)(uVar2 - 0x30)) &&
           ((0x25 < uVar2 - 0x41 || ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0))))
        goto label_058e9dd2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (value->fields)._stringLength);
      goto label_058e9ebf;
    }
  }
label_058e9dd2:
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) goto label_058e9eea;
    if (((value->fields)._stringLength == 7) &&
       (uVar2 = System_String__get_Chars(value,0,(MethodInfo *)0x0), uVar2 == 0x23)) {
      pSVar3 = System_String__Substring(value,1,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pSVar3 != (System_String_o *)0x0) {
          if ((pSVar3->fields)._stringLength != 6) goto label_058e9e7e;
          iVar4 = 0;
          do {
            uVar2 = System_String__get_Chars(pSVar3,iVar4,(MethodInfo *)0x0);
            if ((9 < (ushort)(uVar2 - 0x30)) &&
               ((0x25 < uVar2 - 0x41 || ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0))))
            goto label_058e9e7e;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (pSVar3->fields)._stringLength);
          value = System_String__Substring(value,1,(MethodInfo *)0x0);
          if (value != (System_String_o *)0x0) {
label_058e9ebf:
            pSVar3 = System_String__ToUpperInvariant(value,(MethodInfo *)0x0);
            return pSVar3;
          }
        }
label_058e9eea:
        ThrowNullReferenceException();
      }
    }
  }
label_058e9e7e:
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
  if (bVar1) {
    local_30.r = local_48.r;
    local_30.g = local_48.g;
    local_30.b = local_48.b;
    local_30.a = local_48.a;
    pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                       ((UnityEngine_Color_o *)&local_30,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = "FFFFFF";
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$GradientColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor (int32_t index, int32_t length, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x58ea0d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ea50c: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
          (int32_t index,int32_t length,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  System_Collections_Generic_IList_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  int32_t iVar4;
  uint uVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  ulong uVar8;
  uint uVar9;
  MethodInfo *pMVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Color_Fields local_68;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  UnityEngine_Color_Fields local_48;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545547 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_07545547 = '\x01';
  }
  if (stops == (System_Collections_Generic_IList_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea171;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ea171:
  iVar4 = (*pVVar6->methodPtr)((Il2CppObject *)stops,pVVar6->method);
  if ((length < 2) || (iVar4 == 1)) {
    pSVar1 = stops->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IList_string) {
          pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_058ea311;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)stops,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,
                        0);
label_058ea311:
    pMVar10 = (MethodInfo *)0x0;
    pSVar7 = (*pVVar6->methodPtr)((Il2CppObject *)stops,0,pVVar6->method);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar7,pMVar10);
    return pSVar7;
  }
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea238;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ea238:
  iVar4 = (*pVVar6->methodPtr)((Il2CppObject *)stops,pVVar6->method);
  fVar13 = (float)(iVar4 + -1);
  if (g_data_0753e7f6 == '\0') {
    local_58 = (float)(iVar4 + -1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e7f6 = '\x01';
    fVar13 = local_58;
  }
  fVar13 = ((float)index / (float)(length + -1)) * fVar13;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar14 = floorf(fVar13);
  uVar9 = (uint)fVar14;
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea343;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ea343:
  iVar4 = (*pVVar6->methodPtr)((Il2CppObject *)stops,pVVar6->method);
  uVar5 = iVar4 - 1U;
  if ((int)uVar9 < (int)(iVar4 - 1U)) {
    uVar5 = uVar9;
  }
  uVar12 = 0;
  if (-1 < (int)uVar9) {
    uVar12 = uVar5;
  }
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea3b1;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058ea3b1:
  iVar4 = (*pVVar6->methodPtr)((Il2CppObject *)stops,pVVar6->method);
  uVar9 = iVar4 - 1U;
  if ((int)(uVar12 + 1) < (int)(iVar4 - 1U)) {
    uVar9 = uVar12 + 1;
  }
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IList_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea431;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0)
  ;
label_058ea431:
  local_58 = (float)(int)uVar12;
  pMVar10 = (MethodInfo *)(ulong)uVar12;
  pSVar7 = (*pVVar6->methodPtr)((Il2CppObject *)stops,uVar12,pVVar6->method);
  if (Il2CppMethodInitialized_07545548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07545548 = '\x01';
  }
  fVar13 = fVar13 - local_58;
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar7,pMVar10);
  pSVar7 = System_String__Concat_52f0320("#",pSVar7,(MethodInfo *)0x0);
  bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar7,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  if (bVar3) {
    local_48.r = local_68.r;
    local_48.g = local_68.g;
    local_58 = local_68.b;
    fStack_54 = local_68.a;
  }
  else {
    local_58 = 1.0;
    fStack_54 = 1.0;
    local_48.r = 1.0;
    local_48.g = 1.0;
  }
  local_48.b = 0.0;
  local_48.a = 0.0;
  uStack_50 = 0;
  uStack_4c = 0;
  fVar14 = 1.0;
  if (fVar13 <= 1.0) {
    fVar14 = fVar13;
  }
  pSVar1 = stops->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IList_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
        goto label_058ea553;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar8 * 0x10 != lVar11);
  }
  local_38 = ZEXT416((uint)fVar14);
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)stops,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string,0)
  ;
  fVar14 = (float)local_38._0_4_;
label_058ea553:
  fVar14 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14);
  pMVar10 = (MethodInfo *)(ulong)uVar9;
  pSVar7 = (*pVVar6->methodPtr)((Il2CppObject *)stops,uVar9,pVVar6->method);
  if (Il2CppMethodInitialized_07545548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07545548 = '\x01';
  }
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar7,pMVar10);
  pSVar7 = System_String__Concat_52f0320("#",pSVar7,(MethodInfo *)0x0);
  bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar7,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  if (bVar3) {
    fVar13 = local_68.r;
    fVar15 = local_68.g;
    fVar16 = local_68.b;
    fVar17 = local_68.a;
  }
  else {
    fVar13 = 1.0;
    fVar15 = 1.0;
    fVar16 = fVar13;
    fVar17 = fVar15;
  }
  fVar18 = 0.0;
  if (0.0 <= fVar14) {
    fVar18 = fVar14;
  }
  local_68.g = (fVar15 - local_48.g) * fVar18 + local_48.g;
  local_68.r = (fVar13 - local_48.r) * fVar18 + local_48.r;
  local_68.a = (fVar17 - fStack_54) * fVar18 + fStack_54;
  local_68.b = (fVar16 - local_58) * fVar18 + local_58;
  pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                     ((UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  return pSVar7;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ParseRgb
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb (System_String_o* value, const MethodInfo* method);
// 0x58eabd0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb(System_String_o *value,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_07545548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07545548 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(value,method);
  pSVar3 = System_String__Concat_52f0320("#",pSVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if (bVar2) {
    UVar1.b = local_18.b;
    UVar1.a = local_18.a;
    UVar1.r = local_18.r;
    UVar1.g = local_18.g;
    return (UnityEngine_Color_o)UVar1;
  }
  UVar4.fields.b = 1.0;
  UVar4.fields.a = 1.0;
  UVar4.fields.r = 1.0;
  UVar4.fields.g = 1.0;
  return (UnityEngine_Color_o)UVar4.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsRgb
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb (System_String_o* value, const MethodInfo* method);
// 0x58eab40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58eab6d: movabs r12, 0x3f0000003f
// asm:   0x58eab77: jmp 0x58eab88
// asm:   0x58eabb1: jmp 0x58eabb6

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int index;
  bool bVar3;
  
  bVar3 = false;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    index = 0;
    bVar3 = false;
    if ((value->fields)._stringLength == 6) {
      do {
        uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if (9 < (ushort)(uVar2 - 0x30)) {
          if (0x25 < uVar2 - 0x41) {
            return false;
          }
          if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
            return false;
          }
        }
        index = index + 1;
      } while (index < (value->fields)._stringLength);
      bVar3 = true;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag (System_String_o* text, int32_t index, System_String_o** color, const MethodInfo* method);
// 0x58e8e10

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
               (System_String_o *text,int32_t index,System_String_o **color,MethodInfo *method)

{
  int index_00;
  int index_01;
  uint16_t uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  *color = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(color);
  if (text == (System_String_o *)0x0) {
label_058e902b:
    ThrowNullReferenceException();
  }
  index_00 = index + 7;
  if (index_00 < (text->fields)._stringLength) {
    bVar3 = false;
    uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar1 == 0x5b) {
      bVar3 = false;
      uVar1 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
      if (uVar1 == 0x5d) {
        index_01 = index + 1;
        if (index_01 < index_00) {
          uVar1 = System_String__get_Chars(text,index_01,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar1 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar1 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar1 = System_String__get_Chars(text,index + 4,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar1 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar1 = System_String__get_Chars(text,index + 6,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
        }
        pSVar2 = System_String__Substring_53042f0(text,index_01,6,(MethodInfo *)0x0);
        if (pSVar2 == (System_String_o *)0x0) goto label_058e902b;
        pSVar2 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
        *color = pSVar2;
        Il2CppCodeGenWriteBarrier(color);
        bVar3 = true;
      }
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsImportColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag (System_String_o* text, int32_t index, System_String_o** color, int32_t* length, const MethodInfo* method);
// 0x58e9930
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e9c90: mov qword ptr [r15], rsi
// asm:   0x58e9c93: mov rdi, r15
// asm:   0x58e9c96: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x58e9c9b: mov dword ptr [r14], ebx
// asm:   0x58e9c9e: mov r13b, 1
// asm:   0x58e9ca1: jmp 0x58e99f5

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
               (System_String_o *text,int32_t index,System_String_o **color,int32_t *length,MethodInfo *method
               )

{
  int index_00;
  int index_01;
  uint index_02;
  int index_03;
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  int32_t iVar4;
  MethodInfo *method_00;
  
  *color = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(color);
  *length = 0;
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (text == (System_String_o *)0x0) {
label_058e9ca6:
    ThrowNullReferenceException();
  }
  if (index < (text->fields)._stringLength) {
    uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar2 != 0x5b) {
      return false;
    }
    index_00 = index + 4;
    if (((((index_00 < (text->fields)._stringLength) &&
          (uVar2 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0), uVar2 == 0x5d)) && (-2 < index))
        && (index_00 <= (text->fields)._stringLength)) &&
       ((index_02 = index + 1, index_00 <= (int)index_02 ||
        ((((uVar2 = System_String__get_Chars(text,index_02,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
           ((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))) &&
          ((uVar2 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
           ((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))))) &&
         ((uVar2 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
          ((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))))))))) {
      method_00 = (MethodInfo *)(ulong)index_02;
      pSVar3 = System_String__Substring_53042f0(text,index_02,3,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(pSVar3,method_00);
      iVar4 = 5;
label_058e9c90:
      *color = pSVar3;
      Il2CppCodeGenWriteBarrier(color);
      *length = iVar4;
      return true;
    }
    index_01 = index + 7;
    if (index_01 < (text->fields)._stringLength) {
      uVar2 = System_String__get_Chars(text,index_01,(MethodInfo *)0x0);
      if (uVar2 != 0x5d) {
        return false;
      }
      if ((-2 < index) && (index_01 <= (text->fields)._stringLength)) {
        index_03 = index + 1;
        if (index_03 < index_01) {
          uVar2 = System_String__get_Chars(text,index_03,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar2 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar2 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar2 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar2 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          uVar2 = System_String__get_Chars(text,index + 6,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar2 - 0x30)) {
            if (0x25 < uVar2 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
        }
        pSVar3 = System_String__Substring_53042f0(text,index_03,6,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) goto label_058e9ca6;
        pSVar3 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
        iVar4 = 8;
        goto label_058e9c90;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHexRange
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange (System_String_o* text, int32_t start, int32_t count, const MethodInfo* method);
// 0x58eac70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58eac9d: movabs r12, 0x3f0000003f
// asm:   0x58eaca7: jmp 0x58eacb7
// asm:   0x58eacdf: jmp 0x58eace3

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange
               (System_String_o *text,int32_t start,int32_t count,MethodInfo *method)

{
  uint16_t uVar1;
  
  if (-1 < (start | count)) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (count + start <= (text->fields)._stringLength) {
      if (start < count + start) {
        do {
          uVar1 = System_String__get_Chars(text,start,(MethodInfo *)0x0);
          if (9 < (ushort)(uVar1 - 0x30)) {
            if (0x25 < uVar1 - 0x41) {
              return false;
            }
            if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
              return false;
            }
          }
          start = start + 1;
          count = count + -1;
        } while (count != 0);
      }
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExpandRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb (System_String_o* rgb, const MethodInfo* method);
// 0x58ead00

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(System_String_o *rgb,MethodInfo *method)

{
  uint16_t uVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  uint16_t local_2c;
  uint16_t local_2a;
  uint16_t local_28;
  uint16_t local_26;
  uint16_t local_24;
  uint16_t local_22;
  
  if (Il2CppMethodInitialized_07545549 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545549 = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if (rgb == (System_String_o *)0x0) {
label_058eb019:
    ThrowNullReferenceException();
  }
  uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  local_22 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_22);
  if (args == (System_Object_array *)0x0) goto label_058eb019;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_058eb00a;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
    local_24 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_24);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_058eb00a;
    }
    if ((args->max_length & 0xfffffffe) == 0) goto label_058eb005;
    args->m_Items[1] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items + 1);
    uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
    local_26 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_26);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_058eb00a;
    }
    if ((uint)args->max_length < 3) goto label_058eb005;
    args->m_Items[2] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items + 2);
    uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
    local_28 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_28);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_058eb00a;
    }
    if ((args->max_length & 0xfffffffc) == 0) goto label_058eb005;
    args->m_Items[3] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items + 3);
    uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
    local_2a = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_2a);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_058eb00a;
    }
    if (4 < (uint)args->max_length) {
      args->m_Items[4] = pIVar2;
      Il2CppCodeGenWriteBarrier(args->m_Items + 4);
      uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
      local_2c = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556750,&local_2c);
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
label_058eb00a:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (5 < (uint)args->max_length) {
        args->m_Items[5] = pIVar2;
        Il2CppCodeGenWriteBarrier(args->m_Items + 5);
        pSVar4 = System_String__Concat_5302070(args,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
label_058eb005:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExistingColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, int32_t index, const MethodInfo* method);
// 0x58e9cb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (Il2CppMethodInitialized_0754554a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_0754554a = '\x01';
  }
  if ((((existing == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) || (index < 0)) ||
      (__this = (existing->fields).Colors, __this == (System_Collections_Generic_List_string__o *)0x0)) ||
     ((__this->fields)._size <= index)) {
    return "FFFFFF";
  }
  pSVar1 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this,index,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,method_00);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$EditColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* previous, int32_t prefix, int32_t suffix, const MethodInfo* method);
// 0x58ea9f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58eaa62: lea rax, [rip + 0x19abf9f]  ; MethodInfo_System_Collections_Generic_List_string_get_Item
// asm:   0x58eaa69: mov rdx, qword ptr [rax]
// asm:   0x58eaa6c: jmp 0x58eaa8b

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *previous,int32_t prefix,
          int32_t suffix,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  uint index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754554b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_0754554b = '\x01';
  }
  if ((previous != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (__this = (previous->fields).Colors, __this != (System_Collections_Generic_List_string__o *)0x0)) {
    if ((0 < prefix) && (prefix <= (__this->fields)._size)) {
      index = prefix - 1;
override_prt_58eaa8b_5f7def29:
      method_00 = (MethodInfo *)(ulong)index;
      pSVar1 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,method_00);
      return pSVar1;
    }
    if (0 < suffix) {
      pSVar1 = (previous->fields).Text;
      if (pSVar1 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      index = (pSVar1->fields)._stringLength - suffix;
      if ((-1 < (int)index) && ((int)index < (__this->fields)._size)) goto override_prt_58eaa8b_5f7def29;
    }
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHex
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex (uint16_t c, const MethodInfo* method);
// 0x58eac50

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex(uint16_t c,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = true;
  if ((9 < (ushort)(c - 0x30)) && (5 < (ushort)(c - 0x61))) {
    bVar1 = (ushort)(c - 0x41) < 6;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$AppendEscaped
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped (System_Text_StringBuilder_o* builder, uint16_t c, const MethodInfo* method);
// 0x58eaab0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped
               (System_Text_StringBuilder_o *builder,uint16_t c,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_0754554c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
    il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
    Il2CppMethodInitialized_0754554c = '\x01';
  }
  if (c == 0x3e) {
    if (builder != (System_Text_StringBuilder_o *)0x0) {
      ppSVar1 = &"&gt;";
label_058eab08:
      System_Text_StringBuilder__Append_530ed80(builder,*ppSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  else if (c == 0x3c) {
    if (builder != (System_Text_StringBuilder_o *)0x0) {
      ppSVar1 = &"&lt;";
      goto label_058eab08;
    }
  }
  else if (builder != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_530f6a0(builder,c,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


