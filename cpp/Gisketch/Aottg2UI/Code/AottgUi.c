// Type: Gisketch.Aottg2UI.Code.AottgUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x3b62080

void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$<Callout>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0 (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x3b63bd0

void Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0___Callout_b__0
               (Gisketch_Aottg2UI_Code_AottgUi___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar4;
  Il2CppClass *pIVar5;
  System_String_o *in_RCX;
  System_String_o *keywords;
  MethodInfo *pMVar6;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff60;
  System_String_o *in_stack_ffffffffffffff80;
  uint in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9da2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-border");
    il2cpp_runtime_helper_023445d0(&"calloutBorder");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"calloutText");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057a9da2 = '\x01';
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar2 = System_String__Concat_3ae5ba0("calloutBorder",(__this->fields).suffix,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar3 = System_String__Concat_3ae5ba0((__this->fields).id,"-border",(MethodInfo *)0x0);
  }
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pSVar4 = (System_String_o *)0x0;
  pMVar6 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MethodInfo *)0x0) {
    ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&__this_00->invoker_method)->value = 7.0;
    __this_00->name = (char *)"point";
    il2cpp_runtime_helper_022b4080(&__this_00->name);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar4 = (System_String_o *)0x0;
    pMVar6 = method_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      ((Gisketch_Aottg2UI_Data_GisketchLength_Fields *)&method_00->invoker_method)->value = 100.0;
      method_00->name = (char *)"percent";
      il2cpp_runtime_helper_022b4080(&method_00->name);
      in_stack_ffffffffffffff80 = (System_String_o *)0x0;
      in_stack_ffffffffffffff88 = 0;
      pSVar4 = (System_String_o *)0x0;
      in_RCX = (System_String_o *)0x0;
      in_R8 = (System_String_o *)0x0;
      pMVar6 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffc0);
      in_R9 = __this_00;
      if (callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pSVar4 = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (callout,pSVar2,(System_Action_AottgUi__o *)0x0,pSVar3,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        pSVar2 = (__this->fields).text;
        bVar1 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
        pSVar3 = "calloutText";
        if ((char)bVar1 == '\0') {
          pSVar4 = System_String__Concat_3ae5ba0((__this->fields).id,"-text",(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (callout,pSVar2,pSVar3,pSVar4,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar6 != (MethodInfo *)0x0) {
    pIVar5 = (Il2CppClass *)
             Gisketch_Aottg2UI_Code_AottgUi__Search
                       (pSVar4,keywords,0,in_RCX,in_R8,(System_String_o *)in_R9,in_stack_ffffffffffffff80,
                        in_stack_ffffffffffffff88 & 0xff,in_stack_ffffffffffffff60);
    pMVar6[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(&pMVar6[2].klass,pIVar5);
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$TextArea
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__TextArea (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxCharacters, const MethodInfo* method);
// 0x3b61780

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__TextArea
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxCharacters,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_Globalization_CultureInfo_o *method_00;
  System_Action_GisketchActionContext__o *pSVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  undefined1 extraout_DL;
  uint extraout_EDX;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RDX;
  MethodInfo *method_02;
  ulong extraout_RDX_00;
  MethodInfo *method_03;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *style_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *enter_00;
  float __this_01;
  float value_00;
  float in_XMM1_Da;
  float min;
  float in_XMM2_Da;
  float max;
  MethodInfo *in_stack_fffffffffffffe88;
  undefined1 auStack_124 [12];
  undefined8 uStack_118;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_110;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_108;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_100;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_f8;
  ulong uStack_f0;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_e8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_e0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_c0;
  System_Action_GisketchActionContext__o *pSStack_b8;
  System_String_o *pSStack_b0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_a8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_98;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_90;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_88;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_68;
  System_String_o *pSStack_60;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_50;
  System_Enum_o local_48;
  undefined4 local_38;
  
  pSVar7 = (System_Action_GisketchActionContext__o *)style;
  value = layout;
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter;
  local_50 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)__this;
  if (g_data_057a9d7a == '\0') {
    pSStack_60 = (System_String_o *)0x3b617b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    pSStack_60 = (System_String_o *)0x3b617c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pSStack_60 = (System_String_o *)0x3b617cf;
    il2cpp_runtime_helper_023445d0(&"TextArea");
    g_data_057a9d7a = '\x01';
  }
  pSStack_60 = (System_String_o *)0x3b617e5;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar3 = (System_String_o *)0x0;
  pSStack_60 = (System_String_o *)0x3b617f2;
  pGVar6 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "TextArea";
    pSStack_60 = (System_String_o *)0x3b61812;
    il2cpp_runtime_helper_022b4080(&pGVar2->fields);
    (pGVar2->fields).id = id;
    pSStack_60 = (System_String_o *)0x3b61822;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,id);
    (pGVar2->fields).placeholder = placeholder;
    pSStack_60 = (System_String_o *)0x3b61832;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).placeholder);
    local_48.klass = TypeInfo_AottgInputType;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = 0;
    pSStack_60 = (System_String_o *)0x3b6185e;
    pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    (pGVar2->fields).inputType = pSVar3;
    pSStack_60 = (System_String_o *)0x3b6186e;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).inputType,pSVar3);
    (pGVar2->fields).style = style;
    pSStack_60 = (System_String_o *)0x3b6187e;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).style,style);
    (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    pSStack_60 = (System_String_o *)0x3b61894;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,layout);
    (pGVar2->fields).motion = enter;
    pSStack_60 = (System_String_o *)0x3b618ad;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).motion,enter);
    (pGVar2->fields).max.fields.value = (float)maxCharacters;
    pSStack_60 = (System_String_o *)0x3b618c4;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)local_50,pGVar2,method_01);
    return pGVar4;
  }
  pSStack_60 = (System_String_o *)0x3b618d8;
  il2cpp_runtime_helper_022b2c90();
  pGStack_98 = local_50;
  pSVar8 = pSVar7;
  pGVar10 = value;
  pGVar11 = pGVar4;
  pGStack_90 = pGVar6;
  pGStack_88 = pGVar2;
  pGStack_80 = layout;
  pSStack_78 = style;
  pSStack_70 = id;
  pGStack_68 = enter;
  pSStack_60 = placeholder;
  if (g_data_057a9d7b == '\0') {
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61921;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b6192d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61939;
    il2cpp_runtime_helper_023445d0(&"fade");
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61945;
    il2cpp_runtime_helper_023445d0(&"Skeleton");
    g_data_057a9d7b = '\x01';
  }
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b6195b;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61968;
  pGVar6 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  pGVar2 = extraout_RDX;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "Skeleton";
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61988;
    il2cpp_runtime_helper_022b4080(&pGVar5->fields);
    (pGVar5->fields).id = pSVar3;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61998;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar3);
    (pGVar5->fields).style = (System_String_o *)pSVar7;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619a8;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style,pSVar7);
    (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)extraout_RDX;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619be;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619ca;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    *(char *)((long)&(pGVar5->fields).hasIcon + 2) = (char)bVar1;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619d7;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if ((char)bVar1 == '\0') {
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619ea;
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619f7;
      pGVar6 = pGVar2;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b61b07;
      (pGVar2->fields).text = (System_String_o *)value;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a13;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text,value);
      pGVar6 = pGVar2;
    }
    (pGVar5->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar6;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a29;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout);
    pGVar2 = "fade";
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if (g_data_057a9d99 == '\0') {
        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a51;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
        g_data_057a9d99 = '\x01';
      }
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a67;
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a74;
      pGVar6 = pGVar4;
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b61b07;
      (pGVar4->fields).type = (System_String_o *)pGVar2;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a8f;
      il2cpp_runtime_helper_022b4080(&pGVar4->fields,pGVar2);
      (pGVar4->fields).id = (System_String_o *)0x0;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61aa6;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,0);
      (pGVar4->fields).text = (System_String_o *)0x3df5c28f;
      (pGVar4->fields).textKey = (System_String_o *)0x0;
      pGVar6 = pGVar2;
    }
    pGVar2 = pGVar6;
    (pGVar5->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar4;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61acc;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).motion,pGVar4);
    (pGVar5->fields).enter = pGStack_98;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61ae7;
    pGVar9 = pGStack_98;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).enter);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (pGStack_90 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_90,pGVar5,method_02);
      return pGVar4;
    }
  }
label_03b61b07:
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b0c;
  fStack_cc = (float)il2cpp_runtime_helper_022b2c90();
  fStack_c8 = in_XMM1_Da;
  fStack_c4 = in_XMM2_Da;
  pGStack_c0 = pGVar5;
  pSStack_b8 = pSVar7;
  pSStack_b0 = pSVar3;
  pGStack_a8 = pGVar2;
  if (g_data_057a9d99 == '\0') {
    pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b4a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    g_data_057a9d99 = '\x01';
  }
  pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b60;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
  pSVar3 = (System_String_o *)0x0;
  pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b6d;
  pGVar2 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = (System_String_o *)pGVar6;
    pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b82;
    il2cpp_runtime_helper_022b4080(&pGVar5->fields,pGVar6);
    (pGVar5->fields).id = (System_String_o *)pGVar9;
    pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b95;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pGVar9);
    *(float *)&(pGVar5->fields).text = fStack_cc;
    *(float *)((long)&(pGVar5->fields).text + 4) = fStack_c8;
    *(float *)&(pGVar5->fields).textKey = fStack_c4;
    *(int32_t *)((long)&(pGVar5->fields).textKey + 4) = (int32_t)extraout_RDX_00;
    return pGVar5;
  }
  pGStack_e0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61bcd;
  auStack_124._0_4_ = il2cpp_runtime_helper_022b2c90();
  pSVar7 = pSVar8;
  style_00 = pGVar10;
  enter_00 = pGVar11;
  min = in_XMM1_Da;
  max = in_XMM2_Da;
  pGStack_108 = pGVar5;
  pGStack_100 = pGVar4;
  pGStack_f8 = value;
  uStack_f0 = extraout_RDX_00 & 0xffffffff;
  pGStack_e8 = pGVar9;
  pGStack_e0 = pGVar6;
  if (g_data_057a9d7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"Slider");
    g_data_057a9d7c = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (System_String_o *)0x0;
  pGVar4 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Slider";
    pGStack_110 = pGVar2;
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar3);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_3cccf70
                       (__this_01,(System_IFormatProvider_o *)auStack_124,(MethodInfo *)method_00);
    (pGVar6->fields).value = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).value,pSVar3);
    uStack_118 = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)&uStack_118,in_XMM1_Da,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(pGVar6->fields).enabled.fields.value = uStack_118;
    auStack_124._4_8_ = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)((long)auStack_124 + 4),in_XMM2_Da,MethodInfo_Nullable_1_Single);
    (pGVar6->fields).referenceHeight = (float)auStack_124._4_4_;
    (pGVar6->fields).min.fields.hasValue = auStack_124._8_4_;
    *(undefined1 *)&(pGVar6->fields).debounceSeconds.fields.value = extraout_DL;
    (pGVar6->fields).action = (System_String_o *)pSVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).action,pSVar8);
    (pGVar6->fields).style = (System_String_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style,pGVar10);
    (pGVar6->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion,pGVar11);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_110,pGVar6,method_03);
    return pGVar4;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar4->fields).id;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(pGVar4->fields).text,pSVar7,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,id_00,value_00,extraout_EDX & 0xff,pSVar3,
                      (System_String_o *)style_00,min,max,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)enter_00,in_stack_fffffffffffffe88)
  ;
  return pGVar4;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Skeleton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Skeleton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_String_o* style, System_String_o* visibleKey, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3b618e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Skeleton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,System_String_o *style,
          System_String_o *visibleKey,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_GisketchActionContext__o *pSVar7;
  System_Action_GisketchActionContext__o *action;
  undefined1 extraout_DL;
  uint extraout_EDX;
  MethodInfo *method_01;
  ulong extraout_RDX;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar8;
  System_String_o *id_00;
  System_String_o *style_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  float __this_01;
  float value;
  float in_XMM1_Da;
  float min;
  float in_XMM2_Da;
  float max;
  MethodInfo *in_stack_fffffffffffffee0;
  undefined1 auStack_cc [12];
  undefined8 uStack_c0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_b8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_b0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_a8;
  System_String_o *pSStack_a0;
  ulong uStack_98;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_90;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_88;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_50;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  local_40 = exit;
  pSVar7 = (System_Action_GisketchActionContext__o *)style;
  pSVar6 = visibleKey;
  pGVar9 = enter;
  local_38 = __this;
  if (g_data_057a9d7b == '\0') {
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61921;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b6192d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61939;
    il2cpp_runtime_helper_023445d0(&"fade");
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61945;
    il2cpp_runtime_helper_023445d0(&"Skeleton");
    g_data_057a9d7b = '\x01';
  }
  pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b6195b;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61968;
  pGVar3 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Skeleton";
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61988;
    il2cpp_runtime_helper_022b4080(&pGVar2->fields);
    (pGVar2->fields).id = id;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61998;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,id);
    (pGVar2->fields).style = style;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619a8;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).style,style);
    (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619be;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search);
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619ca;
    bVar1 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    *(char *)((long)&(pGVar2->fields).hasIcon + 2) = (char)bVar1;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619d7;
    bVar1 = System_String__IsNullOrEmpty(visibleKey,(MethodInfo *)0x0);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if ((char)bVar1 == '\0') {
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619ea;
      layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b619f7;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)layout,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b61b07;
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout)->fields).text = visibleKey;
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a13;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout)->fields).text,
                         visibleKey);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout;
    }
    (pGVar2->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar3;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a29;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout);
    layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)"fade";
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      if (g_data_057a9d99 == '\0') {
        pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a51;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
        g_data_057a9d99 = '\x01';
      }
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a67;
      enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a74;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter;
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(enter,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b61b07;
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields).type = (System_String_o *)layout;
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61a8f;
      il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields,layout);
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields).id = (System_String_o *)0x0;
      pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61aa6;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields).id,0);
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields).text =
           (System_String_o *)0x3df5c28f;
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter)->fields).textKey = (System_String_o *)0x0;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout;
    }
    layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar3;
    (pGVar2->fields).motion = enter;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61acc;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).motion,enter);
    (pGVar2->fields).enter = local_40;
    pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61ae7;
    pGVar8 = local_40;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enter);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (local_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(local_38,pGVar2,method_01);
      return pGVar3;
    }
  }
