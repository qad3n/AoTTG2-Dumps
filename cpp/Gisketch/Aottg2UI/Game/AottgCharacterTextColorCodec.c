// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorCodec.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec.Document$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* __this, const MethodInfo* method);
// 0x181e0bb90

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184344bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184344bd9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Colors = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Colors,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Parse
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse (System_String_o* serialized, const MethodInfo* method);
// 0x181dff000
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dff167: nop word ptr [rax + rax]
// asm:   0x181dff19b: inc ebx
// asm:   0x181dff19d: cmp ebx, esi
// asm:   0x181dff19f: jl 0x181dff170

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(System_String_o *serialized,MethodInfo *method)

{
  int index;
  uint16_t uVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  int index_00;
  System_String_o *local_res20;
  
  if (Il2CppMethodInitialized_184344bcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bcc = '\x01';
  }
  local_res20 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields).Text = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Text,pSVar2);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if ((serialized != (System_String_o *)0x0) ||
       (serialized = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
       serialized != (System_String_o *)0x0)) {
      index_00 = 0;
label_181dff100:
      do {
        if ((serialized->fields)._stringLength <= index_00) goto label_181dff230;
        local_res20 = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&local_res20,(void *)0x0);
        if (((index_00 + 7 < (serialized->fields)._stringLength) &&
            (uVar1 = System_String__get_Chars(serialized,index_00,(MethodInfo *)0x0), uVar1 == 0x5b)) &&
           (uVar1 = System_String__get_Chars(serialized,index_00 + 7,(MethodInfo *)0x0), uVar1 == 0x5d)) {
          index = index_00;
          do {
            index = index + 1;
            if (index_00 + 7 <= index) {
              pSVar2 = System_String__Substring_1972740(serialized,index_00 + 1,6,(MethodInfo *)0x0);
              if (pSVar2 == (System_String_o *)0x0) goto label_181dff281;
              local_res20 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
              Il2CppCodeGenWriteBarrier(&local_res20,local_res20);
              index_00 = index_00 + 8;
              goto label_181dff100;
            }
            uVar1 = System_String__get_Chars(serialized,index,(MethodInfo *)0x0);
          } while ((((ushort)(uVar1 - 0x30) < 10) || ((ushort)(uVar1 - 0x61) < 6)) ||
                  ((0x40 < uVar1 && (uVar1 < 0x47))));
        }
        uVar1 = System_String__get_Chars(serialized,index_00,(MethodInfo *)0x0);
        if ((__this_00 == (System_Text_StringBuilder_o *)0x0) ||
           (System_Text_StringBuilder__Append_197e090(__this_00,uVar1,(MethodInfo *)0x0),
           (__this->fields).Colors == (System_Collections_Generic_List_string__o *)0x0)) break;
        il2cpp_runtime_helper_180012890();
        index_00 = index_00 + 1;
      } while( true );
    }
  }
label_181dff281:
  ThrowNullReferenceException();
