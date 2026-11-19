// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTitanSoundEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200058D")]
[CompilerGenerated]
internal class CustomLogicTitanSoundEnum : BuiltinClassInstance
{
	[Token(Token = "0x200058E")]
	public static class Factory
	{
		[Token(Token = "0x600327B")]
		[Address(RVA = "0x59BB520", Offset = "0x59BA520", VA = "0x59BB520")]
		public static CustomLogicTitanSoundEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanSoundEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTitanSoundEnum();
			return (CustomLogicTitanSoundEnum)__this;
		}
	}

	[Token(Token = "0x200058F")]
	public static class Bindings
	{
		[Token(Token = "0x4001892")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600327C")]
		[Address(RVA = "0x59BB640", Offset = "0x59BA640", VA = "0x59BB640")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTitanSoundEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x45d92973) {
				if (uVar2 < 0x22d25e85) {
					if (uVar2 < 0x1ae90931) {
						if (uVar2 < 0xfb1ddde) {
							if (uVar2 == 0xcb1d924) {
								bVar1 = (name == "Roar1");
								if (bVar1) {
									pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Roar1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xfb1dddd) {
								bVar1 = (name == "Roar2");
								if (bVar1) {
									pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Roar2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x15c63468) {
							bVar1 = (name == "DeathFall");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__DeathFall();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x16d24ba0) {
							bVar1 = (name == "Hurt8");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt8();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1ae90930) {
							bVar1 = (name == "Footstep3");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Footstep3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1fd259cc) {
						if (uVar2 == 0x1be90ac3) {
							bVar1 = (name == "Footstep2");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Footstep2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1ce90c56) {
							bVar1 = (name == "Footstep1");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Footstep1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1fd259cb) {
							bVar1 = (name == "Hurt1");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x20d25b5e) {
						bVar1 = (name == "Hurt2");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x21d25cf1) {
						bVar1 = (name == "Hurt3");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x22d25e84) {
						bVar1 = (name == "Hurt4");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt4();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x26b48369) {
					if (uVar2 < 0x24389c32) {
						if (uVar2 == 0x23d26017) {
							bVar1 = (name == "Hurt5");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt5();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x24389c31) {
							bVar1 = (name == "TitanJump");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__TitanJump();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x24d261aa) {
						bVar1 = (name == "Hurt6");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt6();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x25d2633d) {
						bVar1 = (name == "Hurt7");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hurt7();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x26b48368) {
						bVar1 = (name == "RockPickup");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__RockPickup();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x42d924ba) {
					if (uVar2 == 0x3fd92000) {
						bVar1 = (name == "Grunt1");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x41d92326) {
						bVar1 = (name == "Grunt3");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x42d924b9) {
						bVar1 = (name == "Grunt2");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x43d9264c) {
					bVar1 = (name == "Grunt5");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt5();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x44d927df) {
					bVar1 = (name == "Grunt4");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt4();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x45d92972) {
					bVar1 = (name == "Grunt7");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt7();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x926e2ded) {
				if (uVar2 < 0x88284e09) {
					if (uVar2 < 0x47d92c99) {
						if (uVar2 == 0x46d92b05) {
							bVar1 = (name == "Grunt6");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt6();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x47d92c98) {
							bVar1 = (name == "Grunt9");
							if (bVar1) {
								pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt9();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x88284e08) {
						bVar1 = (name == "Swing1");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Swing1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x48d92e2b) {
						bVar1 = (name == "Grunt8");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt8();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x655d504a) {
						bVar1 = (name == "Hit");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Hit();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x8e6e27a1) {
					if (uVar2 == 0x8a28512e) {
						bVar1 = (name == "Swing3");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Swing3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8b2852c1) {
						bVar1 = (name == "Swing2");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Swing2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8e6e27a0) {
						bVar1 = (name == "Huff2");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8f6e2933) {
					bVar1 = (name == "Huff3");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff3();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x916e2c59) {
					bVar1 = (name == "Huff1");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x926e2dec) {
					bVar1 = (name == "Huff6");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff6();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xad627478) {
				if (uVar2 < 0xa0091098) {
					if (uVar2 == 0x946e3112) {
						bVar1 = (name == "Huff4");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff4();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x956e32a5) {
						bVar1 = (name == "Huff5");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Huff5();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa0091097) {
						bVar1 = (name == "RockThrow1");
						if (bVar1) {
							pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__RockThrow1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa109122a) {
					bVar1 = (name == "RockThrow2");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__RockThrow2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xac6b6ce7) {
					bVar1 = (name == "Bite2");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Bite2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xad627477) {
					bVar1 = (name == "DeathNoFall");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__DeathNoFall();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb6407b94) {
				if (uVar2 == 0xad6b6e7a) {
					bVar1 = (name == "Bite1");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Bite1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb2cdab90) {
					bVar1 = (name == "Grunt10");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Grunt10();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb6407b93) {
					bVar1 = (name == "Steam");
					if (bVar1) {
						pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Steam();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xc25fad04) {
				bVar1 = (name == "Laugh2");
				if (bVar1) {
					pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Laugh2();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xc55fb1bd) {
				bVar1 = (name == "Laugh1");
				if (bVar1) {
					pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Laugh1();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfc4e544d) {
				bVar1 = (name == "Decapitate");
				if (bVar1) {
					pCVar3 = CustomLogicTitanSoundEnum.Bindings.__CreatePropertyBinding__Decapitate();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanSoundEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600327D")]
		[Address(RVA = "0x59BC6C0", Offset = "0x59BB6C0", VA = "0x59BC6C0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Footstep1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600327E")]
		[Address(RVA = "0x59BC760", Offset = "0x59BB760", VA = "0x59BC760")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Footstep2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600327F")]
		[Address(RVA = "0x59BC800", Offset = "0x59BB800", VA = "0x59BC800")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Footstep3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep3): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Footstep3_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003280")]
		[Address(RVA = "0x59BC8A0", Offset = "0x59BB8A0", VA = "0x59BC8A0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Swing1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing1_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003281")]
		[Address(RVA = "0x59BC940", Offset = "0x59BB940", VA = "0x59BC940")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Swing2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing2_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003282")]
		[Address(RVA = "0x59BC9E0", Offset = "0x59BB9E0", VA = "0x59BC9E0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Swing3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Swing3): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Swing3_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003283")]
		[Address(RVA = "0x59BCA80", Offset = "0x59BBA80", VA = "0x59BCA80")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt1_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003284")]
		[Address(RVA = "0x59BCB20", Offset = "0x59BBB20", VA = "0x59BCB20")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt2_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003285")]
		[Address(RVA = "0x59BCBC0", Offset = "0x59BBBC0", VA = "0x59BCBC0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt3): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt3_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003286")]
		[Address(RVA = "0x59BCC60", Offset = "0x59BBC60", VA = "0x59BCC60")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt4): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt4_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003287")]
		[Address(RVA = "0x59BCD00", Offset = "0x59BBD00", VA = "0x59BCD00")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt5): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt5_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003288")]
		[Address(RVA = "0x59BCDA0", Offset = "0x59BBDA0", VA = "0x59BCDA0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt6): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt6_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003289")]
		[Address(RVA = "0x59BCE40", Offset = "0x59BBE40", VA = "0x59BCE40")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt7): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt7_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328A")]
		[Address(RVA = "0x59BCEE0", Offset = "0x59BBEE0", VA = "0x59BCEE0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hurt8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hurt8): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hurt8_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328B")]
		[Address(RVA = "0x59BCF80", Offset = "0x59BBF80", VA = "0x59BCF80")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt1_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328C")]
		[Address(RVA = "0x59BD020", Offset = "0x59BC020", VA = "0x59BD020")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt2_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328D")]
		[Address(RVA = "0x59BD0C0", Offset = "0x59BC0C0", VA = "0x59BD0C0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt3): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt3_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328E")]
		[Address(RVA = "0x59BD160", Offset = "0x59BC160", VA = "0x59BD160")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt4): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt4_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600328F")]
		[Address(RVA = "0x59BD200", Offset = "0x59BC200", VA = "0x59BD200")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt5): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt5_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003290")]
		[Address(RVA = "0x59BD2A0", Offset = "0x59BC2A0", VA = "0x59BD2A0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt6): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt6_g____getter_21_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003291")]
		[Address(RVA = "0x59BD340", Offset = "0x59BC340", VA = "0x59BD340")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt7): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt7_g____getter_22_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003292")]
		[Address(RVA = "0x59BD3E0", Offset = "0x59BC3E0", VA = "0x59BD3E0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt8): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt8_g____getter_23_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003293")]
		[Address(RVA = "0x59BD480", Offset = "0x59BC480", VA = "0x59BD480")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt9()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt9): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt9_g____getter_24_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003294")]
		[Address(RVA = "0x59BD520", Offset = "0x59BC520", VA = "0x59BD520")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Grunt10()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Grunt10): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Grunt10_g____getter_25_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003295")]
		[Address(RVA = "0x59BD5C0", Offset = "0x59BC5C0", VA = "0x59BD5C0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Hit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Hit): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Hit_g____getter_26_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003296")]
		[Address(RVA = "0x59BD660", Offset = "0x59BC660", VA = "0x59BD660")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Roar1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar1_g____getter_27_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003297")]
		[Address(RVA = "0x59BD700", Offset = "0x59BC700", VA = "0x59BD700")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Roar2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Roar2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Roar2_g____getter_28_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003298")]
		[Address(RVA = "0x59BD7A0", Offset = "0x59BC7A0", VA = "0x59BD7A0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__DeathFall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathFall): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathFall_g____getter_29);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003299")]
		[Address(RVA = "0x59BD840", Offset = "0x59BC840", VA = "0x59BD840")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__DeathNoFall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__DeathNoFall): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__DeathNoFall_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329A")]
		[Address(RVA = "0x59BD8E0", Offset = "0x59BC8E0", VA = "0x59BD8E0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Steam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Steam): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Steam_g____getter_31_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329B")]
		[Address(RVA = "0x59BD980", Offset = "0x59BC980", VA = "0x59BD980")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Bite1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite1_g____getter_32_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329C")]
		[Address(RVA = "0x59BDA20", Offset = "0x59BCA20", VA = "0x59BDA20")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Bite2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Bite2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Bite2_g____getter_33_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329D")]
		[Address(RVA = "0x59BDAC0", Offset = "0x59BCAC0", VA = "0x59BDAC0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Laugh1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh1_g____getter_34_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329E")]
		[Address(RVA = "0x59BDB60", Offset = "0x59BCB60", VA = "0x59BDB60")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Laugh2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Laugh2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Laugh2_g____getter_35_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600329F")]
		[Address(RVA = "0x59BDC00", Offset = "0x59BCC00", VA = "0x59BDC00")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff1_g____getter_36_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A0")]
		[Address(RVA = "0x59BDCA0", Offset = "0x59BCCA0", VA = "0x59BDCA0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff2_g____getter_37_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A1")]
		[Address(RVA = "0x59BDD40", Offset = "0x59BCD40", VA = "0x59BDD40")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff3): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff3_g____getter_38_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A2")]
		[Address(RVA = "0x59BDDE0", Offset = "0x59BCDE0", VA = "0x59BDDE0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff4): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff4_g____getter_39_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A3")]
		[Address(RVA = "0x59BDE80", Offset = "0x59BCE80", VA = "0x59BDE80")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff5): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff5_g____getter_40_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A4")]
		[Address(RVA = "0x59BDF20", Offset = "0x59BCF20", VA = "0x59BDF20")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Huff6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Huff6): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Huff6_g____getter_41_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A5")]
		[Address(RVA = "0x59BDFC0", Offset = "0x59BCFC0", VA = "0x59BDFC0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__TitanJump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__TitanJump): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__TitanJump_g____getter_42);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A6")]
		[Address(RVA = "0x59BE060", Offset = "0x59BD060", VA = "0x59BE060")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__RockPickup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockPickup): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockPickup_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A7")]
		[Address(RVA = "0x59BE100", Offset = "0x59BD100", VA = "0x59BE100")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__RockThrow1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow1): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow1_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A8")]
		[Address(RVA = "0x59BE1A0", Offset = "0x59BD1A0", VA = "0x59BE1A0")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__RockThrow2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__RockThrow2): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__RockThrow2_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032A9")]
		[Address(RVA = "0x59BE240", Offset = "0x59BD240", VA = "0x59BE240")]
		public static CLPropertyBinding<CustomLogicTitanSoundEnum> __CreatePropertyBinding__Decapitate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum.Bindings$$__CreatePropertyBinding__Decapitate): 2 lines keep C-only constructs
			Func<CustomLogicTitanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanSoundEnum> __this_00;

			__this = new Func<CustomLogicTitanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanSoundEnum_Bindings___CreatePropertyBinding__Decapitate_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicTitanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170008F9")]
	public static string Footstep1
	{
		[Token(Token = "0x600324A")]
		[Address(RVA = "0x59BA110", Offset = "0x59B9110", VA = "0x59BA110")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546b9c == false) {
				Il2CppMethodInitialized_07546b9c = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Footstep1;
			}
			return *(String*)(typeof(TitanSounds)).static_fields;
		}
	}

	[Token(Token = "0x170008FA")]
	public static string Footstep2
	{
		[Token(Token = "0x600324B")]
		[Address(RVA = "0x59BA180", Offset = "0x59B9180", VA = "0x59BA180")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546b9d == false) {
				Il2CppMethodInitialized_07546b9d = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Footstep2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 8);
		}
	}

	[Token(Token = "0x170008FB")]
	public static string Footstep3
	{
		[Token(Token = "0x600324C")]
		[Address(RVA = "0x59BA1F0", Offset = "0x59B91F0", VA = "0x59BA1F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Footstep3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546b9e == false) {
				Il2CppMethodInitialized_07546b9e = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Footstep3;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170008FC")]
	public static string Swing1
	{
		[Token(Token = "0x600324D")]
		[Address(RVA = "0x59BA260", Offset = "0x59B9260", VA = "0x59BA260")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Swing1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546b9f == false) {
				Il2CppMethodInitialized_07546b9f = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Swing1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170008FD")]
	public static string Swing2
	{
		[Token(Token = "0x600324E")]
		[Address(RVA = "0x59BA2D0", Offset = "0x59B92D0", VA = "0x59BA2D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Swing2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba0 == false) {
				Il2CppMethodInitialized_07546ba0 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Swing2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170008FE")]
	public static string Swing3
	{
		[Token(Token = "0x600324F")]
		[Address(RVA = "0x59BA340", Offset = "0x59B9340", VA = "0x59BA340")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Swing3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba1 == false) {
				Il2CppMethodInitialized_07546ba1 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Swing3;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170008FF")]
	public static string Hurt1
	{
		[Token(Token = "0x6003250")]
		[Address(RVA = "0x59BA3B0", Offset = "0x59B93B0", VA = "0x59BA3B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba2 == false) {
				Il2CppMethodInitialized_07546ba2 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x17000900")]
	public static string Hurt2
	{
		[Token(Token = "0x6003251")]
		[Address(RVA = "0x59BA420", Offset = "0x59B9420", VA = "0x59BA420")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba3 == false) {
				Il2CppMethodInitialized_07546ba3 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x17000901")]
	public static string Hurt3
	{
		[Token(Token = "0x6003252")]
		[Address(RVA = "0x59BA490", Offset = "0x59B9490", VA = "0x59BA490")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba4 == false) {
				Il2CppMethodInitialized_07546ba4 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt3;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x17000902")]
	public static string Hurt4
	{
		[Token(Token = "0x6003253")]
		[Address(RVA = "0x59BA500", Offset = "0x59B9500", VA = "0x59BA500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba5 == false) {
				Il2CppMethodInitialized_07546ba5 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt4;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x17000903")]
	public static string Hurt5
	{
		[Token(Token = "0x6003254")]
		[Address(RVA = "0x59BA570", Offset = "0x59B9570", VA = "0x59BA570")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba6 == false) {
				Il2CppMethodInitialized_07546ba6 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt5;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x17000904")]
	public static string Hurt6
	{
		[Token(Token = "0x6003255")]
		[Address(RVA = "0x59BA5E0", Offset = "0x59B95E0", VA = "0x59BA5E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt6): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba7 == false) {
				Il2CppMethodInitialized_07546ba7 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt6;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x17000905")]
	public static string Hurt7
	{
		[Token(Token = "0x6003256")]
		[Address(RVA = "0x59BA650", Offset = "0x59B9650", VA = "0x59BA650")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt7): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba8 == false) {
				Il2CppMethodInitialized_07546ba8 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt7;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x17000906")]
	public static string Hurt8
	{
		[Token(Token = "0x6003257")]
		[Address(RVA = "0x59BA6C0", Offset = "0x59B96C0", VA = "0x59BA6C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hurt8): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ba9 == false) {
				Il2CppMethodInitialized_07546ba9 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hurt8;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x17000907")]
	public static string Grunt1
	{
		[Token(Token = "0x6003258")]
		[Address(RVA = "0x59BA730", Offset = "0x59B9730", VA = "0x59BA730")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546baa == false) {
				Il2CppMethodInitialized_07546baa = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x17000908")]
	public static string Grunt2
	{
		[Token(Token = "0x6003259")]
		[Address(RVA = "0x59BA7A0", Offset = "0x59B97A0", VA = "0x59BA7A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bab == false) {
				Il2CppMethodInitialized_07546bab = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x17000909")]
	public static string Grunt3
	{
		[Token(Token = "0x600325A")]
		[Address(RVA = "0x59BA810", Offset = "0x59B9810", VA = "0x59BA810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bac == false) {
				Il2CppMethodInitialized_07546bac = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt3;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x1700090A")]
	public static string Grunt4
	{
		[Token(Token = "0x600325B")]
		[Address(RVA = "0x59BA880", Offset = "0x59B9880", VA = "0x59BA880")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bad == false) {
				Il2CppMethodInitialized_07546bad = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt4;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x1700090B")]
	public static string Grunt5
	{
		[Token(Token = "0x600325C")]
		[Address(RVA = "0x59BA8F0", Offset = "0x59B98F0", VA = "0x59BA8F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bae == false) {
				Il2CppMethodInitialized_07546bae = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt5;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x1700090C")]
	public static string Grunt6
	{
		[Token(Token = "0x600325D")]
		[Address(RVA = "0x59BA960", Offset = "0x59B9960", VA = "0x59BA960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt6): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546baf == false) {
				Il2CppMethodInitialized_07546baf = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt6;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x1700090D")]
	public static string Grunt7
	{
		[Token(Token = "0x600325E")]
		[Address(RVA = "0x59BA9D0", Offset = "0x59B99D0", VA = "0x59BA9D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt7): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb0 == false) {
				Il2CppMethodInitialized_07546bb0 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt7;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x1700090E")]
	public static string Grunt8
	{
		[Token(Token = "0x600325F")]
		[Address(RVA = "0x59BAA40", Offset = "0x59B9A40", VA = "0x59BAA40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt8): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb1 == false) {
				Il2CppMethodInitialized_07546bb1 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt8;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x1700090F")]
	public static string Grunt9
	{
		[Token(Token = "0x6003260")]
		[Address(RVA = "0x59BAAB0", Offset = "0x59B9AB0", VA = "0x59BAAB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt9): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb2 == false) {
				Il2CppMethodInitialized_07546bb2 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt9;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x17000910")]
	public static string Grunt10
	{
		[Token(Token = "0x6003261")]
		[Address(RVA = "0x59BAB20", Offset = "0x59B9B20", VA = "0x59BAB20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Grunt10): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb3 == false) {
				Il2CppMethodInitialized_07546bb3 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Grunt10;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x17000911")]
	public static string Hit
	{
		[Token(Token = "0x6003262")]
		[Address(RVA = "0x59BAB90", Offset = "0x59B9B90", VA = "0x59BAB90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Hit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb4 == false) {
				Il2CppMethodInitialized_07546bb4 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Hit;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x17000912")]
	public static string Roar1
	{
		[Token(Token = "0x6003263")]
		[Address(RVA = "0x59BAC00", Offset = "0x59B9C00", VA = "0x59BAC00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Roar1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb5 == false) {
				Il2CppMethodInitialized_07546bb5 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Roar1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 200);
		}
	}

	[Token(Token = "0x17000913")]
	public static string Roar2
	{
		[Token(Token = "0x6003264")]
		[Address(RVA = "0x59BAC70", Offset = "0x59B9C70", VA = "0x59BAC70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Roar2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb6 == false) {
				Il2CppMethodInitialized_07546bb6 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Roar2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x17000914")]
	public static string DeathFall
	{
		[Token(Token = "0x6003265")]
		[Address(RVA = "0x59BACE0", Offset = "0x59B9CE0", VA = "0x59BACE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_DeathFall): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb7 == false) {
				Il2CppMethodInitialized_07546bb7 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.DeathFall;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x17000915")]
	public static string DeathNoFall
	{
		[Token(Token = "0x6003266")]
		[Address(RVA = "0x59BAD50", Offset = "0x59B9D50", VA = "0x59BAD50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_DeathNoFall): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb8 == false) {
				Il2CppMethodInitialized_07546bb8 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.DeathNoFall;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xe0);
		}
	}

	[Token(Token = "0x17000916")]
	public static string Steam
	{
		[Token(Token = "0x6003267")]
		[Address(RVA = "0x59BADC0", Offset = "0x59B9DC0", VA = "0x59BADC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Steam): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bb9 == false) {
				Il2CppMethodInitialized_07546bb9 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Steam;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xe8);
		}
	}

	[Token(Token = "0x17000917")]
	public static string Bite1
	{
		[Token(Token = "0x6003268")]
		[Address(RVA = "0x59BAE30", Offset = "0x59B9E30", VA = "0x59BAE30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Bite1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bba == false) {
				Il2CppMethodInitialized_07546bba = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Bite1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xf0);
		}
	}

	[Token(Token = "0x17000918")]
	public static string Bite2
	{
		[Token(Token = "0x6003269")]
		[Address(RVA = "0x59BAEA0", Offset = "0x59B9EA0", VA = "0x59BAEA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Bite2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bbb == false) {
				Il2CppMethodInitialized_07546bbb = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Bite2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0xf8);
		}
	}

	[Token(Token = "0x17000919")]
	public static string Laugh1
	{
		[Token(Token = "0x600326A")]
		[Address(RVA = "0x59BAF10", Offset = "0x59B9F10", VA = "0x59BAF10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bbc == false) {
				Il2CppMethodInitialized_07546bbc = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Laugh1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x100);
		}
	}

	[Token(Token = "0x1700091A")]
	public static string Laugh2
	{
		[Token(Token = "0x600326B")]
		[Address(RVA = "0x59BAF80", Offset = "0x59B9F80", VA = "0x59BAF80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Laugh2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bbd == false) {
				Il2CppMethodInitialized_07546bbd = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Laugh2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x108);
		}
	}

	[Token(Token = "0x1700091B")]
	public static string Huff1
	{
		[Token(Token = "0x600326C")]
		[Address(RVA = "0x59BAFF0", Offset = "0x59B9FF0", VA = "0x59BAFF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bbe == false) {
				Il2CppMethodInitialized_07546bbe = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x110);
		}
	}

	[Token(Token = "0x1700091C")]
	public static string Huff2
	{
		[Token(Token = "0x600326D")]
		[Address(RVA = "0x59BB060", Offset = "0x59BA060", VA = "0x59BB060")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bbf == false) {
				Il2CppMethodInitialized_07546bbf = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x118);
		}
	}

	[Token(Token = "0x1700091D")]
	public static string Huff3
	{
		[Token(Token = "0x600326E")]
		[Address(RVA = "0x59BB0D0", Offset = "0x59BA0D0", VA = "0x59BB0D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc0 == false) {
				Il2CppMethodInitialized_07546bc0 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff3;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x120);
		}
	}

	[Token(Token = "0x1700091E")]
	public static string Huff4
	{
		[Token(Token = "0x600326F")]
		[Address(RVA = "0x59BB140", Offset = "0x59BA140", VA = "0x59BB140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc1 == false) {
				Il2CppMethodInitialized_07546bc1 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff4;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x128);
		}
	}

	[Token(Token = "0x1700091F")]
	public static string Huff5
	{
		[Token(Token = "0x6003270")]
		[Address(RVA = "0x59BB1B0", Offset = "0x59BA1B0", VA = "0x59BB1B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc2 == false) {
				Il2CppMethodInitialized_07546bc2 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff5;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x130);
		}
	}

	[Token(Token = "0x17000920")]
	public static string Huff6
	{
		[Token(Token = "0x6003271")]
		[Address(RVA = "0x59BB220", Offset = "0x59BA220", VA = "0x59BB220")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Huff6): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc3 == false) {
				Il2CppMethodInitialized_07546bc3 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Huff6;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x138);
		}
	}

	[Token(Token = "0x17000921")]
	public static string TitanJump
	{
		[Token(Token = "0x6003272")]
		[Address(RVA = "0x59BB290", Offset = "0x59BA290", VA = "0x59BB290")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_TitanJump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc4 == false) {
				Il2CppMethodInitialized_07546bc4 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.TitanJump;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x140);
		}
	}

	[Token(Token = "0x17000922")]
	public static string RockPickup
	{
		[Token(Token = "0x6003273")]
		[Address(RVA = "0x59BB300", Offset = "0x59BA300", VA = "0x59BB300")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_RockPickup): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc5 == false) {
				Il2CppMethodInitialized_07546bc5 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.RockPickup;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x148);
		}
	}

	[Token(Token = "0x17000923")]
	public static string RockThrow1
	{
		[Token(Token = "0x6003274")]
		[Address(RVA = "0x59BB370", Offset = "0x59BA370", VA = "0x59BB370")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc6 == false) {
				Il2CppMethodInitialized_07546bc6 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.RockThrow1;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x150);
		}
	}

	[Token(Token = "0x17000924")]
	public static string RockThrow2
	{
		[Token(Token = "0x6003275")]
		[Address(RVA = "0x59BB3E0", Offset = "0x59BA3E0", VA = "0x59BB3E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_RockThrow2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc7 == false) {
				Il2CppMethodInitialized_07546bc7 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.RockThrow2;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x158);
		}
	}

	[Token(Token = "0x17000925")]
	public static string Decapitate
	{
		[Token(Token = "0x6003276")]
		[Address(RVA = "0x59BB450", Offset = "0x59BA450", VA = "0x59BB450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_Decapitate): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546bc8 == false) {
				Il2CppMethodInitialized_07546bc8 = true;
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TitanSounds.Decapitate;
			}
			return *(String*)((long)(typeof(TitanSounds)).static_fields + 0x160);
		}
	}

	[Token(Token = "0x17000926")]
	public override string ClassName
	{
		[Token(Token = "0x6003277")]
		[Address(RVA = "0x59BB4C0", Offset = "0x59BA4C0", VA = "0x59BB4C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_ClassName): clean
			return "TitanSoundEnum";
		}
	}

	[Token(Token = "0x17000927")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003278")]
		[Address(RVA = "0x59BB4F0", Offset = "0x59BA4F0", VA = "0x59BB4F0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000928")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003279")]
		[Address(RVA = "0x59BB500", Offset = "0x59BA500", VA = "0x59BB500", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000929")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600327A")]
		[Address(RVA = "0x59BB510", Offset = "0x59BA510", VA = "0x59BB510", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003249")]
	[Address(RVA = "0x59BA0A0", Offset = "0x59B90A0", VA = "0x59BA0A0")]
	public CustomLogicTitanSoundEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c (CustomLogic.CustomLogicTitanSoundEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546b9b == false) {
			Il2CppMethodInitialized_07546b9b = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTitanSoundEnum.c.

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Footstep1");
		__this.Add((Il2CppObject *)"Footstep2");
		__this.Add((Il2CppObject *)"Footstep3");
		__this.Add((Il2CppObject *)"Swing1");
		__this.Add((Il2CppObject *)"Swing2");
		__this.Add((Il2CppObject *)"Swing3");
		__this.Add((Il2CppObject *)"Hurt1");
		__this.Add((Il2CppObject *)"Hurt2");
		__this.Add((Il2CppObject *)"Hurt3");
		__this.Add((Il2CppObject *)"Hurt4");
		__this.Add((Il2CppObject *)"Hurt5");
		__this.Add((Il2CppObject *)"Hurt6");
		__this.Add((Il2CppObject *)"Hurt7");
		__this.Add((Il2CppObject *)"Hurt8");
		__this.Add((Il2CppObject *)"Grunt1");
		__this.Add((Il2CppObject *)"Grunt2");
		__this.Add((Il2CppObject *)"Grunt3");
		__this.Add((Il2CppObject *)"Grunt4");
		__this.Add((Il2CppObject *)"Grunt5");
		__this.Add((Il2CppObject *)"Grunt6");
		__this.Add((Il2CppObject *)"Grunt7");
		__this.Add((Il2CppObject *)"Grunt8");
		__this.Add((Il2CppObject *)"Grunt9");
		__this.Add((Il2CppObject *)"Grunt10");
		__this.Add((Il2CppObject *)"Hit");
		__this.Add((Il2CppObject *)"Roar1");
		__this.Add((Il2CppObject *)"Roar2");
		__this.Add((Il2CppObject *)"DeathFall");
		__this.Add((Il2CppObject *)"DeathNoFall");
		__this.Add((Il2CppObject *)"Steam");
		__this.Add((Il2CppObject *)"Bite1");
		__this.Add((Il2CppObject *)"Bite2");
		__this.Add((Il2CppObject *)"Laugh1");
		__this.Add((Il2CppObject *)"Laugh2");
		__this.Add((Il2CppObject *)"Huff1");
		__this.Add((Il2CppObject *)"Huff2");
		__this.Add((Il2CppObject *)"Huff3");
		__this.Add((Il2CppObject *)"Huff4");
		__this.Add((Il2CppObject *)"Huff5");
		__this.Add((Il2CppObject *)"Huff6");
		__this.Add((Il2CppObject *)"TitanJump");
		__this.Add((Il2CppObject *)"RockPickup");
		__this.Add((Il2CppObject *)"RockThrow1");
		__this.Add((Il2CppObject *)"RockThrow2");
		__this.Add((Il2CppObject *)"Decapitate");
		CustomLogicTitanSoundEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Footstep1_g____getter_2_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546caa == false) {
			Il2CppMethodInitialized_07546caa = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Footstep1;
		}
		return *(object*)(typeof(TitanSounds)).static_fields;
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Footstep2_g____getter_3_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cab == false) {
			Il2CppMethodInitialized_07546cab = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Footstep2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep3>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Footstep3_g____getter_4_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cac == false) {
			Il2CppMethodInitialized_07546cac = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Footstep3;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing1>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Swing1_g____getter_5_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cad == false) {
			Il2CppMethodInitialized_07546cad = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Swing1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing2>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Swing2_g____getter_6_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cae == false) {
			Il2CppMethodInitialized_07546cae = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Swing2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Swing3>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Swing3_g____getter_7_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546caf == false) {
			Il2CppMethodInitialized_07546caf = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Swing3;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt1>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt1_g____getter_8_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb0 == false) {
			Il2CppMethodInitialized_07546cb0 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt2>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt2_g____getter_9_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb1 == false) {
			Il2CppMethodInitialized_07546cb1 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt3>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt3_g____getter_10_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb2 == false) {
			Il2CppMethodInitialized_07546cb2 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt3;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt4>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt4_g____getter_11_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb3 == false) {
			Il2CppMethodInitialized_07546cb3 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt4;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt5>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt5_g____getter_12_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb4 == false) {
			Il2CppMethodInitialized_07546cb4 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt5;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt6>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt6_g____getter_13_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb5 == false) {
			Il2CppMethodInitialized_07546cb5 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt6;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt7>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt7_g____getter_14_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb6 == false) {
			Il2CppMethodInitialized_07546cb6 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt7;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hurt8>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Hurt8_g____getter_15_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb7 == false) {
			Il2CppMethodInitialized_07546cb7 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hurt8;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt1>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt1_g____getter_16_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb8 == false) {
			Il2CppMethodInitialized_07546cb8 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt2>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt2_g____getter_17_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cb9 == false) {
			Il2CppMethodInitialized_07546cb9 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt3>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt3_g____getter_18_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cba == false) {
			Il2CppMethodInitialized_07546cba = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt3;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt4>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt4_g____getter_19_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cbb == false) {
			Il2CppMethodInitialized_07546cbb = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt4;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt5>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt5_g____getter_20_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cbc == false) {
			Il2CppMethodInitialized_07546cbc = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt5;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt6>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt6_g____getter_21_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cbd == false) {
			Il2CppMethodInitialized_07546cbd = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt6;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt7>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt7_g____getter_22_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cbe == false) {
			Il2CppMethodInitialized_07546cbe = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt7;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt8>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt8_g____getter_23_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cbf == false) {
			Il2CppMethodInitialized_07546cbf = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt8;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt9>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt9_g____getter_24_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc0 == false) {
			Il2CppMethodInitialized_07546cc0 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt9;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Grunt10>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__Grunt10_g____getter_25_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc1 == false) {
			Il2CppMethodInitialized_07546cc1 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Grunt10;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Hit>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__Hit_g____getter_26_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc2 == false) {
			Il2CppMethodInitialized_07546cc2 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Hit;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar1>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__Roar1_g____getter_27_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc3 == false) {
			Il2CppMethodInitialized_07546cc3 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Roar1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 200);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Roar2>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__Roar2_g____getter_28_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc4 == false) {
			Il2CppMethodInitialized_07546cc4 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Roar2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathFall>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__DeathFall_g____getter_29_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc5 == false) {
			Il2CppMethodInitialized_07546cc5 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.DeathFall;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__DeathNoFall>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__DeathNoFall_g____getter_30_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc6 == false) {
			Il2CppMethodInitialized_07546cc6 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.DeathNoFall;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xe0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Steam>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__Steam_g____getter_31_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc7 == false) {
			Il2CppMethodInitialized_07546cc7 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Steam;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xe8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite1>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__Bite1_g____getter_32_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc8 == false) {
			Il2CppMethodInitialized_07546cc8 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Bite1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xf0);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Bite2>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__Bite2_g____getter_33_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cc9 == false) {
			Il2CppMethodInitialized_07546cc9 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Bite2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0xf8);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh1>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__Laugh1_g____getter_34_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cca == false) {
			Il2CppMethodInitialized_07546cca = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Laugh1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x100);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Laugh2>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__Laugh2_g____getter_35_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ccb == false) {
			Il2CppMethodInitialized_07546ccb = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Laugh2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x108);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff1>g____getter|36_0: clean
	private static object Bindings____CreatePropertyBinding__Huff1_g____getter_36_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ccc == false) {
			Il2CppMethodInitialized_07546ccc = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x110);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff2>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__Huff2_g____getter_37_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ccd == false) {
			Il2CppMethodInitialized_07546ccd = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x118);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff3>g____getter|38_0: clean
	private static object Bindings____CreatePropertyBinding__Huff3_g____getter_38_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cce == false) {
			Il2CppMethodInitialized_07546cce = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff3;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x120);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff4>g____getter|39_0: clean
	private static object Bindings____CreatePropertyBinding__Huff4_g____getter_39_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ccf == false) {
			Il2CppMethodInitialized_07546ccf = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff4;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x128);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff5>g____getter|40_0: clean
	private static object Bindings____CreatePropertyBinding__Huff5_g____getter_40_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd0 == false) {
			Il2CppMethodInitialized_07546cd0 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff5;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x130);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Huff6>g____getter|41_0: clean
	private static object Bindings____CreatePropertyBinding__Huff6_g____getter_41_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd1 == false) {
			Il2CppMethodInitialized_07546cd1 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Huff6;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x138);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__TitanJump>g____getter|42_0: clean
	private static object Bindings____CreatePropertyBinding__TitanJump_g____getter_42_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd2 == false) {
			Il2CppMethodInitialized_07546cd2 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.TitanJump;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x140);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockPickup>g____getter|43_0: clean
	private static object Bindings____CreatePropertyBinding__RockPickup_g____getter_43_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd3 == false) {
			Il2CppMethodInitialized_07546cd3 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.RockPickup;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x148);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow1>g____getter|44_0: clean
	private static object Bindings____CreatePropertyBinding__RockThrow1_g____getter_44_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd4 == false) {
			Il2CppMethodInitialized_07546cd4 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.RockThrow1;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x150);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__RockThrow2>g____getter|45_0: clean
	private static object Bindings____CreatePropertyBinding__RockThrow2_g____getter_45_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd5 == false) {
			Il2CppMethodInitialized_07546cd5 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.RockThrow2;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x158);
	}

	// CustomLogic.CustomLogicTitanSoundEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__Decapitate_g____getter_46_0(CustomLogicTitanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd6 == false) {
			Il2CppMethodInitialized_07546cd6 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TitanSounds.Decapitate;
		}
		return *(object*)((long)(typeof(TitanSounds)).static_fields + 0x160);
	}
}
