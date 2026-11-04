// Type: Settings.PresetDefinition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/PresetDefinition.cs
// Prior real C# source: none
// --------------------------------

// Settings.PresetDefinition.<>c$$.cctor
// il2cpp: void Settings_PresetDefinition___c___cctor (const MethodInfo* method);
// 0x181dd0530

void Settings_PresetDefinition___c___cctor(MethodInfo *method)

{
  Settings_PresetDefinition___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition_c);
    Il2CppMethodInitialized_184344a34 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Settings_PresetDefinition_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetDefinition_c->static_fields->__9,__this);
  return;
}


// Settings.PresetDefinition.<>c$$.ctor
// il2cpp: void Settings_PresetDefinition___c___ctor (Settings_PresetDefinition___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_PresetDefinition___c___ctor(Settings_PresetDefinition___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.PresetDefinition.<>c$$<get_DefaultVariant>b__9_0
// il2cpp: bool Settings_PresetDefinition___c___get_DefaultVariant_b__9_0 (Settings_PresetDefinition___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181dd0470

bool Settings_PresetDefinition___c___get_DefaultVariant_b__9_0
               (Settings_PresetDefinition___c_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184344a35 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(name,"Default",5,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.PresetDefinition$$get_DefaultVariant
// il2cpp: System_String_o* Settings_PresetDefinition__get_DefaultVariant (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x181dc8930

System_String_o *
Settings_PresetDefinition__get_DefaultVariant(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_string__List_string___o *__this_00;
  System_Collections_Generic_IEnumerable_TKey__o *pSVar1;
  System_Func_string__bool__o *__this_01;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PresetDefinition_c);
    Il2CppMethodInitialized_184344a2e = '\x01';
  }
  if ((__this->fields).Variants == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).Variants,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    if ((TypeInfo_Settings_PresetDefinition_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
    }
    __this_01 = TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0;
    if (__this_01 == (System_Func_string__bool__o *)0x0) {
      if ((TypeInfo_Settings_PresetDefinition_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_PresetDefinition_c);
      }
      object = (Il2CppObject *)TypeInfo_Settings_PresetDefinition_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_01,object,
                 (intptr_t)MethodInfo_Settings_PresetDefinition_c_get_DefaultVariant_b__9_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_PresetDefinition_c->static_fields->__9__9_0,__this_01);
    }
    pSVar2 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
    if (pSVar2 == (System_String_o *)0x0) {
      __this_00 = (__this->fields).Variants;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar1 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                          (MethodInfo_13C6500 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
      pSVar2 = System_Linq_Enumerable__FirstOrDefault_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                          (MethodInfo_6BD090 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string);
      if (pSVar2 == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
  }
  return pSVar2;
}


// Settings.PresetDefinition$$FromJson
// il2cpp: Settings_PresetDefinition_o* Settings_PresetDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x181dc79c0

Settings_PresetDefinition_o * Settings_PresetDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Settings_PresetDefinition_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *experience;
  System_Collections_Generic_Dictionary_string__List_string___o *value;
  Il2CppClass *klass;
  System_IO_InvalidDataException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184344a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_PresetDefinition);
    Il2CppMethodInitialized_184344a2f = '\x01';
  }
  pSVar1 = UnityEngine_JsonUtility__FromJson_object_
                     (json,(MethodInfo_715EE0 *)MethodInfo_UnityEngine_JsonUtility_FromJson_PresetDefinition);
  if (pSVar1 != (Settings_PresetDefinition_o *)0x0) {
    if (Il2CppMethodInitialized_1843449eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449eb = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    experience = SimpleJSONFixed_JSONNode__Parse(json,(MethodInfo *)0x0);
    value = Settings_PresetDefinition__ReadVariants(experience,(MethodInfo *)0x0);
    (pSVar1->fields).Variants = value;
    Il2CppCodeGenWriteBarrier(&(pSVar1->fields).Variants,value);
    return pSVar1;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
  __this = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Experience resource is invalid.");
  System_IO_InvalidDataException___ctor_2902f10(__this,message,(MethodInfo *)0x0);
  lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_FromJson);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// Settings.PresetDefinition$$ReadVariants
// il2cpp: System_Collections_Generic_Dictionary_string__List_string___o* Settings_PresetDefinition__ReadVariants (SimpleJSONFixed_JSONNode_o* experience, const MethodInfo* method);
// 0x181dc7c10
// eh: try 0x181dc7ef0..0x181dc8182 -> pad 0x1833253b0 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181dc8182..0x181dc8220 -> pad 0x18333c180 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_FormatException]
// eh: try 0x181dc8220..0x181dc826a -> pad 0x18333c150 catch Il2CppExceptionWrapper
// eh: try 0x181dc826a..0x181dc8276 -> pad 0x180014200 cleanup
// eh: try 0x181dc8276..0x181dc82ae -> pad 0x18333c180 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_FormatException]
// eh: try 0x181dc82ae..0x181dc8533 -> pad 0x1833253b0 (+3 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181dc8533..0x181dc853e -> pad 0x18333c180 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_FormatException]
// eh: try 0x181dc853e..0x181dc886c -> pad 0x1833253b0 catch Il2CppExceptionWrapper
// asm: 205 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc8146: mov r8, qword ptr [rsp + 0x58]
// asm:   0x181dc814b: cmp qword ptr [r8], 0
// asm:   0x181dc814f: je 0x181dc8162
// asm:   0x181dc8151: xor ecx, ecx
// asm:   0x181dc8153: mov r8, qword ptr [r8]
// asm:   0x181dc8156: mov rdx, qword ptr [rip + 0x22d11a3]  ; TypeInfo_System_IDisposable
// asm:   0x181dc815d: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dc8162: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181dc8167: test rcx, rcx
// asm:   0x181dc816a: jne 0x181dc84bd
// asm:   0x181dc8170: xor r15d, r15d
// asm:   0x181dc8173: mov r13, qword ptr [rsp + 0x20]
// asm:   0x181dc8178: mov r12, qword ptr [rsp + 0x30]
// asm:   0x181dc817d: mov rsi, qword ptr [rsp + 0x28]
// asm:   0x181dc821d: nop dword ptr [rax]
// asm:   0x181dc826a: jmp 0x181dc8220
// asm:   0x181dc827d: mov rdx, qword ptr [rip + 0x22d3acc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dc8284: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181dc8289: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc828e: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181dc8293: test rcx, rcx
// asm:   0x181dc8296: jne 0x181dc8533
// asm:   0x181dc829c: xor r15d, r15d
// asm:   0x181dc829f: mov r13, qword ptr [rsp + 0x20]
// asm:   0x181dc82a4: mov r12, qword ptr [rsp + 0x30]
// asm:   0x181dc82a9: mov rsi, qword ptr [rsp + 0x28]
// asm:   0x181dc82ee: mov r8, qword ptr [rsp + 0x48]
// asm:   0x181dc82f3: cmp qword ptr [r8], 0
// asm:   0x181dc82f7: je 0x181dc830a
// asm:   0x181dc82f9: xor ecx, ecx
// asm:   0x181dc82fb: mov r8, qword ptr [r8]
// asm:   0x181dc82fe: mov rdx, qword ptr [rip + 0x22d0ffb]  ; TypeInfo_System_IDisposable
// asm:   0x181dc8305: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dc830a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181dc830f: test rcx, rcx
// asm:   0x181dc8312: jne 0x181dc886c
// asm:   0x181dc8318: mov r13, qword ptr [rsp + 0x20]
// asm:   0x181dc84bd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181dc8533: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181dc853e: lea rcx, [rsp + 0x90]
// asm:   0x181dc8546: call 0x180012a10  ; il2cpp_runtime_helper_180012a10()
// asm:   0x181dc854b: mov rdi, rax
// asm:   0x181dc854e: lea rcx, [rip + 0x22e5a8b]  ; TypeInfo_string_array
// asm:   0x181dc8555: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc855a: mov edx, 6
// asm:   0x181dc855f: mov rcx, rax
// asm:   0x181dc8562: call 0x180416200  ; SZArrayNew()
// asm:   0x181dc8567: mov rbx, rax
// asm:   0x181dc856a: mov rcx, rax
// asm:   0x181dc856d: call 0x180001e10  ; NullCheck()
// asm:   0x181dc8572: lea rcx, [rip + 0x22fb92f]  ; "Invalid variant "
// asm:   0x181dc8579: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc857e: mov r8, rax
// asm:   0x181dc8581: xor edx, edx
// asm:   0x181dc8583: mov rcx, rbx
// asm:   0x181dc8586: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc858b: lea rcx, [rip + 0x232c82e]  ; MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key
// asm:   0x181dc8592: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc8597: mov rdx, rax
// asm:   0x181dc859a: lea rcx, [rsp + 0x30]
// asm:   0x181dc859f: call 0x180016580  ; il2cpp_runtime_helper_180016580()
// asm:   0x181dc85a4: mov rsi, rax
// asm:   0x181dc85a7: mov rcx, rbx
// asm:   0x181dc85aa: call 0x180001e10  ; NullCheck()
// asm:   0x181dc85af: mov r8, rsi
// asm:   0x181dc85b2: mov edx, 1
// asm:   0x181dc85b7: mov rcx, rbx
// asm:   0x181dc85ba: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc85bf: mov rcx, rbx
// asm:   0x181dc85c2: call 0x180001e10  ; NullCheck()
// asm:   0x181dc85c7: lea rcx, [rip + 0x22d104a]  ; " in experience "
// asm:   0x181dc85ce: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc85d3: mov r8, rax
// asm:   0x181dc85d6: mov edx, 2
// asm:   0x181dc85db: mov rcx, rbx
// asm:   0x181dc85de: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc85e3: mov rsi, qword ptr [rsp + 0x140]
// asm:   0x181dc85eb: mov rcx, rsi
// asm:   0x181dc85ee: call 0x180001e10  ; NullCheck()
// asm:   0x181dc85f3: lea rcx, [rip + 0x22bf206]  ; "Name"
// asm:   0x181dc85fa: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc85ff: mov ecx, 7
// asm:   0x181dc8604: mov r8, rax
// asm:   0x181dc8607: mov rdx, rsi
// asm:   0x181dc860a: call 0x180027b70  ; il2cpp_runtime_helper_180027b70()
// asm:   0x181dc860f: mov rsi, rax
// asm:   0x181dc8612: lea rcx, [rip + 0x22e7d17]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x181dc8619: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc861e: mov rcx, rax
// asm:   0x181dc8621: call 0x180001e40  ; il2cpp_codegen_runtime_class_init_inline()
// asm:   0x181dc8626: xor edx, edx
// asm:   0x181dc8628: mov rcx, rsi
// asm:   0x181dc862b: call 0x181dc4450  ; SimpleJSONFixed_JSONNode__op_Implicit()
// asm:   0x181dc8630: mov rsi, rax
// asm:   0x181dc8633: mov rcx, rbx
// asm:   0x181dc8636: call 0x180001e10  ; NullCheck()
// asm:   0x181dc863b: mov r8, rsi
// asm:   0x181dc863e: mov edx, 3
// asm:   0x181dc8643: mov rcx, rbx
// asm:   0x181dc8646: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc864b: mov rcx, rbx
// asm:   0x181dc864e: call 0x180001e10  ; NullCheck()
// asm:   0x181dc8653: lea rcx, [rip + 0x232ef0e]  ; ": "
// asm:   0x181dc865a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc865f: mov r8, rax
// asm:   0x181dc8662: mov edx, 4
// asm:   0x181dc8667: mov rcx, rbx
// asm:   0x181dc866a: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc866f: mov rcx, rdi
// asm:   0x181dc8672: call 0x180001e10  ; NullCheck()
// asm:   0x181dc8677: mov ecx, 5
// asm:   0x181dc867c: mov rdx, rdi
// asm:   0x181dc867f: call 0x180003110  ; il2cpp_runtime_helper_180003110()
// asm:   0x181dc8684: mov rsi, rax
// asm:   0x181dc8687: mov rcx, rbx
// asm:   0x181dc868a: call 0x180001e10  ; NullCheck()
// asm:   0x181dc868f: mov r8, rsi
// asm:   0x181dc8692: mov edx, 5
// asm:   0x181dc8697: mov rcx, rbx
// asm:   0x181dc869a: call 0x180012900  ; il2cpp_codegen_array_set_ref()
// asm:   0x181dc869f: xor edx, edx
// asm:   0x181dc86a1: mov rcx, rbx
// asm:   0x181dc86a4: call 0x181969830  ; System_String__Concat()
// asm:   0x181dc86a9: mov rsi, rax
// asm:   0x181dc86ac: lea rcx, [rip + 0x22e5a5d]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x181dc86b3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc86b8: mov rcx, rax
// asm:   0x181dc86bb: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181dc86c0: mov rbx, rax
// asm:   0x181dc86c3: xor r9d, r9d
// asm:   0x181dc86c6: mov r8, rdi
// asm:   0x181dc86c9: mov rdx, rsi
// asm:   0x181dc86cc: mov rcx, rax
// asm:   0x181dc86cf: call 0x182902ef0  ; System_IO_InvalidDataException___ctor()
// asm:   0x181dc86d4: lea rcx, [rip + 0x22f0455]  ; MethodInfo_Settings_PresetDefinition_ReadVariants
// asm:   0x181dc86db: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dc86e0: mov rdx, rax
// asm:   0x181dc86e3: mov rcx, rbx
// asm:   0x181dc86e6: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x181dc886c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833253b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833253b5: push rbp
// asm:   0x1833253b6: sub rsp, 0x20
// asm:   0x1833253ba: mov rbp, rdx
// asm:   0x1833253bd: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x1833253c4: mov rcx, qword ptr [rax]
// asm:   0x1833253c7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x1833253cb: movabs rax, 0
// asm:   0x1833253d5: add rsp, 0x20
// asm:   0x1833253d9: pop rbp
// asm:   0x1833253da: ret 
// asm:   0x18333c120: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c125: push rbp
// asm:   0x18333c126: sub rsp, 0x20
// asm:   0x18333c12a: mov rbp, rdx
// asm:   0x18333c12d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333c134: mov rcx, qword ptr [rax]
// asm:   0x18333c137: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333c13b: movabs rax, 0
// asm:   0x18333c145: add rsp, 0x20
// asm:   0x18333c149: pop rbp
// asm:   0x18333c14a: ret 
// asm:   0x18333c150: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c155: push rbp
// asm:   0x18333c156: sub rsp, 0x20
// asm:   0x18333c15a: mov rbp, rdx
// asm:   0x18333c15d: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x18333c164: mov rcx, qword ptr [rax]
// asm:   0x18333c167: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333c16b: movabs rax, 0
// asm:   0x18333c175: add rsp, 0x20
// asm:   0x18333c179: pop rbp
// asm:   0x18333c17a: ret 
// asm:   0x18333c180: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c185: push rbx
// asm:   0x18333c186: push rbp
// asm:   0x18333c187: push rdi
// asm:   0x18333c188: sub rsp, 0x20
// asm:   0x18333c18c: mov rbp, rdx
// asm:   0x18333c18f: mov rbx, qword ptr [rbp + 0xb0]
// asm:   0x18333c196: mov rax, qword ptr [rbx]
// asm:   0x18333c199: mov rdi, qword ptr [rax]
// asm:   0x18333c19c: lea rcx, [rip + 0xd4404d]  ; TypeInfo_System_FormatException
// asm:   0x18333c1a3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333c1a8: mov rdx, rdi
// asm:   0x18333c1ab: mov rcx, rax
// asm:   0x18333c1ae: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333c1b3: test al, al
// asm:   0x18333c1b5: je 0x18333c1d3
// asm:   0x18333c1b7: mov rdx, qword ptr [rbx]
// asm:   0x18333c1ba: lea rcx, [rbp + 0x90]
// asm:   0x18333c1c1: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x18333c1c6: nop 
// asm:   0x18333c1c7: movabs rax, 0
// asm:   0x18333c1d1: jmp 0x18333c1f1
// asm:   0x18333c1d3: mov rax, qword ptr [rbx]
// asm:   0x18333c1d6: mov qword ptr [rbp + 0x88], rax
// asm:   0x18333c1dd: lea rdx, [rip + 0xc9fda4]
// asm:   0x18333c1e4: lea rcx, [rbp + 0x88]
// asm:   0x18333c1eb: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333c1f1: add rsp, 0x20
// asm:   0x18333c1f5: pop rdi
// asm:   0x18333c1f6: pop rbp
// asm:   0x18333c1f7: pop rbx
// asm:   0x18333c1f8: ret 

System_Collections_Generic_Dictionary_string__List_string___o *
Settings_PresetDefinition__ReadVariants(SimpleJSONFixed_JSONNode_o *experience,MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  char cVar4;
  System_Xml_Schema_XmlSchema_o *aNode;
  System_Collections_Generic_Dictionary_string__List_string___o *__this;
  SimpleJSONFixed_JSONNode_LinqEnumerator_o *__this_00;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  undefined8 *puVar7;
  System_Collections_Generic_List_string__o *__this_01;
  Il2CppObject *pIVar8;
  longlong *plVar9;
  undefined8 uVar10;
  System_Collections_Generic_IEqualityComparer_T__o *comparer_00;
  System_Collections_Generic_HashSet_string__o *__this_02;
  System_Collections_Generic_List_UIRule__o *__this_03;
  Il2CppClass *pIVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_IO_InvalidDataException_o *pSVar15;
  MethodInfo *pMVar16;
  System_String_o *pSVar17;
  System_FormatException_o *__this_04;
  System_String_o *str0;
  ushort uVar18;
  Il2CppObject *local_res18;
  Il2CppObject *local_res20;
  System_String_o *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  Il2CppObject **local_f0;
  undefined8 local_e8;
  Il2CppObject **local_e0;
  undefined8 local_d8;
  System_Collections_Generic_List_Enumerator_object__o *local_d0;
  System_Collections_Generic_List_Enumerator_object__o local_c8;
  undefined4 local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined1 local_60 [40];
  
  if (Il2CppMethodInitialized_184344a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor_40c94c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"Variants");
    Il2CppMethodInitialized_184344a30 = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_c8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.fields._index = 0;
  local_c8.fields._version = 0;
  local_c8.fields._current = (Il2CppObject *)0x0;
  local_a0 = 0;
  if (experience != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(experience->klass->vtable)._28_HasKey.methodPtr)
                      (experience,(MethodInfo *)"Variants");
    if (!bVar3) {
      return (System_Collections_Generic_Dictionary_string__List_string___o *)0x0;
    }
    aNode = (*(experience->klass->vtable)._7_get_Item.methodPtr)
                      (experience,(MethodInfo *)"Variants");
    if (aNode != (System_Xml_Schema_XmlSchema_o *)0x0) {
      bVar3 = (*((Il2CppClass *)aNode->klass)->vtable[17].methodPtr)(aNode,*(MethodInfo **)&((Il2CppClass *)aNode->klass)->vtable[17].method);
      if (!bVar3) {
        NullCheck(experience);
        pvVar5 = il2cpp_codegen_get_runtime_metadata(&"Name");
        pSVar14 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_180027b70(7,experience,pvVar5);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
        il2cpp_codegen_runtime_class_init_inline(pIVar11);
        pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar14,(MethodInfo *)0x0);
        pSVar17 = il2cpp_codegen_get_runtime_metadata(&".");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Variants must be an object in experience ");
        pSVar13 = System_String__Concat_1969b70(str0,pSVar13,pSVar17,(MethodInfo *)0x0);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
        pSVar15 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
        System_IO_InvalidDataException___ctor_2902f10(pSVar15,pSVar13,(MethodInfo *)0x0);
        pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar15,pMVar16);
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_184341f37 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_184341f37 = '\x01';
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
                 (MethodInfo_1453150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor_40c94c8);
      if (Il2CppMethodInitialized_184344967 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
        Il2CppMethodInitialized_184344967 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode_LinqEnumerator);
      SimpleJSONFixed_JSONNode_LinqEnumerator___ctor
                (__this_00,(SimpleJSONFixed_JSONNode_o *)aNode,(MethodInfo *)0x0);
      if (__this_00 != (SimpleJSONFixed_JSONNode_LinqEnumerator_o *)0x0) {
        local_res18 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_JSONNode
                                 ,(Il2CppObject *)__this_00);
        local_f8 = 0;
        local_f0 = &local_res18;
        do {
          if (local_res18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar5 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
          pIVar8 = local_res18;
          if ((char)pvVar5 == '\0') {
            if (*local_f0 == (Il2CppObject *)0x0) {
              return __this;
            }
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,*local_f0);
            return __this;
          }
          if (local_res18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar11 = local_res18->klass;
          uVar1 = (pIVar11->_2).interface_offsets_count;
          uVar18 = 0;
          if (uVar1 != 0) {
            pIVar2 = (pIVar11->_1).interfaceOffsets;
            do {
              if (pIVar2[uVar18].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode)
              {
                pVVar6 = (VirtualInvokeData *)&pIVar11->vtable[pIVar2[uVar18].offset].methodPtr;
                goto label_181dc7f76;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar1);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_res18,
                              (Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_JSONNode,0);
label_181dc7f76:
          puVar7 = (undefined8 *)(*pVVar6->methodPtr)(local_60,pIVar8,pVVar6->method);
          pSVar13 = (System_String_o *)*puVar7;
          plVar9 = (longlong *)puVar7[1];
          local_108 = pSVar13;
          plStack_100 = plVar9;
          bVar3 = System_String__IsNullOrWhiteSpace(pSVar13,(MethodInfo *)0x0);
          if (bVar3) {
label_181dc86ff:
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
            pSVar12 = (System_String_array *)SZArrayNew(pIVar11,5);
            NullCheck(pSVar12);
            pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Invalid variant ");
            il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,0,pIVar8);
            pSVar13 = il2cpp_codegen_get_runtime_metadata
                                (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key);
            pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_180016580(&local_108,pSVar13);
            NullCheck(pSVar12);
            il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,1,pIVar8);
            NullCheck(pSVar12);
            pIVar8 = il2cpp_codegen_get_runtime_metadata(&" in experience ");
            il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,2,pIVar8);
            NullCheck(experience);
            pvVar5 = il2cpp_codegen_get_runtime_metadata(&"Name");
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_180027b70(7,experience,pvVar5);
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
            il2cpp_codegen_runtime_class_init_inline(pIVar11);
            pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar14,(MethodInfo *)0x0);
            NullCheck(pSVar12);
            il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,3,(Il2CppObject *)pSVar13);
            NullCheck(pSVar12);
            pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
            il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,4,pIVar8);
            pSVar13 = System_String__Concat_1969830(pSVar12,(MethodInfo *)0x0);
            pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
            pSVar15 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
            System_IO_InvalidDataException___ctor_2902f10(pSVar15,pSVar13,(MethodInfo *)0x0);
            pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_PresetDefinition_ReadVariants);
            il2cpp_codegen_raise_exception((Il2CppObject *)pSVar15,pMVar16);
          }
          if (__this == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (Il2CppObject *)pSVar13,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
          if (bVar3) goto label_181dc86ff;
          if (plVar9 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          cVar4 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
          if (cVar4 == '\0') goto label_181dc86ff;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          if (plVar9 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = (Il2CppObject *)(**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(*plVar9 + 0x2f0));
          if (pIVar8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          local_res20 = InterfaceInvoker0_Invoke
                                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,
                                   pIVar8);
          local_e8 = 0;
          local_e0 = &local_res20;
          while( true ) {
            if (local_res20 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pvVar5 = InterfaceInvoker0_Invoke
                               (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
            if ((char)pvVar5 == '\0') break;
            if (local_res20 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            plVar9 = InterfaceInvoker0_Invoke
                               (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,
                                local_res20);
            if (plVar9 == (longlong *)0x0) {
              ThrowNullReferenceException();
            }
            cVar4 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
            if (cVar4 == '\0') {
              pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
              pSVar12 = (System_String_array *)SZArrayNew(pIVar11,5);
              NullCheck(pSVar12);
              pIVar8 = il2cpp_codegen_get_runtime_metadata(&"Variant ");
              il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,0,pIVar8);
              pSVar13 = il2cpp_codegen_get_runtime_metadata
                                  (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Key
                                  );
              pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_180016580(&local_108,pSVar13);
              NullCheck(pSVar12);
              il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,1,pIVar8);
              NullCheck(pSVar12);
              pIVar8 = il2cpp_codegen_get_runtime_metadata(&" must contain rule strings in experience ");
              il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,2,pIVar8);
              NullCheck(experience);
              pvVar5 = il2cpp_codegen_get_runtime_metadata(&"Name");
              pSVar14 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_180027b70(7,experience,pvVar5);
              pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
              il2cpp_codegen_runtime_class_init_inline(pIVar11);
              pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar14,(MethodInfo *)0x0);
              NullCheck(pSVar12);
              il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,3,(Il2CppObject *)pSVar13);
              NullCheck(pSVar12);
              pIVar8 = il2cpp_codegen_get_runtime_metadata(&".");
              il2cpp_codegen_array_set_ref((System_Array_o *)pSVar12,4,pIVar8);
              pSVar13 = System_String__Concat_1969830(pSVar12,(MethodInfo *)0x0);
              pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
              pSVar15 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
              System_IO_InvalidDataException___ctor_2902f10(pSVar15,pSVar13,(MethodInfo *)0x0);
              pMVar16 = il2cpp_codegen_get_runtime_metadata
                                  (&MethodInfo_Settings_PresetDefinition_ReadVariants);
              il2cpp_codegen_raise_exception((Il2CppObject *)pSVar15,pMVar16);
            }
            uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_01,uVar10,MethodInfo_System_Collections_Generic_List_string_Add);
          }
          if (local_res20 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
          }
          if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
          }
          comparer_00 = (System_Collections_Generic_IEqualityComparer_T__o *)il2cpp_runtime_helper_181882cf0(0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
          System_Collections_Generic_HashSet_object____ctor_176d450
                    ((System_Collections_Generic_HashSet_object__o *)__this_02,comparer_00,
                     (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
          __this_03 = Settings_RuleParser__Parse
                                ((System_Collections_Generic_IEnumerable_string__o *)__this_01,
                                 (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
          if (__this_03 == (System_Collections_Generic_List_UIRule__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    (&local_78,(System_Collections_Generic_List_T__o *)__this_03,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
          local_c8.fields._list = local_78.fields._list;
          local_c8.fields._index = local_78.fields._index;
          local_c8.fields._version = local_78.fields._version;
          local_c8.fields._current = local_78.fields._current;
          local_d8 = 0;
          local_d0 = &local_c8;
          while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (&local_c8,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
                pIVar8 = local_c8.fields._current, bVar3) {
            if (local_c8.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if (__this_02 == (System_Collections_Generic_HashSet_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = System_Collections_Generic_HashSet_object___Add
                              ((System_Collections_Generic_HashSet_object__o *)__this_02,
                               local_c8.fields._current[1].monitor,
                               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add)
            ;
            if (!bVar3) {
              NullCheck(pIVar8);
              pSVar13 = pIVar8[1].monitor;
              pSVar17 = il2cpp_codegen_get_runtime_metadata(&"Duplicate variant rule: ");
              pSVar13 = System_String__Concat_1969e50(pSVar17,pSVar13,(MethodInfo *)0x0);
              pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
              __this_04 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar11);
              System_FormatException___ctor_1b22ec0(__this_04,pSVar13,(MethodInfo *)0x0);
              pMVar16 = il2cpp_codegen_get_runtime_metadata
                                  (&MethodInfo_Settings_PresetDefinition_ReadVariants);
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar16);
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                     MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar13
                     ,(Il2CppObject *)__this_01,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.PresetDefinition$$get_UIRulesObject
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_PresetDefinition__get_UIRulesObject (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x181dc8e20

System_Collections_Generic_List_UIRule__o *
Settings_PresetDefinition__get_UIRulesObject(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIRule__o *value;
  
  if ((__this->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
    value = Settings_RuleParser__Parse
                      ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                       (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._uiRules = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules,value);
    return (__this->fields)._uiRules;
  }
  return (__this->fields)._uiRules;
}


// Settings.PresetDefinition$$set_UIRulesObject
// il2cpp: void Settings_PresetDefinition__set_UIRulesObject (Settings_PresetDefinition_o* __this, System_Collections_Generic_List_UIRule__o* value, const MethodInfo* method);
// 0x180f1d7f0

void
Settings_PresetDefinition__set_UIRulesObject(Settings_PresetDefinition_o* __this, System_Collections_Generic_List_UIRule__o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields = value;
  Il2CppCodeGenWriteBarrier((void **)(__this + 1),value);
  return;
}


// Settings.PresetDefinition$$get_MapRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__get_MapRule (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x181dc8ae0
// eh: try 0x181dc8bd0..0x181dc8c6c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc8c29: mov rdx, qword ptr [rip + 0x22d3120]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dc8c30: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc8c35: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc8c3a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc8c3f: test rcx, rcx
// asm:   0x181dc8c42: jne 0x181dc8c6c
// asm:   0x181dc8c44: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181dc8c6c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Settings_UIRule_o *
Settings_PresetDefinition__get_MapRule(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_List_UIRule__o *pSVar2;
  undefined1 local_40 [16];
  Settings_UIRule_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    Il2CppMethodInitialized_184344a31 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._mapRule == (Settings_UIRule_o *)0x0) {
    if ((__this->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar2 = Settings_RuleParser__Parse
                         ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                          (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._uiRules = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules,pSVar2);
    }
    pSVar2 = (__this->fields)._uiRules;
    if (pSVar2 == (System_Collections_Generic_List_UIRule__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
      value = local_28.fields._current;
      if (!bVar1) break;
      if ((Settings_UIRule_o *)local_28.fields._current == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_String__op_Equality
                        (((Settings_UIRule_Fields *)((longlong)local_28.fields._current + 0x10))->SettingId,
                         "general.MapName",(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._mapRule = (Settings_UIRule_o *)value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._mapRule,value);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
  }
  return (__this->fields)._mapRule;
}


// Settings.PresetDefinition$$get_ModeRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__get_ModeRule (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x181dc8c80
// eh: try 0x181dc8d70..0x181dc8e0c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc8dc9: mov rdx, qword ptr [rip + 0x22d2f80]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dc8dd0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc8dd5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc8dda: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc8ddf: test rcx, rcx
// asm:   0x181dc8de2: jne 0x181dc8e0c
// asm:   0x181dc8de4: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181dc8e0c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Settings_UIRule_o *
Settings_PresetDefinition__get_ModeRule(Settings_PresetDefinition_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_List_UIRule__o *pSVar2;
  undefined1 local_40 [16];
  Settings_UIRule_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184344a32 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._modeRule == (Settings_UIRule_o *)0x0) {
    if ((__this->fields)._uiRules == (System_Collections_Generic_List_UIRule__o *)0x0) {
      pSVar2 = Settings_RuleParser__Parse
                         ((System_Collections_Generic_IEnumerable_string__o *)(__this->fields).UIRules,
                          (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._uiRules = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiRules,pSVar2);
    }
    pSVar2 = (__this->fields)._uiRules;
    if (pSVar2 == (System_Collections_Generic_List_UIRule__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
      value = local_28.fields._current;
      if (!bVar1) break;
      if ((Settings_UIRule_o *)local_28.fields._current == (Settings_UIRule_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_String__op_Equality
                        (((Settings_UIRule_Fields *)((longlong)local_28.fields._current + 0x10))->SettingId,
                         "general.GameMode",(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._modeRule = (Settings_UIRule_o *)value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._modeRule,value);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
  }
  return (__this->fields)._modeRule;
}


// Settings.PresetDefinition$$GetRule
// il2cpp: Settings_UIRule_o* Settings_PresetDefinition__GetRule (Settings_PresetDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x181dc7ab0
// eh: try 0x181dc7b60..0x181dc7bfe -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc7bc5: mov rdx, qword ptr [rip + 0x22d4184]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x181dc7bcc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dc7bd1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dc7bd6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dc7bdb: test rcx, rcx
// asm:   0x181dc7bde: jne 0x181dc7bfe
// asm:   0x181dc7bfe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Settings_UIRule_o *
Settings_PresetDefinition__GetRule(Settings_PresetDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_UIRule__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  undefined1 local_40 [16];
  Settings_UIRule_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    Il2CppMethodInitialized_184344a33 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._uiRules;
  if (__this_00 != (System_Collections_Generic_List_UIRule__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
      pIVar1 = local_28.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
        return (Settings_UIRule_o *)0x0;
      }
      if ((Settings_UIRule_o *)local_28.fields._current == (Settings_UIRule_o *)0x0) break;
      bVar2 = System_String__op_Equality
                        (((Settings_UIRule_Fields *)((longlong)local_28.fields._current + 0x10))->SettingId,id
                         ,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
        return (Settings_UIRule_o *)pIVar1;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.PresetDefinition$$.ctor
// il2cpp: void Settings_PresetDefinition___ctor (Settings_PresetDefinition_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_PresetDefinition___ctor(Settings_PresetDefinition_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


