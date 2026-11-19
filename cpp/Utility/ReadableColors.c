// Type: Utility.ReadableColors
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/ReadableColors.cs
// Prior real C# source: none
// --------------------------------

// Utility.ReadableColors.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Utility_ReadableColors___c__DisplayClass2_0___ctor (Utility_ReadableColors___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x5df0a50

void Utility_ReadableColors___c__DisplayClass2_0___ctor
               (Utility_ReadableColors___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.ReadableColors.<>c__DisplayClass2_0$$<Darken>b__0
// il2cpp: System_String_o* Utility_ReadableColors___c__DisplayClass2_0___Darken_b__0 (Utility_ReadableColors___c__DisplayClass2_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x5df0b60

System_String_o *
Utility_ReadableColors___c__DisplayClass2_0___Darken_b__0
          (Utility_ReadableColors___c__DisplayClass2_0_o *__this,System_Text_RegularExpressions_Match_o *match
          ,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  System_Text_RegularExpressions_GroupCollection_o *pSVar4;
  System_Text_RegularExpressions_Group_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_74;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  undefined1 local_38 [16];
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_075482f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075482f2 = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  if (((match != (System_Text_RegularExpressions_Match_o *)0x0) &&
      (pSVar4 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                          (match,(match->klass->vtable)._5_get_Groups.method),
      pSVar4 != (System_Text_RegularExpressions_GroupCollection_o *)0x0)) &&
     (pSVar5 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar4,2,(MethodInfo *)0x0),
     pSVar5 != (System_Text_RegularExpressions_Group_o *)0x0)) {
    pSVar6 = System_Text_RegularExpressions_Capture__get_Value
                       ((System_Text_RegularExpressions_Capture_o *)pSVar5,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_52f0320("#",pSVar6,(MethodInfo *)0x0);
    UnityEngine_ColorUtility__TryParseHtmlString(pSVar6,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    uVar2 = local_48._8_8_;
    uVar1 = local_48._0_8_;
    fVar7 = local_48.r;
    if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
    }
    fVar7 = UnityEngine_Mathf__GammaToLinearSpace(fVar7,(MethodInfo *)0x0);
    fStack_74 = SUB84(uVar1,4);
    fVar8 = UnityEngine_Mathf__GammaToLinearSpace(fStack_74,(MethodInfo *)0x0);
    local_58.r = (float)uVar2;
    fVar9 = UnityEngine_Mathf__GammaToLinearSpace(local_58.r,(MethodInfo *)0x0);
    fVar7 = fVar9 * 0.0722 + fVar8 * 0.7152 + fVar7 * 0.2126;
    if (fVar7 <= (__this->fields).maxLuminance) {
      pSVar6 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
      return pSVar6;
    }
    fVar8 = UnityEngine_Mathf__GammaToLinearSpace(local_48.r,(MethodInfo *)0x0);
    fVar9 = UnityEngine_Mathf__GammaToLinearSpace(local_48.g,(MethodInfo *)0x0);
    fVar10 = UnityEngine_Mathf__GammaToLinearSpace(local_48.b,(MethodInfo *)0x0);
    fVar7 = (__this->fields).maxLuminance / fVar7;
    local_38 = ZEXT416((uint)(fVar7 * local_48.a));
    fVar8 = UnityEngine_Mathf__LinearToGammaSpace(fVar8 * fVar7,(MethodInfo *)0x0);
    fVar9 = UnityEngine_Mathf__LinearToGammaSpace(fVar9 * fVar7,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Mathf__LinearToGammaSpace(fVar10 * fVar7,(MethodInfo *)0x0);
    pSVar4 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                       (match,(match->klass->vtable)._5_get_Groups.method);
    if ((pSVar4 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
       (pSVar5 = System_Text_RegularExpressions_GroupCollection__get_Item(pSVar4,1,(MethodInfo *)0x0),
       pSVar5 != (System_Text_RegularExpressions_Group_o *)0x0)) {
      uVar3 = local_38._0_4_;
      pSVar6 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)pSVar5,(MethodInfo *)0x0);
      local_28.r = fVar8;
      local_28.g = fVar9;
      local_28.b = fVar7;
      local_28.a = (float)uVar3;
      str2 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                       ((UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_5301f10(pSVar6,"#",str2,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Utility.ReadableColors$$Darken
// il2cpp: System_String_o* Utility_ReadableColors__Darken (System_String_o* richText, UnityEngine_Color_o background, const MethodInfo* method);
// 0x5df08a0

System_String_o *
Utility_ReadableColors__Darken(System_String_o *richText,UnityEngine_Color_o background,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  int32_t iVar2;
  Utility_ReadableColors___c__DisplayClass2_0_o *__this_00;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_01;
  System_String_o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  float local_38;
  
  if (Il2CppMethodInitialized_075482f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_ReadableColors_c__DisplayClass2_0_Darken_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors_c__DisplayClass2_0);
    Il2CppMethodInitialized_075482f0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_ReadableColors_c__DisplayClass2_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(richText,(MethodInfo *)0x0);
  if (bVar1) {
    return richText;
  }
  if (richText != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf(richText,0x23,(MethodInfo *)0x0);
    if (iVar2 < 0) {
      return richText;
    }
    if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
    }
    local_48 = background.fields.r;
    fVar4 = UnityEngine_Mathf__GammaToLinearSpace(local_48,(MethodInfo *)0x0);
    fStack_44 = background.fields.g;
    fVar5 = UnityEngine_Mathf__GammaToLinearSpace(fStack_44,(MethodInfo *)0x0);
    local_38 = background.fields.b;
    fVar6 = UnityEngine_Mathf__GammaToLinearSpace(local_38,(MethodInfo *)0x0);
    if (__this_00 != (Utility_ReadableColors___c__DisplayClass2_0_o *)0x0) {
      (__this_00->fields).maxLuminance =
           (fVar6 * 0.0722 + fVar5 * 0.7152 + fVar4 * 0.2126 + 0.05) / 4.5 + -0.05;
      __this = TypeInfo_Utility_ReadableColors->static_fields->ColorRegex;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_Utility_ReadableColors_c__DisplayClass2_0_Darken_b__0,(MethodInfo *)0x0)
      ;
      if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar3 = System_Text_RegularExpressions_Regex__Replace_61e3fe0
                           (__this,richText,__this_01,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.ReadableColors$$Luminance
// il2cpp: float Utility_ReadableColors__Luminance (UnityEngine_Color_o color, const MethodInfo* method);
// 0x5df0a60

float Utility_ReadableColors__Luminance(UnityEngine_Color_o color,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_24;
  float local_18;
  
  fVar1 = UnityEngine_Mathf__GammaToLinearSpace(color.fields.r,(MethodInfo *)0x0);
  fStack_24 = color.fields.g;
  fVar2 = UnityEngine_Mathf__GammaToLinearSpace(fStack_24,(MethodInfo *)0x0);
  local_18 = color.fields.b;
  fVar3 = UnityEngine_Mathf__GammaToLinearSpace(local_18,(MethodInfo *)0x0);
  return fVar3 * 0.0722 + fVar2 * 0.7152 + fVar1 * 0.2126;
}


// Utility.ReadableColors$$.cctor
// il2cpp: void Utility_ReadableColors___cctor (const MethodInfo* method);
// 0x5df0ad0

void Utility_ReadableColors___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (Il2CppMethodInitialized_075482f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"(<color=\"?|<|\\s[a-d]=\")#([0-9a-fA-F]{6})");
    Il2CppMethodInitialized_075482f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(__this,"(<color=\"?|<|\\s[a-d]=\")#([0-9a-fA-F]{6})",8,(MethodInfo *)0x0);
  TypeInfo_Utility_ReadableColors->static_fields->ColorRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_ReadableColors->static_fields->ColorRegex);
  return;
}