label_03b61b07:
  pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b0c;
  fStack_74 = (float)il2cpp_runtime_helper_022b2c90();
  fStack_70 = in_XMM1_Da;
  fStack_6c = in_XMM2_Da;
  pGStack_68 = pGVar2;
  pSStack_60 = style;
  pSStack_58 = id;
  pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)layout;
  if (g_data_057a9d99 == '\0') {
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b4a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    g_data_057a9d99 = '\x01';
  }
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b60;
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
  pSVar5 = (System_String_o *)0x0;
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b6d;
  pGVar2 = pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = (System_String_o *)pGVar3;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b82;
    il2cpp_runtime_helper_022b4080(&pGVar4->fields,pGVar3);
    (pGVar4->fields).id = (System_String_o *)pGVar8;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61b95;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,pGVar8);
    *(float *)&(pGVar4->fields).text = fStack_74;
    *(float *)((long)&(pGVar4->fields).text + 4) = fStack_70;
    *(float *)&(pGVar4->fields).textKey = fStack_6c;
    *(int32_t *)((long)&(pGVar4->fields).textKey + 4) = (int32_t)extraout_RDX;
    return pGVar4;
  }
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b61bcd;
  auStack_cc._0_4_ = il2cpp_runtime_helper_022b2c90();
  action = pSVar7;
  style_00 = pSVar6;
  enter_00 = pGVar9;
  min = in_XMM1_Da;
  max = in_XMM2_Da;
  pGStack_b0 = pGVar4;
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)enter;
  pSStack_a0 = visibleKey;
  uStack_98 = extraout_RDX & 0xffffffff;
  pGStack_90 = pGVar8;
  pGStack_88 = pGVar3;
  if (g_data_057a9d7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"Slider");
    g_data_057a9d7c = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (System_String_o *)0x0;
  pGVar3 = pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "Slider";
    pGStack_b8 = pGVar2;
    il2cpp_runtime_helper_022b4080(&pGVar4->fields);
    (pGVar4->fields).id = pSVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,pSVar5);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar5 = System_Single__ToString_3cccf70
                       (__this_01,(System_IFormatProvider_o *)auStack_cc,(MethodInfo *)method_00);
    (pGVar4->fields).value = pSVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value,pSVar5);
    uStack_c0 = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)&uStack_c0,in_XMM1_Da,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(pGVar4->fields).enabled.fields.value = uStack_c0;
    auStack_cc._4_8_ = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)((long)auStack_cc + 4),in_XMM2_Da,MethodInfo_Nullable_1_Single);
    (pGVar4->fields).referenceHeight = (float)auStack_cc._4_4_;
    (pGVar4->fields).min.fields.hasValue = auStack_cc._8_4_;
    *(undefined1 *)&(pGVar4->fields).debounceSeconds.fields.value = extraout_DL;
    (pGVar4->fields).action = (System_String_o *)pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).action,pSVar7);
    (pGVar4->fields).style = pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).style,pSVar6);
    (pGVar4->fields).motion = pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).motion,pGVar9);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_b8,pGVar4,method_02);
    return pGVar3;
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar3->fields).id;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(pGVar3->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,id_00,value,extraout_EDX & 0xff,pSVar6,
                      style_00,min,max,enter_00,in_stack_fffffffffffffee0);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_String_o* actionId, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b61bd0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool_conflict showValue,
          System_String_o *actionId,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *actionId_00;
  System_Action_GisketchActionContext__o *action;
  uint extraout_EDX;
  MethodInfo *method_01;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  float __this_02;
  float value_00;
  float min_00;
  float max_00;
  MethodInfo *in_stack_ffffffffffffff60;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  action = (System_Action_GisketchActionContext__o *)actionId;
  pSVar1 = style;
  enter_00 = enter;
  min_00 = min;
  max_00 = max;
  local_4c = value;
  if (g_data_057a9d7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"Slider");
    g_data_057a9d7c = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (System_String_o *)0x0;
  pGVar2 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Slider";
    local_38 = __this;
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,id);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_3cccf70
                       (__this_02,(System_IFormatProvider_o *)&local_4c,(MethodInfo *)method_00);
    (__this_01->fields).value = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).value,pSVar1);
    local_40 = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)&local_40,min,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(__this_01->fields).enabled.fields.value = local_40;
    local_48 = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)&local_48,max,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(__this_01->fields).referenceHeight = local_48;
    *(char *)&(__this_01->fields).debounceSeconds.fields.value = (char)showValue;
    (__this_01->fields).action = actionId;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action,actionId);
    (__this_01->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,style);
    (__this_01->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion,enter);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(local_38,__this_01,method_01);
    return pGVar2;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar2->fields).id;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (__this_00,(pGVar2->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,id_00,value_00,extraout_EDX & 0xff,
                      actionId_00,pSVar1,min_00,max_00,enter_00,in_stack_ffffffffffffff60);
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Slider
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Slider (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, float value, bool showValue, System_Action_GisketchActionContext__o* action, System_String_o* style, float min, float max, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b61d90

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Slider_3a61d90
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,float value,bool_conflict showValue,
          System_Action_GisketchActionContext__o *action,System_String_o *style,float min,float max,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     (__this,id,value,showValue & 0xff,actionId,style,min,max,enter,in_stack_ffffffffffffffb8)
  ;
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Callout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Callout (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x3b61e30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Callout
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (g_data_057a9d7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCalloutVariant);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Callout_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"callout");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057a9d7d = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_00 = pGVar1;
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (pGVar1->fields).unit = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).unit,id);
    pGVar1[1].klass = (Gisketch_Aottg2UI_Data_GisketchLength_c *)text;
    il2cpp_runtime_helper_022b4080(pGVar1 + 1);
    local_40.klass = TypeInfo_AottgCalloutVariant;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = variant;
    pSVar2 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    *(System_String_o **)&(pGVar1->fields).value = pSVar2;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,pSVar2);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar2 = (pGVar1->fields).unit;
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_00 = pGVar1;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 100.0;
      (pGVar1->fields).unit = "percent";
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).unit);
      method_00 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,pGVar1,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffb0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (__this,"callout",build,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
      return pGVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Checkbox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Checkbox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3b62090

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Checkbox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,
          bool_conflict value,System_Action_GisketchActionContext__o *action,System_String_o *icon,
          System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9d7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Checkbox");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x3b620d6;
    il2cpp_runtime_helper_023445d0(&"checkbox");
    g_data_057a9d7e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Checkbox",id,text,value & 0xff,action,"checkbox",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Radio
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Radio (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3b622c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Radio
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *text,
          bool_conflict value,System_Action_GisketchActionContext__o *action,System_String_o *icon,
          System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9d7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Radio");
    in_stack_ffffffffffffffc0 = (MethodInfo *)0x3b62306;
    il2cpp_runtime_helper_023445d0(&"radio");
    g_data_057a9d7f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Radio",id,text,value & 0xff,action,"radio",icon,tooltip,
                      in_stack_ffffffffffffffc0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Switch
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Switch (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, bool value, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b62350

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Switch
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,bool_conflict value,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9d80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"switch");
    il2cpp_runtime_helper_023445d0(&"Switch");
    g_data_057a9d80 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     (__this,"Switch",id,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      value & 0xff,action,"switch",(System_String_o *)0x0,(System_String_o *)0x0,
                      in_stack_ffffffffffffffd0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Toggle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Toggle (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* type, System_String_o* id, System_String_o* text, bool value, System_Action_GisketchActionContext__o* action, System_String_o* style, System_String_o* icon, System_String_o* tooltip, const MethodInfo* method);
// 0x3b62120

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Toggle
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *type,System_String_o *id,
          System_String_o *text,bool_conflict value,System_Action_GisketchActionContext__o *action,
          System_String_o *style,System_String_o *icon,System_String_o *tooltip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  undefined8 *puVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  uint uVar4;
  MethodInfo *method_00;
  System_String_o *text_00;
  undefined4 in_register_00000084;
  System_Action_GisketchActionContext__o *action_00;
  System_Action_GisketchActionContext__o *icon_00;
  MethodInfo *in_stack_ffffffffffffff68;
  
  action_00 = (System_Action_GisketchActionContext__o *)CONCAT44(in_register_00000084,value);
  pSVar2 = text;
  icon_00 = action;
  if (g_data_057a9d81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057a9d81 = '\x01';
  }
  uVar4 = (uint)pSVar2;
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar2 = (System_String_o *)0x0;
  pGVar3 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = type;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,type);
    (__this_01->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,id);
    (__this_01->fields).text = text;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,text);
    if ((char)value == '\0') {
      puVar1 = &"false";
    }
    else {
      puVar1 = &"true";
    }
    (__this_01->fields).value = (System_String_o *)*puVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (__this_01->fields).action = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action);
    (__this_01->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style);
    (__this_01->fields).icon = icon;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).icon);
    (__this_01->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_01,method_00);
    return pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Radio");
    in_stack_ffffffffffffff68 = (MethodInfo *)0x3b62306;
    il2cpp_runtime_helper_023445d0(&"radio");
    g_data_057a9d7f = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Toggle
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,"Radio",pSVar2,text_00,uVar4 & 0xff,
                      action_00,"radio",(System_String_o *)icon_00,(System_String_o *)action,
                      in_stack_ffffffffffffff68);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Icon
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Icon (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* icon, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x3b623f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Icon
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *icon,System_String_o *style,
          System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  int32_t variant;
  MethodInfo *method_02;
  int iVar4;
  System_String_o *in_R9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *unaff_R12;
  
  action = (System_Action_GisketchActionContext__o *)id;
  if (g_data_057a9d82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057a9d82 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  variant = 0;
  pGVar2 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Icon";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,id);
    (pGVar1->fields).icon = icon;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).icon,icon);
    (pGVar1->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style,style);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9d83 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar1 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  iVar4 = (int)pGVar1;
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,method);
    (__this_01->fields).icon = (System_String_o *)extraout_RDX;
    method_02 = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).icon);
    *(undefined1 *)&(__this_01->fields).hasIcon = 1;
    pSVar3 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,method_02);
    (__this_01->fields).style = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,pSVar3);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar2->fields).id;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(pGVar2->fields).text,action,(MethodInfo *)0x0);
    }
    (__this_01->fields).action = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action);
    (__this_01->fields).choiceOptionRenderer = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer,in_R9);
    (__this_01->fields).motion = unaff_R12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion,unaff_R12);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,__this_01,method_01);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9c == '\0') {
    il2cpp_runtime_helper_023445d0(&"buttonSecondary");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"buttonPlain");
    il2cpp_runtime_helper_023445d0(&"buttonWorkshop");
    il2cpp_runtime_helper_023445d0(&"buttonDanger");
    il2cpp_runtime_helper_023445d0(&"buttonNegative");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9d9c = '\x01';
  }
  if (iVar4 - 1U < 6) {
    return *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(&g_data_05215100)[(int)(iVar4 - 1U)];
  }
  return "buttonPrimary";
}


// Gisketch.Aottg2UI.Code.AottgUi$$IconButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__IconButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* icon, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b624c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__IconButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *icon,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  int iVar3;
  
  if (g_data_057a9d83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9d83 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar2 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  iVar3 = (int)pGVar2;
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,id);
    (__this_01->fields).icon = icon;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).icon);
    *(undefined1 *)&(__this_01->fields).hasIcon = 1;
    pSVar1 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,(MethodInfo *)icon);
    (__this_01->fields).style = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,pSVar1);
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar1 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    (__this_01->fields).action = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action);
    (__this_01->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer,tooltip);
    (__this_01->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion,enter);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_01,method_00);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9c == '\0') {
    il2cpp_runtime_helper_023445d0(&"buttonSecondary");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"buttonPlain");
    il2cpp_runtime_helper_023445d0(&"buttonWorkshop");
    il2cpp_runtime_helper_023445d0(&"buttonDanger");
    il2cpp_runtime_helper_023445d0(&"buttonNegative");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9d9c = '\x01';
  }
  if (iVar3 - 1U < 6) {
    return *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(&g_data_05215100)[(int)(iVar3 - 1U)];
  }
  return "buttonPrimary";
}


// Gisketch.Aottg2UI.Code.AottgUi$$Separator
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Separator (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b626c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Separator
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_R8;
  int32_t in_R9D;
  undefined1 auVar3 [16];
  MethodInfo *method_02;
  
  if (g_data_057a9d84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"separator");
    il2cpp_runtime_helper_023445d0(&"Divider");
    g_data_057a9d84 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (System_String_o *)0x0;
  pGVar2 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,id);
    (pGVar1->fields).style = "separator";
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion,enter);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar2;
  }
  auVar3 = il2cpp_runtime_helper_022b2c90();
  method_02 = auVar3._0_8_;
  if (g_data_057a9d85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057a9d85 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id_00,auVar3._8_8_,(System_String_array *)method,in_R8,in_R9D,method_02);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,pGVar1,method_01);
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b627a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (g_data_057a9d85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057a9d85 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice("Dropdown",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62910

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a62910
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options_00;
  MethodInfo *method_00;
  System_String_o *value_00;
  MethodInfo *method_01;
  System_String_o *extraout_RDX;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *id_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_01;
  bool_conflict maxVisibleItems_00;
  undefined1 auVar4 [16];
  MethodInfo *method_03;
  MethodInfo *in_stack_ffffffffffffff70;
  MethodInfo *in_stack_ffffffffffffffb8;
  int32_t iStack_40;
  
  if (g_data_057a9d86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057a9d86 = '\x01';
  }
  enter_00 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)(ulong)(uint)maxVisibleItems;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    options = (System_String_array *)0x0;
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_00,(__this->fields)._ownerId,
                        action,(MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d87 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Dropdown");
      g_data_057a9d87 = '\x01';
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
                       ("Dropdown",pSVar2,value_00,
                        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,enter_00,
                        iStack_40,in_stack_ffffffffffffff70);
    __this_01 = (__this_00->fields)._actions;
    if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      options = (System_String_array *)0x0;
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_01,(__this_00->fields)._ownerId,
                          (System_Action_GisketchActionContext__o *)enter,(MethodInfo *)0x0);
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).action = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).action);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this_00,pGVar1,method_01);
      return pGVar1;
    }
    il2cpp_runtime_helper_022b2c90();
    options_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options;
    enter_01 = enter_00;
    maxVisibleItems_00 = iStack_40;
    if (g_data_057a9d8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      g_data_057a9d8c = '\x01';
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    id_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    pGVar1 = pGVar3;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).type = (System_String_o *)__this_01;
      il2cpp_runtime_helper_022b4080(&pGVar3->fields,__this_01);
      (pGVar3->fields).id = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar2);
      (pGVar3->fields).value = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value,extraout_RDX);
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).options;
      (pGVar3->fields).options = options;
      il2cpp_runtime_helper_022b4080();
      (pGVar3->fields).debounceSeconds.fields.hasValue = iStack_40;
      id_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options;
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar2 = System_String__ToLowerInvariant((System_String_o *)__this_01,(MethodInfo *)0x0);
        (pGVar3->fields).style = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style,pSVar2);
        (pGVar3->fields).motion = enter_00;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).motion,enter_00);
        return pGVar3;
      }
    }
    auVar4 = il2cpp_runtime_helper_022b2c90();
    method_03 = auVar4._0_8_;
    if (g_data_057a9d88 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Select");
      g_data_057a9d88 = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Select",(System_String_o *)id_00,auVar4._8_8_,(System_String_array *)options_00,
                        enter_01,maxVisibleItems_00,method_03);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar1,pGVar3,method_02);
    return pGVar1;
  }
  (pGVar1->fields).action = pSVar2;
  il2cpp_runtime_helper_022b4080(&(pGVar1->fields).action);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Dropdown (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b629e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Dropdown_3a629e0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options_00;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *id_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  bool_conflict maxVisibleItems_00;
  undefined1 auVar4 [16];
  MethodInfo *method_02;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (g_data_057a9d87 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057a9d87 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
                     ("Dropdown",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    options = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).action = pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).action);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  options_00 = options;
  enter_00 = enter;
  maxVisibleItems_00 = maxVisibleItems;
  if (g_data_057a9d8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    g_data_057a9d8c = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
  pGVar1 = pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = (System_String_o *)__this_00;
    il2cpp_runtime_helper_022b4080(&pGVar3->fields,__this_00);
    (pGVar3->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar2);
    (pGVar3->fields).value = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value,extraout_RDX);
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).options;
    (pGVar3->fields).options = (System_String_array *)options;
    il2cpp_runtime_helper_022b4080();
    (pGVar3->fields).debounceSeconds.fields.hasValue = maxVisibleItems;
    id_00 = options;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant((System_String_o *)__this_00,(MethodInfo *)0x0);
      (pGVar3->fields).style = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style,pSVar2);
      (pGVar3->fields).motion = enter;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).motion,enter);
      return pGVar3;
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  method_02 = auVar4._0_8_;
  if (g_data_057a9d88 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d88 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",(System_String_o *)id_00,auVar4._8_8_,(System_String_array *)options_00,
                      enter_00,maxVisibleItems_00,method_02);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar1,pGVar3,method_01);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62bb0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          int32_t maxVisibleItems,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (g_data_057a9d88 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d88 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice("Select",id,value,options,enter,maxVisibleItems,in_RAX);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, System_String_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62c20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_3a62c20
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          System_String_array *options,System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  System_Nullable_float__Fields __this_02;
  MethodInfo_37EBBF0 *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Il2CppClass *__this_03;
  System_Object_array *pSVar15;
  undefined4 uVar16;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar18;
  MethodInfo *method_02;
  System_String_o *value_00;
  MethodInfo *method_03;
  System_String_o *extraout_RDX;
  MethodInfo *method_04;
  undefined8 extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  long extraout_RDX_03;
  MethodInfo *method_05;
  long extraout_RDX_04;
  MethodInfo *method_06;
  long extraout_RDX_05;
  MethodInfo *method_07;
  Il2CppClass *extraout_RDX_06;
  System_String_o *extraout_RDX_07;
  MethodInfo *method_08;
  System_String_o *extraout_RDX_08;
  MethodInfo *method_09;
  System_String_o *label;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar21;
  System_Action_GisketchActionContext__o *pSVar22;
  System_Action_GisketchActionContext__o *pSVar23;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  System_Nullable_float__Fields __this_05;
  Il2CppClass *__this_06;
  System_Action_GisketchActionContext__o *pSVar24;
  System_Action_GisketchActionContext__o *pSVar25;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar26;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar27;
  ulong uVar28;
  float value_01;
  bool_conflict in_XMM1_Da;
  MethodInfo *in_stack_fffffffffffffcb8;
  MethodInfo *in_stack_fffffffffffffdf0;
  System_Enum_o SStack_110;
  undefined4 uStack_100;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_f8;
  System_Action_GisketchActionContext__o *pSStack_f0;
  System_String_o *pSStack_e8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_e0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_d8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_d0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_c8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_c0;
  System_Action_GisketchActionContext__o *pSStack_b8;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_b0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_a8;
  System_String_o *pSStack_a0;
  ulong uStack_98;
  MethodInfo *in_stack_ffffffffffffff70;
  MethodInfo *in_stack_ffffffffffffffb8;
  uint uStack_40;
  
  if (g_data_057a9d89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d89 = '\x01';
  }
  pSVar23 = (System_Action_GisketchActionContext__o *)(ulong)(uint)maxVisibleItems;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields)._actions;
  if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    options = (System_String_array *)0x0;
    pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar10,(__this->fields)._ownerId,
                        action,(MethodInfo *)0x0);
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).action = pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).action);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar5,method_02);
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8a == '\0') {
    uStack_98 = 0x3b62d2b;
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d8a = '\x01';
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(ulong)uStack_40;
  uStack_98 = 0x3b62d50;
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options;
  pSVar24 = pSVar23;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
                     ("Select",pSVar6,value_00,
                      (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pSVar23,uStack_40,
                      in_stack_ffffffffffffff70);
  __this_04 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar10->fields)._actions;
  if (__this_04 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    uStack_98 = 0x3b62d6c;
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_04,(pGVar10->fields)._ownerId,
                        (System_Action_GisketchActionContext__o *)enter,(MethodInfo *)0x0);
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).action = (System_String_o *)pGVar7;
    uStack_98 = 0x3b62d84;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).action);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(pGVar10,pGVar5,method_03);
    return pGVar5;
  }
  uStack_98 = 0x3b62dbf;
  il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pSVar25 = pSVar24;
  pGVar26 = pGVar14;
  pGStack_c8 = __this_04;
  pGStack_c0 = pGVar5;
  pSStack_b8 = pSVar23;
  pGStack_b0 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options;
  pGStack_a8 = pGVar10;
  pSStack_a0 = pSVar6;
  uStack_98 = (ulong)uStack_40;
  if (g_data_057a9d92 == '\0') {
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62df3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62dff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e0b;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057a9d92 = '\x01';
  }
  pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e21;
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e2e;
  pGVar5 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "Text";
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e4e;
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pGVar17;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e5e;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pGVar17);
    (pGVar8->fields).text = (System_String_o *)pGVar7;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e6e;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).text,pGVar7);
    (pGVar8->fields).style = extraout_RDX;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e7e;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e8a;
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar24,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e9d;
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62eaa;
      pGVar5 = pGVar7;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b62f10;
      (pGVar7->fields).type = (System_String_o *)pSVar24;
      pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ec2;
      il2cpp_runtime_helper_022b4080(&pGVar7->fields,pSVar24);
    }
    (pGVar8->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar7;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ed8;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar7);
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar14;
    pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ef1;
    pGVar20 = pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (pGStack_c8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(pGStack_c8,pGVar8,method_04);
      return pGVar5;
    }
  }
