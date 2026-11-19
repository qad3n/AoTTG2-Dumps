// Type: Gisketch.Aottg2UI.Styling.GisketchArabicText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchArabicText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchArabicText.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x532cf10

void Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText.<>c__DisplayClass23_0$$<Tokenize>b__0
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0___Tokenize_b__0 (Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o* __this, System_String_o* o, const MethodInfo* method);
// 0x532ec80

bool Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0___Tokenize_b__0
               (Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o *__this,
               System_String_o *o,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)o;
  if (Il2CppMethodInitialized_07542854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_07542854 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  a = Gisketch_Aottg2UI_Styling_GisketchArabicText__TagName(o,method_00);
  bVar1 = System_String__op_Equality(a,(__this->fields).name,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$ToVisual
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual (System_String_o* text, bool rightToLeftBase, const MethodInfo* method);
// 0x532b170
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532b1b5: jmp 0x532b558
// asm:   0x532b41e: jmp 0x532b431

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual
          (System_String_o *text,bool rightToLeftBase,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t count;
  System_String_array *target;
  bool bVar2;
  int iVar3;
  int32_t iVar4;
  System_Collections_Generic_List_GisketchArabicText_Unit__o *__this;
  System_Collections_Generic_List_int__o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_List_string__o *emitted;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  MethodInfo *in_R8;
  uint start;
  int index;
  MethodInfo *in_stack_ffffffffffffff80;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o local_48;
  
  pMVar6 = (MethodInfo *)CONCAT71(in_register_00000031,rightToLeftBase);
  if (Il2CppMethodInitialized_0754283b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchArabicText_Unit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_0754283b = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor != 0)
    goto label_0532b1a5;
label_0532b269:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__NeedsVisualOrder(text,pMVar6);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0)
    goto label_0532b269;
label_0532b1a5:
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__NeedsVisualOrder(text,pMVar6);
  }
  if (!bVar2) {
    return text;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  bVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(text,pMVar6);
  if (text != (System_String_o *)0x0) {
    iVar4 = (text->fields)._stringLength;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchArabicText_Unit);
    System_Collections_Generic_List_GisketchArabicText_Unit____ctor_3a99460
              (__this,iVar4,
               (MethodInfo_3A99460 *)MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_ctor);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this_00,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    pMVar6 = (MethodInfo *)(ulong)bVar2;
    Gisketch_Aottg2UI_Styling_GisketchArabicText__Tokenize(text,__this,__this_00,bVar2,in_R8);
    iVar3 = (text->fields)._stringLength;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this_01,iVar3 + 0x10,(MethodInfo *)0x0);
    emitted = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)emitted,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar3 = (__this_00->fields)._size;
      if (__this == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
        if (-1 < iVar3) {
          if (iVar3 == 0) goto label_0532b56a;
          iVar4 = System_Collections_Generic_List_int___get_Item
                            (__this_00,0,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          pMVar6 = (MethodInfo *)0x0;
          Gisketch_Aottg2UI_Styling_GisketchArabicText__AppendParagraph
                    (__this_01,text,(System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0,0,iVar4,
                     rightToLeftBase,emitted,in_stack_ffffffffffffff80);
          if (0 < (__this_00->fields)._size) goto label_0532b56a;
        }
      }
      else if (-1 < iVar3) {
        index = 0;
        start = 0;
        do {
          if (index < iVar3) {
            iVar3 = System_Collections_Generic_List_int___get_Item
                              (__this_00,index,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
          }
          else {
            iVar3 = (__this->fields)._size;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          pMVar6 = (MethodInfo *)(ulong)start;
          Gisketch_Aottg2UI_Styling_GisketchArabicText__AppendParagraph
                    (__this_01,text,__this,start,iVar3,rightToLeftBase,emitted,in_stack_ffffffffffffff80);
          if (index < (__this_00->fields)._size) {
            method_00 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item;
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      (&local_48,__this,iVar3,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            target = local_48.fields.Tags;
            count = local_48.fields.Length;
            iVar4 = local_48.fields.Start;
            pMVar6 = (MethodInfo *)(ulong)(uint)local_48.fields.Length;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            Gisketch_Aottg2UI_Styling_GisketchArabicText__TransitionTags(__this_01,emitted,target,method_00);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_0532b56a;
            System_Text_StringBuilder__Append_530eeb0(__this_01,text,iVar4,count,(MethodInfo *)0x0);
          }
          start = iVar3 + 1;
          index = index + 1;
          iVar3 = (__this_00->fields)._size;
        } while (index <= iVar3);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      Gisketch_Aottg2UI_Styling_GisketchArabicText__TransitionTags
                (__this_01,emitted,
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->NoTags,pMVar6);
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        pSVar5 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        return pSVar5;
      }
    }
  }
label_0532b56a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Join
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchArabicText__Join (System_String_o* first, System_String_o* separator, System_String_o* second, const MethodInfo* method);
// 0x532c7c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532c7fd: jmp 0x532c864
// asm:   0x532c8de: cmp byte ptr [rip + 0x2215f6a], 0
// asm:   0x532c8e5: je 0x532c90e
// asm:   0x532c8e7: mov rdi, qword ptr [r12]
// asm:   0x532c8eb: test rdi, rdi
// asm:   0x532c8f0: jmp 0x532c9bc

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
          (System_String_o *first,System_String_o *separator,System_String_o *second,MethodInfo *method)

{
  bool bVar1;
  uint16_t value;
  uint uVar2;
  System_Char_array *array;
  ulong uVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  ulong uVar6;
  
  pMVar5 = (MethodInfo *)separator;
  if (Il2CppMethodInitialized_0754283c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Reverse_char);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754283c = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0)
    goto label_0532c832;
label_0532c7f1:
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(first,pMVar5);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor != 0)
    goto label_0532c7f1;
label_0532c832:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(first,pMVar5);
  }
  if (!bVar1) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      bVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(second,pMVar5);
    }
    else {
      bVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(second,pMVar5);
    }
    if (!bVar1) {
      pSVar4 = second;
      second = first;
      goto label_0532c9a2;
    }
  }
  if (separator != (System_String_o *)0x0) {
    array = System_String__ToCharArray(separator,(MethodInfo *)0x0);
    System_Array__Reverse_char_(array,(MethodInfo_33B0530 *)MethodInfo_System_Array_Reverse_char);
    if (array != (System_Char_array *)0x0) {
      if (0 < (int)array->max_length) {
        uVar3 = array->max_length & 0xffffffff;
        uVar6 = 0;
        do {
          if (uVar3 <= uVar6) {
label_0532c9b7:
            ThrowIndexOutOfRangeException();
          }
          value = array->m_Items[uVar6];
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          if (Il2CppMethodInitialized_0754284f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"()[]{}<>\xc2\xab\xc2\xbb");
            Il2CppMethodInitialized_0754284f = '\x01';
          }
          if ("()[]{}<>\xc2\xab\xc2\xbb" == (System_String_o *)0x0) goto label_0532c9bc;
          uVar2 = System_String__IndexOf("()[]{}<>\xc2\xab\xc2\xbb",value,(MethodInfo *)0x0);
          if (-1 < (int)uVar2) {
            if ("()[]{}<>\xc2\xab\xc2\xbb" == (System_String_o *)0x0) goto label_0532c9bc;
            value = System_String__get_Chars("()[]{}<>\xc2\xab\xc2\xbb",uVar2 ^ 1,(MethodInfo *)0x0);
          }
          uVar2 = (uint)array->max_length;
          uVar3 = (ulong)uVar2;
          if (uVar3 <= uVar6) goto label_0532c9b7;
          array->m_Items[uVar6] = value;
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)uVar2);
      }
      separator = System_String__CreateString_52fe930((System_String_o *)0x0,array,(MethodInfo *)0x0);
      pSVar4 = first;
