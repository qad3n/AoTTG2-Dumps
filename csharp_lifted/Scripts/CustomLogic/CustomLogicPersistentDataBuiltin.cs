// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPersistentDataBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPersistentDataBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005C9")]
[CompilerGenerated]
internal class CustomLogicPersistentDataBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005CA")]
	public static class Factory
	{
		[Token(Token = "0x60035EF")]
		[Address(RVA = "0x59EFC30", Offset = "0x59EEC30", VA = "0x59EFC30")]
		public static CustomLogicPersistentDataBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPersistentDataBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicPersistentDataBuiltin();
			return (CustomLogicPersistentDataBuiltin)__this;
		}
	}

	[Token(Token = "0x20005CB")]
	public static class Bindings
	{
		[Token(Token = "0x400192C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60035F0")]
		[Address(RVA = "0x59EFD50", Offset = "0x59EED50", VA = "0x59EFD50")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x38dfc974) {
				if (uVar2 == 0x4a57fc2) {
					bVar1 = (name == "Clear");
					if (bVar1) {
						if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__Clear();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__Clear();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb488604) {
					bVar1 = (name == "IsValidFileName");
					if (bVar1) {
						if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__IsValidFileName();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__IsValidFileName();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x38dfc973) {
					bVar1 = (name == "FileExists");
					if (bVar1) {
						if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__FileExists();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__FileExists();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x8f246a28) {
				if (uVar2 == 0x8f246a27) {
					bVar1 = (name == "SaveToFile");
					if (bVar1) {
						if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__SaveToFile();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__SaveToFile();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3fc653c7) {
					bVar1 = (name == "LoadFromFile");
					if (bVar1) {
						if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__LoadFromFile();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__LoadFromFile();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xb6e34446) {
				bVar1 = (name == "GetProperty");
				if (bVar1) {
					if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__GetProperty();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__GetProperty();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xecbfdf0a) {
				bVar1 = (name == "SetProperty");
				if (bVar1) {
					if ((typeof(CustomLogicPersistentDataBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__SetProperty();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicPersistentDataBuiltin.Bindings.__CreateMethodBinding__SetProperty();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPersistentDataBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60035F1")]
		[Address(RVA = "0x59F00C0", Offset = "0x59EF0C0", VA = "0x59F00C0")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__SetProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eae == false) {
				Il2CppMethodInitialized_07546eae = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F2")]
		[Address(RVA = "0x59F0200", Offset = "0x59EF200", VA = "0x59F0200")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__GetProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eaf == false) {
				Il2CppMethodInitialized_07546eaf = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F3")]
		[Address(RVA = "0x59F0340", Offset = "0x59EF340", VA = "0x59F0340")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__LoadFromFile()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__LoadFromFile): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eb0 == false) {
				Il2CppMethodInitialized_07546eb0 = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__LoadFromFile_b__4);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F4")]
		[Address(RVA = "0x59F0480", Offset = "0x59EF480", VA = "0x59F0480")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__SaveToFile()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SaveToFile): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eb1 == false) {
				Il2CppMethodInitialized_07546eb1 = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SaveToFile_b__5_0);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F5")]
		[Address(RVA = "0x59F05C0", Offset = "0x59EF5C0", VA = "0x59F05C0")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__Clear): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eb2 == false) {
				Il2CppMethodInitialized_07546eb2 = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F6")]
		[Address(RVA = "0x59F0700", Offset = "0x59EF700", VA = "0x59F0700")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__IsValidFileName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__IsValidFileName): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eb3 == false) {
				Il2CppMethodInitialized_07546eb3 = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__IsValidFileName_b);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60035F7")]
		[Address(RVA = "0x59F0840", Offset = "0x59EF840", VA = "0x59F0840")]
		public static CLMethodBinding<CustomLogicPersistentDataBuiltin> __CreateMethodBinding__FileExists()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__FileExists): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPersistentDataBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPersistentDataBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546eb4 == false) {
				Il2CppMethodInitialized_07546eb4 = true;
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPersistentDataBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPersistentDataBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicPersistentDataBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__FileExists_b__8_0);
				pCVar2 = typeof(CustomLogicPersistentDataBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicPersistentDataBuiltin>)) ;
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170009C1")]
	public override string ClassName
	{
		[Token(Token = "0x60035EB")]
		[Address(RVA = "0x59EFBD0", Offset = "0x59EEBD0", VA = "0x59EFBD0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$get_ClassName): clean
			return "PersistentData";
		}
	}

	[Token(Token = "0x170009C2")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60035EC")]
		[Address(RVA = "0x59EFC00", Offset = "0x59EEC00", VA = "0x59EFC00", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009C3")]
	public override bool IsStatic
	{
		[Token(Token = "0x60035ED")]
		[Address(RVA = "0x59EFC10", Offset = "0x59EEC10", VA = "0x59EFC10", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009C4")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60035EE")]
		[Address(RVA = "0x59EFC20", Offset = "0x59EEC20", VA = "0x59EFC20", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60035E3")]
	[Address(RVA = "0x59EE700", Offset = "0x59ED700", VA = "0x59EE700")]
	public CustomLogicPersistentDataBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ea3 == false) {
			Il2CppMethodInitialized_07546ea3 = true;
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

	[Token(Token = "0x60035E4")]
	[Address(RVA = "0x59EE770", Offset = "0x59ED770", VA = "0x59EE770")]
	public static void SetProperty(string property, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$SetProperty): 5 lines keep C-only constructs
		Dictionary<object, object> __this;
		Il2CppClass pIVar1;
		Exception __this_00;
		String message;
		MethodInfo lastManagedFrame;

		if ((((value != null) && (pIVar1 = value.klass, pIVar1 != g_data_07556740)) &&(pIVar1 != g_data_07556710)) && ((pIVar1 != g_data_07556758 && (pIVar1 != g_data_075566f0)))) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar1);
			message = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
			__this_00 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SetProperty);
			throw (object)__this_00;
		}
		__this = (Dictionary<object, object>)CustomLogicManager.PersistentData;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)property, value);
		return;
	}

	[Token(Token = "0x60035E5")]
	[Address(RVA = "0x59EE870", Offset = "0x59ED870", VA = "0x59EE870")]
	public static object GetProperty(string property, object defaultValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$GetProperty): clean
		object pIVar1;

		pIVar1 = CollectionExtensions.GetValueOrDefault<string, object>((IReadOnlyDictionary<TKey, TValue>)CustomLogicManager.PersistentData, (object)property, defaultValue);
		return pIVar1;
	}

	[Token(Token = "0x60035E6")]
	[Address(RVA = "0x59EE8F0", Offset = "0x59ED8F0", VA = "0x59EE8F0")]
	public static void LoadFromFile(string fileName, bool encrypted)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$LoadFromFile): 11 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		String a;
		Dictionary<object, object> __this;
		bool bVar2;
		String pSVar3;
		String pSVar4;
		SimpleAES __this_00;
		JSONNode __this_01;
		JSONNode pSVar5;
		String[] pSVar6;
		Il2CppClass pIVar7;
		Exception __this_02;
		MethodInfo lastManagedFrame;
		JSONNode.KeyEnumerator local_110;
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
		pSVar1 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
		if (pSVar1 == null) {
	label_05aeee2d: ;
			throw new NullReferenceException();
		}
		pSVar1.Clear();
		bVar2 = Util.IsValidFileName(fileName);
		if (!bVar2) {
			pIVar7 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(pIVar7);
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.LoadFromFile only supports legal fileName characters.");
			__this_02 = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_LoadFromFile);
			throw (object)__this_02;
		}
		pSVar4 = FolderPaths.PersistentData;
		pSVar3 = String.Concat(fileName, ".txt");
		pSVar4 = Path.Combine(pSVar4, pSVar3);
		bVar2 = File.Exists(pSVar4);
		if (bVar2) {
			pSVar4 = File.ReadAllText(pSVar4);
			if (encrypted) {
				__this_00 = new SimpleAES();
				if (__this_00 == null) goto label_05aeee2d;
				pSVar4 = __this_00.Decrypt(pSVar4);
			}
			__this_01 = JSON.Parse(pSVar4);
			if (__this_01 == null) goto label_05aeee2d;
			local_110 = __this_01.Keys;
			local_c8.m_Array._current = local_110.m_Enumerator.m_Array._current;
			local_c8._4_4_ = local_110.m_Enumerator._4_4_;
			local_c8.type = local_110.m_Enumerator.type;
			local_c8.m_Array._list = local_110.m_Enumerator.m_Array._list;
			local_c8.m_Array._index = local_110.m_Enumerator.m_Array._index;
			local_c8.m_Array._version = local_110.m_Enumerator.m_Array._version;
			local_c8.m_Object._current.value = local_110.m_Enumerator.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_110.m_Enumerator.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_110.m_Enumerator.m_Object._36_4_;
			local_c8.m_Object._version = local_110.m_Enumerator.m_Object._version;
			local_c8.m_Object._index = local_110.m_Enumerator.m_Object._index;
			local_c8.m_Object._current.key = local_110.m_Enumerator.m_Object._current.key;
			local_c8.m_Object._dictionary = local_110.m_Enumerator.m_Object._dictionary;
			local_78 = local_c8.GetEnumerator();
			bVar2 = local_78.MoveNext();
			if (bVar2) {
				do {
					pSVar4 = local_78.Current;
					pSVar5 = __this_01.get_Item(pSVar4);
					if (((pSVar5 == null) ||(pSVar3 = pSVar5.get_Value(), pSVar3 == null)) ||(pSVar6 = pSVar3.Split(0x3a, 0), pSVar6 == null)) goto label_05aeee2d;
					if ((int)pSVar6.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					a = pSVar6[0];
					pSVar1 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
					bVar2 = (a == "float");
					if (bVar2) {
						pSVar3 = pSVar3.Substring(6, pSVar3._stringLength + -6);
						local_110.m_Enumerator.type = (int32_t)Single.Parse(pSVar3);
						pIVar7 = g_data_07556740;
	label_05aeed06: ;
						pSVar3 = (String)(object)local_110;
					}
					else {
						bVar2 = (a == "int");
						if (bVar2) {
							pSVar3 = pSVar3.Substring(4, pSVar3._stringLength + -4);
							local_110.m_Enumerator.type = Int32.Parse(pSVar3);
							pIVar7 = g_data_07556710;
							goto label_05aeed06;
						}
						bVar2 = (a == "string");
						if (bVar2) {
							pSVar3 = pSVar3.Substring(7, pSVar3._stringLength + -7);
						}
						else {
							bVar2 = (a == "bool");
							if (bVar2) {
								pSVar3 = pSVar3.Substring(5, pSVar3._stringLength + -5);
								bVar2 = (pSVar3 == "1");
								local_110.m_Enumerator.type = CONCAT31(local_110.m_Enumerator.type._1_3_, bVar2);
								pIVar7 = g_data_075566f0;
								goto label_05aeed06;
							}
							__this = (Dictionary<object, object>)CustomLogicManager.PersistentData;
							if (__this == null) goto label_05aeee2d;
							pSVar3 = (String)__this.get_Item((object)pSVar4);
						}
					}
					if (pSVar1 == null) goto label_05aeee2d;
					pSVar1.set_Item((object)pSVar4, (object)pSVar3);
					bVar2 = local_78.MoveNext();
				} while (bVar2);
			}
		}
		return;
	}

	[Token(Token = "0x60035E7")]
	[Address(RVA = "0x59EEE80", Offset = "0x59EDE80", VA = "0x59EEE80")]
	public static void SaveToFile(string fileName, bool encrypted)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$SaveToFile): 33 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		String str0;
		bool bVar3;
		String pSVar4;
		String pSVar5;
		JSONObject __this;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		object pIVar6;
		sbyte pcVar7;
		String* ppSVar8;
		JSONString pSVar9;
		String pSVar10;
		SimpleAES __this_01;
		DirectoryInfo __this_02;
		FileInfo[] source;
		CustomLogic_CustomLogicPersistentDataBuiltin___c_StaticFields pCVar11;
		Func<T, TResult> __this_03;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		VirtualInvokeData pVVar12;
		Il2CppClass pIVar13;
		Exception __this_04;
		MethodInfo lastManagedFrame;
		ulong uVar14;
		undefined7 in_register_00000031;
		long lVar15;
		object local_80;
		uint local_74;
		byte[] local_70 = new byte[16];
		String local_60;
		byte[] local_58 = new byte[8];
		String local_48;
		String local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		local_80 = null;
		Directory.CreateDirectory(FolderPaths.PersistentData);
		bVar3 = Util.IsValidFileName(fileName);
		if (bVar3) {
			pSVar5 = FolderPaths.PersistentData;
			pSVar4 = String.Concat(fileName, ".txt");
			pSVar5 = Path.Combine(pSVar5, pSVar4);
			__this = new JSONObject();
			pSVar1 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
			if (pSVar1 != null) {
				local_74 = (undefined4)CONCAT71(in_register_00000031, encrypted);
				local_38 = pSVar5;
				__this_00 = pSVar1.Keys;
				if (__this_00 != null) {
					local_70.GetEnumerator(__this_00) ;
					local_48 = local_60;
					local_58 = (byte[])local_70._0_8_;
					local_70._0_8_ = null;
					local_70._8_8_ = local_58;
					while (true) {
						bVar3 = local_58.MoveNext();
						pSVar5 = local_48;
						if (!(bVar3)) break;
						pSVar1 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pIVar6 = pSVar1.get_Item((object)pSVar5);
						str0 = "string:";
						pSVar10 = "int:";
						pSVar4 = "float:";
						if (pIVar6 != null) {
							pIVar13 = pIVar6.klass;
							if (pIVar13 == g_data_07556740) {
								pSVar10 = (String)(*g_data_07556740.vtable[3].methodPtr)(pIVar6,g_data_07556740.vtable[3].method);
								pSVar4 = String.Concat(pSVar4, pSVar10);
								pSVar9 = new JSONString(pSVar4);
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.Add(pSVar5, (JSONNode)pSVar9);
							}
							else if (pIVar13 == g_data_07556710) {
								pSVar4 = (String)(*pIVar13.vtable[3].methodPtr)(pIVar6,pIVar13.vtable[3].method);
								pSVar4 = String.Concat(pSVar10, pSVar4);
								pSVar9 = new JSONString(pSVar4);
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.Add(pSVar5, (JSONNode)pSVar9);
							}
							else if (pIVar13 == g_data_07556758) {
								pSVar4 = (String)(*pIVar13.vtable[3].methodPtr)(pIVar6,pIVar13.vtable[3].method);
								pSVar4 = String.Concat(str0, pSVar4);
								pSVar9 = new JSONString(pSVar4);
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.Add(pSVar5, (JSONNode)pSVar9);
							}
							else if (pIVar13 == g_data_075566f0) {
								pcVar7 = il2cpp_vm_Object_Unbox(pIVar6);
								ppSVar8 = &"1";
								if (*pcVar7 == false) {
									ppSVar8 = &"0";
								}
								pSVar4 = String.Concat("bool:", *ppSVar8);
								pSVar9 = new JSONString(pSVar4);
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.Add(pSVar5, (JSONNode)pSVar9);
							}
						}
					}
					local_58.Dispose();
					if (__this != null) {
						pSVar5 = __this.ToString(4);
						if ((char)local_74 != false) {
							__this_01 = new SimpleAES();
							if (__this_01 == null) goto label_05aef83f;
							pSVar5 = __this_01.Encrypt(pSVar5);
						}
						if (pSVar5 != null) {
							if (1000000 < pSVar5._stringLength) {
								pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
								__this_04 = (Exception)il2cpp_codegen_object_new(pIVar13);
								ppSVar8 = &"PersistentData.SaveToFile exceeded 1 mb limit.";
								goto label_05aef891;
							}
							pSVar4 = FolderPaths.PersistentData;
							__this_02 = new DirectoryInfo(pSVar4);
							if (__this_02 != null) {
								source = __this_02.GetFiles();
								if ((typeof(CustomLogicPersistentDataBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar11 = typeof(CustomLogicPersistentDataBuiltin.c).static_fields;
									__this_03 = (Func<T, TResult>)pCVar11.__9__4_0;
								}
								else {
									pCVar11 = typeof(CustomLogicPersistentDataBuiltin.c).static_fields;
									__this_03 = (Func<T, TResult>)pCVar11.__9__4_0;
								}
								if (__this_03 == null) {
									if (((typeof(CustomLogicPersistentDataBuiltin.c))._2). cctor_finished_or_no_cctor == 0) {
										pCVar11 = typeof(CustomLogicPersistentDataBuiltin.c).static_fields;
									}
									pIVar6 = (object)pCVar11.__9;
									__this_03 = new Func<FileInfo, DateTime>(pIVar6, (intptr_t) MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c_SaveToFile_b__4_0);
									pCVar11 = typeof(CustomLogicPersistentDataBuiltin.c).static_fields;
									pCVar11.__9__4_0 = (Func<FileInfo, DateTime>)__this_03;
								}
								source_00 = Enumerable.OrderByDescending<FileInfo, DateTime>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_03);
								pIVar6 = (object)Enumerable.Skip<FileInfo>((System_Collections_Generic_IEnumerable_TSource__o)source_00, 100);
								if (pIVar6 != null) {
									pIVar13 = pIVar6.klass;
									uVar14 = (ulong)(pIVar13._2).interface_offsets_count;
									local_80 = pIVar6.Dispose();
									local_70._0_8_ = null;
									local_70._8_8_ = &local_80;
									do {
										pIVar6 = local_80;
										if (local_80 == null) {
											throw new NullReferenceException();
										}
										pIVar13 = local_80.klass;
										uVar14 = (ulong)(pIVar13._2).interface_offsets_count;
										bVar3 = pIVar6.Dispose();
										pIVar6 = local_80;
										if (!bVar3) {
											if (local_80 == null) goto label_05aef7f6;
											pIVar13 = local_80.klass;
											uVar14 = (ulong)(pIVar13._2).interface_offsets_count;
											if (uVar14 == 0) goto label_05aef7cf;
											pIVar2 = (pIVar13._1).interfaceOffsets;
											lVar15 = 0;
											goto label_05aef7c0;
										}
										if (local_80 == null) {
											throw new NullReferenceException();
										}
										pIVar13 = local_80.klass;
										uVar14 = (ulong)(pIVar13._2).interface_offsets_count;
										pIVar6 = pIVar6.Dispose();
										if (pIVar6 == null) {
											throw new NullReferenceException();
										}
										(*pIVar6.klass.vtable[0xb].methodPtr)(pIVar6,pIVar6.klass.vtable[0xb].method);
									} while(true);
								}
							}
						}
					}
				}
			}
	label_05aef83f: ;
			throw new NullReferenceException();
		}
		pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_04 = (Exception)il2cpp_codegen_object_new(pIVar13);
		ppSVar8 = &"PersistentData.SaveToFile only supports legal fileName characters.";
	label_05aef891: ;
		pSVar5 = il2cpp_codegen_get_runtime_metadata(ppSVar8);
		__this_04 = new Exception(pSVar5);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SaveToFile);
		throw (object)__this_04;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_05aef7c0: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar12 = pIVar13.vtable + *(int)((long)&pIVar2.offset + lVar15);
				goto label_05aef7ed;
			}
		}
	label_05aef7cf: ;
	label_05aef7ed: ;
		pIVar6.Dispose();
	label_05aef7f6: ;
		File.WriteAllText(local_38, pSVar5);
		return;
	}

	[Token(Token = "0x60035E8")]
	[Address(RVA = "0x59EF990", Offset = "0x59EE990", VA = "0x59EF990")]
	public static void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$Clear): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07546ea8 == false) {
			Il2CppMethodInitialized_07546ea8 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CustomLogicManager.PersistentData;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(CustomLogicManager)).static_fields + 0xa0);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		return;
	}

	[Token(Token = "0x60035E9")]
	[Address(RVA = "0x59EFA30", Offset = "0x59EEA30", VA = "0x59EFA30")]
	public static bool IsValidFileName(string fileName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$IsValidFileName): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07546ea9 == false) {
			Il2CppMethodInitialized_07546ea9 = true;
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x60035EA")]
	[Address(RVA = "0x59EFAA0", Offset = "0x59EEAA0", VA = "0x59EFAA0")]
	public static bool FileExists(string fileName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c (CustomLogic.CustomLogicPersistentDataBuiltin$$FileExists): 5 lines keep C-only constructs
		bool bVar1;
		String path2;
		String pSVar2;
		Il2CppClass klass;
		Exception __this;
		MethodInfo lastManagedFrame;

		bVar1 = Util.IsValidFileName(fileName);
		if (bVar1) {
			pSVar2 = FolderPaths.PersistentData;
			path2 = String.Concat(fileName, ".txt");
			pSVar2 = Path.Combine(pSVar2, path2);
			bVar1 = File.Exists(pSVar2);
			return bVar1;
		}
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this = (Exception)il2cpp_codegen_object_new(klass);
		pSVar2 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.FileExists only supports legal fileName characters.");
		__this = new Exception(pSVar2);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_FileExists);
		throw (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPersistentDataBuiltin.c.

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"SetProperty");
		__this.Add((Il2CppObject *)"GetProperty");
		__this.Add((Il2CppObject *)"LoadFromFile");
		__this.Add((Il2CppObject *)"SaveToFile");
		__this.Add((Il2CppObject *)"Clear");
		__this.Add((Il2CppObject *)"IsValidFileName");
		__this.Add((Il2CppObject *)"FileExists");
		CustomLogicPersistentDataBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicPersistentDataBuiltin.Bindings.c();
		CustomLogicPersistentDataBuiltin.Bindings.c.__9 =(CustomLogicPersistentDataBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__SetProperty_b__2_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		object obj;
		String property;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			property = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicPersistentDataBuiltin.SetProperty(property, __a[1]);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__GetProperty_b__3_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		String key;
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				pIVar1 = __a[1];
				pIVar1 = CollectionExtensions.GetValueOrDefault<string, object>((IReadOnlyDictionary<TKey, TValue>)CustomLogicManager.PersistentData, (object)key, pIVar1);
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromFile>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__LoadFromFile_b__4_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		object obj;
		bool encrypted;
		String fileName;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			fileName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				encrypted = CustomLogicEvaluator.ConvertTo<bool>(__a[1]) ;
				CustomLogicPersistentDataBuiltin.LoadFromFile(fileName, encrypted);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToFile>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__SaveToFile_b__5_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		object obj;
		bool encrypted;
		String fileName;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			fileName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				encrypted = CustomLogicEvaluator.ConvertTo<bool>(__a[1]) ;
				CustomLogicPersistentDataBuiltin.SaveToFile(fileName, encrypted);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__6_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		uint uVar1;
		Dictionary<object, object> __this_00;

		if (Il2CppMethodInitialized_07546ea8 == false) {
			Il2CppMethodInitialized_07546ea8 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
		}
		else {
			__this_00 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicManager)).static_fields + 0xa0);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return null;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsValidFileName>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__IsValidFileName_b__7_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		String fileName;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		fileName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = Util.IsValidFileName(fileName);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__FileExists>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__FileExists_b__8_0(CustomLogicPersistentDataBuiltin __c, Object[] __a)
	{
		String fileName;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		fileName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = CustomLogicPersistentDataBuiltin.FileExists(fileName);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicPersistentDataBuiltin.c();
		CustomLogicPersistentDataBuiltin.c.__9 =(CustomLogicPersistentDataBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$<SaveToFile>b__4_0: clean
	private DateTime c__SaveToFile_b__4_0(FileInfo x)
	{
		DateTime SVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		SVar1 = x.LastWriteTime;
		return (DateTime)SVar1._dateData;
	}
}
