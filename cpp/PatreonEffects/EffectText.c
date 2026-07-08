// Type: PatreonEffects.EffectText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/EffectText.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.EffectText$$get_text
// il2cpp: System_String_o* PatreonEffects_EffectText__get_text (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1e530

System_String_o *
PatreonEffects_EffectText__get_text(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._text;
}


// PatreonEffects.EffectText$$set_text
// il2cpp: void PatreonEffects_EffectText__set_text (PatreonEffects_EffectText_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f1e540

void PatreonEffects_EffectText__set_text
               (PatreonEffects_EffectText_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (PatreonEffects_EffectText_o *)0x0) {
    (__this->fields)._text = value;
    il2cpp_runtime_glue(&(__this->fields)._text);
    PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$get_fontSize
// il2cpp: float PatreonEffects_EffectText__get_fontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1ef50

float PatreonEffects_EffectText__get_fontSize
                (PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.EffectText$$set_fontSize
// il2cpp: void PatreonEffects_EffectText__set_fontSize (PatreonEffects_EffectText_o* __this, float value, const MethodInfo* method);
// 0x3f1ef60

void PatreonEffects_EffectText__set_fontSize
               (PatreonEffects_EffectText_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._fontSize = value;
  PatreonEffects_EffectText__Rebuild(__this,method);
  return;
}


// PatreonEffects.EffectText$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_EffectText__get_color (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1ef80

UnityEngine_Color_o
PatreonEffects_EffectText__get_color(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.EffectText$$set_color
// il2cpp: void PatreonEffects_EffectText__set_color (PatreonEffects_EffectText_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x3f1ef90

void PatreonEffects_EffectText__set_color
               (PatreonEffects_EffectText_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *pUVar7;
  uint uVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  UnityEngine_Object_o *pUVar11;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  (__this->fields)._color.fields = value.fields;
  if (DAT_05703ce7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_GetComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ce7 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar10 = (Il2CppType *)local_48._8_8_;
  while( true ) {
    do {
      do {
        pUVar7 = local_38;
        __this_02.fields._8_8_ = pIVar10;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
        __this_02.fields._current = (Il2CppObject *)pUVar7;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') {
          __this_03.fields._8_8_ = pIVar10;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
          __this_03.fields._current = (Il2CppObject *)pUVar7;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar11 = pUVar7;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_38 = pUVar11;
      } while ((char)bVar5 != '\0');
      if (pUVar7 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
      if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar3 = (int)pSVar6->max_length;
      local_38 = pUVar11;
    } while (iVar3 < 1);
    uVar8 = 0;
    if (iVar3 == 0) break;
    while( true ) {
      __this_01 = (UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar8];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponent<object>(__this_01,MethodInfo_NameEffectController_GetComponent_NameEffectCont);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        uVar1 = (__this->fields)._color.fields.r;
        uVar2._0_4_ = (__this->fields)._color.fields.b;
        uVar2._4_4_ = (__this->fields)._color.fields.a;
        (**(code **)&__this_01->klass[1]._2.naturalAligment)
                  (uVar1,uVar2,__this_01,__this_01->klass[1].vtable._0_Equals.methodPtr);
      }
      uVar8 = uVar8 + 1;
      uVar4 = (uint)pSVar6->max_length;
      local_38 = pUVar11;
      if ((int)uVar4 <= (int)uVar8) break;
      if (uVar4 <= uVar8) goto LAB_03f1f18a;
    }
  }
LAB_03f1f18a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$get_font
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_EffectText__get_font (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1f280

TMPro_TMP_FontAsset_o *
PatreonEffects_EffectText__get_font(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._font;
}


// PatreonEffects.EffectText$$set_font
// il2cpp: void PatreonEffects_EffectText__set_font (PatreonEffects_EffectText_o* __this, TMPro_TMP_FontAsset_o* value, const MethodInfo* method);
// 0x3f1f290

void PatreonEffects_EffectText__set_font
               (PatreonEffects_EffectText_o *__this,TMPro_TMP_FontAsset_o *value,MethodInfo *method)

{
  (__this->fields)._font = value;
  il2cpp_runtime_glue(&(__this->fields)._font);
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)value);
  return;
}


// PatreonEffects.EffectText$$get_alignment
// il2cpp: int32_t PatreonEffects_EffectText__get_alignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1f2b0

int32_t PatreonEffects_EffectText__get_alignment
                  (PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.EffectText$$set_alignment
// il2cpp: void PatreonEffects_EffectText__set_alignment (PatreonEffects_EffectText_o* __this, int32_t value, const MethodInfo* method);
// 0x3f1f2c0

void PatreonEffects_EffectText__set_alignment
               (PatreonEffects_EffectText_o *__this,int32_t value,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar7;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  (__this->fields)._alignment = value;
  if (DAT_05703ce8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ce8 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar6 = (Il2CppType *)local_48._8_8_;
  do {
    do {
      do {
        x = local_38;
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar7 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_38 = pUVar7;
      } while ((char)bVar1 != '\0');
      if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         ((UnityEngine_GameObject_o *)x,MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
      if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (uint)pSVar3->max_length;
      local_38 = pUVar7;
    } while ((int)uVar2 < 1);
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4] == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      TMPro_TMP_Text__set_alignment
                ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4],(__this->fields)._alignment,
                 (MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      local_38 = pUVar7;
    } while ((int)uVar4 < (int)uVar2);
  } while( true );
}


// PatreonEffects.EffectText$$get_richText
// il2cpp: bool PatreonEffects_EffectText__get_richText (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1f520

bool_conflict
PatreonEffects_EffectText__get_richText(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._richText);
}


// PatreonEffects.EffectText$$set_richText
// il2cpp: void PatreonEffects_EffectText__set_richText (PatreonEffects_EffectText_o* __this, bool value, const MethodInfo* method);
// 0x3f1f530

void PatreonEffects_EffectText__set_richText
               (PatreonEffects_EffectText_o *__this,bool_conflict value,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)&(__this->fields)._richText = (char)value;
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  return;
}


// PatreonEffects.EffectText$$Compose
// il2cpp: System_String_o* PatreonEffects_EffectText__Compose (System_String_o* content, int32_t effect, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x3f1f540

System_String_o *
PatreonEffects_EffectText__Compose
          (System_String_o *content,int32_t effect,UnityEngine_Color_o colorA,
          UnityEngine_Color_o colorB,UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  System_Enum_o local_38;
  int32_t local_28;
  
  if (DAT_05703ce1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectType);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"</fx>");
    il2cpp_init_method_metadata(&"<fx effect=\"");
    il2cpp_init_method_metadata(&" d=\"#");
    il2cpp_init_method_metadata(&" b=\"#");
    il2cpp_init_method_metadata(&" c=\"#");
    il2cpp_init_method_metadata(&" a=\"#");
    DAT_05703ce1 = '\x01';
  }
  if ((effect == 0) ||
     (bVar1 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0), (char)bVar1 != '\0')) {
    if (content == (System_String_o *)0x0) {
      content = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    return content;
  }
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar2 = System_Text_StringBuilder__Append(__this,"<fx effect=\"",(MethodInfo *)0x0);
    local_38.klass = TypeInfo_NameEffectType;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = effect;
    pSVar3 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
       (pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0),
       pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
      local_b8 = colorA.fields.r;
      fStack_b4 = colorA.fields.g;
      local_a8 = colorA.fields.b;
      fStack_a4 = colorA.fields.a;
      if (9.9999994e-11 <=
          fStack_a4 * fStack_a4 + fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_a8 * local_a8)
      {
        pSVar2 = System_Text_StringBuilder__Append(__this," a=\"#",(MethodInfo *)0x0);
        pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorA,(MethodInfo *)0x0);
        if ((pSVar2 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0),
           pSVar2 == (System_Text_StringBuilder_o *)0x0)) goto LAB_03f1f95a;
        System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
      }
      local_98 = colorB.fields.r;
      fStack_94 = colorB.fields.g;
      local_88 = colorB.fields.b;
      fStack_84 = colorB.fields.a;
      if (9.9999994e-11 <=
          fStack_84 * fStack_84 + fStack_94 * fStack_94 + local_98 * local_98 + local_88 * local_88)
      {
        pSVar2 = System_Text_StringBuilder__Append(__this," b=\"#",(MethodInfo *)0x0);
        pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorB,(MethodInfo *)0x0);
        if ((pSVar2 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0),
           pSVar2 == (System_Text_StringBuilder_o *)0x0)) goto LAB_03f1f95a;
        System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
      }
      local_78 = colorC.fields.r;
      fStack_74 = colorC.fields.g;
      local_68 = colorC.fields.b;
      fStack_64 = colorC.fields.a;
      if (9.9999994e-11 <=
          fStack_64 * fStack_64 + fStack_74 * fStack_74 + local_78 * local_78 + local_68 * local_68)
      {
        pSVar2 = System_Text_StringBuilder__Append(__this," c=\"#",(MethodInfo *)0x0);
        pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorC,(MethodInfo *)0x0);
        if ((pSVar2 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0),
           pSVar2 == (System_Text_StringBuilder_o *)0x0)) goto LAB_03f1f95a;
        System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
      }
      local_58 = colorD.fields.r;
      fStack_54 = colorD.fields.g;
      local_48 = colorD.fields.b;
      fStack_44 = colorD.fields.a;
      if (9.9999994e-11 <=
          fStack_44 * fStack_44 + fStack_54 * fStack_54 + local_58 * local_58 + local_48 * local_48)
      {
        pSVar2 = System_Text_StringBuilder__Append(__this," d=\"#",(MethodInfo *)0x0);
        pSVar3 = UnityEngine_ColorUtility__ToHtmlStringRGB(colorD,(MethodInfo *)0x0);
        if ((pSVar2 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar2 = System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0),
           pSVar2 == (System_Text_StringBuilder_o *)0x0)) goto LAB_03f1f95a;
        System_Text_StringBuilder__Append(pSVar2,0x22,(MethodInfo *)0x0);
      }
      pSVar2 = System_Text_StringBuilder__Append(__this,0x3e,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar2 = System_Text_StringBuilder__Append(pSVar2,content,(MethodInfo *)0x0),
         pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
        System_Text_StringBuilder__Append(pSVar2,"</fx>",(MethodInfo *)0x0);
        pSVar3 = (System_String_o *)
                 (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar3;
      }
    }
  }