label_03b62f10:
  pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62f15;
  value_01 = (float)il2cpp_runtime_helper_022b2c90();
  uVar16 = SUB84(pGVar18,0);
  pSVar23 = pSVar25;
  pGVar27 = pGVar26;
  pGStack_f8 = pGVar8;
  pSStack_f0 = pSVar24;
  pSStack_e8 = extraout_RDX;
  pGStack_e0 = pGVar17;
  pGStack_d8 = pGVar14;
  pGStack_d0 = pGVar7;
  if (g_data_057a9d94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"InputField");
    g_data_057a9d94 = '\x01';
  }
  __this_02 = (System_Nullable_float__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pMVar9 = (MethodInfo_37EBBF0 *)0x0;
  __this_05 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Nullable_float__Fields)0x0) {
    *(undefined8 *)((long)__this_02 + 0x10) = "InputField";
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x10);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0x18) = pGVar20;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x18,pGVar20);
    *(undefined8 *)((long)__this_02 + 0x30) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x30);
    SStack_110.klass = TypeInfo_AottgInputType;
    SStack_110.monitor = (void *)0xffffffffffffffff;
    uStack_100 = uVar16;
    pSVar6 = System_Enum__ToString(&SStack_110,(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_02 + 0x38) = pSVar6;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x38,pSVar6);
    *(System_Action_GisketchActionContext__o **)((long)__this_02 + 0x40) = pSVar25;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x40,pSVar25);
    pSVar24 = pSStack_b8;
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0xd8) = pGVar26;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xd8,pGVar26);
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)__this_02 + 0xf8) = pGStack_c0;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xf8);
    *(undefined4 *)((long)__this_02 + 0x90) = pGStack_b0._0_4_;
    if ((pSVar24 == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id,
       pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pMVar9 = (MethodInfo_37EBBF0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
      pMVar9 = (MethodInfo_37EBBF0 *)
               Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(pGVar5->fields).text,pSVar24,(MethodInfo *)0x0);
    }
    __this_05 = (System_Nullable_float__Fields)((long)__this_02 + 0x48);
    *(MethodInfo_37EBBF0 **)((long)__this_02 + 0x48) = pMVar9;
    il2cpp_runtime_helper_022b4080();
    if (pSVar24 == (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined8 *)((long)__this_02 + 0x88) = 0;
      method_00 = extraout_RDX_01;
    }
    else {
      SStack_110.klass = (System_Enum_c *)0x0;
      __this_05 = (System_Nullable_float__Fields)&SStack_110;
      pMVar9 = MethodInfo_Nullable_1_Single;
      System_Nullable_float____ctor((System_Nullable_float__o)__this_05,value_01,MethodInfo_Nullable_1_Single);
      *(System_Enum_c **)((long)__this_02 + 0x88) = SStack_110.klass;
      method_00 = extraout_RDX_02;
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,method_00);
      return pGVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(uVar16,value_01);
  pGVar17 = pGVar18;
  pSVar24 = pSVar23;
  pGVar14 = pGVar27;
  if (g_data_057a9d95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d95 = '\x01';
  }
  pGVar19 = pGVar18;
  if (pGVar18 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    pGVar19 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array **)((long)__this_05 + 0x20);
  }
  pGVar2 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_05 + 0x18);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar10,(System_String_o *)pGVar19,pGVar2,(MethodInfo *)pGVar17);
  if (extraout_RDX_03 != 0) {
    (**(code **)(extraout_RDX_03 + 0x18))
              (*(undefined8 *)(extraout_RDX_03 + 0x40),pGVar10,*(undefined8 *)(extraout_RDX_03 + 0x28));
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar21 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar5 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "ScrollView";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar18);
    (pGVar7->fields).style = (System_String_o *)pMVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style,pMVar9);
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pSVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search);
    (pGVar7->fields).layout = pGVar27;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).layout);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar7->fields).motion;
    (pGVar7->fields).motion = pGVar12;
    il2cpp_runtime_helper_022b4080();
    pGVar21 = pGVar12;
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar10->fields)._children;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar21 = pGVar12;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar7->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).deferredChildren,pGVar11);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar7,method_05);
        return pGVar5;
      }
    }
  }
  bVar4 = il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pSVar25 = pSVar24;
  pGVar26 = pGVar14;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  pGVar19 = pGVar17;
  if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)(pGVar5->fields).text;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id;
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar10,(System_String_o *)pGVar19,pGVar2,(MethodInfo *)pGVar18);
  if (extraout_RDX_04 != 0) {
    (**(code **)(extraout_RDX_04 + 0x18))
              (*(undefined8 *)(extraout_RDX_04 + 0x40),pGVar10,*(undefined8 *)(extraout_RDX_04 + 0x28));
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar22 = (System_Action_GisketchActionContext__o *)0x0;
  pGVar7 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pGVar17);
    (pGVar8->fields).style = (System_String_o *)pGVar21;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pGVar21);
    (pGVar8->fields).active = bVar4;
    (pGVar8->fields).enabled.fields.hasValue = in_XMM1_Da;
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pSVar24;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search);
    (pGVar8->fields).layout = pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).layout);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar8->fields).motion;
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pSVar23;
    il2cpp_runtime_helper_022b4080();
    pSVar22 = pSVar23;
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar10->fields)._children;
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pSVar22 = pSVar23;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar8->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,pGVar11);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar8,method_06);
        return pGVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX_05 == 0) {
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX_05 + 0x18);
    pGVar5 = TypeInfo_GisketchStepperStepDefinition;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX_05 + 0x18)) {
      if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX_05 + 0x20);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar5,(MethodInfo *)method_01);
        }
        goto label_03b63731;
      }
      uVar13 = *(ulong *)(extraout_RDX_05 + 0x18) & 0xffffffff;
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar12->fields).duration;
      uVar28 = 0;
      do {
        if (uVar13 <= uVar28) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX_05 + 0x20 + uVar28 * 8);
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_01)
          ;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        if (uVar1 <= uVar28) goto label_03b6371e;
        pGVar8->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_01;
        pGVar5 = pGVar8;
        il2cpp_runtime_helper_022b4080();
        uVar28 = uVar28 + 1;
        uVar13 = (ulong)*(uint *)(extraout_RDX_05 + 0x18);
        pGVar18 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                  (long)(int)*(uint *)(extraout_RDX_05 + 0x18);
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar8->monitor;
      } while ((long)uVar28 < (long)pGVar18);
    }
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar5 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).style = (System_String_o *)pSVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pSVar22);
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                         (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,in_stack_fffffffffffffdf0);
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar14);
    (pGVar8->fields).exit = pGVar12;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).exit,pGVar12);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pGVar8,method_07);
    return pGVar5;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX_06;
  if (extraout_RDX_06 == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar5->fields).text;
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar5->fields).id;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_06 = __this_03;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar14,(MethodInfo *)pGVar18);
  if (method_01 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_06 = (method_01->_1).element_class;
    ownerId = __this_03;
    (*(code *)(method_01->_1).namespaze)(__this_06,__this_03,*(undefined8 *)&(method_01->_1).byval_arg.bits);
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_03->_1).name;
    __this_06 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar15 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar18;
  pSVar23 = pSVar25;
  pGVar20 = pGVar26;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar6 = (System_String_o *)0x0;
  pGVar5 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar18);
    (pGVar7->fields).sprite = (System_String_o *)ownerId;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).sprite,ownerId);
    (pGVar7->fields).style = extraout_RDX_07;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style,extraout_RDX_07);
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pSVar25;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pSVar25);
    (pGVar7->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar26;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).motion,pGVar26);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_06,pGVar7,method_08);
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pSVar24 = pSVar23;
  pGVar26 = pGVar20;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite = (System_String_o *)0x0;
  pGVar7 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pSVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pSVar23);
    (pGVar8->fields).text = extraout_RDX_08;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).text,extraout_RDX_08);
    (pGVar8->fields).sprite = pSVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).sprite,pSVar6);
    (pGVar8->fields).style = (System_String_o *)pGVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pGVar20);
    (pGVar8->fields).action = (System_String_o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).action,pGVar17);
    (pGVar8->fields).choiceOptionRenderer = extraout_RDX_08;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).choiceOptionRenderer,extraout_RDX_08);
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search);
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar8,method_09);
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar7->fields).id;
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (pGVar2,(pGVar7->fields).text,(System_Action_GisketchActionContext__o *)pGVar18,
                        (MethodInfo *)0x0);
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,sprite,label,pSVar6,
                      (System_String_o *)pSVar24,(System_String_o *)pGVar26,pGVar14,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar5,in_stack_fffffffffffffcb8);
  return pGVar5;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Select
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Select (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, System_Action_GisketchActionContext__o* action, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62cf0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Select_3a62cf0
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          System_Action_GisketchActionContext__o *action,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action_00;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_Nullable_float__Fields __this_02;
  System_String_o *pSVar8;
  MethodInfo_37EBBF0 *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Il2CppClass *__this_03;
  System_Object_array *pSVar15;
  undefined4 uVar16;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar18;
  MethodInfo *method_02;
  System_String_o *extraout_RDX;
  MethodInfo *method_03;
  undefined8 extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  long extraout_RDX_03;
  MethodInfo *method_04;
  long extraout_RDX_04;
  MethodInfo *method_05;
  long extraout_RDX_05;
  MethodInfo *method_06;
  Il2CppClass *extraout_RDX_06;
  System_String_o *extraout_RDX_07;
  MethodInfo *method_07;
  System_String_o *extraout_RDX_08;
  MethodInfo *method_08;
  System_String_o *label;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar22;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar23;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  System_Nullable_float__Fields __this_04;
  Il2CppClass *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar25;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar26;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar27;
  ulong uVar28;
  float value_00;
  bool_conflict in_XMM1_Da;
  MethodInfo *in_stack_fffffffffffffd00;
  MethodInfo *in_stack_fffffffffffffe38;
  System_Enum_o SStack_c8;
  undefined4 uStack_b8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_b0;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGStack_a8;
  System_String_o *pSStack_a0;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_98;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_90;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_88;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_80;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_78;
  System_Action_GisketchActionContext__o *pSStack_70;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_68;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_60;
  System_String_o *pSStack_58;
  ulong uStack_50;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (g_data_057a9d8a == '\0') {
    uStack_50 = 0x3b62d2b;
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d8a = '\x01';
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(ulong)(uint)maxVisibleItems;
  uStack_50 = 0x3b62d50;
  pGVar17 = options;
  pGVar24 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)enter;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
                     ("Select",id,value,options,enter,maxVisibleItems,in_stack_ffffffffffffffb8);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields)._actions;
  if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    uStack_50 = 0x3b62d6c;
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar10,(__this->fields)._ownerId,
                        action,(MethodInfo *)0x0);
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).action = (System_String_o *)pGVar6;
    uStack_50 = 0x3b62d84;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).action);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar5,method_02);
    return pGVar5;
  }
  uStack_50 = 0x3b62dbf;
  il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pGVar25 = pGVar24;
  pGVar26 = pGVar14;
  pGStack_80 = pGVar10;
  pGStack_78 = pGVar5;
  pSStack_70 = (System_Action_GisketchActionContext__o *)enter;
  pGStack_68 = options;
  pGStack_60 = __this;
  pSStack_58 = id;
  uStack_50 = (ulong)(uint)maxVisibleItems;
  if (g_data_057a9d92 == '\0') {
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62df3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62dff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e0b;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057a9d92 = '\x01';
  }
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e21;
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e2e;
  pGVar5 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "Text";
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e4e;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar17;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e5e;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar17);
    (pGVar7->fields).text = (System_String_o *)pGVar6;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e6e;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,pGVar6);
    (pGVar7->fields).style = extraout_RDX;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e7e;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e8a;
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)pGVar24,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e9d;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar20 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62eaa;
      pGVar5 = pGVar6;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b62f10;
      (pGVar6->fields).type = (System_String_o *)pGVar24;
      pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ec2;
      il2cpp_runtime_helper_022b4080(&pGVar6->fields,pGVar24);
    }
    (pGVar7->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar6;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ed8;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
    (pGVar7->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar14;
    pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ef1;
    pGVar20 = pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).motion);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (pGStack_80 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(pGStack_80,pGVar7,method_03);
      return pGVar5;
    }
  }