label_181dff230:
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pSVar2 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    (__this->fields).Text = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Text,pSVar2);
    return __this;
  }
  goto label_181dff281;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Plain
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain (System_String_o* serialized, const MethodInfo* method);
// 0x181dff290

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain(System_String_o *serialized,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(serialized,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (pGVar1->fields).Text;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$FromEditableRaw
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw (System_String_o* value, const MethodInfo* method);
// 0x181dfe3b0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfe4ec: mov rcx, r15
// asm:   0x181dfe4ef: mov rbp, r15
// asm:   0x181dfe4f2: mov qword ptr [rsp + 0x38], rcx
// asm:   0x181dfe4f7: jmp 0x181dfe51b
// asm:   0x181dfe51f: nop 
// asm:   0x181dfe58f: mov rdx, rsi
// asm:   0x181dfe592: jmp 0x181dfe5d8
// asm:   0x181dfe5d1: mov rdx, qword ptr [rip + 0x22e0da0]  ; "FFFFFF"
// asm:   0x181dfe6c7: mov rax, r15
// asm:   0x181dfe6ca: jmp 0x181dfe6a2

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw
          (System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint16_t value_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar6;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  int index;
  System_String_o *pSVar9;
  int32_t local_res8 [2];
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_res18;
  System_String_o *local_res20;
  System_String_o *local_48;
  System_String_o *local_40;
  
  bVar3 = 0;
  local_res18 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (Il2CppMethodInitialized_184344bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bcd = '\x01';
  }
  local_48 = (System_String_o *)0x0;
  local_res8[0] = 0;
  pGVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (pGVar6->fields).Text = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Text,pSVar9);
    local_res18 = pGVar6;
    Il2CppCodeGenWriteBarrier(&local_res18,pGVar6);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    pSVar9 = "FFFFFF";
    local_res20 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&local_res20,(void *)0x0);
    bVar4 = false;
    bVar2 = false;
    pSVar7 = value;
    if ((value != (System_String_o *)0x0) ||
       (local_40 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar7 = local_40,
       local_40 != (System_String_o *)0x0)) {
      index = 0;
      local_40 = pSVar7;
      while (pGVar6 = local_res18, index < (local_40->fields)._stringLength) {
        bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                          (pSVar7,index,&local_48,local_res8,(MethodInfo *)0x0);
        if (bVar5) {
          bVar4 = true;
          index = index + local_res8[0];
          bVar2 = true;
          bVar3 = 1;
          pSVar9 = local_48;
        }
        else {
          value_00 = System_String__get_Chars(pSVar7,index,(MethodInfo *)0x0);
          if ((__this == (System_Text_StringBuilder_o *)0x0) ||
             (System_Text_StringBuilder__Append_197e090(__this,value_00,(MethodInfo *)0x0),
             local_res18 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0))
          goto label_181dfe6cc;
          pSVar1 = (local_res18->fields).Colors;
          pSVar8 = pSVar9;
          if (!bVar2) {
            if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181dfe6cc;
            pSVar8 = "FFFFFF";
            if (Il2CppMethodInitialized_184344bd6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Item);
              il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
              Il2CppMethodInitialized_184344bd6 = '\x01';
              pSVar8 = "FFFFFF";
            }
          }
          if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181dfe6cc;
          il2cpp_runtime_helper_180012890(pSVar1,pSVar8);
          bVar3 = 0;
          index = index + 1;
        }
      }
      if ((__this != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar7 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                             (__this,(__this->klass->vtable)._3_ToString.method),
         pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) {
        (pGVar6->fields).Text = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).Text,pSVar7);
        if ((bool)(bVar4 & bVar3)) {
          local_res20 = pSVar9;
          Il2CppCodeGenWriteBarrier(&local_res20,pSVar9);
        }
        if (bVar4) {
          if (local_res18 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
            ThrowNullReferenceException();
          }
          value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                            ((local_res18->fields).Text,
                             (System_Collections_Generic_IList_string__o *)(local_res18->fields).Colors,
                             (MethodInfo *)0x0);
        }
        return value;
      }
    }
  }
label_181dfe6cc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, const MethodInfo* method);
// 0x181dfff70

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
               (System_String_o *value,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,MethodInfo *method)

{
  bool bVar1;
  bool local_res8 [8];
  System_String_o *local_res10 [3];
  
  local_res8[0] = false;
  local_res10[0] = (System_String_o *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_1dffc50
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,document,
                     local_res10,local_res8,(MethodInfo *)0x0);
  return (bool)(bVar1 & local_res8[0]);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, System_String_o** trailingColor, bool* colorsVisibleText, const MethodInfo* method);
// 0x181dffc50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dffea7: mov rax, qword ptr [rip + 0x22df4ca]  ; "FFFFFF"

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_1dffc50
               (System_String_o *value,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
               System_String_o **trailingColor,bool *colorsVisibleText,MethodInfo *method)

