// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileSocialLinksEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor (const MethodInfo* method);
// 0x181e27730

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this;
  
  if (Il2CppMethodInitialized_184344d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
    Il2CppMethodInitialized_184344d01 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor(Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x181e24030

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_AddRow);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Social Links");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-add");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Add Link");
    Il2CppMethodInitialized_184344d02 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (header,"Social Links","accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_AddRow,
               (MethodInfo_1387DC0 *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                       (header,1,"Add Link",(System_Action_GisketchActionContext__o *)__this_00,
                        "profile-details-social-add",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"plus",
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(136.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x181e25370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e255cd: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_string__o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  int index;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344d03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c_Build_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-header");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Social Links");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-socials-rows");
    Il2CppMethodInitialized_184344d03 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
  }
  pSVar2 = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9__3_1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c_Build_b__3_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9__3_1 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9__3_1,
               __this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  index = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (socials,pSVar2,(System_Action_AottgUi__o *)__this_00,"profile-details-social-header",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    do {
      pSVar1 = (__this->fields).links;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e256c6;
      if (index < (pSVar1->fields)._size) {
        pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      }
      else {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,index,pSVar2,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < 8);
    pSVar1 = (__this->fields).links;
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      local_res10[0] = (pSVar1->fields)._size;
      if (Il2CppMethodInitialized_184344cff == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
        Il2CppMethodInitialized_184344cff = '\x01';
      }
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString_1b29900
                         (local_res10,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__FormDraft
                (socials,"profile-details-socials-rows",pSVar2,"Social Links",(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_181e256c6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e26060

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  int32_t local_res8 [2];
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344d04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"https://example.com/profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/share2");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove social link");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-icon-");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Social Link ");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-remove-");
    Il2CppMethodInitialized_184344d04 = '\x01';
  }
  local_res8[0] = 0;
  pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-details-social-icon-",pSVar1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    local_res10[0] = (__this->fields).index;
    if (Il2CppMethodInitialized_184344cfe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
      Il2CppMethodInitialized_184344cfe = '\x01';
    }
    pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("profile-details-social-",pSVar1,(MethodInfo *)0x0);
    local_res8[0] = (__this->fields).index + 1;
    pSVar5 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50("Social Link ",pSVar5,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__FormInput
                       (row,pSVar1,pSVar5,"https://example.com/profile",0,"inputField",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x100,
                        (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
                       );
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar1 = (__this->fields).value;
      (pGVar6->fields).value = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value,pSVar1);
      pSVar1 = "material-icons/cancel";
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
      if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__1
                   ,(MethodInfo_1387DC0 *)0x0);
        (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      pSVar5 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("profile-details-social-remove-",pSVar5,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                         (row,3,pSVar1,(System_Action_GisketchActionContext__o *)__this_00,pSVar5,
                          "Remove social link",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout,pGVar4);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e26580

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow
            (&local_28,(__this->fields).index,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e1e210

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *object;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-socials");
    Il2CppMethodInitialized_184344cf8 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *)0x0) {
    (object->fields).links = __this_00;
    Il2CppCodeGenWriteBarrier(&(object->fields).links,__this_00);
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0,
               (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",(System_Action_AottgUi__o *)__this_01,"profile-details-socials",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SocialRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x181e1e840

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344cf9 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *)0x0) {
    (object->fields).index = index;
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__0
               ,(MethodInfo *)0x0);
    local_res10[0] = (object->fields).index;
    if (Il2CppMethodInitialized_184344cfd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
      Il2CppMethodInitialized_184344cfd = '\x01';
    }
    pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("profile-details-social-row-",pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",(System_Action_AottgUi__o *)__this,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrWhiteSpace((object->fields).value,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).active = !bVar1;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$AddRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e1e080

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  int iVar4;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_184344cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344cfa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if ((__this == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) {
label_181e1e202:
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    iVar4 = 0;
    do {
      local_res8[0] = iVar4;
      if (Il2CppMethodInitialized_184344cfd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
        Il2CppMethodInitialized_184344cfd = '\x01';
      }
      pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_181e1e202;
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (!bVar1) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft
                    ((context->fields).GameObject,(MethodInfo *)0x0);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RemoveRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t index, const MethodInfo* method);
// 0x181e1e580

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,int32_t index,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *x;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_FindComponent_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344cfb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e1e784;
    pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e1e784;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    local_res8[0] = index;
    if (Il2CppMethodInitialized_184344cfe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
      Il2CppMethodInitialized_184344cfe = '\x01';
    }
    pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-details-social-",pSVar3,(MethodInfo *)0x0);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar2,pSVar3,
                           (MethodInfo_68BAB0 *)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_FindComponent_TMP_InputField
                          );
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_181e1e784;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    }
    local_res8[0] = index;
    if (Il2CppMethodInitialized_184344cfd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
      Il2CppMethodInitialized_184344cfd = '\x01';
    }
    pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) {
label_181e1e784:
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,false,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft
              ((context->fields).GameObject,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x181e1e410
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1e47c: nop dword ptr [rax]

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344cfc = '\x01';
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform),
     pSVar2 != (System_Object_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pSVar2->max_length <= (int)uVar4) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if ((uint)pSVar2->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__Equals_196c550(a,id,4,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          return pUVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$FindComponent<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68BAB0* method);
// 0x18068bab0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068bb19: nop dword ptr [rax]
// asm:   0x18068bb9c: mov rax, rdi

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_68BAB0 *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68BAB0_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68BAB0_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,true,
                          (MethodInfo_665440 *)
                          method->rgctx_data->_0_UnityEngine_Component_GetComponentsInChildren_T_),
     pSVar2 != (System_Object_array *)0x0)) {
    uVar3 = 0;
    do {
      if ((int)pSVar2->max_length <= (int)uVar3) {
        return (Il2CppObject *)0x0;
      }
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__Equals_196c550(a,id,4,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
      uVar3 = uVar3 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId (int32_t index, const MethodInfo* method);
// 0x181e1e790

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = index;
  if (Il2CppMethodInitialized_184344cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
    Il2CppMethodInitialized_184344cfd = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-details-social-row-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$InputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId (int32_t index, const MethodInfo* method);
// 0x181e1e530

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = index;
  if (Il2CppMethodInitialized_184344cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
    Il2CppMethodInitialized_184344cfe = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-details-social-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowsState
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowsState (int32_t count, const MethodInfo* method);
// 0x181e1e7e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowsState(int32_t count,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = count;
  if (Il2CppMethodInitialized_184344cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184344cff = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString_1b29900(local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SyncRowsDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181e1ea90

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  System_Globalization_CultureInfo_o *provider;
  int iVar4;
  int iVar5;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_184344d00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-socials-rows");
    Il2CppMethodInitialized_184344d00 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
        goto label_181e1eb29;
      }
    }
label_181e1ec73:
    ThrowNullReferenceException();
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
label_181e1eb29:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      local_res8[0] = iVar5;
      if (Il2CppMethodInitialized_184344cfd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
        Il2CppMethodInitialized_184344cfd = '\x01';
      }
      pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_181e1ec73;
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        iVar4 = (iVar4 + 1) - (uint)!bVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    local_res8[0] = iVar4;
    if (Il2CppMethodInitialized_184344cff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_184344cff = '\x01';
    }
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar3 = System_Int32__ToString_1b29900(local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
              (source,"profile-details-socials-rows",pSVar3,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor(Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


