// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000487")]
[CompilerGenerated]
internal class CustomLogicAudioSourceBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000488")]
	public static class Factory
	{
		[Token(Token = "0x6001E00")]
		[Address(RVA = "0x58F0D30", Offset = "0x58EFD30", VA = "0x58F0D30")]
		public static CustomLogicAudioSourceBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicAudioSourceBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAudioSourceBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAudioSourceBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x2000489")]
	public static class Bindings
	{
		[Token(Token = "0x4001685")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E01")]
		[Address(RVA = "0x58F0E20", Offset = "0x58EFE20", VA = "0x58F0E20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicAudioSourceBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7324416d) {
				if (uVar2 < 0x44f9bf2e) {
					if (uVar2 == 0x29ab6f83) {
						bVar1 = (name == "Play");
						if (bVar1) {
							if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Play();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Play();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x44f9bf2d) {
						bVar1 = (name == "Pause");
						if (bVar1) {
							if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Pause();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Pause();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x4b7f7705) {
					bVar1 = (name == "Stop");
					if (bVar1) {
						if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Stop();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Stop();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7324416c) {
					bVar1 = (name == "Unpause");
					if (bVar1) {
						if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Unpause();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__Unpause();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x785a8152) {
				if (uVar2 == 0x74f576af) {
					bVar1 = (name == "Volume");
					if (bVar1) {
						if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Volume();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Volume();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x785a8151) {
					bVar1 = (name == "Pitch");
					if (bVar1) {
						if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Pitch();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Pitch();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xdfe4e404) {
				bVar1 = (name == "Time");
				if (bVar1) {
					if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Time();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__Time();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xe4b35065) {
				bVar1 = (name == "IsPlaying");
				if (bVar1) {
					if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__IsPlaying();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicAudioSourceBuiltin.Bindings.__CreatePropertyBinding__IsPlaying();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf0f90de3) {
				bVar1 = (name == "PlayDelayed");
				if (bVar1) {
					if ((typeof(CustomLogicAudioSourceBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__PlayDelayed();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicAudioSourceBuiltin.Bindings.__CreateMethodBinding__PlayDelayed();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAudioSourceBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x58F1280", Offset = "0x58F0280", VA = "0x58F1280")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Volume()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Volume): 4 lines keep C-only constructs
			Func<CustomLogicAudioSourceBuiltin, object> __this;
			Action<CustomLogicAudioSourceBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicAudioSourceBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____getter_2);
			__this_00 = new Action<CustomLogicAudioSourceBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E03")]
		[Address(RVA = "0x58F1360", Offset = "0x58F0360", VA = "0x58F1360")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Time()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Time): 4 lines keep C-only constructs
			Func<CustomLogicAudioSourceBuiltin, object> __this;
			Action<CustomLogicAudioSourceBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicAudioSourceBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_3_0);
			__this_00 = new Action<CustomLogicAudioSourceBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E04")]
		[Address(RVA = "0x58F1440", Offset = "0x58F0440", VA = "0x58F1440")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Pitch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Pitch): 4 lines keep C-only constructs
			Func<CustomLogicAudioSourceBuiltin, object> __this;
			Action<CustomLogicAudioSourceBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicAudioSourceBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____getter_4);
			__this_00 = new Action<CustomLogicAudioSourceBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____setter_4);
			__this_01 = new CLPropertyBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E05")]
		[Address(RVA = "0x58F1520", Offset = "0x58F0520", VA = "0x58F1520")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying): 3 lines keep C-only constructs
			Func<CustomLogicAudioSourceBuiltin, object> __this;
			CLPropertyBinding<CustomLogicAudioSourceBuiltin> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E06")]
		[Address(RVA = "0x58F15C0", Offset = "0x58F05C0", VA = "0x58F15C0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Play()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Play): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAudioSourceBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545da8 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545da8 = true;
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAudioSourceBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Play_b__6_0);
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E07")]
		[Address(RVA = "0x58F1700", Offset = "0x58F0700", VA = "0x58F1700")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__PlayDelayed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__PlayDelayed): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAudioSourceBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545da9 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545da9 = true;
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAudioSourceBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__PlayDelayed_b__7_0);
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E08")]
		[Address(RVA = "0x58F1840", Offset = "0x58F0840", VA = "0x58F1840")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Stop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Stop): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAudioSourceBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545daa == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545daa = true;
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAudioSourceBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Stop_b__8_0);
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E09")]
		[Address(RVA = "0x58F1980", Offset = "0x58F0980", VA = "0x58F1980")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Pause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Pause): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAudioSourceBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dab == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545dab = true;
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAudioSourceBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Pause_b__9_0);
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E0A")]
		[Address(RVA = "0x58F1AC0", Offset = "0x58F0AC0", VA = "0x58F1AC0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Unpause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Unpause): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAudioSourceBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAudioSourceBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dac == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07545dac = true;
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAudioSourceBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAudioSourceBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAudioSourceBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Unpause_b__10_0);
				pCVar2 = typeof(CustomLogicAudioSourceBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAudioSourceBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001683")]
	[FieldOffset(Offset = "0x38")]
	public AudioSource Value;

	[Token(Token = "0x4001684")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x17000341")]
	public float Volume
	{
		[Token(Token = "0x6001DF0")]
		[Address(RVA = "0x58F0B50", Offset = "0x58EFB50", VA = "0x58F0B50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_Volume): clean
			AudioSource __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001DF1")]
		[Address(RVA = "0x58F0B70", Offset = "0x58EFB70", VA = "0x58F0B70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$set_Volume): clean
			AudioSource __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.volume = value;
			return;
		}
	}

	[Token(Token = "0x17000342")]
	public float Time
	{
		[Token(Token = "0x6001DF2")]
		[Address(RVA = "0x58F0B90", Offset = "0x58EFB90", VA = "0x58F0B90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_Time): clean
			AudioSource __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001DF3")]
		[Address(RVA = "0x58F0BB0", Offset = "0x58EFBB0", VA = "0x58F0BB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$set_Time): clean
			AudioSource __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.time = value;
			return;
		}
	}

	[Token(Token = "0x17000343")]
	public float Pitch
	{
		[Token(Token = "0x6001DF4")]
		[Address(RVA = "0x58F0BD0", Offset = "0x58EFBD0", VA = "0x58F0BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_Pitch): clean
			AudioSource __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001DF5")]
		[Address(RVA = "0x58F0BF0", Offset = "0x58EFBF0", VA = "0x58F0BF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$set_Pitch): clean
			AudioSource __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.pitch = value;
			return;
		}
	}

	[Token(Token = "0x17000344")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001DF6")]
		[Address(RVA = "0x58F0C10", Offset = "0x58EFC10", VA = "0x58F0C10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsPlaying): clean
			AudioSource __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x17000345")]
	public override string ClassName
	{
		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x58F0CD0", Offset = "0x58EFCD0", VA = "0x58F0CD0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_ClassName): clean
			return "AudioSource";
		}
	}

	[Token(Token = "0x17000346")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x58F0D00", Offset = "0x58EFD00", VA = "0x58F0D00", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000347")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x58F0D10", Offset = "0x58EFD10", VA = "0x58F0D10", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000348")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001DFF")]
		[Address(RVA = "0x58F0D20", Offset = "0x58EFD20", VA = "0x58F0D20", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x58F0AB0", Offset = "0x58EFAB0", VA = "0x58F0AB0")]
	public CustomLogicAudioSourceBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x58F0AC0", Offset = "0x58EFAC0", VA = "0x58F0AC0")]
	public CustomLogicAudioSourceBuiltin(BuiltinClassInstance owner, AudioSource audioSource)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor): 1 lines keep C-only constructs
		Component pUVar1;
		AudioSource pUVar2;

		base((Component)audioSource);
		this.OwnerBuiltin = owner;
		pUVar2 = typeof(AudioSource);
		pUVar1 = this.Component;
		if (pUVar1 == null) {
			this.Value = null;
		}
		else if (((AudioSource)pUVar1.klass != typeof(AudioSource)) ||(this.Value = (AudioSource)pUVar1,(AudioSource)pUVar1.klass != pUVar2)) {
			throw new InvalidCastException();
		}
		return;
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x58F0C30", Offset = "0x58EFC30", VA = "0x58F0C30")]
	public void Play()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$Play): clean
		AudioSource __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Play();
		return;
	}

	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x58F0C50", Offset = "0x58EFC50", VA = "0x58F0C50")]
	public void PlayDelayed(float seconds)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$PlayDelayed): clean
		AudioSource __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.PlayDelayed(seconds);
		return;
	}

	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x58F0C70", Offset = "0x58EFC70", VA = "0x58F0C70")]
	public void Stop()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$Stop): clean
		AudioSource __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Stop();
		return;
	}

	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x58F0C90", Offset = "0x58EFC90", VA = "0x58F0C90")]
	public void Pause()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$Pause): clean
		AudioSource __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Pause();
		return;
	}

	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x58F0CB0", Offset = "0x58EFCB0", VA = "0x58F0CB0")]
	public void Unpause()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c (CustomLogic.CustomLogicAudioSourceBuiltin$$Unpause): clean
		AudioSource __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.UnPause();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c.

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Volume");
		__this.Add((Il2CppObject *)"Time");
		__this.Add((Il2CppObject *)"Pitch");
		__this.Add((Il2CppObject *)"IsPlaying");
		__this.Add((Il2CppObject *)"Play");
		__this.Add((Il2CppObject *)"PlayDelayed");
		__this.Add((Il2CppObject *)"Stop");
		__this.Add((Il2CppObject *)"Pause");
		__this.Add((Il2CppObject *)"Unpause");
		CustomLogicAudioSourceBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Volume_g____getter_2_0(CustomLogicAudioSourceBuiltin __i)
	{
		AudioSource __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.volume;
		return pIVar1;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Volume_g____setter_2_1(CustomLogicAudioSourceBuiltin __i, object __v)
	{
		AudioSource __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.volume = value;
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Time_g____getter_3_0(CustomLogicAudioSourceBuiltin __i)
	{
		AudioSource __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.time;
		return pIVar1;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Time_g____setter_3_1(CustomLogicAudioSourceBuiltin __i, object __v)
	{
		AudioSource __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.time = value;
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Pitch_g____getter_4_0(CustomLogicAudioSourceBuiltin __i)
	{
		AudioSource __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.pitch;
		return pIVar1;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Pitch_g____setter_4_1(CustomLogicAudioSourceBuiltin __i, object __v)
	{
		AudioSource __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.pitch = value;
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|5_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsPlaying_g____getter_5_0(CustomLogicAudioSourceBuiltin __i)
	{
		AudioSource __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isPlaying;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		if (Il2CppMethodInitialized_07545db1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAudioSourceBuiltin.Bindings.c)) ;
			Il2CppMethodInitialized_07545db1 = true;
		}
		__this = new CustomLogicAudioSourceBuiltin.Bindings.c();
		CustomLogicAudioSourceBuiltin.Bindings.c.__9 =(CustomLogicAudioSourceBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Play_b__6_0(CustomLogicAudioSourceBuiltin __c, Object[] __a)
	{
		AudioSource __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Play();
		return null;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayDelayed>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__PlayDelayed_b__7_0(CustomLogicAudioSourceBuiltin __c, Object[] __a)
	{
		object obj;
		AudioSource __this_00;
		float delay;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			delay = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.PlayDelayed(delay);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__Stop_b__8_0(CustomLogicAudioSourceBuiltin __c, Object[] __a)
	{
		AudioSource __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Stop();
		return null;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__Pause_b__9_0(CustomLogicAudioSourceBuiltin __c, Object[] __a)
	{
		AudioSource __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Pause();
		return null;
	}

	// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unpause>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__Unpause_b__10_0(CustomLogicAudioSourceBuiltin __c, Object[] __a)
	{
		AudioSource __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.UnPause();
		return null;
	}
}
