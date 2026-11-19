// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLanguageEnum
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLanguageEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000542")]
[CompilerGenerated]
internal class CustomLogicLanguageEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000543")]
	public static class Factory
	{
		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x5992260", Offset = "0x5991260", VA = "0x5992260")]
		public static CustomLogicLanguageEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLanguageEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLanguageEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLanguageEnum();
			return (CustomLogicLanguageEnum)__this;
		}
	}

	[Token(Token = "0x2000544")]
	public static class Bindings
	{
		[Token(Token = "0x4001869")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002D56")]
		[Address(RVA = "0x5992380", Offset = "0x5991380", VA = "0x5992380")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLanguageEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x940c2e0b) {
				if (uVar2 < 0x47592387) {
					if (uVar2 < 0x1a8c6dbb) {
						if (uVar2 == 0xcd9bfaa) {
							bVar1 = (name == "Romanian");
							if (bVar1) {
								pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Romanian();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x11100833) {
							bVar1 = (name == "German");
							if (bVar1) {
								pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__German();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1a8c6dba) {
							bVar1 = (name == "Vietnamese");
							if (bVar1) {
								pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Vietnamese();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x1b9ae0bb) {
						bVar1 = (name == "English");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__English();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3342300c) {
						bVar1 = (name == "Czech");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Czech();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x47592386) {
						bVar1 = (name == "Russian");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Russian();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x7cbd6ca6) {
					if (uVar2 == 0x4fbe5a5d) {
						bVar1 = (name == "Ukrainian");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Ukrainian();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6044a05b) {
						bVar1 = (name == "Thai");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Thai();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7cbd6ca5) {
						bVar1 = (name == "French");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__French();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8099edda) {
					bVar1 = (name == "Hungarian");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Hungarian();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x940c2e0a) {
					bVar1 = (name == "Japanese");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Japanese();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7e11ec68) {
					bVar1 = (name == "Chinese");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Chinese();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb297e9d2) {
				if (uVar2 < 0xa653c2a4) {
					if (uVar2 == 0x9faffb3d) {
						bVar1 = (name == "Catalan");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Catalan();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa4f06665) {
						bVar1 = (name == "TraditionalChinese");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__TraditionalChinese();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa653c2a3) {
						bVar1 = (name == "Greek");
						if (bVar1) {
							pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Greek();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xaaf50d6c) {
					bVar1 = (name == "Polish");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Polish();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xad70bf21) {
					bVar1 = (name == "Korean");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Korean();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb297e9d1) {
					bVar1 = (name == "Dutch");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Dutch();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc1122286) {
				if (uVar2 == 0xb819825b) {
					bVar1 = (name == "Spanish");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Spanish();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb94e7b5b) {
					bVar1 = (name == "Turkish");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Turkish();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc1122285) {
					bVar1 = (name == "Indonesian");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Indonesian();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd7e15c2a) {
				if (uVar2 == 0xd5499884) {
					bVar1 = (name == "BrazilianPortuguese");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__BrazilianPortuguese();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd7e15c29) {
					bVar1 = (name == "Arabic");
					if (bVar1) {
						pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Arabic();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf039952b) {
				bVar1 = (name == "Italian");
				if (bVar1) {
					pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Italian();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf1231814) {
				bVar1 = (name == "Finnish");
				if (bVar1) {
					pCVar3 = CustomLogicLanguageEnum.Bindings.__CreatePropertyBinding__Finnish();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLanguageEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002D57")]
		[Address(RVA = "0x5992CF0", Offset = "0x5991CF0", VA = "0x5992CF0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Arabic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Arabic): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Arabic_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D58")]
		[Address(RVA = "0x5992D90", Offset = "0x5991D90", VA = "0x5992D90")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__BrazilianPortuguese()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__BrazilianPortuguese): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__BrazilianPortuguese_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D59")]
		[Address(RVA = "0x5992E30", Offset = "0x5991E30", VA = "0x5992E30")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Catalan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Catalan): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Catalan_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5A")]
		[Address(RVA = "0x5992ED0", Offset = "0x5991ED0", VA = "0x5992ED0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Chinese()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Chinese): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Chinese_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5B")]
		[Address(RVA = "0x5992F70", Offset = "0x5991F70", VA = "0x5992F70")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Czech()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Czech): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Czech_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5C")]
		[Address(RVA = "0x5993010", Offset = "0x5992010", VA = "0x5993010")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Dutch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Dutch): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Dutch_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5D")]
		[Address(RVA = "0x59930B0", Offset = "0x59920B0", VA = "0x59930B0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__English()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__English): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__English_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5E")]
		[Address(RVA = "0x5993150", Offset = "0x5992150", VA = "0x5993150")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Finnish()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Finnish): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Finnish_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D5F")]
		[Address(RVA = "0x59931F0", Offset = "0x59921F0", VA = "0x59931F0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__French()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__French): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__French_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D60")]
		[Address(RVA = "0x5993290", Offset = "0x5992290", VA = "0x5993290")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__German()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__German): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__German_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D61")]
		[Address(RVA = "0x5993330", Offset = "0x5992330", VA = "0x5993330")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Greek()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Greek): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Greek_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D62")]
		[Address(RVA = "0x59933D0", Offset = "0x59923D0", VA = "0x59933D0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Hungarian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Hungarian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Hungarian_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D63")]
		[Address(RVA = "0x5993470", Offset = "0x5992470", VA = "0x5993470")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Indonesian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Indonesian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Indonesian_g____getter_14);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D64")]
		[Address(RVA = "0x5993510", Offset = "0x5992510", VA = "0x5993510")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Italian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Italian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Italian_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D65")]
		[Address(RVA = "0x59935B0", Offset = "0x59925B0", VA = "0x59935B0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Japanese()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Japanese): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Japanese_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D66")]
		[Address(RVA = "0x5993650", Offset = "0x5992650", VA = "0x5993650")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Korean()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Korean): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Korean_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D67")]
		[Address(RVA = "0x59936F0", Offset = "0x59926F0", VA = "0x59936F0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Polish()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Polish): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Polish_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D68")]
		[Address(RVA = "0x5993790", Offset = "0x5992790", VA = "0x5993790")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Romanian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Romanian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Romanian_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D69")]
		[Address(RVA = "0x5993830", Offset = "0x5992830", VA = "0x5993830")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Russian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Russian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Russian_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6A")]
		[Address(RVA = "0x59938D0", Offset = "0x59928D0", VA = "0x59938D0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Spanish()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Spanish): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Spanish_g____getter_21_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6B")]
		[Address(RVA = "0x5993970", Offset = "0x5992970", VA = "0x5993970")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Thai()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Thai): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Thai_g____getter_22_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6C")]
		[Address(RVA = "0x5993A10", Offset = "0x5992A10", VA = "0x5993A10")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__TraditionalChinese()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__TraditionalChinese): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__TraditionalChinese_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6D")]
		[Address(RVA = "0x5993AB0", Offset = "0x5992AB0", VA = "0x5993AB0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Turkish()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Turkish): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Turkish_g____getter_24_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6E")]
		[Address(RVA = "0x5993B50", Offset = "0x5992B50", VA = "0x5993B50")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Ukrainian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Ukrainian): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Ukrainian_g____getter_25_0);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D6F")]
		[Address(RVA = "0x5993BF0", Offset = "0x5992BF0", VA = "0x5993BF0")]
		public static CLPropertyBinding<CustomLogicLanguageEnum> __CreatePropertyBinding__Vietnamese()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum.Bindings$$__CreatePropertyBinding__Vietnamese): 2 lines keep C-only constructs
			Func<CustomLogicLanguageEnum, object> __this;
			CLPropertyBinding<CustomLogicLanguageEnum> __this_00;

			__this = new Func<CustomLogicLanguageEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLanguageEnum_Bindings___CreatePropertyBinding__Vietnamese_g____getter_26);
			__this_00 = new CLPropertyBinding<CustomLogicLanguageEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000728")]
	public static string Arabic
	{
		[Token(Token = "0x6002D38")]
		[Address(RVA = "0x5991D50", Offset = "0x5990D50", VA = "0x5991D50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Arabic): clean
			return "\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
		}
	}

	[Token(Token = "0x17000729")]
	public static string BrazilianPortuguese
	{
		[Token(Token = "0x6002D39")]
		[Address(RVA = "0x5991D80", Offset = "0x5990D80", VA = "0x5991D80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_BrazilianPortuguese): clean
			return "PT-BR";
		}
	}

	[Token(Token = "0x1700072A")]
	public static string Catalan
	{
		[Token(Token = "0x6002D3A")]
		[Address(RVA = "0x5991DB0", Offset = "0x5990DB0", VA = "0x5991DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Catalan): clean
			return "Catal\xc3\xa0";
		}
	}

	[Token(Token = "0x1700072B")]
	public static string Chinese
	{
		[Token(Token = "0x6002D3B")]
		[Address(RVA = "0x5991DE0", Offset = "0x5990DE0", VA = "0x5991DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Chinese): clean
			return "\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
		}
	}

	[Token(Token = "0x1700072C")]
	public static string Czech
	{
		[Token(Token = "0x6002D3C")]
		[Address(RVA = "0x5991E10", Offset = "0x5990E10", VA = "0x5991E10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Czech): clean
			return "\xc4\x8ce\xc5\xa1tina";
		}
	}

	[Token(Token = "0x1700072D")]
	public static string Dutch
	{
		[Token(Token = "0x6002D3D")]
		[Address(RVA = "0x5991E40", Offset = "0x5990E40", VA = "0x5991E40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Dutch): clean
			return "Dutch";
		}
	}

	[Token(Token = "0x1700072E")]
	public static string English
	{
		[Token(Token = "0x6002D3E")]
		[Address(RVA = "0x5991E70", Offset = "0x5990E70", VA = "0x5991E70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_English): clean
			return "English";
		}
	}

	[Token(Token = "0x1700072F")]
	public static string Finnish
	{
		[Token(Token = "0x6002D3F")]
		[Address(RVA = "0x5991EA0", Offset = "0x5990EA0", VA = "0x5991EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Finnish): clean
			return "Suomi";
		}
	}

	[Token(Token = "0x17000730")]
	public static string French
	{
		[Token(Token = "0x6002D40")]
		[Address(RVA = "0x5991ED0", Offset = "0x5990ED0", VA = "0x5991ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_French): clean
			return "Fran\xc3\xa7ais";
		}
	}

	[Token(Token = "0x17000731")]
	public static string German
	{
		[Token(Token = "0x6002D41")]
		[Address(RVA = "0x5991F00", Offset = "0x5990F00", VA = "0x5991F00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_German): clean
			return "Deutsch";
		}
	}

	[Token(Token = "0x17000732")]
	public static string Greek
	{
		[Token(Token = "0x6002D42")]
		[Address(RVA = "0x5991F30", Offset = "0x5990F30", VA = "0x5991F30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Greek): clean
			return "\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
		}
	}

	[Token(Token = "0x17000733")]
	public static string Hungarian
	{
		[Token(Token = "0x6002D43")]
		[Address(RVA = "0x5991F60", Offset = "0x5990F60", VA = "0x5991F60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Hungarian): clean
			return "Magyar";
		}
	}

	[Token(Token = "0x17000734")]
	public static string Indonesian
	{
		[Token(Token = "0x6002D44")]
		[Address(RVA = "0x5991F90", Offset = "0x5990F90", VA = "0x5991F90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Indonesian): clean
			return "Indonesian";
		}
	}

	[Token(Token = "0x17000735")]
	public static string Italian
	{
		[Token(Token = "0x6002D45")]
		[Address(RVA = "0x5991FC0", Offset = "0x5990FC0", VA = "0x5991FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Italian): clean
			return "Italiano";
		}
	}

	[Token(Token = "0x17000736")]
	public static string Japanese
	{
		[Token(Token = "0x6002D46")]
		[Address(RVA = "0x5991FF0", Offset = "0x5990FF0", VA = "0x5991FF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Japanese): clean
			return "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
		}
	}

	[Token(Token = "0x17000737")]
	public static string Korean
	{
		[Token(Token = "0x6002D47")]
		[Address(RVA = "0x5992020", Offset = "0x5991020", VA = "0x5992020")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Korean): clean
			return "\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
		}
	}

	[Token(Token = "0x17000738")]
	public static string Polish
	{
		[Token(Token = "0x6002D48")]
		[Address(RVA = "0x5992050", Offset = "0x5991050", VA = "0x5992050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Polish): clean
			return "Polski";
		}
	}

	[Token(Token = "0x17000739")]
	public static string Romanian
	{
		[Token(Token = "0x6002D49")]
		[Address(RVA = "0x5992080", Offset = "0x5991080", VA = "0x5992080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Romanian): clean
			return "Rom\xc3\xa2n\xc4\x83";
		}
	}

	[Token(Token = "0x1700073A")]
	public static string Russian
	{
		[Token(Token = "0x6002D4A")]
		[Address(RVA = "0x59920B0", Offset = "0x59910B0", VA = "0x59920B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Russian): clean
			return "\xd0\xa0\xd1\x83\xd1\x81\xd1\x81\xd0\xba\xd0\xb8\xd0\xb9";
		}
	}

	[Token(Token = "0x1700073B")]
	public static string Spanish
	{
		[Token(Token = "0x6002D4B")]
		[Address(RVA = "0x59920E0", Offset = "0x59910E0", VA = "0x59920E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Spanish): clean
			return "Espa\xc3\xb1ol";
		}
	}

	[Token(Token = "0x1700073C")]
	public static string Thai
	{
		[Token(Token = "0x6002D4C")]
		[Address(RVA = "0x5992110", Offset = "0x5991110", VA = "0x5992110")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Thai): clean
			return "\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2";
		}
	}

	[Token(Token = "0x1700073D")]
	public static string TraditionalChinese
	{
		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x5992140", Offset = "0x5991140", VA = "0x5992140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_TraditionalChinese): clean
			return "\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
		}
	}

	[Token(Token = "0x1700073E")]
	public static string Turkish
	{
		[Token(Token = "0x6002D4E")]
		[Address(RVA = "0x5992170", Offset = "0x5991170", VA = "0x5992170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Turkish): clean
			return "T\xc3\xbcrk\xc3\xa7e";
		}
	}

	[Token(Token = "0x1700073F")]
	public static string Ukrainian
	{
		[Token(Token = "0x6002D4F")]
		[Address(RVA = "0x59921A0", Offset = "0x59911A0", VA = "0x59921A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Ukrainian): clean
			return "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
		}
	}

	[Token(Token = "0x17000740")]
	public static string Vietnamese
	{
		[Token(Token = "0x6002D50")]
		[Address(RVA = "0x59921D0", Offset = "0x59911D0", VA = "0x59921D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_Vietnamese): clean
			return "Ti\xe1\xba\xbfng Vi\xe1\xbb\x87t";
		}
	}

	[Token(Token = "0x17000741")]
	public override string ClassName
	{
		[Token(Token = "0x6002D51")]
		[Address(RVA = "0x5992200", Offset = "0x5991200", VA = "0x5992200", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_ClassName): clean
			return "LanguageEnum";
		}
	}

	[Token(Token = "0x17000742")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002D52")]
		[Address(RVA = "0x5992230", Offset = "0x5991230", VA = "0x5992230", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000743")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002D53")]
		[Address(RVA = "0x5992240", Offset = "0x5991240", VA = "0x5992240", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000744")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002D54")]
		[Address(RVA = "0x5992250", Offset = "0x5991250", VA = "0x5992250", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002D37")]
	[Address(RVA = "0x5991CE0", Offset = "0x5990CE0", VA = "0x5991CE0")]
	public CustomLogicLanguageEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c (CustomLogic.CustomLogicLanguageEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075467db == false) {
			Il2CppMethodInitialized_075467db = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLanguageEnum.c.

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Arabic");
		__this.Add((Il2CppObject *)"BrazilianPortuguese");
		__this.Add((Il2CppObject *)"Catalan");
		__this.Add((Il2CppObject *)"Chinese");
		__this.Add((Il2CppObject *)"Czech");
		__this.Add((Il2CppObject *)"Dutch");
		__this.Add((Il2CppObject *)"English");
		__this.Add((Il2CppObject *)"Finnish");
		__this.Add((Il2CppObject *)"French");
		__this.Add((Il2CppObject *)"German");
		__this.Add((Il2CppObject *)"Greek");
		__this.Add((Il2CppObject *)"Hungarian");
		__this.Add((Il2CppObject *)"Indonesian");
		__this.Add((Il2CppObject *)"Italian");
		__this.Add((Il2CppObject *)"Japanese");
		__this.Add((Il2CppObject *)"Korean");
		__this.Add((Il2CppObject *)"Polish");
		__this.Add((Il2CppObject *)"Romanian");
		__this.Add((Il2CppObject *)"Russian");
		__this.Add((Il2CppObject *)"Spanish");
		__this.Add((Il2CppObject *)"Thai");
		__this.Add((Il2CppObject *)"TraditionalChinese");
		__this.Add((Il2CppObject *)"Turkish");
		__this.Add((Il2CppObject *)"Ukrainian");
		__this.Add((Il2CppObject *)"Vietnamese");
		CustomLogicLanguageEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Arabic>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Arabic_g____getter_2_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__BrazilianPortuguese>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__BrazilianPortuguese_g____getter_3_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"PT-BR";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Catalan>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Catalan_g____getter_4_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Catal\xc3\xa0";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Chinese>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Chinese_g____getter_5_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Czech>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Czech_g____getter_6_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xc4\x8ce\xc5\xa1tina";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Dutch>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Dutch_g____getter_7_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Dutch";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__English>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__English_g____getter_8_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"English";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Finnish>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Finnish_g____getter_9_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Suomi";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__French>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__French_g____getter_10_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Fran\xc3\xa7ais";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__German>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__German_g____getter_11_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Deutsch";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Greek>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Greek_g____getter_12_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Hungarian>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Hungarian_g____getter_13_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Magyar";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Indonesian>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Indonesian_g____getter_14_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Indonesian";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Italian>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Italian_g____getter_15_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Italiano";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Japanese>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Japanese_g____getter_16_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Korean>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Korean_g____getter_17_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Polish>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Polish_g____getter_18_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Polski";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Romanian>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Romanian_g____getter_19_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Rom\xc3\xa2n\xc4\x83";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Russian>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Russian_g____getter_20_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xd0\xa0\xd1\x83\xd1\x81\xd1\x81\xd0\xba\xd0\xb8\xd0\xb9";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Spanish>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Spanish_g____getter_21_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Espa\xc3\xb1ol";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Thai>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Thai_g____getter_22_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__TraditionalChinese>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__TraditionalChinese_g____getter_23_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Turkish>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__Turkish_g____getter_24_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"T\xc3\xbcrk\xc3\xa7e";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Ukrainian>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__Ukrainian_g____getter_25_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
	}

	// CustomLogic.CustomLogicLanguageEnum.Bindings$$<__CreatePropertyBinding__Vietnamese>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__Vietnamese_g____getter_26_0(CustomLogicLanguageEnum __i)
	{
		return (Il2CppObject *)"Ti\xe1\xba\xbfng Vi\xe1\xbb\x87t";
	}
}