{
  int32_t index;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o *__this;
  bool bVar2;
  bool bVar3;
  uint16_t value_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar4;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar5;
  int index_00;
  byte bVar6;
  System_String_o *pSVar7;
  bool local_res18;
  int32_t local_44;
  System_String_o *local_40;
  
  if (Il2CppMethodInitialized_184344bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bcd = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  local_44 = 0;
  pGVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (pGVar4->fields).Text = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).Text,pSVar7);
    *document = pGVar4;
    Il2CppCodeGenWriteBarrier(document,pGVar4);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    pSVar7 = "FFFFFF";
    *trailingColor = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(trailingColor,(void *)0x0);
    *colorsVisibleText = false;
    if ((value != (System_String_o *)0x0) ||
       (value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), value != (System_String_o *)0x0)) {
      bVar6 = 0;
      local_res18 = false;
      index_00 = 0;
      bVar2 = false;
      while (index_00 < (value->fields)._stringLength) {
        bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                          (value,index_00,&local_40,&local_44,(MethodInfo *)0x0);
        if (bVar3) {
          index_00 = index_00 + local_44;
          local_res18 = true;
          bVar2 = true;
          bVar6 = 1;
          pSVar7 = local_40;
        }
        else {
          value_00 = System_String__get_Chars(value,index_00,(MethodInfo *)0x0);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_181dfff65;
          System_Text_StringBuilder__Append_197e090(__this_00,value_00,(MethodInfo *)0x0);
          if (*document == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
          goto label_181dfff65;
          pSVar1 = ((*document)->fields).Colors;
          if (bVar2) {
            if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181dfff65;
            il2cpp_runtime_helper_180012890(pSVar1,pSVar7,MethodInfo_System_Collections_Generic_List_string_Add);
            bVar6 = 0;
            index_00 = index_00 + 1;
            *colorsVisibleText = true;
          }
          else {
            if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181dfff65;
            index = (pSVar1->fields)._size;
            if (Il2CppMethodInitialized_184344bd6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Item);
              il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
              Il2CppMethodInitialized_184344bd6 = '\x01';
            }
            pSVar5 = "FFFFFF";
            if ((((existing != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
                 ((existing->fields).Colors != (System_Collections_Generic_List_string__o *)0x0)) &&
                (-1 < index)) && (__this = (existing->fields).Colors, index < (__this->fields)._size)) {
              pSVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)__this,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_string_get_Item);
              pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                 (pSVar5,(MethodInfo *)0x0);
            }
            il2cpp_runtime_helper_180012890(pSVar1,pSVar5,MethodInfo_System_Collections_Generic_List_string_Add);
            bVar6 = 0;
            index_00 = index_00 + 1;
          }
        }
      }
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        pGVar4 = *document;
        pSVar5 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (pGVar4->fields).Text = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).Text,pSVar5);
          if ((local_res18 & bVar6) != 0) {
            *trailingColor = pSVar7;
            Il2CppCodeGenWriteBarrier(trailingColor,pSVar7);
          }
          return local_res18;
        }
      }
    }
  }
label_181dfff65:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Serialize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x181dffa30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dffb0d: nop dword ptr [rax]
// asm:   0x181dffb57: mov rbx, qword ptr [rip + 0x22df81a]  ; "FFFFFF"

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  bool bVar1;
  uint16_t value;
  System_Text_StringBuilder_o *__this;
  void *pvVar2;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_String_o *pSVar5;
  int index;
  
  if (Il2CppMethodInitialized_184344bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bce = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if (text == (System_String_o *)0x0) goto label_181dffc4a;
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  }
  pSVar5 = "FFFFFF";
  for (index = 0; index < (text->fields)._stringLength; index = index + 1) {
    pSVar3 = "FFFFFF";
    if ((colors != (System_Collections_Generic_IList_string__o *)0x0) &&
       (pvVar2 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                            (Il2CppObject *)colors), pSVar3 = "FFFFFF", index < (int)pvVar2)) {
      pSVar3 = (System_String_o *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,colors,index);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar3,(MethodInfo *)0x0);
    }
    bVar1 = System_String__op_Inequality(pSVar3,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((((__this == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar4 = System_Text_StringBuilder__Append_197e090(__this,0x5b,(MethodInfo *)0x0),
           pSVar3 == (System_String_o *)0x0)) ||
          (pSVar5 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0),
          pSVar4 == (System_Text_StringBuilder_o *)0x0)) ||
         (pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar5,(MethodInfo *)0x0),
         pSVar4 == (System_Text_StringBuilder_o *)0x0)) goto label_181dffc4a;
      System_Text_StringBuilder__Append_197e090(pSVar4,0x5d,(MethodInfo *)0x0);
      value = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      pSVar5 = pSVar3;
    }
    else {
      value = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_181dffc4a;
    }
    System_Text_StringBuilder__Append_197e090(__this,value,(MethodInfo *)0x0);
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar5;
  }
