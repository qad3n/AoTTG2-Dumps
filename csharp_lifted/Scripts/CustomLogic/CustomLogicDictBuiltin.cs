// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDictBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDictBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000459")]
[CompilerGenerated]
internal class CustomLogicDictBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200045A")]
	public static class Factory
	{
		[Token(Token = "0x6001B14")]
		[Address(RVA = "0x58AE290", Offset = "0x58AD290", VA = "0x58AE290")]
		public static CustomLogicDictBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object obj;
			int capacity;
			CustomLogicDictBuiltin __this;
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
			if (args.Length == 0) {
				__this = new CustomLogicDictBuiltin();
			}
			else {
				if ((int)args.Length != 1) {
					pSVar1 = local_14.ToString();
					str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDictBuiltin constructor found that takes ");
					str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
					pSVar1 = String.Concat(str0, pSVar1, str2);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar1);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Factory_CreateInstance);
					throw (object)__this_00;
				}
				obj = args[0];
				capacity = CustomLogicEvaluator.ConvertTo<int>(obj) ;
				__this = new CustomLogicDictBuiltin(capacity);
			}
			return __this;
		}
	}

	[Token(Token = "0x200045B")]
	public static class Bindings
	{
		[Token(Token = "0x40015CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x58AE3E0", Offset = "0x58AD3E0", VA = "0x58AE3E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$CreateMemberBinding): 8 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicDictBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicDictBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x602b32ee) {
				if (uVar2 < 0x21a5901e) {
					if (uVar2 == 0x4a57fc2) {
						bVar1 = (name == "Clear");
						if (bVar1) {
							if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Clear();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Clear();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x21a5901d) {
						bVar1 = (name == "Remove");
						if (bVar1) {
							if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Remove();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Remove();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x28b19ea3) {
					bVar1 = (name == "Set");
					if (bVar1) {
						if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Set();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Set();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x602b32ed) {
					bVar1 = (name == "Keys");
					if (bVar1) {
						if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Keys();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Keys();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x8d4d225c) {
				if (uVar2 == 0x8d4d225b) {
					bVar1 = (name == "Values");
					if (bVar1) {
						if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Values();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Values();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x669c4958) {
					bVar1 = (name == "Contains");
					if (bVar1) {
						if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Contains();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Contains();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xb6973ef7) {
				bVar1 = (name == "Get");
				if (bVar1) {
					if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings)) ;
						pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Get() ;
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicDictBuiltin.Bindings.__CreateMethodBinding__Get();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe1e7b894) {
				bVar1 = (name == "Count");
				if (bVar1) {
					if ((typeof(CustomLogicDictBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings)) ;
						pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Count();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicDictBuiltin.Bindings.__CreatePropertyBinding__Count();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDictBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x58AE7D0", Offset = "0x58AD7D0", VA = "0x58AE7D0")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Count()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Count): 3 lines keep C-only constructs
			Func<CustomLogicDictBuiltin, object> __this;
			CLPropertyBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b14 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicDictBuiltin>)) ;
				Il2CppMethodInitialized_07545b14 = true;
			}
			__this = new Func<CustomLogicDictBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicDictBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x58AE870", Offset = "0x58AD870", VA = "0x58AE870")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Keys()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Keys): 3 lines keep C-only constructs
			Func<CustomLogicDictBuiltin, object> __this;
			CLPropertyBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b15 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicDictBuiltin>)) ;
				Il2CppMethodInitialized_07545b15 = true;
			}
			__this = new Func<CustomLogicDictBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Keys_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicDictBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x58AE910", Offset = "0x58AD910", VA = "0x58AE910")]
		public static CLPropertyBinding<CustomLogicDictBuiltin> __CreatePropertyBinding__Values()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Values): 3 lines keep C-only constructs
			Func<CustomLogicDictBuiltin, object> __this;
			CLPropertyBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b16 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicDictBuiltin>)) ;
				Il2CppMethodInitialized_07545b16 = true;
			}
			__this = new Func<CustomLogicDictBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings___CreatePropertyBinding__Values_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicDictBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x58AE9B0", Offset = "0x58AD9B0", VA = "0x58AE9B0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Clear): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDictBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b17 == false) {
				Il2CppMethodInitialized_07545b17 = true;
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDictBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDictBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDictBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Clear_b__5_0);
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDictBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B1A")]
		[Address(RVA = "0x58AEAF0", Offset = "0x58ADAF0", VA = "0x58AEAF0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Get()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Get): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDictBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b18 == false) {
				Il2CppMethodInitialized_07545b18 = true;
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDictBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDictBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDictBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Get_b__6_0);
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDictBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B1B")]
		[Address(RVA = "0x58AEC30", Offset = "0x58ADC30", VA = "0x58AEC30")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Set()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Set): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDictBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b19 == false) {
				Il2CppMethodInitialized_07545b19 = true;
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDictBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDictBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDictBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Set_b__7_0);
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDictBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B1C")]
		[Address(RVA = "0x58AED70", Offset = "0x58ADD70", VA = "0x58AED70")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Remove()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Remove): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDictBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b1a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0) ;
				Il2CppMethodInitialized_07545b1a = true;
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDictBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDictBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDictBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Remove_b__8_0);
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDictBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x58AEEB0", Offset = "0x58ADEB0", VA = "0x58AEEB0")]
		public static CLMethodBinding<CustomLogicDictBuiltin> __CreateMethodBinding__Contains()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Contains): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDictBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDictBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDictBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b1b == false) {
				Il2CppMethodInitialized_07545b1b = true;
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDictBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDictBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDictBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicDictBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDictBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDictBuiltin_Bindings_c___CreateMethodBinding__Contains_b__9_0);
				pCVar2 = typeof(CustomLogicDictBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDictBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40015C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<object, object> _dict;

	[Token(Token = "0x40015C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicListBuiltin _cachedKeys;

	[Token(Token = "0x40015CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CustomLogicListBuiltin _cachedValues;

	[Token(Token = "0x40015CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _version;

	[Token(Token = "0x40015CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _listsVersion;

	[Token(Token = "0x170002E6")]
	public int Count
	{
		[Token(Token = "0x6001B04")]
		[Address(RVA = "0x58ADA40", Offset = "0x58ACA40", VA = "0x58ADA40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_Count): clean
			Dictionary<object, object> __this_00;
			int iVar1;

			__this_00 = this._dict;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
	}

	[Token(Token = "0x170002E7")]
	public CustomLogicListBuiltin Keys
	{
		[Token(Token = "0x6001B05")]
		[Address(RVA = "0x58ADA80", Offset = "0x58ACA80", VA = "0x58ADA80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_Keys): clean
			this.EnsureListsUpToDate();
			return this._cachedKeys;
		}
	}

	[Token(Token = "0x170002E8")]
	public CustomLogicListBuiltin Values
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x58ADBA0", Offset = "0x58ACBA0", VA = "0x58ADBA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_Values): clean
			this.EnsureListsUpToDate();
			return this._cachedValues;
		}
	}

	[Token(Token = "0x170002E9")]
	public override string ClassName
	{
		[Token(Token = "0x6001B0F")]
		[Address(RVA = "0x58AE230", Offset = "0x58AD230", VA = "0x58AE230", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_ClassName): clean
			return "Dict";
		}
	}

	[Token(Token = "0x170002EA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B10")]
		[Address(RVA = "0x58AE260", Offset = "0x58AD260", VA = "0x58AE260", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x170002EB")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B11")]
		[Address(RVA = "0x58AE270", Offset = "0x58AD270", VA = "0x58AE270", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170002EC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B12")]
		[Address(RVA = "0x58AE280", Offset = "0x58AD280", VA = "0x58AE280", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x58AD900", Offset = "0x58AC900", VA = "0x58AD900")]
	public CustomLogicDictBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$.ctor): clean
		Dictionary<object, object> __this_00;

		base();
		__this_00 = new Dictionary<object, object>();
		this._dict = __this_00;
		return;
	}

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x58AD9A0", Offset = "0x58AC9A0", VA = "0x58AD9A0")]
	public CustomLogicDictBuiltin(int capacity)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$.ctor): clean
		Dictionary<object, object> __this_00;

		base();
		__this_00 = new Dictionary<object, object>(capacity);
		this._dict = __this_00;
		return;
	}

	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x58ADBB0", Offset = "0x58ACBB0", VA = "0x58ADBB0")]
	public void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$Clear): 2 lines keep C-only constructs
		int piVar1;
		Dictionary<object, object> pSVar2;
		int iVar3;

		pSVar2 = this._dict;
		if (pSVar2 == null) {
	label_059adc15: ;
			throw new NullReferenceException();
		}
		iVar3 = pSVar2.Count;
		if (iVar3 != 0) {
			pSVar2 = this._dict;
			if (pSVar2 == null) goto label_059adc15;
			pSVar2.Clear();
			piVar1 = &this._version;
			*piVar1 = *piVar1 + 1;
		}
		return;
	}

	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x58ADC30", Offset = "0x58ACC30", VA = "0x58ADC30")]
	public object Get(object key, [Optional] object defaultValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$Get): clean
		Dictionary<object, object> __this_00;
		bool bVar1;
		object local_20;

		local_20 = null;
		__this_00 = this._dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue(key, ref local_20);
		if (bVar1) {
		}
		return defaultValue;
	}

	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x58ADCB0", Offset = "0x58ACCB0", VA = "0x58ADCB0")]
	public void Set(object key, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$Set): 2 lines keep C-only constructs
		int piVar1;
		Dictionary<object, object> __this_00;

		__this_00 = this._dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item(key, value);
		piVar1 = &this._version;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x58ADD10", Offset = "0x58ACD10", VA = "0x58ADD10")]
	public void Remove(object key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$Remove): 2 lines keep C-only constructs
		int piVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;

		__this_00 = this._dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this_00.Remove(key);
		if (bVar2) {
			piVar1 = &this._version;
			*piVar1 = *piVar1 + 1;
		}
		return;
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x58ADD70", Offset = "0x58ACD70", VA = "0x58ADD70")]
	public bool Contains(object key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$Contains): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		__this_00 = this._dict;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x58ADDC0", Offset = "0x58ACDC0", VA = "0x58ADDC0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$ToString): 5 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		object obj;
		bool bVar2;
		int iVar3;
		CustomLogicDictBuiltin.c__DisplayClass18_0 __this_00;
		String pSVar4;
		int iVar5;
		CustomLogicDictBuiltin.c__DisplayClass18_0 CStack_90;
		byte[] auStack_88 = new byte[16];
		object pIStack_78;
		object pIStack_70;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		object pIStack_40;

		pSVar1 = this._dict;
		if (pSVar1 != null) {
			iVar3 = pSVar1.Count;
			if (iVar3 == 0) {
				return "{}";
			}
			__this_00.builder =(CustomLogicDictBuiltin.c__DisplayClass18_0)il2cpp_codegen_object_new(typeof(StringBuilder));
			__this_00.builder = new StringBuilder();
			CStack_90.builder = __this_00.builder;
			if (CStack_90.builder != null) {
				CStack_90.builder.Append("{");
				pSVar1 = this._dict;
				if (pSVar1 != null) {
					iVar3 = pSVar1.Count;
					pSVar1 = this._dict;
					if (pSVar1 != null) {
						auStack_58.GetEnumerator(pSVar1);
						pIStack_78 = pIStack_48;
						pIStack_70 = pIStack_40;
						auStack_88._0_8_ = auStack_58._0_8_;
						auStack_88._8_8_ = auStack_58._8_8_;
						auStack_58._0_8_ = null;
						iVar5 = 0;
						auStack_58._8_8_ = (Dictionary.Enumerator<object, object>)auStack_88;
						while (true) {
							bVar2 = auStack_88.MoveNext();
							obj = pIStack_70;
							if (!(bVar2)) break;
							CustomLogicDictBuiltin._ToString_g__Append|18_0(pIStack_78, ref CStack_90);
							if (CStack_90.builder == null) {
								throw new NullReferenceException();
							}
							CStack_90.builder.Append(": ");
							CustomLogicDictBuiltin._ToString_g__Append|18_0(obj, ref CStack_90);
							if (iVar5 < iVar3 + -1) {
								if (CStack_90.builder == null) {
									throw new NullReferenceException();
								}
								CStack_90.builder.Append(", ");
							}
							iVar5 = iVar5 + 1;
						}
						auStack_88.Dispose();
						if ((CStack_90.builder != null) &&(CStack_90.builder.Append("}"), CStack_90.builder != null)) {
							pSVar4 = (String)(**(code*)(*(long)CStack_90.builder + 0x168))(CStack_90.builder, *(ulong)(*(long)CStack_90.builder + 0x170));
							return pSVar4;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x58ADC20", Offset = "0x58ACC20", VA = "0x58ADC20")]
	private void InvalidateCache()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$InvalidateCache): 2 lines keep C-only constructs
		int piVar1;

		piVar1 = &this._version;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x58ADA90", Offset = "0x58ACA90", VA = "0x58ADA90")]
	private void EnsureListsUpToDate()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c (CustomLogic.CustomLogicDictBuiltin$$EnsureListsUpToDate): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o enumerable;
		CustomLogicListBuiltin pCVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o enumerable_00;

		if ((this._listsVersion == this._version) &&(this._cachedKeys != null)) {
			return;
		}
		pSVar1 = this._dict;
		if (pSVar1 != null) {
			enumerable = pSVar1.Keys;
			pCVar2 = new CustomLogicListBuiltin((IEnumerable<object>)enumerable, true);
			this._cachedKeys = pCVar2;
			pSVar1 = this._dict;
			if (pSVar1 != null) {
				enumerable_00 = pSVar1.Values;
				pCVar2 = new CustomLogicListBuiltin((IEnumerable<object>)enumerable_00, true);
				this._cachedValues = pCVar2;
				this._listsVersion = this._version;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicDictBuiltin.c.

	// CustomLogic.CustomLogicDictBuiltin$$<ToString>g__Append|18_0: 1 lines keep C-only constructs
	private static void ToString_g__Append_18_0(object obj)
	{
		StringBuilder pSVar1;

		if ((obj == null) || (obj.klass != g_data_07556758)) {
			pSVar1 = param_2.builder;
			if (pSVar1 != null) {
				pSVar1.Append(obj);
				return;
			}
		}
		else {
			pSVar1 = param_2.builder;
			if (pSVar1 != null) {
				pSVar1 = pSVar1.Append(0x22);
				if (pSVar1 != null) {
					pSVar1 = pSVar1.Append((String)obj);
					if (pSVar1 != null) {
						pSVar1.Append(0x22);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Count");
		__this.Add((Il2CppObject *)"Keys");
		__this.Add((Il2CppObject *)"Values");
		__this.Add((Il2CppObject *)"Clear");
		__this.Add((Il2CppObject *)"Get");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"Remove");
		__this.Add((Il2CppObject *)"Contains");
		CustomLogicDictBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicDictBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Count_g____getter_2_0(CustomLogicDictBuiltin __i)
	{
		Dictionary<object, object> __this;
		object pIVar1;

		if (__i != null) {
			__this = __i._dict;
			if (__this != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Keys>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Keys_g____getter_3_0(CustomLogicDictBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.EnsureListsUpToDate();
		return (object)__i._cachedKeys;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Values>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Values_g____getter_4_0(CustomLogicDictBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.EnsureListsUpToDate();
		return (object)__i._cachedValues;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicDictBuiltin.Bindings.c();
		CustomLogicDictBuiltin.Bindings.c.__9 =(CustomLogicDictBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__5_0(CustomLogicDictBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Clear();
		return null;
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Get_b__6_0(CustomLogicDictBuiltin __c, Object[] __a)
	{
		int iVar1;
		object key;
		Dictionary<object, object> __this_00;
		bool bVar2;
		object pIVar3;
		object pIStack_20;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if (iVar1 == 0) {
				throw new IndexOutOfRangeException();
			}
			if (iVar1 < 2) {
			}
			else {
			}
			if (__c != null) {
				key = __a[0];
				pIStack_20 = null;
				__this_00 = __c._dict;
				if (__this_00 != null) {
					bVar2 = __this_00.TryGetValue(key, ref pIStack_20);
					if (bVar2) {
					}
					return pIVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__7_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Set_b__7_0(CustomLogicDictBuiltin __c, Object[] __a)
	{
		int piVar1;
		int iVar2;
		object key;
		object value;
		Dictionary<object, object> __this_00;

		if (__a != null) {
			iVar2 = (int)__a.Length;
			if ((iVar2 == 0) || (iVar2 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				key = __a[0];
				value = __a[1];
				__this_00 = __c._dict;
				if (__this_00 != null) {
					__this_00.set_Item(key, value);
					piVar1 = &__c._version;
					*piVar1 = *piVar1 + 1;
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__8_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Remove_b__8_0(CustomLogicDictBuiltin __c, Object[] __a)
	{
		int piVar1;
		object key;
		Dictionary<object, object> __this_00;
		bool bVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				key = __a[0];
				__this_00 = __c._dict;
				if (__this_00 != null) {
					bVar2 = __this_00.Remove(key);
					if (bVar2) {
						piVar1 = &__c._version;
						*piVar1 = *piVar1 + 1;
					}
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__9_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Contains_b__9_0(CustomLogicDictBuiltin __c, Object[] __a)
	{
		Dictionary<object, object> __this_00;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_18;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = __a[0];
				uStack_18 = in_RAX;
				__this_00 = __c._dict;
				if (__this_00 != null) {
					bVar1 = __this_00.ContainsKey(pIVar2);
					uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
					pIVar2 = (object)(((long)&uStack_18 + 7));
					return pIVar2;
				}
			}
		}
		throw new NullReferenceException();
	}
}
