// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGroup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass14_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x18231fe30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231fefd: nop dword ptr [rax]
// asm:   0x18231ff9b: jmp 0x18231ff00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_String_o *fallback;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this_00;
  bool bVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar3;
  System_String_o *pSVar4;
  uint index;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_38;
  
  if (Il2CppMethodInitialized_18434778f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_18434778f = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields).title,(MethodInfo *)0x0);
  index = 0;
  if (!bVar2) {
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) goto label_18231ffc3;
    pSVar4 = (pGVar3->fields)._titleKey;
    fallback = (pGVar3->fields)._title;
    id = System_String__Concat_1969e50((pGVar3->fields)._id,"-header",(MethodInfo *)0x0);
    if (group == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_18231ffc3;
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (group,pSVar4,fallback,"header",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
    while (pGVar1 = (pGVar3->fields)._blocks,
          pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)index) {
        return;
      }
      pGVar3 = (__this->fields).__4__this;
      if ((pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) ||
         (pGVar1 = (pGVar3->fields)._blocks,
         pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0)) break;
      if ((uint)pGVar1->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pGVar1->m_Items[(int)index];
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        pGVar3 = (__this->fields).__4__this;
        if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) break;
        pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId(pGVar3,index,(MethodInfo *)0x0);
        local_38.fields.ScreenTitle = (__this->fields).groupContext.fields.ScreenTitle;
        local_38.fields.CategoryId = (__this->fields).groupContext.fields.CategoryId;
        local_38.fields.CategoryTitle = (__this->fields).groupContext.fields.CategoryTitle;
        local_38.fields.GroupId = (__this->fields).groupContext.fields.GroupId;
        local_38.fields.GroupTitle = (__this->fields).groupContext.fields.GroupTitle;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build
                  (__this_00,group,pSVar4,&local_38,(MethodInfo *)0x0);
      }
      pGVar3 = (__this->fields).__4__this;
      index = index + 1;
      if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) break;
    }
  }
