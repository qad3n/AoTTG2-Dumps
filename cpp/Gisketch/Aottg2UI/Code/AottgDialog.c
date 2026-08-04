// Type: Gisketch.Aottg2UI.Code.AottgDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_Title (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5dfa0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_Title(Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_TitleIcon (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5dfc0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_RootStyle (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5dfd0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d58 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialog");
    g_data_057a9d58 = '\x01';
  }
  return "dialog";
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderStyle (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e000

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderStyle
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d59 == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogHeader");
    g_data_057a9d59 = '\x01';
  }
  return "dialogHeader";
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_BodyStyle (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e030

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d5a == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogBody");
    g_data_057a9d5a = '\x01';
  }
  return "dialogBody";
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_FooterStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_FooterStyle (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e060

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_FooterStyle
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  if (g_data_057a9d5b == '\0') {
    il2cpp_runtime_helper_023445d0(&"dialogFooter");
    g_data_057a9d5b = '\x01';
  }
  return "dialogFooter";
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderCloseEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderCloseEnabledKey (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e090

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderCloseEnabledKey
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e0a0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgDialog__get_BodyScrollable (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e0b0

bool_conflict
Gisketch_Aottg2UI_Code_AottgDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Code_AottgDialog__get_Variant (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e0c0

int32_t Gisketch_Aottg2UI_Code_AottgDialog__get_Variant
                  (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__get_RootLayout (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e0d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o *in_RCX;
  System_String_o *extraout_RDX;
  System_String_o *pSVar3;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  float fVar4;
  float fVar5;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM6_Da;
  float in_XMM7_Da;
  MethodInfo *in_stack_ffffffffffffff28;
  undefined4 uStack_68;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffffa8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffffb0;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_stack_ffffffffffffffb8;
  float in_stack_ffffffffffffffc0;
  float in_stack_ffffffffffffffc8;
  float in_stack_ffffffffffffffd0;
  float in_stack_ffffffffffffffd8;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (g_data_057a9d5c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d5c = '\x01';
  }
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 620.0;
    (__this_00->fields).unit = "point";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).unit);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,__this_00,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,in_stack_fffffffffffffff0);
    return pGVar1;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pSVar3 = (System_String_o *)0x0;
  pGVar1 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    *(float *)&(pGVar2->fields).direction = fVar4;
    (pGVar2->fields).justify = "point";
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).justify);
    return pGVar2;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    g_data_057a9d98 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar2->fields).direction = (System_String_o *)pGVar1;
    il2cpp_runtime_helper_022b4080(&pGVar2->fields,pGVar1);
    (pGVar2->fields).justify = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).justify,pSVar3);
    (pGVar2->fields).alignItems = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignItems,extraout_RDX);
    (pGVar2->fields).alignSelf = in_RCX;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignSelf,in_RCX);
    (pGVar2->fields).wrap = in_R8;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).wrap,in_R8);
    (pGVar2->fields).gap = fVar5;
    (pGVar2->fields).width = in_R9;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).width);
    (pGVar2->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)CONCAT44(fVar4,uStack_68);
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).height);
    (pGVar2->fields).minWidth = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).minWidth);
    (pGVar2->fields).minHeight = in_stack_ffffffffffffffa8;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).minHeight);
    (pGVar2->fields).maxWidth = in_stack_ffffffffffffffb0;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).maxWidth);
    (pGVar2->fields).maxHeight = in_stack_ffffffffffffffb8;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).maxHeight);
    (pGVar2->fields).padding = in_XMM1_Da;
    (pGVar2->fields).paddingX = in_XMM2_Da;
    (pGVar2->fields).paddingY = in_XMM3_Da;
    (pGVar2->fields).paddingLeft = in_XMM4_Da;
    (pGVar2->fields).paddingRight = in_XMM5_Da;
    (pGVar2->fields).paddingTop = in_XMM6_Da;
    (pGVar2->fields).paddingBottom = in_XMM7_Da;
    (pGVar2->fields).offsetX = in_stack_ffffffffffffffc0;
    (pGVar2->fields).offsetY = in_stack_ffffffffffffffc8;
    (pGVar2->fields).grow = in_stack_ffffffffffffffd0;
    (pGVar2->fields).shrink = in_stack_ffffffffffffffd8;
    return pGVar2;
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
                      1.0,in_stack_ffffffffffffff28);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_HeaderLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderLayout (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e4a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_HeaderLayout
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
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
                      1.0,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__get_BodyLayout (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e560

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (g_data_057a9d5e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d5e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$get_FooterLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__get_FooterLayout (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5e620

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__get_FooterLayout
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (g_data_057a9d5f == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057a9d5f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__BuildHeader (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x3b5e6f0

void Gisketch_Aottg2UI_Code_AottgDialog__BuildHeader
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *header,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  int32_t variant;
  System_String_o *pSVar2;
  System_String_o *title;
  System_String_o *closeEnabledKey;
  System_String_o *titleKey;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  undefined **ppuVar3;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_01;
  uint uVar4;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (g_data_057a9d60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogHeader);
    g_data_057a9d60 = '\x01';
    method = extraout_RDX;
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_Title.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_Title.method,method);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    title = (System_String_o *)
            (*(__this->klass->vtable)._4_get_Title.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_Title.method);
    variant = (*(__this->klass->vtable)._13_get_Variant.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_Variant.method);
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._5_get_TitleIcon.methodPtr)
                       (__this,(__this->klass->vtable)._5_get_TitleIcon.method);
    closeEnabledKey =
         (System_String_o *)
         (*(__this->klass->vtable)._10_get_HeaderCloseEnabledKey.methodPtr)
                   (__this,(__this->klass->vtable)._10_get_HeaderCloseEnabledKey.method);
    titleKey = (System_String_o *)
               (*(__this->klass->vtable)._11_get_HeaderTitleKey.methodPtr)
                         (__this,(__this->klass->vtable)._11_get_HeaderTitleKey.method);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogHeader);
    __this_01 = __this_00;
    Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
              (__this_00,title,variant,pSVar2,closeEnabledKey,titleKey,in_stack_ffffffffffffffb8);
    if (header == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields)._title = title;
      il2cpp_runtime_helper_022b4080(&__this_01->fields,title);
      (__this_01->fields)._variant = extraout_EDX;
      if (pSVar2 == (System_String_o *)0x0) {
        if (g_data_057a9d6a == '\0') {
          il2cpp_runtime_helper_023445d0(&"warning");
          il2cpp_runtime_helper_023445d0(&"question");
          il2cpp_runtime_helper_023445d0(&"exclamation");
          il2cpp_runtime_helper_023445d0(&"information");
          g_data_057a9d6a = '\x01';
        }
        uVar4 = extraout_EDX - 1;
        if ((uVar4 < 6) && ((0x33U >> (uVar4 & 0x1f) & 1) != 0)) {
          ppuVar3 = &g_data_05215070 + (int)uVar4;
        }
        else {
          ppuVar3 = (undefined **)(g_data_057b9c00 + 0xb8);
        }
        pSVar2 = *(System_String_o **)*ppuVar3;
      }
      (__this_01->fields)._icon = pSVar2;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._icon,pSVar2);
      (__this_01->fields)._closeEnabledKey = closeEnabledKey;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._closeEnabledKey,closeEnabledKey);
      (__this_01->fields)._titleKey = titleKey;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._titleKey,titleKey);
      return;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgDialogHeader_o *)0x0) {
      vtableDispatch = (__this_00->klass->vtable)._4_Build.methodPtr;
      (*vtableDispatch)
                (__this_00,header,(__this_00->klass->vtable)._4_Build.method,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__BuildBody (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x3b5e960

void Gisketch_Aottg2UI_Code_AottgDialog__BuildBody
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__BuildFooter (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x3b5e970

void Gisketch_Aottg2UI_Code_AottgDialog__BuildFooter
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* attribute, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5e980

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *attribute,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppArrayBounds *pIVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  undefined1 uVar8;
  char cVar9;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *style_00;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *extraout_RAX_00;
  System_String_Fields __this_00;
  Il2CppClass *method_00;
  Il2CppClass *style_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *style_02;
  System_String_o *str0;
  System_String_o *str0_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  MethodInfo *pMVar22;
  System_Action_AottgUi__o *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *in_R9;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)actions;
  if (g_data_057a9d61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057a9d61 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  pSVar11 = System_String__Concat_3ae5ba0(id,"-header",(MethodInfo *)0x0);
  style = (System_String_o *)
          (*(__this->klass->vtable)._7_get_HeaderStyle.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_HeaderStyle.method);
  pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            (__this->klass->vtable)._15_get_HeaderLayout.method;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            (*(__this->klass->vtable)._15_get_HeaderLayout.methodPtr)(__this);
  pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                      ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar12,(MethodInfo *)pGVar16);
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar13->fields).shrink = 0.0;
    method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    in_R9 = actions;
    Gisketch_Aottg2UI_Code_AottgDialog__AddSection
              (pSVar10,pSVar11,style,pGVar13,(System_Action_AottgUi__o *)method,actions,
               in_stack_ffffffffffffffa8);
    Gisketch_Aottg2UI_Code_AottgDialog__AddBody(__this,pSVar10,id,actions,method);
    Gisketch_Aottg2UI_Code_AottgDialog__AddFooter(__this,pSVar10,id,actions,method);
    pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchOverlayDefinition);
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pGVar12 = pGVar14;
    Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pGVar14,(MethodInfo *)0x0);
    pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)actions;
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar14->fields).type = id;
      il2cpp_runtime_helper_022b4080(&pGVar14->fields,id);
      pSVar11 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_Title.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_Title.method);
      (pGVar14->fields).id = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar14->fields).id);
      if (attribute == (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x0) {
        *(undefined1 *)&(pGVar14->fields).text = 1;
        uVar8 = 1;
      }
      else {
        *(char *)&(pGVar14->fields).text = (char)(attribute->fields)._Modal_k__BackingField;
        uVar8 = *(undefined1 *)((long)&(attribute->fields)._Modal_k__BackingField + 1);
      }
      *(undefined1 *)((long)&(pGVar14->fields).text + 1) = uVar8;
      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pGVar12 = pGVar15;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar15,(MethodInfo *)0x0);
      pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)attribute;
      if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar15->fields).type = "Panel";
        il2cpp_runtime_helper_022b4080(&pGVar15->fields);
        (pGVar15->fields).id = id;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).id,id);
        pSVar11 = (System_String_o *)
                  (*(__this->klass->vtable)._6_get_RootStyle.methodPtr)
                            (__this,(__this->klass->vtable)._6_get_RootStyle.method);
        (pGVar15->fields).style = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).style,pSVar11);
        pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (*(__this->klass->vtable)._14_get_RootLayout.methodPtr)
                            (__this,(__this->klass->vtable)._14_get_RootLayout.method);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar15->fields).search;
        (pGVar15->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar16;
        il2cpp_runtime_helper_022b4080();
        pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)attribute;
        if (pSVar10 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_GisketchNodeDefinition_ToArray);
          (pGVar15->fields).deferredChildren = pGVar17;
          il2cpp_runtime_helper_022b4080(&(pGVar15->fields).deferredChildren,pGVar17);
          (pGVar14->fields).inputType = (System_String_o *)pGVar15;
          il2cpp_runtime_helper_022b4080(&(pGVar14->fields).inputType,pGVar15);
          return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pGVar14;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                      ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar12,(MethodInfo *)pGVar16);
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar13->fields).shrink = 0.0;
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pGVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = pGVar21;
  method_01 = (System_Action_AottgUi__o *)method;
  if (g_data_057a9d62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057a9d62 = '\x01';
  }
  pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  pGVar15 = pGVar16;
  pGVar14 = pGVar18;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar18,(System_String_o *)pGVar16,in_R9,
             (MethodInfo *)pGVar13);
  if ((System_Action_AottgUi__o *)method != (System_Action_AottgUi__o *)0x0) {
    pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              (((System_Action_AottgUi__o *)method)->fields).method_code;
    pGVar15 = pGVar18;
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
              (*(code *)(((System_Action_AottgUi__o *)method)->fields).invoke_impl)
                        (pGVar14,pGVar18,(((System_Action_AottgUi__o *)method)->fields).method);
    if (pGVar18 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if (g_data_057a9d8e == '\0') {
        pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057a9d8e = '\x01';
      }
      pSVar10 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar18->fields).type;
      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (pSVar10 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        if ((pSVar10->fields)._size < 1) {
          return pGVar19;
        }
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
          pSVar10 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar18->fields).type;
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          if (pSVar10 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_03b5ee1e;
        }
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar15 = style_02;
        pGVar18 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                            ((System_String_o *)pGVar16,(System_String_o *)style_02,pGVar17,pGVar21,
                             (MethodInfo *)method_01);
        pGVar7 = MethodInfo_Void_Add;
        pGVar13 = pGVar21;
        pGVar14 = pGVar16;
        if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          piVar1 = (int *)((long)&(pGVar12->fields).id + 4);
          *piVar1 = *piVar1 + 1;
          pSVar11 = (pGVar12->fields).type;
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          if (pSVar11 != (System_String_o *)0x0) {
            uVar2 = *(uint *)&(pGVar12->fields).id;
            if (uVar2 < *(uint *)&pSVar11[1].klass) {
              *(uint *)&(pGVar12->fields).id = uVar2 + 1;
              (&pSVar11[1].monitor)[(int)uVar2] = pGVar18;
              pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
                        il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor + (int)uVar2,pGVar18);
              return pGVar19;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pGVar12,(Il2CppObject *)pGVar18,
                       (((pGVar7->fields).alignItems[8].klass)->_1).interopData);
            return extraout_RAX;
          }
        }
      }
    }
  }