LAB_03f1f95a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$ParseLine
// il2cpp: System_Collections_Generic_List_EffectText_Segment__o* PatreonEffects_EffectText__ParseLine (System_String_o* line, const MethodInfo* method);
// 0x3f1f960

/* WARNING: Removing unreachable block (ram,0x03f20544) */
/* WARNING: Removing unreachable block (ram,0x03f20e15) */
/* WARNING: Removing unreachable block (ram,0x03f20a9c) */
/* WARNING: Removing unreachable block (ram,0x03f20e70) */

System_Collections_Generic_List_EffectText_Segment__o *
PatreonEffects_EffectText__ParseLine(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  float *pfVar3;
  PatreonEffects_EffectText_Segment_Fields *pPVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  System_Collections_IEnumerator_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  PatreonEffects_EffectText_Segment_array *pPVar12;
  System_Text_RegularExpressions_Regex_o *__this;
  PatreonEffects_EffectText_Segment_o item;
  PatreonEffects_EffectText_Segment_o item_00;
  PatreonEffects_EffectText_Segment_o item_01;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  System_Nullable_Color__o *pSVar16;
  int32_t iVar17;
  uint3 uVar18;
  undefined8 uVar19;
  System_String_o *pSVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  bool_conflict bVar24;
  System_Text_RegularExpressions_MatchCollection_o *pSVar25;
  Il2CppMethodPointer *ppIVar26;
  long *plVar27;
  System_String_o *pSVar28;
  System_Text_RegularExpressions_GroupCollection_o *pSVar29;
  System_Text_RegularExpressions_Group_o *pSVar30;
  System_Collections_IEnumerator_o *pSVar31;
  System_String_o *pSVar32;
  undefined8 *puVar33;
  int length;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar34;
  long lVar35;
  long lVar36;
  int local_268;
  int32_t local_264;
  System_Collections_IEnumerator_o *local_260;
  long *local_258;
  System_Collections_Generic_List_EffectText_Segment__o *local_250;
  undefined8 local_248;
  float fStack_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  undefined1 uStack_1dc;
  undefined2 uStack_1db;
  undefined1 uStack_1d9;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  System_String_o *local_128;
  undefined8 uStack_120;
  float local_118;
  System_String_o *local_108;
  undefined8 uStack_100;
  float local_f8;
  System_String_o *local_e8;
  undefined8 uStack_e0;
  float local_d8;
  System_String_o *local_c8;
  undefined8 uStack_c0;
  float local_b8;
  System_String_o *local_a8;
  System_String_o *local_a0;
  System_String_o *local_98;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  System_String_o *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  System_String_o *pSStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_05703ce2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectText);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_PatreonEffects_EffectText_Segment);
    il2cpp_init_method_metadata(&TypeInfo_List_Segment);
    il2cpp_init_method_metadata(&TypeInfo_Match);
    il2cpp_init_method_metadata(&"val");
    il2cpp_init_method_metadata(&"a");
    il2cpp_init_method_metadata(&"effect");
    il2cpp_init_method_metadata(&"b");
    il2cpp_init_method_metadata(&"c");
    il2cpp_init_method_metadata(&"attrs");
    il2cpp_init_method_metadata(&"d");
    il2cpp_init_method_metadata(&"content");
    il2cpp_init_method_metadata(&"key");
    DAT_05703ce2 = '\x01';
  }
  local_264 = 0;
  local_c8 = (System_String_o *)0x0;
  uStack_c0 = 0;
  local_b8 = 0.0;
  local_e8 = (System_String_o *)0x0;
  uStack_e0 = 0;
  local_d8 = 0.0;
  local_108 = (System_String_o *)0x0;
  uStack_100 = 0;
  local_f8 = 0.0;
  local_128 = (System_String_o *)0x0;
  uStack_120 = 0;
  local_118 = 0.0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  fStack_12c = 0.0;
  local_148 = 0;
  fStack_140 = 0.0;
  uStack_13c = 0;
  local_158 = 0.0;
  fStack_154 = 0.0;
  uStack_150 = (System_String_o *)0x0;
  local_168 = 0.0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_178 = (System_String_o *)0x0;
  uStack_170 = 0;
  local_188 = (System_String_o *)0x0;
  uStack_180 = 0;
  local_250 = (System_Collections_Generic_List_EffectText_Segment__o *)
              il2cpp_runtime_glue(TypeInfo_List_Segment);
  System_Collections_Generic_List<EffectText_Segment>___ctor(local_250,MethodInfo_List_1_PatreonEffects_EffectText_Segment);
  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar22 = uStack_180;
  if (((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_EffectText + 0xb8) !=
       (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar25 = System_Text_RegularExpressions_Regex__Matches
                          ((System_Text_RegularExpressions_Regex_o *)
                           **(undefined8 **)(TypeInfo_EffectText + 0xb8),line,(MethodInfo *)0x0),
     uVar22 = uStack_180, pSVar25 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    local_a8 = line;
    local_260 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                          (pSVar25,(MethodInfo *)0x0);
    if (local_260 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_268 = 0;
    do {
      pSVar10 = local_260->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar35 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar35) == TypeInfo_IEnumerator) {
            ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar35)].methodPtr;
            goto LAB_03f1fc53;
          }
          lVar35 = lVar35 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar35);
      }
      ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_glue(local_260,TypeInfo_IEnumerator,0);
LAB_03f1fc53:
      cVar23 = (**ppIVar26)(local_260,(MethodInfo *)ppIVar26[1]);
      if (cVar23 == '\0') {
        plVar27 = (long *)il2cpp_runtime_glue(local_260,TypeInfo_IDisposable);
        if (plVar27 == (long *)0x0) goto LAB_03f20a86;
        lVar35 = *plVar27;
        if ((ulong)*(ushort *)(lVar35 + 0x12e) == 0) goto LAB_03f20a5f;
        lVar36 = 0;
        goto LAB_03f20a50;
      }
      pSVar10 = local_260->klass;
      uVar6._0_1_ = (pSVar10->_2).rank;
      uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar35 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar35) == TypeInfo_IEnumerator) {
            ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar35) + 1].methodPtr;
            goto LAB_03f1fcd8;
          }
          lVar35 = lVar35 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar35);
      }
      ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_glue(local_260,TypeInfo_IEnumerator,1);