label_0532c9a2:
      pSVar4 = System_String__Concat_5301f10(second,separator,pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_0532c9bc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$NeedsVisualOrder
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__NeedsVisualOrder (System_String_o* text, const MethodInfo* method);
// 0x532b570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532b595: lea r15, [rip + 0x222b12c]
// asm:   0x532b59c: jmp 0x532b5b5

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__NeedsVisualOrder(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  int index;
  
  index = 0;
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    index = 0;
    if (0 < (text->fields)._stringLength) {
      do {
        c = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if ((c != 0x640) && (0xfcff < (ushort)(c - 0x900))) {
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar1 = System_Char__IsLetter(c,(MethodInfo *)0x0);
          if (bVar1) {
            index = 1;
            goto label_0532b5f8;
          }
        }
        index = index + 1;
      } while (index < (text->fields)._stringLength);
      index = 0;
    }
  }
label_0532b5f8:
  return SUB41(index,0);
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$HasPresentationForms
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms (System_String_o* text, const MethodInfo* method);
// 0x532b610
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532b65f: lea r12, [rip + 0x1f4d0f2]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText
// asm:   0x532b666: nop word ptr cs:[rax + rax]

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms
               (System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  uint index;
  
  if (Il2CppMethodInitialized_0754283d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754283d = '\x01';
  }
  index = 0;
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    index = 0;
    if (0 < (text->fields)._stringLength) {
      do {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
      } while ((((ushort)(uVar2 + 0x200) < 0xfd50) && ((ushort)(uVar2 + 0x100) < 0xff70)) &&
              (index = index + 1, (int)index < (text->fields)._stringLength));
      index = (uint)(0xfd4f < (ushort)(uVar2 + 0x200) || 0xff6f < (ushort)(uVar2 + 0x100));
    }
  }
  return SUB41(index,0);
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsRightToLeft
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft (uint16_t character, const MethodInfo* method);
// 0x532ca70
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532cad4: lea eax, [rbx - 0x660]
// asm:   0x532cada: cmp ax, 0xa
// asm:   0x532cade: jae 0x532caf3
// asm:   0x532cae0: jmp 0x532cb59
// asm:   0x532cb0b: lea eax, [rbx - 0x6d6]
// asm:   0x532cb11: cmp ax, 0x18
// asm:   0x532cb15: jae 0x532cb2a
// asm:   0x532cb17: jmp 0x532cb59

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(uint16_t character,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754283e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754283e = '\x01';
  }
  if ((ushort)(character - 0x900) < 0xfc90) {
    if ((ushort)(character + 0x4e3) < 0x2e3) {
      return true;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    if ((9 < (ushort)(character - 0x660)) && (9 < (ushort)(character - 0x6f0))) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      if ((((0x17 < (ushort)(character - 0x6d6)) && (character != 0x670)) &&
          (0x14 < (ushort)(character - 0x64b))) &&
         ((character != 0x60c && (0x36 < (ushort)(character - 0x591))))) {
        return true;
      }
    }
  }
  return (ushort)(character + 400) < 0x90;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsStrong
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsStrong (uint16_t character, const MethodInfo* method);
// 0x532cbf0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsStrong(uint16_t character,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754283f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754283f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method);
  if (bVar1) {
    return true;
  }
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
    bVar1 = System_Char__IsLetter(character,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = System_Char__IsLetter(character,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$EndsRightToLeft
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__EndsRightToLeft (System_String_o* text, int32_t start, int32_t end, const MethodInfo* method);
// 0x532cc70

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__EndsRightToLeft
               (System_String_o *text,int32_t start,int32_t end,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  uint16_t character;
  uint uVar3;
  uint index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_07542840 = '\x01';
  }
  index = end - 1;
  if (start <= (int)index) {
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    do {
      method_00 = (MethodInfo *)(ulong)index;
      character = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (character == 0x3e) {
        method_00 = (MethodInfo *)&g_data_0000003c;
        uVar3 = System_String__LastIndexOf_5307d30(text,0x3c,index,index + (1 - start),(MethodInfo *)0x0);
        if ((int)uVar3 < start) goto label_0532cd2d;
      }
      else {
label_0532cd2d:
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          if (Il2CppMethodInitialized_0754283f != '\0') goto label_0532cd42;
label_0532cd9e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          Il2CppMethodInitialized_0754283f = '\x01';
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_0754283f == '\0') goto label_0532cd9e;
label_0532cd42:
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        bVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method_00);
        if (bVar2) {
label_0532cdc0:
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          bVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method_00);
          return bVar2;
        }
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_Char__IsLetter(character,(MethodInfo *)0x0);
        uVar3 = index;
        if (bVar2) goto label_0532cdc0;
      }
      index = uVar3 - 1;
    } while (start <= (int)index);
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Tokenize
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__Tokenize (System_String_o* text, System_Collections_Generic_List_GisketchArabicText_Unit__o* units, System_Collections_Generic_List_int__o* breaks, bool alreadyVisual, const MethodInfo* method);
// 0x532b6f0
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532b87b: mov r14d, ebx
// asm:   0x532b87e: jmp 0x532b8bd
// asm:   0x532bca0: mov ebx, eax
// asm:   0x532bca2: lea rax, [rip + 0x1f56037]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0
// asm:   0x532bca9: mov rdi, qword ptr [rax]
// asm:   0x532bcac: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x532bcb1: mov r15, rax
// asm:   0x532bcb4: mov rdi, rax
// asm:   0x532bcb7: xor esi, esi
// asm:   0x532bcb9: call 0x5606160  ; System_Object___ctor()
// asm:   0x532bcbe: lea edx, [r14 + rbx]
// asm:   0x532bcc2: inc edx
// asm:   0x532bcc4: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x532bcc9: mov esi, r13d
// asm:   0x532bccc: xor ecx, ecx
// asm:   0x532bcce: call 0x54042f0  ; System_String__Substring()
// asm:   0x532bcd3: mov r14, rax
// asm:   0x532bcd6: mov rdi, qword ptr [rbp]
// asm:   0x532bcda: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x532bce1: jne 0x532bce8
// asm:   0x532be11: jmp 0x532c05f
// asm:   0x532c033: mov qword ptr [rsp + 0x48], rax
// asm:   0x532c038: nop dword ptr [rax + rax]

void Gisketch_Aottg2UI_Styling_GisketchArabicText__Tokenize
               (System_String_o *text,System_Collections_Generic_List_GisketchArabicText_Unit__o *units,
               System_Collections_Generic_List_int__o *breaks,bool alreadyVisual,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *pGVar2;
  System_Int32_array *pSVar3;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_array *pGVar4;
  System_String_array *pSVar5;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o item;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o item_00;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o item_01;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o item_02;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_GisketchArabicText_Unit__o *pSVar7;
  uint8_t uVar8;
  bool bVar9;
  uint16_t uVar10;
  uint16_t c;
  uint uVar11;
  int iVar12;
  int32_t iVar13;
  System_Collections_Generic_List_string__o *pSVar14;
  Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o *__this;
  System_String_o *pSVar15;
  System_Predicate_T__o *match;
  undefined7 in_register_00000009;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  uint uVar17;
  Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_Fields *targetAddress;
  uint index;
  undefined8 local_88;
  undefined8 uStack_80;
  System_String_array *local_78 [2];
  System_String_o *local_68;
  System_String_array *local_60;
  System_String_o *local_58;
  System_Collections_Generic_List_GisketchArabicText_Unit__o *local_50;
  undefined4 local_44;
  System_Collections_Generic_List_int__o *local_40;
  System_Collections_Generic_List_string__o *local_38;
  
  local_44 = (undefined4)CONCAT71(in_register_00000009,alreadyVisual);
  local_40 = breaks;
  if (Il2CppMethodInitialized_07542841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_FindLastIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0_Tokenize_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"br");
    il2cpp_codegen_initialize_runtime_metadata(&"sprite");
    il2cpp_codegen_initialize_runtime_metadata(&"space");
    Il2CppMethodInitialized_07542841 = '\x01';
  }
  local_78[0] = (System_String_array *)0x0;
  pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar14,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  local_50 = units;
  local_38 = pSVar14;
  if (text == (System_String_o *)0x0) {
label_0532c05f:
    ThrowNullReferenceException();
  }
  if ((text->fields)._stringLength < 1) {
    return;
  }
  local_60 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->NoTags;
  index = 0;
  uVar17 = 0;
  local_68 = text;
label_0532b8bd:
  do {
    uVar10 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar10 == 0x7b) {
      pMVar16 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        pMVar16 = extraout_RDX_01;
      }
      iVar13 = Gisketch_Aottg2UI_Styling_GisketchArabicText__PlaceholderEnd(local_68,index,pMVar16);
      if (iVar13 < 1) goto label_0532b9f0;
      iVar12 = uVar17 + iVar13 + 1;
      local_78[0] = local_60;
      Il2CppCodeGenWriteBarrier(local_78);
      text = local_68;
      pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
      if (local_50 == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) goto label_0532c05f;
      piVar1 = &(local_50->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (local_50->fields)._items;
      if (pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_array *)0x0) goto label_0532c05f;
      uVar17 = (local_50->fields)._size;
      if (uVar17 < (uint)pGVar4->max_length) {
        (local_50->fields)._size = uVar17 + 1;
        pGVar4->m_Items[(int)uVar17].fields.Tags = local_78[0];
        pGVar2 = pGVar4->m_Items + (int)uVar17;
        (pGVar2->fields).Start = index;
        (pGVar2->fields).Length = iVar12;
        (pGVar2->fields).Character = 0;
        (pGVar2->fields).Type = 0;
        (pGVar2->fields).Level = 0;
        (pGVar2->fields).Skip = false;
        *(undefined3 *)&(pGVar2->fields).field_0xd = 0;
        Il2CppCodeGenWriteBarrier(&pGVar4->m_Items[(int)uVar17].fields.Tags);
      }
      else {
        item_00.fields.Character = 0;
        item_00.fields.Type = 0;
        item_00.fields.Level = 0;
        item_00.fields.Skip = false;
        item_00.fields._13_3_ = 0;
        item_00.fields.Start = index;
        item_00.fields.Length = iVar12;
        item_00.fields.Tags = local_78[0];
        System_Collections_Generic_List_GisketchArabicText_Unit___AddWithResize
                  (local_50,item_00,(MethodInfo_3A99D90 *)pMVar16->klass->rgctx_data[0xe].method);
      }
      index = iVar13 + 1;
    }
    else {
      if (uVar10 == 0x3c) {
        pMVar16 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          pMVar16 = extraout_RDX_00;
        }
        uVar11 = Gisketch_Aottg2UI_Styling_GisketchArabicText__TagEnd(local_68,index,pMVar16);
        if (0 < (int)uVar11) {
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0);
          System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
          pMVar16 = (MethodInfo *)(ulong)index;
          pSVar15 = System_String__Substring_53042f0(local_68,index,uVar17 + uVar11 + 1,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          local_58 = pSVar15;
          pSVar15 = Gisketch_Aottg2UI_Styling_GisketchArabicText__TagName(pSVar15,pMVar16);
          pSVar7 = local_50;
          if (__this == (Gisketch_Aottg2UI_Styling_GisketchArabicText___c__DisplayClass23_0_o *)0x0)
          goto label_0532c05f;
          targetAddress = &__this->fields;
          (__this->fields).name = pSVar15;
          Il2CppCodeGenWriteBarrier(&targetAddress->name);
          bVar9 = System_String__op_Equality((__this->fields).name,"br",(MethodInfo *)0x0);
          pSVar15 = local_58;
          text = local_68;
          pMVar16 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (bVar9) {
            if ((pSVar7 == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) ||
               (local_40 == (System_Collections_Generic_List_int__o *)0x0)) goto label_0532c05f;
            iVar13 = (pSVar7->fields)._size;
            piVar1 = &(local_40->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (local_40->fields)._items;
            if (pSVar3 == (System_Int32_array *)0x0) goto label_0532c05f;
            uVar17 = (local_40->fields)._size;
            if (uVar17 < (uint)pSVar3->max_length) {
              (local_40->fields)._size = uVar17 + 1;
              pSVar3->m_Items[(int)uVar17] = iVar13;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize
                        (local_40,iVar13,(MethodInfo_3916AC0 *)pMVar16->klass->rgctx_data[0xe].method);
            }
            local_78[0] = (System_String_array *)0x0;
            if (pSVar15 == (System_String_o *)0x0) goto label_0532c05f;
            iVar13 = (pSVar15->fields)._stringLength;
            local_78[0] = local_60;
            Il2CppCodeGenWriteBarrier(local_78);
label_0532be6a:
            pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar4 = (pSVar7->fields)._items;
            if (pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_array *)0x0) goto label_0532c05f;
            uVar17 = (pSVar7->fields)._size;
            if (uVar17 < (uint)pGVar4->max_length) {
              (pSVar7->fields)._size = uVar17 + 1;
              pGVar4->m_Items[(int)uVar17].fields.Tags = local_78[0];
              pGVar2 = pGVar4->m_Items + (int)uVar17;
              (pGVar2->fields).Start = index;
              (pGVar2->fields).Length = iVar13;
              (pGVar2->fields).Character = 0;
              (pGVar2->fields).Type = 3;
              (pGVar2->fields).Level = 0;
              (pGVar2->fields).Skip = false;
              *(undefined3 *)&(pGVar2->fields).field_0xd = 0;
              Il2CppCodeGenWriteBarrier(&pGVar4->m_Items[(int)uVar17].fields.Tags);
            }
            else {
              item_02.fields.Character = 0;
              item_02.fields.Type = 3;
              item_02.fields.Level = 0;
              item_02.fields.Skip = false;
              item_02.fields._13_3_ = 0;
              item_02.fields.Start = index;
              item_02.fields.Length = iVar13;
              item_02.fields.Tags = local_78[0];
              System_Collections_Generic_List_GisketchArabicText_Unit___AddWithResize
                        (pSVar7,item_02,(MethodInfo_3A99D90 *)pMVar16->klass->rgctx_data[0xe].method);
            }
          }
          else {
            bVar9 = System_String__op_Equality(targetAddress->name,"sprite",(MethodInfo *)0x0);
            if ((bVar9) ||
               (bVar9 = System_String__op_Equality
                                  (targetAddress->name,"space",(MethodInfo *)0x0), bVar9)) {
              local_78[0] = (System_String_array *)0x0;
              if (local_58 != (System_String_o *)0x0) {
                iVar13 = (local_58->fields)._stringLength;
                local_78[0] = local_60;
                Il2CppCodeGenWriteBarrier(local_78);
                text = local_68;
                if (pSVar7 != (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0)
                goto label_0532be6a;
              }
              goto label_0532c05f;
            }
            if (local_58 == (System_String_o *)0x0) goto label_0532c05f;
            uVar10 = System_String__get_Chars(local_58,1,(MethodInfo *)0x0);
            pSVar14 = local_38;
            text = local_68;
            pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (uVar10 == 0x2f) {
              match = (System_Predicate_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
              System_Predicate_object____ctor
                        ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText_c__DisplayClass23_0_Tokenize_b__0
                         ,(MethodInfo_3DC95B0 *)0x0);
              if (pSVar14 == (System_Collections_Generic_List_string__o *)0x0) goto label_0532c05f;
              iVar13 = System_Collections_Generic_List_object___FindLastIndex
                                 ((System_Collections_Generic_List_object__o *)pSVar14,match,
                                  (MethodInfo_395DE80 *)
                                  MethodInfo_System_Collections_Generic_List_string_FindLastIndex);
              text = local_68;
              if (-1 < iVar13) {
                System_Collections_Generic_List_object___RemoveAt
                          ((System_Collections_Generic_List_object__o *)pSVar14,iVar13,
                           (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
              }
            }
            else {
              if (local_38 == (System_Collections_Generic_List_string__o *)0x0) goto label_0532c05f;
              piVar1 = &(local_38->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (local_38->fields)._items;
              if (pSVar5 == (System_String_array *)0x0) goto label_0532c05f;
              uVar17 = (local_38->fields)._size;
              if (uVar17 < (uint)pSVar5->max_length) {
                (local_38->fields)._size = uVar17 + 1;
                pSVar5->m_Items[(int)uVar17] = local_58;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar17);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)local_38,(Il2CppObject *)local_58,
                           (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
              }
            }
            if ((pSVar14->fields)._size == 0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              }
              local_60 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->NoTags;
            }
            else {
              local_60 = (System_String_array *)
                         System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_object__o *)pSVar14,
                                    (MethodInfo_395F5A0 *)
                                    MethodInfo_System_Collections_Generic_List_string_ToArray);
            }
          }
          index = uVar11 + 1;
          uVar17 = ~uVar11;
          if ((text->fields)._stringLength <= (int)index) {
            return;
          }
          goto label_0532b8bd;
        }
      }