label_03b5ee1e:
  il2cpp_runtime_helper_022b2c90();
  pGVar21 = pGVar13;
  if (g_data_057a9d64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-body");
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d64 = '\x01';
  }
  pSVar11 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
  pGVar20 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar20,pSVar11,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar13,(MethodInfo *)pGVar21);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass;
  uVar4._0_4_ = pGVar3[1]._2.instance_size;
  uVar4._4_4_ = pGVar3[1]._2.actualSize;
  pGVar17 = pGVar20;
  pGVar12 = pGVar14;
  (*pGVar3[1]._2.genericContainerHandle)(pGVar14,pGVar20,uVar4);
  if (pGVar20 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pGVar20->bounds;
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      if (*(int *)&(pGVar19->fields).title < 1) {
        return pGVar19;
      }
      cVar9 = (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._1.fields)(pGVar14);
      if (cVar9 == '\0') {
        pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._1.castClass;
        style_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._1.element_class)
                             (pGVar14);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar20->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar20->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pMVar22 = (MethodInfo *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._2.typeHierarchy;
        pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1].rgctx_data)(pGVar14);
        pGVar21 = Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout(pGVar21,pMVar22);
        pGVar18 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                            ((System_String_o *)pGVar16,(System_String_o *)style_00,pGVar17,pGVar21,
                             (MethodInfo *)method_01);
        pGVar17 = style_00;
        pGVar12 = pGVar16;
        pGVar13 = MethodInfo_Void_Add;
      }
      else {
        pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        pGVar12 = pGVar18;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar18,(MethodInfo *)0x0);
        if (pGVar18 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b5f17e;
        (pGVar18->fields).type = "ScrollView";
        il2cpp_runtime_helper_022b4080(&pGVar18->fields);
        pSVar11 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        (pGVar18->fields).id = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar18->fields).id,pSVar11);
        pSVar11 = (System_String_o *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._1.element_class)
                            (pGVar14,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._1.castClass);
        pMVar22 = (MethodInfo *)&(pGVar18->fields).style;
        (pGVar18->fields).style = pSVar11;
        il2cpp_runtime_helper_022b4080(pMVar22,pSVar11);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout(pMVar22);
        (pGVar18->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
        il2cpp_runtime_helper_022b4080(&(pGVar18->fields).search,pGVar13);
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1].rgctx_data)
                            (pGVar14,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar14->klass)[1]._2.typeHierarchy)
        ;
        (pGVar18->fields).layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar17;
        il2cpp_runtime_helper_022b4080(&(pGVar18->fields).layout);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar20->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar20->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar18->fields).deferredChildren;
        (pGVar18->fields).deferredChildren = pGVar17;
        il2cpp_runtime_helper_022b4080();
        pGVar13 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = pGVar13;
      if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        piVar1 = (int *)((long)&(pGVar15->fields).id + 4);
        *piVar1 = *piVar1 + 1;
        pSVar11 = (pGVar15->fields).type;
        pGVar21 = pGVar13;
        if (pSVar11 != (System_String_o *)0x0) {
          uVar2 = *(uint *)&(pGVar15->fields).id;
          if (uVar2 < *(uint *)&pSVar11[1].klass) {
            *(uint *)&(pGVar15->fields).id = uVar2 + 1;
            (&pSVar11[1].monitor)[(int)uVar2] = pGVar18;
            pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
                      il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor + (int)uVar2,pGVar18);
            return pGVar19;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pGVar15,(Il2CppObject *)pGVar18,
                     (((pGVar13->fields).alignItems[8].klass)->_1).interopData);
          return extraout_RAX_00;
        }
      }
    }
  }