label_181dffc4a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$SerializeGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient (System_String_o* text, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x181dff890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dffa1c: mov rax, rsi
// asm:   0x181dffa1f: jmp 0x181dffa01

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
          (System_String_o *text,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  void *pvVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *item;
  int index;
  
  if (Il2CppMethodInitialized_184344bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184344bcf = '\x01';
  }
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), text == (System_String_o *)0x0)) {
label_181dffa21:
    ThrowNullReferenceException();
  }
  if (((text->fields)._stringLength != 0) &&
     ((stops != (System_Collections_Generic_IList_string__o *)0x0 &&
      (pvVar5 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                           (Il2CppObject *)stops), (int)pvVar5 != 0)))) {
    capacity = (text->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    index = 0;
    while (index < (text->fields)._stringLength) {
      item = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                       (index,(text->fields)._stringLength,stops,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181dffa21;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_181dffa21;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        index = index + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        index = index + 1;
      }
    }
    text = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                     (text,(System_Collections_Generic_IList_string__o *)__this,(MethodInfo *)0x0);
  }
  return text;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Retarget
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget (System_String_o* previousSerialized, System_String_o* nextText, const MethodInfo* method);
// 0x181dff2b0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dff389: nop dword ptr [rax]
// asm:   0x181dff4cd: nop dword ptr [rax]
// asm:   0x181dff515: nop word ptr [rax + rax]
// asm:   0x181dff60a: mov rcx, rax
// asm:   0x181dff60d: jmp 0x181dff5d2
// asm:   0x181dff60f: mov r14, qword ptr [rip + 0x22dfd62]  ; "FFFFFF"

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
          (System_String_o *previousSerialized,System_String_o *nextText,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  uint uVar2;
  int iVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar9;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (Il2CppMethodInitialized_184344bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bd0 = '\x01';
  }
  pGVar9 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(previousSerialized,(MethodInfo *)0x0);
  if ((nextText != (System_String_o *)0x0) ||
     (nextText = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), nextText != (System_String_o *)0x0)
     ) {
    capacity = (nextText->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
    iVar12 = 0;
    while (pSVar10 = "FFFFFF", pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add,
          iVar12 < (nextText->fields)._stringLength) {
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181dff670;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this->fields)._items;
      if (pSVar4 == (System_String_array *)0x0) goto label_181dff670;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar2] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar10);
        iVar12 = iVar12 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        iVar12 = iVar12 + 1;
      }
    }
    if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
      iVar12 = 0;
      while (pSVar10 = (pGVar9->fields).Text, pSVar10 != (System_String_o *)0x0) {
        if (((pSVar10->fields)._stringLength <= iVar12) || ((nextText->fields)._stringLength <= iVar12)) {
label_181dff460:
          iVar13 = 0;
          goto label_181dff470;
        }
        uVar7 = System_String__get_Chars(pSVar10,iVar12,(MethodInfo *)0x0);
        uVar8 = System_String__get_Chars(nextText,iVar12,(MethodInfo *)0x0);
        if (uVar7 != uVar8) goto label_181dff460;
        iVar12 = iVar12 + 1;
      }
    }
  }
  goto label_181dff670;