label_03b62f10:
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62f15;
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  uVar16 = SUB84(pGVar18,0);
  pGVar23 = pGVar25;
  pGVar27 = pGVar26;
  pGStack_b0 = pGVar7;
  pGStack_a8 = pGVar24;
  pSStack_a0 = extraout_RDX;
  pGStack_98 = pGVar17;
  pGStack_90 = pGVar14;
  pGStack_88 = pGVar6;
  if (g_data_057a9d94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"InputField");
    g_data_057a9d94 = '\x01';
  }
  __this_02 = (System_Nullable_float__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pMVar9 = (MethodInfo_37EBBF0 *)0x0;
  __this_04 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Nullable_float__Fields)0x0) {
    *(undefined8 *)((long)__this_02 + 0x10) = "InputField";
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x10);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0x18) = pGVar20;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x18,pGVar20);
    *(undefined8 *)((long)__this_02 + 0x30) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x30);
    SStack_c8.klass = TypeInfo_AottgInputType;
    SStack_c8.monitor = (void *)0xffffffffffffffff;
    uStack_b8 = uVar16;
    pSVar8 = System_Enum__ToString(&SStack_c8,(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_02 + 0x38) = pSVar8;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x38,pSVar8);
    *(Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o **)((long)__this_02 + 0x40) = pGVar25;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x40,pGVar25);
    action_00 = pSStack_70;
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0xd8) = pGVar26;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xd8,pGVar26);
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)__this_02 + 0xf8) = pGStack_78;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xf8);
    *(undefined4 *)((long)__this_02 + 0x90) = pGStack_68._0_4_;
    if ((action_00 == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id,
       pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pMVar9 = (MethodInfo_37EBBF0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
      pMVar9 = (MethodInfo_37EBBF0 *)
               Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(pGVar5->fields).text,action_00,(MethodInfo *)0x0);
    }
    __this_04 = (System_Nullable_float__Fields)((long)__this_02 + 0x48);
    *(MethodInfo_37EBBF0 **)((long)__this_02 + 0x48) = pMVar9;
    il2cpp_runtime_helper_022b4080();
    if (action_00 == (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined8 *)((long)__this_02 + 0x88) = 0;
      method_00 = extraout_RDX_01;
    }
    else {
      SStack_c8.klass = (System_Enum_c *)0x0;
      __this_04 = (System_Nullable_float__Fields)&SStack_c8;
      pMVar9 = MethodInfo_Nullable_1_Single;
      System_Nullable_float____ctor((System_Nullable_float__o)__this_04,value_00,MethodInfo_Nullable_1_Single);
      *(System_Enum_c **)((long)__this_02 + 0x88) = SStack_c8.klass;
      method_00 = extraout_RDX_02;
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,method_00);
      return pGVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(uVar16,value_00);
  pGVar17 = pGVar18;
  pGVar24 = pGVar23;
  pGVar14 = pGVar27;
  if (g_data_057a9d95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d95 = '\x01';
  }
  pGVar19 = pGVar18;
  if (pGVar18 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    pGVar19 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array **)((long)__this_04 + 0x20);
  }
  pGVar2 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_04 + 0x18);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar10,(System_String_o *)pGVar19,pGVar2,(MethodInfo *)pGVar17);
  if (extraout_RDX_03 != 0) {
    (**(code **)(extraout_RDX_03 + 0x18))
              (*(undefined8 *)(extraout_RDX_03 + 0x40),pGVar10,*(undefined8 *)(extraout_RDX_03 + 0x28));
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar21 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar5 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "ScrollView";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pGVar18);
    (pGVar6->fields).style = (System_String_o *)pMVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style,pMVar9);
    (pGVar6->fields).search = pGVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
    (pGVar6->fields).layout = pGVar27;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).layout);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).motion;
    (pGVar6->fields).motion = pGVar12;
    il2cpp_runtime_helper_022b4080();
    pGVar21 = pGVar12;
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar10->fields)._children;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar21 = pGVar12;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar6->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).deferredChildren,pGVar11);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,pGVar6,method_04);
        return pGVar5;
      }
    }
  }
  bVar4 = il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pGVar25 = pGVar24;
  pGVar26 = pGVar14;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  pGVar19 = pGVar17;
  if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)(pGVar5->fields).text;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id;
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar10,(System_String_o *)pGVar19,pGVar2,(MethodInfo *)pGVar18);
  if (extraout_RDX_04 != 0) {
    (**(code **)(extraout_RDX_04 + 0x18))
              (*(undefined8 *)(extraout_RDX_04 + 0x40),pGVar10,*(undefined8 *)(extraout_RDX_04 + 0x28));
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar22 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0;
  pGVar6 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar17);
    (pGVar7->fields).style = (System_String_o *)pGVar21;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style,pGVar21);
    (pGVar7->fields).active = bVar4;
    (pGVar7->fields).enabled.fields.hasValue = in_XMM1_Da;
    (pGVar7->fields).search = pGVar24;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search);
    (pGVar7->fields).layout = pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).layout);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar7->fields).motion;
    (pGVar7->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar23;
    il2cpp_runtime_helper_022b4080();
    pGVar22 = pGVar23;
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar10->fields)._children;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar22 = pGVar23;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar7->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).deferredChildren,pGVar11);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar7,method_05);
        return pGVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX_05 == 0) {
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX_05 + 0x18);
    pGVar5 = TypeInfo_GisketchStepperStepDefinition;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX_05 + 0x18)) {
      if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX_05 + 0x20);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar5,(MethodInfo *)method_01);
        }
        goto label_03b63731;
      }
      uVar13 = *(ulong *)(extraout_RDX_05 + 0x18) & 0xffffffff;
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar12->fields).duration;
      uVar28 = 0;
      do {
        if (uVar13 <= uVar28) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX_05 + 0x20 + uVar28 * 8);
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_01)
          ;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        if (uVar1 <= uVar28) goto label_03b6371e;
        pGVar7->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_01;
        pGVar5 = pGVar7;
        il2cpp_runtime_helper_022b4080();
        uVar28 = uVar28 + 1;
        uVar13 = (ulong)*(uint *)(extraout_RDX_05 + 0x18);
        pGVar18 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                  (long)(int)*(uint *)(extraout_RDX_05 + 0x18);
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar7->monitor;
      } while ((long)uVar28 < (long)pGVar18);
    }
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar5 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).style = (System_String_o *)pGVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style,pGVar22);
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                         (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,in_stack_fffffffffffffe38);
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar14);
    (pGVar7->fields).exit = pGVar12;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).exit,pGVar12);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pGVar7,method_06);
    return pGVar5;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX_06;
  if (extraout_RDX_06 == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar5->fields).text;
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar5->fields).id;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_05 = __this_03;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar14,(MethodInfo *)pGVar18);
  if (method_01 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_05 = (method_01->_1).element_class;
    ownerId = __this_03;
    (*(code *)(method_01->_1).namespaze)(__this_05,__this_03,*(undefined8 *)&(method_01->_1).byval_arg.bits);
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_03->_1).name;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar15 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar18;
  pGVar24 = pGVar25;
  pGVar20 = pGVar26;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar8 = (System_String_o *)0x0;
  pGVar5 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pGVar18);
    (pGVar6->fields).sprite = (System_String_o *)ownerId;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).sprite,ownerId);
    (pGVar6->fields).style = extraout_RDX_07;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style,extraout_RDX_07);
    (pGVar6->fields).search = pGVar25;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar25);
    (pGVar6->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar26;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion,pGVar26);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar6,method_07);
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar18 = pGVar17;
  pGVar25 = pGVar24;
  pGVar26 = pGVar20;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite = (System_String_o *)0x0;
  pGVar6 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar24;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar24);
    (pGVar7->fields).text = extraout_RDX_08;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,extraout_RDX_08);
    (pGVar7->fields).sprite = pSVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).sprite,pSVar8);
    (pGVar7->fields).style = (System_String_o *)pGVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style,pGVar20);
    (pGVar7->fields).action = (System_String_o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).action,pGVar17);
    (pGVar7->fields).choiceOptionRenderer = extraout_RDX_08;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).choiceOptionRenderer,extraout_RDX_08);
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search);
    (pGVar7->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).motion);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar7,method_08);
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar6->fields).id;
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (pGVar2,(pGVar6->fields).text,(System_Action_GisketchActionContext__o *)pGVar18,
                        (MethodInfo *)0x0);
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,sprite,label,pSVar8,
                      (System_String_o *)pGVar25,(System_String_o *)pGVar26,pGVar14,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar5,in_stack_fffffffffffffd00);
  return pGVar5;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62810

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice
          (System_String_o *type,System_String_o *id,System_String_o *value,System_String_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options_01;
  System_String_o *value_00;
  MethodInfo *method_00;
  System_String_o *value_01;
  MethodInfo *method_01;
  System_String_o *extraout_RDX;
  MethodInfo *method_02;
  uint unaff_EBX;
  System_String_array *id_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *id_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_Action_GisketchActionContext__o *action;
  System_Action_GisketchActionContext__o *action_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_01;
  bool_conflict maxVisibleItems_00;
  undefined4 in_register_0000008c;
  undefined1 auVar4 [16];
  MethodInfo *method_03;
  MethodInfo *in_stack_ffffffffffffff38;
  MethodInfo *in_stack_ffffffffffffff80;
  int32_t iStack_78;
  
  action_00 = (System_Action_GisketchActionContext__o *)CONCAT44(in_register_0000008c,maxVisibleItems);
  options_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)options;
  action = (System_Action_GisketchActionContext__o *)enter;
  if (g_data_057a9d8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    g_data_057a9d8b = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (System_String_array *)0x0;
  pGVar3 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = type;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,type);
    (pGVar1->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,id);
    (pGVar1->fields).value = value;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).value,value);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar1->fields).maxVisibleItems;
    *(System_String_array **)&(pGVar1->fields).maxVisibleItems = options;
    il2cpp_runtime_helper_022b4080();
    (pGVar1->fields).debounceSeconds.fields.hasValue = maxVisibleItems;
    id_00 = options;
    if (type != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (pGVar1->fields).style = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style,pSVar2);
      (pGVar1->fields).motion = enter;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion,enter);
      return pGVar1;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d86 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    g_data_057a9d86 = '\x01';
  }
  enter_00 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)(ulong)unaff_EBX;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Dropdown",(System_String_o *)id_00,value_00,(System_String_array *)options_00,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)action_00,unaff_EBX,
                      in_stack_ffffffffffffff80);
  __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar3->fields).id;
  if (__this == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    options_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this,(pGVar3->fields).text,action,
                        (MethodInfo *)0x0);
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d87 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Dropdown");
      g_data_057a9d87 = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
                       ("Dropdown",pSVar2,value_01,options_00,enter_00,iStack_78,in_stack_ffffffffffffff38);
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      options_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
      pSVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action_00,(MethodInfo *)0x0);
    }
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).action = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).action);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar3,method_01);
      return pGVar3;
    }
    il2cpp_runtime_helper_022b2c90();
    options_01 = options_00;
    enter_01 = enter_00;
    maxVisibleItems_00 = iStack_78;
    if (g_data_057a9d8c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      g_data_057a9d8c = '\x01';
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    id_01 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
    pGVar3 = pGVar1;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).type = (System_String_o *)__this_00;
      il2cpp_runtime_helper_022b4080(&pGVar1->fields,__this_00);
      (pGVar1->fields).id = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,pSVar2);
      (pGVar1->fields).value = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).value,extraout_RDX);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar1->fields).options;
      (pGVar1->fields).options = (System_String_array *)options_00;
      il2cpp_runtime_helper_022b4080();
      (pGVar1->fields).debounceSeconds.fields.hasValue = iStack_78;
      id_01 = options_00;
      if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar2 = System_String__ToLowerInvariant((System_String_o *)__this_00,(MethodInfo *)0x0);
        (pGVar1->fields).style = pSVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style,pSVar2);
        (pGVar1->fields).motion = enter_00;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion,enter_00);
        return pGVar1;
      }
    }
    auVar4 = il2cpp_runtime_helper_022b2c90();
    method_03 = auVar4._0_8_;
    if (g_data_057a9d88 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Select");
      g_data_057a9d88 = '\x01';
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                       ("Select",(System_String_o *)id_01,auVar4._8_8_,(System_String_array *)options_01,
                        enter_01,maxVisibleItems_00,method_03);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pGVar1,method_02);
    return pGVar3;
  }
  (pGVar1->fields).action = pSVar2;
  il2cpp_runtime_helper_022b4080(&(pGVar1->fields).action);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pGVar1,method_00);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Choice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Choice (System_String_o* type, System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* options, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, int32_t maxVisibleItems, const MethodInfo* method);
// 0x3b62ab0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Choice_3a62ab0
          (System_String_o *type,System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,int32_t maxVisibleItems,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *id_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter_00;
  int32_t maxVisibleItems_00;
  undefined1 auVar4 [16];
  MethodInfo *method_01;
  
  options_00 = options;
  enter_00 = enter;
  maxVisibleItems_00 = maxVisibleItems;
  if (g_data_057a9d8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    g_data_057a9d8c = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0;
  pGVar3 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = type;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,type);
    (pGVar1->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,id);
    (pGVar1->fields).value = value;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).value,value);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar1->fields).options;
    (pGVar1->fields).options = (System_String_array *)options;
    il2cpp_runtime_helper_022b4080();
    (pGVar1->fields).debounceSeconds.fields.hasValue = maxVisibleItems;
    id_00 = options;
    if (type != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(type,(MethodInfo *)0x0);
      (pGVar1->fields).style = pSVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style,pSVar2);
      (pGVar1->fields).motion = enter;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion,enter);
      return pGVar1;
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  method_01 = auVar4._0_8_;
  if (g_data_057a9d88 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Select");
    g_data_057a9d88 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Choice
                     ("Select",(System_String_o *)id_00,auVar4._8_8_,(System_String_array *)options_00,
                      enter_00,maxVisibleItems_00,method_01);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,pGVar1,method_00);
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgUi$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi___ctor (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* ownerId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5f3e0

void Gisketch_Aottg2UI_Code_AottgUi___ctor
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *ownerId,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (__this->fields)._children = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._ownerId = ownerId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ownerId,ownerId);
  (__this->fields)._actions = actions;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actions,actions);
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$get_HasChildren
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x3b5f490

bool_conflict
Gisketch_Aottg2UI_Code_AottgUi__get_HasChildren(Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Object_array *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *in_RCX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *extraout_RDX;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar4;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  
  pGVar4 = __this;
  if (g_data_057a9d8e == '\0') {
    pGVar4 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d8e = '\x01';
  }
  pSVar5 = (__this->fields)._children;
  if (pSVar5 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar5 >> 8),0 < (pSVar5->fields)._size);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
    g_data_057a9d8f = '\x01';
  }
  pSVar5 = (pGVar4->fields)._children;
  if (pSVar5 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pSVar2 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_GisketchNodeDefinition_ToArray);
    return (bool_conflict)pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d65 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar3 = (System_String_o *)0x0;
  __this_01 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = (System_String_o *)pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar5);
    (__this_00->fields).style = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style,method);
    (__this_00->fields).search = in_RCX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,in_RCX);
    (__this_00->fields).deferredChildren = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).deferredChildren,extraout_RDX);
    return (bool_conflict)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).type = pSVar3;
  bVar1 = il2cpp_runtime_helper_022b4080(&__this_01->fields,pSVar3);
  return bVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ToArray
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__ToArray (Gisketch_Aottg2UI_Code_AottgUi_o* __this, const MethodInfo* method);
// 0x3b5f4d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__ToArray(Gisketch_Aottg2UI_Code_AottgUi_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *in_RCX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *extraout_RDX;
  System_String_o *pSVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_01;
  
  if (g_data_057a9d8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
    g_data_057a9d8f = '\x01';
  }
  __this_01 = (__this->fields)._children;
  if (__this_01 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d65 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar2 = (System_String_o *)0x0;
  pGVar1 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&__this_00->bounds)->type = "Panel";
    il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&__this_00->bounds);
    __this_00->max_length = (il2cpp_array_size_t)__this_01;
    il2cpp_runtime_helper_022b4080(&__this_00->max_length,__this_01);
    __this_00->m_Items[4] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method;
    il2cpp_runtime_helper_022b4080(__this_00->m_Items + 4,method);
    __this_00->m_Items[0x17] = in_RCX;
    il2cpp_runtime_helper_022b4080(__this_00->m_Items + 0x17,in_RCX);
    __this_00->m_Items[0x1f] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_00->m_Items + 0x1f,extraout_RDX);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pGVar1->obj,(MethodInfo *)0x0);
  ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&pGVar1->bounds)->type = pSVar2;
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&pGVar1->bounds,pSVar2);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Add
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Add (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b60a60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Add
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  long lVar4;
  
  if (g_data_057a9d90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057a9d90 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  }
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this_00->fields)._items;
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pGVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pGVar3->m_Items[(int)uVar2] = node;
        il2cpp_runtime_helper_022b4080(pGVar3->m_Items + (int)uVar2,node);
        return node;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)node,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return node;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6f == '\0') {
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9d6f = '\x01';
  }
  return "popover";
}


// Gisketch.Aottg2UI.Code.AottgUi$$Component
// il2cpp: void Gisketch_Aottg2UI_Code_AottgUi__Component (Gisketch_Aottg2UI_Code_AottgUi_o* __this, Gisketch_Aottg2UI_Code_AottgComponent_o* component, const MethodInfo* method);
// 0x3b5e930