label_03b5f17e:
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = pGVar21;
  if (g_data_057a9d63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogFooter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-footer");
    g_data_057a9d63 = '\x01';
  }
  pSVar11 = System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
  __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,pSVar11,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar21,(MethodInfo *)pGVar13);
  method_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogFooter);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  *(System_String_Fields *)&(method_00->_1).name = __this_00;
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&(method_00->_1).name,__this_00);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar12->klass;
  uVar5._0_4_ = pGVar3[1]._2.static_fields_size;
  uVar5._4_4_ = pGVar3[1]._2.thread_static_fields_size;
  pGVar16 = pGVar12;
  (**(code **)&pGVar3[1]._2.element_size)(pGVar12,method_00,uVar5);
  if (__this_00 != (System_String_Fields)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pGVar19 = *(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o **)((long)__this_00 + 0x10);
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      if (*(int *)&(pGVar19->fields).title < 1) {
        return pGVar19;
      }
      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
      method_00 = ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar12->klass)[1]._1.parent;
      style_01 = (Il2CppClass *)
                 (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar12->klass)[1]._1.declaringType)(pGVar12);
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        pGVar20 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10),
                             MethodInfo_GisketchNodeDefinition_ToArray);
        method_00 = *(Il2CppClass **)
                     &((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar12->klass)[1]._2.
                      initializationExceptionGCHandle;
        pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar12->klass)[1]._2.unity_user_data)(pGVar12);
        pGVar21 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                            ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar16,
                             (MethodInfo *)method_00);
        if (pGVar21 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar21->fields).shrink = 0.0;
          pGVar12 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                              ((System_String_o *)pGVar14,(System_String_o *)style_01,pGVar20,pGVar21,
                               (MethodInfo *)method_01);
          pGVar21 = MethodInfo_Void_Add;
          method_00 = style_01;
          pGVar16 = pGVar14;
          if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            piVar1 = (int *)((long)&pGVar17->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = pGVar17->bounds;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar2 = *(uint *)&pGVar17->max_length;
              if (uVar2 < (uint)pIVar6[1].lower_bound) {
                *(uint *)&pGVar17->max_length = uVar2 + 1;
                (&pIVar6[2].length)[(int)uVar2] = (il2cpp_array_size_t)pGVar12;
                pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
                          il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar2,pGVar12);
                return pGVar19;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pGVar17,(Il2CppObject *)pGVar12,
                         (((pGVar21->fields).alignItems[8].klass)->_1).interopData);
              return extraout_RAX_01;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar16->fields).type = (System_String_o *)pSVar10;
  il2cpp_runtime_helper_022b4080(&pGVar16->fields);
  System_Object___ctor((Il2CppObject *)pGVar16,(MethodInfo *)0x0);
  (pGVar16->fields).text = (System_String_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(pGVar16->fields).text,method_00);
  (pGVar16->fields).id = (System_String_o *)extraout_RDX;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
            il2cpp_runtime_helper_022b4080(&(pGVar16->fields).id,extraout_RDX);
  return pGVar19;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$AddSection
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__AddSection (System_Collections_Generic_List_GisketchNodeDefinition__o* children, System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, System_Action_AottgUi__o* build, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5ec90

void Gisketch_Aottg2UI_Code_AottgDialog__AddSection
               (System_Collections_Generic_List_GisketchNodeDefinition__o *children,System_String_o *id,
               System_String_o *style,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               System_Action_AottgUi__o *build,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,
               MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Il2CppArrayBounds *pIVar7;
  char cVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *style_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  System_String_Fields __this_00;
  Il2CppClass *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  Il2CppClass *style_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar16;
  System_String_o *str0;
  System_String_o *str0_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  MethodInfo *pMVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar18;
  System_Action_AottgUi__o *method_01;
  
  pGVar13 = layout;
  method_01 = build;
  if (g_data_057a9d62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057a9d62 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)id;
  pGVar18 = pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,id,actions,(MethodInfo *)pGVar13);
  if (build != (System_Action_AottgUi__o *)0x0) {
    pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(build->fields).method_code;
    pGVar15 = pGVar9;
    (*(code *)(build->fields).invoke_impl)(pGVar18,pGVar9,(build->fields).method);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if (g_data_057a9d8e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057a9d8e = '\x01';
      }
      pSVar16 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar9->fields).type;
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (pSVar16 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        if ((pSVar16->fields)._size < 1) {
          return;
        }
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
          pSVar16 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar9->fields).type;
          pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          if (pSVar16 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_03b5ee1e;
        }
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap(id,style,pGVar10,layout,(MethodInfo *)method_01);
        pGVar14 = MethodInfo_Void_Add;
        pGVar13 = layout;
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)style;
        pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)id;
        if (children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          piVar1 = &(children->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar10 = (children->fields)._items;
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            uVar3 = (children->fields)._size;
            if (uVar3 < (uint)pGVar10->max_length) {
              (children->fields)._size = uVar3 + 1;
              pGVar10->m_Items[(int)uVar3] = pGVar9;
              il2cpp_runtime_helper_022b4080(pGVar10->m_Items + (int)uVar3,pGVar9);
              return;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)children,(Il2CppObject *)pGVar9,
                       (((pGVar14->fields).alignItems[8].klass)->_1).interopData);
            return;
          }
        }
      }
    }
  }