label_181dff470:
  pSVar10 = (pGVar9->fields).Text;
  if (pSVar10 == (System_String_o *)0x0) goto label_181dff670;
  if (((pSVar10->fields)._stringLength - iVar12 <= iVar13) ||
     ((nextText->fields)._stringLength - iVar12 <= iVar13)) {
label_181dff4c7:
    iVar14 = 0;
    if (0 < iVar12) goto label_181dff4d0;
    goto label_181dff50e;
  }
  pSVar10 = (pGVar9->fields).Text;
  uVar7 = System_String__get_Chars(pSVar10,((pSVar10->fields)._stringLength - iVar13) + -1,(MethodInfo *)0x0);
  uVar8 = System_String__get_Chars
                    (nextText,((nextText->fields)._stringLength - iVar13) + -1,(MethodInfo *)0x0);
  if (uVar7 != uVar8) goto label_181dff4c7;
  iVar13 = iVar13 + 1;
  goto label_181dff470;
  while( true ) {
    System_Collections_Generic_List_object___set_Item
              ((System_Collections_Generic_List_object__o *)__this,iVar14,(Il2CppObject *)pSVar10,
               (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    iVar14 = iVar14 + 1;
    if (iVar12 <= iVar14) break;
label_181dff4d0:
    pSVar11 = (pGVar9->fields).Colors;
    if ((pSVar11 == (System_Collections_Generic_List_string__o *)0x0) ||
       (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar11,iVar14,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item),
       __this == (System_Collections_Generic_List_string__o *)0x0)) goto label_181dff670;
  }
label_181dff50e:
  iVar14 = 0;
  if (0 < iVar13) {
    do {
      pSVar10 = (pGVar9->fields).Text;
      if ((pSVar10 == (System_String_o *)0x0) ||
         (pSVar11 = (pGVar9->fields).Colors, pSVar11 == (System_Collections_Generic_List_string__o *)0x0))
      goto label_181dff670;
      iVar3 = (nextText->fields)._stringLength;
      pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar11,
                           ((pSVar10->fields)._stringLength - iVar13) + iVar14,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181dff670;
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)__this,iVar14 + (iVar3 - iVar13),
                 (Il2CppObject *)pSVar10,
                 (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  if (Il2CppMethodInitialized_184344bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bd7 = '\x01';
  }
  pSVar10 = "FFFFFF";
  if ((pGVar9->fields).Colors != (System_Collections_Generic_List_string__o *)0x0) {
    if ((iVar12 < 1) || (pSVar11 = (pGVar9->fields).Colors, (pSVar11->fields)._size <= iVar12 + -1)) {
      if (0 < iVar13) {
        pSVar5 = (pGVar9->fields).Text;
        if (pSVar5 == (System_String_o *)0x0) goto label_181dff670;
        iVar14 = (pSVar5->fields)._stringLength - iVar13;
        if ((-1 < iVar14) && (pSVar11 = (pGVar9->fields).Colors, iVar14 < (pSVar11->fields)._size))
        goto label_181dff5d2;
      }
    }
    else {
      if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto label_181dff670;
      iVar14 = iVar12 + -1;
label_181dff5d2:
      pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar11,iVar14,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar10,(MethodInfo *)0x0);
    }
  }
  iVar14 = (nextText->fields)._stringLength;
  while( true ) {
    if (iVar14 - iVar13 <= iVar12) {
      pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          (nextText,(System_Collections_Generic_IList_string__o *)__this,(MethodInfo *)0x0);
      return pSVar10;
    }
    if (__this == (System_Collections_Generic_List_string__o *)0x0) break;
    System_Collections_Generic_List_object___set_Item
              ((System_Collections_Generic_List_object__o *)__this,iVar12,(Il2CppObject *)pSVar10,
               (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
    iVar12 = iVar12 + 1;
  }
label_181dff670:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$RichText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x181dff680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dff78a: mov rdi, qword ptr [rip + 0x22dfbe7]  ; "FFFFFF"

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  System_Text_StringBuilder_o *__this;
  void *pvVar2;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_String_o *pSVar5;
  int index;
  
  if (Il2CppMethodInitialized_184344bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    Il2CppMethodInitialized_184344bd1 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  index = 0;
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (text != (System_String_o *)0x0) {
    for (; index < (text->fields)._stringLength; index = index + 1) {
      pSVar3 = "FFFFFF";
      if ((colors != (System_Collections_Generic_IList_string__o *)0x0) &&
         (pvVar2 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                              (Il2CppObject *)colors), pSVar3 = "FFFFFF", index < (int)pvVar2)) {
        pSVar3 = (System_String_o *)
                 il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,colors,index);
        pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar3,(MethodInfo *)0x0);
      }
      bVar1 = System_String__op_Inequality(pSVar3,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_181dff886;
        if (!bVar1) {
          System_Text_StringBuilder__Append_197dca0(__this,"</color>",(MethodInfo *)0x0);
        }
        pSVar4 = System_Text_StringBuilder__Append_197dca0(__this,"<color=#",(MethodInfo *)0x0);
        if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,pSVar3,(MethodInfo *)0x0),
           pSVar4 == (System_Text_StringBuilder_o *)0x0)) goto label_181dff886;
        System_Text_StringBuilder__Append_197e090(pSVar4,0x3e,(MethodInfo *)0x0);
        pSVar5 = pSVar3;
      }
      c = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped(__this,c,(MethodInfo *)0x0);
    }
    bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      if (!bVar1) {
        System_Text_StringBuilder__Append_197dca0(__this,"</color>",(MethodInfo *)0x0);
      }
      pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
