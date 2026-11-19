// Type: Gisketch.Aottg2UI.Game.AottgSocialDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSocialDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x58c3500

void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__0 (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58c3520

void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__0
               (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Action_GisketchActionContext__o *__this_02;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075453f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"social-text-");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"share2");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Open");
    il2cpp_codegen_initialize_runtime_metadata(&"social-open-");
    Il2CppMethodInitialized_075453f1 = '\x01';
  }
  __this_01 = (__this->fields).__9__1;
  if (__this_01 == (System_Action_AottgUi__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  __this_00 = &(__this->fields).index;
  pSVar1 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("social-text-",pSVar1,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,4.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,(System_String_o *)0x0,__this_01,pSVar1,pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "Common.Open";
    __this_02 = (__this->fields).__9__2;
    if (__this_02 == (System_Action_GisketchActionContext__o *)0x0) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_02,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__2,
                 (MethodInfo_4A803E0 *)0x0);
      (__this->fields).__9__2 = __this_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    }
    pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("social-open-",pSVar3,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                       (row,1,pSVar1,__this_02,pSVar3,(__this->fields).link,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"share2",
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__1 (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* text, const MethodInfo* method);
// 0x58c3850

void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__1
               (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *text,MethodInfo *method)

{
  int32_t *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075453f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"social-title-");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"social-about-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"About");
    Il2CppMethodInitialized_075453f2 = '\x01';
  }
  pSVar1 = (__this->fields).node;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar1,"Title",(pSVar1->klass->vtable)._7_get_Item.method);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._9_get_Value.method);
      __this_00 = &(__this->fields).index;
      pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("social-title-",pSVar3,(MethodInfo *)0x0);
      if (text != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (text,pSVar2,"text",pSVar3,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).node;
        if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar1 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar1,"About",(pSVar1->klass->vtable)._7_get_Item.method);
          if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar2 = (*(pSVar1->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._9_get_Value.method);
            pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
            pSVar3 = System_String__Concat_52f0320("social-about-",pSVar3,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      (text,pSVar2,"stateMetaText",pSVar3,(System_String_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog.<>c__DisplayClass11_0$$<BuildLink>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__2 (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58c39f0

void Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0___BuildLink_b__2
               (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinks__Show((__this->fields).link,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSocialDialog__get_Title (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, const MethodInfo* method);
// 0x58c2f50

System_String_o *
Gisketch_Aottg2UI_Game_AottgSocialDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075453eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Social");
    Il2CppMethodInitialized_075453eb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Social",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSocialDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, const MethodInfo* method);
// 0x58c2fb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSocialDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"share2");
    Il2CppMethodInitialized_075453ec = '\x01';
  }
  return "share2";
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgSocialDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, const MethodInfo* method);
// 0x58c2fe0

int32_t Gisketch_Aottg2UI_Game_AottgSocialDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgSocialDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, const MethodInfo* method);
// 0x58c2ff0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgSocialDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075453ed = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(760.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(86.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58c30e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c320b: jmp 0x58c3246

void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *a;
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075453ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.SocialPopup.LoadError");
    il2cpp_codegen_initialize_runtime_metadata(&"social-missing");
    Il2CppMethodInitialized_075453ee = '\x01';
  }
  a = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058c324f;
    bVar1 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method);
    if ((bVar1) &&
       (iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method),
       iVar2 != 0)) {
      iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      if (iVar2 < 1) {
        return;
      }
      iVar2 = 0;
      do {
        node = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,iVar2,(a->klass->vtable)._5_get_Item.method);
        Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildLink(body,node,iVar2,in_RCX);
        iVar2 = iVar2 + 1;
        iVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      } while (iVar2 < iVar3);
      return;
    }
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"MainMenu.SocialPopup.LoadError","stateMetaText","social-missing",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_058c324f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58c34a0

void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_075453ef = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$BuildLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildLink (Gisketch_Aottg2UI_Code_AottgUi_o* body, SimpleJSONFixed_JSONNode_o* node, int32_t index, const MethodInfo* method);
// 0x58c3260

void Gisketch_Aottg2UI_Game_AottgSocialDialog__BuildLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,SimpleJSONFixed_JSONNode_o *node,int32_t index,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075453f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"social-link-");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"Link");
    Il2CppMethodInitialized_075453f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgSocialDialog___c__DisplayClass11_0_o *)0x0) {
    (__this->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(__this->fields).node);
    (__this->fields).index = index;
    pSVar1 = (__this->fields).node;
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar1 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar1,"Link",(pSVar1->klass->vtable)._7_get_Item.method);
      if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar2 = (*(pSVar1->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar1,*(MethodInfo **)((long)&(pSVar1->klass->vtable)._9_get_Value + 8));
        (__this->fields).link = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).link);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgSocialDialog_c__DisplayClass11_0_BuildLink_b__0,
                   (MethodInfo_4A81BE0 *)0x0);
        pSVar2 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat_52f0320("social-link-",pSVar2,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,16.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,(MethodInfo *)0x0);
        if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (body,"row",__this_00,pSVar2,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSocialDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSocialDialog___ctor (Gisketch_Aottg2UI_Game_AottgSocialDialog_o* __this, const MethodInfo* method);
// 0x58c3510

void Gisketch_Aottg2UI_Game_AottgSocialDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgSocialDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


