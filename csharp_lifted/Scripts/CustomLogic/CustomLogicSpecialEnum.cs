// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSpecialEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSpecialEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000572")]
[CompilerGenerated]
internal class CustomLogicSpecialEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000573")]
	public static class Factory
	{
		[Token(Token = "0x600306D")]
		[Address(RVA = "0x59AAFA0", Offset = "0x59A9FA0", VA = "0x59AAFA0")]
		public static CustomLogicSpecialEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSpecialEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSpecialEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicSpecialEnum();
			return (CustomLogicSpecialEnum)__this;
		}
	}

	[Token(Token = "0x2000574")]
	public static class Bindings
	{
		[Token(Token = "0x4001883")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600306E")]
		[Address(RVA = "0x59AB0C0", Offset = "0x59AA0C0", VA = "0x59AB0C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicSpecialEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x50d88c80) {
				if (uVar2 < 0x132fe373) {
					if (uVar2 < 0x23f06bf) {
						if (uVar2 == 0x3f0398) {
							bVar1 = (name == "Spin1");
							if (bVar1) {
								pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Spin1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x23f06be) {
							bVar1 = (name == "Spin3");
							if (bVar1) {
								pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Spin3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x33f0851) {
						bVar1 = (name == "Spin2");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Spin2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xfb12e57) {
						bVar1 = (name == "Distract");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Distract();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x132fe372) {
						bVar1 = (name == "Potato");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Potato();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x27e47193) {
					if (uVar2 == 0x184b43d0) {
						bVar1 = (name == "Carry");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Carry();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x27e47192) {
						bVar1 = (name == "Annie");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Annie();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x2ab69de5) {
					bVar1 = (name == "Armored");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Armored();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x304ff7fb) {
					bVar1 = (name == "None");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__None();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x50d88c7f) {
					bVar1 = (name == "DownStrike");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__DownStrike();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9d6edc06) {
				if (uVar2 < 0x67c7f536) {
					if (uVar2 == 0x548b671e) {
						bVar1 = (name == "Switchback");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Switchback();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x67c7f535) {
						bVar1 = (name == "Stock");
						if (bVar1) {
							pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Stock();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8d87a40b) {
					bVar1 = (name == "BladeThrow");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__BladeThrow();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x960fb720) {
					bVar1 = (name == "Smell");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Smell();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9d6edc05) {
					bVar1 = (name == "Eren");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Eren();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb7bb7227) {
				if (uVar2 == 0x9fc581fa) {
					bVar1 = (name == "SmokeBomb");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__SmokeBomb();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa499f21e) {
					bVar1 = (name == "Confuse");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Confuse();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb7bb7226) {
					bVar1 = (name == "Escape");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Escape();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xc7ef102c) {
				bVar1 = (name == "AHSSTwinShot");
				if (bVar1) {
					if ((typeof(CustomLogicSpecialEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicSpecialEnum.Bindings)) ;
					}
					pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__AHSSTwinShot();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xca0fab3c) {
				bVar1 = (name == "Dance");
				if (bVar1) {
					if ((typeof(CustomLogicSpecialEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicSpecialEnum.Bindings)) ;
					}
					pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Dance();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xdba7f44e) {
				bVar1 = (name == "Supply");
				if (bVar1) {
					if ((typeof(CustomLogicSpecialEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicSpecialEnum.Bindings)) ;
					}
					pCVar3 = CustomLogicSpecialEnum.Bindings.__CreatePropertyBinding__Supply();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSpecialEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600306F")]
		[Address(RVA = "0x59AB8C0", Offset = "0x59AA8C0", VA = "0x59AB8C0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Potato()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Potato): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a77 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a77 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Potato_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003070")]
		[Address(RVA = "0x59AB960", Offset = "0x59AA960", VA = "0x59AB960")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Escape()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Escape): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a78 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a78 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Escape_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003071")]
		[Address(RVA = "0x59ABA00", Offset = "0x59AAA00", VA = "0x59ABA00")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Dance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Dance): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a79 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a79 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Dance_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003072")]
		[Address(RVA = "0x59ABAA0", Offset = "0x59AAAA0", VA = "0x59ABAA0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Distract()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Distract): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7a = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Distract_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003073")]
		[Address(RVA = "0x59ABB40", Offset = "0x59AAB40", VA = "0x59ABB40")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Smell()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Smell): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7b = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Smell_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003074")]
		[Address(RVA = "0x59ABBE0", Offset = "0x59AABE0", VA = "0x59ABBE0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Supply()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Supply): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7c = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Supply_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003075")]
		[Address(RVA = "0x59ABC80", Offset = "0x59AAC80", VA = "0x59ABC80")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__SmokeBomb()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__SmokeBomb): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7d = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003076")]
		[Address(RVA = "0x59ABD20", Offset = "0x59AAD20", VA = "0x59ABD20")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Carry()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Carry): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7e = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Carry_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003077")]
		[Address(RVA = "0x59ABDC0", Offset = "0x59AADC0", VA = "0x59ABDC0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Switchback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Switchback): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a7f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a7f = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003078")]
		[Address(RVA = "0x59ABE60", Offset = "0x59AAE60", VA = "0x59ABE60")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Confuse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Confuse): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a80 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a80 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Confuse_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003079")]
		[Address(RVA = "0x59ABF00", Offset = "0x59AAF00", VA = "0x59ABF00")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__DownStrike()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__DownStrike): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a81 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a81 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__DownStrike_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307A")]
		[Address(RVA = "0x59ABFA0", Offset = "0x59AAFA0", VA = "0x59ABFA0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Spin1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin1): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a82 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a82 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin1_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307B")]
		[Address(RVA = "0x59AC040", Offset = "0x59AB040", VA = "0x59AC040")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Spin2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin2): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a83 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a83 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin2_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307C")]
		[Address(RVA = "0x59AC0E0", Offset = "0x59AB0E0", VA = "0x59AC0E0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Spin3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin3): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a84 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a84 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin3_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307D")]
		[Address(RVA = "0x59AC180", Offset = "0x59AB180", VA = "0x59AC180")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__BladeThrow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__BladeThrow): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a85 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a85 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__BladeThrow_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307E")]
		[Address(RVA = "0x59AC220", Offset = "0x59AB220", VA = "0x59AC220")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__AHSSTwinShot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__AHSSTwinShot): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a86 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a86 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__AHSSTwinShot_g____getter_17);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600307F")]
		[Address(RVA = "0x59AC2C0", Offset = "0x59AB2C0", VA = "0x59AC2C0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Stock()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Stock): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a87 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a87 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Stock_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003080")]
		[Address(RVA = "0x59AC360", Offset = "0x59AB360", VA = "0x59AC360")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__None()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__None): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a88 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a88 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__None_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003081")]
		[Address(RVA = "0x59AC400", Offset = "0x59AB400", VA = "0x59AC400")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Eren()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Eren): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a89 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a89 = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Eren_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003082")]
		[Address(RVA = "0x59AC4A0", Offset = "0x59AB4A0", VA = "0x59AC4A0")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Annie()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Annie): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a8a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a8a = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Annie_g____getter_21_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003083")]
		[Address(RVA = "0x59AC540", Offset = "0x59AB540", VA = "0x59AC540")]
		public static CLPropertyBinding<CustomLogicSpecialEnum> __CreatePropertyBinding__Armored()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Armored): 3 lines keep C-only constructs
			Func<CustomLogicSpecialEnum, object> __this;
			CLPropertyBinding<CustomLogicSpecialEnum> __this_00;

			if (Il2CppMethodInitialized_07546a8b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicSpecialEnum>)) ;
				Il2CppMethodInitialized_07546a8b = true;
			}
			__this = new Func<CustomLogicSpecialEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Armored_g____getter_22_0);
			__this_00 = new CLPropertyBinding<CustomLogicSpecialEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000846")]
	public static string Potato
	{
		[Token(Token = "0x6003054")]
		[Address(RVA = "0x59AAB50", Offset = "0x59A9B50", VA = "0x59AAB50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Potato): clean
			return "Potato";
		}
	}

	[Token(Token = "0x17000847")]
	public static string Escape
	{
		[Token(Token = "0x6003055")]
		[Address(RVA = "0x59AAB80", Offset = "0x59A9B80", VA = "0x59AAB80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Escape): clean
			return "Escape";
		}
	}

	[Token(Token = "0x17000848")]
	public static string Dance
	{
		[Token(Token = "0x6003056")]
		[Address(RVA = "0x59AABB0", Offset = "0x59A9BB0", VA = "0x59AABB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Dance): clean
			return "Dance";
		}
	}

	[Token(Token = "0x17000849")]
	public static string Distract
	{
		[Token(Token = "0x6003057")]
		[Address(RVA = "0x59AABE0", Offset = "0x59A9BE0", VA = "0x59AABE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Distract): clean
			return "Distract";
		}
	}

	[Token(Token = "0x1700084A")]
	public static string Smell
	{
		[Token(Token = "0x6003058")]
		[Address(RVA = "0x59AAC10", Offset = "0x59A9C10", VA = "0x59AAC10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Smell): clean
			return "Smell";
		}
	}

	[Token(Token = "0x1700084B")]
	public static string Supply
	{
		[Token(Token = "0x6003059")]
		[Address(RVA = "0x59AAC40", Offset = "0x59A9C40", VA = "0x59AAC40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Supply): clean
			return "Supply";
		}
	}

	[Token(Token = "0x1700084C")]
	public static string SmokeBomb
	{
		[Token(Token = "0x600305A")]
		[Address(RVA = "0x59AAC70", Offset = "0x59A9C70", VA = "0x59AAC70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_SmokeBomb): clean
			return "SmokeBomb";
		}
	}

	[Token(Token = "0x1700084D")]
	public static string Carry
	{
		[Token(Token = "0x600305B")]
		[Address(RVA = "0x59AACA0", Offset = "0x59A9CA0", VA = "0x59AACA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Carry): clean
			return "Carry";
		}
	}

	[Token(Token = "0x1700084E")]
	public static string Switchback
	{
		[Token(Token = "0x600305C")]
		[Address(RVA = "0x59AACD0", Offset = "0x59A9CD0", VA = "0x59AACD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Switchback): clean
			return "Switchback";
		}
	}

	[Token(Token = "0x1700084F")]
	public static string Confuse
	{
		[Token(Token = "0x600305D")]
		[Address(RVA = "0x59AAD00", Offset = "0x59A9D00", VA = "0x59AAD00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Confuse): clean
			return "Confuse";
		}
	}

	[Token(Token = "0x17000850")]
	public static string DownStrike
	{
		[Token(Token = "0x600305E")]
		[Address(RVA = "0x59AAD30", Offset = "0x59A9D30", VA = "0x59AAD30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_DownStrike): clean
			return "DownStrike";
		}
	}

	[Token(Token = "0x17000851")]
	public static string Spin1
	{
		[Token(Token = "0x600305F")]
		[Address(RVA = "0x59AAD60", Offset = "0x59A9D60", VA = "0x59AAD60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Spin1): clean
			return "Spin1";
		}
	}

	[Token(Token = "0x17000852")]
	public static string Spin2
	{
		[Token(Token = "0x6003060")]
		[Address(RVA = "0x59AAD90", Offset = "0x59A9D90", VA = "0x59AAD90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Spin2): clean
			return "Spin2";
		}
	}

	[Token(Token = "0x17000853")]
	public static string Spin3
	{
		[Token(Token = "0x6003061")]
		[Address(RVA = "0x59AADC0", Offset = "0x59A9DC0", VA = "0x59AADC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Spin3): clean
			return "Spin3";
		}
	}

	[Token(Token = "0x17000854")]
	public static string BladeThrow
	{
		[Token(Token = "0x6003062")]
		[Address(RVA = "0x59AADF0", Offset = "0x59A9DF0", VA = "0x59AADF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_BladeThrow): clean
			return "BladeThrow";
		}
	}

	[Token(Token = "0x17000855")]
	public static string AHSSTwinShot
	{
		[Token(Token = "0x6003063")]
		[Address(RVA = "0x59AAE20", Offset = "0x59A9E20", VA = "0x59AAE20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_AHSSTwinShot): clean
			return "AHSSTwinShot";
		}
	}

	[Token(Token = "0x17000856")]
	public static string Stock
	{
		[Token(Token = "0x6003064")]
		[Address(RVA = "0x59AAE50", Offset = "0x59A9E50", VA = "0x59AAE50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Stock): clean
			return "Stock";
		}
	}

	[Token(Token = "0x17000857")]
	public static string None
	{
		[Token(Token = "0x6003065")]
		[Address(RVA = "0x59AAE80", Offset = "0x59A9E80", VA = "0x59AAE80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_None): clean
			return "None";
		}
	}

	[Token(Token = "0x17000858")]
	public static string Eren
	{
		[Token(Token = "0x6003066")]
		[Address(RVA = "0x59AAEB0", Offset = "0x59A9EB0", VA = "0x59AAEB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Eren): clean
			return "Eren";
		}
	}

	[Token(Token = "0x17000859")]
	public static string Annie
	{
		[Token(Token = "0x6003067")]
		[Address(RVA = "0x59AAEE0", Offset = "0x59A9EE0", VA = "0x59AAEE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Annie): clean
			return "Annie";
		}
	}

	[Token(Token = "0x1700085A")]
	public static string Armored
	{
		[Token(Token = "0x6003068")]
		[Address(RVA = "0x59AAF10", Offset = "0x59A9F10", VA = "0x59AAF10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_Armored): clean
			return "Armored";
		}
	}

	[Token(Token = "0x1700085B")]
	public override string ClassName
	{
		[Token(Token = "0x6003069")]
		[Address(RVA = "0x59AAF40", Offset = "0x59A9F40", VA = "0x59AAF40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_ClassName): clean
			return "SpecialEnum";
		}
	}

	[Token(Token = "0x1700085C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600306A")]
		[Address(RVA = "0x59AAF70", Offset = "0x59A9F70", VA = "0x59AAF70", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700085D")]
	public override bool IsStatic
	{
		[Token(Token = "0x600306B")]
		[Address(RVA = "0x59AAF80", Offset = "0x59A9F80", VA = "0x59AAF80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700085E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600306C")]
		[Address(RVA = "0x59AAF90", Offset = "0x59A9F90", VA = "0x59AAF90", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003053")]
	[Address(RVA = "0x59AAAE0", Offset = "0x59A9AE0", VA = "0x59AAAE0")]
	public CustomLogicSpecialEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c (CustomLogic.CustomLogicSpecialEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a5e == false) {
			Il2CppMethodInitialized_07546a5e = true;
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

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSpecialEnum.c.

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Potato");
		__this.Add((Il2CppObject *)"Escape");
		__this.Add((Il2CppObject *)"Dance");
		__this.Add((Il2CppObject *)"Distract");
		__this.Add((Il2CppObject *)"Smell");
		__this.Add((Il2CppObject *)"Supply");
		__this.Add((Il2CppObject *)"SmokeBomb");
		__this.Add((Il2CppObject *)"Carry");
		__this.Add((Il2CppObject *)"Switchback");
		__this.Add((Il2CppObject *)"Confuse");
		__this.Add((Il2CppObject *)"DownStrike");
		__this.Add((Il2CppObject *)"Spin1");
		__this.Add((Il2CppObject *)"Spin2");
		__this.Add((Il2CppObject *)"Spin3");
		__this.Add((Il2CppObject *)"BladeThrow");
		__this.Add((Il2CppObject *)"AHSSTwinShot");
		__this.Add((Il2CppObject *)"Stock");
		__this.Add((Il2CppObject *)"None");
		__this.Add((Il2CppObject *)"Eren");
		__this.Add((Il2CppObject *)"Annie");
		__this.Add((Il2CppObject *)"Armored");
		CustomLogicSpecialEnum.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicSpecialEnum.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Potato>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Potato_g____getter_2_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Potato";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Escape>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Escape_g____getter_3_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Escape";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Dance>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Dance_g____getter_4_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Dance";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Distract>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Distract_g____getter_5_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Distract";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Smell>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Smell_g____getter_6_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Smell";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Supply>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Supply_g____getter_7_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Supply";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__SmokeBomb_g____getter_8_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"SmokeBomb";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Carry>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Carry_g____getter_9_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Carry";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Switchback_g____getter_10_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Switchback";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Confuse>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Confuse_g____getter_11_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Confuse";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__DownStrike>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__DownStrike_g____getter_12_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"DownStrike";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin1>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Spin1_g____getter_13_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Spin1";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin2>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Spin2_g____getter_14_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Spin2";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin3>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Spin3_g____getter_15_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Spin3";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__BladeThrow_g____getter_16_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"BladeThrow";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__AHSSTwinShot>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"AHSSTwinShot";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Stock>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Stock_g____getter_18_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Stock";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__None_g____getter_19_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"None";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Eren_g____getter_20_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Eren";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Annie_g____getter_21_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Annie";
	}

	// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Armored_g____getter_22_0(CustomLogicSpecialEnum __i)
	{
		return (Il2CppObject *)"Armored";
	}
}