label_181dff886:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$NormalizeRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb (System_String_o* value, const MethodInfo* method);
// 0x181dfee00

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  int32_t index;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bd2 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) goto label_181dfef59;
    if ((value->fields)._stringLength == 6) {
      index = 0;
      while( true ) {
        if ((value->fields)._stringLength <= index) {
          pSVar3 = System_String__ToUpperInvariant(value,(MethodInfo *)0x0);
          return pSVar3;
        }
        uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if (((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)(uVar2 - 0x61))) && (5 < (ushort)(uVar2 - 0x41)))
        break;
        index = index + 1;
      }
    }
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) {
label_181dfef59:
      ThrowNullReferenceException();
    }
    if ((value->fields)._stringLength == 7) {
      uVar2 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
      if (uVar2 == 0x23) {
        pSVar3 = System_String__Substring(value,1,(MethodInfo *)0x0);
        bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb(pSVar3,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = System_String__Substring(value,1,(MethodInfo *)0x0);
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar3 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
            return pSVar3;
          }
          goto label_181dfef59;
        }
      }
    }
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
  if (!bVar1) {
    return "FFFFFF";
  }
  local_18.r = local_28.r;
  local_18.g = local_28.g;
  local_18.b = local_28.b;
  local_18.a = local_28.a;
  pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$GradientColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor (int32_t index, int32_t length, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x181dfe6e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
          (int32_t index,int32_t length,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  void *pvVar6;
  System_String_o *pSVar7;
  UnityEngine_Color_o *pUVar8;
  int iVar9;
  System_Collections_Generic_ICollection_string__c *method_00;
  int iVar10;
  double dVar11;
  float fVar12;
  UnityEngine_Color_o local_98;
  UnityEngine_Color_o local_88 [8];
  
  if (Il2CppMethodInitialized_184344bd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_184344bd3 = '\x01';
  }
  if (stops != (System_Collections_Generic_IList_string__o *)0x0) {
    pvVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                        (Il2CppObject *)stops);
    if (((int)pvVar6 == 1) || (length < 2)) {
      pSVar7 = (System_String_o *)il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,stops,0);
      pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar7,(MethodInfo *)0x0);
    }
    else {
      pvVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                          (Il2CppObject *)stops);
      if (Il2CppMethodInitialized_18433df26 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df26 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar12 = (float)((int)pvVar6 + -1) * ((float)index / (float)(length + -1));
      method_00 = TypeInfo_System_Collections_Generic_ICollection_string;
      pvVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                          (Il2CppObject *)stops);
      dVar11 = il2cpp_runtime_helper_1804f4690((double)fVar12,(MethodInfo *)method_00);
      iVar9 = (int)dVar11;
      if (((iVar9 < 0) || (iVar10 = (int)pvVar6 + -1, iVar9 <= iVar10)) && (iVar10 = iVar9, iVar9 < 0)) {
        iVar10 = 0;
      }
      pvVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,
                          (Il2CppObject *)stops);
      iVar5 = (int)pvVar6 + -1;
      iVar9 = iVar10 + 1;
      if (iVar5 <= iVar10 + 1) {
        iVar9 = iVar5;
      }
      fVar12 = fVar12 - (float)iVar10;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (1.0 < fVar12) {
        fVar12 = 1.0;
      }
      pSVar7 = (System_String_o *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,stops,iVar10);
      pUVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
                         (&local_98,pSVar7,(MethodInfo *)0x0);
      fVar1 = (pUVar8->fields).r;
      fVar2 = (pUVar8->fields).g;
      fVar3 = (pUVar8->fields).b;
      fVar4 = (pUVar8->fields).a;
      pSVar7 = (System_String_o *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IList_string,stops,iVar9);
      pUVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
                         (local_88,pSVar7,(MethodInfo *)0x0);
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (1.0 < fVar12) {
        fVar12 = 1.0;
      }
      local_98.fields.r = ((pUVar8->fields).r - fVar1) * fVar12 + fVar1;
      local_98.fields.b = ((pUVar8->fields).b - fVar3) * fVar12 + fVar3;
      local_98.fields.g = ((pUVar8->fields).g - fVar2) * fVar12 + fVar2;
      local_98.fields.a = ((pUVar8->fields).a - fVar4) * fVar12 + fVar4;
      pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGB(&local_98,(MethodInfo *)0x0);
    }
    return pSVar7;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ParseRgb
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb (System_String_o* value, const MethodInfo* method);
// 0x181dfef60