LAB_03f1fcd8:
      plVar27 = (long *)(**ppIVar26)(local_260,(MethodInfo *)ppIVar26[1]);
      if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_258 = plVar27;
      if ((*(byte *)(*plVar27 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
         (*(long *)(*(long *)(*plVar27 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8) !=
          TypeInfo_Match)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar27);
      }
      length = (int)plVar27[2] - local_268;
      if (length != 0 && local_268 <= (int)plVar27[2]) {
        if (local_a8 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar28 = System_String__Substring(local_a8,local_268,length,(MethodInfo *)0x0);
        if (pSVar28 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (0 < (pSVar28->fields)._stringLength) {
          fStack_140 = 0.0;
          uStack_13c = 0;
          local_138 = 0;
          uStack_134 = 0;
          uStack_150 = (System_String_o *)0x0;
          local_148 = 0;
          uStack_160 = 0;
          uStack_15c = 0;
          local_158 = 0.0;
          fStack_154 = 0.0;
          uStack_170 = 0;
          local_168 = 0.0;
          uStack_164 = 0;
          uStack_180 = 0;
          local_178 = (System_String_o *)0x0;
          uStack_130 = 0;
          fStack_12c = 0.0;
          local_188 = pSVar28;
          il2cpp_runtime_glue(&local_188);
          uVar22 = uStack_180;
          lVar35 = MethodInfo_Void_Add;
          uStack_180 = uStack_180 & 0xffffffffffffff00;
          uVar21 = uStack_180;
          local_1f8 = CONCAT44(uStack_134,local_138);
          uStack_1f0 = CONCAT44(fStack_12c,uStack_130);
          local_208 = local_148;
          uStack_200 = CONCAT44(uStack_13c,fStack_140);
          local_218 = CONCAT44(fStack_154,local_158);
          uVar13 = SUB84(uStack_150,0);
          uStack_210 = uStack_150;
          local_228 = CONCAT44(uStack_164,local_168);
          uStack_220 = CONCAT44(uStack_15c,uStack_160);
          fVar14 = SUB84(local_178,0);
          local_238 = local_178;
          fVar15 = (float)uStack_170;
          uStack_230 = uStack_170;
          local_248 = local_188;
          fStack_240._1_3_ = (uint3)(uVar22 >> 8);
          uVar18 = fStack_240._1_3_;
          fStack_240 = (float)((uint)fStack_240._1_3_ << 8);
          uStack_23c = (undefined1)(uVar22 >> 0x20);
          uStack_180._5_2_ = SUB82(uVar22,5);
          uStack_23b = uStack_180._5_2_;
          uStack_180._7_1_ = SUB81(uVar22,7);
          uStack_239 = uStack_180._7_1_;
          uStack_180 = uVar21;
          if (local_250 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uStack_1a0 = uStack_200;
          local_1b8 = local_158;
          fStack_1b4 = fStack_154;
          uStack_1ac = uStack_150._4_4_;
          local_1c8 = local_168;
          uStack_1c4 = uStack_164;
          uStack_1c0 = uStack_160;
          uStack_1bc = uStack_15c;
          fStack_1d4 = local_178._4_4_;
          fStack_1cc = uStack_170._4_4_;
          local_1e8 = local_188;
          pSVar28 = local_1e8;
          fStack_1e0 = (float)((uint)uVar18 << 8);
          uStack_1dc = uStack_23c;
          uStack_1db = uStack_180._5_2_;
          uStack_1d9 = uStack_180._7_1_;
          piVar1 = &(local_250->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar12 = (local_250->fields)._items;
          local_1d8 = fVar14;
          fStack_1d0 = fVar15;
          uStack_1b0 = uVar13;
          local_1a8 = local_208;
          local_198 = local_1f8;
          uStack_190 = uStack_1f0;
          if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar9 = (local_250->fields)._size;
          if (uVar9 < (uint)pPVar12->max_length) {
            (local_250->fields)._size = uVar9 + 1;
            pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
            (pUVar2->fields).r = (float)local_138;
            (pUVar2->fields).g = (float)uStack_134;
            (pUVar2->fields).b = (float)uStack_130;
            (pUVar2->fields).a = fStack_12c;
            pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
            (pSVar16->fields).value.fields.g = (float)(undefined4)local_148;
            (pSVar16->fields).value.fields.b = (float)local_148._4_4_;
            *(undefined8 *)(&(pSVar16->fields).value.fields.g + 2) = uStack_200;
            local_1e8._0_4_ = (bool_conflict)local_188;
            local_1e8._4_4_ = (float)((ulong)local_188 >> 0x20);
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
            *pfVar3 = local_158;
            pfVar3[1] = fStack_154;
            pfVar3[2] = (float)uVar13;
            pfVar3[3] = (float)uStack_150._4_4_;
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
            *pfVar3 = local_168;
            pfVar3[1] = (float)uStack_164;
            pfVar3[2] = (float)uStack_160;
            pfVar3[3] = (float)uStack_15c;
            pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
            (pSVar16->fields).hasValue = (bool_conflict)fVar14;
            (pSVar16->fields).value.fields.r = local_178._4_4_;
            (pSVar16->fields).value.fields.g = fVar15;
            (pSVar16->fields).value.fields.b = uStack_170._4_4_;
            pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
            *(bool_conflict *)&pPVar4->Content = (bool_conflict)local_1e8;
            *(float *)((long)&pPVar4->Content + 4) = local_1e8._4_4_;
            pPVar4->HasEffect = (bool_conflict)fStack_1e0;
            pPVar4->Effect = (int32_t)(uVar22 >> 0x20);
            local_1e8 = pSVar28;
            il2cpp_runtime_glue(&pPVar12->m_Items[(int)uVar9].fields,0);
          }
          else {
            item_00.fields.ColorB.fields.hasValue = uStack_164;
            item_00.fields.ColorA.fields.value.fields.a = local_168;
            item_00.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
            item_00.fields.ColorB.fields.value.fields.r = (float)uStack_160;
            item_00.fields.ColorB.fields.value.fields.a = fStack_154;
            item_00.fields.ColorB.fields.value.fields.b = local_158;
            item_00.fields.HasEffect = (int)(uVar22 & 0xffffffffffffff00);
            item_00.fields.Effect = (int)((uVar22 & 0xffffffffffffff00) >> 0x20);
            item_00.fields.Content = local_188;
            item_00.fields.ColorA.fields._0_8_ = local_178;
            item_00.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_170;
            item_00.fields.ColorA.fields.value.fields.b = uStack_170._4_4_;
            item_00.fields.ColorC.fields._0_8_ = uStack_150;
            item_00.fields.ColorC.fields.value.fields.g = (float)(undefined4)local_148;
            item_00.fields.ColorC.fields.value.fields.b = (float)local_148._4_4_;
            item_00.fields.ColorC.fields.value.fields.a = fStack_140;
            item_00.fields.ColorD.fields.hasValue = uStack_13c;
            item_00.fields.ColorD.fields.value.fields.r = (float)local_138;
            item_00.fields.ColorD.fields.value.fields.g = (float)uStack_134;
            item_00.fields.ColorD.fields.value.fields.b = (float)uStack_130;
            item_00.fields.ColorD.fields.value.fields.a = fStack_12c;
            System_Collections_Generic_List<EffectText_Segment>__AddWithResize
                      (local_250,item_00,
                       *(MethodInfo_363E8E0 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      pSVar29 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*local_258 + 0x188))(local_258,*(undefined8 *)(*local_258 + 400));
      if (pSVar29 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = System_Text_RegularExpressions_GroupCollection__get_Item
                          (pSVar29,"attrs",(MethodInfo *)0x0);
      if (pSVar30 == (System_Text_RegularExpressions_Group_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar28 = System_Text_RegularExpressions_Capture__get_Value
                          ((System_Text_RegularExpressions_Capture_o *)pSVar30,(MethodInfo *)0x0);
      pSVar29 = (System_Text_RegularExpressions_GroupCollection_o *)
                (**(code **)(*local_258 + 0x188))(local_258,*(undefined8 *)(*local_258 + 400));
      if (pSVar29 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = System_Text_RegularExpressions_GroupCollection__get_Item
                          (pSVar29,"content",(MethodInfo *)0x0);
      if (pSVar30 == (System_Text_RegularExpressions_Group_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_a0 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)pSVar30,(MethodInfo *)0x0);
      local_264 = 0;
      local_c8 = (System_String_o *)0x0;
      uStack_c0 = 0;
      local_b8 = 0.0;
      local_e8 = (System_String_o *)0x0;
      uStack_e0 = 0;
      local_d8 = 0.0;
      local_108 = (System_String_o *)0x0;
      uStack_100 = 0;
      local_f8 = 0.0;
      local_128 = (System_String_o *)0x0;
      uStack_120 = 0;
      local_118 = 0.0;
      if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_EffectText + 0xb8) + 8);
      if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar25 = System_Text_RegularExpressions_Regex__Matches(__this,pSVar28,(MethodInfo *)0x0);
      if (pSVar25 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar31 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                          (pSVar25,(MethodInfo *)0x0);
      if (pSVar31 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03f2014f:
      pSVar10 = pSVar31->klass;
      uVar7._0_1_ = (pSVar10->_2).rank;
      uVar7._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar35 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar35) == TypeInfo_IEnumerator) {
            ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar35)].methodPtr;
            goto LAB_03f201a3;
          }
          lVar35 = lVar35 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar35);
      }
      ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar31,TypeInfo_IEnumerator,0);
LAB_03f201a3:
      cVar23 = (**ppIVar26)(pSVar31,(MethodInfo *)ppIVar26[1]);
      if (cVar23 != '\0') {
        pSVar10 = pSVar31->klass;
        uVar8._0_1_ = (pSVar10->_2).rank;
        uVar8._1_1_ = (pSVar10->_2).minimumAlignment;
        if ((ulong)uVar8 != 0) {
          pIVar11 = (pSVar10->_1).interfaceOffsets;
          lVar35 = 0;
          do {
            if (*(long *)((long)&pIVar11->interfaceType + lVar35) == TypeInfo_IEnumerator) {
              ppIVar26 = &pSVar10->vtable[*(int *)((long)&pIVar11->offset + lVar35) + 1].methodPtr;
              goto LAB_03f20228;
            }
            lVar35 = lVar35 + 0x10;
          } while ((ulong)uVar8 << 4 != lVar35);
        }
        ppIVar26 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar31,TypeInfo_IEnumerator,1);
LAB_03f20228:
        plVar27 = (long *)(**ppIVar26)(pSVar31,(MethodInfo *)ppIVar26[1]);
        if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((*(byte *)(*plVar27 + 0x130) < *(byte *)(TypeInfo_Match + 0x130)) ||
           (*(long *)(*(long *)(*plVar27 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Match + 0x130) * 8)
            != TypeInfo_Match)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(plVar27);
        }
        pSVar29 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
        if (pSVar29 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar30 = System_Text_RegularExpressions_GroupCollection__get_Item
                            (pSVar29,"key",(MethodInfo *)0x0);
        if (pSVar30 == (System_Text_RegularExpressions_Group_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar28 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar30,(MethodInfo *)0x0);
        if (pSVar28 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar28 = System_String__ToLowerInvariant(pSVar28,(MethodInfo *)0x0);
        pSVar29 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
        if (pSVar29 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar30 = System_Text_RegularExpressions_GroupCollection__get_Item
                            (pSVar29,"val",(MethodInfo *)0x0);
        if (pSVar30 == (System_Text_RegularExpressions_Group_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar32 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar30,(MethodInfo *)0x0);
        bVar24 = System_String__op_Equality(pSVar28,"effect",(MethodInfo *)0x0);
        if ((char)bVar24 == '\0') {
          bVar24 = System_String__op_Equality(pSVar28,"a",(MethodInfo *)0x0);
          if ((char)bVar24 == '\0') {
            bVar24 = System_String__op_Equality(pSVar28,"b",(MethodInfo *)0x0);
            if ((char)bVar24 == '\0') {
              bVar24 = System_String__op_Equality(pSVar28,"c",(MethodInfo *)0x0);
              if ((char)bVar24 == '\0') {
                bVar24 = System_String__op_Equality(pSVar28,"d",(MethodInfo *)0x0);
                if ((char)bVar24 != '\0') {
                  pMVar34 = extraout_RDX_05;
                  if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar34 = extraout_RDX_06;
                  }
                  PatreonEffects_EffectText__ParseColor
                            ((System_Nullable_Color__o *)&local_1e8,pSVar32,pMVar34);
                  local_118 = local_1d8;
                  local_128 = local_1e8;
                  uStack_120 = CONCAT17(uStack_1d9,
                                        CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
                }
              }
              else {
                pMVar34 = extraout_RDX_03;
                if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar34 = extraout_RDX_04;
                }
                PatreonEffects_EffectText__ParseColor
                          ((System_Nullable_Color__o *)&local_1e8,pSVar32,pMVar34);
                local_f8 = local_1d8;
                local_108 = local_1e8;
                uStack_100 = CONCAT17(uStack_1d9,
                                      CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
              }
            }
            else {
              pMVar34 = extraout_RDX_01;
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar34 = extraout_RDX_02;
              }
              PatreonEffects_EffectText__ParseColor
                        ((System_Nullable_Color__o *)&local_1e8,pSVar32,pMVar34);
              local_d8 = local_1d8;
              local_e8 = local_1e8;
              uStack_e0 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
            }
          }
          else {
            pMVar34 = extraout_RDX;
            if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar34 = extraout_RDX_00;
            }
            PatreonEffects_EffectText__ParseColor
                      ((System_Nullable_Color__o *)&local_1e8,pSVar32,pMVar34);
            local_b8 = local_1d8;
            local_c8 = local_1e8;
            uStack_c0 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
          }
        }
        else {
          PatreonEffects_NameEffectPresets__TryResolve(pSVar32,&local_264,(MethodInfo *)0x0);
        }
        goto LAB_03f2014f;
      }
      plVar27 = (long *)il2cpp_runtime_glue(pSVar31,TypeInfo_IDisposable);
      if (plVar27 != (long *)0x0) {
        lVar35 = *plVar27;
        if ((ulong)*(ushort *)(lVar35 + 0x12e) != 0) {
          lVar36 = 0;
          do {
            if (*(long *)(*(long *)(lVar35 + 0xb0) + lVar36) == TypeInfo_IDisposable) {
              puVar33 = (undefined8 *)
                        (lVar35 + (long)*(int *)(*(long *)(lVar35 + 0xb0) + 8 + lVar36) * 0x10 +
                        0x138);
              goto LAB_03f2052d;
            }
            lVar36 = lVar36 + 0x10;
          } while ((ulong)*(ushort *)(lVar35 + 0x12e) << 4 != lVar36);
        }
        puVar33 = (undefined8 *)il2cpp_runtime_glue(plVar27,TypeInfo_IDisposable,0);
LAB_03f2052d:
        (*(code *)*puVar33)(plVar27,puVar33[1]);
      }
      iVar17 = local_264;
      fStack_140 = 0.0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      uStack_150 = (System_String_o *)0x0;
      local_148 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      local_158 = 0.0;
      fStack_154 = 0.0;
      uStack_170 = 0;
      local_168 = 0.0;
      uStack_164 = 0;
      uStack_180 = 0;
      local_178 = (System_String_o *)0x0;
      uStack_130 = 0;
      fStack_12c = 0.0;
      local_188 = local_a0;
      il2cpp_runtime_glue(&local_188);
      lVar35 = MethodInfo_Void_Add;
      uStack_180 = CONCAT71(uStack_180._1_7_,iVar17 != 0);
      uStack_180 = CONCAT44(local_264,(float)uStack_180);
      local_168 = local_b8;
      local_178 = local_c8;
      pSVar28 = local_178;
      uStack_170 = uStack_c0;
      uVar19 = uStack_170;
      fStack_154 = local_d8;
      uStack_164 = SUB84(local_e8,0);
      uStack_160 = (undefined4)((ulong)local_e8 >> 0x20);
      uStack_15c = (undefined4)uStack_e0;
      local_158 = (float)((ulong)uStack_e0 >> 0x20);
      fStack_140 = local_f8;
      local_148 = uStack_100;
      uStack_150 = local_108;
      pSVar32 = uStack_150;
      fStack_12c = local_118;
      uStack_13c = SUB84(local_128,0);
      local_138 = (undefined4)((ulong)local_128 >> 0x20);
      uStack_134 = (undefined4)uStack_120;
      uStack_130 = (undefined4)((ulong)uStack_120 >> 0x20);
      local_1f8 = CONCAT44(uStack_134,local_138);
      uStack_1f0 = CONCAT44(local_118,uStack_130);
      local_208 = uStack_100;
      uStack_200 = CONCAT44(uStack_13c,local_f8);
      fStack_240 = (float)uStack_180;
      local_178._4_4_ = (float)((ulong)local_c8 >> 0x20);
      uStack_170._4_4_ = (float)((ulong)uStack_c0 >> 0x20);
      uStack_150._4_4_ = (undefined4)((ulong)local_108 >> 0x20);
      local_218 = CONCAT44(local_d8,local_158);
      uVar13 = SUB84(local_108,0);
      uStack_210 = local_108;
      local_228 = CONCAT44(uStack_164,local_b8);
      uStack_220 = CONCAT44(uStack_15c,uStack_160);
      fVar14 = SUB84(local_c8,0);
      local_238 = local_c8;
      fVar15 = (float)uStack_c0;
      uStack_230 = uStack_c0;
      local_248 = local_188;
      uStack_23c = (undefined1)local_264;
      uStack_23b = (undefined2)((uint)local_264 >> 8);
      uStack_239 = (undefined1)((uint)local_264 >> 0x18);
      local_178 = pSVar28;
      uStack_170 = uVar19;
      uStack_150 = pSVar32;
      if (local_250 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_1a8 = uStack_100;
      fStack_1e0 = (float)uStack_180;
      fStack_1d4 = local_178._4_4_;
      fStack_1cc = uStack_170._4_4_;
      local_1c8 = local_b8;
      uStack_1c4 = uStack_164;
      uStack_1c0 = uStack_160;
      uStack_1bc = uStack_15c;
      local_1b8 = local_158;
      fStack_1b4 = local_d8;
      uStack_1ac = uStack_150._4_4_;
      local_1e8 = local_188;
      uStack_1d9 = uStack_239;
      piVar1 = &(local_250->fields)._version;
      *piVar1 = *piVar1 + 1;
      pPVar12 = (local_250->fields)._items;
      uStack_1dc = uStack_23c;
      uStack_1db = uStack_23b;
      local_1d8 = fVar14;
      fStack_1d0 = fVar15;
      uStack_1b0 = uVar13;
      uStack_1a0 = uStack_200;
      local_198 = local_1f8;
      uStack_190 = uStack_1f0;
      if (pPVar12 == (PatreonEffects_EffectText_Segment_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar9 = (local_250->fields)._size;
      if (uVar9 < (uint)pPVar12->max_length) {
        (local_250->fields)._size = uVar9 + 1;
        pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
        (pUVar2->fields).r = (float)local_138;
        (pUVar2->fields).g = (float)uStack_134;
        (pUVar2->fields).b = (float)uStack_130;
        (pUVar2->fields).a = local_118;
        pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
        (pSVar16->fields).value.fields.g = (float)(undefined4)uStack_100;
        (pSVar16->fields).value.fields.b = (float)uStack_100._4_4_;
        *(undefined8 *)(&(pSVar16->fields).value.fields.g + 2) = uStack_200;
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
        *pfVar3 = local_158;
        pfVar3[1] = local_d8;
        pfVar3[2] = (float)uVar13;
        pfVar3[3] = (float)uStack_150._4_4_;
        pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
        *pfVar3 = local_b8;
        pfVar3[1] = (float)uStack_164;
        pfVar3[2] = (float)uStack_160;
        pfVar3[3] = (float)uStack_15c;
        pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
        (pSVar16->fields).hasValue = (bool_conflict)fVar14;
        (pSVar16->fields).value.fields.r = local_178._4_4_;
        (pSVar16->fields).value.fields.g = fVar15;
        (pSVar16->fields).value.fields.b = uStack_170._4_4_;
        pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
        *(int *)&pPVar4->Content = (int)local_188;
        *(undefined4 *)((long)&pPVar4->Content + 4) = local_188._4_4_;
        pPVar4->HasEffect = (bool_conflict)(float)uStack_180;
        pPVar4->Effect = local_264;
        il2cpp_runtime_glue(&pPVar12->m_Items[(int)uVar9].fields,0);
      }
      else {
        item.fields.Effect._0_1_ = uStack_23c;
        item.fields.HasEffect = (bool_conflict)(float)uStack_180;
        item.fields.Effect._1_2_ = uStack_23b;
        item.fields.Effect._3_1_ = uStack_239;
        item.fields.ColorB.fields.hasValue = uStack_164;
        item.fields.ColorA.fields.value.fields.a = local_b8;
        item.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
        item.fields.ColorB.fields.value.fields.r = (float)uStack_160;
        item.fields.ColorB.fields.value.fields.a = local_d8;
        item.fields.ColorB.fields.value.fields.b = local_158;
        item.fields.Content = local_188;
        item.fields.ColorA.fields._0_8_ = local_c8;
        item.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_c0;
        item.fields.ColorA.fields.value.fields.b = (float)uStack_c0._4_4_;
        item.fields.ColorC.fields._0_8_ = local_108;
        item.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_100;
        item.fields.ColorC.fields.value.fields.b = (float)uStack_100._4_4_;
        item.fields.ColorC.fields.value.fields.a = local_f8;
        item.fields.ColorD.fields.hasValue = uStack_13c;
        item.fields.ColorD.fields.value.fields.r = (float)local_138;
        item.fields.ColorD.fields.value.fields.g = (float)uStack_134;
        item.fields.ColorD.fields.value.fields.b = (float)uStack_130;
        item.fields.ColorD.fields.value.fields.a = local_118;
        local_178 = local_c8;
        uStack_170 = uStack_c0;
        uStack_150 = local_108;
        System_Collections_Generic_List<EffectText_Segment>__AddWithResize
                  (local_250,item,
                   *(MethodInfo_363E8E0 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
      }
      local_268 = *(int *)((long)local_258 + 0x14) + (int)local_258[2];
    } while( true );
  }
  goto LAB_03f20e66;
  while (lVar36 = lVar36 + 0x10, (ulong)*(ushort *)(lVar35 + 0x12e) << 4 != lVar36) {
LAB_03f20a50:
    if (*(long *)(*(long *)(lVar35 + 0xb0) + lVar36) == TypeInfo_IDisposable) {
      puVar33 = (undefined8 *)
                (lVar35 + (long)*(int *)(*(long *)(lVar35 + 0xb0) + 8 + lVar36) * 0x10 + 0x138);
      goto LAB_03f20a7d;
    }
  }
LAB_03f20a5f:
  puVar33 = (undefined8 *)il2cpp_runtime_glue(plVar27,TypeInfo_IDisposable,0);
LAB_03f20a7d:
  (*(code *)*puVar33)(plVar27,puVar33[1]);
LAB_03f20a86:
  uVar22 = uStack_180;
  if (local_a8 != (System_String_o *)0x0) {
    if ((local_a8->fields)._stringLength <= local_268) {
      return local_250;
    }
    pSVar28 = System_String__Substring(local_a8,local_268,(MethodInfo *)0x0);
    uVar22 = uStack_180;
    if (pSVar28 != (System_String_o *)0x0) {
      if ((pSVar28->fields)._stringLength < 1) {
        return local_250;
      }
      fStack_140 = 0.0;
      uStack_13c = 0;
      local_138 = 0;
      uStack_134 = 0;
      uStack_150 = (System_String_o *)0x0;
      local_148 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      local_158 = 0.0;
      fStack_154 = 0.0;
      uStack_170 = 0;
      local_168 = 0.0;
      uStack_164 = 0;
      uStack_180 = 0;
      local_178 = (System_String_o *)0x0;
      uStack_130 = 0;
      fStack_12c = 0.0;
      local_188 = pSVar28;
      il2cpp_runtime_glue(&local_188,pSVar28);
      uVar21 = uStack_180;
      lVar35 = MethodInfo_Void_Add;
      uStack_180 = uStack_180 & 0xffffffffffffff00;
      uVar22 = uStack_180;
      local_48 = CONCAT44(uStack_134,local_138);
      uStack_40 = CONCAT44(fStack_12c,uStack_130);
      local_78 = CONCAT44(uStack_164,local_168);
      uStack_70 = CONCAT44(uStack_15c,uStack_160);
      local_68 = CONCAT44(fStack_154,local_158);
      uStack_50 = CONCAT44(uStack_13c,fStack_140);
      local_58 = local_148;
      pSStack_60 = uStack_150;
      local_88 = local_178;
      uStack_80 = uStack_170;
      local_98 = local_188;
      local_90 = 0;
      uStack_180._1_4_ = SUB84(uVar21,1);
      local_8f = uStack_180._1_4_;
      uStack_180._5_2_ = SUB82(uVar21,5);
      local_8b = uStack_180._5_2_;
      uStack_180._7_1_ = SUB81(uVar21,7);
      local_89 = uStack_180._7_1_;
      if (local_250 != (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
        local_208 = local_148;
        uStack_210 = uStack_150;
        pSVar20 = uStack_210;
        local_238 = local_178;
        pSVar32 = local_238;
        uStack_230 = uStack_170;
        uVar19 = uStack_230;
        local_248 = local_188;
        pSVar28 = local_248;
        fStack_240._1_3_ = (uint3)(uVar21 >> 8);
        fStack_240 = (float)((uint)fStack_240._1_3_ << 8);
        uStack_23c = (undefined1)(uVar21 >> 0x20);
        uStack_23b = uStack_180._5_2_;
        uStack_239 = uStack_180._7_1_;
        piVar1 = &(local_250->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar12 = (local_250->fields)._items;
        local_228 = local_78;
        uStack_220 = uStack_70;
        local_218 = local_68;
        uStack_200 = uStack_50;
        local_1f8 = local_48;
        uStack_1f0 = uStack_40;
        if (pPVar12 != (PatreonEffects_EffectText_Segment_array *)0x0) {
          uVar9 = (local_250->fields)._size;
          uStack_180 = uVar22;
          if (uVar9 < (uint)pPVar12->max_length) {
            (local_250->fields)._size = uVar9 + 1;
            pUVar2 = &pPVar12->m_Items[(int)uVar9].fields.ColorD.fields.value;
            (pUVar2->fields).r = (float)local_138;
            (pUVar2->fields).g = (float)uStack_134;
            (pUVar2->fields).b = (float)uStack_130;
            (pUVar2->fields).a = fStack_12c;
            pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorC;
            (pSVar16->fields).value.fields.g = (float)(undefined4)local_148;
            (pSVar16->fields).value.fields.b = (float)local_148._4_4_;
            *(undefined8 *)(&(pSVar16->fields).value.fields.g + 2) = uStack_50;
            local_248._0_4_ = SUB84(local_188,0);
            local_248._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
            local_238._0_4_ = (bool_conflict)local_178;
            local_238._4_4_ = (float)((ulong)local_178 >> 0x20);
            uStack_230._0_4_ = (float)uStack_170;
            uStack_230._4_4_ = (float)((ulong)uStack_170 >> 0x20);
            uStack_210._0_4_ = SUB84(uStack_150,0);
            uStack_210._4_4_ = (undefined4)((ulong)uStack_150 >> 0x20);
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorB.fields.value.fields.b;
            *pfVar3 = local_158;
            pfVar3[1] = fStack_154;
            pfVar3[2] = (float)(undefined4)uStack_210;
            pfVar3[3] = (float)uStack_210._4_4_;
            pfVar3 = &pPVar12->m_Items[(int)uVar9].fields.ColorA.fields.value.fields.a;
            *pfVar3 = local_168;
            pfVar3[1] = (float)uStack_164;
            pfVar3[2] = (float)uStack_160;
            pfVar3[3] = (float)uStack_15c;
            pSVar16 = &pPVar12->m_Items[(int)uVar9].fields.ColorA;
            (pSVar16->fields).hasValue = (bool_conflict)local_238;
            (pSVar16->fields).value.fields.r = local_238._4_4_;
            (pSVar16->fields).value.fields.g = (float)uStack_230;
            (pSVar16->fields).value.fields.b = uStack_230._4_4_;
            pPVar4 = &pPVar12->m_Items[(int)uVar9].fields;
            *(undefined4 *)&pPVar4->Content = (undefined4)local_248;
            *(undefined4 *)((long)&pPVar4->Content + 4) = local_248._4_4_;
            pPVar4->HasEffect = (bool_conflict)fStack_240;
            pPVar4->Effect = (int32_t)(uVar21 >> 0x20);
            local_248 = pSVar28;
            local_238 = pSVar32;
            uStack_230 = uVar19;
            uStack_210 = pSVar20;
            il2cpp_runtime_glue(&pPVar12->m_Items[(int)uVar9].fields,0);
            return local_250;
          }
          item_01.fields.HasEffect = (int)(uVar21 & 0xffffffffffffff00);
          item_01.fields.Effect = (int)((uVar21 & 0xffffffffffffff00) >> 0x20);
          item_01.fields.Content = local_188;
          item_01.fields.ColorA.fields._0_8_ = local_178;
          item_01.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_170;
          item_01.fields.ColorA.fields.value.fields.b = uStack_170._4_4_;
          item_01.fields.ColorA.fields.value.fields.a = local_168;
          item_01.fields.ColorB.fields.hasValue = uStack_164;
          item_01.fields.ColorB.fields.value.fields.r = (float)uStack_160;
          item_01.fields.ColorB.fields.value.fields.g = (float)uStack_15c;
          item_01.fields.ColorB.fields.value.fields.b = local_158;
          item_01.fields.ColorB.fields.value.fields.a = fStack_154;
          item_01.fields.ColorC.fields._0_8_ = uStack_150;
          item_01.fields.ColorC.fields.value.fields.g = (float)(undefined4)local_148;
          item_01.fields.ColorC.fields.value.fields.b = (float)local_148._4_4_;
          item_01.fields.ColorC.fields.value.fields.a = fStack_140;
          item_01.fields.ColorD.fields.hasValue = uStack_13c;
          item_01.fields.ColorD.fields.value.fields.r = (float)local_138;
          item_01.fields.ColorD.fields.value.fields.g = (float)uStack_134;
          item_01.fields.ColorD.fields.value.fields.b = (float)uStack_130;
          item_01.fields.ColorD.fields.value.fields.a = fStack_12c;
          System_Collections_Generic_List<EffectText_Segment>__AddWithResize
                    (local_250,item_01,
                     *(MethodInfo_363E8E0 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
          return local_250;
        }
      }
    }
  }
LAB_03f20e66:
  uStack_180 = uVar22;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$ParseColor
// il2cpp: System_Nullable_Color__o PatreonEffects_EffectText__ParseColor (System_String_o* hex, const MethodInfo* method);
// 0x3f20fb0

System_Nullable_Color__o *
PatreonEffects_EffectText__ParseColor
          (System_Nullable_Color__o *__return_storage_ptr__,System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_o value;
  System_Nullable_Color__o __this;
  bool_conflict bVar1;
  float unaff_EBX;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (DAT_05703ce3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Color);
    il2cpp_init_method_metadata(&"#");
    DAT_05703ce3 = '\x01';
  }
  uVar2._0_4_ = 0.0;
  uVar2._4_4_ = 0.0;
  uVar3._0_4_ = 0.0;
  uVar3._4_4_ = 0.0;
  bVar1 = System_String__IsNullOrEmpty(hex,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (hex == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_String__StartsWith(hex,"#",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      hex = System_String__Concat("#",hex,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (hex,(UnityEngine_Color_o *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      value.fields.b = (float)uVar3;
      value.fields.a = SUB84(uVar3,4);
      value.fields.r = (float)uVar2;
      value.fields.g = SUB84(uVar2,4);
      (__return_storage_ptr__->fields).hasValue = 0;
      (__return_storage_ptr__->fields).value.fields.r = 0.0;
      (__return_storage_ptr__->fields).value.fields.g = 0.0;
      (__return_storage_ptr__->fields).value.fields.b = 0.0;
      (__return_storage_ptr__->fields).value.fields.a = 0.0;
      __this.fields.value.fields.g = (float)uVar3;
      __this.fields.value.fields.b = SUB84(uVar3,4);
      __this.fields.hasValue = (bool_conflict)(float)uVar2;
      __this.fields.value.fields.r = SUB84(uVar2,4);
      __this.fields.value.fields.a = unaff_EBX;
      System_Nullable<Color>___ctor(__this,value,(MethodInfo_37565F0 *)__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->fields).hasValue = 0;
  (__return_storage_ptr__->fields).value.fields.r = 0.0;
  (__return_storage_ptr__->fields).value.fields.g = 0.0;
  (__return_storage_ptr__->fields).value.fields.b = 0.0;
  (__return_storage_ptr__->fields).value.fields.a = 0.0;
  return __return_storage_ptr__;
}


// PatreonEffects.EffectText$$Rebuild
// il2cpp: void PatreonEffects_EffectText__Rebuild (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1e580

void PatreonEffects_EffectText__Rebuild(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  PatreonEffects_EffectText_Segment_o seg;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_EffectText_Segment__o *__this_04;
  System_Type_array *components;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_06;
  UnityEngine_UI_ContentSizeFitter_o *__this_07;
  UnityEngine_GameObject_o *item;
  undefined8 uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  MethodInfo *method_01;
  UnityEngine_Object_o *in_stack_fffffffffffffdf8;
  Il2CppRGCTXData *in_stack_fffffffffffffe00;
  _union_247328 in_stack_fffffffffffffe08;
  undefined1 local_1a8 [72];
  Il2CppType *pIStack_160;
  Il2CppType **local_158;
  Il2CppRGCTXData *pIStack_150;
  _union_247130 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  MethodInfo_31ACA30 local_118;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [16];
  UnityEngine_Object_o *local_90;
  Il2CppRGCTXData *pIStack_88;
  _union_247328 local_80;
  Il2CppType *pIStack_78;
  Il2CppType **local_70;
  Il2CppRGCTXData *pIStack_68;
  _union_247130 local_60;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t local_50;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05703ce4 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ContentSizeFitter);
    il2cpp_init_method_metadata(&TypeInfo_EffectText);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_EffectText_Segment_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_HorizontalLayoutGroup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_PatreonEffects_EffectText_S);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"EffectTextRow");
    DAT_05703ce4 = '\x01';
  }
  local_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  local_1a8._16_8_ = (UnityEngine_Object_o *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_118.slot = 0;
  local_118.parameters_count = '\0';
  local_118.bitflags = '\0';
  local_118._84_4_ = 0;
  uStack_c0 = 0;
  local_118.field8_0x40.genericMethod = (void *)0x0;
  local_118.token = 0;
  local_118.flags = 0;
  local_118.iflags = 0;
  local_118.parameters = (Il2CppType **)0x0;
  local_118.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_118.return_type = (Il2CppType *)0x0;
  local_118.invoker_method = (InvokerMethod)0x0;
  local_118.name = (char *)0x0;
  local_118.methodPointer = (Il2CppMethodPointer)0x0;
  local_118.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_138._0_2_ = 0;
  local_138._2_1_ = '\0';
  local_138._3_1_ = '\0';
  local_138._4_4_ = 0;
  uStack_130 = 0;
  local_148.genericMethod = (void *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  local_158 = (Il2CppType **)0x0;
  pIStack_150 = (Il2CppRGCTXData *)0x0;
  local_1a8._64_8_ = (Il2CppObject *)0x0;
  pIStack_160 = (Il2CppType *)0x0;
  local_1a8._48_8_ = (UnityEngine_Object_o *)0x0;
  local_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    local_1a8._16_8_ = local_90;
    local_1a8._0_8_ = local_a0._0_8_;
    local_1a8._8_8_ = local_a0._8_8_;
    while (__this_00.fields._8_8_ = in_stack_fffffffffffffe00,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8
          , __this_00.fields._current = in_stack_fffffffffffffe08.genericMethod,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)local_1a8), uVar11 = local_1a8._16_8_,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)uVar11,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy((UnityEngine_Object_o *)uVar11,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
    __this_01.fields._current = in_stack_fffffffffffffe08.genericMethod;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)local_1a8);
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar6 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        method_01 = (MethodInfo *)0xa;
        pSVar7 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length < 1) {
            return;
          }
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          local_1a8._40_8_ = pSVar7;
          if ((pSVar7->max_length & 0xffffffff) != 0) {
            do {
              pSVar4 = ((System_String_o **)(local_1a8._40_8_ + 0x20))[(long)pSVar12];
              if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                il2cpp_init_class();
              }
              __this_04 = PatreonEffects_EffectText__ParseLine(pSVar4,method_01);
              if (__this_04 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0)
              goto LAB_03f1ee6e;
              if ((__this_04->fields)._size == 0) {
                pSVar3 = (__this->fields)._segments;
                method_01 = (MethodInfo *)
                            PatreonEffects_EffectText__CreateSpacerRow(__this,method_01);
                lVar9 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0)
                goto LAB_03f1ee6e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto LAB_03f1ee6e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_01;
                  il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,
                             (Il2CppObject *)method_01,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                local_1a8._32_8_ = pSVar12;
                components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                handle.fields.value = TypeRef_RectTransform.fields.value;
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (components == (System_Type_array *)0x0) goto LAB_03f1ee6e;
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_glue(pSVar8,(((components->obj).klass)->_1).element_class)
                   , lVar9 == 0)) {
LAB_03f1ee78:
                  uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                  il2cpp_glue_02274a00(uVar11,0);
                }
                if ((int)components->max_length == 0) break;
                components->m_Items[0] = pSVar8;
                il2cpp_runtime_glue(components->m_Items);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_glue(pSVar8,(((components->obj).klass)->_1).element_class)
                   , lVar9 == 0)) goto LAB_03f1ee78;
                if ((uint)components->max_length < 2) break;
                components->m_Items[1] = pSVar8;
                il2cpp_runtime_glue(components->m_Items + 1);
                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                if ((pSVar8 != (System_Type_o *)0x0) &&
                   (lVar9 = il2cpp_runtime_glue(pSVar8,(((components->obj).klass)->_1).element_class)
                   , lVar9 == 0)) goto LAB_03f1ee78;
                if ((uint)components->max_length < 3) break;
                components->m_Items[2] = pSVar8;
                il2cpp_runtime_glue(components->m_Items + 2,pSVar8);
                __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor(__this_05,"EffectTextRow",components,(MethodInfo *)0x0);
                if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f1ee6e;
                pUVar10 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto LAB_03f1ee6e;
                UnityEngine_Transform__SetParent(pUVar10,parent,0,(MethodInfo *)0x0);
                __this_06 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__GetComponent<object>(__this_05,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                if (__this_06 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                goto LAB_03f1ee6e;
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_06,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_06,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (__this_06,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                          (__this_06,0.0,(MethodInfo *)0x0);
                __this_07 = (UnityEngine_UI_ContentSizeFitter_o *)
                            UnityEngine_GameObject__GetComponent<object>(__this_05,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                if (__this_07 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto LAB_03f1ee6e;
                UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_07,2,(MethodInfo *)0x0);
                UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_07,2,(MethodInfo *)0x0);
                lVar9 = MethodInfo_Void_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0)
                goto LAB_03f1ee6e;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto LAB_03f1ee6e;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = __this_05;
                  il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,__this_05);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,
                             (Il2CppObject *)__this_05,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                System_Collections_Generic_List<EffectText_Segment>__GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,__this_04,
                           MethodInfo_List_1_T__Enumerator_PatreonEffects_EffectText_S);
                local_b8 = local_40;
                uStack_b0 = uStack_38;
                local_118.slot = local_50;
                local_118.parameters_count = uStack_4e;
                local_118.bitflags = uStack_4d;
                local_118._84_4_ = uStack_4c;
                uStack_c0 = uStack_48;
                local_118.field8_0x40 = local_60;
                local_118.token = uStack_58;
                local_118.flags = uStack_54;
                local_118.iflags = uStack_52;
                local_118.parameters = local_70;
                local_118.rgctx_data = pIStack_68;
                local_118.klass = (System_Collections_Generic_List_Enumerator_T__c *)local_80;
                local_118.return_type = pIStack_78;
                local_118.invoker_method = (InvokerMethod)local_90;
                local_118.name = (char *)pIStack_88;
                local_118.methodPointer = (Il2CppMethodPointer)local_a0._0_8_;
                local_118.virtualMethodPointer = (Il2CppMethodPointer)local_a0._8_8_;
                while (__this_03.fields._8_8_ = in_stack_fffffffffffffe00,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8,
                      __this_03.fields._current = in_stack_fffffffffffffe08.genericMethod,
                      bVar6 = System_Collections_Generic_List_Enumerator<EffectText_Segment>__MoveNext
                                        (__this_03,(MethodInfo_31ACA40 *)&local_118),
                      (char)bVar6 != '\0') {
                  local_128 = local_b8;
                  uStack_120 = uStack_b0;
                  local_138._0_2_ = local_118.slot;
                  local_138._2_1_ = local_118.parameters_count;
                  local_138._3_1_ = local_118.bitflags;
                  local_138._4_4_ = local_118._84_4_;
                  uStack_130 = uStack_c0;
                  local_148 = local_118.field8_0x40;
                  uStack_140._0_4_ = local_118.token;
                  uStack_140._4_2_ = local_118.flags;
                  uStack_140._6_2_ = local_118.iflags;
                  local_158 = local_118.parameters;
                  pIStack_150 = local_118.rgctx_data;
                  local_1a8._64_8_ = local_118.klass;
                  pIStack_160 = local_118.return_type;
                  local_1a8._48_8_ = local_118.invoker_method;
                  local_1a8._56_8_ = local_118.name;
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
                  seg.fields.HasEffect = local_1a8._56_4_;
                  seg.fields.Effect = local_1a8._60_4_;
                  seg.fields.Content = (System_String_o *)local_1a8._48_8_;
                  seg.fields.ColorA.fields.hasValue = local_1a8._64_4_;
                  seg.fields.ColorA.fields.value.fields.r = (float)local_1a8._68_4_;
                  seg.fields.ColorA.fields.value.fields._4_8_ = pIStack_160;
                  seg.fields._32_8_ = local_158;
                  seg.fields.ColorB.fields.value.fields._0_8_ = pIStack_150;
                  seg.fields.ColorB.fields.value.fields._8_8_ = local_148.genericMethod;
                  seg.fields.ColorC.fields._0_8_ = uStack_140;
                  seg.fields.ColorC.fields.value.fields._4_8_ = local_138;
                  seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                  seg.fields.ColorD.fields.hasValue = uStack_130._4_4_;
                  seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)local_128;
                  seg.fields.ColorD.fields.value.fields.g = (float)local_128._4_4_;
                  seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                  seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                  in_stack_fffffffffffffdf8 = (UnityEngine_Object_o *)local_1a8._48_8_;
                  in_stack_fffffffffffffe00 = (Il2CppRGCTXData *)local_1a8._56_8_;
                  in_stack_fffffffffffffe08 = (_union_247328)local_1a8._64_8_;
                  item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar10,seg,method_00);
                  lVar9 = MethodInfo_Void_Add;
                  pSVar3 = (__this->fields)._segments;
                  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar3->fields)._items;
                  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = item;
                    il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,
                               (Il2CppObject *)item,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                __this_02.fields._8_8_ = in_stack_fffffffffffffe00;
                __this_02.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffdf8;
                __this_02.fields._current = in_stack_fffffffffffffe08.genericMethod;
                method_01 = MethodInfo_Void_Dispose;
                System_Collections_Generic_List_Enumerator<EffectText_Segment>__Dispose
                          (__this_02,&local_118);
                pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_1a8._32_8_;
              }
              pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)
                        ((long)&(pSVar12->_1).image + 1);
              uVar2 = (uint)*(il2cpp_array_size_t *)(local_1a8._40_8_ + 0x18);
              if ((long)(int)uVar2 <= (long)pSVar12) {
                return;
              }
            } while (pSVar12 < (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar2);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_03f1ee6e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$CreateSegmentGO
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSegmentGO (PatreonEffects_EffectText_o* __this, UnityEngine_Transform_o* parent, PatreonEffects_EffectText_Segment_o seg, const MethodInfo* method);
// 0x3f212b0

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSegmentGO
          (PatreonEffects_EffectText_o *__this,UnityEngine_Transform_o *parent,
          PatreonEffects_EffectText_Segment_o seg,MethodInfo *method)

{
  undefined4 uVar1;
  TMPro_TMP_FontAsset_o *x;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  System_Nullable_Color__o __this_00;
  System_Nullable_Color__o __this_01;
  System_Nullable_Color__o __this_02;
  System_Nullable_Color__o __this_03;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *__this_05;
  TMPro_TMP_Text_o *__this_06;
  System_String_o *text;
  Il2CppObject *pIVar7;
  PatreonEffects_NameEffectController_o *__this_07;
  PatreonEffects_NameEffectSettings_o *settings;
  undefined8 uVar8;
  MethodInfo *extraout_RDX;
  float fVar9;
  UnityEngine_Color_Fields UVar10;
  undefined1 in_stack_ffffffffffffff98 [12];
  float fVar11;
  float local_48;
  
  if (DAT_05703ce5 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"Segment");
    il2cpp_init_method_metadata(&"|");
    DAT_05703ce5 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,4,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto LAB_03f217fa;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_03f21804;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar5;
    il2cpp_runtime_glue(components->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03f21804;
    }
    if ((uint)components->max_length < 2) goto LAB_03f217ff;
    components->m_Items[1] = pSVar5;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03f21804;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar5;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_03f21804:
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar5;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar5);
        __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_04,"Segment",components,(MethodInfo *)0x0);
        if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
          __this_05 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
          if (__this_05 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_05,parent,0,(MethodInfo *)0x0);
            __this_06 = (TMPro_TMP_Text_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            if (__this_06 != (TMPro_TMP_Text_o *)0x0) {
              (*(__this_06->klass->vtable)._66_set_text.methodPtr)
                        (__this_06,seg.fields.Content,(__this_06->klass->vtable)._66_set_text.method
                        );
              x = (__this->fields)._font;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                TMPro_TMP_Text__set_font(__this_06,(__this->fields)._font,(MethodInfo *)0x0);
              }
              TMPro_TMP_Text__set_fontSize(__this_06,(__this->fields)._fontSize,(MethodInfo *)0x0);
              bVar4 = seg.fields.HasEffect;
              if ((seg.fields.HasEffect & 1U) == 0) {
                uVar1 = (__this->fields)._color.fields.r;
                uVar8._0_4_ = (__this->fields)._color.fields.b;
                uVar8._4_4_ = (__this->fields)._color.fields.a;
              }
              else {
                uVar8 = 0x3f8000003f800000;
                uVar1 = 0x3f800000;
              }
              (*(__this_06->klass->vtable)._23_set_color.methodPtr)
                        (uVar1,uVar8,__this_06,(__this_06->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment(__this_06,(__this->fields)._alignment,(MethodInfo *)0x0)
              ;
              TMPro_TMP_Text__set_richText
                        (__this_06,(uint)(byte)(__this->fields)._richText,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping(__this_06,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_06,0,(MethodInfo *)0x0);
              text = System_String__Concat(seg.fields.Content,"|",(MethodInfo *)0x0);
              UVar2 = TMPro_TMP_Text__GetPreferredValues
                                (__this_06,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
              UVar3 = TMPro_TMP_Text__GetPreferredValues
                                (__this_06,"|",3.4028235e+38,3.4028235e+38,
                                 (MethodInfo *)0x0);
              fVar11 = UVar3.fields.x;
              uVar1 = (*(__this_06->klass->vtable)._85_get_preferredHeight.methodPtr)
                                (__this_06,(__this_06->klass->vtable)._85_get_preferredHeight.method
                                );
              pIVar7 = UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar7 != (Il2CppObject *)0x0) {
                local_48 = UVar2.fields.x;
                fVar9 = local_48 - fVar11;
                if (local_48 - fVar11 <= 0.0) {
                  fVar9 = 0.0;
                }
                (*pIVar7->klass->vtable[0x24].methodPtr)
                          (fVar9,pIVar7,pIVar7->klass->vtable[0x24].method);
                (*pIVar7->klass->vtable[0x26].methodPtr)
                          (uVar1,pIVar7,pIVar7->klass->vtable[0x26].method);
                if ((bVar4 & 1U) != 0) {
                  __this_07 = (PatreonEffects_NameEffectController_o *)
                              UnityEngine_GameObject__AddComponent<object>(__this_04,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
                  if (__this_07 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_03f217fa;
                  PatreonEffects_NameEffectController__AutoConfigure(__this_07,(MethodInfo *)0x0);
                  settings = PatreonEffects_NameEffectPresets__GetPreset
                                       (seg.fields.Effect,(MethodInfo *)0x0);
                  if ((char)seg.fields.ColorA.fields.hasValue != '\0') {
                    __this_00.fields.value.fields.b = (float)uVar1;
                    __this_00.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_00.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_00.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_00.fields.value.fields.a = fVar11;
                    UVar10 = (UnityEngine_Color_Fields)
                             System_Nullable<Color>__get_Value
                                       (__this_00,(MethodInfo_3756610 *)&seg.fields.ColorA);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_03f217fa;
                    (settings->fields).gradientA.fields = UVar10;
                  }
                  if ((char)seg.fields.ColorB.fields.hasValue != '\0') {
                    __this_01.fields.value.fields.b = (float)uVar1;
                    __this_01.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_01.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_01.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_01.fields.value.fields.a = fVar11;
                    UVar10 = (UnityEngine_Color_Fields)
                             System_Nullable<Color>__get_Value
                                       (__this_01,(MethodInfo_3756610 *)&seg.fields.ColorB);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_03f217fa;
                    (settings->fields).gradientB.fields = UVar10;
                  }
                  if ((char)seg.fields.ColorC.fields.hasValue != '\0') {
                    __this_02.fields.value.fields.b = (float)uVar1;
                    __this_02.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_02.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_02.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_02.fields.value.fields.a = fVar11;
                    UVar10 = (UnityEngine_Color_Fields)
                             System_Nullable<Color>__get_Value
                                       (__this_02,(MethodInfo_3756610 *)&seg.fields.ColorC);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_03f217fa;
                    (settings->fields).gradientC.fields = UVar10;
                  }
                  if ((char)seg.fields.ColorD.fields.hasValue != '\0') {
                    __this_03.fields.value.fields.b = (float)uVar1;
                    __this_03.fields.hasValue = in_stack_ffffffffffffff98._0_4_;
                    __this_03.fields.value.fields.r = (float)in_stack_ffffffffffffff98._4_4_;
                    __this_03.fields.value.fields.g = (float)in_stack_ffffffffffffff98._8_4_;
                    __this_03.fields.value.fields.a = fVar11;
                    UVar10 = (UnityEngine_Color_Fields)
                             System_Nullable<Color>__get_Value
                                       (__this_03,(MethodInfo_3756610 *)&seg.fields.ColorD);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_03f217fa;
                    (settings->fields).gradientD.fields = UVar10;
                  }
                  PatreonEffects_NameEffectController__Apply(__this_07,settings,(MethodInfo *)0x0);
                }
                return __this_04;
              }
            }
          }
        }
LAB_03f217fa:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03f217ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$CreateSpacerRow
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSpacerRow (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f21090

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSpacerRow(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  
  if (DAT_05703ce6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"EffectTextSpacer");
    DAT_05703ce6 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_03f2128e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03f21298;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_03f21298:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar1);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_00,"EffectTextSpacer",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
          pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x26].methodPtr)
                      ((__this->fields)._fontSize,pIVar3,pIVar3->klass->vtable[0x26].method);
            (*pIVar3->klass->vtable[0x24].methodPtr)
                      (0x3f800000,pIVar3,pIVar3->klass->vtable[0x24].method);
            return __this_00;
          }
        }
      }
      goto LAB_03f2128e;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$ApplyFontSize
// il2cpp: void PatreonEffects_EffectText__ApplyFontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1ef70

void PatreonEffects_EffectText__ApplyFontSize
               (PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  PatreonEffects_EffectText__Rebuild(__this,method);
  return;
}


// PatreonEffects.EffectText$$ApplyColor
// il2cpp: void PatreonEffects_EffectText__ApplyColor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1efa0

void PatreonEffects_EffectText__ApplyColor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *pUVar7;
  uint uVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  UnityEngine_Object_o *pUVar11;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (DAT_05703ce7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_GetComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ce7 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar10 = (Il2CppType *)auStack_48._8_8_;
  while( true ) {
    do {
      do {
        pUVar7 = pUStack_38;
        __this_02.fields._8_8_ = pIVar10;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
        __this_02.fields._current = (Il2CppObject *)pUVar7;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') {
          __this_03.fields._8_8_ = pIVar10;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
          __this_03.fields._current = (Il2CppObject *)pUVar7;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar11 = pUVar7;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUStack_38 = pUVar11;
      } while ((char)bVar5 != '\0');
      if (pUVar7 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
      if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar3 = (int)pSVar6->max_length;
      pUStack_38 = pUVar11;
    } while (iVar3 < 1);
    uVar8 = 0;
    if (iVar3 == 0) break;
    while( true ) {
      __this_01 = (UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar8];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponent<object>(__this_01,MethodInfo_NameEffectController_GetComponent_NameEffectCont);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        uVar1 = (__this->fields)._color.fields.r;
        uVar2._0_4_ = (__this->fields)._color.fields.b;
        uVar2._4_4_ = (__this->fields)._color.fields.a;
        (**(code **)&__this_01->klass[1]._2.naturalAligment)
                  (uVar1,uVar2,__this_01,__this_01->klass[1].vtable._0_Equals.methodPtr);
      }
      uVar8 = uVar8 + 1;
      uVar4 = (uint)pSVar6->max_length;
      pUStack_38 = pUVar11;
      if ((int)uVar4 <= (int)uVar8) break;
      if (uVar4 <= uVar8) goto LAB_03f1f18a;
    }
  }
LAB_03f1f18a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$ApplyAlignment
// il2cpp: void PatreonEffects_EffectText__ApplyAlignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f1f2d0

void PatreonEffects_EffectText__ApplyAlignment
               (PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar7;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (DAT_05703ce8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ce8 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar6 = (Il2CppType *)auStack_48._8_8_;
  do {
    do {
      do {
        x = pUStack_38;
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        pUVar7 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUStack_38 = pUVar7;
      } while ((char)bVar1 != '\0');
      if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         ((UnityEngine_GameObject_o *)x,MethodInfo_TextMeshProUGUI___GetComponentsInChildren_TextMe);
      if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (uint)pSVar3->max_length;
      pUStack_38 = pUVar7;
    } while ((int)uVar2 < 1);
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4] == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      TMPro_TMP_Text__set_alignment
                ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4],(__this->fields)._alignment,
                 (MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      pUStack_38 = pUVar7;
    } while ((int)uVar4 < (int)uVar2);
  } while( true );
}


// PatreonEffects.EffectText$$OnDestroy
// il2cpp: void PatreonEffects_EffectText__OnDestroy (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f21820

void PatreonEffects_EffectText__OnDestroy(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Object_o *x;
  
  if (DAT_05703ce9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ce9 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pUVar6 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._segments;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      x = pUVar6;
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)x;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
      }
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar2 = (__this->fields)._segments;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.EffectText$$.ctor
// il2cpp: void PatreonEffects_EffectText___ctor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x3f21a10

void PatreonEffects_EffectText___ctor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_05703cea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05703cea = '\x01';
  }
  (__this->fields)._text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._text);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  *(undefined1 *)&(__this->fields)._richText = 1;
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._segments = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._segments);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$.cctor
// il2cpp: void PatreonEffects_EffectText___cctor (const MethodInfo* method);
// 0x3f21ad0

void PatreonEffects_EffectText___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  
  if (DAT_05703ceb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectText);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>");
    il2cpp_init_method_metadata(&"(?<key>\\w+)=\"(?<val>[^\"]*)\"");
    DAT_05703ceb = '\x01';
  }
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>",0x18,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_EffectText + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_EffectText + 0xb8),pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"(?<key>\\w+)=\"(?<val>[^\"]*)\"",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_EffectText + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


