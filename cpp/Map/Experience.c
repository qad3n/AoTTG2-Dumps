// Type: Map.Experience
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/Experience.cs
// Prior real C# source: none
// --------------------------------

// Map.Experience$$.ctor
// il2cpp: void Map_Experience___ctor (Map_Experience_o* __this, System_String_o* category, System_String_o* subCategory, System_String_o* name, System_String_o* description, System_String_o* preview, bool hasScoring, const MethodInfo* method);
// 0x181e8adb0

void Map_Experience___ctor
               (Map_Experience_o *__this,System_String_o *category,System_String_o *subCategory,
               System_String_o *name,System_String_o *description,System_String_o *preview,bool hasScoring,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Category = category;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Category,category);
  (__this->fields).SubCategory = subCategory;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory,subCategory);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
  (__this->fields).Description = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Description,description);
  (__this->fields).Preview = preview;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Preview,preview);
  (__this->fields).HasScoring = hasScoring;
  return;
}


// Map.Experience$$.ctor
// il2cpp: void Map_Experience___ctor (Map_Experience_o* __this, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x181e8ab80

void Map_Experience___ctor_1e8ab80
               (Map_Experience_o *__this,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  System_String_o *value_03;
  
  if (Il2CppMethodInitialized_184345047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"SubCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"HasScoring");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_184345047 = '\x01';
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"Category");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    value = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                      ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"SubCategory");
    value_00 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"Name");
    value_01 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"Description");
    value_02 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"Preview");
    value_03 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"HasScoring");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      bVar1 = (bool)(*(code *)((Il2CppClass *)pSVar2->klass)->vtable[39].methodPtr)(pSVar2);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Category = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Category,value);
      (__this->fields).SubCategory = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SubCategory,value_00);
      (__this->fields).Name = value_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Name,value_01);
      (__this->fields).Description = value_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Description,value_02);
      (__this->fields).Preview = value_03;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Preview,value_03);
      (__this->fields).HasScoring = bVar1;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.Experience$$Serialize
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_Experience__Serialize (Map_Experience_o* __this, const MethodInfo* method);
// 0x181e8a9b0

SimpleJSONFixed_JSONNode_o * Map_Experience__Serialize(Map_Experience_o *__this,MethodInfo *method)

{
  System_String_o *s;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"SubCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"HasScoring");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_184345048 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  s = (__this->fields).Name;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"Name",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit((__this->fields).Category,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"Category",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit((__this->fields).SubCategory,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"SubCategory",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit((__this->fields).Description,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"Description",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit((__this->fields).Preview,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"Preview",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0((__this->fields).HasScoring,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,"HasScoring",pSVar1,(__this_00->klass->vtable)._20_Add.method);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
  ThrowNullReferenceException();
}


