// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenSection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x45353d0

void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass13_0$$<.ctor>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0____ctor_b__0 (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __, const MethodInfo* method);
// 0x45355f0

void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0____ctor_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __,
               MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  code *vtableDispatch;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_c *pGVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_c *in_RCX;
  Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_c *str2;
  undefined4 in_R8D;
  
  pSVar1 = (__this->fields).buildContent;
  if (pSVar1 != (System_Action_AottgUi__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)((pSVar1->fields).method_code,ui,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeed9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057aeed9 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_c *)
           System_String__Concat_3af7150
                     ((System_String_o *)ui,"-",(System_String_o *)str2,(MethodInfo *)0x0);
  __this->klass = pGVar3;
  il2cpp_runtime_helper_022b4080(__this,pGVar3);
  (__this->fields).buildContent = (System_Action_AottgUi__o *)str2;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)in_RCX,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    in_RCX = str2;
  }
  __this[1].klass = in_RCX;
  il2cpp_runtime_helper_022b4080(__this + 1,in_RCX);
  *(undefined4 *)&__this->monitor = in_R8D;
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$get_HasHeaderActions
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, const MethodInfo* method);
// 0x4535280

bool_conflict
Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions
          (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),method->virtualMethodPointer != (Il2CppMethodPointer)0x0);
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, System_Action_AottgUi__o* buildContent, System_String_o* textKey, System_String_o* keywords, bool autoAddKeywords, System_String_o* searchTitle, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x4535290

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this,System_String_o *id,System_String_o *label,
               System_String_o *icon,System_Action_AottgUi__o *buildContent,System_String_o *textKey,
               System_String_o *keywords,bool_conflict autoAddKeywords,System_String_o *searchTitle,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,
               bool_conflict hideSearch,bool_conflict hideHeader,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this_00;
  Il2CppObject *__this_01;
  System_String_o *textKey_00;
  bool_conflict unaff_EBX;
  Il2CppObject *__this_02;
  bool_conflict unaff_R12D;
  MethodInfo *unaff_R13;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffa8;
  
  if (g_data_057aeed7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass13_0);
    g_data_057aeed7 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass13_0);
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].klass = (Il2CppClass *)textKey;
    uVar1 = 0x453533e;
    il2cpp_runtime_helper_022b4080(__this_01 + 1,textKey);
    if (__this_01[1].klass == (Il2CppClass *)0x0) {
      textKey_00 = (System_String_o *)0x0;
    }
    else {
      textKey_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      uVar1 = 0x453536e;
      System_Action_object__AottgScreenSectionContext____ctor();
    }
    __this_00.fields._buildHeaderActions._1_7_ = 0;
    __this_00.fields._0_9_ = __this.fields._0_9_;
    __this_00.fields.Id = __this.fields.Id;
    __this_00.fields.Label = __this.fields.Label;
    __this_00.fields.TextKey._0_1_ = __this.fields.TextKey._0_1_;
    __this_00.fields.TextKey._1_7_ = 0;
    __this_00.fields.Icon._0_1_ = __this.fields.Icon._0_1_;
    __this_00.fields.Icon._1_7_ = 0;
    __this_00.fields.SearchTitle = (System_String_o *)in_stack_ffffffffffffff98;
    __this_00.fields.Keywords = (System_String_o *)uVar1;
    __this_00.fields.AutoAddKeywords = (int)in_stack_ffffffffffffffa8;
    __this_00.fields.HideSearch = (int)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
    __this_00.fields._72_8_ = icon;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
              (__this_00,id,label,icon,(System_Action_AottgUi__AottgScreenSectionContext__o *)buildContent,
               textKey_00,keywords,(bool_conflict)buildContent,id,
               (System_Action_AottgUi__AottgScreenSectionContext__o *)label,unaff_EBX,unaff_R12D,unaff_R13);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, System_Action_AottgUi__AottgScreenSectionContext__o* buildContent, System_String_o* textKey, System_String_o* keywords, bool autoAddKeywords, System_String_o* searchTitle, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x45353e0

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this,System_String_o *id,System_String_o *label,
               System_String_o *icon,System_Action_AottgUi__AottgScreenSectionContext__o *buildContent,
               System_String_o *textKey,System_String_o *keywords,bool_conflict autoAddKeywords,
               System_String_o *searchTitle,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,
               bool_conflict hideSearch,bool_conflict hideHeader,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_Fields SVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    label = icon;
  }
  SVar2 = (System_String_Fields)Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId(label,method_00);
  id->fields = SVar2;
  il2cpp_runtime_helper_022b4080(&id->fields);
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    icon = *(System_String_o **)&id->fields;
  }
  id[1].klass = (System_String_c *)icon;
  il2cpp_runtime_helper_022b4080(id + 1,icon);
  id[1].monitor = keywords;
  il2cpp_runtime_helper_022b4080(&id[1].monitor,keywords);
  id[1].fields = (System_String_Fields)buildContent;
  il2cpp_runtime_helper_022b4080(&id[1].fields);
  bVar1 = System_String__IsNullOrEmpty(__this.fields.Id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this.fields.Id = (System_String_o *)id[1].klass;
  }
  id[2].klass = (System_String_c *)__this.fields.Id;
  il2cpp_runtime_helper_022b4080(id + 2,__this.fields.Id);
  id[2].monitor = __this.fields._buildContent;
  il2cpp_runtime_helper_022b4080(&id[2].monitor);
  *(undefined1 *)&id[2].fields._stringLength = __this.fields._buildHeaderActions._0_1_;
  *(undefined1 *)((long)&id[2].fields._stringLength + 1) = __this.fields.TextKey._0_1_;
  *(undefined1 *)((long)&id[2].fields._stringLength + 2) = __this.fields.Icon._0_1_;
  id->klass = (System_String_c *)textKey;
  il2cpp_runtime_helper_022b4080(id);
  id->monitor = __this.fields.Label;
  il2cpp_runtime_helper_022b4080(&id->monitor);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__Build (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x45355c0

void Gisketch_Aottg2UI_Game_AottgScreenSection__Build
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  if (ui->klass != (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0) {
    il2cpp_runtime_helper_04558d00(ui->klass,method,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$BuildHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x45355d0

void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  if (ui->monitor != (void *)0x0) {
    il2cpp_runtime_helper_04558d00(ui->monitor,method,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId (System_String_o* value, const MethodInfo* method);
// 0x4535530

System_String_o * Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *__this;
  System_String_o *pSVar2;
  
  pSVar2 = value;
  if (g_data_057aeed8 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    pSVar2 = (System_String_o *)&"-";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeed8 = '\x01';
  }
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), value != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(value,(MethodInfo *)0x0);
    pSVar2 = value;
    if (pSVar1 != (System_String_o *)0x0) {
      __this = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      pSVar2 = pSVar1;
      if (__this != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace_3af9030(__this," ","-",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (pSVar2->klass != (System_String_c *)0x0) {
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_04558d00();
    return pSVar2;
  }
  return pSVar1;
}