label_18231ffc3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array* rows, const MethodInfo* method);
// 0x18231ba90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               System_String_o *title,Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *rows,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *value;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *obj;
  Il2CppObject *pIVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434778b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_18434778b = '\x01';
  }
  if (rows == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0) {
    rows_00 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  else {
    rows_00 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,(uint32_t)rows->max_length);
    for (uVar2 = 0; (int)uVar2 < (int)rows->max_length; uVar2 = uVar2 + 1) {
      if ((uint)rows->max_length <= uVar2) {
label_18231bbf0:
        ThrowIndexOutOfRangeException();
      }
      value = rows->m_Items[(int)uVar2];
      obj = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)obj,(MethodInfo *)0x0);
      (obj->fields)._descriptor = value;
      Il2CppCodeGenWriteBarrier(&(obj->fields)._descriptor,value);
      if (rows_00 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((rows_00->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
      if ((uint)rows_00->max_length <= uVar2) goto label_18231bbf0;
      rows_00->m_Items[(int)uVar2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)obj;
      Il2CppCodeGenWriteBarrier(rows_00->m_Items + (int)uVar2,obj);
    }
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
            (__this,id,title,rows_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, System_String_o* title, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x18231b9f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               System_String_o *title,Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *value;
  
  if (Il2CppMethodInitialized_184347784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_184347784 = '\x01';
  }
  blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,1);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn(rows,(MethodInfo *)0x0);
  if (blocks != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)blocks->max_length != 0) {
      blocks->m_Items[0] = value;
      Il2CppCodeGenWriteBarrier(blocks->m_Items,value);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b830
                (__this,id,title,blocks,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array* blocks, const MethodInfo* method);
// 0x18231b830

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b830
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               System_String_o *title,Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks,
               MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_184347785 = '\x01';
  }
  (__this->fields)._showHeader = true;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  if (Il2CppMethodInitialized_18434778d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Groups.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434778d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar1) {
    if (id == (System_String_o *)0x0) goto label_18231b9e4;
    bVar1 = System_String__StartsWith(id,"settings-",(MethodInfo *)0x0);
    if (bVar1) {
      if ("settings-" == (System_String_o *)0x0) {
label_18231b9e4:
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__Substring(id,("settings-"->fields)._stringLength,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) goto label_18231b9e4;
      length = System_String__IndexOf(pSVar2,0x2d,(MethodInfo *)0x0);
      if ((0 < length) && (length < (pSVar2->fields)._stringLength + -1)) {
        pSVar3 = System_String__Substring_1972740(pSVar2,0,length,(MethodInfo *)0x0);
        pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar3,(MethodInfo *)0x0);
        pSVar2 = System_String__Substring(pSVar2,length + 1,(MethodInfo *)0x0);
        pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar2,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat_1969590
                           ("SettingsPopup.Groups.",pSVar3,".",pSVar2,(MethodInfo *)0x0);
        goto label_18231b9a4;
      }
    }
  }
  pSVar2 = (System_String_o *)0x0;
label_18231b9a4:
  (__this->fields)._titleKey = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey,pSVar2);
  if (blocks == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,0);
  }
  (__this->fields)._blocks = blocks;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._blocks,blocks);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__get_Id (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__get_Id(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, MethodInfo* method)

{
  return (__this->fields)._id;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HideHeader
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HideHeader (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x18231b520

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HideHeader
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  (__this->fields)._showHeader = false;
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$UseTwoColumnLayout
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x18231b7b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231b7ca: nop word ptr [rax + rax]
// asm:   0x18231b807: jmp 0x18231b7d0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  uint uVar2;
  
  uVar2 = 0;
  pGVar1 = (__this->fields)._blocks;
  while (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar2) {
      return __this;
    }
    pGVar1 = (__this->fields)._blocks;
    if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar1->m_Items[(int)uVar2] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
                (pGVar1->m_Items[(int)uVar2],0,(MethodInfo *)0x0);
    }
    uVar2 = uVar2 + 1;
    pGVar1 = (__this->fields)._blocks;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x18231ae10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *pGVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_48;
  
  if (Il2CppMethodInitialized_184347786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass14_0_Build_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    Il2CppMethodInitialized_184347786 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass14_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle(__this,(MethodInfo *)0x0);
    (object->fields).title = pSVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).title,pSVar1);
    pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup
                       (&local_48,&(__this->fields)._searchContext,(__this->fields)._id,(object->fields).title
                        ,(MethodInfo *)0x0);
    pSVar4 = (pGVar2->fields).CategoryId;
    pSVar5 = (pGVar2->fields).CategoryTitle;
    pSVar6 = (pGVar2->fields).GroupId;
    pSVar1 = (pGVar2->fields).GroupTitle;
    (object->fields).groupContext.fields.ScreenTitle = (pGVar2->fields).ScreenTitle;
    (object->fields).groupContext.fields.CategoryId = pSVar4;
    (object->fields).groupContext.fields.CategoryTitle = pSVar5;
    (object->fields).groupContext.fields.GroupId = pSVar6;
    (object->fields).groupContext.fields.GroupTitle = pSVar1;
    Il2CppCodeGenWriteBarrier((void **)&(object->fields).groupContext,(void *)0x0);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass14_0_Build_b__0,
               (MethodInfo *)0x0);
    pSVar1 = (__this->fields)._id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,20.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"clear",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
                         (&(object->fields).groupContext,(MethodInfo *)0x0);
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                         (&(object->fields).groupContext,(object->fields).title,(MethodInfo *)0x0);
      pSVar1 = (object->fields).groupContext.fields.CategoryId;
      pSVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
                         (&(object->fields).groupContext,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Search
                        (pSVar4,pSVar5,false,"menuList","section",pSVar1,pSVar6,false,
                         (MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = value;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).search,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ea430

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18231b6f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231b78c: jmp 0x18231b754
// asm:   0x18231b78e: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  bool bVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347787 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347787 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._blocks;
  while (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return;
    }
    pGVar1 = (__this->fields)._blocks;
    if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar1->m_Items[(int)uVar3] != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState
                (pGVar1->m_Items[(int)uVar3],root,(MethodInfo *)0x0);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._blocks;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, bool separateFromPreviousGroup, const MethodInfo* method);
// 0x18231aa50
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231ab8c: nop dword ptr [rax]
// asm:   0x18231ac0e: jmp 0x18231ab90
// asm:   0x18231ac10: mov rdi, qword ptr [rsp + 0xc8]
// asm:   0x18231ac18: mov rbp, qword ptr [rsp + 0xc0]
// asm:   0x18231ac20: mov r12, qword ptr [rsp + 0xd0]
// asm:   0x18231ac28: movaps xmm6, xmmword ptr [rsp + 0x90]
// asm:   0x18231ac30: movaps xmm7, xmmword ptr [rsp + 0x80]
// asm:   0x18231ac38: movaps xmm8, xmmword ptr [rsp + 0x70]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,
               bool separateFromPreviousGroup,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  uint index;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_78 [2];
  
  if (Il2CppMethodInitialized_184347788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_184347788 = '\x01';
  }
  if ((items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) ||
     (owner == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
    return;
  }
  pSVar1 = (context->fields).CategoryId;
  pSVar3 = (context->fields).CategoryTitle;
  pSVar4 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar3;
  (__this->fields)._searchContext.fields.GroupId = pSVar4;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle(__this,(MethodInfo *)0x0);
  index = 0;
  pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup
                     (local_78,&(__this->fields)._searchContext,(__this->fields)._id,pSVar8,(MethodInfo *)0x0)
  ;
  pSVar3 = (pGVar9->fields).ScreenTitle;
  pSVar4 = (pGVar9->fields).CategoryId;
  pSVar5 = (pGVar9->fields).CategoryTitle;
  pSVar6 = (pGVar9->fields).GroupId;
  pSVar1 = (pGVar9->fields).GroupTitle;
  if (((__this->fields)._showHeader != false) &&
     (bVar7 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0), !bVar7)) {
    local_78[0].fields.ScreenTitle = pSVar3;
    local_78[0].fields.CategoryId = pSVar4;
    local_78[0].fields.CategoryTitle = pSVar5;
    local_78[0].fields.GroupId = pSVar6;
    local_78[0].fields.GroupTitle = pSVar1;
    pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode
                        (__this,pSVar8,local_78,separateFromPreviousGroup,(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(items,pGVar10);
  }
  pGVar2 = (__this->fields)._blocks;
  while (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)pGVar2->max_length <= (int)index) {
      return;
    }
    pGVar2 = (__this->fields)._blocks;
    if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
    if ((uint)pGVar2->max_length <= index) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pGVar2->m_Items[(int)index];
    if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
      local_78[0].fields.ScreenTitle = pSVar3;
      local_78[0].fields.CategoryId = pSVar4;
      local_78[0].fields.CategoryTitle = pSVar5;
      local_78[0].fields.GroupId = pSVar6;
      local_78[0].fields.GroupTitle = pSVar1;
      pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId(__this,index,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems
                (__this_00,items,owner,pSVar8,local_78,0 < (int)index,(MethodInfo *)0x0);
    }
    index = index + 1;
    pGVar2 = (__this->fields)._blocks;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BlockId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, int32_t index, const MethodInfo* method);
// 0x18231ac60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  System_String_o *str2;
  System_String_o *pSVar2;
  int32_t local_res10 [6];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184347789 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-block-");
    Il2CppMethodInitialized_184347789 = '\x01';
  }
  pGVar1 = (__this->fields)._blocks;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    pSVar2 = (__this->fields)._id;
    if ((int)pGVar1->max_length == 1) {
      return pSVar2;
    }
    str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969b70(pSVar2,"-block-",str2,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HeaderNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o groupContext, bool separateFromPreviousGroup, const MethodInfo* method);