label_03b5ee1e:
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = pGVar13;
  if (g_data_057a9d64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-body");
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d64 = '\x01';
  }
  pSVar11 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,pSVar11,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar13,(MethodInfo *)pGVar14);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass;
  uVar5._0_4_ = pGVar4[1]._2.instance_size;
  uVar5._4_4_ = pGVar4[1]._2.actualSize;
  pGVar10 = pGVar12;
  pGVar9 = pGVar18;
  (*pGVar4[1]._2.genericContainerHandle)(pGVar18,pGVar12,uVar5);
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    if (pGVar12->bounds != (Il2CppArrayBounds *)0x0) {
      if (pGVar12->bounds[1].lower_bound < 1) {
        return;
      }
      cVar8 = (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._1.fields)(pGVar18);
      if (cVar8 == '\0') {
        id_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._1.castClass;
        style_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._1.element_class)
                             (pGVar18);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar12->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar12->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pMVar17 = (MethodInfo *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._2.typeHierarchy;
        pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1].rgctx_data)(pGVar18);
        pGVar14 = Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout(pGVar13,pMVar17);
        __this = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                           ((System_String_o *)id_00,(System_String_o *)style_00,pGVar10,pGVar14,
                            (MethodInfo *)method_01);
        pGVar10 = style_00;
        pGVar9 = id_00;
        pGVar13 = MethodInfo_Void_Add;
      }
      else {
        __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        pGVar9 = __this;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b5f17e;
        (__this->fields).type = "ScrollView";
        il2cpp_runtime_helper_022b4080(&__this->fields);
        pSVar11 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        (__this->fields).id = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this->fields).id,pSVar11);
        pSVar11 = (System_String_o *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._1.element_class)
                            (pGVar18,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._1.castClass);
        pMVar17 = (MethodInfo *)&(__this->fields).style;
        (__this->fields).style = pSVar11;
        il2cpp_runtime_helper_022b4080(pMVar17,pSVar11);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout(pMVar17);
        (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).search,pGVar13);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1].rgctx_data)
                            (pGVar18,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar18->klass)[1]._2.typeHierarchy)
        ;
        (__this->fields).layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar10;
        il2cpp_runtime_helper_022b4080(&(__this->fields).layout);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar12->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar12->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this->fields).deferredChildren;
        (__this->fields).deferredChildren = pGVar10;
        il2cpp_runtime_helper_022b4080();
        pGVar13 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = pGVar13;
      if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        piVar2 = (int *)((long)&(pGVar15->fields).id + 4);
        *piVar2 = *piVar2 + 1;
        pSVar11 = (pGVar15->fields).type;
        pGVar14 = pGVar13;
        if (pSVar11 != (System_String_o *)0x0) {
          uVar3 = *(uint *)&(pGVar15->fields).id;
          if (uVar3 < *(uint *)&pSVar11[1].klass) {
            *(uint *)&(pGVar15->fields).id = uVar3 + 1;
            (&pSVar11[1].monitor)[(int)uVar3] = __this;
            il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor + (int)uVar3,__this);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pGVar15,(Il2CppObject *)__this,
                     (((pGVar13->fields).alignItems[8].klass)->_1).interopData);
          return;
        }
      }
    }
  }