void Gisketch_Aottg2UI_Code_AottgUi__Component
               (Gisketch_Aottg2UI_Code_AottgUi_o *__this,Gisketch_Aottg2UI_Code_AottgComponent_o *component,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  code *vtableDispatch;
  
  if (component != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
    pGVar1 = component->klass;
    vtableDispatch = pGVar1[1]._1.image;
    (*vtableDispatch)(component,__this,pGVar1[1]._1.gc_desc,pGVar1,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Panel
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Panel (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b602c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Panel
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *ownerId;
  int iVar3;
  
  method_00 = (MethodInfo *)id;
  if (g_data_057a9d91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d91 = '\x01';
  }
  ownerId = id;
  if (id == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  actions = (__this->fields)._actions;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,ownerId,actions,method_00);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_01,(build->fields).method);
  }
  __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar2 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
  iVar3 = (int)pGVar2;
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_02->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&__this_02->fields);
    (__this_02->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).id,id);
    (__this_02->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).style,style);
    (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).search);
    iVar3 = (int)__this_02 + 0xf8;
    (__this_02->fields).motion = enter;
    il2cpp_runtime_helper_022b4080();
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      __this_00 = (__this_01->fields)._children;
      iVar3 = 0;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition_ToArray);
        (__this_02->fields).deferredChildren = pGVar1;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).deferredChildren,pGVar1);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_02,method_01);
        return pGVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d6b == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonNegative");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonQuiet");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonSecondary");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonDanger");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButton");
    il2cpp_runtime_helper_023445d0(&"dialogTitleCloseButtonWorkshop");
    g_data_057a9d6b = '\x01';
  }
  if (iVar3 - 1U < 6) {
    return *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(&g_data_052150d0)[(int)(iVar3 - 1U)];
  }
  return "dialogTitleCloseButton";
}


// Gisketch.Aottg2UI.Code.AottgUi$$Text
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Text (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* text, System_String_o* style, System_String_o* id, System_String_o* bindText, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b62dc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Text
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *text,System_String_o *style,
          System_String_o *id,System_String_o *bindText,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_Nullable_float__Fields __this_02;
  System_String_o *pSVar7;
  MethodInfo_37EBBF0 *pMVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Il2CppClass *__this_03;
  System_Object_array *pSVar15;
  undefined4 uVar16;
  System_Action_GisketchActionContext__o *pSVar17;
  System_Action_GisketchActionContext__o *pSVar18;
  MethodInfo *method_02;
  undefined8 extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  long extraout_RDX_02;
  MethodInfo *method_03;
  long extraout_RDX_03;
  MethodInfo *method_04;
  long extraout_RDX_04;
  MethodInfo *method_05;
  Il2CppClass *extraout_RDX_05;
  System_String_o *extraout_RDX_06;
  MethodInfo *method_06;
  System_String_o *extraout_RDX_07;
  MethodInfo *method_07;
  System_String_o *label;
  undefined8 unaff_RBX;
  System_Action_GisketchActionContext__o *pSVar19;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar22;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  System_Nullable_float__Fields __this_04;
  Il2CppClass *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar23;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar25;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar26;
  System_Action_GisketchActionContext__o *unaff_R12;
  undefined4 unaff_R13D;
  ulong uVar27;
  float value;
  bool_conflict in_XMM1_Da;
  MethodInfo *in_stack_fffffffffffffd48;
  MethodInfo *in_stack_fffffffffffffe80;
  System_Enum_o SStack_80;
  undefined4 uStack_70;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_48;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  pSVar18 = (System_Action_GisketchActionContext__o *)id;
  pGVar23 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)bindText;
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)enter;
  local_38 = __this;
  if (g_data_057a9d92 == '\0') {
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62df3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62dff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e0b;
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057a9d92 = '\x01';
  }
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e21;
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e2e;
  pGVar6 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "Text";
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e4e;
    il2cpp_runtime_helper_022b4080(&pGVar5->fields);
    (pGVar5->fields).id = id;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e5e;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,id);
    (pGVar5->fields).text = text;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e6e;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).text,text);
    (pGVar5->fields).style = style;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e7e;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style);
    text = (System_String_o *)0x0;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e8a;
    bVar4 = System_String__IsNullOrEmpty(bindText,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62e9d;
      text = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62eaa;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)text;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)text,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)text ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b62f10;
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)text)->fields).type = bindText;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ec2;
      il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)text)->fields,bindText);
    }
    (pGVar5->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)text;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ed8;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,text);
    (pGVar5->fields).motion = enter;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62ef1;
    pGVar12 = enter;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).motion);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (local_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add(local_38,pGVar5,method_02);
      return pGVar6;
    }
  }
