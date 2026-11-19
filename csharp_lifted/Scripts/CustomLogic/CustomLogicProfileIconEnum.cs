// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicProfileIconEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicProfileIconEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200055A")]
[CompilerGenerated]
internal class CustomLogicProfileIconEnum : BuiltinClassInstance
{
	[Token(Token = "0x200055B")]
	public static class Factory
	{
		[Token(Token = "0x6002EAF")]
		[Address(RVA = "0x599B0D0", Offset = "0x599A0D0", VA = "0x599B0D0")]
		public static CustomLogicProfileIconEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProfileIconEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicProfileIconEnum();
			return (CustomLogicProfileIconEnum)__this;
		}
	}

	[Token(Token = "0x200055C")]
	public static class Bindings
	{
		[Token(Token = "0x400187B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002EB0")]
		[Address(RVA = "0x599B1F0", Offset = "0x599A1F0", VA = "0x599B1F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicProfileIconEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7b162818) {
				if (uVar2 < 0x39533ae7) {
					if (uVar2 < 0x1284b408) {
						if (uVar2 < 0x884a44a) {
							if (uVar2 < 0x684a124) {
								if (uVar2 < 0x5849f91) {
									if (uVar2 == 0x41352b8) {
										bVar1 = (name == "Hitch1");
										if (bVar1) {
											if ((typeof(CustomLogicProfileIconEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
											}
											pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Hitch1();
											return (ICLMemberBinding)pCVar3;
										}
									}
									else if (uVar2 == 0x5849f90) {
										bVar1 = (name == "Eren5");
										if (bVar1) {
											if ((typeof(CustomLogicProfileIconEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
											}
											pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren5();
											return (ICLMemberBinding)pCVar3;
										}
									}
								}
								else if (uVar2 == 0x67311b0) {
									bVar1 = (name == "Levi7");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi7();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x684a123) {
									bVar1 = (name == "Eren4");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren4();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 < 0x784a2b7) {
								if (uVar2 == 0x7731343) {
									bVar1 = (name == "Levi6");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi6();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x784a2b6) {
									bVar1 = (name == "Eren7");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren7();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x87314d6) {
								bVar1 = (name == "Levi5");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi5();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x884a449) {
								bVar1 = (name == "Eren6");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren6();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0xb731990) {
							if (uVar2 < 0x984a5dd) {
								if (uVar2 == 0x9731669) {
									bVar1 = (name == "Levi4");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi4();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x984a5dc) {
									bVar1 = (name == "Eren1");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren1();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0xa7317fc) {
								bVar1 = (name == "Levi3");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi3();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xb73198f) {
								bVar1 = (name == "Levi2");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0xc731b23) {
							if (uVar2 == 0xb84a902) {
								bVar1 = (name == "Eren3");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren3();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xc731b22) {
								bVar1 = (name == "Levi1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xc84aa95) {
							bVar1 = (name == "Eren2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xfdec375) {
							bVar1 = (name == "EmojiThumbsUp");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiThumbsUp();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1284b407) {
							bVar1 = (name == "Eren8");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Eren8();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1fc500bf) {
						if (uVar2 < 0x1a9fa9a8) {
							if (uVar2 < 0x1573294e) {
								if (uVar2 == 0x147327ba) {
									bVar1 = (name == "Levi9");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi9();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x1573294d) {
									bVar1 = (name == "Levi8");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi8();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x18826f8a) {
								bVar1 = (name == "Fenglee1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Fenglee1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1a9fa9a7) {
								bVar1 = (name == "Ymir1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ymir1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x1dc4fd99) {
							if (uVar2 == 0x1b9fab3a) {
								bVar1 = (name == "Ymir2");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ymir2();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1dc4fd98) {
								bVar1 = (name == "Sasha1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Sasha1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1e2c72a0) {
							bVar1 = (name == "Conny2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Conny2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1fc500be) {
							bVar1 = (name == "Sasha3");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Sasha3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x22c50578) {
						if (uVar2 < 0x20c50252) {
							if (uVar2 == 0x2029eb0d) {
								bVar1 = (name == "Armin1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Armin1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x20c50251) {
								bVar1 = (name == "Sasha2");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Sasha2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x212c7759) {
							bVar1 = (name == "Conny1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Conny1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x22c50577) {
							bVar1 = (name == "Sasha4");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Sasha4();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2a97ab2a) {
						if (uVar2 == 0x242eee2a) {
							bVar1 = (name == "Acros1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Acros1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2a97ab29) {
							bVar1 = (name == "EmojiLove");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiLove();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x34ad47d6) {
						bVar1 = (name == "Ian1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ian1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x368ff356) {
						bVar1 = (name == "Carula1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Carula1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x39533ae6) {
						bVar1 = (name == "EmojiAngry");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiAngry();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x6f9ee39a) {
					if (uVar2 < 0x630d6fb8) {
						if (uVar2 < 0x440b9f9a) {
							if (uVar2 < 0x3e26156b) {
								if (uVar2 == 0x3cdaf13b) {
									bVar1 = (name == "Nanaba1");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Nanaba1();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x3e26156a) {
									bVar1 = (name == "Jean1");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Jean1();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x42cdffc4) {
								bVar1 = (name == "Uri1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Uri1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x440b9f99) {
								bVar1 = (name == "Pixis1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Pixis1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x4febbf50) {
							if (uVar2 == 0x4517804f) {
								bVar1 = (name == "Gabi1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Gabi1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x4febbf4f) {
								bVar1 = (name == "Zeke1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Zeke1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x50ebc0e2) {
							bVar1 = (name == "Zeke2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Zeke2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x630d6fb7) {
							bVar1 = (name == "Petra2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Petra2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x67078177) {
						if (uVar2 < 0x640d714b) {
							if (uVar2 == 0x6354a681) {
								bVar1 = (name == "Gunther1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Gunther1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x640d714a) {
								bVar1 = (name == "Petra1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Petra1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x65792cc5) {
							bVar1 = (name == "Falco1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Falco1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x67078176) {
							bVar1 = (name == "Historia8");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia8();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x6d078ae9) {
						if (uVar2 == 0x6c9edee0) {
							bVar1 = (name == "Annie2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Annie2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x6d078ae8) {
							bVar1 = (name == "Historia2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x6d9ee073) {
						bVar1 = (name == "Annie3");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Annie3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6e078c7b) {
						bVar1 = (name == "Historia3");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6f9ee399) {
						bVar1 = (name == "Annie1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Annie1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x7307945b) {
					if (uVar2 < 0x71659f07) {
						if (uVar2 < 0x70659d74) {
							if (uVar2 == 0x70078fa1) {
								bVar1 = (name == "Historia1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x70659d73) {
								bVar1 = (name == "Keith1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Keith1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x71079134) {
							bVar1 = (name == "Historia6");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia6();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x71659f06) {
							bVar1 = (name == "Keith2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Keith2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x7265a09a) {
						if (uVar2 == 0x720792c7) {
							bVar1 = (name == "Historia7");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia7();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7265a099) {
							bVar1 = (name == "Keith3");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Keith3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x729ee852) {
						bVar1 = (name == "Annie4");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Annie4();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7307945a) {
						bVar1 = (name == "Historia4");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia4();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x771621cc) {
					if (uVar2 < 0x740795ee) {
						if (uVar2 == 0x739ee9e5) {
							bVar1 = (name == "Annie5");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Annie5();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x740795ed) {
							bVar1 = (name == "Historia5");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Historia5();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x76162038) {
						bVar1 = (name == "Titan10");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan10();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x771621cb) {
						bVar1 = (name == "Titan11");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan11();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x78fa7eae) {
					if (uVar2 == 0x7816235e) {
						bVar1 = (name == "Titan12");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan12();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x78fa7ead) {
						bVar1 = (name == "Revolution1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Revolution1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x791624f1) {
					bVar1 = (name == "Titan13");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan13();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7a162684) {
					bVar1 = (name == "Titan14");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan14();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7b162817) {
					bVar1 = (name == "Titan15");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan15();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xaeb7207c) {
				if (uVar2 < 0x9e146825) {
					if (uVar2 < 0x92145541) {
						if (uVar2 < 0x8bb9170c) {
							if (uVar2 < 0x7d162b3e) {
								if (uVar2 == 0x7c1629aa) {
									bVar1 = (name == "Titan16");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan16();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x7d162b3d) {
									bVar1 = (name == "Titan17");
									if (bVar1) {
										pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan17();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x8b7c3313) {
								bVar1 = (name == "Ymir104");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ymir104();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x8bb9170b) {
								bVar1 = (name == "Frieda1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Frieda1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x8e92c9c0) {
							if (uVar2 == 0x8cb9189e) {
								bVar1 = (name == "Frieda2");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Frieda2();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x8e92c9bf) {
								bVar1 = (name == "Hange1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Hange1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x903e7c78) {
							bVar1 = (name == "Bertholdt1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Bertholdt1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x92145540) {
							bVar1 = (name == "Titan9");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan9();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x9b8af8f7) {
						if (uVar2 < 0x9a1461d9) {
							if (uVar2 == 0x931456d3) {
								bVar1 = (name == "Titan8");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan8();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x9a1461d8) {
								bVar1 = (name == "Titan1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x9a8af763) {
							bVar1 = (name == "Erwin12");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin12();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9b8af8f6) {
							bVar1 = (name == "Erwin11");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin11();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x9c8afa8a) {
						if (uVar2 == 0x9c1464fe) {
							bVar1 = (name == "Titan3");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan3();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9c8afa89) {
							bVar1 = (name == "Erwin10");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin10();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9d146691) {
						bVar1 = (name == "Titan2");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9d676aad) {
						bVar1 = (name == "Nick1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Nick1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9e146824) {
						bVar1 = (name == "Titan5");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan5();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa6484808) {
					if (uVar2 < 0xa1146cde) {
						if (uVar2 < 0xa0146b4b) {
							if (uVar2 == 0x9f1469b7) {
								bVar1 = (name == "Titan4");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan4();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xa0146b4a) {
								bVar1 = (name == "Titan7");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan7();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xa0546208) {
							bVar1 = (name == "Yelena1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Yelena1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xa1146cdd) {
							bVar1 = (name == "Titan6");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Titan6();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0xa35466c2) {
						if (uVar2 == 0xa254652e) {
							bVar1 = (name == "Yelena3");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Yelena3();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xa35466c1) {
							bVar1 = (name == "Yelena2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Yelena2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xa397caf4) {
						bVar1 = (name == "Rico2");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Rico2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa6484807) {
						bVar1 = (name == "EmojiSmile");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiSmile();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xaa339bc4) {
					if (uVar2 < 0xa8290299) {
						if (uVar2 == 0xa697cfad) {
							bVar1 = (name == "Rico1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Rico1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xa8290298) {
							bVar1 = (name == "Founding1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Founding1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xa9339a30) {
						bVar1 = (name == "Levi12");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi12();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xaa339bc3) {
						bVar1 = (name == "Levi13");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi13();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xac339eea) {
					if (uVar2 == 0xab339d56) {
						bVar1 = (name == "Levi10");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi10();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xac339ee9) {
						bVar1 = (name == "Levi11");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi11();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xad33a07c) {
					bVar1 = (name == "Levi16");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi16();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xae33a20f) {
					bVar1 = (name == "Levi17");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi17();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xaeb7207b) {
					bVar1 = (name == "Pieck2");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Pieck2();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc2517bb8) {
				if (uVar2 < 0xbd5173d9) {
					if (uVar2 < 0xb033a536) {
						if (uVar2 < 0xafb7220f) {
							if (uVar2 == 0xaf33a3a2) {
								bVar1 = (name == "Levi14");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi14();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xafb7220e) {
								bVar1 = (name == "Pieck1");
								if (bVar1) {
									pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Pieck1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xafd7fba5) {
							bVar1 = (name == "EmojiCrying");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiCrying();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xb033a535) {
							bVar1 = (name == "Levi15");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Levi15();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0xbc2e1657) {
						if (uVar2 == 0xbb2e14c3) {
							bVar1 = (name == "Erwin1");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbc2e1656) {
							bVar1 = (name == "Erwin2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xbd2e17e9) {
						bVar1 = (name == "Erwin3");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xbd5173d8) {
						bVar1 = (name == "Mikasa3");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa3();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xbf5176ff) {
					if (uVar2 < 0xbe51756c) {
						if (uVar2 == 0xbe2e197c) {
							bVar1 = (name == "Erwin4");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin4();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbe51756b) {
							bVar1 = (name == "Mikasa2");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xbf2e1b0f) {
						bVar1 = (name == "Erwin5");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin5();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xbf5176fe) {
						bVar1 = (name == "Mikasa1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc12e1e36) {
					if (uVar2 == 0xc02e1ca2) {
						bVar1 = (name == "Erwin6");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin6();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc12e1e35) {
						bVar1 = (name == "Erwin7");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin7();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc1517a24) {
					bVar1 = (name == "Mikasa7");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa7();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc22e1fc8) {
					bVar1 = (name == "Erwin8");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin8();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc2517bb7) {
					bVar1 = (name == "Mikasa6");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa6();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdef5bc1e) {
				if (uVar2 < 0xc6980c10) {
					if (uVar2 < 0xc3517d4b) {
						if (uVar2 == 0xc32e215b) {
							bVar1 = (name == "Erwin9");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Erwin9();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xc3517d4a) {
							bVar1 = (name == "Mikasa5");
							if (bVar1) {
								if ((typeof(CustomLogicProfileIconEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa5();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xc4517edd) {
						bVar1 = (name == "Mikasa4");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mikasa4();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc6980c0f) {
						bVar1 = (name == "Reiner1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Reiner1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc6f962d0) {
					if (uVar2 == 0xc69d53e4) {
						bVar1 = (name == "EmojiCool");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiCool();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc6f962cf) {
						bVar1 = (name == "Ricecake1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ricecake1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xcf165a08) {
					bVar1 = (name == "Dakros1");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Dakros1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd8003066) {
					bVar1 = (name == "Isabel1");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Isabel1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdef5bc1d) {
					bVar1 = (name == "EmojiAnnoyed");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiAnnoyed();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xedd08ab8) {
				if (uVar2 < 0xe7be6933) {
					if (uVar2 == 0xe6be679f) {
						bVar1 = (name == "Kenny1");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Kenny1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xe7be6932) {
						bVar1 = (name == "Kenny2");
						if (bVar1) {
							pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Kenny2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xed8f7d42) {
					bVar1 = (name == "Mike1");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Mike1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xedd08ab7) {
					bVar1 = (name == "Ilse1");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Ilse1();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf6ceb60d) {
				if (uVar2 == 0xf4223650) {
					bVar1 = (name == "Gisketch1");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Gisketch1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf6ceb60c) {
					bVar1 = (name == "Hannes2");
					if (bVar1) {
						pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Hannes2();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf9cebac5) {
				bVar1 = (name == "Hannes1");
				if (bVar1) {
					pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Hannes1();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfac4be40) {
				bVar1 = (name == "EmojiShocked");
				if (bVar1) {
					pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__EmojiShocked();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfe575152) {
				bVar1 = (name == "Etika1");
				if (bVar1) {
					pCVar3 = CustomLogicProfileIconEnum.Bindings.__CreatePropertyBinding__Etika1();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProfileIconEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002EB1")]
		[Address(RVA = "0x599E3D0", Offset = "0x599D3D0", VA = "0x599E3D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Acros1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Acros1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Acros1_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB2")]
		[Address(RVA = "0x599E470", Offset = "0x599D470", VA = "0x599E470")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Annie1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie1_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB3")]
		[Address(RVA = "0x599E510", Offset = "0x599D510", VA = "0x599E510")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Annie2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie2_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB4")]
		[Address(RVA = "0x599E5B0", Offset = "0x599D5B0", VA = "0x599E5B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Annie3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie3_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB5")]
		[Address(RVA = "0x599E650", Offset = "0x599D650", VA = "0x599E650")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Annie4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie4_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB6")]
		[Address(RVA = "0x599E6F0", Offset = "0x599D6F0", VA = "0x599E6F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Annie5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Annie5_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB7")]
		[Address(RVA = "0x599E790", Offset = "0x599D790", VA = "0x599E790")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Armin1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Armin1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Armin1_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB8")]
		[Address(RVA = "0x599E830", Offset = "0x599D830", VA = "0x599E830")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Bertholdt1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Bertholdt1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Bertholdt1_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EB9")]
		[Address(RVA = "0x599E8D0", Offset = "0x599D8D0", VA = "0x599E8D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Carula1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Carula1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Carula1_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBA")]
		[Address(RVA = "0x599E970", Offset = "0x599D970", VA = "0x599E970")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Conny1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny1_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBB")]
		[Address(RVA = "0x599EA10", Offset = "0x599DA10", VA = "0x599EA10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Conny2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Conny2_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBC")]
		[Address(RVA = "0x599EAB0", Offset = "0x599DAB0", VA = "0x599EAB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Dakros1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Dakros1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Dakros1_g____getter_13);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBD")]
		[Address(RVA = "0x599EB50", Offset = "0x599DB50", VA = "0x599EB50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren1_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBE")]
		[Address(RVA = "0x599EBF0", Offset = "0x599DBF0", VA = "0x599EBF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren2_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EBF")]
		[Address(RVA = "0x599EC90", Offset = "0x599DC90", VA = "0x599EC90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren3_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC0")]
		[Address(RVA = "0x599ED30", Offset = "0x599DD30", VA = "0x599ED30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren4_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC1")]
		[Address(RVA = "0x599EDD0", Offset = "0x599DDD0", VA = "0x599EDD0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren5_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC2")]
		[Address(RVA = "0x599EE70", Offset = "0x599DE70", VA = "0x599EE70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren6_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC3")]
		[Address(RVA = "0x599EF10", Offset = "0x599DF10", VA = "0x599EF10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren7_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC4")]
		[Address(RVA = "0x599EFB0", Offset = "0x599DFB0", VA = "0x599EFB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Eren8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren8): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Eren8_g____getter_21_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC5")]
		[Address(RVA = "0x599F050", Offset = "0x599E050", VA = "0x599F050")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin1_g____getter_22_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC6")]
		[Address(RVA = "0x599F0F0", Offset = "0x599E0F0", VA = "0x599F0F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin2_g____getter_23_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC7")]
		[Address(RVA = "0x599F190", Offset = "0x599E190", VA = "0x599F190")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin3_g____getter_24_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC8")]
		[Address(RVA = "0x599F230", Offset = "0x599E230", VA = "0x599F230")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin4_g____getter_25_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EC9")]
		[Address(RVA = "0x599F2D0", Offset = "0x599E2D0", VA = "0x599F2D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin5_g____getter_26_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECA")]
		[Address(RVA = "0x599F370", Offset = "0x599E370", VA = "0x599F370")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin6_g____getter_27_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECB")]
		[Address(RVA = "0x599F410", Offset = "0x599E410", VA = "0x599F410")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin7_g____getter_28_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECC")]
		[Address(RVA = "0x599F4B0", Offset = "0x599E4B0", VA = "0x599F4B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin8): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin8_g____getter_29_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECD")]
		[Address(RVA = "0x599F550", Offset = "0x599E550", VA = "0x599F550")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin9()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin9): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin9_g____getter_30_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECE")]
		[Address(RVA = "0x599F5F0", Offset = "0x599E5F0", VA = "0x599F5F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin10()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin10): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin10_g____getter_31);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ECF")]
		[Address(RVA = "0x599F690", Offset = "0x599E690", VA = "0x599F690")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin11()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin11): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin11_g____getter_32);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED0")]
		[Address(RVA = "0x599F730", Offset = "0x599E730", VA = "0x599F730")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Erwin12()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin12): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Erwin12_g____getter_33);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED1")]
		[Address(RVA = "0x599F7D0", Offset = "0x599E7D0", VA = "0x599F7D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Etika1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Etika1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Etika1_g____getter_34_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED2")]
		[Address(RVA = "0x599F870", Offset = "0x599E870", VA = "0x599F870")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Falco1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Falco1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Falco1_g____getter_35_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED3")]
		[Address(RVA = "0x599F910", Offset = "0x599E910", VA = "0x599F910")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Fenglee1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Fenglee1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Fenglee1_g____getter_36);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED4")]
		[Address(RVA = "0x599F9B0", Offset = "0x599E9B0", VA = "0x599F9B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Founding1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Founding1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Founding1_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED5")]
		[Address(RVA = "0x599FA50", Offset = "0x599EA50", VA = "0x599FA50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Frieda1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda1_g____getter_38);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED6")]
		[Address(RVA = "0x599FAF0", Offset = "0x599EAF0", VA = "0x599FAF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Frieda2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Frieda2_g____getter_39);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED7")]
		[Address(RVA = "0x599FB90", Offset = "0x599EB90", VA = "0x599FB90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Gabi1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gabi1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gabi1_g____getter_40_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED8")]
		[Address(RVA = "0x599FC30", Offset = "0x599EC30", VA = "0x599FC30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Gisketch1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gisketch1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gisketch1_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ED9")]
		[Address(RVA = "0x599FCD0", Offset = "0x599ECD0", VA = "0x599FCD0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Gunther1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gunther1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Gunther1_g____getter_42);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDA")]
		[Address(RVA = "0x599FD70", Offset = "0x599ED70", VA = "0x599FD70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Hange1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hange1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hange1_g____getter_43_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDB")]
		[Address(RVA = "0x599FE10", Offset = "0x599EE10", VA = "0x599FE10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Hannes1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes1_g____getter_44);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDC")]
		[Address(RVA = "0x599FEB0", Offset = "0x599EEB0", VA = "0x599FEB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Hannes2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hannes2_g____getter_45);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDD")]
		[Address(RVA = "0x599FF50", Offset = "0x599EF50", VA = "0x599FF50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia1_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDE")]
		[Address(RVA = "0x599FFF0", Offset = "0x599EFF0", VA = "0x599FFF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia2_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EDF")]
		[Address(RVA = "0x59A0090", Offset = "0x599F090", VA = "0x59A0090")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia3_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE0")]
		[Address(RVA = "0x59A0130", Offset = "0x599F130", VA = "0x59A0130")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia4_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE1")]
		[Address(RVA = "0x59A01D0", Offset = "0x599F1D0", VA = "0x59A01D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia5_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE2")]
		[Address(RVA = "0x59A0270", Offset = "0x599F270", VA = "0x59A0270")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia6_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE3")]
		[Address(RVA = "0x59A0310", Offset = "0x599F310", VA = "0x59A0310")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia7_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE4")]
		[Address(RVA = "0x59A03B0", Offset = "0x599F3B0", VA = "0x59A03B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Historia8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia8): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Historia8_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE5")]
		[Address(RVA = "0x59A0450", Offset = "0x599F450", VA = "0x59A0450")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Hitch1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hitch1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Hitch1_g____getter_54_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE6")]
		[Address(RVA = "0x59A04F0", Offset = "0x599F4F0", VA = "0x59A04F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ian1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ian1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ian1_g____getter_55_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE7")]
		[Address(RVA = "0x59A0590", Offset = "0x599F590", VA = "0x59A0590")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ilse1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ilse1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ilse1_g____getter_56_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE8")]
		[Address(RVA = "0x59A0630", Offset = "0x599F630", VA = "0x59A0630")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Isabel1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Isabel1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Isabel1_g____getter_57);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EE9")]
		[Address(RVA = "0x59A06D0", Offset = "0x599F6D0", VA = "0x59A06D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Jean1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Jean1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Jean1_g____getter_58_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EEA")]
		[Address(RVA = "0x59A0770", Offset = "0x599F770", VA = "0x59A0770")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Keith1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith1_g____getter_59_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EEB")]
		[Address(RVA = "0x59A0810", Offset = "0x599F810", VA = "0x59A0810")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Keith2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith2_g____getter_60_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EEC")]
		[Address(RVA = "0x59A08B0", Offset = "0x599F8B0", VA = "0x59A08B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Keith3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Keith3_g____getter_61_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EED")]
		[Address(RVA = "0x59A0950", Offset = "0x599F950", VA = "0x59A0950")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Kenny1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny1_g____getter_62_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EEE")]
		[Address(RVA = "0x59A09F0", Offset = "0x599F9F0", VA = "0x59A09F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Kenny2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Kenny2_g____getter_63_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EEF")]
		[Address(RVA = "0x59A0A90", Offset = "0x599FA90", VA = "0x59A0A90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi1_g____getter_64_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF0")]
		[Address(RVA = "0x59A0B30", Offset = "0x599FB30", VA = "0x59A0B30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi2_g____getter_65_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF1")]
		[Address(RVA = "0x59A0BD0", Offset = "0x599FBD0", VA = "0x59A0BD0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi3_g____getter_66_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF2")]
		[Address(RVA = "0x59A0C70", Offset = "0x599FC70", VA = "0x59A0C70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi4_g____getter_67_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF3")]
		[Address(RVA = "0x59A0D10", Offset = "0x599FD10", VA = "0x59A0D10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi5_g____getter_68_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF4")]
		[Address(RVA = "0x59A0DB0", Offset = "0x599FDB0", VA = "0x59A0DB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi6_g____getter_69_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF5")]
		[Address(RVA = "0x59A0E50", Offset = "0x599FE50", VA = "0x59A0E50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi7_g____getter_70_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF6")]
		[Address(RVA = "0x59A0EF0", Offset = "0x599FEF0", VA = "0x59A0EF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi8): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi8_g____getter_71_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF7")]
		[Address(RVA = "0x59A0F90", Offset = "0x599FF90", VA = "0x59A0F90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi9()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi9): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi9_g____getter_72_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF8")]
		[Address(RVA = "0x59A1030", Offset = "0x59A0030", VA = "0x59A1030")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi10()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi10): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi10_g____getter_73_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EF9")]
		[Address(RVA = "0x59A10D0", Offset = "0x59A00D0", VA = "0x59A10D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi11()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi11): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi11_g____getter_74_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFA")]
		[Address(RVA = "0x59A1170", Offset = "0x59A0170", VA = "0x59A1170")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi12()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi12): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi12_g____getter_75_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFB")]
		[Address(RVA = "0x59A1210", Offset = "0x59A0210", VA = "0x59A1210")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi13()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi13): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi13_g____getter_76_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFC")]
		[Address(RVA = "0x59A12B0", Offset = "0x59A02B0", VA = "0x59A12B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi14()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi14): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi14_g____getter_77_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFD")]
		[Address(RVA = "0x59A1350", Offset = "0x59A0350", VA = "0x59A1350")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi15()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi15): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi15_g____getter_78_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFE")]
		[Address(RVA = "0x59A13F0", Offset = "0x59A03F0", VA = "0x59A13F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi16()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi16): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi16_g____getter_79_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002EFF")]
		[Address(RVA = "0x59A1490", Offset = "0x59A0490", VA = "0x59A1490")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Levi17()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi17): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Levi17_g____getter_80_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F00")]
		[Address(RVA = "0x59A1530", Offset = "0x59A0530", VA = "0x59A1530")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa1_g____getter_81);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F01")]
		[Address(RVA = "0x59A15D0", Offset = "0x59A05D0", VA = "0x59A15D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa2_g____getter_82);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F02")]
		[Address(RVA = "0x59A1670", Offset = "0x59A0670", VA = "0x59A1670")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa3_g____getter_83);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F03")]
		[Address(RVA = "0x59A1710", Offset = "0x59A0710", VA = "0x59A1710")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa4_g____getter_84);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F04")]
		[Address(RVA = "0x59A17B0", Offset = "0x59A07B0", VA = "0x59A17B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa5_g____getter_85);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F05")]
		[Address(RVA = "0x59A1850", Offset = "0x59A0850", VA = "0x59A1850")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa6_g____getter_86);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F06")]
		[Address(RVA = "0x59A18F0", Offset = "0x59A08F0", VA = "0x59A18F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mikasa7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mikasa7_g____getter_87);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F07")]
		[Address(RVA = "0x59A1990", Offset = "0x59A0990", VA = "0x59A1990")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Mike1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mike1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Mike1_g____getter_88_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F08")]
		[Address(RVA = "0x59A1A30", Offset = "0x59A0A30", VA = "0x59A1A30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Nanaba1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nanaba1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nanaba1_g____getter_89);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F09")]
		[Address(RVA = "0x59A1AD0", Offset = "0x59A0AD0", VA = "0x59A1AD0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Nick1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nick1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Nick1_g____getter_90_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0A")]
		[Address(RVA = "0x59A1B70", Offset = "0x59A0B70", VA = "0x59A1B70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Petra1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra1_g____getter_91_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0B")]
		[Address(RVA = "0x59A1C10", Offset = "0x59A0C10", VA = "0x59A1C10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Petra2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Petra2_g____getter_92_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0C")]
		[Address(RVA = "0x59A1CB0", Offset = "0x59A0CB0", VA = "0x59A1CB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Pieck1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck1_g____getter_93_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0D")]
		[Address(RVA = "0x59A1D50", Offset = "0x59A0D50", VA = "0x59A1D50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Pieck2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pieck2_g____getter_94_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0E")]
		[Address(RVA = "0x59A1DF0", Offset = "0x59A0DF0", VA = "0x59A1DF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Pixis1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pixis1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Pixis1_g____getter_95_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F0F")]
		[Address(RVA = "0x59A1E90", Offset = "0x59A0E90", VA = "0x59A1E90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Reiner1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Reiner1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Reiner1_g____getter_96);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F10")]
		[Address(RVA = "0x59A1F30", Offset = "0x59A0F30", VA = "0x59A1F30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Revolution1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Revolution1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Revolution1_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F11")]
		[Address(RVA = "0x59A1FD0", Offset = "0x59A0FD0", VA = "0x59A1FD0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Rico1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico1_g____getter_98_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F12")]
		[Address(RVA = "0x59A2070", Offset = "0x59A1070", VA = "0x59A2070")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Rico2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Rico2_g____getter_99_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F13")]
		[Address(RVA = "0x59A2110", Offset = "0x59A1110", VA = "0x59A2110")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ricecake1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ricecake1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ricecake1_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F14")]
		[Address(RVA = "0x59A21B0", Offset = "0x59A11B0", VA = "0x59A21B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Sasha1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha1_g____getter_101);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F15")]
		[Address(RVA = "0x59A2250", Offset = "0x59A1250", VA = "0x59A2250")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Sasha2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha2_g____getter_102);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F16")]
		[Address(RVA = "0x59A22F0", Offset = "0x59A12F0", VA = "0x59A22F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Sasha3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha3_g____getter_103);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F17")]
		[Address(RVA = "0x59A2390", Offset = "0x59A1390", VA = "0x59A2390")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Sasha4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Sasha4_g____getter_104);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F18")]
		[Address(RVA = "0x59A2430", Offset = "0x59A1430", VA = "0x59A2430")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Uri1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Uri1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Uri1_g____getter_105_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F19")]
		[Address(RVA = "0x59A24D0", Offset = "0x59A14D0", VA = "0x59A24D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Yelena1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena1_g____getter_106);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1A")]
		[Address(RVA = "0x59A2570", Offset = "0x59A1570", VA = "0x59A2570")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Yelena2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena2_g____getter_107);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1B")]
		[Address(RVA = "0x59A2610", Offset = "0x59A1610", VA = "0x59A2610")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Yelena3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Yelena3_g____getter_108);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1C")]
		[Address(RVA = "0x59A26B0", Offset = "0x59A16B0", VA = "0x59A26B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ymir1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir1_g____getter_109_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1D")]
		[Address(RVA = "0x59A2750", Offset = "0x59A1750", VA = "0x59A2750")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ymir2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir2_g____getter_110_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1E")]
		[Address(RVA = "0x59A27F0", Offset = "0x59A17F0", VA = "0x59A27F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Ymir104()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir104): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Ymir104_g____getter_111);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F1F")]
		[Address(RVA = "0x59A2890", Offset = "0x59A1890", VA = "0x59A2890")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Zeke1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke1_g____getter_112_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F20")]
		[Address(RVA = "0x59A2930", Offset = "0x59A1930", VA = "0x59A2930")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Zeke2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Zeke2_g____getter_113_0);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F21")]
		[Address(RVA = "0x59A29D0", Offset = "0x59A19D0", VA = "0x59A29D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan1): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan1_g____getter_114);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F22")]
		[Address(RVA = "0x59A2A70", Offset = "0x59A1A70", VA = "0x59A2A70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan2): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan2_g____getter_115);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F23")]
		[Address(RVA = "0x59A2B10", Offset = "0x59A1B10", VA = "0x59A2B10")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan3): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan3_g____getter_116);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F24")]
		[Address(RVA = "0x59A2BB0", Offset = "0x59A1BB0", VA = "0x59A2BB0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan4): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan4_g____getter_117);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F25")]
		[Address(RVA = "0x59A2C50", Offset = "0x59A1C50", VA = "0x59A2C50")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan5): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan5_g____getter_118);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F26")]
		[Address(RVA = "0x59A2CF0", Offset = "0x59A1CF0", VA = "0x59A2CF0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan6): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan6_g____getter_119);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F27")]
		[Address(RVA = "0x59A2D90", Offset = "0x59A1D90", VA = "0x59A2D90")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan7): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan7_g____getter_120);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F28")]
		[Address(RVA = "0x59A2E30", Offset = "0x59A1E30", VA = "0x59A2E30")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan8): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan8_g____getter_121);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F29")]
		[Address(RVA = "0x59A2ED0", Offset = "0x59A1ED0", VA = "0x59A2ED0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan9()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan9): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan9_g____getter_122);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2A")]
		[Address(RVA = "0x59A2F70", Offset = "0x59A1F70", VA = "0x59A2F70")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan10()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan10): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan10_g____getter_123);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2B")]
		[Address(RVA = "0x59A3010", Offset = "0x59A2010", VA = "0x59A3010")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan11()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan11): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan11_g____getter_124);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2C")]
		[Address(RVA = "0x59A30B0", Offset = "0x59A20B0", VA = "0x59A30B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan12()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan12): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan12_g____getter_125);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2D")]
		[Address(RVA = "0x59A3150", Offset = "0x59A2150", VA = "0x59A3150")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan13()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan13): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan13_g____getter_126);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2E")]
		[Address(RVA = "0x59A31F0", Offset = "0x59A21F0", VA = "0x59A31F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan14()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan14): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan14_g____getter_127);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F2F")]
		[Address(RVA = "0x59A3290", Offset = "0x59A2290", VA = "0x59A3290")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan15()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan15): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan15_g____getter_128);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F30")]
		[Address(RVA = "0x59A3330", Offset = "0x59A2330", VA = "0x59A3330")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan16()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan16): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan16_g____getter_129);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F31")]
		[Address(RVA = "0x59A33D0", Offset = "0x59A23D0", VA = "0x59A33D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__Titan17()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan17): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__Titan17_g____getter_130);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F32")]
		[Address(RVA = "0x59A3470", Offset = "0x59A2470", VA = "0x59A3470")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiAngry()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAngry): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAngry_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F33")]
		[Address(RVA = "0x59A3510", Offset = "0x59A2510", VA = "0x59A3510")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiAnnoyed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAnnoyed): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiAnnoyed_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F34")]
		[Address(RVA = "0x59A35B0", Offset = "0x59A25B0", VA = "0x59A35B0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiCool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCool): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCool_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F35")]
		[Address(RVA = "0x59A3650", Offset = "0x59A2650", VA = "0x59A3650")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiCrying()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCrying): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiCrying_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F36")]
		[Address(RVA = "0x59A36F0", Offset = "0x59A26F0", VA = "0x59A36F0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiLove()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiLove): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiLove_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F37")]
		[Address(RVA = "0x59A3790", Offset = "0x59A2790", VA = "0x59A3790")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiShocked()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiShocked): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiShocked_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F38")]
		[Address(RVA = "0x59A3830", Offset = "0x59A2830", VA = "0x59A3830")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiSmile()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiSmile): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiSmile_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002F39")]
		[Address(RVA = "0x59A38D0", Offset = "0x59A28D0", VA = "0x59A38D0")]
		public static CLPropertyBinding<CustomLogicProfileIconEnum> __CreatePropertyBinding__EmojiThumbsUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiThumbsUp): 2 lines keep C-only constructs
			Func<CustomLogicProfileIconEnum, object> __this;
			CLPropertyBinding<CustomLogicProfileIconEnum> __this_00;

			__this = new Func<CustomLogicProfileIconEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProfileIconEnum_Bindings___CreatePropertyBinding__EmojiThumbsUp_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicProfileIconEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000780")]
	public static string Acros1
	{
		[Token(Token = "0x6002E22")]
		[Address(RVA = "0x59996C0", Offset = "0x59986C0", VA = "0x59996C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Acros1): clean
			return "Acros1";
		}
	}

	[Token(Token = "0x17000781")]
	public static string Annie1
	{
		[Token(Token = "0x6002E23")]
		[Address(RVA = "0x59996F0", Offset = "0x59986F0", VA = "0x59996F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Annie1): clean
			return "Annie1";
		}
	}

	[Token(Token = "0x17000782")]
	public static string Annie2
	{
		[Token(Token = "0x6002E24")]
		[Address(RVA = "0x5999720", Offset = "0x5998720", VA = "0x5999720")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Annie2): clean
			return "Annie2";
		}
	}

	[Token(Token = "0x17000783")]
	public static string Annie3
	{
		[Token(Token = "0x6002E25")]
		[Address(RVA = "0x5999750", Offset = "0x5998750", VA = "0x5999750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Annie3): clean
			return "Annie3";
		}
	}

	[Token(Token = "0x17000784")]
	public static string Annie4
	{
		[Token(Token = "0x6002E26")]
		[Address(RVA = "0x5999780", Offset = "0x5998780", VA = "0x5999780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Annie4): clean
			return "Annie4";
		}
	}

	[Token(Token = "0x17000785")]
	public static string Annie5
	{
		[Token(Token = "0x6002E27")]
		[Address(RVA = "0x59997B0", Offset = "0x59987B0", VA = "0x59997B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Annie5): clean
			return "Annie5";
		}
	}

	[Token(Token = "0x17000786")]
	public static string Armin1
	{
		[Token(Token = "0x6002E28")]
		[Address(RVA = "0x59997E0", Offset = "0x59987E0", VA = "0x59997E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Armin1): clean
			return "Armin1";
		}
	}

	[Token(Token = "0x17000787")]
	public static string Bertholdt1
	{
		[Token(Token = "0x6002E29")]
		[Address(RVA = "0x5999810", Offset = "0x5998810", VA = "0x5999810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Bertholdt1): clean
			return "Bertholdt1";
		}
	}

	[Token(Token = "0x17000788")]
	public static string Carula1
	{
		[Token(Token = "0x6002E2A")]
		[Address(RVA = "0x5999840", Offset = "0x5998840", VA = "0x5999840")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Carula1): clean
			return "Carula1";
		}
	}

	[Token(Token = "0x17000789")]
	public static string Conny1
	{
		[Token(Token = "0x6002E2B")]
		[Address(RVA = "0x5999870", Offset = "0x5998870", VA = "0x5999870")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Conny1): clean
			return "Conny1";
		}
	}

	[Token(Token = "0x1700078A")]
	public static string Conny2
	{
		[Token(Token = "0x6002E2C")]
		[Address(RVA = "0x59998A0", Offset = "0x59988A0", VA = "0x59998A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Conny2): clean
			return "Conny2";
		}
	}

	[Token(Token = "0x1700078B")]
	public static string Dakros1
	{
		[Token(Token = "0x6002E2D")]
		[Address(RVA = "0x59998D0", Offset = "0x59988D0", VA = "0x59998D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Dakros1): clean
			return "Dakros1";
		}
	}

	[Token(Token = "0x1700078C")]
	public static string Eren1
	{
		[Token(Token = "0x6002E2E")]
		[Address(RVA = "0x5999900", Offset = "0x5998900", VA = "0x5999900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren1): clean
			return "Eren1";
		}
	}

	[Token(Token = "0x1700078D")]
	public static string Eren2
	{
		[Token(Token = "0x6002E2F")]
		[Address(RVA = "0x5999930", Offset = "0x5998930", VA = "0x5999930")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren2): clean
			return "Eren2";
		}
	}

	[Token(Token = "0x1700078E")]
	public static string Eren3
	{
		[Token(Token = "0x6002E30")]
		[Address(RVA = "0x5999960", Offset = "0x5998960", VA = "0x5999960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren3): clean
			return "Eren3";
		}
	}

	[Token(Token = "0x1700078F")]
	public static string Eren4
	{
		[Token(Token = "0x6002E31")]
		[Address(RVA = "0x5999990", Offset = "0x5998990", VA = "0x5999990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren4): clean
			return "Eren4";
		}
	}

	[Token(Token = "0x17000790")]
	public static string Eren5
	{
		[Token(Token = "0x6002E32")]
		[Address(RVA = "0x59999C0", Offset = "0x59989C0", VA = "0x59999C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren5): clean
			return "Eren5";
		}
	}

	[Token(Token = "0x17000791")]
	public static string Eren6
	{
		[Token(Token = "0x6002E33")]
		[Address(RVA = "0x59999F0", Offset = "0x59989F0", VA = "0x59999F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren6): clean
			return "Eren6";
		}
	}

	[Token(Token = "0x17000792")]
	public static string Eren7
	{
		[Token(Token = "0x6002E34")]
		[Address(RVA = "0x5999A20", Offset = "0x5998A20", VA = "0x5999A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren7): clean
			return "Eren7";
		}
	}

	[Token(Token = "0x17000793")]
	public static string Eren8
	{
		[Token(Token = "0x6002E35")]
		[Address(RVA = "0x5999A50", Offset = "0x5998A50", VA = "0x5999A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Eren8): clean
			return "Eren8";
		}
	}

	[Token(Token = "0x17000794")]
	public static string Erwin1
	{
		[Token(Token = "0x6002E36")]
		[Address(RVA = "0x5999A80", Offset = "0x5998A80", VA = "0x5999A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin1): clean
			return "Erwin1";
		}
	}

	[Token(Token = "0x17000795")]
	public static string Erwin2
	{
		[Token(Token = "0x6002E37")]
		[Address(RVA = "0x5999AB0", Offset = "0x5998AB0", VA = "0x5999AB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin2): clean
			return "Erwin2";
		}
	}

	[Token(Token = "0x17000796")]
	public static string Erwin3
	{
		[Token(Token = "0x6002E38")]
		[Address(RVA = "0x5999AE0", Offset = "0x5998AE0", VA = "0x5999AE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin3): clean
			return "Erwin3";
		}
	}

	[Token(Token = "0x17000797")]
	public static string Erwin4
	{
		[Token(Token = "0x6002E39")]
		[Address(RVA = "0x5999B10", Offset = "0x5998B10", VA = "0x5999B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin4): clean
			return "Erwin4";
		}
	}

	[Token(Token = "0x17000798")]
	public static string Erwin5
	{
		[Token(Token = "0x6002E3A")]
		[Address(RVA = "0x5999B40", Offset = "0x5998B40", VA = "0x5999B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin5): clean
			return "Erwin5";
		}
	}

	[Token(Token = "0x17000799")]
	public static string Erwin6
	{
		[Token(Token = "0x6002E3B")]
		[Address(RVA = "0x5999B70", Offset = "0x5998B70", VA = "0x5999B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin6): clean
			return "Erwin6";
		}
	}

	[Token(Token = "0x1700079A")]
	public static string Erwin7
	{
		[Token(Token = "0x6002E3C")]
		[Address(RVA = "0x5999BA0", Offset = "0x5998BA0", VA = "0x5999BA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin7): clean
			return "Erwin7";
		}
	}

	[Token(Token = "0x1700079B")]
	public static string Erwin8
	{
		[Token(Token = "0x6002E3D")]
		[Address(RVA = "0x5999BD0", Offset = "0x5998BD0", VA = "0x5999BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin8): clean
			return "Erwin8";
		}
	}

	[Token(Token = "0x1700079C")]
	public static string Erwin9
	{
		[Token(Token = "0x6002E3E")]
		[Address(RVA = "0x5999C00", Offset = "0x5998C00", VA = "0x5999C00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin9): clean
			return "Erwin9";
		}
	}

	[Token(Token = "0x1700079D")]
	public static string Erwin10
	{
		[Token(Token = "0x6002E3F")]
		[Address(RVA = "0x5999C30", Offset = "0x5998C30", VA = "0x5999C30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin10): clean
			return "Erwin10";
		}
	}

	[Token(Token = "0x1700079E")]
	public static string Erwin11
	{
		[Token(Token = "0x6002E40")]
		[Address(RVA = "0x5999C60", Offset = "0x5998C60", VA = "0x5999C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin11): clean
			return "Erwin11";
		}
	}

	[Token(Token = "0x1700079F")]
	public static string Erwin12
	{
		[Token(Token = "0x6002E41")]
		[Address(RVA = "0x5999C90", Offset = "0x5998C90", VA = "0x5999C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Erwin12): clean
			return "Erwin12";
		}
	}

	[Token(Token = "0x170007A0")]
	public static string Etika1
	{
		[Token(Token = "0x6002E42")]
		[Address(RVA = "0x5999CC0", Offset = "0x5998CC0", VA = "0x5999CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Etika1): clean
			return "Etika1";
		}
	}

	[Token(Token = "0x170007A1")]
	public static string Falco1
	{
		[Token(Token = "0x6002E43")]
		[Address(RVA = "0x5999CF0", Offset = "0x5998CF0", VA = "0x5999CF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Falco1): clean
			return "Falco1";
		}
	}

	[Token(Token = "0x170007A2")]
	public static string Fenglee1
	{
		[Token(Token = "0x6002E44")]
		[Address(RVA = "0x5999D20", Offset = "0x5998D20", VA = "0x5999D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Fenglee1): clean
			return "Fenglee1";
		}
	}

	[Token(Token = "0x170007A3")]
	public static string Founding1
	{
		[Token(Token = "0x6002E45")]
		[Address(RVA = "0x5999D50", Offset = "0x5998D50", VA = "0x5999D50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Founding1): clean
			return "Founding1";
		}
	}

	[Token(Token = "0x170007A4")]
	public static string Frieda1
	{
		[Token(Token = "0x6002E46")]
		[Address(RVA = "0x5999D80", Offset = "0x5998D80", VA = "0x5999D80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Frieda1): clean
			return "Frieda1";
		}
	}

	[Token(Token = "0x170007A5")]
	public static string Frieda2
	{
		[Token(Token = "0x6002E47")]
		[Address(RVA = "0x5999DB0", Offset = "0x5998DB0", VA = "0x5999DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Frieda2): clean
			return "Frieda2";
		}
	}

	[Token(Token = "0x170007A6")]
	public static string Gabi1
	{
		[Token(Token = "0x6002E48")]
		[Address(RVA = "0x5999DE0", Offset = "0x5998DE0", VA = "0x5999DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Gabi1): clean
			return "Gabi1";
		}
	}

	[Token(Token = "0x170007A7")]
	public static string Gisketch1
	{
		[Token(Token = "0x6002E49")]
		[Address(RVA = "0x5999E10", Offset = "0x5998E10", VA = "0x5999E10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Gisketch1): clean
			return "Gisketch1";
		}
	}

	[Token(Token = "0x170007A8")]
	public static string Gunther1
	{
		[Token(Token = "0x6002E4A")]
		[Address(RVA = "0x5999E40", Offset = "0x5998E40", VA = "0x5999E40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Gunther1): clean
			return "Gunther1";
		}
	}

	[Token(Token = "0x170007A9")]
	public static string Hange1
	{
		[Token(Token = "0x6002E4B")]
		[Address(RVA = "0x5999E70", Offset = "0x5998E70", VA = "0x5999E70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Hange1): clean
			return "Hange1";
		}
	}

	[Token(Token = "0x170007AA")]
	public static string Hannes1
	{
		[Token(Token = "0x6002E4C")]
		[Address(RVA = "0x5999EA0", Offset = "0x5998EA0", VA = "0x5999EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Hannes1): clean
			return "Hannes1";
		}
	}

	[Token(Token = "0x170007AB")]
	public static string Hannes2
	{
		[Token(Token = "0x6002E4D")]
		[Address(RVA = "0x5999ED0", Offset = "0x5998ED0", VA = "0x5999ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Hannes2): clean
			return "Hannes2";
		}
	}

	[Token(Token = "0x170007AC")]
	public static string Historia1
	{
		[Token(Token = "0x6002E4E")]
		[Address(RVA = "0x5999F00", Offset = "0x5998F00", VA = "0x5999F00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia1): clean
			return "Historia1";
		}
	}

	[Token(Token = "0x170007AD")]
	public static string Historia2
	{
		[Token(Token = "0x6002E4F")]
		[Address(RVA = "0x5999F30", Offset = "0x5998F30", VA = "0x5999F30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia2): clean
			return "Historia2";
		}
	}

	[Token(Token = "0x170007AE")]
	public static string Historia3
	{
		[Token(Token = "0x6002E50")]
		[Address(RVA = "0x5999F60", Offset = "0x5998F60", VA = "0x5999F60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia3): clean
			return "Historia3";
		}
	}

	[Token(Token = "0x170007AF")]
	public static string Historia4
	{
		[Token(Token = "0x6002E51")]
		[Address(RVA = "0x5999F90", Offset = "0x5998F90", VA = "0x5999F90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia4): clean
			return "Historia4";
		}
	}

	[Token(Token = "0x170007B0")]
	public static string Historia5
	{
		[Token(Token = "0x6002E52")]
		[Address(RVA = "0x5999FC0", Offset = "0x5998FC0", VA = "0x5999FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia5): clean
			return "Historia5";
		}
	}

	[Token(Token = "0x170007B1")]
	public static string Historia6
	{
		[Token(Token = "0x6002E53")]
		[Address(RVA = "0x5999FF0", Offset = "0x5998FF0", VA = "0x5999FF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia6): clean
			return "Historia6";
		}
	}

	[Token(Token = "0x170007B2")]
	public static string Historia7
	{
		[Token(Token = "0x6002E54")]
		[Address(RVA = "0x599A020", Offset = "0x5999020", VA = "0x599A020")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia7): clean
			return "Historia7";
		}
	}

	[Token(Token = "0x170007B3")]
	public static string Historia8
	{
		[Token(Token = "0x6002E55")]
		[Address(RVA = "0x599A050", Offset = "0x5999050", VA = "0x599A050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Historia8): clean
			return "Historia8";
		}
	}

	[Token(Token = "0x170007B4")]
	public static string Hitch1
	{
		[Token(Token = "0x6002E56")]
		[Address(RVA = "0x599A080", Offset = "0x5999080", VA = "0x599A080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Hitch1): clean
			return "Hitch1";
		}
	}

	[Token(Token = "0x170007B5")]
	public static string Ian1
	{
		[Token(Token = "0x6002E57")]
		[Address(RVA = "0x599A0B0", Offset = "0x59990B0", VA = "0x599A0B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ian1): clean
			return "Ian1";
		}
	}

	[Token(Token = "0x170007B6")]
	public static string Ilse1
	{
		[Token(Token = "0x6002E58")]
		[Address(RVA = "0x599A0E0", Offset = "0x59990E0", VA = "0x599A0E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ilse1): clean
			return "Ilse1";
		}
	}

	[Token(Token = "0x170007B7")]
	public static string Isabel1
	{
		[Token(Token = "0x6002E59")]
		[Address(RVA = "0x599A110", Offset = "0x5999110", VA = "0x599A110")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Isabel1): clean
			return "Isabel1";
		}
	}

	[Token(Token = "0x170007B8")]
	public static string Jean1
	{
		[Token(Token = "0x6002E5A")]
		[Address(RVA = "0x599A140", Offset = "0x5999140", VA = "0x599A140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Jean1): clean
			return "Jean1";
		}
	}

	[Token(Token = "0x170007B9")]
	public static string Keith1
	{
		[Token(Token = "0x6002E5B")]
		[Address(RVA = "0x599A170", Offset = "0x5999170", VA = "0x599A170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Keith1): clean
			return "Keith1";
		}
	}

	[Token(Token = "0x170007BA")]
	public static string Keith2
	{
		[Token(Token = "0x6002E5C")]
		[Address(RVA = "0x599A1A0", Offset = "0x59991A0", VA = "0x599A1A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Keith2): clean
			return "Keith2";
		}
	}

	[Token(Token = "0x170007BB")]
	public static string Keith3
	{
		[Token(Token = "0x6002E5D")]
		[Address(RVA = "0x599A1D0", Offset = "0x59991D0", VA = "0x599A1D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Keith3): clean
			return "Keith3";
		}
	}

	[Token(Token = "0x170007BC")]
	public static string Kenny1
	{
		[Token(Token = "0x6002E5E")]
		[Address(RVA = "0x599A200", Offset = "0x5999200", VA = "0x599A200")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Kenny1): clean
			return "Kenny1";
		}
	}

	[Token(Token = "0x170007BD")]
	public static string Kenny2
	{
		[Token(Token = "0x6002E5F")]
		[Address(RVA = "0x599A230", Offset = "0x5999230", VA = "0x599A230")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Kenny2): clean
			return "Kenny2";
		}
	}

	[Token(Token = "0x170007BE")]
	public static string Levi1
	{
		[Token(Token = "0x6002E60")]
		[Address(RVA = "0x599A260", Offset = "0x5999260", VA = "0x599A260")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi1): clean
			return "Levi1";
		}
	}

	[Token(Token = "0x170007BF")]
	public static string Levi2
	{
		[Token(Token = "0x6002E61")]
		[Address(RVA = "0x599A290", Offset = "0x5999290", VA = "0x599A290")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi2): clean
			return "Levi2";
		}
	}

	[Token(Token = "0x170007C0")]
	public static string Levi3
	{
		[Token(Token = "0x6002E62")]
		[Address(RVA = "0x599A2C0", Offset = "0x59992C0", VA = "0x599A2C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi3): clean
			return "Levi3";
		}
	}

	[Token(Token = "0x170007C1")]
	public static string Levi4
	{
		[Token(Token = "0x6002E63")]
		[Address(RVA = "0x599A2F0", Offset = "0x59992F0", VA = "0x599A2F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi4): clean
			return "Levi4";
		}
	}

	[Token(Token = "0x170007C2")]
	public static string Levi5
	{
		[Token(Token = "0x6002E64")]
		[Address(RVA = "0x599A320", Offset = "0x5999320", VA = "0x599A320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi5): clean
			return "Levi5";
		}
	}

	[Token(Token = "0x170007C3")]
	public static string Levi6
	{
		[Token(Token = "0x6002E65")]
		[Address(RVA = "0x599A350", Offset = "0x5999350", VA = "0x599A350")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi6): clean
			return "Levi6";
		}
	}

	[Token(Token = "0x170007C4")]
	public static string Levi7
	{
		[Token(Token = "0x6002E66")]
		[Address(RVA = "0x599A380", Offset = "0x5999380", VA = "0x599A380")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi7): clean
			return "Levi7";
		}
	}

	[Token(Token = "0x170007C5")]
	public static string Levi8
	{
		[Token(Token = "0x6002E67")]
		[Address(RVA = "0x599A3B0", Offset = "0x59993B0", VA = "0x599A3B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi8): clean
			return "Levi8";
		}
	}

	[Token(Token = "0x170007C6")]
	public static string Levi9
	{
		[Token(Token = "0x6002E68")]
		[Address(RVA = "0x599A3E0", Offset = "0x59993E0", VA = "0x599A3E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi9): clean
			return "Levi9";
		}
	}

	[Token(Token = "0x170007C7")]
	public static string Levi10
	{
		[Token(Token = "0x6002E69")]
		[Address(RVA = "0x599A410", Offset = "0x5999410", VA = "0x599A410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi10): clean
			return "Levi10";
		}
	}

	[Token(Token = "0x170007C8")]
	public static string Levi11
	{
		[Token(Token = "0x6002E6A")]
		[Address(RVA = "0x599A440", Offset = "0x5999440", VA = "0x599A440")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi11): clean
			return "Levi11";
		}
	}

	[Token(Token = "0x170007C9")]
	public static string Levi12
	{
		[Token(Token = "0x6002E6B")]
		[Address(RVA = "0x599A470", Offset = "0x5999470", VA = "0x599A470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi12): clean
			return "Levi12";
		}
	}

	[Token(Token = "0x170007CA")]
	public static string Levi13
	{
		[Token(Token = "0x6002E6C")]
		[Address(RVA = "0x599A4A0", Offset = "0x59994A0", VA = "0x599A4A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi13): clean
			return "Levi13";
		}
	}

	[Token(Token = "0x170007CB")]
	public static string Levi14
	{
		[Token(Token = "0x6002E6D")]
		[Address(RVA = "0x599A4D0", Offset = "0x59994D0", VA = "0x599A4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi14): clean
			return "Levi14";
		}
	}

	[Token(Token = "0x170007CC")]
	public static string Levi15
	{
		[Token(Token = "0x6002E6E")]
		[Address(RVA = "0x599A500", Offset = "0x5999500", VA = "0x599A500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi15): clean
			return "Levi15";
		}
	}

	[Token(Token = "0x170007CD")]
	public static string Levi16
	{
		[Token(Token = "0x6002E6F")]
		[Address(RVA = "0x599A530", Offset = "0x5999530", VA = "0x599A530")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi16): clean
			return "Levi16";
		}
	}

	[Token(Token = "0x170007CE")]
	public static string Levi17
	{
		[Token(Token = "0x6002E70")]
		[Address(RVA = "0x599A560", Offset = "0x5999560", VA = "0x599A560")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Levi17): clean
			return "Levi17";
		}
	}

	[Token(Token = "0x170007CF")]
	public static string Mikasa1
	{
		[Token(Token = "0x6002E71")]
		[Address(RVA = "0x599A590", Offset = "0x5999590", VA = "0x599A590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa1): clean
			return "Mikasa1";
		}
	}

	[Token(Token = "0x170007D0")]
	public static string Mikasa2
	{
		[Token(Token = "0x6002E72")]
		[Address(RVA = "0x599A5C0", Offset = "0x59995C0", VA = "0x599A5C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa2): clean
			return "Mikasa2";
		}
	}

	[Token(Token = "0x170007D1")]
	public static string Mikasa3
	{
		[Token(Token = "0x6002E73")]
		[Address(RVA = "0x599A5F0", Offset = "0x59995F0", VA = "0x599A5F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa3): clean
			return "Mikasa3";
		}
	}

	[Token(Token = "0x170007D2")]
	public static string Mikasa4
	{
		[Token(Token = "0x6002E74")]
		[Address(RVA = "0x599A620", Offset = "0x5999620", VA = "0x599A620")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa4): clean
			return "Mikasa4";
		}
	}

	[Token(Token = "0x170007D3")]
	public static string Mikasa5
	{
		[Token(Token = "0x6002E75")]
		[Address(RVA = "0x599A650", Offset = "0x5999650", VA = "0x599A650")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa5): clean
			return "Mikasa5";
		}
	}

	[Token(Token = "0x170007D4")]
	public static string Mikasa6
	{
		[Token(Token = "0x6002E76")]
		[Address(RVA = "0x599A680", Offset = "0x5999680", VA = "0x599A680")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa6): clean
			return "Mikasa6";
		}
	}

	[Token(Token = "0x170007D5")]
	public static string Mikasa7
	{
		[Token(Token = "0x6002E77")]
		[Address(RVA = "0x599A6B0", Offset = "0x59996B0", VA = "0x599A6B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa7): clean
			return "Mikasa7";
		}
	}

	[Token(Token = "0x170007D6")]
	public static string Mike1
	{
		[Token(Token = "0x6002E78")]
		[Address(RVA = "0x599A6E0", Offset = "0x59996E0", VA = "0x599A6E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Mike1): clean
			return "Mike1";
		}
	}

	[Token(Token = "0x170007D7")]
	public static string Nanaba1
	{
		[Token(Token = "0x6002E79")]
		[Address(RVA = "0x599A710", Offset = "0x5999710", VA = "0x599A710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Nanaba1): clean
			return "Nanaba1";
		}
	}

	[Token(Token = "0x170007D8")]
	public static string Nick1
	{
		[Token(Token = "0x6002E7A")]
		[Address(RVA = "0x599A740", Offset = "0x5999740", VA = "0x599A740")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Nick1): clean
			return "Nick1";
		}
	}

	[Token(Token = "0x170007D9")]
	public static string Petra1
	{
		[Token(Token = "0x6002E7B")]
		[Address(RVA = "0x599A770", Offset = "0x5999770", VA = "0x599A770")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Petra1): clean
			return "Petra1";
		}
	}

	[Token(Token = "0x170007DA")]
	public static string Petra2
	{
		[Token(Token = "0x6002E7C")]
		[Address(RVA = "0x599A7A0", Offset = "0x59997A0", VA = "0x599A7A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Petra2): clean
			return "Petra2";
		}
	}

	[Token(Token = "0x170007DB")]
	public static string Pieck1
	{
		[Token(Token = "0x6002E7D")]
		[Address(RVA = "0x599A7D0", Offset = "0x59997D0", VA = "0x599A7D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Pieck1): clean
			return "Pieck1";
		}
	}

	[Token(Token = "0x170007DC")]
	public static string Pieck2
	{
		[Token(Token = "0x6002E7E")]
		[Address(RVA = "0x599A800", Offset = "0x5999800", VA = "0x599A800")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Pieck2): clean
			return "Pieck2";
		}
	}

	[Token(Token = "0x170007DD")]
	public static string Pixis1
	{
		[Token(Token = "0x6002E7F")]
		[Address(RVA = "0x599A830", Offset = "0x5999830", VA = "0x599A830")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Pixis1): clean
			return "Pixis1";
		}
	}

	[Token(Token = "0x170007DE")]
	public static string Reiner1
	{
		[Token(Token = "0x6002E80")]
		[Address(RVA = "0x599A860", Offset = "0x5999860", VA = "0x599A860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Reiner1): clean
			return "Reiner1";
		}
	}

	[Token(Token = "0x170007DF")]
	public static string Revolution1
	{
		[Token(Token = "0x6002E81")]
		[Address(RVA = "0x599A890", Offset = "0x5999890", VA = "0x599A890")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Revolution1): clean
			return "Revolution1";
		}
	}

	[Token(Token = "0x170007E0")]
	public static string Rico1
	{
		[Token(Token = "0x6002E82")]
		[Address(RVA = "0x599A8C0", Offset = "0x59998C0", VA = "0x599A8C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Rico1): clean
			return "Rico1";
		}
	}

	[Token(Token = "0x170007E1")]
	public static string Rico2
	{
		[Token(Token = "0x6002E83")]
		[Address(RVA = "0x599A8F0", Offset = "0x59998F0", VA = "0x599A8F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Rico2): clean
			return "Rico2";
		}
	}

	[Token(Token = "0x170007E2")]
	public static string Ricecake1
	{
		[Token(Token = "0x6002E84")]
		[Address(RVA = "0x599A920", Offset = "0x5999920", VA = "0x599A920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ricecake1): clean
			return "Ricecake1";
		}
	}

	[Token(Token = "0x170007E3")]
	public static string Sasha1
	{
		[Token(Token = "0x6002E85")]
		[Address(RVA = "0x599A950", Offset = "0x5999950", VA = "0x599A950")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Sasha1): clean
			return "Sasha1";
		}
	}

	[Token(Token = "0x170007E4")]
	public static string Sasha2
	{
		[Token(Token = "0x6002E86")]
		[Address(RVA = "0x599A980", Offset = "0x5999980", VA = "0x599A980")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Sasha2): clean
			return "Sasha2";
		}
	}

	[Token(Token = "0x170007E5")]
	public static string Sasha3
	{
		[Token(Token = "0x6002E87")]
		[Address(RVA = "0x599A9B0", Offset = "0x59999B0", VA = "0x599A9B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Sasha3): clean
			return "Sasha3";
		}
	}

	[Token(Token = "0x170007E6")]
	public static string Sasha4
	{
		[Token(Token = "0x6002E88")]
		[Address(RVA = "0x599A9E0", Offset = "0x59999E0", VA = "0x599A9E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Sasha4): clean
			return "Sasha4";
		}
	}

	[Token(Token = "0x170007E7")]
	public static string Uri1
	{
		[Token(Token = "0x6002E89")]
		[Address(RVA = "0x599AA10", Offset = "0x5999A10", VA = "0x599AA10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Uri1): clean
			return "Uri1";
		}
	}

	[Token(Token = "0x170007E8")]
	public static string Yelena1
	{
		[Token(Token = "0x6002E8A")]
		[Address(RVA = "0x599AA40", Offset = "0x5999A40", VA = "0x599AA40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Yelena1): clean
			return "Yelena1";
		}
	}

	[Token(Token = "0x170007E9")]
	public static string Yelena2
	{
		[Token(Token = "0x6002E8B")]
		[Address(RVA = "0x599AA70", Offset = "0x5999A70", VA = "0x599AA70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Yelena2): clean
			return "Yelena2";
		}
	}

	[Token(Token = "0x170007EA")]
	public static string Yelena3
	{
		[Token(Token = "0x6002E8C")]
		[Address(RVA = "0x599AAA0", Offset = "0x5999AA0", VA = "0x599AAA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Yelena3): clean
			return "Yelena3";
		}
	}

	[Token(Token = "0x170007EB")]
	public static string Ymir1
	{
		[Token(Token = "0x6002E8D")]
		[Address(RVA = "0x599AAD0", Offset = "0x5999AD0", VA = "0x599AAD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ymir1): clean
			return "Ymir1";
		}
	}

	[Token(Token = "0x170007EC")]
	public static string Ymir2
	{
		[Token(Token = "0x6002E8E")]
		[Address(RVA = "0x599AB00", Offset = "0x5999B00", VA = "0x599AB00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ymir2): clean
			return "Ymir2";
		}
	}

	[Token(Token = "0x170007ED")]
	public static string Ymir104
	{
		[Token(Token = "0x6002E8F")]
		[Address(RVA = "0x599AB30", Offset = "0x5999B30", VA = "0x599AB30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Ymir104): clean
			return "Ymir104";
		}
	}

	[Token(Token = "0x170007EE")]
	public static string Zeke1
	{
		[Token(Token = "0x6002E90")]
		[Address(RVA = "0x599AB60", Offset = "0x5999B60", VA = "0x599AB60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Zeke1): clean
			return "Zeke1";
		}
	}

	[Token(Token = "0x170007EF")]
	public static string Zeke2
	{
		[Token(Token = "0x6002E91")]
		[Address(RVA = "0x599AB90", Offset = "0x5999B90", VA = "0x599AB90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Zeke2): clean
			return "Zeke2";
		}
	}

	[Token(Token = "0x170007F0")]
	public static string Titan1
	{
		[Token(Token = "0x6002E92")]
		[Address(RVA = "0x599ABC0", Offset = "0x5999BC0", VA = "0x599ABC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan1): clean
			return "Titan1";
		}
	}

	[Token(Token = "0x170007F1")]
	public static string Titan2
	{
		[Token(Token = "0x6002E93")]
		[Address(RVA = "0x599ABF0", Offset = "0x5999BF0", VA = "0x599ABF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan2): clean
			return "Titan2";
		}
	}

	[Token(Token = "0x170007F2")]
	public static string Titan3
	{
		[Token(Token = "0x6002E94")]
		[Address(RVA = "0x599AC20", Offset = "0x5999C20", VA = "0x599AC20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan3): clean
			return "Titan3";
		}
	}

	[Token(Token = "0x170007F3")]
	public static string Titan4
	{
		[Token(Token = "0x6002E95")]
		[Address(RVA = "0x599AC50", Offset = "0x5999C50", VA = "0x599AC50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan4): clean
			return "Titan4";
		}
	}

	[Token(Token = "0x170007F4")]
	public static string Titan5
	{
		[Token(Token = "0x6002E96")]
		[Address(RVA = "0x599AC80", Offset = "0x5999C80", VA = "0x599AC80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan5): clean
			return "Titan5";
		}
	}

	[Token(Token = "0x170007F5")]
	public static string Titan6
	{
		[Token(Token = "0x6002E97")]
		[Address(RVA = "0x599ACB0", Offset = "0x5999CB0", VA = "0x599ACB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan6): clean
			return "Titan6";
		}
	}

	[Token(Token = "0x170007F6")]
	public static string Titan7
	{
		[Token(Token = "0x6002E98")]
		[Address(RVA = "0x599ACE0", Offset = "0x5999CE0", VA = "0x599ACE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan7): clean
			return "Titan7";
		}
	}

	[Token(Token = "0x170007F7")]
	public static string Titan8
	{
		[Token(Token = "0x6002E99")]
		[Address(RVA = "0x599AD10", Offset = "0x5999D10", VA = "0x599AD10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan8): clean
			return "Titan8";
		}
	}

	[Token(Token = "0x170007F8")]
	public static string Titan9
	{
		[Token(Token = "0x6002E9A")]
		[Address(RVA = "0x599AD40", Offset = "0x5999D40", VA = "0x599AD40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan9): clean
			return "Titan9";
		}
	}

	[Token(Token = "0x170007F9")]
	public static string Titan10
	{
		[Token(Token = "0x6002E9B")]
		[Address(RVA = "0x599AD70", Offset = "0x5999D70", VA = "0x599AD70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan10): clean
			return "Titan10";
		}
	}

	[Token(Token = "0x170007FA")]
	public static string Titan11
	{
		[Token(Token = "0x6002E9C")]
		[Address(RVA = "0x599ADA0", Offset = "0x5999DA0", VA = "0x599ADA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan11): clean
			return "Titan11";
		}
	}

	[Token(Token = "0x170007FB")]
	public static string Titan12
	{
		[Token(Token = "0x6002E9D")]
		[Address(RVA = "0x599ADD0", Offset = "0x5999DD0", VA = "0x599ADD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan12): clean
			return "Titan12";
		}
	}

	[Token(Token = "0x170007FC")]
	public static string Titan13
	{
		[Token(Token = "0x6002E9E")]
		[Address(RVA = "0x599AE00", Offset = "0x5999E00", VA = "0x599AE00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan13): clean
			return "Titan13";
		}
	}

	[Token(Token = "0x170007FD")]
	public static string Titan14
	{
		[Token(Token = "0x6002E9F")]
		[Address(RVA = "0x599AE30", Offset = "0x5999E30", VA = "0x599AE30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan14): clean
			return "Titan14";
		}
	}

	[Token(Token = "0x170007FE")]
	public static string Titan15
	{
		[Token(Token = "0x6002EA0")]
		[Address(RVA = "0x599AE60", Offset = "0x5999E60", VA = "0x599AE60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan15): clean
			return "Titan15";
		}
	}

	[Token(Token = "0x170007FF")]
	public static string Titan16
	{
		[Token(Token = "0x6002EA1")]
		[Address(RVA = "0x599AE90", Offset = "0x5999E90", VA = "0x599AE90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan16): clean
			return "Titan16";
		}
	}

	[Token(Token = "0x17000800")]
	public static string Titan17
	{
		[Token(Token = "0x6002EA2")]
		[Address(RVA = "0x599AEC0", Offset = "0x5999EC0", VA = "0x599AEC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_Titan17): clean
			return "Titan17";
		}
	}

	[Token(Token = "0x17000801")]
	public static string EmojiAngry
	{
		[Token(Token = "0x6002EA3")]
		[Address(RVA = "0x599AEF0", Offset = "0x5999EF0", VA = "0x599AEF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAngry): clean
			return "EmojiAngry";
		}
	}

	[Token(Token = "0x17000802")]
	public static string EmojiAnnoyed
	{
		[Token(Token = "0x6002EA4")]
		[Address(RVA = "0x599AF20", Offset = "0x5999F20", VA = "0x599AF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAnnoyed): clean
			return "EmojiAnnoyed";
		}
	}

	[Token(Token = "0x17000803")]
	public static string EmojiCool
	{
		[Token(Token = "0x6002EA5")]
		[Address(RVA = "0x599AF50", Offset = "0x5999F50", VA = "0x599AF50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCool): clean
			return "EmojiCool";
		}
	}

	[Token(Token = "0x17000804")]
	public static string EmojiCrying
	{
		[Token(Token = "0x6002EA6")]
		[Address(RVA = "0x599AF80", Offset = "0x5999F80", VA = "0x599AF80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCrying): clean
			return "EmojiCrying";
		}
	}

	[Token(Token = "0x17000805")]
	public static string EmojiLove
	{
		[Token(Token = "0x6002EA7")]
		[Address(RVA = "0x599AFB0", Offset = "0x5999FB0", VA = "0x599AFB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiLove): clean
			return "EmojiLove";
		}
	}

	[Token(Token = "0x17000806")]
	public static string EmojiShocked
	{
		[Token(Token = "0x6002EA8")]
		[Address(RVA = "0x599AFE0", Offset = "0x5999FE0", VA = "0x599AFE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiShocked): clean
			return "EmojiShocked";
		}
	}

	[Token(Token = "0x17000807")]
	public static string EmojiSmile
	{
		[Token(Token = "0x6002EA9")]
		[Address(RVA = "0x599B010", Offset = "0x599A010", VA = "0x599B010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiSmile): clean
			return "EmojiSmile";
		}
	}

	[Token(Token = "0x17000808")]
	public static string EmojiThumbsUp
	{
		[Token(Token = "0x6002EAA")]
		[Address(RVA = "0x599B040", Offset = "0x599A040", VA = "0x599B040")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_EmojiThumbsUp): clean
			return "EmojiThumbsUp";
		}
	}

	[Token(Token = "0x17000809")]
	public override string ClassName
	{
		[Token(Token = "0x6002EAB")]
		[Address(RVA = "0x599B070", Offset = "0x599A070", VA = "0x599B070", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_ClassName): clean
			return "ProfileIconEnum";
		}
	}

	[Token(Token = "0x1700080A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002EAC")]
		[Address(RVA = "0x599B0A0", Offset = "0x599A0A0", VA = "0x599B0A0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700080B")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002EAD")]
		[Address(RVA = "0x599B0B0", Offset = "0x599A0B0", VA = "0x599B0B0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700080C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002EAE")]
		[Address(RVA = "0x599B0C0", Offset = "0x599A0C0", VA = "0x599B0C0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002E21")]
	[Address(RVA = "0x5999650", Offset = "0x5998650", VA = "0x5999650")]
	public CustomLogicProfileIconEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c (CustomLogic.CustomLogicProfileIconEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546877 == false) {
			Il2CppMethodInitialized_07546877 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicProfileIconEnum.c.

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Acros1");
		__this.Add((Il2CppObject *)"Annie1");
		__this.Add((Il2CppObject *)"Annie2");
		__this.Add((Il2CppObject *)"Annie3");
		__this.Add((Il2CppObject *)"Annie4");
		__this.Add((Il2CppObject *)"Annie5");
		__this.Add((Il2CppObject *)"Armin1");
		__this.Add((Il2CppObject *)"Bertholdt1");
		__this.Add((Il2CppObject *)"Carula1");
		__this.Add((Il2CppObject *)"Conny1");
		__this.Add((Il2CppObject *)"Conny2");
		__this.Add((Il2CppObject *)"Dakros1");
		__this.Add((Il2CppObject *)"Eren1");
		__this.Add((Il2CppObject *)"Eren2");
		__this.Add((Il2CppObject *)"Eren3");
		__this.Add((Il2CppObject *)"Eren4");
		__this.Add((Il2CppObject *)"Eren5");
		__this.Add((Il2CppObject *)"Eren6");
		__this.Add((Il2CppObject *)"Eren7");
		__this.Add((Il2CppObject *)"Eren8");
		__this.Add((Il2CppObject *)"Erwin1");
		__this.Add((Il2CppObject *)"Erwin2");
		__this.Add((Il2CppObject *)"Erwin3");
		__this.Add((Il2CppObject *)"Erwin4");
		__this.Add((Il2CppObject *)"Erwin5");
		__this.Add((Il2CppObject *)"Erwin6");
		__this.Add((Il2CppObject *)"Erwin7");
		__this.Add((Il2CppObject *)"Erwin8");
		__this.Add((Il2CppObject *)"Erwin9");
		__this.Add((Il2CppObject *)"Erwin10");
		__this.Add((Il2CppObject *)"Erwin11");
		__this.Add((Il2CppObject *)"Erwin12");
		__this.Add((Il2CppObject *)"Etika1");
		__this.Add((Il2CppObject *)"Falco1");
		__this.Add((Il2CppObject *)"Fenglee1");
		__this.Add((Il2CppObject *)"Founding1");
		__this.Add((Il2CppObject *)"Frieda1");
		__this.Add((Il2CppObject *)"Frieda2");
		__this.Add((Il2CppObject *)"Gabi1");
		__this.Add((Il2CppObject *)"Gisketch1");
		__this.Add((Il2CppObject *)"Gunther1");
		__this.Add((Il2CppObject *)"Hange1");
		__this.Add((Il2CppObject *)"Hannes1");
		__this.Add((Il2CppObject *)"Hannes2");
		__this.Add((Il2CppObject *)"Historia1");
		__this.Add((Il2CppObject *)"Historia2");
		__this.Add((Il2CppObject *)"Historia3");
		__this.Add((Il2CppObject *)"Historia4");
		__this.Add((Il2CppObject *)"Historia5");
		__this.Add((Il2CppObject *)"Historia6");
		__this.Add((Il2CppObject *)"Historia7");
		__this.Add((Il2CppObject *)"Historia8");
		__this.Add((Il2CppObject *)"Hitch1");
		__this.Add((Il2CppObject *)"Ian1");
		__this.Add((Il2CppObject *)"Ilse1");
		__this.Add((Il2CppObject *)"Isabel1");
		__this.Add((Il2CppObject *)"Jean1");
		__this.Add((Il2CppObject *)"Keith1");
		__this.Add((Il2CppObject *)"Keith2");
		__this.Add((Il2CppObject *)"Keith3");
		__this.Add((Il2CppObject *)"Kenny1");
		__this.Add((Il2CppObject *)"Kenny2");
		__this.Add((Il2CppObject *)"Levi1");
		__this.Add((Il2CppObject *)"Levi2");
		__this.Add((Il2CppObject *)"Levi3");
		__this.Add((Il2CppObject *)"Levi4");
		__this.Add((Il2CppObject *)"Levi5");
		__this.Add((Il2CppObject *)"Levi6");
		__this.Add((Il2CppObject *)"Levi7");
		__this.Add((Il2CppObject *)"Levi8");
		__this.Add((Il2CppObject *)"Levi9");
		__this.Add((Il2CppObject *)"Levi10");
		__this.Add((Il2CppObject *)"Levi11");
		__this.Add((Il2CppObject *)"Levi12");
		__this.Add((Il2CppObject *)"Levi13");
		__this.Add((Il2CppObject *)"Levi14");
		__this.Add((Il2CppObject *)"Levi15");
		__this.Add((Il2CppObject *)"Levi16");
		__this.Add((Il2CppObject *)"Levi17");
		__this.Add((Il2CppObject *)"Mikasa1");
		__this.Add((Il2CppObject *)"Mikasa2");
		__this.Add((Il2CppObject *)"Mikasa3");
		__this.Add((Il2CppObject *)"Mikasa4");
		__this.Add((Il2CppObject *)"Mikasa5");
		__this.Add((Il2CppObject *)"Mikasa6");
		__this.Add((Il2CppObject *)"Mikasa7");
		__this.Add((Il2CppObject *)"Mike1");
		__this.Add((Il2CppObject *)"Nanaba1");
		__this.Add((Il2CppObject *)"Nick1");
		__this.Add((Il2CppObject *)"Petra1");
		__this.Add((Il2CppObject *)"Petra2");
		__this.Add((Il2CppObject *)"Pieck1");
		__this.Add((Il2CppObject *)"Pieck2");
		__this.Add((Il2CppObject *)"Pixis1");
		__this.Add((Il2CppObject *)"Reiner1");
		__this.Add((Il2CppObject *)"Revolution1");
		__this.Add((Il2CppObject *)"Rico1");
		__this.Add((Il2CppObject *)"Rico2");
		__this.Add((Il2CppObject *)"Ricecake1");
		__this.Add((Il2CppObject *)"Sasha1");
		__this.Add((Il2CppObject *)"Sasha2");
		__this.Add((Il2CppObject *)"Sasha3");
		__this.Add((Il2CppObject *)"Sasha4");
		__this.Add((Il2CppObject *)"Uri1");
		__this.Add((Il2CppObject *)"Yelena1");
		__this.Add((Il2CppObject *)"Yelena2");
		__this.Add((Il2CppObject *)"Yelena3");
		__this.Add((Il2CppObject *)"Ymir1");
		__this.Add((Il2CppObject *)"Ymir2");
		__this.Add((Il2CppObject *)"Ymir104");
		__this.Add((Il2CppObject *)"Zeke1");
		__this.Add((Il2CppObject *)"Zeke2");
		__this.Add((Il2CppObject *)"Titan1");
		__this.Add((Il2CppObject *)"Titan2");
		__this.Add((Il2CppObject *)"Titan3");
		__this.Add((Il2CppObject *)"Titan4");
		__this.Add((Il2CppObject *)"Titan5");
		__this.Add((Il2CppObject *)"Titan6");
		__this.Add((Il2CppObject *)"Titan7");
		__this.Add((Il2CppObject *)"Titan8");
		__this.Add((Il2CppObject *)"Titan9");
		__this.Add((Il2CppObject *)"Titan10");
		__this.Add((Il2CppObject *)"Titan11");
		__this.Add((Il2CppObject *)"Titan12");
		__this.Add((Il2CppObject *)"Titan13");
		__this.Add((Il2CppObject *)"Titan14");
		__this.Add((Il2CppObject *)"Titan15");
		__this.Add((Il2CppObject *)"Titan16");
		__this.Add((Il2CppObject *)"Titan17");
		__this.Add((Il2CppObject *)"EmojiAngry");
		__this.Add((Il2CppObject *)"EmojiAnnoyed");
		__this.Add((Il2CppObject *)"EmojiCool");
		__this.Add((Il2CppObject *)"EmojiCrying");
		__this.Add((Il2CppObject *)"EmojiLove");
		__this.Add((Il2CppObject *)"EmojiShocked");
		__this.Add((Il2CppObject *)"EmojiSmile");
		__this.Add((Il2CppObject *)"EmojiThumbsUp");
		CustomLogicProfileIconEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Acros1>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Acros1_g____getter_2_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Acros1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie1>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Annie1_g____getter_3_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Annie1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie2>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Annie2_g____getter_4_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Annie2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie3>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Annie3_g____getter_5_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Annie3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie4>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Annie4_g____getter_6_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Annie4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie5>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Annie5_g____getter_7_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Annie5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Armin1>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Armin1_g____getter_8_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Armin1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Bertholdt1>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Bertholdt1_g____getter_9_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Bertholdt1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Carula1>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Carula1_g____getter_10_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Carula1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny1>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Conny1_g____getter_11_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Conny1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny2>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Conny2_g____getter_12_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Conny2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Dakros1>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Dakros1_g____getter_13_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Dakros1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren1>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Eren1_g____getter_14_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren2>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Eren2_g____getter_15_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren3>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Eren3_g____getter_16_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren4>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Eren4_g____getter_17_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren5>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Eren5_g____getter_18_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren6>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Eren6_g____getter_19_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren7>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Eren7_g____getter_20_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren8>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Eren8_g____getter_21_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Eren8";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin1>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin1_g____getter_22_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin2>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin2_g____getter_23_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin3>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin3_g____getter_24_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin4>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin4_g____getter_25_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin5>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin5_g____getter_26_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin6>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin6_g____getter_27_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin7>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin7_g____getter_28_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin8>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin8_g____getter_29_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin8";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin9>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin9_g____getter_30_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin9";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin10>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin10_g____getter_31_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin10";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin11>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin11_g____getter_32_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin11";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin12>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__Erwin12_g____getter_33_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Erwin12";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Etika1>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__Etika1_g____getter_34_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Etika1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Falco1>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__Falco1_g____getter_35_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Falco1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Fenglee1>g____getter|36_0: clean
	private static object Bindings____CreatePropertyBinding__Fenglee1_g____getter_36_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Fenglee1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Founding1>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__Founding1_g____getter_37_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Founding1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda1>g____getter|38_0: clean
	private static object Bindings____CreatePropertyBinding__Frieda1_g____getter_38_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Frieda1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda2>g____getter|39_0: clean
	private static object Bindings____CreatePropertyBinding__Frieda2_g____getter_39_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Frieda2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gabi1>g____getter|40_0: clean
	private static object Bindings____CreatePropertyBinding__Gabi1_g____getter_40_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Gabi1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gisketch1>g____getter|41_0: clean
	private static object Bindings____CreatePropertyBinding__Gisketch1_g____getter_41_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Gisketch1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gunther1>g____getter|42_0: clean
	private static object Bindings____CreatePropertyBinding__Gunther1_g____getter_42_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Gunther1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hange1>g____getter|43_0: clean
	private static object Bindings____CreatePropertyBinding__Hange1_g____getter_43_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Hange1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes1>g____getter|44_0: clean
	private static object Bindings____CreatePropertyBinding__Hannes1_g____getter_44_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Hannes1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes2>g____getter|45_0: clean
	private static object Bindings____CreatePropertyBinding__Hannes2_g____getter_45_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Hannes2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia1>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__Historia1_g____getter_46_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia2>g____getter|47_0: clean
	private static object Bindings____CreatePropertyBinding__Historia2_g____getter_47_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia3>g____getter|48_0: clean
	private static object Bindings____CreatePropertyBinding__Historia3_g____getter_48_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia4>g____getter|49_0: clean
	private static object Bindings____CreatePropertyBinding__Historia4_g____getter_49_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia5>g____getter|50_0: clean
	private static object Bindings____CreatePropertyBinding__Historia5_g____getter_50_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia6>g____getter|51_0: clean
	private static object Bindings____CreatePropertyBinding__Historia6_g____getter_51_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia7>g____getter|52_0: clean
	private static object Bindings____CreatePropertyBinding__Historia7_g____getter_52_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia8>g____getter|53_0: clean
	private static object Bindings____CreatePropertyBinding__Historia8_g____getter_53_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Historia8";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hitch1>g____getter|54_0: clean
	private static object Bindings____CreatePropertyBinding__Hitch1_g____getter_54_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Hitch1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ian1>g____getter|55_0: clean
	private static object Bindings____CreatePropertyBinding__Ian1_g____getter_55_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ian1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ilse1>g____getter|56_0: clean
	private static object Bindings____CreatePropertyBinding__Ilse1_g____getter_56_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ilse1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Isabel1>g____getter|57_0: clean
	private static object Bindings____CreatePropertyBinding__Isabel1_g____getter_57_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Isabel1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Jean1>g____getter|58_0: clean
	private static object Bindings____CreatePropertyBinding__Jean1_g____getter_58_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Jean1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith1>g____getter|59_0: clean
	private static object Bindings____CreatePropertyBinding__Keith1_g____getter_59_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Keith1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith2>g____getter|60_0: clean
	private static object Bindings____CreatePropertyBinding__Keith2_g____getter_60_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Keith2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith3>g____getter|61_0: clean
	private static object Bindings____CreatePropertyBinding__Keith3_g____getter_61_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Keith3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny1>g____getter|62_0: clean
	private static object Bindings____CreatePropertyBinding__Kenny1_g____getter_62_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Kenny1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny2>g____getter|63_0: clean
	private static object Bindings____CreatePropertyBinding__Kenny2_g____getter_63_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Kenny2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi1>g____getter|64_0: clean
	private static object Bindings____CreatePropertyBinding__Levi1_g____getter_64_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi2>g____getter|65_0: clean
	private static object Bindings____CreatePropertyBinding__Levi2_g____getter_65_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi3>g____getter|66_0: clean
	private static object Bindings____CreatePropertyBinding__Levi3_g____getter_66_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi4>g____getter|67_0: clean
	private static object Bindings____CreatePropertyBinding__Levi4_g____getter_67_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi5>g____getter|68_0: clean
	private static object Bindings____CreatePropertyBinding__Levi5_g____getter_68_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi6>g____getter|69_0: clean
	private static object Bindings____CreatePropertyBinding__Levi6_g____getter_69_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi7>g____getter|70_0: clean
	private static object Bindings____CreatePropertyBinding__Levi7_g____getter_70_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi8>g____getter|71_0: clean
	private static object Bindings____CreatePropertyBinding__Levi8_g____getter_71_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi8";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi9>g____getter|72_0: clean
	private static object Bindings____CreatePropertyBinding__Levi9_g____getter_72_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi9";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi10>g____getter|73_0: clean
	private static object Bindings____CreatePropertyBinding__Levi10_g____getter_73_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi10";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi11>g____getter|74_0: clean
	private static object Bindings____CreatePropertyBinding__Levi11_g____getter_74_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi11";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi12>g____getter|75_0: clean
	private static object Bindings____CreatePropertyBinding__Levi12_g____getter_75_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi12";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi13>g____getter|76_0: clean
	private static object Bindings____CreatePropertyBinding__Levi13_g____getter_76_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi13";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi14>g____getter|77_0: clean
	private static object Bindings____CreatePropertyBinding__Levi14_g____getter_77_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi14";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi15>g____getter|78_0: clean
	private static object Bindings____CreatePropertyBinding__Levi15_g____getter_78_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi15";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi16>g____getter|79_0: clean
	private static object Bindings____CreatePropertyBinding__Levi16_g____getter_79_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi16";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi17>g____getter|80_0: clean
	private static object Bindings____CreatePropertyBinding__Levi17_g____getter_80_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Levi17";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa1>g____getter|81_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa1_g____getter_81_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa2>g____getter|82_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa2_g____getter_82_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa3>g____getter|83_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa3_g____getter_83_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa4>g____getter|84_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa4_g____getter_84_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa5>g____getter|85_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa5_g____getter_85_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa6>g____getter|86_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa6_g____getter_86_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa7>g____getter|87_0: clean
	private static object Bindings____CreatePropertyBinding__Mikasa7_g____getter_87_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mikasa7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mike1>g____getter|88_0: clean
	private static object Bindings____CreatePropertyBinding__Mike1_g____getter_88_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Mike1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nanaba1>g____getter|89_0: clean
	private static object Bindings____CreatePropertyBinding__Nanaba1_g____getter_89_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Nanaba1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nick1>g____getter|90_0: clean
	private static object Bindings____CreatePropertyBinding__Nick1_g____getter_90_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Nick1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra1>g____getter|91_0: clean
	private static object Bindings____CreatePropertyBinding__Petra1_g____getter_91_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Petra1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra2>g____getter|92_0: clean
	private static object Bindings____CreatePropertyBinding__Petra2_g____getter_92_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Petra2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck1>g____getter|93_0: clean
	private static object Bindings____CreatePropertyBinding__Pieck1_g____getter_93_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Pieck1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck2>g____getter|94_0: clean
	private static object Bindings____CreatePropertyBinding__Pieck2_g____getter_94_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Pieck2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pixis1>g____getter|95_0: clean
	private static object Bindings____CreatePropertyBinding__Pixis1_g____getter_95_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Pixis1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Reiner1>g____getter|96_0: clean
	private static object Bindings____CreatePropertyBinding__Reiner1_g____getter_96_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Reiner1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Revolution1>g____getter|97_0: clean
	private static object Bindings____CreatePropertyBinding__Revolution1_g____getter_97_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Revolution1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico1>g____getter|98_0: clean
	private static object Bindings____CreatePropertyBinding__Rico1_g____getter_98_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Rico1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico2>g____getter|99_0: clean
	private static object Bindings____CreatePropertyBinding__Rico2_g____getter_99_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Rico2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ricecake1>g____getter|100_0: clean
	private static object Bindings____CreatePropertyBinding__Ricecake1_g____getter_100_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ricecake1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha1>g____getter|101_0: clean
	private static object Bindings____CreatePropertyBinding__Sasha1_g____getter_101_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Sasha1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha2>g____getter|102_0: clean
	private static object Bindings____CreatePropertyBinding__Sasha2_g____getter_102_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Sasha2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha3>g____getter|103_0: clean
	private static object Bindings____CreatePropertyBinding__Sasha3_g____getter_103_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Sasha3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha4>g____getter|104_0: clean
	private static object Bindings____CreatePropertyBinding__Sasha4_g____getter_104_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Sasha4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Uri1>g____getter|105_0: clean
	private static object Bindings____CreatePropertyBinding__Uri1_g____getter_105_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Uri1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena1>g____getter|106_0: clean
	private static object Bindings____CreatePropertyBinding__Yelena1_g____getter_106_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Yelena1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena2>g____getter|107_0: clean
	private static object Bindings____CreatePropertyBinding__Yelena2_g____getter_107_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Yelena2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena3>g____getter|108_0: clean
	private static object Bindings____CreatePropertyBinding__Yelena3_g____getter_108_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Yelena3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir1>g____getter|109_0: clean
	private static object Bindings____CreatePropertyBinding__Ymir1_g____getter_109_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ymir1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir2>g____getter|110_0: clean
	private static object Bindings____CreatePropertyBinding__Ymir2_g____getter_110_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ymir2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir104>g____getter|111_0: clean
	private static object Bindings____CreatePropertyBinding__Ymir104_g____getter_111_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Ymir104";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke1>g____getter|112_0: clean
	private static object Bindings____CreatePropertyBinding__Zeke1_g____getter_112_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Zeke1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke2>g____getter|113_0: clean
	private static object Bindings____CreatePropertyBinding__Zeke2_g____getter_113_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Zeke2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan1>g____getter|114_0: clean
	private static object Bindings____CreatePropertyBinding__Titan1_g____getter_114_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan1";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan2>g____getter|115_0: clean
	private static object Bindings____CreatePropertyBinding__Titan2_g____getter_115_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan2";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan3>g____getter|116_0: clean
	private static object Bindings____CreatePropertyBinding__Titan3_g____getter_116_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan3";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan4>g____getter|117_0: clean
	private static object Bindings____CreatePropertyBinding__Titan4_g____getter_117_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan4";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan5>g____getter|118_0: clean
	private static object Bindings____CreatePropertyBinding__Titan5_g____getter_118_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan5";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan6>g____getter|119_0: clean
	private static object Bindings____CreatePropertyBinding__Titan6_g____getter_119_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan6";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan7>g____getter|120_0: clean
	private static object Bindings____CreatePropertyBinding__Titan7_g____getter_120_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan7";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan8>g____getter|121_0: clean
	private static object Bindings____CreatePropertyBinding__Titan8_g____getter_121_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan8";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan9>g____getter|122_0: clean
	private static object Bindings____CreatePropertyBinding__Titan9_g____getter_122_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan9";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan10>g____getter|123_0: clean
	private static object Bindings____CreatePropertyBinding__Titan10_g____getter_123_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan10";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan11>g____getter|124_0: clean
	private static object Bindings____CreatePropertyBinding__Titan11_g____getter_124_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan11";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan12>g____getter|125_0: clean
	private static object Bindings____CreatePropertyBinding__Titan12_g____getter_125_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan12";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan13>g____getter|126_0: clean
	private static object Bindings____CreatePropertyBinding__Titan13_g____getter_126_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan13";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan14>g____getter|127_0: clean
	private static object Bindings____CreatePropertyBinding__Titan14_g____getter_127_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan14";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan15>g____getter|128_0: clean
	private static object Bindings____CreatePropertyBinding__Titan15_g____getter_128_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan15";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan16>g____getter|129_0: clean
	private static object Bindings____CreatePropertyBinding__Titan16_g____getter_129_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan16";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan17>g____getter|130_0: clean
	private static object Bindings____CreatePropertyBinding__Titan17_g____getter_130_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"Titan17";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAngry>g____getter|131_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiAngry_g____getter_131_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiAngry";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAnnoyed>g____getter|132_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiAnnoyed_g____getter_132_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiAnnoyed";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCool>g____getter|133_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiCool_g____getter_133_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiCool";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCrying>g____getter|134_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiCrying_g____getter_134_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiCrying";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiLove>g____getter|135_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiLove_g____getter_135_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiLove";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiShocked>g____getter|136_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiShocked_g____getter_136_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiShocked";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiSmile>g____getter|137_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiSmile_g____getter_137_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiSmile";
	}

	// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiThumbsUp>g____getter|138_0: clean
	private static object Bindings____CreatePropertyBinding__EmojiThumbsUp_g____getter_138_0(CustomLogicProfileIconEnum __i)
	{
		return (Il2CppObject *)"EmojiThumbsUp";
	}
}