// 0x18231b250

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *title,
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *groupContext,
          bool separateFromPreviousGroup,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *title_00;
  System_String_o *keywords;
  System_String_o *sectionTitle;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value_00;
  
  if (Il2CppMethodInitialized_18434778a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_18434778a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Text");
    pSVar1 = System_String__Concat_1969e50((__this->fields)._id,"-header",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
    (__this_00->fields).text = title;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,title);
    pSVar1 = (__this->fields)._titleKey;
    (__this_00->fields).textKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey,pSVar1);
    (__this_00->fields).style = "header";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"header");
    pSVar1 = (System_String_o *)0x0;
    if (separateFromPreviousGroup) {
      pSVar1 = "SettingsSpacingBefore";
    }
    (__this_00->fields).value = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar1);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    title_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
                         (groupContext,(MethodInfo *)0x0);
    keywords = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                         (groupContext,title,(MethodInfo *)0x0);
    pSVar1 = (groupContext->fields).CategoryId;
    sectionTitle = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
                             (groupContext,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Search
                         (title_00,keywords,false,"menuList","section",pSVar1,
                          sectionTitle,false,(MethodInfo *)0x0);
    (__this_00->fields).search = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).search,value_00);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BuildRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BuildRows (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array* rows, const MethodInfo* method);
