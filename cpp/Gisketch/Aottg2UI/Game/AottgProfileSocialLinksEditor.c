// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileSocialLinksEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor (const MethodInfo* method);
// 0x5908b50

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545675 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
    Il2CppMethodInitialized_07545675 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, const MethodInfo* method);
// 0x5908bc0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x5908bd0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_AddRow);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.AddLink");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-add");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SocialLinks");
    Il2CppMethodInitialized_07545676 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (header,"MainMenu.Profile.SocialLinks","accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_AddRow,
               (MethodInfo_4A803E0 *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                       (header,1,"MainMenu.Profile.AddLink",__this_00,"profile-details-social-add",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"plus",
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(136.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x5908180

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x5908dc0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_string__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar3;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07545677 == '\0') {
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
    Il2CppMethodInitialized_07545677 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
  }
  pSVar3 = "default";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields;
  __this_00 = pGVar2->__9__3_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c_Build_b__3_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c->static_fields;
    pGVar2->__9__3_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__3_1);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = (MethodInfo *)"profile-details-social-header";
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (socials,pSVar3,__this_00,"profile-details-social-header",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).links;
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((pSVar1->fields)._size < 1) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      else {
        pSVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      }
      Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,0,pSVar3,method_00);
      pSVar1 = (__this->fields).links;
      if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
        if ((pSVar1->fields)._size < 2) {
          pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          pSVar3 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,1,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                             );
        }
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,1,pSVar3,method_00);
        pSVar1 = (__this->fields).links;
        if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((pSVar1->fields)._size < 3) {
            pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          else {
            pSVar3 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,2,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
          }
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,2,pSVar3,method_00);
          pSVar1 = (__this->fields).links;
          if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
            if ((pSVar1->fields)._size < 4) {
              pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            }
            else {
              pSVar3 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,3,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_string_get_Item);
            }
            Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,3,pSVar3,method_00);
            pSVar1 = (__this->fields).links;
            if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
              if ((pSVar1->fields)._size < 5) {
                pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
              }
              else {
                pSVar3 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar1,4,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
              }
              Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,4,pSVar3,method_00);
              pSVar1 = (__this->fields).links;
              if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
                if ((pSVar1->fields)._size < 6) {
                  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                }
                else {
                  pSVar3 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar1,5,
                                      (MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_string_get_Item);
                }
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,5,pSVar3,method_00);
                pSVar1 = (__this->fields).links;
                if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
                  if ((pSVar1->fields)._size < 7) {
                    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                  }
                  else {
                    pSVar3 = System_Collections_Generic_List_object___get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar1,6,
                                        (MethodInfo_395CF20 *)
                                        MethodInfo_System_Collections_Generic_List_string_get_Item);
                  }
                  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,6,pSVar3,method_00);
                  pSVar1 = (__this->fields).links;
                  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
                    if ((pSVar1->fields)._size < 8) {
                      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                    }
                    else {
                      pSVar3 = System_Collections_Generic_List_object___get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar1,7,
                                          (MethodInfo_395CF20 *)
                                          MethodInfo_System_Collections_Generic_List_string_get_Item);
                    }
                    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                              (socials,7,pSVar3,method_00);
                    pSVar1 = (__this->fields).links;
                    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
                      iStack_34 = (pSVar1->fields)._size;
                      if (Il2CppMethodInitialized_07545673 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo)
                        ;
                        Il2CppMethodInitialized_07545673 = '\x01';
                      }
                      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
                      }
                      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                      pSVar3 = System_Int32__ToString_54b7520
                                         (&iStack_34,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Code_AottgUi__FormDraft
                                (socials,"profile-details-socials-rows",pSVar3,"Social Links",
                                 (System_String_o *)0x0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x59083a0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x59092f0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_Fields *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_Action_GisketchActionContext__o *__this_01;
  System_String_o *tooltip;
  int iStack_38;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07545678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"https://example.com/profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/share2");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-icon-");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.RemoveSocialLink");
    il2cpp_codegen_initialize_runtime_metadata(&"Social Link ");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-remove-");
    Il2CppMethodInitialized_07545678 = '\x01';
  }
  __this_00 = &__this->fields;
  pSVar1 = System_Int32__ToString(&__this_00->index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-details-social-icon-",pSVar1,(MethodInfo *)0x0);
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
    iStack_34 = __this_00->index;
    if (Il2CppMethodInitialized_07545672 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
      Il2CppMethodInitialized_07545672 = '\x01';
    }
    pSVar1 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320("profile-details-social-",pSVar1,(MethodInfo *)0x0);
    iStack_38 = __this_00->index + 1;
    pSVar5 = System_Int32__ToString(&iStack_38,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320("Social Link ",pSVar5,(MethodInfo *)0x0);
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
      (pGVar6->fields).value = (__this->fields).value;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value);
      pSVar1 = "material-icons/cancel";
      __this_01 = (__this->fields).__9__1;
      if (__this_01 == (System_Action_GisketchActionContext__o *)0x0) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__1
                   ,(MethodInfo_4A803E0 *)0x0);
        (__this->fields).__9__1 = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      pSVar5 = System_Int32__ToString(&__this_00->index,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320("profile-details-social-remove-",pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("MainMenu.Profile.RemoveSocialLink",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                         (row,3,pSVar1,__this_01,pSVar5,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
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
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5909790

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0___SocialRow_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow(context,(__this->fields).index,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5907f90

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this_00;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_01;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754566c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-socials");
    Il2CppMethodInitialized_0754566c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *)0x0) {
    (__this_00->fields).links = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).links);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0,
               (MethodInfo_4A81BE0 *)0x0);
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
                (ui,"default",__this_02,"profile-details-socials",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SocialRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x5908190

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o **targetAddress;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_0754566d == '\0') {
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
    Il2CppMethodInitialized_0754566d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass4_0_o *)0x0) {
    (__this->fields).index = index;
    targetAddress = &(__this->fields).value;
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(targetAddress);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    local_34 = (__this->fields).index;
    if (Il2CppMethodInitialized_07545671 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
      Il2CppMethodInitialized_07545671 = '\x01';
    }
    pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320("profile-details-social-row-",pSVar2,(MethodInfo *)0x0);
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
                         (ui,"default",__this_00,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrWhiteSpace(*targetAddress,(MethodInfo *)0x0);
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
// 0x5908400

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar4;
  int iStack_3c;
  UnityEngine_GameObject_o *pUStack_38;
  
  if (Il2CppMethodInitialized_0754566e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754566e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if ((context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) {
label_05908581:
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  pUStack_38 = context.fields.GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar4 = 0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    do {
      iStack_3c = iVar4;
      if (Il2CppMethodInitialized_07545671 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
        Il2CppMethodInitialized_07545671 = '\x01';
      }
      pSVar3 = System_Int32__ToString(&iStack_3c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,method_00);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_05908581;
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (!bVar1) {
          method_01 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft(pUStack_38,method_01);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RemoveRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t index, const MethodInfo* method);
// 0x59088a0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t index,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_0754566f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_FindComponent_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754566f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05908a97;
    pUVar2 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05908a97;
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    iStack_30 = index;
    if (Il2CppMethodInitialized_07545672 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
      Il2CppMethodInitialized_07545672 = '\x01';
    }
    pSVar3 = System_Int32__ToString(&iStack_30,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("profile-details-social-",pSVar3,(MethodInfo *)0x0);
    __this = Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                       (pUVar2,pSVar3,
                        (MethodInfo_3488770 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_FindComponent_TMP_InputField
                       );
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_05908a97;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    }
    iStack_2c = index;
    if (Il2CppMethodInitialized_07545671 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
      Il2CppMethodInitialized_07545671 = '\x01';
    }
    pSVar3 = System_Int32__ToString(&iStack_2c,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) {
label_05908a97:
        ThrowNullReferenceException();
      }
      method_01 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,false,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft(context.fields.GameObject,method_01);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x5908590

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07545670 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545670 = '\x01';
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform);
    if (pSVar3 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        uVar4 = pSVar3->max_length & 0xffffffff;
        uVar6 = 0;
        do {
          if (uVar4 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          x = (UnityEngine_Object_o *)pSVar3->m_Items[uVar6];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (x == (UnityEngine_Object_o *)0x0) goto label_059086a0;
            __this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Object_o *)0x0) goto label_059086a0;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar2 = System_String__Equals_52ffe30(a,id,4,(MethodInfo *)0x0);
            if (bVar2) {
              pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              return pUVar5;
            }
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      return (UnityEngine_GameObject_o *)0x0;
    }
  }
label_059086a0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$FindComponent<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_3488770* method);
// 0x3588770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3588861: jmp 0x3588866

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_3488770 *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_3488770_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_3488770_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((root == (UnityEngine_Transform_o *)0x0) ||
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,true,
                          (MethodInfo_34B1260 *)
                          method->rgctx_data->_0_UnityEngine_Component_GetComponentsInChildren_T_),
     pSVar3 == (System_Object_array *)0x0)) {
label_03588873:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    uVar4 = pSVar3->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar3->m_Items[uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_03588873;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar2 = System_String__Equals_52ffe30(a,id,4,(MethodInfo *)0x0);
        if (bVar2) {
          return (Il2CppObject *)x;
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)pSVar3->max_length;
      uVar4 = (ulong)uVar1;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId (int32_t index, const MethodInfo* method);
// 0x59083b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_07545671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
    Il2CppMethodInitialized_07545671 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-details-social-row-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$InputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId (int32_t index, const MethodInfo* method);
// 0x5908aa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_07545672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-");
    Il2CppMethodInitialized_07545672 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-details-social-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowsState
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowsState (int32_t count, const MethodInfo* method);
// 0x5908af0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowsState(int32_t count,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_07545673 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07545673 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString_54b7520(&iStack_4,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SyncRowsDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x59086b0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SyncRowsDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  UnityEngine_GameObject_o *source_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  int iVar4;
  int iVar5;
  int local_40;
  int local_3c;
  UnityEngine_GameObject_o *local_38;
  
  if (Il2CppMethodInitialized_07545674 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-details-socials-rows");
    Il2CppMethodInitialized_07545674 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
        goto label_0590873d;
      }
    }
label_0590881a:
    ThrowNullReferenceException();
  }
label_0590873d:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar5 = 0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    iVar4 = 0;
    local_38 = source;
    do {
      local_40 = iVar4;
      if (Il2CppMethodInitialized_07545671 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-details-social-row-");
        Il2CppMethodInitialized_07545671 = '\x01';
      }
      pSVar3 = System_Int32__ToString(&local_40,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,method_00);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_0590881a;
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        iVar5 = iVar5 + (uint)bVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    local_3c = iVar5;
    if (Il2CppMethodInitialized_07545673 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_07545673 = '\x01';
    }
    source_00 = local_38;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar3 = System_Int32__ToString_54b7520(&local_3c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
              (source_00,"profile-details-socials-rows",pSVar3,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, const MethodInfo* method);
// 0x58fe5b0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