label_0532b9f0:
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar9 = System_Char__IsHighSurrogate(uVar10,(MethodInfo *)0x0);
      pSVar7 = local_50;
      pMVar16 = extraout_RDX_02;
      if ((bVar9) && ((int)(index + 1) < (local_68->fields)._stringLength)) {
        c = System_String__get_Chars(local_68,index + 1,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar9 = System_Char__IsLowSurrogate(c,(MethodInfo *)0x0);
        pMVar16 = extraout_RDX_03;
        if (bVar9) {
          local_78[0] = local_60;
          Il2CppCodeGenWriteBarrier(local_78);
          text = local_68;
          pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
          if (pSVar7 != (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar4 = (pSVar7->fields)._items;
            if (pGVar4 != (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_array *)0x0) {
              uVar17 = (pSVar7->fields)._size;
              if (uVar17 < (uint)pGVar4->max_length) {
                (pSVar7->fields)._size = uVar17 + 1;
                pGVar4->m_Items[(int)uVar17].fields.Tags = local_78[0];
                pGVar2 = pGVar4->m_Items + (int)uVar17;
                (pGVar2->fields).Start = index;
                (pGVar2->fields).Length = 2;
                (pGVar2->fields).Character = 0;
                (pGVar2->fields).Type = 3;
                (pGVar2->fields).Level = 0;
                (pGVar2->fields).Skip = false;
                *(undefined3 *)&(pGVar2->fields).field_0xd = 0;
                Il2CppCodeGenWriteBarrier(&pGVar4->m_Items[(int)uVar17].fields.Tags);
                index = index + 2;
              }
              else {
                item_01.fields.Character = 0;
                item_01.fields.Type = 3;
                item_01.fields.Level = 0;
                item_01.fields.Skip = false;
                item_01.fields._13_3_ = 0;
                item_01.fields.Start = index;
                item_01.fields.Length = 2;
                item_01.fields.Tags = local_78[0];
                System_Collections_Generic_List_GisketchArabicText_Unit___AddWithResize
                          (pSVar7,item_01,(MethodInfo_3A99D90 *)pMVar16->klass->rgctx_data[0xe].method);
                index = index + 2;
              }
              goto label_0532b8ad;
            }
          }
          goto label_0532c05f;
        }
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_int_Add;
      if (uVar10 == 10) {
        if ((pSVar7 == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) ||
           (local_40 == (System_Collections_Generic_List_int__o *)0x0)) goto label_0532c05f;
        iVar13 = (pSVar7->fields)._size;
        piVar1 = &(local_40->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (local_40->fields)._items;
        if (pSVar3 == (System_Int32_array *)0x0) goto label_0532c05f;
        uVar17 = (local_40->fields)._size;
        pMVar16 = (MethodInfo *)(long)(int)uVar17;
        if (uVar17 < (uint)pSVar3->max_length) {
          (local_40->fields)._size = uVar17 + 1;
          pSVar3->m_Items[(long)pMVar16] = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (local_40,iVar13,(MethodInfo_3916AC0 *)pMVar6->klass->rgctx_data[0xe].method);
          pMVar16 = extraout_RDX_04;
        }
      }
      local_78[0] = (System_String_array *)0x0;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        pMVar16 = extraout_RDX_05;
      }
      uVar8 = Gisketch_Aottg2UI_Styling_GisketchArabicText__CharacterType(uVar10,local_44._0_1_,pMVar16);
      uStack_80 = (ulong)CONCAT12(uVar8,uVar10);
      local_78[0] = local_60;
      Il2CppCodeGenWriteBarrier(local_78);
      text = local_68;
      pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_Add;
      if (pSVar7 == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) goto label_0532c05f;
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (pSVar7->fields)._items;
      if (pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_array *)0x0) goto label_0532c05f;
      uVar17 = (pSVar7->fields)._size;
      if (uVar17 < (uint)pGVar4->max_length) {
        (pSVar7->fields)._size = uVar17 + 1;
        pGVar4->m_Items[(int)uVar17].fields.Tags = local_78[0];
        pGVar2 = pGVar4->m_Items + (int)uVar17;
        (pGVar2->fields).Start = index;
        (pGVar2->fields).Length = 1;
        (pGVar2->fields).Character = (undefined2)uStack_80;
        (pGVar2->fields).Type = uStack_80._2_1_;
        (pGVar2->fields).Level = uStack_80._3_1_;
        (pGVar2->fields).Skip = (bool)uStack_80._4_1_;
        *(undefined3 *)&(pGVar2->fields).field_0xd = uStack_80._5_3_;
        Il2CppCodeGenWriteBarrier(&pGVar4->m_Items[(int)uVar17].fields.Tags);
      }
      else {
        item.fields.Character = uVar10;
        item.fields.Type = uVar8;
        item.fields.Start = index;
        item.fields.Length = 1;
        item.fields.Level = 0;
        item.fields.Skip = false;
        item.fields._13_3_ = 0;
        item.fields.Tags = local_78[0];
        System_Collections_Generic_List_GisketchArabicText_Unit___AddWithResize
                  (pSVar7,item,(MethodInfo_3A99D90 *)pMVar16->klass->rgctx_data[0xe].method);
      }
      index = index + 1;
    }
label_0532b8ad:
    uVar17 = -index;
    if ((text->fields)._stringLength <= (int)index) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$AppendParagraph
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__AppendParagraph (System_Text_StringBuilder_o* builder, System_String_o* text, System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, bool rightToLeftBase, System_Collections_Generic_List_string__o* emitted, const MethodInfo* method);
// 0x532c070
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532c176: jmp 0x532c1bc
// asm:   0x532c29e: mov edx, r12d
// asm:   0x532c2a1: nop word ptr cs:[rax + rax]
// asm:   0x532c3f8: mov r15, qword ptr [rsp + 8]
// asm:   0x532c3fd: lea r13, [rip + 0x1f4c354]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText
// asm:   0x532c404: lea r14, [rip + 0x1f6bf8d]  ; MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item
// asm:   0x532c40b: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x532c410: jmp 0x532c4c3
// asm:   0x532c42e: cmp byte ptr [rip + 0x221641a], 0
// asm:   0x532c435: lea r14, [rip + 0x1f6bf5c]  ; MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item
// asm:   0x532c43c: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x532c441: je 0x532c471
// asm:   0x532c443: lea rax, [rip + 0x1fa3b46]  ; "()[]{}<>\xc2\xab\xc2\xbb"
// asm:   0x532c44a: mov rdi, qword ptr [rax]
// asm:   0x532c44d: test rdi, rdi
// asm:   0x532c452: jmp 0x532c4f2

void Gisketch_Aottg2UI_Styling_GisketchArabicText__AppendParagraph
               (System_Text_StringBuilder_o *builder,System_String_o *text,
               System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               bool rightToLeftBase,System_Collections_Generic_List_string__o *emitted,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t count;
  uint8_t uVar2;
  System_String_array *target;
  System_Text_StringBuilder_o *__this;
  uint16_t value;
  uint uVar3;
  System_Int32_array *order;
  ulong uVar4;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar5;
  int iVar6;
  long lVar7;
  undefined4 in_register_00000084;
  MethodInfo *method_00;
  ulong uVar8;
  int32_t iVar9;
  bool rightToLeft;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o local_58;
  System_Text_StringBuilder_o *local_40;
  System_String_o *local_38;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,end);
  pMVar5 = (MethodInfo *)CONCAT44(in_register_0000000c,start);
  local_40 = builder;
  local_38 = text;
  if (Il2CppMethodInitialized_07542842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    Il2CppMethodInitialized_07542842 = '\x01';
  }
  if (end - start == 0 || end < start) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  Gisketch_Aottg2UI_Styling_GisketchArabicText__Shape(units,start,end,pMVar5);
  if (Il2CppMethodInitialized_07542845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    Il2CppMethodInitialized_07542845 = '\x01';
  }
  if (units != (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
    if (rightToLeftBase) {
      iVar9 = start;
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  (&local_58,units,iVar9,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        rightToLeft = local_58.fields.Type == 1;
        if (rightToLeft) break;
        bVar10 = end + -1 != iVar9;
        iVar9 = iVar9 + 1;
      } while (bVar10);
    }
    else {
      iVar9 = start;
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  (&local_58,units,iVar9,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        rightToLeft = local_58.fields.Type == 1;
        if ((rightToLeft) || (local_58.fields.Type == 0)) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < end);
    }
    pMVar5 = (MethodInfo *)(ulong)rightToLeft;
    Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveWeakTypes(units,start,end,rightToLeft,method_00);
    Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveNeutrals(units,start,end,rightToLeft,method_00);
    Gisketch_Aottg2UI_Styling_GisketchArabicText__AssignLevels(units,start,end,rightToLeft,method_00);
    order = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,end - start);
    if (order != (System_Int32_array *)0x0) {
      uVar4 = order->max_length;
      uVar3 = (uint)uVar4;
      if (0 < (int)uVar3) {
        if (uVar3 < 8) {
          pMVar5 = (MethodInfo *)0x0;
        }
        else {
          pMVar5 = (MethodInfo *)(ulong)(uVar3 & 0xfffffff8);
          iVar6 = start + 4;
          iVar11 = 0;
          iVar12 = 1;
          iVar13 = 2;
          iVar14 = 3;
          lVar7 = 0;
          do {
            piVar1 = order->m_Items + lVar7;
            *piVar1 = iVar11 + start;
            piVar1[1] = iVar12 + start;
            piVar1[2] = iVar13 + start;
            piVar1[3] = iVar14 + start;
            piVar1 = order->m_Items + lVar7 + 4;
            *piVar1 = iVar6 + iVar11;
            piVar1[1] = iVar6 + iVar12;
            piVar1[2] = iVar6 + iVar13;
            piVar1[3] = iVar6 + iVar14;
            lVar7 = lVar7 + 8;
            iVar11 = iVar11 + 8;
            iVar12 = iVar12 + 8;
            iVar13 = iVar13 + 8;
            iVar14 = iVar14 + 8;
          } while (pMVar5 != (MethodInfo *)lVar7);
          if ((uVar4 & 7) == 0) goto label_0532c2bf;
        }
        do {
          order->m_Items[(long)pMVar5] = start + (int)pMVar5;
          pMVar5 = (MethodInfo *)((long)&pMVar5->methodPointer + 1);
        } while ((MethodInfo *)(uVar4 & 0xffffffff) != pMVar5);
      }
label_0532c2bf:
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      Gisketch_Aottg2UI_Styling_GisketchArabicText__ReverseRuns(units,order,2,pMVar5);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      Gisketch_Aottg2UI_Styling_GisketchArabicText__ReverseRuns(units,order,1,pMVar5);
      if (0 < (int)order->max_length) {
        uVar4 = order->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          if (uVar4 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item;
          System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                    (&local_58,units,order->m_Items[uVar8],
                     (MethodInfo_3A999F0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
          target = local_58.fields.Tags;
          uVar2 = local_58.fields.Level;
          value = local_58.fields.Character;
          count = local_58.fields.Length;
          iVar9 = local_58.fields.Start;
          if ((local_58.fields.Skip & 1U) == 0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            __this = local_40;
            Gisketch_Aottg2UI_Styling_GisketchArabicText__TransitionTags(local_40,emitted,target,pMVar5);
            if (count == 1) {
              if ((uVar2 & 1) != 0) {
                if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
                }
                if (Il2CppMethodInitialized_0754284f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"()[]{}<>\xc2\xab\xc2\xbb");
                  Il2CppMethodInitialized_0754284f = '\x01';
                }
                if ("()[]{}<>\xc2\xab\xc2\xbb" == (System_String_o *)0x0) goto label_0532c4f2;
                uVar3 = System_String__IndexOf("()[]{}<>\xc2\xab\xc2\xbb",value,(MethodInfo *)0x0);
                if (-1 < (int)uVar3) {
                  if ("()[]{}<>\xc2\xab\xc2\xbb" == (System_String_o *)0x0) goto label_0532c4f2;
                  value = System_String__get_Chars("()[]{}<>\xc2\xab\xc2\xbb",uVar3 ^ 1,(MethodInfo *)0x0);
                }
              }
              if (local_40 == (System_Text_StringBuilder_o *)0x0) goto label_0532c4f2;
              System_Text_StringBuilder__Append_530f6a0(local_40,value,(MethodInfo *)0x0);
            }
            else {
              if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0532c4f2;
              System_Text_StringBuilder__Append_530eeb0(__this,local_38,iVar9,count,(MethodInfo *)0x0);
            }
          }
          uVar8 = uVar8 + 1;
          uVar3 = (uint)order->max_length;
          uVar4 = (ulong)uVar3;
        } while ((long)uVar8 < (long)(int)uVar3);
      }
      return;
    }
  }
label_0532c4f2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Shape
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__Shape (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, const MethodInfo* method);
// 0x532d260
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532d56e: jmp 0x532d6a0
// asm:   0x532d671: jmp 0x532d6a0
// asm:   0x532d692: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Styling_GisketchArabicText__Shape
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               MethodInfo *method)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  System_Collections_Generic_Dictionary_char__int__o *pSVar4;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value_00;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value_01;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit_00;
  uint16_t uVar5;
  uint8_t uVar6;
  ushort uVar7;
  uint uVar8;
  int32_t iVar9;
  Il2CppObject *pIVar10;
  uint uVar11;
  short sVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_c *pGVar14;
  int index;
  long lVar15;
  ushort uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  bool bVar22;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields aGStackY_ce8 [128];
  undefined8 uVar23;
  undefined8 uVar24;
  System_String_array *pSVar25;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_c8;
  ulong local_b0;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_a8;
  undefined7 local_88;
  undefined4 uStack_81;
  ulong local_78;
  int local_70;
  uint local_6c;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_68;
  long local_50;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_48;
  
  if (Il2CppMethodInitialized_07542843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_char_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
    Il2CppMethodInitialized_07542843 = '\x01';
  }
  local_a8.Start = 0;
  local_a8.Length = 0;
  local_a8.Character = 0;
  local_a8.Type = 0;
  local_a8.Level = 0;
  local_a8.Skip = false;
  local_a8._13_3_ = 0;
  local_a8.Tags = (System_String_array *)0x0;
  local_68.Start = 0;
  local_68.Length = 0;
  local_68.Character = 0;
  local_68.Type = 0;
  local_68.Level = 0;
  local_88 = 0;
  uStack_81 = 0;
  pIVar10 = SZArrayNew(TypeInfo_byte_array,end - start);
  if (end <= start) {
    return;
  }
  if (units != (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
    local_b0 = (ulong)(uint)start;
    if (pIVar10 != (Il2CppObject *)0x0) {
      lVar15 = (long)start;
      local_78 = CONCAT44(local_78._4_4_,end);
      local_50 = (long)end;
      lVar17 = local_50 - lVar15;
      lVar21 = 0;
      do {
        uVar19 = (uint)lVar21;
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_c8,units,uVar19 + start,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        uVar6 = 4;
        if ((local_c8.Skip & 1) == 0) {
          System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                    ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_48,units,uVar19 + start,
                     (MethodInfo_3A999F0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
          local_c8.Tags._0_4_ = SUB84(local_48.Tags,0);
          local_c8.Tags._4_4_ = (undefined4)((ulong)local_48.Tags >> 0x20);
          local_c8.Start = local_48.Start;
          local_c8.Length = local_48.Length;
          local_c8.Character = local_48.Character;
          local_c8._10_2_ = local_48._10_2_;
          local_c8._12_4_ = local_48._12_4_;
          pGVar14 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          unit.fields.Tags._4_4_ = local_c8.Tags._4_4_;
          unit.fields.Tags._0_4_ = local_c8.Tags._0_4_;
          unit.fields.Type = local_c8.Type;
          unit.fields.Level = local_c8.Level;
          unit.fields.Character = local_c8.Character;
          unit.fields.Skip = local_c8.Skip;
          unit.fields._13_3_ = local_c8._13_3_;
          unit.fields.Start = local_c8.Start;
          unit.fields.Length = local_c8.Length;
          uVar6 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Joining(unit,(MethodInfo *)pGVar14);
        }
        if (*(uint *)&pIVar10[1].monitor <= uVar19) goto label_0532d87a;
        *(uint8_t *)((long)&pIVar10[2].klass + (long)(int)uVar19) = uVar6;
        lVar21 = lVar21 + 1;
      } while (lVar17 != lVar21);
      uVar13 = local_b0;
      if ((int)local_78 <= (int)local_b0) {
        return;
      }
      while( true ) {
        index = (int)lVar15;
        uVar19 = index - (int)uVar13;
        if (*(uint *)&pIVar10[1].monitor <= uVar19) break;
        local_68.Tags = (System_String_array *)(long)(int)uVar19;
        bVar2 = *(byte *)((long)&pIVar10[2].klass + (long)local_68.Tags);
        uVar18 = (ulong)bVar2;
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        local_78 = uVar18;
        if ((byte)(bVar2 - 1) < 2) {
          uVar11 = uVar19;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          do {
            uVar11 = uVar11 - 1;
            uVar8 = 0xffffffff;
            if (((int)uVar11 < 0) || ((int)*(uint *)&pIVar10[1].monitor <= (int)uVar11)) break;
            if (*(uint *)&pIVar10[1].monitor <= uVar11) goto label_0532d87a;
            uVar8 = uVar11;
          } while (*(char *)((long)&pIVar10[2].klass + (ulong)uVar11) == '\x04');
          uVar11 = uVar19;
          do {
            uVar11 = uVar11 + 1;
            uVar20 = 0xffffffff;
            if (((int)uVar11 < 0) || ((int)*(uint *)&pIVar10[1].monitor <= (int)uVar11)) break;
            if (*(uint *)&pIVar10[1].monitor <= uVar11) goto label_0532d87a;
            uVar20 = uVar11;
          } while (*(char *)((long)&pIVar10[2].klass + (ulong)uVar11) == '\x04');
          if ((int)uVar8 < 0) {
            uVar16 = 0;
            local_6c = (uint)local_a8.Character;
            uVar7 = 0;
            if (local_6c == 0x644) goto label_0532d622;
label_0532d6a0:
            uVar7 = 0;
            if (((char)local_78 == '\x02') && (-1 < (int)uVar20)) {
              if (*(uint *)&pIVar10[1].monitor <= uVar20) break;
              cVar3 = *(char *)((long)&pIVar10[2].klass + (ulong)uVar20);
              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              }
              uVar7 = (ushort)((byte)(cVar3 - 1U) < 3);
            }
            sVar1 = (uVar7 & uVar16) * 2 + 1;
            sVar12 = (ushort)(uVar7 != 0) * 2;
            if (uVar16 != 0) {
              sVar12 = sVar1;
            }
            if ((uVar7 & uVar16) != 0) {
              sVar12 = sVar1;
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->FormBases;
            if (pSVar4 == (System_Collections_Generic_Dictionary_char__int__o *)0x0) goto label_0532d905;
            iVar9 = System_Collections_Generic_Dictionary_char__int___get_Item
                              (pSVar4,(uint16_t)local_6c,
                               (MethodInfo_49D3F40 *)
                               MethodInfo_System_Collections_Generic_Dictionary_char_int_get_Item);
            local_a8.Character = (short)iVar9 + sVar12;
            uVar23 = local_a8._0_8_;
            uVar24 = local_a8._8_8_;
            pSVar25 = local_a8.Tags;
          }
          else {
            if (*(uint *)&pIVar10[1].monitor <= uVar8) break;
            bVar2 = *(byte *)((long)&pIVar10[2].klass + (ulong)uVar8);
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            bVar22 = (bVar2 & 0xfe) == 2;
            uVar16 = (ushort)bVar22;
            local_6c = (uint)local_a8.Character;
            uVar7 = (ushort)bVar22;
            if (local_6c != 0x644) goto label_0532d6a0;
label_0532d622:
            uVar16 = uVar7;
            if ((int)uVar20 < 0) goto label_0532d6a0;
            local_70 = uVar20 + (int)local_b0;
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_c8,units,local_70,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            uVar5 = local_c8.Character;
            uVar11 = (uint)local_c8.Character;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              if ((ushort)(uVar5 - 0x622) < 6) goto label_0532d684;
              goto label_0532d6a0;
            }
            if (5 < (ushort)(local_c8.Character - 0x622)) goto label_0532d6a0;
label_0532d684:
            uVar24 = local_a8._8_8_;
            if ((0x2bU >> (uVar11 - 0x622 & 0x1f) & 1) == 0) goto label_0532d6a0;
            local_a8.Character = uVar16 + *(short *)(&g_data_01010924 + (long)(short)(uVar11 - 0x622) * 2);
            uVar23 = local_a8._8_8_;
            local_a8.Type = SUB81(uVar24,2);
            local_a8.Level = SUB81(uVar24,3);
            local_a8.Skip = SUB81(uVar24,4);
            local_a8._13_3_ = SUB83(uVar24,5);
            value_01.fields.Character = uVar16 + *(short *)(&g_data_01010924 + (long)(short)(uVar11 - 0x622) * 2)
            ;
            value_01.fields.Type = local_a8.Type;
            value_01.fields.Level = local_a8.Level;
            value_01.fields.Skip = local_a8.Skip;
            value_01.fields._13_3_ = local_a8._13_3_;
            value_01.fields.Start = local_a8.Start;
            value_01.fields.Length = local_a8.Length;
            value_01.fields.Tags = local_a8.Tags;
            local_a8._8_8_ = uVar23;
            System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                      (units,index,value_01,
                       (MethodInfo_3A99A50 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
            index = local_70;
            if ((*(uint *)&pIVar10[1].monitor <= uVar19) ||
               (*(undefined1 *)((long)&pIVar10[2].klass + (long)local_68.Tags) = 1,
               *(uint *)&pIVar10[1].monitor <= uVar20)) break;
            *(undefined1 *)((long)&pIVar10[2].klass + (ulong)uVar20) = 4;
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_c8,units,local_70,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            local_68._8_4_ = CONCAT22(local_c8._10_2_,local_c8.Character);
            local_68.Start = local_c8.Start;
            local_68.Length = local_c8.Length;
            local_88 = CONCAT43(local_c8.Tags._0_4_,local_c8._13_3_);
            uStack_81 = local_c8.Tags._4_4_;
            local_c8.Skip = true;
            pSVar25 = (System_String_array *)CONCAT44(local_c8.Tags._4_4_,local_c8.Tags._0_4_);
            uVar24._2_1_ = local_c8.Type;
            uVar24._3_1_ = local_c8.Level;
            uVar24._0_2_ = local_c8.Character;
            uVar24._4_1_ = true;
            uVar24._5_3_ = local_c8._13_3_;
            uVar23 = local_c8._0_8_;
          }
          value.fields.Character = (uint16_t)uVar24;
          value.fields.Type = SUB81(uVar24,2);
          value.fields.Level = SUB81(uVar24,3);
          value.fields.Skip = SUB81(uVar24,4);
          value.fields._13_3_ = SUB83(uVar24,5);
          value.fields.Start = (int32_t)uVar23;
          value.fields.Length = SUB84(uVar23,4);
          value.fields.Tags = pSVar25;
          System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                    (units,index,value,
                     (MethodInfo_3A99A50 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
          uVar13 = local_b0;
        }
        else if ((local_a8.Length == 1) && (local_a8.Character == 0x621)) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->FormBases;
          if (pSVar4 == (System_Collections_Generic_Dictionary_char__int__o *)0x0) goto label_0532d905;
          iVar9 = System_Collections_Generic_Dictionary_char__int___get_Item
                            (pSVar4,0x621,
                             (MethodInfo_49D3F40 *)
                             MethodInfo_System_Collections_Generic_Dictionary_char_int_get_Item);
          uVar24 = local_a8._8_8_;
          local_a8.Character = (uint16_t)iVar9;
          uVar23 = local_a8._8_8_;
          local_a8.Type = SUB81(uVar24,2);
          local_a8.Level = SUB81(uVar24,3);
          local_a8.Skip = SUB81(uVar24,4);
          local_a8._13_3_ = SUB83(uVar24,5);
          value_00.fields.Character = (uint16_t)iVar9;
          value_00.fields.Type = local_a8.Type;
          value_00.fields.Level = local_a8.Level;
          value_00.fields.Skip = local_a8.Skip;
          value_00.fields._13_3_ = local_a8._13_3_;
          value_00.fields.Start = local_a8.Start;
          value_00.fields.Length = local_a8.Length;
          value_00.fields.Tags = local_a8.Tags;
          local_a8._8_8_ = uVar23;
          System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                    (units,index,value_00,
                     (MethodInfo_3A99A50 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
        }
        lVar15 = lVar15 + 1;
        if (lVar15 == local_50) {
          return;
        }
      }
label_0532d87a:
      ThrowIndexOutOfRangeException();
    }
    System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
              ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_c8,units,start,
               (MethodInfo_3A999F0 *)
               MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    if ((local_c8.Skip & 1) == 0) {
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_48,units,(int32_t)local_b0,
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      local_c8.Tags._0_4_ = SUB84(local_48.Tags,0);
      local_c8.Tags._4_4_ = (undefined4)((ulong)local_48.Tags >> 0x20);
      local_c8.Start = local_48.Start;
      local_c8.Length = local_48.Length;
      local_c8.Character = local_48.Character;
      local_c8._10_2_ = local_48._10_2_;
      local_c8._12_4_ = local_48._12_4_;
      pGVar14 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      unit_00.fields.Tags._4_4_ = local_c8.Tags._4_4_;
      unit_00.fields.Tags._0_4_ = local_c8.Tags._0_4_;
      unit_00.fields.Type = local_c8.Type;
      unit_00.fields.Level = local_c8.Level;
      unit_00.fields.Character = local_c8.Character;
      unit_00.fields.Skip = local_c8.Skip;
      unit_00.fields._13_3_ = local_c8._13_3_;
      unit_00.fields.Start = local_c8.Start;
      unit_00.fields.Length = local_c8.Length;
      Gisketch_Aottg2UI_Styling_GisketchArabicText__Joining(unit_00,(MethodInfo *)pGVar14);
    }
  }
label_0532d905:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Neighbor
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Neighbor (System_Byte_array* joining, int32_t index, int32_t step, const MethodInfo* method);
// 0x532e880
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532e886: nop word ptr cs:[rax + rax]
// asm:   0x532e8ab: jmp 0x532e8b6

int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Neighbor
                  (System_Byte_array *joining,int32_t index,int32_t step,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  
  if (joining == (System_Byte_array *)0x0) {
    iVar2 = index + step;
    index = 0xffffffff;
    if (-1 < iVar2) {
      ThrowNullReferenceException();
    }
  }
  else {
    do {
      index = index + step;
      if (index < 0) {
        return -1;
      }
      uVar1 = (uint)joining->max_length;
      if ((int)uVar1 <= index) {
        return -1;
      }
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
    } while (joining->m_Items[(uint)index] == 4);
  }
  return index;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Joining
// il2cpp: uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Joining (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit, const MethodInfo* method);
// 0x532e760

uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Joining
                  (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_char__int__o *__this;
  bool bVar1;
  uint8_t uVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07542844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_char_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98");
    Il2CppMethodInitialized_07542844 = '\x01';
  }
  if (unit.fields.Length != 1) {
    return 0;
  }
  uVar2 = 3;
  if (unit.fields.Character != 0x640) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    uVar2 = 4;
    if ((((0x36 < (ushort)(unit.fields.Character - 0x591)) && (0x17 < (ushort)(unit.fields.Character - 0x6d6))
         ) && (unit.fields.Character != 0x670)) && (0x14 < (ushort)(unit.fields.Character - 0x64b))) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->FormBases;
      if (__this == (System_Collections_Generic_Dictionary_char__int__o *)0x0) {
label_0532e877:
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_Dictionary_char__int___ContainsKey
                        (__this,unit.fields.Character,
                         (MethodInfo_49D4210 *)
                         MethodInfo_System_Collections_Generic_Dictionary_char_int_ContainsKey);
      uVar2 = 0;
      if ((bVar1) && (unit.fields.Character != 0x621)) {
        if ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98" == (System_String_o *)0x0) goto label_0532e877;
        iVar3 = System_String__IndexOf("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98",unit.fields.Character,(MethodInfo *)0x0);
        uVar2 = 2 - (-1 < iVar3);
      }
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$CanJoinNext
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__CanJoinNext (uint8_t joining, const MethodInfo* method);
// 0x532e8d0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__CanJoinNext(uint8_t joining,MethodInfo *method)

{
  return (joining & 0xfe) == 2;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$CanJoinPrevious
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__CanJoinPrevious (uint8_t joining, const MethodInfo* method);
// 0x532e930

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__CanJoinPrevious(uint8_t joining,MethodInfo *method)

{
  return (byte)(joining - 1) < 3;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$LamAlef
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__LamAlef (uint16_t alef, uint16_t* isolated, const MethodInfo* method);
// 0x532e8e0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__LamAlef
               (uint16_t alef,uint16_t *isolated,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  undefined6 in_register_0000003a;
  
  bVar1 = true;
  uVar2 = 0xfef5;
  switch((int)CONCAT62(in_register_0000003a,alef)) {
  case 0x622:
    goto switchD_0532e8ff_caseD_622;
  case 0x623:
    *isolated = 0xfef7;
    return true;
  default:
    uVar2 = 0;
    bVar1 = false;
switchD_0532e8ff_caseD_622:
    *isolated = uVar2;
    return bVar1;
  case 0x625:
    *isolated = 0xfef9;
    return true;
  case 0x627:
    *isolated = 0xfefb;
    return true;
  }
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$ParagraphIsRightToLeft
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__ParagraphIsRightToLeft (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, bool rightToLeftBase, const MethodInfo* method);
// 0x532d910
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532d994: jmp 0x532d998
// asm:   0x532d996: xor eax, eax
// asm:   0x532d9e8: jmp 0x532d998

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__ParagraphIsRightToLeft
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               bool rightToLeftBase,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o GStack_40;
  
  if (Il2CppMethodInitialized_07542845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    Il2CppMethodInitialized_07542845 = '\x01';
  }
  if (start < end) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (rightToLeftBase) {
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  (&GStack_40,units,start,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        if (GStack_40.fields.Type == 1) {
          return true;
        }
        bVar1 = end + -1 != start;
        start = start + 1;
      } while (bVar1);
    }
    else {
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  (&GStack_40,units,start,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        if (GStack_40.fields.Type == 1) {
          return true;
        }
        if (GStack_40.fields.Type == 0) {
          return false;
        }
        start = start + 1;
      } while (start < end);
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$ResolveWeakTypes
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveWeakTypes (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, bool rightToLeft, const MethodInfo* method);
// 0x532d9f0
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532dca3: jmp 0x532dcd0
// asm:   0x532dcc5: nop word ptr cs:[rax + rax]
// asm:   0x532dd15: cmp byte ptr [rip + 0x2214b32], 0
// asm:   0x532dd1c: je 0x532dd38
// asm:   0x532dd1e: cmp r13d, 1
// asm:   0x532dd28: jmp 0x532dd55
// asm:   0x532ddca: cmp byte ptr [rip + 0x2214a7d], 0
// asm:   0x532ddd1: je 0x532ddec
// asm:   0x532ddd3: cmp ebx, 1
// asm:   0x532ddd6: jne 0x532dc20
// asm:   0x532dddc: jmp 0x532de08
// asm:   0x532de51: jmp 0x532db95
// asm:   0x532deee: movzx eax, r13w
// asm:   0x532def2: lea ecx, [rax - 0x23]
// asm:   0x532def5: cmp ecx, 3
// asm:   0x532def8: jae 0x532df0d
// asm:   0x532defa: jmp 0x532df20
// asm:   0x532df1f: nop 
// asm:   0x532df65: cmp byte ptr [rip + 0x22148e2], 0
// asm:   0x532df6c: je 0x532df89
// asm:   0x532df6e: cmp r14d, 1
// asm:   0x532df72: mov r14, qword ptr [rsp + 0x48]
// asm:   0x532df77: je 0x532dfa7
// asm:   0x532df79: jmp 0x532dff0
// asm:   0x532dfec: nop dword ptr [rax]
// asm:   0x532e033: cmp byte ptr [rip + 0x2214814], 0
// asm:   0x532e03a: je 0x532e05b
// asm:   0x532e03c: cmp r14d, 1
// asm:   0x532e040: mov r14, qword ptr [rsp + 0x48]
// asm:   0x532e045: jne 0x532de80
// asm:   0x532e04b: jmp 0x532e07d
// asm:   0x532e0e4: jmp 0x532e10d

void Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveWeakTypes
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               bool rightToLeft,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value_00;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value_01;
  int32_t iVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  undefined5 uVar4;
  undefined4 in_register_00000014;
  int32_t iVar5;
  int index;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  int index_00;
  undefined4 in_register_00000034;
  byte bVar9;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_a8;
  ulong local_90;
  uint local_84;
  undefined8 local_80;
  int32_t local_74;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_60;
  undefined5 uStack_48;
  uint8_t local_40;
  bool bStack_3f;
  undefined3 uStack_3e;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  local_90 = CONCAT44(in_register_00000034,start);
  local_80 = CONCAT44(in_register_00000014,end);
  if (Il2CppMethodInitialized_07542846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
    Il2CppMethodInitialized_07542846 = '\x01';
  }
  local_60.Start = 0;
  local_60.Length = 0;
  local_60.Character = 0;
  local_70._0_1_ = 0;
  local_70._1_1_ = false;
  local_70._2_3_ = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uVar8 = (uint)local_80;
  if ((int)local_90 < (int)uVar8) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) goto label_0532e17b;
    uVar6 = local_90 & 0xffffffff;
    bVar7 = rightToLeft;
    do {
      iVar5 = (int32_t)uVar6;
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,iVar5,
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      local_60.Character = local_a8.Character;
      local_60.Start = local_a8.Start;
      local_60.Length = local_a8.Length;
      uStack_68 = local_a8.Tags._3_5_;
      bVar9 = rightToLeft;
      if (local_a8.Type != 4) {
        bVar9 = local_a8.Type;
      }
      local_70._0_1_ = local_a8.Level;
      local_70._1_1_ = local_a8.Skip;
      local_70._2_3_ = local_a8._13_3_;
      uStack_6b = local_a8.Tags._0_3_;
      rightToLeft = (bool)((bVar7 != 0) * '\x02');
      if (bVar9 != 2) {
        rightToLeft = (bool)bVar9;
      }
      if (rightToLeft < 2) {
        bVar7 = rightToLeft;
      }
      value.fields.Tags._3_5_ = local_a8.Tags._3_5_;
      value.fields.Tags._0_3_ = local_a8.Tags._0_3_;
      value.fields.Type = rightToLeft;
      value.fields.Character = local_a8.Character;
      value.fields.Level = local_a8.Level;
      value.fields.Skip = local_a8.Skip;
      value.fields._13_3_ = local_a8._13_3_;
      value.fields.Start = local_a8.Start;
      value.fields.Length = local_a8.Length;
      local_a8.Type = rightToLeft;
      System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                (units,iVar5,value,
                 (MethodInfo_3A99A50 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
      uVar6 = (ulong)(iVar5 + 1U);
    } while (uVar8 != iVar5 + 1U);
  }
  if ((int)local_90 + 1 < (int)(uVar8 - 1)) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) goto label_0532e17b;
    local_84 = (int)local_80 - 2;
    uVar6 = local_90 & 0xffffffff;
    do {
      iVar5 = (int32_t)uVar6;
      uVar8 = iVar5 + 1;
      uVar6 = (ulong)uVar8;
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,uVar8,
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      uVar2 = local_a8.Character;
      local_74 = local_a8.Start;
      local_40 = local_a8.Level;
      bStack_3f = local_a8.Skip;
      uStack_3e = local_a8._13_3_;
      uStack_3b = local_a8.Tags._0_3_;
      uStack_38 = local_a8.Tags._3_5_;
      if ((local_a8.Type == 3) && (local_a8.Length == 1)) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          if (uVar2 < 0x3b) goto label_0532dcb3;
label_0532dcd0:
          if (1 < uVar2 - 0x66b) goto label_0532dc20;
        }
        else {
          if (0x3a < local_a8.Character) goto label_0532dcd0;
label_0532dcb3:
          if ((0x400d00000000000U >> ((ulong)uVar2 & 0x3f) & 1) == 0) goto label_0532dcd0;
        }
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,iVar5,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        uVar3 = local_a8.Character;
        iVar1 = local_a8.Length;
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        if (Il2CppMethodInitialized_0754284e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          Il2CppMethodInitialized_0754284e = '\x01';
        }
        if (iVar1 == 1) {
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          if ((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||
             ((ushort)(uVar3 - 0x6f0) < 10)) {
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,iVar5 + 2,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            uVar3 = local_a8.Character;
            iVar1 = local_a8.Length;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            if (Il2CppMethodInitialized_0754284e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              Il2CppMethodInitialized_0754284e = '\x01';
            }
            if (iVar1 == 1) {
              if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              }
              if ((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||
                 ((ushort)(uVar3 - 0x6f0) < 10)) {
                System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                          ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,iVar5,
                           (MethodInfo_3A999F0 *)
                           MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
                local_a8.Length = 1;
                local_a8.Start = local_74;
                local_a8.Tags._3_5_ = uStack_38;
                local_a8.Level = local_40;
                local_a8.Skip = bStack_3f;
                local_a8._13_3_ = uStack_3e;
                local_a8.Tags._0_3_ = uStack_3b;
                value_00.fields.Tags._3_5_ = uStack_38;
                value_00.fields.Tags._0_3_ = uStack_3b;
                value_00.fields.Type = local_a8.Type;
                value_00.fields.Character = uVar2;
                value_00.fields.Level = local_40;
                value_00.fields.Skip = bStack_3f;
                value_00.fields._13_3_ = uStack_3e;
                value_00.fields.Start = local_74;
                value_00.fields.Length = 1;
                local_a8.Character = uVar2;
                System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                          (units,uVar8,value_00,
                           (MethodInfo_3A99A50 *)
                           MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
              }
            }
          }
        }
      }
label_0532dc20:
    } while (local_84 != uVar8);
  }
  if ((int)local_90 < (int)local_80) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
label_0532e17b:
      ThrowNullReferenceException();
    }
    uVar6 = local_90;
    uVar10 = local_80;
    do {
      index_00 = (int)uVar6;
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index_00,
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      uVar2 = local_a8.Character;
      local_84 = local_a8.Start;
      local_60.Tags._0_1_ = local_a8.Level;
      local_60.Tags._1_1_ = local_a8.Skip;
      local_60.Tags._2_3_ = local_a8._13_3_;
      local_60.Tags._5_3_ = local_a8.Tags._0_3_;
      uStack_48 = local_a8.Tags._3_5_;
      if ((local_a8.Type == 3) && (local_a8.Length == 1)) {
        uVar4 = local_a8._11_5_;
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          uVar4 = local_60.Tags._0_5_;
        }
        local_60.Tags._0_5_ = uVar4;
        if (((uVar2 - 0x23 < 3) || (uVar2 == 0x66a)) || (uVar2 == 0xb0)) {
          if ((int)local_90 < index_00) {
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index_00 + -1,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            uVar3 = local_a8.Character;
            iVar5 = local_a8.Length;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            uVar10 = local_80;
            if (Il2CppMethodInitialized_0754284e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              Il2CppMethodInitialized_0754284e = '\x01';
              uVar10 = local_80;
            }
            local_80 = uVar10;
            if (iVar5 != 1) goto label_0532dff0;
            if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            if (((9 < (ushort)(uVar3 - 0x30)) && (9 < (ushort)(uVar3 - 0x660))) &&
               (9 < (ushort)(uVar3 - 0x6f0))) goto label_0532dff0;
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index_00 + -1,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            if (local_a8.Type == 3) goto label_0532de80;
label_0532e10d:
            local_a8.Length = 1;
            local_a8.Start = local_84;
            local_a8.Tags._3_5_ = uStack_48;
            local_a8.Level = (uint8_t)local_60.Tags;
            local_a8.Skip = local_60.Tags._1_1_;
            local_a8._13_3_ = local_60.Tags._2_3_;
            local_a8.Tags._0_3_ = local_60.Tags._5_3_;
            value_01.fields.Tags._3_5_ = uStack_48;
            value_01.fields.Tags._0_3_ = local_60.Tags._5_3_;
            value_01.fields.Type = local_a8.Type;
            value_01.fields.Character = uVar2;
            value_01.fields.Level = (uint8_t)local_60.Tags;
            value_01.fields.Skip = local_60.Tags._1_1_;
            value_01.fields._13_3_ = local_60.Tags._2_3_;
            value_01.fields.Start = local_84;
            value_01.fields.Length = 1;
            local_a8.Character = uVar2;
            System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                      (units,index_00,value_01,
                       (MethodInfo_3A99A50 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
          }
          else {
label_0532dff0:
            index = index_00 + 1;
            if (index < (int)uVar10) {
              System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                        ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index,
                         (MethodInfo_3A999F0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
              uVar3 = local_a8.Character;
              iVar5 = local_a8.Length;
              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
              }
              uVar10 = local_80;
              if (Il2CppMethodInitialized_0754284e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
                Il2CppMethodInitialized_0754284e = '\x01';
                uVar10 = local_80;
              }
              local_80 = uVar10;
              if (iVar5 == 1) {
                if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
                }
                if (((((ushort)(uVar3 - 0x30) < 10) || ((ushort)(uVar3 - 0x660) < 10)) ||
                    ((ushort)(uVar3 - 0x6f0) < 10)) &&
                   (System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                              ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_a8,units,index,
                               (MethodInfo_3A999F0 *)
                               MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item),
                   local_a8.Type != 3)) goto label_0532e10d;
              }
            }
          }
        }
      }
label_0532de80:
      uVar6 = (ulong)(index_00 + 1U);
    } while ((uint)uVar10 != index_00 + 1U);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$ResolveNeutrals
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveNeutrals (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, bool rightToLeft, const MethodInfo* method);
// 0x532e180
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532e270: jmp 0x532e380
// asm:   0x532e290: jmp 0x532e2ea
// asm:   0x532e3a2: mov r15, rcx
// asm:   0x532e3a5: lea rbx, [rsp + 0x33]
// asm:   0x532e3aa: lea r14, [rip + 0x1f69fef]  ; MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item
// asm:   0x532e3b1: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Styling_GisketchArabicText__ResolveNeutrals
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               bool rightToLeft,MethodInfo *method)

{
  bool bVar1;
  int index;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value;
  uint8_t uVar2;
  uint8_t uVar3;
  int32_t index_00;
  int iVar4;
  uint8_t uVar5;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_70;
  int local_54;
  undefined1 local_40 [8];
  uint16_t local_38;
  
  if (Il2CppMethodInitialized_07542847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
    Il2CppMethodInitialized_07542847 = '\x01';
  }
  if (start < end) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
      ThrowNullReferenceException();
    }
    index_00 = start;
    local_54 = end;
    do {
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,index_00,
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      if (local_70.Type == 3) {
        uVar2 = rightToLeft;
        iVar4 = index_00;
        if (index_00 < end) {
          System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                    ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,index_00,
                     (MethodInfo_3A999F0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
          bVar1 = true;
          if (local_70.Type == 3) {
            index = index_00;
            do {
              index = index + 1;
              if (end == index) {
                iVar4 = end;
                goto label_0532e2d5;
              }
              System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                        ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,index,
                         (MethodInfo_3A999F0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            } while (local_70.Type == 3);
            iVar4 = index;
label_0532e2d5:
            bVar1 = index < end;
            goto joined_r0x0532e28e;
          }
          if (start < index_00) goto label_0532e2ea;
label_0532e263:
          uVar3 = rightToLeft;
          if (bVar1) {
label_0532e338:
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,iVar4,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            uVar2 = local_70.Type;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            if (uVar2 == 2) {
              uVar2 = 1;
            }
          }
        }
        else {
          bVar1 = false;
joined_r0x0532e28e:
          if (index_00 <= start) goto label_0532e263;
label_0532e2ea:
          System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                    ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,index_00 + -1,
                     (MethodInfo_3A999F0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
          uVar3 = local_70.Type;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          if (uVar3 == 2) {
            uVar3 = 1;
          }
          if (bVar1) goto label_0532e338;
        }
        uVar5 = rightToLeft;
        if (uVar3 == uVar2) {
          uVar5 = uVar3;
        }
        if (index_00 < iVar4) {
          do {
            System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                      ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_70,units,index_00,
                       (MethodInfo_3A999F0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
            local_38 = local_70.Character;
            local_40._0_4_ = local_70.Start;
            local_40._4_4_ = local_70.Length;
            value.fields.Tags._3_5_ = local_70.Tags._3_5_;
            value.fields.Tags._0_3_ = local_70.Tags._0_3_;
            value.fields.Type = uVar5;
            value.fields.Character = local_70.Character;
            value.fields.Level = local_70.Level;
            value.fields.Skip = local_70.Skip;
            value.fields._13_3_ = local_70._13_3_;
            value.fields.Start = local_70.Start;
            value.fields.Length = local_70.Length;
            local_70.Type = uVar5;
            System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                      (units,index_00,value,
                       (MethodInfo_3A99A50 *)
                       MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
            index_00 = index_00 + 1;
          } while (iVar4 != index_00);
          index_00 = iVar4;
          end = local_54;
        }
        else {
          index_00 = iVar4;
          end = local_54;
        }
      }
      else {
        index_00 = index_00 + 1;
      }
    } while (index_00 < end);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Direction
// il2cpp: uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Direction (uint8_t type, const MethodInfo* method);
// 0x532ea10

uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Direction(uint8_t type,MethodInfo *method)

{
  uint8_t uVar1;
  
  uVar1 = 1;
  if (type != 2) {
    uVar1 = type;
  }
  return uVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$AssignLevels
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__AssignLevels (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, int32_t start, int32_t end, bool rightToLeft, const MethodInfo* method);
// 0x532e480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532e562: jmp 0x532e607

void Gisketch_Aottg2UI_Styling_GisketchArabicText__AssignLevels
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,int32_t start,int32_t end,
               bool rightToLeft,MethodInfo *method)

{
  uint8_t uVar1;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o value_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields *pGVar7;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields *pGVar8;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_78;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_60;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields local_48;
  
  if (Il2CppMethodInitialized_07542848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
    Il2CppMethodInitialized_07542848 = '\x01';
  }
  local_78.Start = 0;
  local_78.Length = 0;
  local_78.Character = 0;
  local_78.Type = 0;
  local_78.Level = 0;
  local_78.Skip = false;
  local_78._13_3_ = 0;
  local_78.Tags = (System_String_array *)0x0;
  if (start < end) {
    if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (rightToLeft) {
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_60,units,start,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        local_48.Start = local_60.Start;
        local_48.Length = local_60.Length;
        local_48.Character = local_60.Character;
        local_48.Type = local_60.Type;
        local_48.Level = local_60.Level;
        local_48.Skip = local_60.Skip;
        local_48._13_3_ = local_60._13_3_;
        local_78.Start = local_60.Start;
        local_78.Length = local_60.Length;
        local_78.Tags = local_60.Tags;
        local_78.Type = local_60.Type;
        local_78.Level = 2 - (local_78.Type == 1);
        local_78._12_4_ = local_60._12_4_;
        local_78._8_3_ = local_60._8_3_;
        uVar2 = local_78._8_8_;
        local_78.Character = local_60.Character;
        local_78.Type = local_60.Type;
        local_78.Skip = local_60.Skip;
        local_78._13_3_ = local_60._13_3_;
        value.fields.Character = local_78.Character;
        value.fields.Type = local_78.Type;
        value.fields.Level = local_78.Level;
        value.fields.Skip = local_78.Skip;
        value.fields._13_3_ = local_78._13_3_;
        value.fields.Start = local_60.Start;
        value.fields.Length = local_60.Length;
        value.fields.Tags = local_60.Tags;
        local_78._8_8_ = uVar2;
        System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                  (units,start,value,
                   (MethodInfo_3A99A50 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
        start = start + 1;
      } while (end != start);
    }
    else {
      pGVar8 = (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_Fields *)0x0;
      do {
        System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                  ((Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o *)&local_60,units,start,
                   (MethodInfo_3A999F0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
        uVar5 = local_60._8_8_;
        uVar3 = local_60._0_8_;
        local_48.Start = local_60.Start;
        local_48.Length = local_60.Length;
        local_48.Character = local_60.Character;
        local_48.Type = local_60.Type;
        local_48.Level = local_60.Level;
        local_48.Skip = local_60.Skip;
        local_48._13_3_ = local_60._13_3_;
        local_78.Start = local_60.Start;
        local_78.Length = local_60.Length;
        local_78.Character = local_60.Character;
        local_78.Type = local_60.Type;
        local_78.Level = local_60.Level;
        local_78.Skip = local_60.Skip;
        local_78._13_3_ = local_60._13_3_;
        uVar2 = local_78._8_8_;
        local_78.Tags = local_60.Tags;
        local_78.Type = local_60.Type;
        if (local_78.Type != 0) {
          pGVar8 = &local_78;
        }
        pGVar7 = pGVar8;
        uVar1 = 2 - (local_78.Type == 1);
        if (local_78.Type == 0) {
          pGVar7 = &local_78;
          uVar1 = 0;
        }
        pGVar7->Level = uVar1;
        uVar6 = local_60._8_8_;
        uVar4 = local_60._0_8_;
        local_60.Character = (uint16_t)uVar5;
        local_60.Type = SUB81(uVar5,2);
        local_60.Level = SUB81(uVar5,3);
        local_60.Skip = SUB81(uVar5,4);
        local_60._13_3_ = SUB83(uVar5,5);
        value_00.fields.Character = local_60.Character;
        value_00.fields.Type = local_60.Type;
        value_00.fields.Level = local_60.Level;
        value_00.fields.Skip = local_60.Skip;
        value_00.fields._13_3_ = local_60._13_3_;
        local_60.Start = (int32_t)uVar3;
        local_60.Length = SUB84(uVar3,4);
        value_00.fields.Start = local_60.Start;
        value_00.fields.Length = local_60.Length;
        value_00.fields.Tags = local_78.Tags;
        local_78._8_8_ = uVar2;
        local_60._0_8_ = uVar4;
        local_60._8_8_ = uVar6;
        System_Collections_Generic_List_GisketchArabicText_Unit___set_Item
                  (units,start,value_00,
                   (MethodInfo_3A99A50 *)
                   MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_set_Item);
        start = start + 1;
      } while (end != start);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$ReverseRuns
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__ReverseRuns (System_Collections_Generic_List_GisketchArabicText_Unit__o* units, System_Int32_array* order, int32_t level, const MethodInfo* method);
// 0x532e620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532e6c6: nop word ptr cs:[rax + rax]
// asm:   0x532e732: jmp 0x532e738

void Gisketch_Aottg2UI_Styling_GisketchArabicText__ReverseRuns
               (System_Collections_Generic_List_GisketchArabicText_Unit__o *units,System_Int32_array *order,
               int32_t level,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  uint index;
  long lVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o GStack_48;
  
  if (Il2CppMethodInitialized_07542849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Reverse_int_71a1718);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
    Il2CppMethodInitialized_07542849 = '\x01';
  }
  if (order == (System_Int32_array *)0x0) {
label_0532e74c:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)order->max_length;
  if (units == (System_Collections_Generic_List_GisketchArabicText_Unit__o *)0x0) {
    if (0 < (int)uVar1) goto label_0532e74c;
  }
  else if (0 < (int)uVar1) {
    index = 0;
label_0532e68d:
    do {
      if (uVar1 <= index) {
label_0532e747:
        ThrowIndexOutOfRangeException();
      }
      lVar3 = (long)(int)index;
      System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                (&GStack_48,units,order->m_Items[lVar3],
                 (MethodInfo_3A999F0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
      if ((int)(uint)GStack_48.fields.Level < level) {
        index = index + 1;
        uVar1 = (uint)order->max_length;
        if ((int)uVar1 <= (int)index) {
          return;
        }
        goto label_0532e68d;
      }
      uVar1 = (uint)order->max_length;
      uVar2 = (ulong)uVar1;
      uVar4 = index;
      if ((int)index < (int)uVar1) {
        do {
          if ((uint)uVar2 <= (uint)lVar3) goto label_0532e747;
          System_Collections_Generic_List_GisketchArabicText_Unit___get_Item
                    (&GStack_48,units,order->m_Items[lVar3],
                     (MethodInfo_3A999F0 *)
                     MethodInfo_System_Collections_Generic_List_GisketchArabicText_Unit_get_Item);
          if ((int)(uint)GStack_48.fields.Level < level) break;
          lVar3 = lVar3 + 1;
          uVar2 = order->max_length;
        } while (lVar3 < (int)uVar2);
        uVar4 = (uint)lVar3;
      }
      System_Array__Reverse_int__33c56c0
                (order,index,uVar4 - index,(MethodInfo_33C56C0 *)MethodInfo_System_Array_Reverse_int_71a1718);
      uVar1 = (uint)order->max_length;
      index = uVar4;
      if ((int)uVar1 <= (int)uVar4) {
        return;
      }
    } while( true );
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$TransitionTags
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText__TransitionTags (System_Text_StringBuilder_o* builder, System_Collections_Generic_List_string__o* emitted, System_String_array* target, const MethodInfo* method);
// 0x532c500
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532c5f7: jmp 0x532c6ac
// asm:   0x532c61b: nop dword ptr [rax + rax]
// asm:   0x532c7a8: jmp 0x532c6ac

void Gisketch_Aottg2UI_Styling_GisketchArabicText__TransitionTags
               (System_Text_StringBuilder_o *builder,System_Collections_Generic_List_string__o *emitted,
               System_String_array *target,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  bool bVar3;
  uint uVar4;
  System_String_o *pSVar5;
  System_Text_StringBuilder_o *pSVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  MethodInfo *pMVar11;
  int index;
  
  if (Il2CppMethodInitialized_0754284a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveRange)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    Il2CppMethodInitialized_0754284a = '\x01';
  }
  if (emitted == (System_Collections_Generic_List_string__o *)0x0) goto label_0532c7af;
  iVar8 = (emitted->fields)._size;
  uVar9 = 0;
  if (target == (System_String_array *)0x0) {
    if (0 < iVar8) goto label_0532c7af;
label_0532c604:
    uVar10 = iVar8 - 1;
    if (-1 < (int)uVar10) {
label_0532c610:
      if (builder == (System_Text_StringBuilder_o *)0x0) goto label_0532c7af;
      do {
        pSVar6 = System_Text_StringBuilder__Append_530ed80(builder,"</",(MethodInfo *)0x0);
        pMVar11 = (MethodInfo *)(ulong)uVar10;
        pSVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)emitted,uVar10,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        pSVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__TagName(pSVar5,pMVar11);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530ed80(pSVar6,pSVar5,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_0532c7af;
        System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3e,(MethodInfo *)0x0);
        uVar10 = uVar10 - 1;
      } while ((int)uVar9 <= (int)uVar10);
      iVar8 = (emitted->fields)._size;
    }
  }
  else {
    if ((iVar8 < 1) || ((int)target->max_length < 1)) goto label_0532c604;
    uVar9 = 0;
    do {
      index = (int)uVar9;
      pSVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)emitted,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)target->max_length <= uVar9) goto label_0532c7b4;
      bVar3 = System_String__op_Equality(pSVar5,target->m_Items[uVar9],(MethodInfo *)0x0);
      if (!bVar3) {
        iVar8 = (emitted->fields)._size;
        uVar10 = iVar8 - 1;
        if ((int)uVar10 < index) goto label_0532c6ac;
        goto label_0532c610;
      }
      uVar9 = uVar9 + 1;
      iVar8 = (emitted->fields)._size;
    } while (((long)uVar9 < (long)iVar8) && ((long)uVar9 < (long)(int)target->max_length));
    uVar9 = (ulong)(index + 1U);
    uVar10 = iVar8 - 1;
    if ((int)(index + 1U) <= (int)uVar10) goto label_0532c610;
  }
label_0532c6ac:
  uVar10 = (uint)uVar9;
  System_Collections_Generic_List_object___RemoveRange
            ((System_Collections_Generic_List_object__o *)emitted,uVar10,iVar8 - uVar10,
             (MethodInfo_395F1A0 *)MethodInfo_System_Collections_Generic_List_string_RemoveRange);
  if (target == (System_String_array *)0x0) {
label_0532c7af:
    ThrowNullReferenceException();
  }
  uVar4 = (uint)target->max_length;
  if (builder == (System_Text_StringBuilder_o *)0x0) {
    if ((int)uVar10 < (int)uVar4) {
      if (uVar4 <= uVar10) {
label_0532c7b4:
        ThrowIndexOutOfRangeException();
      }
      goto label_0532c7af;
    }
  }
  else if ((int)uVar10 < (int)uVar4) {
    uVar7 = target->max_length & 0xffffffff;
    uVar9 = uVar9 & 0xffffffff;
    do {
      if ((uVar7 <= uVar9) ||
         (System_Text_StringBuilder__Append_530ed80(builder,target->m_Items[uVar9],(MethodInfo *)0x0),
         pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add, (uint)target->max_length <= uVar9))
      goto label_0532c7b4;
      pSVar5 = target->m_Items[uVar9];
      piVar1 = &(emitted->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar2 = (emitted->fields)._items;
      if (pSVar2 == (System_String_array *)0x0) goto label_0532c7af;
      uVar10 = (emitted->fields)._size;
      if (uVar10 < (uint)pSVar2->max_length) {
        (emitted->fields)._size = uVar10 + 1;
        pSVar2->m_Items[(int)uVar10] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)emitted,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      uVar9 = uVar9 + 1;
      uVar10 = (uint)target->max_length;
      uVar7 = (ulong)uVar10;
    } while ((long)uVar9 < (long)(int)uVar10);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$CharacterType
// il2cpp: uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__CharacterType (uint16_t character, bool alreadyVisual, const MethodInfo* method);
// 0x532d0d0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532d0f4: lea ecx, [rbx - 0x6f0]
// asm:   0x532d0fa: mov al, 2
// asm:   0x532d0fc: cmp cx, 0xa
// asm:   0x532d100: jae 0x532d140
// asm:   0x532d161: lea eax, [rbx + 0x4b0]
// asm:   0x532d167: movzx eax, ax
// asm:   0x532d16a: cmp eax, 0x2b0
// asm:   0x532d16f: jae 0x532d18f
// asm:   0x532d171: jmp 0x532d24d

uint8_t Gisketch_Aottg2UI_Styling_GisketchArabicText__CharacterType
                  (uint16_t character,bool alreadyVisual,MethodInfo *method)

{
  uint32_t uVar1;
  uint8_t uVar2;
  bool bVar3;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,alreadyVisual);
  if (Il2CppMethodInitialized_0754284b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754284b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  uVar2 = 2;
  if (((9 < (ushort)(character - 0x6f0)) && (uVar2 = 2, 9 < (ushort)(character - 0x30))) &&
     (9 < (ushort)(character - 0x660))) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    if (((ushort)(character + 0x4b0) < 0x2b0) || ((ushort)(character + 400) < 0x90)) {
      return !alreadyVisual;
    }
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    uVar2 = 4;
    if (((0x36 < (ushort)(character - 0x591)) && (0x17 < (ushort)(character - 0x6d6))) &&
       ((character != 0x670 && (0x14 < (ushort)(character - 0x64b))))) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      bVar3 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method_00);
      uVar2 = 1;
      if (!bVar3) {
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar3 = System_Char__IsLetter(character,(MethodInfo *)0x0);
        return !bVar3 * '\x03';
      }
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$TagEnd
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__TagEnd (System_String_o* text, int32_t start, const MethodInfo* method);
// 0x532cdf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532ceb8: mov r15d, eax
// asm:   0x532cebb: nop dword ptr [rax + rax]
// asm:   0x532ceeb: jmp 0x532cef0
// asm:   0x532ceed: mov r14d, ebp

int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__TagEnd
                  (System_String_o *text,int32_t start,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int32_t iVar3;
  int index;
  int iVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_0754284c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0754284c = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar4 = -1;
  iVar5 = iVar4;
  if (start + 2 < (text->fields)._stringLength) {
    index = start + 1;
    uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    bVar1 = System_Char__IsLetter(uVar2,(MethodInfo *)0x0);
    if (((bVar1) || (uVar2 == 0x2f)) || (uVar2 == 0x23)) {
      iVar3 = (text->fields)._stringLength;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar3 = System_Math__Min_54baeb0(iVar3,start + 0x80,(MethodInfo *)0x0);
      while (((iVar5 = iVar4, index < iVar3 &&
              (uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0), iVar5 = index, uVar2 != 0x3e))
             && (uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0), iVar5 = iVar4, uVar2 != 0x3c)
             )) {
        index = index + 1;
      }
    }
  }
  return iVar5;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$TagName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchArabicText__TagName (System_String_o* tag, const MethodInfo* method);
// 0x532cf20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532cf94: mov ebp, r14d
// asm:   0x532cf97: nop word ptr [rax + rax]

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchArabicText__TagName(System_String_o *tag,MethodInfo *method)

{
  uint16_t uVar1;
  System_String_o *pSVar2;
  int index;
  int index_00;
  
  if (Il2CppMethodInitialized_0754284d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"color");
    Il2CppMethodInitialized_0754284d = '\x01';
  }
  if (tag != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars(tag,1,(MethodInfo *)0x0);
    index_00 = (uVar1 == 0x2f) + 1;
    uVar1 = System_String__get_Chars(tag,index_00,(MethodInfo *)0x0);
    if (uVar1 == 0x23) {
      return "color";
    }
    index = index_00;
    if (index_00 < (tag->fields)._stringLength) {
      do {
        uVar1 = System_String__get_Chars(tag,index,(MethodInfo *)0x0);
        if (((uVar1 == 0x3d) || (uVar1 = System_String__get_Chars(tag,index,(MethodInfo *)0x0), uVar1 == 0x3e)
            ) || (uVar1 = System_String__get_Chars(tag,index,(MethodInfo *)0x0), uVar1 == 0x20)) break;
        index = index + 1;
      } while (index < (tag->fields)._stringLength);
    }
    pSVar2 = System_String__Substring_53042f0(tag,index_00,index - index_00,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$PlaceholderEnd
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__PlaceholderEnd (System_String_o* text, int32_t start, const MethodInfo* method);
// 0x532d010

int32_t Gisketch_Aottg2UI_Styling_GisketchArabicText__PlaceholderEnd
                  (System_String_o *text,int32_t start,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int index;
  int32_t iVar3;
  int iVar4;
  
  if (text == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar4 = start + 1;
  iVar3 = -1;
  if (iVar4 < (text->fields)._stringLength) {
    index = iVar4;
    do {
      uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar1 = System_Char__IsDigit(uVar2,(MethodInfo *)0x0);
    } while ((bVar1) && (index = index + 1, index < (text->fields)._stringLength));
    if ((iVar4 < index) && (index < (text->fields)._stringLength)) {
      uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      iVar3 = -1;
      if (uVar2 == 0x7d) {
        iVar3 = index;
      }
    }
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsDigitUnit
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsDigitUnit (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit, const MethodInfo* method);
// 0x532e970
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532e97f: cmp dword ptr [rbx + 4], 1
// asm:   0x532e983: jne 0x532e9e0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsDigitUnit
               (Gisketch_Aottg2UI_Styling_GisketchArabicText_Unit_o unit,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754284e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_0754284e = '\x01';
  }
  if (unit.fields.Length != 1) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  bVar1 = true;
  if ((9 < (ushort)(unit.fields.Character - 0x30)) && (9 < (ushort)(unit.fields.Character - 0x660))) {
    bVar1 = (ushort)(unit.fields.Character - 0x6f0) < 10;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsDigit
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsDigit (uint16_t character, const MethodInfo* method);
// 0x532cb80

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsDigit(uint16_t character,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = true;
  if ((9 < (ushort)(character - 0x30)) && (9 < (ushort)(character - 0x660))) {
    bVar1 = (ushort)(character - 0x6f0) < 10;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsMark
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsMark (uint16_t character, const MethodInfo* method);
// 0x532cbb0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsMark(uint16_t character,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = true;
  if (((0x17 < (ushort)(character - 0x6d6)) && (character != 0x670)) && (0x14 < (ushort)(character - 0x64b)))
  {
    bVar1 = (ushort)(character - 0x591) < 0x37;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsPresentationForm
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsPresentationForm (uint16_t character, const MethodInfo* method);
// 0x532ca40

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsPresentationForm(uint16_t character,MethodInfo *method)

{
  return (ushort)(character + 400) < 0x90 || (ushort)(character + 0x4b0) < 0x2b0;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsNumberSeparator
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsNumberSeparator (uint16_t character, const MethodInfo* method);
// 0x532e940

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsNumberSeparator(uint16_t character,MethodInfo *method)

{
  undefined6 in_register_0000003a;
  
  if (((character < 0x3b) && ((0x400d00000000000U >> ((ulong)character & 0x3f) & 1) != 0)) ||
     ((int)CONCAT62(in_register_0000003a,character) - 0x66bU < 2)) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$IsNumberSuffix
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsNumberSuffix (uint16_t character, const MethodInfo* method);
// 0x532e9f0

bool Gisketch_Aottg2UI_Styling_GisketchArabicText__IsNumberSuffix(uint16_t character,MethodInfo *method)

{
  bool bVar1;
  undefined2 in_register_0000003a;
  
  bVar1 = true;
  if (((2 < CONCAT22(in_register_0000003a,character) - 0x23U) &&
      (CONCAT22(in_register_0000003a,character) != 0xb0)) &&
     (CONCAT22(in_register_0000003a,character) != 0x66a)) {
    bVar1 = false;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$Mirror
// il2cpp: uint16_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Mirror (uint16_t character, const MethodInfo* method);
// 0x532c9d0

uint16_t Gisketch_Aottg2UI_Styling_GisketchArabicText__Mirror(uint16_t character,MethodInfo *method)

{
  uint16_t uVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_0754284f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"()[]{}<>\xc2\xab\xc2\xbb");
    Il2CppMethodInitialized_0754284f = '\x01';
  }
  if ("()[]{}<>\xc2\xab\xc2\xbb" != (System_String_o *)0x0) {
    uVar2 = System_String__IndexOf("()[]{}<>\xc2\xab\xc2\xbb",character,(MethodInfo *)0x0);
    if ((int)uVar2 < 0) {
      return character;
    }
    if ("()[]{}<>\xc2\xab\xc2\xbb" != (System_String_o *)0x0) {
      uVar1 = System_String__get_Chars("()[]{}<>\xc2\xab\xc2\xbb",uVar2 ^ 1,(MethodInfo *)0x0);
      return uVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$BuildFormBases
// il2cpp: System_Collections_Generic_Dictionary_char__int__o* Gisketch_Aottg2UI_Styling_GisketchArabicText__BuildFormBases (const MethodInfo* method);
// 0x532ea20

System_Collections_Generic_Dictionary_char__int__o *
Gisketch_Aottg2UI_Styling_GisketchArabicText__BuildFormBases(MethodInfo *method)

{
  System_String_o *__this;
  uint16_t key;
  int32_t iVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_char__int__o *__this_00;
  int iVar3;
  int value;
  
  if (Il2CppMethodInitialized_07542850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_char_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_char_int);
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a");
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98");
    Il2CppMethodInitialized_07542850 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_char_int);
  System_Collections_Generic_Dictionary_char__int____ctor
            (__this_00,(MethodInfo_49D33B0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_ctor);
  __this = "\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a";
  if ("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a" != (System_String_o *)0x0) {
    iVar3 = ("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a"->fields)._stringLength;
    if (__this_00 != (System_Collections_Generic_Dictionary_char__int__o *)0x0) {
      if (0 < iVar3) {
        value = 0xfe80;
        iVar3 = 0;
        do {
          key = System_String__get_Chars(__this,iVar3,(MethodInfo *)0x0);
          System_Collections_Generic_Dictionary_char__int___set_Item
                    (__this_00,key,value,
                     (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item)
          ;
          iVar2 = 1;
          if (key != 0x621) {
            if ("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98" == (System_String_o *)0x0) goto label_0532ebf5;
            iVar1 = System_String__IndexOf("\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa7\xd8\xa9\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd9\x88\xd9\x89\xd9\xb1\xda\x98",key,(MethodInfo *)0x0);
            iVar2 = (iVar1 >> 0x1f) * -2 + 2;
          }
          value = value + iVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (__this->fields)._stringLength);
        if (__this_00 == (System_Collections_Generic_Dictionary_char__int__o *)0x0) goto label_0532ebf5;
      }
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x671,0xfb50,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x67e,0xfb56,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x686,0xfb7a,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x698,0xfb8a,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x6a9,0xfb8e,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x6af,0xfb92,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      System_Collections_Generic_Dictionary_char__int___set_Item
                (__this_00,0x6cc,0xfbfc,
                 (MethodInfo_49D3FD0 *)MethodInfo_System_Collections_Generic_Dictionary_char_int_set_Item);
      return __this_00;
    }
    if (0 < iVar3) {
      System_String__get_Chars("\xd8\xa1\xd8\xa2\xd8\xa3\xd8\xa4\xd8\xa5\xd8\xa6\xd8\xa7\xd8\xa8\xd8\xa9\xd8\xaa\xd8\xab\xd8\xac\xd8\xad\xd8\xae\xd8\xaf\xd8\xb0\xd8\xb1\xd8\xb2\xd8\xb3\xd8\xb4\xd8\xb5\xd8\xb6\xd8\xb7\xd8\xb8\xd8\xb9\xd8\xba\xd9\x81\xd9\x82\xd9\x83\xd9\x84\xd9\x85\xd9\x86\xd9\x87\xd9\x88\xd9\x89\xd9\x8a",0,(MethodInfo *)0x0);
    }
  }
label_0532ebf5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchArabicText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchArabicText___cctor (const MethodInfo* method);
// 0x532ec00

void Gisketch_Aottg2UI_Styling_GisketchArabicText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchArabicText_StaticFields *pGVar1;
  System_Collections_Generic_Dictionary_char__int__o *pSVar2;
  System_String_array *pSVar3;
  Il2CppClass **ppIVar4;
  
  if (Il2CppMethodInitialized_07542851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    ppIVar4 = &TypeInfo_string_array;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07542851 = '\x01';
    method = (MethodInfo *)ppIVar4;
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__BuildFormBases(method);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->FormBases = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields->FormBases);
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->static_fields;
  pGVar1->NoTags = pSVar3;
  Il2CppCodeGenWriteBarrier(&pGVar1->NoTags);
  return;
}


