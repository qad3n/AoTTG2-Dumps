// Type: Utility.ReadableColors
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Utility/ReadableColors.cs
// Prior real C# source: none
// --------------------------------

// Utility.ReadableColors.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Utility_ReadableColors___c__DisplayClass2_0___ctor (Utility_ReadableColors___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_ReadableColors___c__DisplayClass2_0___ctor(Utility_ReadableColors___c__DisplayClass2_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.ReadableColors.<>c__DisplayClass2_0$$<Darken>b__0
// il2cpp: System_String_o* Utility_ReadableColors___c__DisplayClass2_0___Darken_b__0 (Utility_ReadableColors___c__DisplayClass2_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x182340a00

System_String_o *
Utility_ReadableColors___c__DisplayClass2_0___Darken_b__0
          (Utility_ReadableColors___c__DisplayClass2_0_o *__this,System_Text_RegularExpressions_Match_o *match
          ,MethodInfo *method)

{
  System_Text_RegularExpressions_GroupCollection_o *pSVar1;
  System_Text_RegularExpressions_Capture_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_o local_78 [7];
  
  if (Il2CppMethodInitialized_184347844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184347844 = '\x01';
  }
  local_88.r = 0.0;
  local_88.g = 0.0;
  local_88.b = 0.0;
  local_88.a = 0.0;
  if (((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
      (pSVar1 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                          (match,(match->klass->vtable)._5_get_Groups.method),
      pSVar1 == (System_Text_RegularExpressions_GroupCollection_o *)0x0)) ||
     (pSVar2 = (System_Text_RegularExpressions_Capture_o *)
               System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                         (pSVar1,2,(MethodInfo *)0x0),
     pSVar2 == (System_Text_RegularExpressions_Capture_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_Text_RegularExpressions_Capture__ToString(pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("#",pSVar3,(MethodInfo *)0x0);
  UnityEngine_ColorUtility__TryParseHtmlString(pSVar3,(UnityEngine_Color_o *)&local_88,(MethodInfo *)0x0);
  fVar4 = local_88.r;
  fVar5 = local_88.g;
  fVar6 = local_88.b;
  if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
  }
  fVar4 = UnityEngine_Mathf__GammaToLinearSpace(fVar4,(MethodInfo *)0x0);
  fVar5 = UnityEngine_Mathf__GammaToLinearSpace(fVar5,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Mathf__GammaToLinearSpace(fVar6,(MethodInfo *)0x0);
  fVar4 = fVar5 * 0.7152 + fVar4 * 0.2126 + fVar6 * 0.0722;
  if (fVar4 <= (__this->fields).maxLuminance) {
    pSVar3 = System_Text_RegularExpressions_Capture__ToString
                       ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
    return pSVar3;
  }
  fVar6 = UnityEngine_Mathf__GammaToLinearSpace(local_88.r,(MethodInfo *)0x0);
  fVar7 = UnityEngine_Mathf__GammaToLinearSpace(local_88.g,(MethodInfo *)0x0);
  fVar8 = UnityEngine_Mathf__GammaToLinearSpace(local_88.b,(MethodInfo *)0x0);
  fVar5 = local_88.a;
  fVar4 = (__this->fields).maxLuminance / fVar4;
  fVar6 = UnityEngine_Mathf__LinearToGammaSpace(fVar6 * fVar4,(MethodInfo *)0x0);
  fVar7 = UnityEngine_Mathf__LinearToGammaSpace(fVar7 * fVar4,(MethodInfo *)0x0);
  fVar8 = UnityEngine_Mathf__LinearToGammaSpace(fVar8 * fVar4,(MethodInfo *)0x0);
  pSVar1 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                     (match,(match->klass->vtable)._5_get_Groups.method);
  if ((pSVar1 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
     (pSVar2 = (System_Text_RegularExpressions_Capture_o *)
               System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                         (pSVar1,1,(MethodInfo *)0x0),
     pSVar2 != (System_Text_RegularExpressions_Capture_o *)0x0)) {
    pSVar3 = System_Text_RegularExpressions_Capture__ToString(pSVar2,(MethodInfo *)0x0);
    local_78[0].fields.a = fVar5 * fVar4;
    local_78[0].fields.r = fVar6;
    local_78[0].fields.g = fVar7;
    local_78[0].fields.b = fVar8;
    str2 = UnityEngine_ColorUtility__ToHtmlStringRGB(local_78,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969b70(pSVar3,"#",str2,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// Utility.ReadableColors$$Darken
// il2cpp: System_String_o* Utility_ReadableColors__Darken (System_String_o* richText, UnityEngine_Color_o background, const MethodInfo* method);
// 0x18233ecd0

System_String_o *
Utility_ReadableColors__Darken(System_String_o *richText,UnityEngine_Color_o *background,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  int32_t iVar2;
  Utility_ReadableColors___c__DisplayClass2_0_o *object;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_ReadableColors_c__DisplayClass2_0_Darken_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors_c__DisplayClass2_0);
    Il2CppMethodInitialized_184347842 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_ReadableColors_c__DisplayClass2_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(richText,(MethodInfo *)0x0);
  if (!bVar1) {
    if (richText != (System_String_o *)0x0) {
      iVar2 = System_String__IndexOf(richText,0x23,(MethodInfo *)0x0);
      if (iVar2 < 0) {
        return richText;
      }
      if ((TypeInfo_Utility_ReadableColors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ReadableColors);
      }
      fVar4 = UnityEngine_Mathf__GammaToLinearSpace((background->fields).r,(MethodInfo *)0x0);
      fVar5 = UnityEngine_Mathf__GammaToLinearSpace((background->fields).g,(MethodInfo *)0x0);
      fVar6 = UnityEngine_Mathf__GammaToLinearSpace((background->fields).b,(MethodInfo *)0x0);
      if (object != (Utility_ReadableColors___c__DisplayClass2_0_o *)0x0) {
        (object->fields).maxLuminance = (fVar5 * 0.7152 + fVar4 * 0.2126 + fVar6 * 0.0722 + 0.05) / 4.5 - 0.05
        ;
        __this = TypeInfo_Utility_ReadableColors->static_fields->ColorRegex;
        evaluator = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
        System_Text_RegularExpressions_MatchEvaluator___ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,(Il2CppObject *)object
                   ,(intptr_t)MethodInfo_Utility_ReadableColors_c__DisplayClass2_0_Darken_b__0,
                   (MethodInfo_16E67D0 *)0x0);
        if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
          pSVar3 = System_Text_RegularExpressions_Regex__Replace_285dcc0
                             (__this,richText,evaluator,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return richText;
}


// Utility.ReadableColors$$Luminance
// il2cpp: float Utility_ReadableColors__Luminance (UnityEngine_Color_o color, const MethodInfo* method);
// 0x18233ee80

float Utility_ReadableColors__Luminance(UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = UnityEngine_Mathf__GammaToLinearSpace((color->fields).r,(MethodInfo *)0x0);
  fVar2 = UnityEngine_Mathf__GammaToLinearSpace((color->fields).g,(MethodInfo *)0x0);
  fVar3 = UnityEngine_Mathf__GammaToLinearSpace((color->fields).b,(MethodInfo *)0x0);
  return fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722;
}


// Utility.ReadableColors$$.cctor
// il2cpp: void Utility_ReadableColors___cctor (const MethodInfo* method);
// 0x18233eef0

void Utility_ReadableColors___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (Il2CppMethodInitialized_184347843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ReadableColors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"(<color=\"?|<|\\s[a-d]=\")#([0-9a-fA-F]{6})");
    Il2CppMethodInitialized_184347843 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(__this,"(<color=\"?|<|\\s[a-d]=\")#([0-9a-fA-F]{6})",8,(MethodInfo *)0x0);
  TypeInfo_Utility_ReadableColors->static_fields->ColorRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_ReadableColors->static_fields->ColorRegex,__this);
  return;
}