label_03b5f17e:
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = pGVar14;
  if (g_data_057a9d63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogFooter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-footer");
    g_data_057a9d63 = '\x01';
  }
  pSVar11 = System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
  __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,pSVar11,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar14,(MethodInfo *)pGVar13);
  method_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogFooter);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  *(System_String_Fields *)&(method_00->_1).name = __this_00;
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&(method_00->_1).name,__this_00);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass;
  uVar6._0_4_ = pGVar4[1]._2.static_fields_size;
  uVar6._4_4_ = pGVar4[1]._2.thread_static_fields_size;
  pGVar18 = pGVar9;
  (**(code **)&pGVar4[1]._2.element_size)(pGVar9,method_00,uVar6);
  if (__this_00 != (System_String_Fields)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    if (*(long *)((long)__this_00 + 0x10) != 0) {
      if (*(int *)(*(long *)((long)__this_00 + 0x10) + 0x18) < 1) {
        return;
      }
      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
      method_00 = ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._1.parent;
      style_01 = (Il2CppClass *)
                 (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._1.declaringType)(pGVar9);
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10),
                             MethodInfo_GisketchNodeDefinition_ToArray);
        method_00 = *(Il2CppClass **)
                     &((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._2.
                      initializationExceptionGCHandle;
        pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._2.unity_user_data)(pGVar9);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                            ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar18,
                             (MethodInfo *)method_00);
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar13->fields).shrink = 0.0;
          pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                             ((System_String_o *)pGVar15,(System_String_o *)style_01,pGVar12,pGVar13,
                              (MethodInfo *)method_01);
          pGVar13 = MethodInfo_Void_Add;
          method_00 = style_01;
          pGVar18 = pGVar15;
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            piVar2 = (int *)((long)&pGVar10->max_length + 4);
            *piVar2 = *piVar2 + 1;
            pIVar7 = pGVar10->bounds;
            if (pIVar7 != (Il2CppArrayBounds *)0x0) {
              uVar3 = *(uint *)&pGVar10->max_length;
              if (uVar3 < (uint)pIVar7[1].lower_bound) {
                *(uint *)&pGVar10->max_length = uVar3 + 1;
                (&pIVar7[2].length)[(int)uVar3] = (il2cpp_array_size_t)pGVar9;
                il2cpp_runtime_helper_022b4080(&pIVar7[2].length + (int)uVar3,pGVar9);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pGVar10,(Il2CppObject *)pGVar9,
                         (((pGVar13->fields).alignItems[8].klass)->_1).interopData);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar18->fields).type = (System_String_o *)pSVar16;
  il2cpp_runtime_helper_022b4080(&pGVar18->fields);
  System_Object___ctor((Il2CppObject *)pGVar18,(MethodInfo *)0x0);
  (pGVar18->fields).text = (System_String_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(pGVar18->fields).text,method_00);
  (pGVar18->fields).id = (System_String_o *)extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pGVar18->fields).id,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$AddFooter
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__AddFooter (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* children, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5f190

void Gisketch_Aottg2UI_Code_AottgDialog__AddFooter
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *children,System_String_o *id,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar3;
  long lVar4;
  System_String_o *ownerId;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *id_00;
  MethodInfo *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout_00;
  
  pMVar5 = (MethodInfo *)actions;
  if (g_data_057a9d63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogFooter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-footer");
    g_data_057a9d63 = '\x01';
  }
  ownerId = System_String__Concat_3ae5ba0(id,"-footer",(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_00,ownerId,actions,pMVar5);
  pMVar5 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogFooter);
  System_Object___ctor((Il2CppObject *)pMVar5,(MethodInfo *)0x0);
  *(Gisketch_Aottg2UI_Code_AottgUi_o **)&((System_String_Fields *)&pMVar5->invoker_method)->_stringLength =
       __this_00;
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&pMVar5->invoker_method,__this_00);
  layout_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this;
  (*(__this->klass->vtable)._20_BuildFooter.methodPtr)
            (__this,pMVar5,(__this->klass->vtable)._20_BuildFooter.method);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (g_data_057a9d8e == '\0') {
      layout_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pSVar3 = (__this_00->fields)._children;
    if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      if ((pSVar3->fields)._size < 1) {
        return;
      }
      id_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
              System_String__Concat_3ae5ba0(id,"-footer",(MethodInfo *)0x0);
      pMVar5 = (__this->klass->vtable)._9_get_FooterStyle.method;
      style = (MethodInfo *)(*(__this->klass->vtable)._9_get_FooterStyle.methodPtr)(__this);
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pSVar3 = (__this_00->fields)._children;
      layout_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchNodeDefinition_ToArray);
        pMVar5 = (__this->klass->vtable)._17_get_FooterLayout.method;
        layout_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                    (*(__this->klass->vtable)._17_get_FooterLayout.methodPtr)(__this);
        layout = Gisketch_Aottg2UI_Code_AottgDialog__Copy(layout_00,pMVar5);
        if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (layout->fields).shrink = 0.0;
          item = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                           ((System_String_o *)id_00,(System_String_o *)style,pGVar6,layout,method);
          lVar4 = MethodInfo_Void_Add;
          pMVar5 = style;
          layout_00 = id_00;
          if (children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            piVar1 = &(children->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar6 = (children->fields)._items;
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
              uVar2 = (children->fields)._size;
              if (uVar2 < (uint)pGVar6->max_length) {
                (children->fields)._size = uVar2 + 1;
                pGVar6->m_Items[(int)uVar2] = item;
                il2cpp_runtime_helper_022b4080(pGVar6->m_Items + (int)uVar2,item);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)children,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (layout_00->fields).direction = (System_String_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&layout_00->fields);
  System_Object___ctor((Il2CppObject *)layout_00,(MethodInfo *)0x0);
  (layout_00->fields).alignItems = (System_String_o *)pMVar5;
  il2cpp_runtime_helper_022b4080(&(layout_00->fields).alignItems,pMVar5);
  (layout_00->fields).justify = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(layout_00->fields).justify,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$AddBody
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog__AddBody (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* children, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5ee30

void Gisketch_Aottg2UI_Code_AottgDialog__AddBody
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *children,System_String_o *id,
               Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar5;
  undefined8 uVar6;
  char cVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *style;
  System_String_Fields __this_00;
  Il2CppClass *method_00;
  Il2CppClass *style_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *str0;
  System_String_o *extraout_RDX;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)actions;
  if (g_data_057a9d64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-body");
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d64 = '\x01';
  }
  pSVar8 = System_String__Concat_3ae5ba0(id,"-body",(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,pSVar8,actions,(MethodInfo *)pGVar13);
  pGVar12 = pGVar9;
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this;
  (*(__this->klass->vtable)._19_BuildBody.methodPtr)
            (__this,pGVar9,(__this->klass->vtable)._19_BuildBody.method);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pSVar4 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)
             ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&pGVar9->bounds)->direction;
    if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      if ((pSVar4->fields)._size < 1) {
        return;
      }
      cVar7 = (*(__this->klass->vtable)._12_get_BodyScrollable.methodPtr)(__this);
      if (cVar7 == '\0') {
        pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  System_String__Concat_3ae5ba0(id,"-body",(MethodInfo *)0x0);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  (__this->klass->vtable)._8_get_BodyStyle.method;
        style = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                (*(__this->klass->vtable)._8_get_BodyStyle.methodPtr)(__this);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pSVar4 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)
                 ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&pGVar9->bounds)->direction;
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (pSVar4 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_03b5f17e;
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_GisketchNodeDefinition_ToArray);
        pMVar14 = (__this->klass->vtable)._16_get_BodyLayout.method;
        pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  (*(__this->klass->vtable)._16_get_BodyLayout.methodPtr)(__this);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout(pGVar13,pMVar14);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                            ((System_String_o *)pGVar16,(System_String_o *)style,pGVar12,pGVar13,method);
        pGVar12 = style;
        pGVar15 = pGVar16;
        pGVar11 = MethodInfo_Void_Add;
      }
      else {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        pGVar15 = pGVar10;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
        if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b5f17e;
        (pGVar10->fields).type = "ScrollView";
        il2cpp_runtime_helper_022b4080(&pGVar10->fields);
        pSVar8 = System_String__Concat_3ae5ba0(id,"-body",(MethodInfo *)0x0);
        (pGVar10->fields).id = pSVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pSVar8);
        pSVar8 = (System_String_o *)
                 (*(__this->klass->vtable)._8_get_BodyStyle.methodPtr)
                           (__this,(__this->klass->vtable)._8_get_BodyStyle.method);
        pMVar14 = (MethodInfo *)&(pGVar10->fields).style;
        (pGVar10->fields).style = pSVar8;
        il2cpp_runtime_helper_022b4080(pMVar14,pSVar8);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout(pMVar14);
        (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar11);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  (*(__this->klass->vtable)._16_get_BodyLayout.methodPtr)
                            (__this,(__this->klass->vtable)._16_get_BodyLayout.method);
        (pGVar10->fields).layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar12;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).layout);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pSVar4 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)
                 ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&pGVar9->bounds)->direction;
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (pSVar4 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_03b5f17e;
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar10->fields).deferredChildren;
        (pGVar10->fields).deferredChildren = pGVar12;
        il2cpp_runtime_helper_022b4080();
        pGVar11 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = pGVar11;
      if (children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        piVar1 = &(children->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar9 = (children->fields)._items;
        pGVar13 = pGVar11;
        if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          uVar3 = (children->fields)._size;
          if (uVar3 < (uint)pGVar9->max_length) {
            (children->fields)._size = uVar3 + 1;
            pGVar9->m_Items[(int)uVar3] = pGVar10;
            il2cpp_runtime_helper_022b4080(pGVar9->m_Items + (int)uVar3,pGVar10);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)children,(Il2CppObject *)pGVar10,
                     (((pGVar11->fields).alignItems[8].klass)->_1).interopData);
          return;
        }
      }
    }
  }
