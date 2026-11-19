// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicJsonBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicJsonBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace CustomLogic;

[Token(Token = "0x200061E")]
[CompilerGenerated]
internal class CustomLogicJsonBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200061F")]
	public static class Factory
	{
		[Token(Token = "0x6003A0A")]
		[Address(RVA = "0x5A2C9E0", Offset = "0x5A2B9E0", VA = "0x5A2C9E0")]
		public static CustomLogicJsonBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicJsonBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicJsonBuiltin();
			return (CustomLogicJsonBuiltin)__this;
		}
	}

	[Token(Token = "0x2000620")]
	public static class Bindings
	{
		[Token(Token = "0x4001A52")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003A0B")]
		[Address(RVA = "0x5A2CB00", Offset = "0x5A2BB00", VA = "0x5A2CB00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLMethodBinding<CustomLogicJsonBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "LoadFromString");
			if (bVar1) {
				if ((typeof(CustomLogicJsonBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicJsonBuiltin.Bindings.__CreateMethodBinding__LoadFromString();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicJsonBuiltin.Bindings.__CreateMethodBinding__LoadFromString();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SaveToString");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicJsonBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicJsonBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicJsonBuiltin.Bindings.__CreateMethodBinding__SaveToString();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicJsonBuiltin.Bindings.__CreateMethodBinding__SaveToString();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6003A0C")]
		[Address(RVA = "0x5A2CC40", Offset = "0x5A2BC40", VA = "0x5A2CC40")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__LoadFromString()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__LoadFromString): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicJsonBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicJsonBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicJsonBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ba == false) {
				Il2CppMethodInitialized_075471ba = true;
				uVar1 = (typeof(CustomLogicJsonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicJsonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicJsonBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicJsonBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicJsonBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicJsonBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0);
				pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicJsonBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A0D")]
		[Address(RVA = "0x5A2CD80", Offset = "0x5A2BD80", VA = "0x5A2CD80")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__SaveToString()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__SaveToString): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicJsonBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicJsonBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicJsonBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471bb == false) {
				Il2CppMethodInitialized_075471bb = true;
				uVar1 = (typeof(CustomLogicJsonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicJsonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicJsonBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicJsonBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicJsonBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicJsonBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0);
				pCVar2 = typeof(CustomLogicJsonBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicJsonBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000A41")]
	public override string ClassName
	{
		[Token(Token = "0x6003A06")]
		[Address(RVA = "0x5A2C980", Offset = "0x5A2B980", VA = "0x5A2C980", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$get_ClassName): clean
			return "Json";
		}
	}

	[Token(Token = "0x17000A42")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003A07")]
		[Address(RVA = "0x5A2C9B0", Offset = "0x5A2B9B0", VA = "0x5A2C9B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A43")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003A08")]
		[Address(RVA = "0x5A2C9C0", Offset = "0x5A2B9C0", VA = "0x5A2C9C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A44")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003A09")]
		[Address(RVA = "0x5A2C9D0", Offset = "0x5A2B9D0", VA = "0x5A2C9D0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003A01")]
	[Address(RVA = "0x5A2B2E0", Offset = "0x5A2A2E0", VA = "0x5A2B2E0")]
	public CustomLogicJsonBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075471b4 == false) {
			Il2CppMethodInitialized_075471b4 = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x6003A02")]
	[Address(RVA = "0x5A2B350", Offset = "0x5A2A350", VA = "0x5A2B350")]
	public static object LoadFromString(string json)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$LoadFromString): clean
		object pIVar1;

		if (json == null) {
			throw new NullReferenceException();
		}
		json.Trim();
		return pIVar1;
	}

	[Token(Token = "0x6003A03")]
	[Address(RVA = "0x5A2BE10", Offset = "0x5A2AE10", VA = "0x5A2BE10")]
	public static string SaveToString(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$SaveToString): clean
		JSONNode pSVar1;
		String pSVar2;

		pSVar1 = CustomLogicJsonBuiltin.SaveJSON(obj);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x6003A04")]
	[Address(RVA = "0x5A2B490", Offset = "0x5A2A490", VA = "0x5A2B490")]
	protected static object LoadJSON(JSONNode json)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$LoadJSON): 42 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		Object[] pSVar3;
		String a;
		bool bVar4;
		int r;
		int g;
		int b;
		int a_00;
		CustomLogicDictBuiltin __this_00;
		JSONNode pSVar5;
		object pIVar6;
		MethodInfo key;
		String pSVar7;
		String[] pSVar8;
		CustomLogicVector3Builtin __this_01;
		CustomLogicQuaternionBuiltin __this_02;
		Color255 __this_03;
		CustomLogicColorBuiltin __this_04;
		Il2CppClass pIVar9;
		Exception __this_05;
		MethodInfo pMVar10;
		Quaternion value;
		Vector3 value_00;
		JSONNode.ValueEnumerator local_1f0;
		float local_1a8;
		float local_198;
		float local_188;
		double local_178;
		ulong local_168;
		ulong uStack_150;
		ulong uStack_140;
		double local_128;
		ulong local_118;
		ulong uStack_100;
		ulong uStack_f0;
		float local_d8;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		uStack_f0._0_4_ = 0;
		uStack_f0._4_4_ = 0;
		uStack_100._0_4_ = 0;
		uStack_100._4_4_ = 0;
		local_118._0_4_ = 0;
		local_118._4_4_ = 0;
		local_128 = 0.0;
		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		uStack_140._0_4_ = 0;
		uStack_140._4_4_ = 0;
		uStack_150._0_4_ = 0;
		uStack_150._4_4_ = 0;
		local_168._0_4_ = 0;
		local_168._4_4_ = 0;
		local_178 = 0.0;
		if (json == null) goto label_05b2bd72;
		bVar4 = json.get_IsArray();
		if (bVar4) {
			__this_00 = new CustomLogicDictBuiltin();
			local_1f0 = json.Values;
			uStack_f0._0_4_ = local_1f0.m_Enumerator.m_Array._index;
			uStack_f0._4_4_ = local_1f0.m_Enumerator.m_Array._version;
			uStack_100._0_4_ = local_1f0.m_Enumerator.m_Object._getEnumeratorRetType;
			uStack_100._4_4_ = local_1f0.m_Enumerator.m_Object._36_4_;
			local_118._0_4_ = local_1f0.m_Enumerator.m_Object._version;
			local_118._4_4_ = local_1f0.m_Enumerator.m_Object._index;
			local_128 = (double)local_1f0.m_Enumerator._0_8_;
			local_78 = local_128.GetEnumerator();
			bVar4 = local_78.MoveNext();
			if (bVar4) {
				if (__this_00 == null) {
					local_78.Current;
					throw new NullReferenceException();
				}
				do {
					pMVar10 = null;
					pSVar5 = local_78.Current;
					__this = __this_00._dict;
					pIVar6 = CustomLogicJsonBuiltin.LoadJSON(pSVar5);
					pMVar10 = MethodInfo_System_Collections_Generic_List_object_Add;
					if (__this == null) goto label_05b2bd72;
					piVar1 = (int)((long)&__this._entries + 4);
					*piVar1 = *piVar1 + 1;
					pSVar3 = (Object[])__this._buckets;
					if (pSVar3 == null) goto label_05b2bd72;
					uVar2 = *(uint)&__this._entries;
					if (uVar2 < (uint)pSVar3.Length) {
						*(uint)&__this._entries = uVar2 + 1;
						pSVar3[(int)uVar2] = pIVar6;
					}
					else {
						__this.AddWithResize(pIVar6);
					}
					bVar4 = local_78.MoveNext();
				} while (bVar4);
			}
		}
		else {
			bVar4 = json.get_IsObject();
			if (bVar4) {
				__this_00 = new CustomLogicDictBuiltin();
				local_1f0 = json.Keys;
				uStack_140._0_4_ = local_1f0.m_Enumerator.m_Array._index;
				uStack_140._4_4_ = local_1f0.m_Enumerator.m_Array._version;
				uStack_150._0_4_ = local_1f0.m_Enumerator.m_Object._getEnumeratorRetType;
				uStack_150._4_4_ = local_1f0.m_Enumerator.m_Object._36_4_;
				local_168._0_4_ = local_1f0.m_Enumerator.m_Object._version;
				local_168._4_4_ = local_1f0.m_Enumerator.m_Object._index;
				local_178 = (double)local_1f0.m_Enumerator._0_8_;
				local_c8 = local_178.GetEnumerator();
				bVar4 = local_c8.MoveNext();
				if (bVar4) {
					if (__this_00 == null) {
						pMVar10 = (MethodInfo)local_c8.Current;
						pSVar5 = json.get_Item((String)pMVar10);
						CustomLogicJsonBuiltin.LoadJSON(pSVar5);
						throw new NullReferenceException();
					}
					do {
						key = (MethodInfo)local_c8.Current;
						pMVar10 = key;
						pSVar5 = json.get_Item((String)key);
						pIVar6 = CustomLogicJsonBuiltin.LoadJSON(pSVar5);
						__this_00.Set((object)key, pIVar6);
						bVar4 = local_c8.MoveNext();
					} while (bVar4);
				}
			}
			else {
				bVar4 = json.get_IsString();
				if (!bVar4) {
	label_05b2bd77: ;
					pIVar9 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_05 = (Exception)il2cpp_codegen_object_new(pIVar9);
					pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Loading invalid json format.");
					__this_05 = new Exception(pSVar7);
					pMVar10 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_LoadJSON) ;
					throw (object)__this_05;
				}
				pSVar7 = json.get_Value() ;
				if ((pSVar7 == null) ||(pSVar8 = pSVar7.Split(0x3a, 0), pSVar8 == null )) goto label_05b2bd72;
				if ((int)pSVar8.Length == 0) goto label_05b2bdbe;
				a = pSVar8[0];
				bVar4 = (a == "float");
				if (bVar4) {
					pSVar7 = pSVar7.Substring(6);
					local_1f0.m_Enumerator.type = (int32_t)Single.Parse(pSVar7);
					pIVar9 = g_data_07556740;
				}
				else {
					bVar4 = (a == "double");
					if (bVar4) {
						pSVar7 = pSVar7.Substring(7);
						local_1f0.m_Enumerator._0_8_ = Double.Parse(pSVar7);
						pIVar9 = g_data_07556748;
					}
					else {
						bVar4 = (a == "int");
						if (bVar4) {
							pSVar7 = pSVar7.Substring(4);
							local_1f0.m_Enumerator.type = Int32.Parse(pSVar7);
							pIVar9 = g_data_07556710;
						}
						else {
							bVar4 = (a == "string");
							if (bVar4) {
								pSVar7 = pSVar7.Substring(7);
								return (object)pSVar7;
							}
							bVar4 = (a == "bool");
							if (!bVar4) {
								bVar4 = (a == "null");
								if (bVar4) {
									return null;
								}
								bVar4 = (a == "vector3");
								if (bVar4) {
									pSVar7 = pSVar7.Substring(8);
									if ((pSVar7 != null) &&(pSVar8 = pSVar7.Split(0x2c, 0), pSVar8 != null)) {
										if (((int)pSVar8.Length != 0) &&((local_188 = Single.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) != 0 &&(local_198 = Single.Parse(pSVar8[1]), 2 < (uint)pSVar8.Length)))) {
											local_1a8 = Single.Parse(pSVar8[2]);
											value_00.y = local_198;
											value_00.x = local_188;
											value_00.z = local_1a8;
											__this_01 = new CustomLogicVector3Builtin(value_00) ;
											return (object)__this_01;
										}
	label_05b2bdbe: ;
										throw new IndexOutOfRangeException();
									}
								}
								else {
									bVar4 = (a == "quaternion");
									if (bVar4) {
										pSVar7 = pSVar7.Substring(0xb);
										if ((pSVar7 != null) &&(pSVar8 = pSVar7.Split(0x2c, 0), pSVar8 != null)) {
											if ((((int)pSVar8.Length != 0) &&((local_188 = Single.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) != 0 &&(local_198 = Single.Parse(pSVar8[1]), 2 < (uint)pSVar8.Length)))) &&(local_1a8 = Single.Parse(pSVar8[2]),(pSVar8.Length & 0xfffffffc) != 0)) {
												local_d8 = Single.Parse(pSVar8[3]);
												__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicQuaternionBuiltin)) ;
												value.y = local_198;
												value.x = local_188;
												value.w = local_d8;
												value.z = local_1a8;
												__this_02 = new CustomLogicQuaternionBuiltin(value);
												return (object)__this_02;
											}
											goto label_05b2bdbe;
										}
									}
									else {
										bVar4 = (a == "color");
										if (!bVar4) goto label_05b2bd77;
										pSVar7 = pSVar7.Substring(6);
										if ((pSVar7 != null) &&(pSVar8 = pSVar7.Split(0x2c, 0), pSVar8 != null)) {
											if (((int)pSVar8.Length != 0) &&(((r = Int32.Parse(pSVar8[0]),(pSVar8.Length & 0xfffffffe) != 0 &&(g = Int32.Parse(pSVar8[1]), 2 < (uint)pSVar8.Length)) &&(b = Int32.Parse(pSVar8[2]),(pSVar8.Length & 0xfffffffc) != 0)))) {
												a_00 = Int32.Parse(pSVar8[3]);
												__this_03 = new Color255(r, g, b, a_00);
												__this_04 = new CustomLogicColorBuiltin(__this_03);
												return (object)__this_04;
											}
											goto label_05b2bdbe;
										}
									}
								}
	label_05b2bd72: ;
								throw new NullReferenceException();
							}
							pSVar7 = pSVar7.Substring(5);
							bVar4 = (pSVar7 == "1");
							local_1f0.m_Enumerator.type._0_1_ = bVar4;
							pIVar9 = g_data_075566f0;
						}
					}
				}
				__this_00 = (CustomLogicDictBuiltin)(object)local_1f0;
			}
		}
		return (object)__this_00;
	}

	[Token(Token = "0x6003A05")]
	[Address(RVA = "0x5A2BE40", Offset = "0x5A2AE40", VA = "0x5A2BE40")]
	protected static JSONNode SaveJSON(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c (CustomLogic.CustomLogicJsonBuiltin$$SaveJSON): 70 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		List<object> __this;
		bool bVar3;
		object pIVar4;
		String[] values;
		String pSVar5;
		CustomLogicListBuiltin pCVar6;
		object obj_00;
		float pfVar7;
		JSONNode pSVar8;
		double pdVar9;
		int piVar10;
		JSONObject __this_00;
		sbyte pcVar11;
		String* ppSVar12;
		Type p;
		String str0;
		Il2CppClass pIVar13;
		Exception pSVar14;
		MethodInfo pMVar15;
		int index;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		int local_78;
		float local_74;
		byte[] local_70 = new byte[16];
		MethodInfo local_60;
		ulong local_58;
		float[] local_50 = new float[2];
		ulong local_48;
		ulong uStack_40;
		double local_38;

		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		local_74 = 0.0;
		local_38 = 0.0;
		local_78 = 0;
		local_50[0] = 0.0;
		local_58 = null;
		local_48 = null;
		uStack_40 = null;
		if (obj == null) {
			pSVar5 = "null:null";
	label_05b2c577: ;
			__this_00 = new JSONObject(pSVar5);
		}
		else {
			pIVar13 = obj.klass;
			bVar1 = (pIVar13._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicDictBuiltin)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pIVar13._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicDictBuiltin))) {
				bVar2 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pIVar13._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicListBuiltin))) {
					if (pIVar13 == g_data_07556758) {
						pSVar5 = "string:";
	label_05b2c555: ;
						pSVar5 = String.Concat(pSVar5, (String)obj);
					}
					else {
						if (pIVar13 == g_data_07556740) {
							pfVar7 = il2cpp_vm_Object_Unbox(obj);
							local_74 = *pfVar7;
							obj = (object)local_74.ToString();
							ppSVar12 = &"float:";
	label_05b2c54f: ;
							pSVar5 = *ppSVar12;
							goto label_05b2c555;
						}
						if (pIVar13 == g_data_07556748) {
							pdVar9 = (double)il2cpp_runtime_helper_02abd3a0(obj);
							local_38 = *pdVar9;
							obj = (object)local_38.ToString();
							ppSVar12 = &"double:";
							goto label_05b2c54f;
						}
						if (pIVar13 == g_data_07556710) {
							piVar10 = (int)il2cpp_runtime_helper_02abd3a0(obj);
							local_78 = *piVar10;
							obj = (object)local_78.ToString();
							ppSVar12 = &"int:";
							goto label_05b2c54f;
						}
						if (pIVar13 == g_data_075566f0) {
							pcVar11 = (sbyte)il2cpp_runtime_helper_02abd3a0(obj);
							if (*pcVar11 == false) {
								ppSVar12 = &"0";
							}
							else {
								ppSVar12 = &"1";
							}
							obj = (object)*ppSVar12;
							pSVar5 = "bool:";
							goto label_05b2c555;
						}
						bVar2 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pIVar13._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicVector3Builtin))) {
							bVar2 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
							if ((bVar1 < bVar2) ||((pIVar13._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicColorBuiltin))) {
								bVar2 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
								if ((bVar1 < bVar2) ||((pIVar13._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicQuaternionBuiltin))) {
									p = obj.GetType();
									pSVar5 = p.ToString();
									str0 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
									pSVar5 = String.Concat(str0, pSVar5);
									pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
									pSVar14 = (Exception)il2cpp_codegen_object_new(pIVar13);
									pSVar14 = new Exception(pSVar5);
									pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
									throw (object)pSVar14;
								}
								pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicQuaternionBuiltin));
								if (pIVar4 == null) goto label_05b2c82e;
								pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicQuaternionBuiltin));
								local_48 = pIVar4[3].klass;
								uStack_40 = pIVar4[3].monitor;
								values = (String[])new string[8];
								if (values == null) goto label_05b2c82e;
								il2cpp_codegen_array_set_ref((Array)values, 0, (Il2CppObject *)"quaternion:");
								pSVar5 = local_48.ToString();
								il2cpp_codegen_array_set_ref((Array)values, 1, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 2, (Il2CppObject *)",");
								pSVar5 = (((long)&local_48 + 4)).ToString();
								il2cpp_codegen_array_set_ref((Array)values, 3, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 4, (Il2CppObject *)",");
								pSVar5 = uStack_40.ToString();
								il2cpp_codegen_array_set_ref((Array)values, 5, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 6, (Il2CppObject *)",");
								pSVar5 = (((long)&uStack_40 + 4)).ToString();
							}
							else {
								pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicColorBuiltin));
								if (pIVar4 == null) goto label_05b2c82e;
								pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicColorBuiltin));
								pIVar13 = pIVar4[3].klass;
								values = (String[])new string[8];
								if (values == null) goto label_05b2c82e;
								il2cpp_codegen_array_set_ref((Array)values, 0, (Il2CppObject *)"color:");
								if (pIVar13 == null) goto label_05b2c82e;
								pSVar5 = ((pIVar13._1).name).ToString();
								il2cpp_codegen_array_set_ref((Array)values, 1, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 2, (Il2CppObject *)",");
								pSVar5 = (((long)&(pIVar13._1).name + 4)).ToString();
								il2cpp_codegen_array_set_ref((Array)values, 3, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 4, (Il2CppObject *)",");
								pSVar5 = ((pIVar13._1).namespaze).ToString();
								il2cpp_codegen_array_set_ref((Array)values, 5, (object)pSVar5);
								il2cpp_codegen_array_set_ref((Array)values, 6, (Il2CppObject *)",");
								pSVar5 = (((long)&(pIVar13._1).namespaze + 4)).ToString();
							}
							index = 7;
						}
						else {
							pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicVector3Builtin));
							if (pIVar4 == null) {
	label_05b2c82e: ;
								throw new NullReferenceException();
							}
							pIVar4 = il2cpp_codegen_is_inst_class(obj, typeof(CustomLogicVector3Builtin));
							local_58 = pIVar4[3].klass;
							local_50[0] = *(float)&pIVar4[3].monitor;
							values = (String[])new string[6];
							if (values == null) goto label_05b2c82e;
							il2cpp_codegen_array_set_ref((Array)values, 0, (Il2CppObject *)"vector3:");
							pSVar5 = local_58.ToString();
							il2cpp_codegen_array_set_ref((Array)values, 1, (object)pSVar5);
							il2cpp_codegen_array_set_ref((Array)values, 2, (Il2CppObject *)",");
							pSVar5 = (((long)&local_58 + 4)).ToString();
							il2cpp_codegen_array_set_ref((Array)values, 3, (object)pSVar5);
							il2cpp_codegen_array_set_ref((Array)values, 4, (Il2CppObject *)",");
							pSVar5 = local_50.ToString();
							index = 5;
						}
						il2cpp_codegen_array_set_ref((Array)values, index, (object)pSVar5);
						pSVar5 = String.Concat(values);
					}
					goto label_05b2c577;
				}
				__this_00 = new JSONObject();
				bVar1 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
				if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicListBuiltin))) goto label_05b2c824;
				if (obj[3].klass == null) goto label_05b2c82e;
				local_70.GetEnumerator((List<object>)obj[3].klass);
				local_98._current = (object)local_60;
				local_98._list = (List<T>)local_70._0_8_;
				local_98._index = local_70._8_4_;
				local_98._version = local_70._12_4_;
				local_70._0_8_ = null;
				local_70._8_8_ = &local_98;
				if (__this_00 == null) {
					bVar3 = local_98.MoveNext();
					if (bVar3) {
						CustomLogicJsonBuiltin.SaveJSON(local_98._current);
						throw new NullReferenceException();
					}
				}
				else {
					while(true) {
						bVar3 = local_98.MoveNext();
						if (!bVar3) break;
						pSVar8 = CustomLogicJsonBuiltin.SaveJSON(local_98._current);
						__this_00.Add(pSVar8);
					}
				}
			}
			else {
				__this_00 = new JSONObject();
				bVar1 = (typeof(CustomLogicDictBuiltin)._2).typeHierarchyDepth;
				if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicDictBuiltin))) {
	label_05b2c824: ;
					throw new InvalidCastException();
				}
				pCVar6 = obj.Keys;
				if ((pCVar6 == null) ||(__this = pCVar6.List, __this == null)) goto label_05b2c82e;
				local_70.GetEnumerator(__this);
				local_98._current = (object)local_60;
				local_98._list = (List<T>)local_70._0_8_;
				local_98._index = local_70._8_4_;
				local_98._version = local_70._12_4_;
				local_70._0_8_ = null;
				local_70._8_8_ = &local_98;
				if (__this_00 == null) {
					bVar3 = local_98.MoveNext();
					if (bVar3) {
						if (((MethodInfo)local_98._current != null) &&((local_98._current).klass == g_data_07556758)) {
							pIVar4 = obj.Get(local_98._current, null);
							CustomLogicJsonBuiltin.SaveJSON(pIVar4);
							throw new NullReferenceException();
						}
	label_05b2c7d5: ;
						pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
						pSVar14 = (Exception)il2cpp_codegen_object_new(pIVar13);
						pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: dict must have string keys.");
						pSVar14 = new Exception(pSVar5);
						pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
						throw (object)pSVar14;
					}
				}
				else {
					while(true) {
						bVar3 = local_98.MoveNext();
						pIVar4 = local_98._current;
						if (!bVar3) break;
						if (((MethodInfo)local_98._current == null) ||((local_98._current).klass != g_data_07556758)) goto label_05b2c7d5;
						obj_00 = obj.Get(local_98._current, null);
						pSVar8 = CustomLogicJsonBuiltin.SaveJSON(obj_00);
						if (pIVar4.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
						__this_00.Add((String)pIVar4, pSVar8);
					}
				}
			}
			local_98.Dispose();
		}
		return (JSONNode)__this_00;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicJsonBuiltin.c.

	// CustomLogic.CustomLogicJsonBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"LoadFromString");
		__this.Add((Il2CppObject *)"SaveToString");
		CustomLogicJsonBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicJsonBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicJsonBuiltin.Bindings.c();
		CustomLogicJsonBuiltin.Bindings.c.__9 =(CustomLogicJsonBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromString>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__LoadFromString_b__2_0(CustomLogicJsonBuiltin __c, Object[] __a)
	{
		object obj;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
		pSVar1 = CustomLogicJsonBuiltin.LoadFromString(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToString>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__SaveToString_b__3_0(CustomLogicJsonBuiltin __c, Object[] __a)
	{
		JSONNode pSVar1;
		String pSVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar1 = CustomLogicJsonBuiltin.SaveJSON(__a[0]);
			if (pSVar1 != null) {
				pSVar2 = pSVar1.ToString(4);
				return (object)pSVar2;
			}
		}
		throw new NullReferenceException();
	}
}