label_03b62f10:
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b62f15;
  value = (float)il2cpp_runtime_helper_022b2c90();
  uVar16 = SUB84(pSVar18,0);
  pGVar22 = pGVar23;
  pGVar25 = pGVar14;
  pGStack_68 = pGVar5;
  pSStack_60 = bindText;
  pSStack_58 = style;
  pSStack_50 = id;
  pGStack_48 = enter;
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)text;
  if (g_data_057a9d94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"InputField");
    g_data_057a9d94 = '\x01';
  }
  __this_02 = (System_Nullable_float__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pMVar8 = (MethodInfo_37EBBF0 *)0x0;
  __this_04 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Nullable_float__Fields)0x0) {
    *(undefined8 *)((long)__this_02 + 0x10) = "InputField";
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x10);
    *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)__this_02 + 0x18) = pGVar12;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x18,pGVar12);
    *(undefined8 *)((long)__this_02 + 0x30) = extraout_RDX;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x30);
    SStack_80.klass = TypeInfo_AottgInputType;
    SStack_80.monitor = (void *)0xffffffffffffffff;
    uStack_70 = uVar16;
    pSVar7 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_02 + 0x38) = pSVar7;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x38,pSVar7);
    *(Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o **)((long)__this_02 + 0x40) = pGVar23;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x40,pGVar23);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0xd8) = pGVar14;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xd8,pGVar14);
    *(undefined8 *)((long)__this_02 + 0xf8) = unaff_RBX;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xf8);
    *(undefined4 *)((long)__this_02 + 0x90) = unaff_R13D;
    if ((unaff_R12 == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar6->fields).id,
       pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pMVar8 = (MethodInfo_37EBBF0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar18 = (System_Action_GisketchActionContext__o *)0x0;
      pMVar8 = (MethodInfo_37EBBF0 *)
               Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(pGVar6->fields).text,unaff_R12,(MethodInfo *)0x0);
    }
    __this_04 = (System_Nullable_float__Fields)((long)__this_02 + 0x48);
    *(MethodInfo_37EBBF0 **)((long)__this_02 + 0x48) = pMVar8;
    il2cpp_runtime_helper_022b4080();
    if (unaff_R12 == (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined8 *)((long)__this_02 + 0x88) = 0;
      method_00 = extraout_RDX_00;
    }
    else {
      SStack_80.klass = (System_Enum_c *)0x0;
      __this_04 = (System_Nullable_float__Fields)&SStack_80;
      pMVar8 = MethodInfo_Nullable_1_Single;
      System_Nullable_float____ctor((System_Nullable_float__o)__this_04,value,MethodInfo_Nullable_1_Single);
      *(System_Enum_c **)((long)__this_02 + 0x88) = SStack_80.klass;
      method_00 = extraout_RDX_01;
    }
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,method_00);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(uVar16,value);
  pSVar17 = pSVar18;
  pGVar23 = pGVar22;
  pGVar14 = pGVar25;
  if (g_data_057a9d95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d95 = '\x01';
  }
  pSVar19 = pSVar18;
  if (pSVar18 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar19 = *(System_Action_GisketchActionContext__o **)((long)__this_04 + 0x20);
  }
  pGVar2 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_04 + 0x18);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar9,(System_String_o *)pSVar19,pGVar2,(MethodInfo *)pSVar17);
  if (extraout_RDX_02 != 0) {
    (**(code **)(extraout_RDX_02 + 0x18))
              (*(undefined8 *)(extraout_RDX_02 + 0x40),pGVar9,*(undefined8 *)(extraout_RDX_02 + 0x28));
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar6 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "ScrollView";
    il2cpp_runtime_helper_022b4080(&pGVar5->fields);
    (pGVar5->fields).id = (System_String_o *)pSVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar18);
    (pGVar5->fields).style = (System_String_o *)pMVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style,pMVar8);
    (pGVar5->fields).search = pGVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
    (pGVar5->fields).layout = pGVar25;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).layout);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar5->fields).motion;
    (pGVar5->fields).motion = pGVar12;
    il2cpp_runtime_helper_022b4080();
    pGVar20 = pGVar12;
    if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar9->fields)._children;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar20 = pGVar12;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar5->fields).deferredChildren = pGVar10;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).deferredChildren,pGVar10);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,pGVar5,method_03);
        return pGVar6;
      }
    }
  }
  bVar4 = il2cpp_runtime_helper_022b2c90();
  pSVar18 = pSVar17;
  pGVar24 = pGVar23;
  pGVar25 = pGVar14;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  pSVar19 = pSVar17;
  if (pSVar17 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar19 = (System_Action_GisketchActionContext__o *)(pGVar6->fields).text;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar6->fields).id;
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar9,(System_String_o *)pSVar19,pGVar2,(MethodInfo *)pSVar18);
  if (extraout_RDX_03 != 0) {
    (**(code **)(extraout_RDX_03 + 0x18))
              (*(undefined8 *)(extraout_RDX_03 + 0x40),pGVar9,*(undefined8 *)(extraout_RDX_03 + 0x28));
  }
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar21 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0;
  pGVar5 = pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar11,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar11->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar11->fields);
    (pGVar11->fields).id = (System_String_o *)pSVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).id,pSVar17);
    (pGVar11->fields).style = (System_String_o *)pGVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).style,pGVar20);
    (pGVar11->fields).active = bVar4;
    (pGVar11->fields).enabled.fields.hasValue = in_XMM1_Da;
    (pGVar11->fields).search = pGVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search);
    (pGVar11->fields).layout = pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).layout);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar11->fields).motion;
    (pGVar11->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar22;
    il2cpp_runtime_helper_022b4080();
    pGVar21 = pGVar22;
    if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar9->fields)._children;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar21 = pGVar22;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar11->fields).deferredChildren = pGVar10;
        il2cpp_runtime_helper_022b4080(&(pGVar11->fields).deferredChildren,pGVar10);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pGVar11,method_04);
        return pGVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX_04 == 0) {
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX_04 + 0x18);
    pGVar6 = TypeInfo_GisketchStepperStepDefinition;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX_04 + 0x18)) {
      if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar6 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX_04 + 0x20);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar6,(MethodInfo *)method_01);
        }
        goto label_03b63731;
      }
      uVar13 = *(ulong *)(extraout_RDX_04 + 0x18) & 0xffffffff;
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar12->fields).duration;
      uVar27 = 0;
      do {
        if (uVar13 <= uVar27) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX_04 + 0x20 + uVar27 * 8);
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_01)
          ;
          uVar1 = *(uint *)&(pGVar12->fields).group;
        }
        if (uVar1 <= uVar27) goto label_03b6371e;
        pGVar11->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_01;
        pGVar6 = pGVar11;
        il2cpp_runtime_helper_022b4080();
        uVar27 = uVar27 + 1;
        uVar13 = (ulong)*(uint *)(extraout_RDX_04 + 0x18);
        pSVar18 = (System_Action_GisketchActionContext__o *)(long)(int)*(uint *)(extraout_RDX_04 + 0x18);
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar11->monitor;
      } while ((long)uVar27 < (long)pSVar18);
    }
  }
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar6 = pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar11,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar11->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar11->fields);
    (pGVar11->fields).style = (System_String_o *)pGVar21;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).style,pGVar21);
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                         (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,in_stack_fffffffffffffe80);
    (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search,pGVar14);
    (pGVar11->fields).exit = pGVar12;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields).exit,pGVar12);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar11,method_05)
    ;
    return pGVar6;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX_05;
  if (extraout_RDX_05 == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar6->fields).text;
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar6->fields).id;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_05 = __this_03;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar14,(MethodInfo *)pSVar18);
  if (method_01 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_05 = (method_01->_1).element_class;
    ownerId = __this_03;
    (*(code *)(method_01->_1).namespaze)(__this_05,__this_03,*(undefined8 *)&(method_01->_1).byval_arg.bits);
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_03->_1).name;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar15 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar15;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar18;
  pGVar23 = pGVar24;
  pGVar26 = pGVar25;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar7 = (System_String_o *)0x0;
  pGVar6 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar18 = pSVar17;
    pGVar22 = pGVar23;
    pGVar25 = pGVar26;
    if (g_data_057a9d9f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"SpriteButton");
      g_data_057a9d9f = '\x01';
    }
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    sprite = (System_String_o *)0x0;
    pGVar5 = pGVar11;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar11->fields).type = "SpriteButton";
      il2cpp_runtime_helper_022b4080(&pGVar11->fields);
      (pGVar11->fields).id = (System_String_o *)pGVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).id,pGVar23);
      (pGVar11->fields).text = extraout_RDX_07;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).text,extraout_RDX_07);
      (pGVar11->fields).sprite = pSVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).sprite,pSVar7);
      (pGVar11->fields).style = (System_String_o *)pGVar26;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).style,pGVar26);
      (pGVar11->fields).action = (System_String_o *)pSVar17;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).action,pSVar17);
      (pGVar11->fields).choiceOptionRenderer = extraout_RDX_07;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).choiceOptionRenderer,extraout_RDX_07);
      (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search);
      (pGVar11->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar14;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).motion);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pGVar11,method_07);
      return pGVar6;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id;
    if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar7 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(pGVar5->fields).text,pSVar18,(MethodInfo *)0x0);
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,sprite,label,pSVar7,
                        (System_String_o *)pGVar22,(System_String_o *)pGVar25,pGVar14,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6,in_stack_fffffffffffffd48)
    ;
    return pGVar6;
  }
  (pGVar5->fields).type = "Image";
  il2cpp_runtime_helper_022b4080(&pGVar5->fields);
  (pGVar5->fields).id = (System_String_o *)pSVar18;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar18);
  (pGVar5->fields).sprite = (System_String_o *)ownerId;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).sprite,ownerId);
  (pGVar5->fields).style = extraout_RDX_06;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style,extraout_RDX_06);
  (pGVar5->fields).search = pGVar24;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar24);
  (pGVar5->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar25;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).motion,pGVar25);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar5,method_06)
  ;
  return pGVar6;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_String_o* actionId, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x3b5fb60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_String_o *actionId,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *actionId_00;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text_00;
  System_String_o *text_01;
  MethodInfo *method_01;
  System_String_o *tooltip_00;
  MethodInfo *in_stack_ffffffffffffff48;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  action = (System_Action_GisketchActionContext__o *)actionId;
  pSVar3 = id;
  tooltip_00 = tooltip;
  if (g_data_057a9d93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9d93 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  text_01 = (System_String_o *)0x0;
  pGVar4 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,id);
    (__this_01->fields).text = text;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,text);
    (__this_01->fields).icon = icon;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).icon);
    method_01 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
    *(byte *)&(__this_01->fields).hasIcon = (byte)bVar2 ^ 1;
    pSVar3 = Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(variant,method_01);
    (__this_01->fields).style = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,pSVar3);
    (__this_01->fields).action = actionId;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action,actionId);
    (__this_01->fields).choiceOptionRenderer = tooltip;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer,tooltip);
    (__this_01->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_01,method_00);
    return pGVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar4->fields).type;
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = (__this_00->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(__this_00->fields)._ownerId,action_00,(MethodInfo *)0x0);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (__this_00,0,text_01,pSVar3,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        in_stack_ffffffffffffffa0);
    return pGVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar1 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar4->fields).id;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (pGVar1,(pGVar4->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar4,(int32_t)text_01,text_00,actionId_00,pSVar3,
                      tooltip_00,in_stack_ffffffffffffff98,(System_String_o *)in_stack_ffffffffffffffa0,
                      in_stack_ffffffffffffff48);
  return pGVar4;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Button (Gisketch_Aottg2UI_Code_AottgUi_o* __this, int32_t variant, System_String_o* text, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* tooltip, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* icon, const MethodInfo* method);
// 0x3b5fd20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,int32_t variant,System_String_o *text,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *tooltip,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (__this,variant,text,actionId,id,tooltip,enter,icon,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$InputField
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__InputField (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, int32_t type, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_Action_GisketchActionContext__o* change, float debounceSeconds, int32_t maxCharacters, const MethodInfo* method);
// 0x3b62f20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__InputField
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          int32_t type,System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
          System_Action_GisketchActionContext__o *change,float debounceSeconds,int32_t maxCharacters,
          MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  System_Nullable_float__Fields __this_02;
  System_String_o *pSVar4;
  MethodInfo_37EBBF0 *pMVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar11;
  ulong uVar12;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  Il2CppClass *__this_03;
  System_Object_array *pSVar14;
  undefined4 in_register_0000000c;
  System_Action_GisketchActionContext__o *pSVar15;
  System_Action_GisketchActionContext__o *pSVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *method_02;
  long extraout_RDX_02;
  MethodInfo *method_03;
  long extraout_RDX_03;
  MethodInfo *method_04;
  Il2CppClass *extraout_RDX_04;
  System_String_o *extraout_RDX_05;
  MethodInfo *method_05;
  System_String_o *extraout_RDX_06;
  MethodInfo *method_06;
  System_String_o *label;
  System_Action_GisketchActionContext__o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar20;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  System_Nullable_float__Fields __this_04;
  Il2CppClass *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar22;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar23;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar24;
  ulong uVar25;
  bool_conflict bVar26;
  bool_conflict in_XMM1_Da;
  MethodInfo *in_stack_fffffffffffffd80;
  MethodInfo *in_stack_fffffffffffffeb8;
  System_Enum_o local_48;
  int32_t local_38;
  
  pSVar16 = (System_Action_GisketchActionContext__o *)CONCAT44(in_register_0000000c,type);
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)style;
  pGVar13 = layout;
  if (g_data_057a9d94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"InputField");
    g_data_057a9d94 = '\x01';
  }
  __this_02 = (System_Nullable_float__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pMVar5 = (MethodInfo_37EBBF0 *)0x0;
  __this_04 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Nullable_float__Fields)0x0) {
    *(undefined8 *)((long)__this_02 + 0x10) = "InputField";
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x10);
    *(System_String_o **)((long)__this_02 + 0x18) = id;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x18,id);
    *(System_String_o **)((long)__this_02 + 0x30) = placeholder;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x30);
    local_48.klass = TypeInfo_AottgInputType;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = type;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_02 + 0x38) = pSVar4;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x38,pSVar4);
    *(System_String_o **)((long)__this_02 + 0x40) = style;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0x40,style);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_02 + 0xd8) = layout;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xd8,layout);
    *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)__this_02 + 0xf8) = enter;
    il2cpp_runtime_helper_022b4080((long)__this_02 + 0xf8);
    *(int32_t *)((long)__this_02 + 0x90) = maxCharacters;
    if ((change == (System_Action_GisketchActionContext__o *)0x0) ||
       (pGVar2 = (__this->fields)._actions, pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0)) {
      pMVar5 = (MethodInfo_37EBBF0 *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar16 = (System_Action_GisketchActionContext__o *)0x0;
      pMVar5 = (MethodInfo_37EBBF0 *)
               Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar2,(__this->fields)._ownerId,change,(MethodInfo *)0x0);
    }
    __this_04 = (System_Nullable_float__Fields)((long)__this_02 + 0x48);
    *(MethodInfo_37EBBF0 **)((long)__this_02 + 0x48) = pMVar5;
    il2cpp_runtime_helper_022b4080();
    if (change == (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined8 *)((long)__this_02 + 0x88) = 0;
      method_00 = extraout_RDX;
    }
    else {
      local_48.klass = (System_Enum_c *)0x0;
      __this_04 = (System_Nullable_float__Fields)&local_48;
      pMVar5 = MethodInfo_Nullable_1_Single;
      System_Nullable_float____ctor((System_Nullable_float__o)__this_04,debounceSeconds,MethodInfo_Nullable_1_Single);
      *(System_Enum_c **)((long)__this_02 + 0x88) = local_48.klass;
      method_00 = extraout_RDX_00;
    }
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                         (__this,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02,method_00);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(type,debounceSeconds);
  pSVar15 = pSVar16;
  pGVar21 = pGVar20;
  pGVar23 = pGVar13;
  if (g_data_057a9d95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d95 = '\x01';
  }
  pSVar17 = pSVar16;
  if (pSVar16 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar17 = *(System_Action_GisketchActionContext__o **)((long)__this_04 + 0x20);
  }
  pGVar2 = *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_04 + 0x18);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar7,(System_String_o *)pSVar17,pGVar2,(MethodInfo *)pSVar15);
  if (extraout_RDX_01 != 0) {
    (**(code **)(extraout_RDX_01 + 0x18))
              (*(undefined8 *)(extraout_RDX_01 + 0x40),pGVar7,*(undefined8 *)(extraout_RDX_01 + 0x28));
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar6 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "ScrollView";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pSVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pSVar16);
    (pGVar8->fields).style = (System_String_o *)pMVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pMVar5);
    (pGVar8->fields).search = pGVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search);
    (pGVar8->fields).layout = pGVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).layout);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar8->fields).motion;
    (pGVar8->fields).motion = pGVar11;
    il2cpp_runtime_helper_022b4080();
    pGVar18 = pGVar11;
    if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar7->fields)._children;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar18 = pGVar11;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar8->fields).deferredChildren = pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,pGVar9);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,pGVar8,method_02);
        return pGVar6;
      }
    }
  }
  bVar26 = il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar15;
  pGVar22 = pGVar21;
  pGVar13 = pGVar23;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  pSVar17 = pSVar15;
  if (pSVar15 == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar17 = (System_Action_GisketchActionContext__o *)(pGVar6->fields).text;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar6->fields).id;
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar7,(System_String_o *)pSVar17,pGVar2,(MethodInfo *)pSVar16);
  if (extraout_RDX_02 != 0) {
    (**(code **)(extraout_RDX_02 + 0x18))
              (*(undefined8 *)(extraout_RDX_02 + 0x40),pGVar7,*(undefined8 *)(extraout_RDX_02 + 0x28));
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0;
  pGVar8 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).id = (System_String_o *)pSVar15;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pSVar15);
    (pGVar10->fields).style = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style,pGVar18);
    (pGVar10->fields).active = bVar26;
    (pGVar10->fields).enabled.fields.hasValue = in_XMM1_Da;
    (pGVar10->fields).search = pGVar21;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search);
    (pGVar10->fields).layout = pGVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).layout);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar10->fields).motion;
    (pGVar10->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar20;
    il2cpp_runtime_helper_022b4080();
    pGVar19 = pGVar20;
    if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar7->fields)._children;
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar19 = pGVar20;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar10->fields).deferredChildren = pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).deferredChildren,pGVar9);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pGVar10,method_03);
        return pGVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX_03 == 0) {
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX_03 + 0x18);
    pGVar6 = TypeInfo_GisketchStepperStepDefinition;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX_03 + 0x18)) {
      if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar6 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX_03 + 0x20);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar6,(MethodInfo *)method_01);
        }
        goto label_03b63731;
      }
      uVar12 = *(ulong *)(extraout_RDX_03 + 0x18) & 0xffffffff;
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar11->fields).duration;
      uVar25 = 0;
      do {
        if (uVar12 <= uVar25) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX_03 + 0x20 + uVar25 * 8);
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar11->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_01)
          ;
          uVar1 = *(uint *)&(pGVar11->fields).group;
        }
        if (uVar1 <= uVar25) goto label_03b6371e;
        pGVar10->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_01;
        pGVar6 = pGVar10;
        il2cpp_runtime_helper_022b4080();
        uVar25 = uVar25 + 1;
        uVar12 = (ulong)*(uint *)(extraout_RDX_03 + 0x18);
        pSVar16 = (System_Action_GisketchActionContext__o *)(long)(int)*(uint *)(extraout_RDX_03 + 0x18);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar10->monitor;
      } while ((long)uVar25 < (long)pSVar16);
    }
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_01 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar6 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).style = (System_String_o *)pGVar19;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style,pGVar19);
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                         (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,in_stack_fffffffffffffeb8);
    (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar13);
    (pGVar10->fields).exit = pGVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).exit,pGVar11);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pGVar10,method_04)
    ;
    return pGVar6;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX_04;
  if (extraout_RDX_04 == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar6->fields).text;
  }
  pGVar23 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar6->fields).id;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_05 = __this_03;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar23,(MethodInfo *)pSVar16);
  if (method_01 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_05 = (method_01->_1).element_class;
    ownerId = __this_03;
    (*(code *)(method_01->_1).namespaze)(__this_05,__this_03,*(undefined8 *)&(method_01->_1).byval_arg.bits);
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_03->_1).name;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar14 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar14;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar16;
  pGVar20 = pGVar22;
  pGVar24 = pGVar13;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar4 = (System_String_o *)0x0;
  pGVar6 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pSVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pSVar16);
    (pGVar8->fields).sprite = (System_String_o *)ownerId;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).sprite,ownerId);
    (pGVar8->fields).style = extraout_RDX_05;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,extraout_RDX_05);
    (pGVar8->fields).search = pGVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar22);
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion,pGVar13);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar8,method_05);
    return pGVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar15;
  pGVar21 = pGVar20;
  pGVar13 = pGVar24;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite = (System_String_o *)0x0;
  pGVar8 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).id = (System_String_o *)pGVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pGVar20);
    (pGVar10->fields).text = extraout_RDX_06;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).text,extraout_RDX_06);
    (pGVar10->fields).sprite = pSVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).sprite,pSVar4);
    (pGVar10->fields).style = (System_String_o *)pGVar24;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style,pGVar24);
    (pGVar10->fields).action = (System_String_o *)pSVar15;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).action,pSVar15);
    (pGVar10->fields).choiceOptionRenderer = extraout_RDX_06;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).choiceOptionRenderer,extraout_RDX_06);
    (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search);
    (pGVar10->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar23;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).motion);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pGVar10,method_06)
    ;
    return pGVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar8->fields).id;
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (pGVar2,(pGVar8->fields).text,pSVar16,(MethodInfo *)0x0);
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,sprite,label,pSVar4,
                      (System_String_o *)pGVar21,(System_String_o *)pGVar13,pGVar23,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6,in_stack_fffffffffffffd80);
  return pGVar6;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScrollView
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScrollView (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b63120

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScrollView
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,System_Action_AottgUi__o *build,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar9;
  ulong uVar10;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Il2CppClass *__this_02;
  System_Object_array *pSVar12;
  System_String_o *pSVar13;
  System_Action_GisketchActionContext__o *pSVar14;
  System_Action_GisketchActionContext__o *pSVar15;
  MethodInfo *method_01;
  long extraout_RDX;
  MethodInfo *method_02;
  long extraout_RDX_00;
  MethodInfo *method_03;
  Il2CppClass *extraout_RDX_01;
  System_String_o *extraout_RDX_02;
  MethodInfo *method_04;
  System_String_o *extraout_RDX_03;
  MethodInfo *method_05;
  System_String_o *label;
  System_Action_GisketchActionContext__o *ownerId;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar16;
  Il2CppClass *ownerId_00;
  System_String_o *sprite;
  Il2CppClass *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  ulong uVar20;
  bool_conflict bVar21;
  bool_conflict in_XMM1_Da;
  MethodInfo *in_stack_fffffffffffffdd8;
  MethodInfo *in_stack_ffffffffffffff10;
  
  pSVar14 = (System_Action_GisketchActionContext__o *)id;
  pGVar11 = layout;
  pGVar18 = contentLayout;
  if (g_data_057a9d95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d95 = '\x01';
  }
  pSVar13 = id;
  if (id == (System_String_o *)0x0) {
    pSVar13 = (__this->fields)._ownerId;
  }
  pGVar2 = (__this->fields)._actions;
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar4,pSVar13,pGVar2,(MethodInfo *)pSVar14);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,pGVar4,(build->fields).method);
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar7 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).type = "ScrollView";
    il2cpp_runtime_helper_022b4080(&pGVar5->fields);
    (pGVar5->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,id);
    (pGVar5->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style,style);
    (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search);
    (pGVar5->fields).layout = contentLayout;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).layout);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar5->fields).motion;
    (pGVar5->fields).motion = enter;
    il2cpp_runtime_helper_022b4080();
    pGVar9 = enter;
    if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar4->fields)._children;
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar9 = enter;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar5->fields).deferredChildren = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).deferredChildren,pGVar6);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar5,method_01);
        return pGVar7;
      }
    }
  }
  bVar21 = il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar14;
  pGVar17 = pGVar11;
  pGVar19 = pGVar18;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  ownerId = pSVar14;
  if (pSVar14 == (System_Action_GisketchActionContext__o *)0x0) {
    ownerId = (System_Action_GisketchActionContext__o *)(pGVar7->fields).text;
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar7->fields).id;
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(pGVar4,(System_String_o *)ownerId,pGVar2,(MethodInfo *)pSVar15);
  if (extraout_RDX != 0) {
    (**(code **)(extraout_RDX + 0x18))
              (*(undefined8 *)(extraout_RDX + 0x40),pGVar4,*(undefined8 *)(extraout_RDX + 0x28));
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar16 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar5 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pSVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pSVar14);
    (pGVar8->fields).style = (System_String_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pGVar9);
    (pGVar8->fields).active = bVar21;
    (pGVar8->fields).enabled.fields.hasValue = in_XMM1_Da;
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search);
    (pGVar8->fields).layout = pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).layout);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar8->fields).motion;
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080();
    pGVar16 = layout;
    if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (pGVar4->fields)._children;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar16 = layout;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar8->fields).deferredChildren = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,pGVar6);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pGVar8,method_02);
        return pGVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX_00 == 0) {
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX_00 + 0x18);
    pGVar7 = TypeInfo_GisketchStepperStepDefinition;
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX_00 + 0x18)) {
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar7 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX_00 + 0x20);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar7,(MethodInfo *)method_00);
        }
        goto label_03b63731;
      }
      uVar10 = *(ulong *)(extraout_RDX_00 + 0x18) & 0xffffffff;
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar9->fields).duration;
      uVar20 = 0;
      do {
        if (uVar10 <= uVar20) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX_00 + 0x20 + uVar20 * 8);
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar9->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_00)
          ;
          uVar1 = *(uint *)&(pGVar9->fields).group;
        }
        if (uVar1 <= uVar20) goto label_03b6371e;
        pGVar8->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_00;
        pGVar7 = pGVar8;
        il2cpp_runtime_helper_022b4080();
        uVar20 = uVar20 + 1;
        uVar10 = (ulong)*(uint *)(extraout_RDX_00 + 0x18);
        pSVar15 = (System_Action_GisketchActionContext__o *)(long)(int)*(uint *)(extraout_RDX_00 + 0x18);
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar8->monitor;
      } while ((long)uVar20 < (long)pSVar15);
    }
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar7 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar8->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).style = (System_String_o *)pGVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pGVar16);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                         (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,in_stack_ffffffffffffff10);
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar11);
    (pGVar8->fields).exit = pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).exit,pGVar9);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar8,method_03);
    return pGVar7;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId_00 = extraout_RDX_01;
  if (extraout_RDX_01 == (Il2CppClass *)0x0) {
    ownerId_00 = (Il2CppClass *)(pGVar7->fields).text;
  }
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar7->fields).id;
  __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_03 = __this_02;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,(System_String_o *)ownerId_00,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar11,(MethodInfo *)pSVar15);
  if (method_00 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_03 = (method_00->_1).element_class;
    ownerId_00 = __this_02;
    (*(code *)(method_00->_1).namespaze)(__this_03,__this_02,*(undefined8 *)&(method_00->_1).byval_arg.bits);
  }
  if (__this_02 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_02->_1).name;
    __this_03 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar12 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar14 = pSVar15;
  pGVar18 = pGVar17;
  pGVar16 = pGVar19;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar13 = (System_String_o *)0x0;
  pGVar7 = pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar15 = pSVar14;
    pGVar17 = pGVar18;
    pGVar19 = pGVar16;
    if (g_data_057a9d9f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"SpriteButton");
      g_data_057a9d9f = '\x01';
    }
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    sprite = (System_String_o *)0x0;
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar5->fields).id;
      if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar13 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (pGVar2,(pGVar5->fields).text,pSVar15,(MethodInfo *)0x0);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,sprite,label,pSVar13,
                          (System_String_o *)pGVar17,(System_String_o *)pGVar19,pGVar11,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar7,
                          in_stack_fffffffffffffdd8);
      return pGVar7;
    }
    (pGVar8->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pGVar18;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pGVar18);
    (pGVar8->fields).text = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).text,extraout_RDX_03);
    (pGVar8->fields).sprite = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).sprite,pSVar13);
    (pGVar8->fields).style = (System_String_o *)pGVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style,pGVar16);
    (pGVar8->fields).action = (System_String_o *)pSVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).action,pSVar14);
    (pGVar8->fields).choiceOptionRenderer = extraout_RDX_03;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).choiceOptionRenderer,extraout_RDX_03);
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_02;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search);
    (pGVar8->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).motion);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pGVar8,method_05);
    return pGVar7;
  }
  (pGVar5->fields).type = "Image";
  il2cpp_runtime_helper_022b4080(&pGVar5->fields);
  (pGVar5->fields).id = (System_String_o *)pSVar15;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar15);
  (pGVar5->fields).sprite = (System_String_o *)ownerId_00;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).sprite,ownerId_00);
  (pGVar5->fields).style = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).style,extraout_RDX_02);
  (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar17;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar17);
  (pGVar5->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar19;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).motion,pGVar19);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,pGVar5,method_04)
  ;
  return pGVar7;
}