// 0x18231ace0

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BuildRows
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *value;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *obj;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434778b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_18434778b = '\x01';
  }
  if (rows == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar1;
  }
  pGVar1 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,(uint32_t)rows->max_length);
  uVar3 = 0;
  while( true ) {
    if ((int)rows->max_length <= (int)uVar3) {
      return pGVar1;
    }
    if ((uint)rows->max_length <= uVar3) break;
    value = rows->m_Items[(int)uVar3];
    obj = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)obj,(MethodInfo *)0x0);
    (obj->fields)._descriptor = value;
    Il2CppCodeGenWriteBarrier(&(obj->fields)._descriptor,value);
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pGVar1->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((uint)pGVar1->max_length <= uVar3) break;
    pGVar1->m_Items[(int)uVar3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)obj;
    Il2CppCodeGenWriteBarrier(pGVar1->m_Items + (int)uVar3,obj);
    uVar3 = uVar3 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$LocalizedTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x18231b530

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  System_String_o *fallback;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434778c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_18434778c = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._title;
  }
  pSVar2 = (__this->fields)._titleKey;
  fallback = (__this->fields)._title;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,fallback,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$GroupTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey (System_String_o* id, const MethodInfo* method);
// 0x18231b100

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434778d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Groups.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434778d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (id != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(id,"settings-",(MethodInfo *)0x0);
    if (!bVar1) {
      return (System_String_o *)0x0;
    }
    if (("settings-" != (System_String_o *)0x0) &&
       (pSVar2 = System_String__Substring(id,("settings-"->fields)._stringLength,(MethodInfo *)0x0),
       pSVar2 != (System_String_o *)0x0)) {
      length = System_String__IndexOf(pSVar2,0x2d,(MethodInfo *)0x0);
      if (length < 1) {
        return (System_String_o *)0x0;
      }
      if ((pSVar2->fields)._stringLength + -1 <= length) {
        return (System_String_o *)0x0;
      }
      pSVar3 = System_String__Substring_1972740(pSVar2,0,length,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar3,(MethodInfo *)0x0);
      pSVar2 = System_String__Substring(pSVar2,length + 1,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar2,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969590
                         ("SettingsPopup.Groups.",pSVar3,".",pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Pascal
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal (System_String_o* value, const MethodInfo* method);
// 0x18231b5b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(System_String_o *value,MethodInfo *method)

{
  int32_t capacity;
  bool bVar1;
  uint16_t c;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar2;
  int index;
  
  if (Il2CppMethodInitialized_18434778e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_18434778e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    capacity = (value->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_1980e60(__this,capacity,(MethodInfo *)0x0);
    index = 0;
    bVar1 = true;
    while (index < (value->fields)._stringLength) {
      c = System_String__get_Chars(value,index,(MethodInfo *)0x0);
      if (c == 0x2d) {
        bVar1 = true;
        index = index + 1;
      }
      else {
        if (bVar1) {
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          c = System_Char__ToUpperInvariant(c,(MethodInfo *)0x0);
        }
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_18231b6e0;
        System_Text_StringBuilder__Append_197e090(__this,c,(MethodInfo *)0x0);
        bVar1 = false;
        index = index + 1;
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar2 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
label_18231b6e0:
  ThrowNullReferenceException();
}