UnityEngine_Color_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb
          (UnityEngine_Color_o *__return_storage_ptr__,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184344bd4 = '\x01';
  }
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(value,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50("#",pSVar2,(MethodInfo *)0x0);
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar2,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if (bVar1) {
    (__return_storage_ptr__->fields).r = local_18.r;
    (__return_storage_ptr__->fields).g = local_18.g;
    (__return_storage_ptr__->fields).b = local_18.b;
    (__return_storage_ptr__->fields).a = local_18.a;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->fields).r = 1.0;
  (__return_storage_ptr__->fields).g = 1.0;
  (__return_storage_ptr__->fields).b = 1.0;
  (__return_storage_ptr__->fields).a = 1.0;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsRgb
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb (System_String_o* value, const MethodInfo* method);
// 0x181dfed70

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int index;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((value->fields)._stringLength == 6) {
      index = 0;
      while( true ) {
        if ((value->fields)._stringLength <= index) {
          return true;
        }
        uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if (((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)(uVar2 - 0x61))) && (5 < (ushort)(uVar2 - 0x41)))
        break;
        index = index + 1;
      }
      return false;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag (System_String_o* text, int32_t index, System_String_o** color, const MethodInfo* method);
// 0x181dfe9b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfea1e: nop 
// asm:   0x181dfea4b: inc ebx
// asm:   0x181dfea4d: cmp ebx, esi
// asm:   0x181dfea4f: jl 0x181dfea20

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
               (System_String_o *text,int32_t index,System_String_o **color,MethodInfo *method)

{
  int index_00;
  uint16_t uVar1;
  System_String_o *pSVar2;
  
  *color = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(color,(void *)0x0);
  if (text == (System_String_o *)0x0) {
label_181dfea9c:
    ThrowNullReferenceException();
  }
  if (((index + 7 < (text->fields)._stringLength) &&
      (uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0), uVar1 == 0x5b)) &&
     (uVar1 = System_String__get_Chars(text,index + 7,(MethodInfo *)0x0), uVar1 == 0x5d)) {
    index_00 = index;
    do {
      index_00 = index_00 + 1;
      if (index + 7 <= index_00) {
        pSVar2 = System_String__Substring_1972740(text,index + 1,6,(MethodInfo *)0x0);
        if (pSVar2 != (System_String_o *)0x0) {
          pSVar2 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
          *color = pSVar2;
          Il2CppCodeGenWriteBarrier(color,pSVar2);
          return true;
        }
        goto label_181dfea9c;
      }
      uVar1 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
    } while ((((ushort)(uVar1 - 0x30) < 10) || ((ushort)(uVar1 - 0x61) < 6)) ||
            ((0x40 < uVar1 && (uVar1 < 0x47))));
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsImportColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag (System_String_o* text, int32_t index, System_String_o** color, int32_t* length, const MethodInfo* method);
// 0x181dfeb70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfec17: nop word ptr [rax + rax]
// asm:   0x181dfecd5: nop word ptr [rax + rax]

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
               (System_String_o *text,int32_t index,System_String_o **color,int32_t *length,MethodInfo *method
               )

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  int iVar4;
  
  *color = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(color,(void *)0x0);
  *length = 0;
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (System_String_o *)0x0) {
label_181dfed67:
      ThrowNullReferenceException();
    }
    if ((index < (text->fields)._stringLength) &&
       (uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0), uVar2 == 0x5b)) {
      if ((index + 4 < (text->fields)._stringLength) &&
         (((uVar2 = System_String__get_Chars(text,index + 4,(MethodInfo *)0x0), uVar2 == 0x5d &&
           (iVar4 = index + 1, -1 < iVar4)) && (index + 4 <= (text->fields)._stringLength)))) {
        while( true ) {
          if (index + 4 <= iVar4) {
            pSVar3 = System_String__Substring_1972740(text,index + 1,3,(MethodInfo *)0x0);
            pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(pSVar3,(MethodInfo *)0x0);
            *color = pSVar3;
            Il2CppCodeGenWriteBarrier(color,pSVar3);
            *length = 5;
            return true;
          }
          uVar2 = System_String__get_Chars(text,iVar4,(MethodInfo *)0x0);
          if (((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)(uVar2 - 0x61))) &&
             ((uVar2 < 0x41 || (0x46 < uVar2)))) break;
          iVar4 = iVar4 + 1;
        }
      }
      if (((index + 7 < (text->fields)._stringLength) &&
          (uVar2 = System_String__get_Chars(text,index + 7,(MethodInfo *)0x0), uVar2 == 0x5d)) &&
         ((iVar4 = index + 1, -1 < iVar4 && (index + 7 <= (text->fields)._stringLength)))) {
        for (; iVar4 < index + 7; iVar4 = iVar4 + 1) {
          uVar2 = System_String__get_Chars(text,iVar4,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)(uVar2 - 0x61))) {
            if (uVar2 < 0x41) {
              return false;
            }
            if (0x46 < uVar2) {
              return false;
            }
          }
        }
        pSVar3 = System_String__Substring_1972740(text,index + 1,6,(MethodInfo *)0x0);
        if (pSVar3 != (System_String_o *)0x0) {
          pSVar3 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
          *color = pSVar3;
          Il2CppCodeGenWriteBarrier(color,pSVar3);
          *length = 8;
          return true;
        }
        goto label_181dfed67;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHexRange
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange (System_String_o* text, int32_t start, int32_t count, const MethodInfo* method);
// 0x181dfeab0

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange
               (System_String_o *text,int32_t start,int32_t count,MethodInfo *method)