label_03b5f17e:
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar13;
  if (g_data_057a9d63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogFooter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-footer");
    g_data_057a9d63 = '\x01';
  }
  pSVar8 = System_String__Concat_3ae5ba0(str0,"-footer",(MethodInfo *)0x0);
  __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,pSVar8,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar13,(MethodInfo *)pGVar11);
  method_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogFooter);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  *(System_String_Fields *)&(method_00->_1).name = __this_00;
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&(method_00->_1).name,__this_00);
  pGVar5 = pGVar15->klass;
  uVar6._0_4_ = pGVar5[1]._2.static_fields_size;
  uVar6._4_4_ = pGVar5[1]._2.thread_static_fields_size;
  pGVar16 = pGVar15;
  (**(code **)&pGVar5[1]._2.element_size)(pGVar15,method_00,uVar6);
  if (__this_00 != (System_String_Fields)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    if (*(long *)((long)__this_00 + 0x10) != 0) {
      if (*(int *)(*(long *)((long)__this_00 + 0x10) + 0x18) < 1) {
        return;
      }
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0(str0,"-footer",(MethodInfo *)0x0);
      method_00 = pGVar15->klass[1]._1.parent;
      style_00 = (Il2CppClass *)(*(code *)pGVar15->klass[1]._1.declaringType)(pGVar15);
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 System_Collections_Generic_List_object___ToArray
                           (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10),
                            MethodInfo_GisketchNodeDefinition_ToArray);
        method_00 = *(Il2CppClass **)&pGVar15->klass[1]._2.initializationExceptionGCHandle;
        pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (*pGVar15->klass[1]._2.unity_user_data)(pGVar15);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                            ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar16,
                             (MethodInfo *)method_00);
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar13->fields).shrink = 0.0;
          pGVar15 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                              ((System_String_o *)pGVar10,(System_String_o *)style_00,pGVar9,pGVar13,method);
          pGVar13 = MethodInfo_Void_Add;
          method_00 = style_00;
          pGVar16 = pGVar10;
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            piVar2 = (int *)((long)&pGVar12->max_length + 4);
            *piVar2 = *piVar2 + 1;
            pSVar8 = ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)&pGVar12->bounds)->direction;
            if (pSVar8 != (System_String_o *)0x0) {
              uVar3 = *(uint *)&pGVar12->max_length;
              if (uVar3 < *(uint *)&pSVar8[1].klass) {
                *(uint *)&pGVar12->max_length = uVar3 + 1;
                (&pSVar8[1].monitor)[(int)uVar3] = pGVar15;
                il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor + (int)uVar3,pGVar15);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pGVar12,(Il2CppObject *)pGVar15,
                         (((pGVar13->fields).alignItems[8].klass)->_1).interopData);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar16->fields).type = (System_String_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&pGVar16->fields);
  System_Object___ctor((Il2CppObject *)pGVar16,(MethodInfo *)0x0);
  (pGVar16->fields).text = (System_String_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(pGVar16->fields).text,method_00);
  (pGVar16->fields).id = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pGVar16->fields).id,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$Wrap
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__Wrap (System_String_o* id, System_String_o* style, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b5f510

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__Wrap
          (System_String_o *id,System_String_o *style,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  
  if (g_data_057a9d65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d65 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar2 = (System_String_o *)0x0;
  pGVar1 = __this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields).id,id);
    (__this->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(__this->fields).style,style);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(__this->fields).search,layout);
    (__this->fields).deferredChildren = children;
    il2cpp_runtime_helper_022b4080(&(__this->fields).deferredChildren,children);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  (pGVar1->fields).type = pSVar2;
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_022b4080(&pGVar1->fields,pSVar2);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$Fixed
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__Fixed (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b5ec70

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__Fixed
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppArrayBounds *pIVar6;
  char cVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *style;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX_00;
  System_String_Fields __this_00;
  Il2CppClass *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  Il2CppClass *style_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX_01;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar15;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *in_RCX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *style_01;
  System_String_o *str0;
  System_String_o *str0_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar17;
  MethodInfo *in_R8;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *in_R9;
  
  pGVar8 = Gisketch_Aottg2UI_Code_AottgDialog__Copy(layout,method);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar8->fields).shrink = 0.0;
    return pGVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = in_RCX;
  method_01 = in_R8;
  if (g_data_057a9d62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057a9d62 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method;
  pGVar17 = pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,(System_String_o *)method,in_R9,(MethodInfo *)pGVar8);
  if (in_R8 != (MethodInfo *)0x0) {
    pGVar17 = (in_R8->field8_0x40).genericMethod;
    pGVar14 = pGVar9;
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
              (*(code *)in_R8->name)(pGVar17,pGVar9,in_R8->return_type);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if (g_data_057a9d8e == '\0') {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057a9d8e = '\x01';
      }
      pSVar15 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar9->fields).type;
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (pSVar15 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        if ((pSVar15->fields)._size < 1) {
          return pGVar10;
        }
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
          pSVar15 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar9->fields).type;
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          if (pSVar15 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_03b5ee1e;
        }
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar14 = style_01;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                           ((System_String_o *)method,(System_String_o *)style_01,pGVar11,in_RCX,method_01);
        pGVar10 = MethodInfo_Void_Add;
        pGVar8 = in_RCX;
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method;
        if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          piVar1 = (int *)((long)&(layout->fields).justify + 4);
          *piVar1 = *piVar1 + 1;
          pSVar12 = (layout->fields).direction;
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          if (pSVar12 != (System_String_o *)0x0) {
            uVar2 = *(uint *)&(layout->fields).justify;
            if (uVar2 < *(uint *)&pSVar12[1].klass) {
              *(uint *)&(layout->fields).justify = uVar2 + 1;
              (&pSVar12[1].monitor)[(int)uVar2] = pGVar9;
              pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                       il2cpp_runtime_helper_022b4080(&pSVar12[1].monitor + (int)uVar2,pGVar9);
              return pGVar8;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)layout,(Il2CppObject *)pGVar9,
                       (((pGVar10->fields).alignItems[8].klass)->_1).interopData);
            return extraout_RAX;
          }
        }
      }
    }
  }
label_03b5ee1e:
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar8;
  if (g_data_057a9d64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-body");
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9d64 = '\x01';
  }
  pSVar12 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,pSVar12,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar8,(MethodInfo *)pGVar10);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass;
  uVar4._0_4_ = pGVar3[1]._2.instance_size;
  uVar4._4_4_ = pGVar3[1]._2.actualSize;
  pGVar11 = pGVar13;
  pGVar9 = pGVar17;
  (*pGVar3[1]._2.genericContainerHandle)(pGVar17,pGVar13,uVar4);
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar13->bounds;
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      if (*(int *)&(pGVar8->fields).justify < 1) {
        return pGVar8;
      }
      cVar7 = (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._1.fields)(pGVar17);
      if (cVar7 == '\0') {
        id = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._1.castClass;
        style = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._1.element_class)(pGVar17);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar13->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar13->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pMVar16 = (MethodInfo *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._2.typeHierarchy;
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1].rgctx_data)(pGVar17);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout(pGVar8,pMVar16);
        __this = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                           ((System_String_o *)id,(System_String_o *)style,pGVar11,pGVar10,method_01);
        pGVar11 = style;
        pGVar9 = id;
        pGVar8 = MethodInfo_Void_Add;
      }
      else {
        __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        pGVar9 = __this;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b5f17e;
        (__this->fields).type = "ScrollView";
        il2cpp_runtime_helper_022b4080(&__this->fields);
        pSVar12 = System_String__Concat_3ae5ba0(str0,"-body",(MethodInfo *)0x0);
        (__this->fields).id = pSVar12;
        il2cpp_runtime_helper_022b4080(&(__this->fields).id,pSVar12);
        pSVar12 = (System_String_o *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._1.element_class)
                            (pGVar17,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._1.castClass);
        pMVar16 = (MethodInfo *)&(__this->fields).style;
        (__this->fields).style = pSVar12;
        il2cpp_runtime_helper_022b4080(pMVar16,pSVar12);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout(pMVar16);
        (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields).search,pGVar8);
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1].rgctx_data)
                            (pGVar17,((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar17->klass)[1]._2.typeHierarchy)
        ;
        (__this->fields).layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar11;
        il2cpp_runtime_helper_022b4080(&(__this->fields).layout);
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if ((System_Collections_Generic_List_object__o *)pGVar13->bounds ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b5f17e;
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pGVar13->bounds,MethodInfo_GisketchNodeDefinition_ToArray);
        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this->fields).deferredChildren;
        (__this->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080();
        pGVar8 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = pGVar8;
      if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        piVar1 = (int *)((long)&(pGVar14->fields).id + 4);
        *piVar1 = *piVar1 + 1;
        pSVar12 = (pGVar14->fields).type;
        pGVar10 = pGVar8;
        if (pSVar12 != (System_String_o *)0x0) {
          uVar2 = *(uint *)&(pGVar14->fields).id;
          if (uVar2 < *(uint *)&pSVar12[1].klass) {
            *(uint *)&(pGVar14->fields).id = uVar2 + 1;
            (&pSVar12[1].monitor)[(int)uVar2] = __this;
            pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                     il2cpp_runtime_helper_022b4080(&pSVar12[1].monitor + (int)uVar2,__this);
            return pGVar8;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pGVar14,(Il2CppObject *)__this,
                     (((pGVar8->fields).alignItems[8].klass)->_1).interopData);
          return extraout_RAX_00;
        }
      }
    }
  }