// Gisketch.Aottg2UI.Code.AottgUi$$ScaleBox
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__ScaleBox (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, float referenceWidth, float referenceHeight, System_Action_AottgUi__o* build, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* contentLayout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b632f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,float referenceWidth,
          float referenceHeight,System_Action_AottgUi__o *build,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout_00;
  System_Collections_Generic_List_object__o *__this_02;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  ulong uVar7;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Il2CppClass *__this_04;
  System_Object_array *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *pSVar11;
  System_Action_GisketchActionContext__o *pSVar12;
  System_Action_GisketchActionContext__o *pSVar13;
  MethodInfo *method_01;
  long extraout_RDX;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX_00;
  System_String_o *extraout_RDX_01;
  MethodInfo *method_03;
  System_String_o *extraout_RDX_02;
  MethodInfo *method_04;
  System_String_o *label;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar14;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  Il2CppClass *__this_05;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  ulong uVar18;
  MethodInfo *in_stack_fffffffffffffe30;
  MethodInfo *in_stack_ffffffffffffff68;
  
  pSVar12 = (System_Action_GisketchActionContext__o *)id;
  pGVar8 = layout;
  pGVar16 = contentLayout;
  if (g_data_057a9d96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"ScaleBox");
    g_data_057a9d96 = '\x01';
  }
  pSVar11 = id;
  if (id == (System_String_o *)0x0) {
    pSVar11 = (__this->fields)._ownerId;
  }
  pGVar2 = (__this->fields)._actions;
  __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_03,pSVar11,pGVar2,(MethodInfo *)pSVar12);
  if (build != (System_Action_AottgUi__o *)0x0) {
    (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_03,(build->fields).method);
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  pGVar5 = pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).type = "ScaleBox";
    il2cpp_runtime_helper_022b4080(&pGVar3->fields);
    (pGVar3->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,id);
    (pGVar3->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style,style);
    (pGVar3->fields).active = (bool_conflict)referenceWidth;
    (pGVar3->fields).enabled.fields.hasValue = (bool_conflict)referenceHeight;
    (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search);
    (pGVar3->fields).layout = contentLayout;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).layout);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).motion;
    (pGVar3->fields).motion = enter;
    il2cpp_runtime_helper_022b4080();
    pGVar14 = enter;
    if (__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      __this_00 = (__this_03->fields)._children;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar14 = enter;
      if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition_ToArray);
        (pGVar3->fields).deferredChildren = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).deferredChildren,pGVar4);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar3,method_01);
        return pGVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (extraout_RDX == 0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)*(uint *)(extraout_RDX + 0x18);
    pGVar3 = TypeInfo_GisketchStepperStepDefinition;
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)*(ulong *)(extraout_RDX + 0x18)) {
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar3 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(extraout_RDX + 0x20);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar3,(MethodInfo *)method_00);
        }
        goto label_03b63731;
      }
      uVar7 = *(ulong *)(extraout_RDX + 0x18) & 0xffffffff;
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).duration;
      uVar18 = 0;
      do {
        if (uVar7 <= uVar18) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_01 = *(Gisketch_Aottg2UI_Code_AottgStepperStep_o **)(extraout_RDX + 0x20 + uVar18 * 8);
        if (__this_01 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar6->fields).group;
        }
        else {
          if (__this_01 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_01,(MethodInfo *)method_00)
          ;
          uVar1 = *(uint *)&(pGVar6->fields).group;
        }
        if (uVar1 <= uVar18) goto label_03b6371e;
        pGVar10->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_00;
        pGVar3 = pGVar10;
        il2cpp_runtime_helper_022b4080();
        uVar18 = uVar18 + 1;
        uVar7 = (ulong)*(uint *)(extraout_RDX + 0x18);
        pSVar12 = (System_Action_GisketchActionContext__o *)(long)(int)*(uint *)(extraout_RDX + 0x18);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar10->monitor;
      } while ((long)uVar18 < (long)pSVar12);
    }
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar3 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).style = (System_String_o *)pGVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style,pGVar14);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,in_stack_ffffffffffffff68);
    (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar8);
    (pGVar10->fields).exit = pGVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).exit,pGVar6);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar10,method_02)
    ;
    return pGVar5;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX_00;
  if (extraout_RDX_00 == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar3->fields).text;
  }
  layout_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar3->fields).id;
  __this_04 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_05 = __this_04;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_04,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)layout_00,(MethodInfo *)pSVar12);
  if (method_00 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_05 = (method_00->_1).element_class;
    ownerId = __this_04;
    (*(code *)(method_00->_1).namespaze)(__this_05,__this_04,*(undefined8 *)&(method_00->_1).byval_arg.bits);
  }
  if (__this_04 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_02 = (System_Collections_Generic_List_object__o *)(__this_04->_1).name;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar9 = System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar12;
  pGVar15 = pGVar8;
  pGVar17 = pGVar16;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar11 = (System_String_o *)0x0;
  pGVar5 = pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar12 = pSVar13;
    pGVar8 = pGVar15;
    pGVar16 = pGVar17;
    if (g_data_057a9d9f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"SpriteButton");
      g_data_057a9d9f = '\x01';
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    sprite = (System_String_o *)0x0;
    pGVar3 = pGVar10;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pGVar2 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar3->fields).id;
      if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar11 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (pGVar2,(pGVar3->fields).text,pSVar12,(MethodInfo *)0x0);
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar3,sprite,label,pSVar11,
                          (System_String_o *)pGVar8,(System_String_o *)pGVar16,layout_00,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar5,
                          in_stack_fffffffffffffe30);
      return pGVar5;
    }
    (pGVar10->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).id = (System_String_o *)pGVar15;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pGVar15);
    (pGVar10->fields).text = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).text,extraout_RDX_02);
    (pGVar10->fields).sprite = pSVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).sprite,pSVar11);
    (pGVar10->fields).style = (System_String_o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style,pGVar17);
    (pGVar10->fields).action = (System_String_o *)pSVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).action,pSVar13);
    (pGVar10->fields).choiceOptionRenderer = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).choiceOptionRenderer,extraout_RDX_02);
    (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search);
    (pGVar10->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)layout_00;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).motion);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar10,method_04)
    ;
    return pGVar5;
  }
  (pGVar3->fields).type = "Image";
  il2cpp_runtime_helper_022b4080(&pGVar3->fields);
  (pGVar3->fields).id = (System_String_o *)pSVar12;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar12);
  (pGVar3->fields).sprite = (System_String_o *)ownerId;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).sprite,ownerId);
  (pGVar3->fields).style = extraout_RDX_01;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style,extraout_RDX_01);
  (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar8);
  (pGVar3->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar16;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).motion,pGVar16);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar3,method_03)
  ;
  return pGVar5;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Stepper
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Stepper (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* style, Gisketch_Aottg2UI_Code_AottgStepperStep_array* steps, const MethodInfo* method);
// 0x3b634e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Stepper
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *style,
          Gisketch_Aottg2UI_Code_AottgStepperStep_array *steps,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  ulong uVar3;
  Gisketch_Aottg2UI_Code_AottgStepperStep_c *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Il2CppClass *__this_03;
  System_Object_array *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_04;
  System_String_o *pSVar8;
  System_Action_GisketchActionContext__o *pSVar9;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_01;
  Il2CppClass *extraout_RDX;
  System_String_o *extraout_RDX_00;
  MethodInfo *method_02;
  System_String_o *extraout_RDX_01;
  MethodInfo *method_03;
  System_String_o *label;
  Il2CppClass *ownerId;
  System_String_o *sprite;
  Il2CppClass *__this_05;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *id;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_R9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *style_00;
  ulong uVar11;
  MethodInfo *in_stack_fffffffffffffe88;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9d97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Stepper");
    g_data_057a9d97 = '\x01';
  }
  if (steps == (Gisketch_Aottg2UI_Code_AottgStepperStep_array *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)(ulong)(uint)steps->max_length;
    pGVar7 = TypeInfo_GisketchStepperStepDefinition;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_022b2a40();
    if (0 < (int)steps->max_length) {
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b63723:
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)steps->m_Items[0];
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
                    ((Gisketch_Aottg2UI_Code_AottgStepperStep_o *)pGVar7,(MethodInfo *)method_00);
        }
        goto label_03b63731;
      }
      uVar3 = steps->max_length & 0xffffffff;
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar2->fields).duration;
      uVar11 = 0;
      do {
        if (uVar3 <= uVar11) {
label_03b6371e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b63723;
        }
        __this_00 = steps->m_Items[uVar11];
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) {
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
          uVar1 = *(uint *)&(pGVar2->fields).group;
        }
        else {
          if (__this_00 == (Gisketch_Aottg2UI_Code_AottgStepperStep_o *)0x0) goto label_03b63731;
          method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)
                      Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition(__this_00,(MethodInfo *)method_00)
          ;
          uVar1 = *(uint *)&(pGVar2->fields).group;
        }
        if (uVar1 <= uVar11) goto label_03b6371e;
        pGVar6->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)method_00;
        pGVar7 = pGVar6;
        il2cpp_runtime_helper_022b4080();
        uVar11 = uVar11 + 1;
        uVar1 = (uint)steps->max_length;
        uVar3 = (ulong)uVar1;
        method = (MethodInfo *)(long)(int)uVar1;
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&pGVar6->monitor;
      } while ((long)uVar11 < (long)method);
    }
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  method_00 = (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0;
  pGVar7 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Stepper";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style,style);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,in_stack_ffffffffffffffc0);
    (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
    (pGVar6->fields).exit = pGVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).exit,pGVar2);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar6,method_01);
    return pGVar7;
  }
label_03b63731:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  ownerId = extraout_RDX;
  if (extraout_RDX == (Il2CppClass *)0x0) {
    ownerId = (Il2CppClass *)(pGVar7->fields).text;
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(pGVar7->fields).id;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  __this_05 = __this_03;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_03,(System_String_o *)ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar4,method);
  if (method_00 != (Gisketch_Aottg2UI_Code_AottgStepperStep_c *)0x0) {
    __this_05 = (method_00->_1).element_class;
    ownerId = __this_03;
    (*(code *)(method_00->_1).namespaze)(__this_05,__this_03,*(undefined8 *)&(method_00->_1).byval_arg.bits);
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)(__this_03->_1).name;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar5 = System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = (System_Action_GisketchActionContext__o *)method;
  pGVar10 = in_R8;
  pGVar2 = in_R9;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar8 = (System_String_o *)0x0;
  pGVar7 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    action = pSVar9;
    id = pGVar10;
    style_00 = pGVar2;
    if (g_data_057a9d9f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"SpriteButton");
      g_data_057a9d9f = '\x01';
    }
    __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    sprite = (System_String_o *)0x0;
    pGVar6 = __this_04;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_04,(MethodInfo *)0x0);
    if (__this_04 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_02 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar6->fields).id;
      if (__this_02 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (__this_02,(pGVar6->fields).text,action,(MethodInfo *)0x0);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,sprite,label,pSVar8,(System_String_o *)id
                          ,(System_String_o *)style_00,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar7,
                          in_stack_fffffffffffffe88);
      return pGVar7;
    }
    (__this_04->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&__this_04->fields);
    (__this_04->fields).id = (System_String_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).id,pGVar10);
    (__this_04->fields).text = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).text,extraout_RDX_01);
    (__this_04->fields).sprite = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).sprite,pSVar8);
    (__this_04->fields).style = (System_String_o *)pGVar2;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).style,pGVar2);
    (__this_04->fields).action = (System_String_o *)pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).action,pSVar9);
    (__this_04->fields).choiceOptionRenderer = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).choiceOptionRenderer,extraout_RDX_01);
    (__this_04->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).search);
    (__this_04->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).motion);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,__this_04,method_03);
    return pGVar7;
  }
  (pGVar6->fields).type = "Image";
  il2cpp_runtime_helper_022b4080(&pGVar6->fields);
  (pGVar6->fields).id = (System_String_o *)method;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,method);
  (pGVar6->fields).sprite = (System_String_o *)ownerId;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).sprite,ownerId);
  (pGVar6->fields).style = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style,extraout_RDX_00);
  (pGVar6->fields).search = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,in_R8);
  (pGVar6->fields).motion = in_R9;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).motion,in_R9);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_05,pGVar6,method_02)
  ;
  return pGVar7;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Layout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Layout (System_String_o* direction, System_String_o* justify, System_String_o* alignItems, System_String_o* alignSelf, System_String_o* wrap, float gap, Gisketch_Aottg2UI_Data_GisketchLength_o* width, Gisketch_Aottg2UI_Data_GisketchLength_o* height, Gisketch_Aottg2UI_Data_GisketchLength_o* minWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* minHeight, Gisketch_Aottg2UI_Data_GisketchLength_o* maxWidth, Gisketch_Aottg2UI_Data_GisketchLength_o* maxHeight, float padding, float paddingX, float paddingY, float paddingLeft, float paddingRight, float paddingTop, float paddingBottom, float offsetX, float offsetY, float grow, float shrink, const MethodInfo* method);