{
  uint16_t uVar1;
  int iVar2;
  
  if ((-1 < start) && (-1 < count)) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (start + count <= (text->fields)._stringLength) {
      iVar2 = start + count;
      while( true ) {
        if (iVar2 <= start) {
          return true;
        }
        uVar1 = System_String__get_Chars(text,start,(MethodInfo *)0x0);
        if (((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)(uVar1 - 0x61))) &&
           ((uVar1 < 0x41 || (0x46 < uVar1)))) break;
        start = start + 1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExpandRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb (System_String_o* rgb, const MethodInfo* method);
// 0x181dfe040

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(System_String_o *rgb,MethodInfo *method)

{
  uint16_t uVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  uint16_t local_res8 [8];
  uint16_t local_res18 [4];
  uint16_t local_res20 [4];
  uint16_t local_28 [2];
  uint16_t local_24 [2];
  uint16_t local_20 [4];
  
  if (Il2CppMethodInitialized_184344bd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184344bd5 = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if (rgb != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    local_res8[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e48,local_res8);
    if (args != (System_Object_array *)0x0) {
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(args->m_Items,pIVar2);
        uVar1 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
        local_res18[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
        pIVar2 = il2cpp_value_box(g_data_184354e48,local_res18);
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar2);
          uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
          local_res20[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
          pIVar2 = il2cpp_value_box(g_data_184354e48,local_res20);
          if (pIVar2 != (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = pIVar2;
            Il2CppCodeGenWriteBarrier(args->m_Items + 2,pIVar2);
            uVar1 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
            local_28[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
            pIVar2 = il2cpp_value_box(g_data_184354e48,local_28);
            if (pIVar2 != (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = pIVar2;
              Il2CppCodeGenWriteBarrier(args->m_Items + 3,pIVar2);
              uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
              local_24[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
              pIVar2 = il2cpp_value_box(g_data_184354e48,local_24);
              if (pIVar2 != (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
                if (pIVar3 == (Il2CppObject *)0x0) {
                  pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
                }
              }
              if (4 < (uint)args->max_length) {
                args->m_Items[4] = pIVar2;
                Il2CppCodeGenWriteBarrier(args->m_Items + 4,pIVar2);
                uVar1 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
                local_20[0] = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
                pIVar2 = il2cpp_value_box(g_data_184354e48,local_20);
                if (pIVar2 != (Il2CppObject *)0x0) {
                  pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
                  if (pIVar3 == (Il2CppObject *)0x0) {
                    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
                  }
                }
                if (5 < (uint)args->max_length) {
                  args->m_Items[5] = pIVar2;
                  Il2CppCodeGenWriteBarrier(args->m_Items + 5,pIVar2);
                  pSVar4 = System_String__Concat_1969fd0(args,(MethodInfo *)0x0);
                  return pSVar4;
                }
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExistingColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, int32_t index, const MethodInfo* method);
// 0x181dfdfa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344bd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bd6 = '\x01';
  }
  if ((((existing != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
       ((existing->fields).Colors != (System_Collections_Generic_List_string__o *)0x0)) && (-1 < index)) &&
     (__this = (existing->fields).Colors, index < (__this->fields)._size)) {
    pSVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$EditColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* previous, int32_t prefix, int32_t suffix, const MethodInfo* method);
// 0x181dfdec0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfdf71: mov rcx, rax
// asm:   0x181dfdf74: jmp 0x181dfdf2f

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *previous,int32_t prefix,
          int32_t suffix,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_string__o *__this;
  int index;
  
  if (Il2CppMethodInitialized_184344bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    Il2CppMethodInitialized_184344bd7 = '\x01';
  }
  if ((previous != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     ((previous->fields).Colors != (System_Collections_Generic_List_string__o *)0x0)) {
    if ((0 < prefix) && (__this = (previous->fields).Colors, prefix + -1 < (__this->fields)._size)) {
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        index = prefix + -1;
label_181dfdf2f:
        pSVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
label_181dfdf8d:
      ThrowNullReferenceException();
    }
    if (0 < suffix) {
      pSVar1 = (previous->fields).Text;
      if (pSVar1 == (System_String_o *)0x0) goto label_181dfdf8d;
      index = (pSVar1->fields)._stringLength - suffix;
      if ((-1 < index) && (__this = (previous->fields).Colors, index < (__this->fields)._size))
      goto label_181dfdf2f;
    }
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHex
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex (uint16_t c, const MethodInfo* method);
// 0x181dfeb40

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex(uint16_t c,MethodInfo *method)

{
  if ((9 < (ushort)(c - 0x30)) && (5 < (ushort)(c - 0x61))) {
    if (c < 0x41) {
      return false;
    }
    return c < 0x47;
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$AppendEscaped
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped (System_Text_StringBuilder_o* builder, uint16_t c, const MethodInfo* method);
// 0x181dfde20

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped
               (System_Text_StringBuilder_o *builder,uint16_t c,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
    il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
    Il2CppMethodInitialized_184344bd8 = '\x01';
  }
  if (builder == (System_Text_StringBuilder_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (c == 0x3c) {
    System_Text_StringBuilder__Append_197dca0(builder,"&lt;",(MethodInfo *)0x0);
    return;
  }
  if (c != 0x3e) {
    System_Text_StringBuilder__Append_197e090(builder,c,(MethodInfo *)0x0);
    return;
  }
  System_Text_StringBuilder__Append_197dca0(builder,"&gt;",(MethodInfo *)0x0);
  return;
}