label_03b5f17e:
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar10;
  if (g_data_057a9d63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogFooter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"-footer");
    g_data_057a9d63 = '\x01';
  }
  pSVar12 = System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
  __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,pSVar12,
             (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pGVar10,(MethodInfo *)pGVar8);
  method_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogFooter);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  *(System_String_Fields *)&(method_00->_1).name = __this_00;
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&(method_00->_1).name,__this_00);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass;
  uVar5._0_4_ = pGVar3[1]._2.static_fields_size;
  uVar5._4_4_ = pGVar3[1]._2.thread_static_fields_size;
  pGVar17 = pGVar9;
  (**(code **)&pGVar3[1]._2.element_size)(pGVar9,method_00,uVar5);
  if (__this_00 != (System_String_Fields)0x0) {
    if (g_data_057a9d8e == '\0') {
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d8e = '\x01';
    }
    pGVar8 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_00 + 0x10);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      if (*(int *)&(pGVar8->fields).justify < 1) {
        return pGVar8;
      }
      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0(str0_00,"-footer",(MethodInfo *)0x0);
      method_00 = ((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._1.parent;
      style_00 = (Il2CppClass *)
                 (*(code *)((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._1.declaringType)(pGVar9);
      if (g_data_057a9d8f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
        g_data_057a9d8f = '\x01';
      }
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            (*(System_Collections_Generic_List_object__o **)((long)__this_00 + 0x10),
                             MethodInfo_GisketchNodeDefinition_ToArray);
        method_00 = *(Il2CppClass **)
                     &((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._2.
                      initializationExceptionGCHandle;
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  (*((Gisketch_Aottg2UI_Code_AottgUi_c *)pGVar9->klass)[1]._2.unity_user_data)(pGVar9);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgDialog__Copy
                           ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar17,
                            (MethodInfo *)method_00);
        if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar8->fields).shrink = 0.0;
          pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__Wrap
                             ((System_String_o *)pGVar14,(System_String_o *)style_00,pGVar13,pGVar8,method_01)
          ;
          pGVar8 = MethodInfo_Void_Add;
          method_00 = style_00;
          pGVar17 = pGVar14;
          if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            piVar1 = (int *)((long)&pGVar11->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = pGVar11->bounds;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar2 = *(uint *)&pGVar11->max_length;
              if (uVar2 < (uint)pIVar6[1].lower_bound) {
                *(uint *)&pGVar11->max_length = uVar2 + 1;
                (&pIVar6[2].length)[(int)uVar2] = (il2cpp_array_size_t)pGVar9;
                pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                         il2cpp_runtime_helper_022b4080(&pIVar6[2].length + (int)uVar2,pGVar9);
                return pGVar8;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pGVar11,(Il2CppObject *)pGVar9,
                         (((pGVar8->fields).alignItems[8].klass)->_1).interopData);
              return extraout_RAX_01;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    g_data_057a9d8d = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  (pGVar17->fields).type = (System_String_o *)pSVar15;
  il2cpp_runtime_helper_022b4080(&pGVar17->fields);
  System_Object___ctor((Il2CppObject *)pGVar17,(MethodInfo *)0x0);
  (pGVar17->fields).text = (System_String_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(pGVar17->fields).text,method_00);
  (pGVar17->fields).id = (System_String_o *)extraout_RDX;
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
           il2cpp_runtime_helper_022b4080(&(pGVar17->fields).id,extraout_RDX);
  return pGVar8;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$ScrollBodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout (const MethodInfo* method);
// 0x3b5f780

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__ScrollBodyLayout(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  float fVar6;
  
  if (g_data_057a9d66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d66 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  pGVar5 = pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar3->fields).direction = "Column";
    il2cpp_runtime_helper_022b4080(&pGVar3->fields);
    (pGVar3->fields).alignItems = "Stretch";
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pGVar5 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar4->fields).direction = 0x42c80000;
      (pGVar4->fields).justify = "percent";
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).justify);
      (pGVar3->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).width);
      if (g_data_057a9d9a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"point");
        g_data_057a9d9a = '\x01';
      }
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar5 = pGVar4;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar4,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        *(undefined4 *)&(pGVar4->fields).direction = 0;
        (pGVar4->fields).justify = "point";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).justify);
        (pGVar3->fields).minHeight = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).minHeight,pGVar4);
        (pGVar3->fields).grow = 0.0;
        (pGVar3->fields).shrink = 1.0;
        return pGVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    g_data_057a9d67 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      fVar6 = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d9b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"percent");
        g_data_057a9d9b = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar5 = pGVar3;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        *(float *)&(pGVar3->fields).direction = fVar6;
        (pGVar3->fields).justify = "percent";
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).justify);
        return pGVar3;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    (pGVar3->fields).direction = (pGVar5->fields).direction;
    il2cpp_runtime_helper_022b4080(&pGVar3->fields);
    (pGVar3->fields).justify = (pGVar5->fields).justify;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).justify);
    (pGVar3->fields).alignItems = (pGVar5->fields).alignItems;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
    (pGVar3->fields).alignSelf = (pGVar5->fields).alignSelf;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf);
    (pGVar3->fields).wrap = (pGVar5->fields).wrap;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).wrap);
    (pGVar3->fields).width = (pGVar5->fields).width;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).width);
    (pGVar3->fields).height = (pGVar5->fields).height;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).height);
    (pGVar3->fields).minWidth = (pGVar5->fields).minWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).minWidth);
    (pGVar3->fields).minHeight = (pGVar5->fields).minHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).minHeight);
    (pGVar3->fields).maxWidth = (pGVar5->fields).maxWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).maxWidth);
    (pGVar3->fields).maxHeight = (pGVar5->fields).maxHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).maxHeight);
    fVar6 = (pGVar5->fields).shrink;
    fVar1 = (pGVar5->fields).gap;
    fVar2 = (pGVar5->fields).gapRow;
    (pGVar3->fields).grow = (pGVar5->fields).grow;
    (pGVar3->fields).shrink = fVar6;
    (pGVar3->fields).gap = fVar1;
    (pGVar3->fields).gapRow = fVar2;
    (pGVar3->fields).gapColumn = (pGVar5->fields).gapColumn;
    fVar6 = (pGVar5->fields).paddingX;
    fVar1 = (pGVar5->fields).paddingY;
    fVar2 = (pGVar5->fields).paddingLeft;
    (pGVar3->fields).padding = (pGVar5->fields).padding;
    (pGVar3->fields).paddingX = fVar6;
    (pGVar3->fields).paddingY = fVar1;
    (pGVar3->fields).paddingLeft = fVar2;
    fVar6 = (pGVar5->fields).paddingTop;
    fVar1 = (pGVar5->fields).paddingBottom;
    fVar2 = (pGVar5->fields).offsetX;
    (pGVar3->fields).paddingRight = (pGVar5->fields).paddingRight;
    (pGVar3->fields).paddingTop = fVar6;
    (pGVar3->fields).paddingBottom = fVar1;
    (pGVar3->fields).offsetX = fVar2;
    (pGVar3->fields).offsetY = (pGVar5->fields).offsetY;
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$BodyPanelLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b5f620

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__BodyPanelLayout
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o **ppGVar1;
  float fVar2;
  float fVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  float fVar8;
  
  pGVar4 = Gisketch_Aottg2UI_Code_AottgDialog__Copy(layout,method);
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
label_03b5f774:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d66 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      g_data_057a9d66 = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    pGVar4 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).direction = "Column";
      il2cpp_runtime_helper_022b4080(&pGVar6->fields);
      (pGVar6->fields).alignItems = "Stretch";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignItems);
      if (g_data_057a9d9b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"percent");
        g_data_057a9d9b = '\x01';
      }
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar4 = pGVar7;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        *(undefined4 *)&(pGVar7->fields).direction = 0x42c80000;
        (pGVar7->fields).justify = "percent";
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify);
        (pGVar6->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).width);
        if (g_data_057a9d9a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
          il2cpp_runtime_helper_023445d0(&"point");
          g_data_057a9d9a = '\x01';
        }
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
        pGVar4 = pGVar7;
        Gisketch_Aottg2UI_Data_GisketchLength___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          *(undefined4 *)&(pGVar7->fields).direction = 0;
          (pGVar7->fields).justify = "point";
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify);
          (pGVar6->fields).minHeight = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).minHeight,pGVar7);
          (pGVar6->fields).grow = 0.0;
          (pGVar6->fields).shrink = 1.0;
          return pGVar6;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d67 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
      g_data_057a9d67 = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        fVar8 = (float)il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d9b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
          il2cpp_runtime_helper_023445d0(&"percent");
          g_data_057a9d9b = '\x01';
        }
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
        pGVar4 = pGVar6;
        Gisketch_Aottg2UI_Data_GisketchLength___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        *(float *)&(pGVar6->fields).direction = fVar8;
        (pGVar6->fields).justify = "percent";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
        return pGVar6;
      }
      (pGVar6->fields).direction = (pGVar4->fields).direction;
      il2cpp_runtime_helper_022b4080(&pGVar6->fields);
      (pGVar6->fields).justify = (pGVar4->fields).justify;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      (pGVar6->fields).alignItems = (pGVar4->fields).alignItems;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignItems);
      (pGVar6->fields).alignSelf = (pGVar4->fields).alignSelf;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).alignSelf);
      (pGVar6->fields).wrap = (pGVar4->fields).wrap;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).wrap);
      (pGVar6->fields).width = (pGVar4->fields).width;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).width);
      (pGVar6->fields).height = (pGVar4->fields).height;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).height);
      (pGVar6->fields).minWidth = (pGVar4->fields).minWidth;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).minWidth);
      (pGVar6->fields).minHeight = (pGVar4->fields).minHeight;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).minHeight);
      (pGVar6->fields).maxWidth = (pGVar4->fields).maxWidth;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).maxWidth);
      (pGVar6->fields).maxHeight = (pGVar4->fields).maxHeight;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).maxHeight);
      fVar8 = (pGVar4->fields).shrink;
      fVar2 = (pGVar4->fields).gap;
      fVar3 = (pGVar4->fields).gapRow;
      (pGVar6->fields).grow = (pGVar4->fields).grow;
      (pGVar6->fields).shrink = fVar8;
      (pGVar6->fields).gap = fVar2;
      (pGVar6->fields).gapRow = fVar3;
      (pGVar6->fields).gapColumn = (pGVar4->fields).gapColumn;
      fVar8 = (pGVar4->fields).paddingX;
      fVar2 = (pGVar4->fields).paddingY;
      fVar3 = (pGVar4->fields).paddingLeft;
      (pGVar6->fields).padding = (pGVar4->fields).padding;
      (pGVar6->fields).paddingX = fVar8;
      (pGVar6->fields).paddingY = fVar2;
      (pGVar6->fields).paddingLeft = fVar3;
      fVar8 = (pGVar4->fields).paddingTop;
      fVar2 = (pGVar4->fields).paddingBottom;
      fVar3 = (pGVar4->fields).offsetX;
      (pGVar6->fields).paddingRight = (pGVar4->fields).paddingRight;
      (pGVar6->fields).paddingTop = fVar8;
      (pGVar6->fields).paddingBottom = fVar2;
      (pGVar6->fields).offsetX = fVar3;
      (pGVar6->fields).offsetY = (pGVar4->fields).offsetY;
    }
    return pGVar6;
  }
  if ((pGVar4->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_03b5f774;
    ppGVar1 = &(pGVar4->fields).width;
    (pGVar5->fields).value = 100.0;
    (pGVar5->fields).unit = "percent";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).unit);
    *ppGVar1 = pGVar5;
    il2cpp_runtime_helper_022b4080(ppGVar1);
    pGVar5 = (pGVar4->fields).minHeight;
  }
  else {
    pGVar5 = (pGVar4->fields).minHeight;
  }
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_03b5f774;
    (pGVar5->fields).value = 0.0;
    (pGVar5->fields).unit = "point";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).unit);
  }
  (pGVar4->fields).minHeight = pGVar5;
  il2cpp_runtime_helper_022b4080(&(pGVar4->fields).minHeight,pGVar5);
  (pGVar4->fields).grow = 1.0;
  (pGVar4->fields).shrink = 1.0;
  return pGVar4;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$Copy
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgDialog__Copy (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b5f920

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgDialog__Copy
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  float fVar4;
  
  if (g_data_057a9d67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    g_data_057a9d67 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar3,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      fVar4 = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d9b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"percent");
        g_data_057a9d9b = '\x01';
      }
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar3 = __this;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        *(float *)&(__this->fields).direction = fVar4;
        (__this->fields).justify = "percent";
        il2cpp_runtime_helper_022b4080(&(__this->fields).justify);
        return __this;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    (pGVar3->fields).direction = (layout->fields).direction;
    il2cpp_runtime_helper_022b4080(&pGVar3->fields);
    (pGVar3->fields).justify = (layout->fields).justify;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).justify);
    (pGVar3->fields).alignItems = (layout->fields).alignItems;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignItems);
    (pGVar3->fields).alignSelf = (layout->fields).alignSelf;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf);
    (pGVar3->fields).wrap = (layout->fields).wrap;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).wrap);
    (pGVar3->fields).width = (layout->fields).width;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).width);
    (pGVar3->fields).height = (layout->fields).height;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).height);
    (pGVar3->fields).minWidth = (layout->fields).minWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).minWidth);
    (pGVar3->fields).minHeight = (layout->fields).minHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).minHeight);
    (pGVar3->fields).maxWidth = (layout->fields).maxWidth;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).maxWidth);
    (pGVar3->fields).maxHeight = (layout->fields).maxHeight;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).maxHeight);
    fVar4 = (layout->fields).shrink;
    fVar1 = (layout->fields).gap;
    fVar2 = (layout->fields).gapRow;
    (pGVar3->fields).grow = (layout->fields).grow;
    (pGVar3->fields).shrink = fVar4;
    (pGVar3->fields).gap = fVar1;
    (pGVar3->fields).gapRow = fVar2;
    (pGVar3->fields).gapColumn = (layout->fields).gapColumn;
    fVar4 = (layout->fields).paddingX;
    fVar1 = (layout->fields).paddingY;
    fVar2 = (layout->fields).paddingLeft;
    (pGVar3->fields).padding = (layout->fields).padding;
    (pGVar3->fields).paddingX = fVar4;
    (pGVar3->fields).paddingY = fVar1;
    (pGVar3->fields).paddingLeft = fVar2;
    fVar4 = (layout->fields).paddingTop;
    fVar1 = (layout->fields).paddingBottom;
    fVar2 = (layout->fields).offsetX;
    (pGVar3->fields).paddingRight = (layout->fields).paddingRight;
    (pGVar3->fields).paddingTop = fVar4;
    (pGVar3->fields).paddingBottom = fVar1;
    (pGVar3->fields).offsetX = fVar2;
    (pGVar3->fields).offsetY = (layout->fields).offsetY;
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.Code.AottgDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialog___ctor (Gisketch_Aottg2UI_Code_AottgDialog_o* __this, const MethodInfo* method);
// 0x3b5fb10

void Gisketch_Aottg2UI_Code_AottgDialog___ctor
               (Gisketch_Aottg2UI_Code_AottgDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