// 0x3b5e280

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Layout
          (System_String_o *direction,System_String_o *justify,System_String_o *alignItems,
          System_String_o *alignSelf,System_String_o *wrap,float gap,
          Gisketch_Aottg2UI_Data_GisketchLength_o *width,Gisketch_Aottg2UI_Data_GisketchLength_o *height,
          Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth,Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight
          ,Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth,
          Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight,float padding,float paddingX,float paddingY,
          float paddingLeft,float paddingRight,float paddingTop,float paddingBottom,float offsetX,
          float offsetY,float grow,float shrink,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (g_data_057a9d98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    g_data_057a9d98 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar1->fields).direction = direction;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,direction);
    (pGVar1->fields).justify = justify;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).justify,justify);
    (pGVar1->fields).alignItems = alignItems;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).alignItems,alignItems);
    (pGVar1->fields).alignSelf = alignSelf;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).alignSelf,alignSelf);
    (pGVar1->fields).wrap = wrap;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).wrap,wrap);
    (pGVar1->fields).gap = gap;
    (pGVar1->fields).width = width;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).width);
    (pGVar1->fields).height = height;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).height);
    (pGVar1->fields).minWidth = minWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).minWidth);
    (pGVar1->fields).minHeight = minHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).minHeight);
    (pGVar1->fields).maxWidth = maxWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).maxWidth);
    (pGVar1->fields).maxHeight = maxHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).maxHeight);
    (pGVar1->fields).padding = padding;
    (pGVar1->fields).paddingX = paddingX;
    (pGVar1->fields).paddingY = paddingY;
    (pGVar1->fields).paddingLeft = paddingLeft;
    (pGVar1->fields).paddingRight = paddingRight;
    (pGVar1->fields).paddingTop = paddingTop;
    (pGVar1->fields).paddingBottom = paddingBottom;
    (pGVar1->fields).offsetX = offsetX;
    (pGVar1->fields).offsetY = offsetY;
    (pGVar1->fields).grow = grow;
    (pGVar1->fields).shrink = shrink;
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d5d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d5d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_ffffffffffffff98);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Motion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Motion (System_String_o* preset, System_String_o* group, float duration, float delay, float stagger, int32_t order, const MethodInfo* method);
// 0x3b61b10

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Motion
          (System_String_o *preset,System_String_o *group,float duration,float delay,float stagger,
          int32_t order,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_Action_GisketchActionContext__o *action;
  undefined1 extraout_DL;
  uint extraout_EDX;
  MethodInfo *method_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  System_String_o *in_R8;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_R9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  float __this_02;
  float fVar4;
  float min;
  float value;
  float max;
  MethodInfo *in_stack_ffffffffffffff28;
  undefined1 auStack_84 [12];
  undefined8 uStack_78;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_70;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_68;
  
  fVar4 = delay;
  value = stagger;
  if (g_data_057a9d99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    g_data_057a9d99 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
  pSVar1 = (System_String_o *)0x0;
  pGVar3 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    (__this_00->fields).preset = preset;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,preset);
    (__this_00->fields).group = group;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).group,group);
    (__this_00->fields).duration = duration;
    (__this_00->fields).delay = delay;
    (__this_00->fields).stagger = stagger;
    (__this_00->fields).order = order;
    return __this_00;
  }
  auStack_84._0_4_ = il2cpp_runtime_helper_022b2c90();
  action = (System_Action_GisketchActionContext__o *)method;
  style = in_R8;
  enter = in_R9;
  min = fVar4;
  max = value;
  pGStack_68 = __this_00;
  if (g_data_057a9d7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&"Slider");
    g_data_057a9d7c = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id = (System_String_o *)0x0;
  pGVar2 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "Slider";
    pGStack_70 = pGVar3;
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,pSVar1);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_3cccf70
                       (__this_02,(System_IFormatProvider_o *)auStack_84,(MethodInfo *)method_00);
    (__this_01->fields).value = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).value,pSVar1);
    uStack_78 = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)&uStack_78,fVar4,MethodInfo_Nullable_1_Single);
    *(undefined8 *)&(__this_01->fields).enabled.fields.value = uStack_78;
    auStack_84._4_8_ = 0;
    System_Nullable_float____ctor((System_Nullable_float__o)((long)auStack_84 + 4),value,MethodInfo_Nullable_1_Single);
    (__this_01->fields).referenceHeight = (float)auStack_84._4_4_;
    (__this_01->fields).min.fields.hasValue = auStack_84._8_4_;
    *(undefined1 *)&(__this_01->fields).debounceSeconds.fields.value = extraout_DL;
    (__this_01->fields).action = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action,method);
    (__this_01->fields).style = in_R8;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,in_R8);
    (__this_01->fields).motion = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion,in_R9);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_70,__this_01,method_01);
    return (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar2;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar2->fields).id;
  if (__this == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar1 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this,(pGVar2->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,id,fVar4,extraout_EDX & 0xff,pSVar1,style,min
                      ,max,enter,in_stack_ffffffffffffff28);
  return (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Points
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Points (float value, const MethodInfo* method);
// 0x3b5e1f0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Points(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_String_o *in_RCX;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *unaff_RBX;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  float fVar4;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM6_Da;
  float in_XMM7_Da;
  Gisketch_Aottg2UI_Data_GisketchLength_o *unaff_retaddr;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_00000008;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  MethodInfo *in_stack_ffffffffffffff80;
  undefined4 uStack_10;
  
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pSVar2 = (System_String_o *)0x0;
  pGVar3 = __this;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "point";
    il2cpp_runtime_helper_022b4080(&(__this->fields).unit);
    return __this;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    g_data_057a9d98 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar1->fields).direction = (System_String_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,pGVar3);
    (pGVar1->fields).justify = pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).justify,pSVar2);
    (pGVar1->fields).alignItems = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).alignItems,extraout_RDX);
    (pGVar1->fields).alignSelf = in_RCX;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).alignSelf,in_RCX);
    (pGVar1->fields).wrap = in_R8;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).wrap,in_R8);
    (pGVar1->fields).gap = fVar4;
    (pGVar1->fields).width = in_R9;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).width);
    (pGVar1->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)CONCAT44(value,uStack_10);
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).height);
    (pGVar1->fields).minWidth = unaff_RBX;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).minWidth);
    (pGVar1->fields).minHeight = unaff_retaddr;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).minHeight);
    (pGVar1->fields).maxWidth = in_stack_00000008;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).maxWidth);
    (pGVar1->fields).maxHeight = in_stack_00000010;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).maxHeight);
    (pGVar1->fields).padding = in_XMM1_Da;
    (pGVar1->fields).paddingX = in_XMM2_Da;
    (pGVar1->fields).paddingY = in_XMM3_Da;
    (pGVar1->fields).paddingLeft = in_XMM4_Da;
    (pGVar1->fields).paddingRight = in_XMM5_Da;
    (pGVar1->fields).paddingTop = in_XMM6_Da;
    (pGVar1->fields).paddingBottom = in_XMM7_Da;
    (pGVar1->fields).offsetX = in_stack_00000018;
    (pGVar1->fields).offsetY = in_stack_00000020;
    (pGVar1->fields).grow = in_stack_00000028;
    (pGVar1->fields).shrink = in_stack_00000030;
    return (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d5d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d5d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_ffffffffffffff80);
  return (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Percent
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Code_AottgUi__Percent (float value, const MethodInfo* method);
// 0x3b5fa80

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Code_AottgUi__Percent(float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  
  if (g_data_057a9d9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"percent");
    g_data_057a9d9b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  __this_00 = __this;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this->fields).value = value;
    (__this->fields).unit = "percent";
    il2cpp_runtime_helper_022b4080(&(__this->fields).unit);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgUi$$VariantStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgUi__VariantStyle (int32_t variant, const MethodInfo* method);
// 0x3b62630

System_String_o * Gisketch_Aottg2UI_Code_AottgUi__VariantStyle(int32_t variant,MethodInfo *method)

{
  if (g_data_057a9d9c == '\0') {
    il2cpp_runtime_helper_023445d0(&"buttonSecondary");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"buttonPlain");
    il2cpp_runtime_helper_023445d0(&"buttonWorkshop");
    il2cpp_runtime_helper_023445d0(&"buttonDanger");
    il2cpp_runtime_helper_023445d0(&"buttonNegative");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9d9c = '\x01';
  }
  if (variant - 1U < 6) {
    return *(System_String_o **)(&g_data_05215100)[(int)(variant - 1U)];
  }
  return "buttonPrimary";
}


// Gisketch.Aottg2UI.Code.AottgUi$$BuildDetached
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgUi__BuildDetached (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_Action_AottgUi__o* build, System_String_o* ownerId, const MethodInfo* method);
// 0x3b63740

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_Action_AottgUi__o *build,System_String_o *ownerId,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  System_Action_GisketchActionContext__o *action;
  System_String_o *extraout_RDX;
  MethodInfo *method_00;
  System_String_o *extraout_RDX_00;
  MethodInfo *method_01;
  System_String_o *label;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *in_R9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *style;
  MethodInfo *in_stack_ffffffffffffff10;
  
  if (g_data_057a9d9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    g_data_057a9d9d = '\x01';
  }
  if (ownerId == (System_String_o *)0x0) {
    ownerId = (__this->fields)._ownerId;
  }
  layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)(__this->fields)._actions;
  __this_02 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  pGVar5 = __this_02;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,ownerId,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)layout,method);
  if (build != (System_Action_AottgUi__o *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)(build->fields).method_code;
    ownerId = (System_String_o *)__this_02;
    (*(code *)(build->fields).invoke_impl)(pGVar5,__this_02,(build->fields).method);
  }
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    if (g_data_057a9d8f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
      g_data_057a9d8f = '\x01';
    }
    __this_00 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(__this_02->fields).title;
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition_ToArray);
      return pGVar1;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (System_Action_GisketchActionContext__o *)method;
  pGVar6 = in_R8;
  pGVar7 = in_R9;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar3 = (System_String_o *)0x0;
  enter = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar2->fields);
    (pGVar2->fields).id = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,method);
    (pGVar2->fields).sprite = ownerId;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).sprite,ownerId);
    (pGVar2->fields).style = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).style,extraout_RDX);
    (pGVar2->fields).search = in_R8;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,in_R8);
    (pGVar2->fields).motion = in_R9;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).motion,in_R9);
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pGVar2,method_00);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  action = pSVar4;
  pGVar5 = pGVar6;
  style = pGVar7;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite = (System_String_o *)0x0;
  pGVar2 = __this_03;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_03->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&__this_03->fields);
    (__this_03->fields).id = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).id,pGVar6);
    (__this_03->fields).text = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).text,extraout_RDX_00);
    (__this_03->fields).sprite = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).sprite,pSVar3);
    (__this_03->fields).style = (System_String_o *)pGVar7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).style,pGVar7);
    (__this_03->fields).action = (System_String_o *)pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).action,pSVar4);
    (__this_03->fields).choiceOptionRenderer = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).choiceOptionRenderer,extraout_RDX_00);
    (__this_03->fields).search = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).search);
    (__this_03->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).motion);
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)enter,__this_03,method_01);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar2->fields).id;
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_01,(pGVar2->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
           Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,sprite,label,pSVar3,(System_String_o *)pGVar5
                      ,(System_String_o *)style,layout,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)enter,in_stack_ffffffffffffff10);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Image
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Image (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* style, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b63800

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Image
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *style,
          System_String_o *id,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  System_String_o *label;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *unaff_RBX;
  System_String_o *sprite_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *style_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *unaff_R12;
  MethodInfo *in_stack_ffffffffffffff38;
  
  pSVar4 = (System_Action_GisketchActionContext__o *)id;
  pGVar5 = layout;
  pGVar6 = enter;
  if (g_data_057a9d9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057a9d9e = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar3 = (System_String_o *)0x0;
  pGVar2 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    (pGVar1->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,id);
    (pGVar1->fields).sprite = sprite;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).sprite,sprite);
    (pGVar1->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).style,style);
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,layout);
    (pGVar1->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).motion,enter);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,pGVar1,method_00);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  action = pSVar4;
  id_00 = pGVar5;
  style_00 = pGVar6;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite_00 = (System_String_o *)0x0;
  pGVar1 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = (System_String_o *)pGVar5;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,pGVar5);
    (__this_01->fields).text = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,extraout_RDX);
    (__this_01->fields).sprite = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).sprite,pSVar3);
    (__this_01->fields).style = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,pGVar6);
    (__this_01->fields).action = (System_String_o *)pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action,pSVar4);
    (__this_01->fields).choiceOptionRenderer = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer,extraout_RDX);
    (__this_01->fields).search = unaff_RBX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).search);
    (__this_01->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)unaff_R12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Add
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,__this_01,method_01);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar1->fields).id;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                       (__this_00,(pGVar1->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar1,sprite_00,label,pSVar3,
                      (System_String_o *)id_00,(System_String_o *)style_00,unaff_R12,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar2,in_stack_ffffffffffffff38);
  return pGVar2;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b63900

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_String_o *actionId,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *actionId_00;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_00;
  System_String_o *label_00;
  System_String_o *sprite_00;
  System_String_o *id_00;
  System_String_o *style_00;
  MethodInfo *in_stack_ffffffffffffff70;
  
  action = (System_Action_GisketchActionContext__o *)actionId;
  id_00 = id;
  style_00 = style;
  if (g_data_057a9d9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SpriteButton");
    g_data_057a9d9f = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  sprite_00 = (System_String_o *)0x0;
  pGVar1 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_01->fields).type = "SpriteButton";
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    (__this_01->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).id,id);
    (__this_01->fields).text = label;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).text,label);
    (__this_01->fields).sprite = sprite;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).sprite,sprite);
    (__this_01->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).style,style);
    (__this_01->fields).action = actionId;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).action,actionId);
    (__this_01->fields).choiceOptionRenderer = label;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).choiceOptionRenderer,label);
    (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).search);
    (__this_01->fields).motion = enter;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).motion);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_01,method_00);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar1->fields).id;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId_00 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId_00 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (__this_00,(pGVar1->fields).text,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar1,sprite_00,label_00,actionId_00,id_00,style_00
                      ,(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)enter,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)__this,in_stack_ffffffffffffff70);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SpriteButton (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* sprite, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, const MethodInfo* method);
// 0x3b63a60

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SpriteButton_3a63a60
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *sprite,System_String_o *label,
          System_Action_GisketchActionContext__o *action,System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  __this_00 = (__this->fields)._actions;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (__this,sprite,label,actionId,id,style,layout,enter,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgUi$$SearchPalette
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__SearchPalette (Gisketch_Aottg2UI_Code_AottgUi_o* __this, System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x3b614b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
          (Gisketch_Aottg2UI_Code_AottgUi_o *__this,System_String_o *id,System_String_o *placeholder,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  MethodInfo *method_00;
  
  if (g_data_057a9da0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"SearchPalette");
    il2cpp_runtime_helper_023445d0(&"searchPalette");
    g_data_057a9da0 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar1 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "SearchPalette";
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,id);
    (__this_00->fields).placeholder = placeholder;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).placeholder,placeholder);
    (__this_00->fields).style = "searchPalette";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Add(__this,__this_00,method_00);
    return pGVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgUi$$Search
// il2cpp: Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o* Gisketch_Aottg2UI_Code_AottgUi__Search (System_String_o* title, System_String_o* keywords, bool hidden, System_String_o* icon, System_String_o* kind, System_String_o* sectionId, System_String_o* sectionTitle, bool autoAddKeywords, const MethodInfo* method);
// 0x3b63ae0

Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *
Gisketch_Aottg2UI_Code_AottgUi__Search
          (System_String_o *title,System_String_o *keywords,bool_conflict hidden,System_String_o *icon,
          System_String_o *kind,System_String_o *sectionId,System_String_o *sectionTitle,
          bool_conflict autoAddKeywords,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this;
  System_String_o *style;
  System_String_o *id;
  MethodInfo *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Il2CppClass *pIVar4;
  System_String_o *pSVar5;
  System_String_o *keywords_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar6;
  MethodInfo *pMVar7;
  System_String_o *pSVar8;
  MethodInfo *sectionId_00;
  MethodInfo *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff48;
  uint in_stack_ffffffffffffff50;
  MethodInfo *in_stack_ffffffffffffff88;
  
  pSVar5 = icon;
  pSVar8 = kind;
  sectionId_00 = (MethodInfo *)sectionId;
  if (g_data_057a9da1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    g_data_057a9da1 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = __this;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    (__this->fields).title = title;
    il2cpp_runtime_helper_022b4080(&__this->fields,title);
    (__this->fields).keywords = keywords;
    il2cpp_runtime_helper_022b4080(&(__this->fields).keywords,keywords);
    *(char *)((long)&(__this->fields).autoAddKeywords + 1) = (char)hidden;
    (__this->fields).icon = icon;
    il2cpp_runtime_helper_022b4080(&(__this->fields).icon,icon);
    (__this->fields).kind = kind;
    il2cpp_runtime_helper_022b4080(&(__this->fields).kind,kind);
    (__this->fields).sectionId = sectionId;
    il2cpp_runtime_helper_022b4080(&(__this->fields).sectionId,sectionId);
    (__this->fields).sectionTitle = sectionTitle;
    il2cpp_runtime_helper_022b4080(&(__this->fields).sectionTitle);
    *(undefined1 *)&(__this->fields).autoAddKeywords = (undefined1)autoAddKeywords;
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9da2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-border");
    il2cpp_runtime_helper_023445d0(&"calloutBorder");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"calloutText");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057a9da2 = '\x01';
  }
  id = (System_String_o *)0x0;
  style = System_String__Concat_3ae5ba0("calloutBorder",(pGVar6->fields).title,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((pGVar6->fields).keywords,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    id = System_String__Concat_3ae5ba0((pGVar6->fields).keywords,"-border",(MethodInfo *)0x0);
  }
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pSVar2 = (System_String_o *)0x0;
  pMVar7 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MethodInfo *)0x0) {
    *(float *)&((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *)&__this_00->invoker_method)->title =
         7.0;
    __this_00->name = (char *)"point";
    il2cpp_runtime_helper_022b4080(&__this_00->name);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar2 = (System_String_o *)0x0;
    pMVar7 = method_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      *(float *)&((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *)&method_00->invoker_method)->title
           = 100.0;
      method_00->name = (char *)"percent";
      il2cpp_runtime_helper_022b4080(&method_00->name);
      in_stack_ffffffffffffff48 = (System_String_o *)0x0;
      in_stack_ffffffffffffff50 = 0;
      pSVar2 = (System_String_o *)0x0;
      pSVar5 = (System_String_o *)0x0;
      pSVar8 = (System_String_o *)0x0;
      pMVar7 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffff88);
      sectionId_00 = __this_00;
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pSVar2 = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (__this_01,style,(System_Action_AottgUi__o *)0x0,id,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        pSVar5 = (pGVar6->fields).icon;
        bVar1 = System_String__IsNullOrEmpty((pGVar6->fields).keywords,(MethodInfo *)0x0);
        pSVar8 = "calloutText";
        if ((char)bVar1 == '\0') {
          pSVar2 = System_String__Concat_3ae5ba0((pGVar6->fields).keywords,"-text",(MethodInfo *)0x0);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (__this_01,pSVar5,pSVar8,pSVar2,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_00);
        return (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar7 != (MethodInfo *)0x0) {
    pIVar4 = (Il2CppClass *)
             Gisketch_Aottg2UI_Code_AottgUi__Search
                       (pSVar2,keywords_00,0,pSVar5,pSVar8,(System_String_o *)sectionId_00,
                        in_stack_ffffffffffffff48,in_stack_ffffffffffffff50 & 0xff,in_stack_ffffffffffffff28);
    pMVar7[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(&pMVar7[2].klass,pIVar4);
  }
  return (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pMVar7;
}


