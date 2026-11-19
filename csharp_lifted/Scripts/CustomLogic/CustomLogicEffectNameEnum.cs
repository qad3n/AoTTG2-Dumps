// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicEffectNameEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicEffectNameEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000502")]
[CompilerGenerated]
internal class CustomLogicEffectNameEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000503")]
	public static class Factory
	{
		[Token(Token = "0x600284B")]
		[Address(RVA = "0x595E5A0", Offset = "0x595D5A0", VA = "0x595E5A0")]
		public static CustomLogicEffectNameEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicEffectNameEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicEffectNameEnum();
			return (CustomLogicEffectNameEnum)__this;
		}
	}

	[Token(Token = "0x2000504")]
	public static class Bindings
	{
		[Token(Token = "0x40017C7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600284C")]
		[Address(RVA = "0x595E6C0", Offset = "0x595D6C0", VA = "0x595E6C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicEffectNameEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x60a7e7f0) {
				if (uVar2 < 0x1ddfac48) {
					if (uVar2 < 0x18dfa469) {
						if (uVar2 < 0x9b9ed3e) {
							if (uVar2 == 0x6b9e884) {
								bVar1 = (name == "TitanDie1");
								if (bVar1) {
									pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__TitanDie1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x9b9ed3d) {
								bVar1 = (name == "TitanDie2");
								if (bVar1) {
									pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__TitanDie2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x12df9af6) {
							bVar1 = (name == "Boom8");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom8();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x18dfa468) {
							bVar1 = (name == "Boom2");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1bdfa922) {
						if (uVar2 == 0x19dfa5fb) {
							bVar1 = (name == "Boom3");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom3();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1bdfa921) {
							bVar1 = (name == "Boom1");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x1cdfaab4) {
						bVar1 = (name == "Boom6");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom6();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1ddfac47) {
						bVar1 = (name == "Boom7");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom7();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x397d6640) {
					if (uVar2 < 0x1fdfaf6e) {
						if (uVar2 == 0x1edfadda) {
							bVar1 = (name == "Boom4");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom4();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1fdfaf6d) {
							bVar1 = (name == "Boom5");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Boom5();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2679fe4b) {
						bVar1 = (name == "ColossalRockSpawn");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__ColossalRockSpawn();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x397d663f) {
						bVar1 = (name == "ColossalKick");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__ColossalKick();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5fa7e65d) {
					if (uVar2 == 0x578d99cd) {
						bVar1 = (name == "CriticalHit");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__CriticalHit();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5fa7e65c) {
						bVar1 = (name == "Splash2");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Splash2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x6083d558) {
					bVar1 = (name == "GasBurst");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__GasBurst();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x60a7e7ef) {
					bVar1 = (name == "Splash3");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Splash3();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9f073bd5) {
				if (uVar2 < 0x7b585c35) {
					if (uVar2 < 0x62cdd0d7) {
						if (uVar2 == 0x62a7eb15) {
							bVar1 = (name == "Splash1");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Splash1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x62cdd0d6) {
							bVar1 = (name == "ShifterThunder");
							if (bVar1) {
								pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__ShifterThunder();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x76cd9138) {
						bVar1 = (name == "ColossalSpawn");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__ColossalSpawn();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b585c34) {
						bVar1 = (name == "TitanSpawn");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__TitanSpawn();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x8d3bb75c) {
					if (uVar2 == 0x81cfe633) {
						bVar1 = (name == "TitanBite");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__TitanBite();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8d3bb75b) {
						bVar1 = (name == "GroundShatter");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__GroundShatter();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x99c5e30c) {
					bVar1 = (name == "BladeThrowHit");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__BladeThrowHit();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9f073bd4) {
					bVar1 = (name == "PunchHit");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__PunchHit();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xcb990167) {
				if (uVar2 < 0xb215e923) {
					if (uVar2 == 0xb115e78f) {
						bVar1 = (name == "Blood2");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Blood2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb215e922) {
						bVar1 = (name == "Blood1");
						if (bVar1) {
							pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Blood1();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xb5730240) {
					bVar1 = (name == "WaterWake");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__WaterWake();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xcb990166) {
					bVar1 = (name == "GunExplode");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__GunExplode();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xefe8e987) {
				if (uVar2 == 0xdd85abcf) {
					bVar1 = (name == "ThunderspearExplode");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__ThunderspearExplode();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xefe8e986) {
					bVar1 = (name == "Splash");
					if (bVar1) {
						pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__Splash();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf58c6b62) {
				bVar1 = (name == "SingleSplash");
				if (bVar1) {
					pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__SingleSplash();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf888646f) {
				bVar1 = (name == "APGTrail");
				if (bVar1) {
					pCVar3 = CustomLogicEffectNameEnum.Bindings.__CreatePropertyBinding__APGTrail();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicEffectNameEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600284D")]
		[Address(RVA = "0x595F2E0", Offset = "0x595E2E0", VA = "0x595F2E0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__ThunderspearExplode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ThunderspearExplode): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ThunderspearExplode_g);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600284E")]
		[Address(RVA = "0x595F380", Offset = "0x595E380", VA = "0x595F380")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__GasBurst()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GasBurst): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600284F")]
		[Address(RVA = "0x595F420", Offset = "0x595E420", VA = "0x595F420")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__GroundShatter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GroundShatter): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GroundShatter_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002850")]
		[Address(RVA = "0x595F4C0", Offset = "0x595E4C0", VA = "0x595F4C0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Blood1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood1): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood1_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002851")]
		[Address(RVA = "0x595F560", Offset = "0x595E560", VA = "0x595F560")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Blood2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Blood2): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Blood2_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002852")]
		[Address(RVA = "0x595F600", Offset = "0x595E600", VA = "0x595F600")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__PunchHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__PunchHit): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__PunchHit_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002853")]
		[Address(RVA = "0x595F6A0", Offset = "0x595E6A0", VA = "0x595F6A0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__GunExplode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__GunExplode): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002854")]
		[Address(RVA = "0x595F740", Offset = "0x595E740", VA = "0x595F740")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__CriticalHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__CriticalHit): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__CriticalHit_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002855")]
		[Address(RVA = "0x595F7E0", Offset = "0x595E7E0", VA = "0x595F7E0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__TitanSpawn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanSpawn): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanSpawn_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002856")]
		[Address(RVA = "0x595F880", Offset = "0x595E880", VA = "0x595F880")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__TitanDie1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie1): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie1_g____getter_11);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002857")]
		[Address(RVA = "0x595F920", Offset = "0x595E920", VA = "0x595F920")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__TitanDie2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanDie2): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanDie2_g____getter_12);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002858")]
		[Address(RVA = "0x595F9C0", Offset = "0x595E9C0", VA = "0x595F9C0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom1): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom1_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002859")]
		[Address(RVA = "0x595FA60", Offset = "0x595EA60", VA = "0x595FA60")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom2): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom2_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285A")]
		[Address(RVA = "0x595FB00", Offset = "0x595EB00", VA = "0x595FB00")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom3): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom3_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285B")]
		[Address(RVA = "0x595FBA0", Offset = "0x595EBA0", VA = "0x595FBA0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom4): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom4_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285C")]
		[Address(RVA = "0x595FC40", Offset = "0x595EC40", VA = "0x595FC40")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom5): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom5_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285D")]
		[Address(RVA = "0x595FCE0", Offset = "0x595ECE0", VA = "0x595FCE0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom6): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom6_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285E")]
		[Address(RVA = "0x595FD80", Offset = "0x595ED80", VA = "0x595FD80")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom7): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom7_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600285F")]
		[Address(RVA = "0x595FE20", Offset = "0x595EE20", VA = "0x595FE20")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Boom8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Boom8): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Boom8_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002860")]
		[Address(RVA = "0x595FEC0", Offset = "0x595EEC0", VA = "0x595FEC0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Splash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash_g____getter_21_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002861")]
		[Address(RVA = "0x595FF60", Offset = "0x595EF60", VA = "0x595FF60")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__TitanBite()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__TitanBite): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__TitanBite_g____getter_22);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002862")]
		[Address(RVA = "0x5960000", Offset = "0x595F000", VA = "0x5960000")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__ShifterThunder()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ShifterThunder): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ShifterThunder_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002863")]
		[Address(RVA = "0x59600A0", Offset = "0x595F0A0", VA = "0x59600A0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__BladeThrowHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__BladeThrowHit): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__BladeThrowHit_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002864")]
		[Address(RVA = "0x5960140", Offset = "0x595F140", VA = "0x5960140")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__APGTrail()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__APGTrail): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__APGTrail_g____getter_25);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002865")]
		[Address(RVA = "0x59601E0", Offset = "0x595F1E0", VA = "0x59601E0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__SingleSplash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__SingleSplash): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__SingleSplash_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002866")]
		[Address(RVA = "0x5960280", Offset = "0x595F280", VA = "0x5960280")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Splash1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash1): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash1_g____getter_27_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002867")]
		[Address(RVA = "0x5960320", Offset = "0x595F320", VA = "0x5960320")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Splash2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash2): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash2_g____getter_28_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002868")]
		[Address(RVA = "0x59603C0", Offset = "0x595F3C0", VA = "0x59603C0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__Splash3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__Splash3): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__Splash3_g____getter_29_0);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002869")]
		[Address(RVA = "0x5960460", Offset = "0x595F460", VA = "0x5960460")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__WaterWake()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__WaterWake): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__WaterWake_g____getter_30);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600286A")]
		[Address(RVA = "0x5960500", Offset = "0x595F500", VA = "0x5960500")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__ColossalSpawn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalSpawn): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalSpawn_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600286B")]
		[Address(RVA = "0x59605A0", Offset = "0x595F5A0", VA = "0x59605A0")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__ColossalRockSpawn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalRockSpawn): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalRockSpawn_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600286C")]
		[Address(RVA = "0x5960640", Offset = "0x595F640", VA = "0x5960640")]
		public static CLPropertyBinding<CustomLogicEffectNameEnum> __CreatePropertyBinding__ColossalKick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum.Bindings$$__CreatePropertyBinding__ColossalKick): 2 lines keep C-only constructs
			Func<CustomLogicEffectNameEnum, object> __this;
			CLPropertyBinding<CustomLogicEffectNameEnum> __this_00;

			__this = new Func<CustomLogicEffectNameEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicEffectNameEnum_Bindings___CreatePropertyBinding__ColossalKick_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicEffectNameEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700055E")]
	public static string ThunderspearExplode
	{
		[Token(Token = "0x6002827")]
		[Address(RVA = "0x595D740", Offset = "0x595C740", VA = "0x595D740")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ThunderspearExplode): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546333 == false) {
				Il2CppMethodInitialized_07546333 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.ThunderspearExplode;
			}
			return *(String*)(typeof(EffectPrefabs)).static_fields;
		}
	}

	[Token(Token = "0x1700055F")]
	public static string GasBurst
	{
		[Token(Token = "0x6002828")]
		[Address(RVA = "0x595D7B0", Offset = "0x595C7B0", VA = "0x595D7B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_GasBurst): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546334 == false) {
				Il2CppMethodInitialized_07546334 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.GasBurst;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000560")]
	public static string GroundShatter
	{
		[Token(Token = "0x6002829")]
		[Address(RVA = "0x595D820", Offset = "0x595C820", VA = "0x595D820")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_GroundShatter): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546335 == false) {
				Il2CppMethodInitialized_07546335 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.GroundShatter;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000561")]
	public static string Blood1
	{
		[Token(Token = "0x600282A")]
		[Address(RVA = "0x595D890", Offset = "0x595C890", VA = "0x595D890")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Blood1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546336 == false) {
				Il2CppMethodInitialized_07546336 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Blood1;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000562")]
	public static string Blood2
	{
		[Token(Token = "0x600282B")]
		[Address(RVA = "0x595D900", Offset = "0x595C900", VA = "0x595D900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Blood2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546337 == false) {
				Il2CppMethodInitialized_07546337 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Blood2;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000563")]
	public static string PunchHit
	{
		[Token(Token = "0x600282C")]
		[Address(RVA = "0x595D970", Offset = "0x595C970", VA = "0x595D970")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_PunchHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546338 == false) {
				Il2CppMethodInitialized_07546338 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.PunchHit;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000564")]
	public static string GunExplode
	{
		[Token(Token = "0x600282D")]
		[Address(RVA = "0x595D9E0", Offset = "0x595C9E0", VA = "0x595D9E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_GunExplode): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546339 == false) {
				Il2CppMethodInitialized_07546339 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.GunExplode;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x17000565")]
	public static string CriticalHit
	{
		[Token(Token = "0x600282E")]
		[Address(RVA = "0x595DA50", Offset = "0x595CA50", VA = "0x595DA50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_CriticalHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633a == false) {
				Il2CppMethodInitialized_0754633a = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.CriticalHit;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x17000566")]
	public static string TitanSpawn
	{
		[Token(Token = "0x600282F")]
		[Address(RVA = "0x595DAC0", Offset = "0x595CAC0", VA = "0x595DAC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_TitanSpawn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633b == false) {
				Il2CppMethodInitialized_0754633b = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.TitanSpawn;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x17000567")]
	public static string TitanDie1
	{
		[Token(Token = "0x6002830")]
		[Address(RVA = "0x595DB30", Offset = "0x595CB30", VA = "0x595DB30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633c == false) {
				Il2CppMethodInitialized_0754633c = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.TitanDie1;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x17000568")]
	public static string TitanDie2
	{
		[Token(Token = "0x6002831")]
		[Address(RVA = "0x595DBA0", Offset = "0x595CBA0", VA = "0x595DBA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_TitanDie2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633d == false) {
				Il2CppMethodInitialized_0754633d = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.TitanDie2;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x17000569")]
	public static string Boom1
	{
		[Token(Token = "0x6002832")]
		[Address(RVA = "0x595DC10", Offset = "0x595CC10", VA = "0x595DC10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633e == false) {
				Il2CppMethodInitialized_0754633e = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom1;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x1700056A")]
	public static string Boom2
	{
		[Token(Token = "0x6002833")]
		[Address(RVA = "0x595DC80", Offset = "0x595CC80", VA = "0x595DC80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754633f == false) {
				Il2CppMethodInitialized_0754633f = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom2;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x1700056B")]
	public static string Boom3
	{
		[Token(Token = "0x6002834")]
		[Address(RVA = "0x595DCF0", Offset = "0x595CCF0", VA = "0x595DCF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546340 == false) {
				Il2CppMethodInitialized_07546340 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom3;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x1700056C")]
	public static string Boom4
	{
		[Token(Token = "0x6002835")]
		[Address(RVA = "0x595DD60", Offset = "0x595CD60", VA = "0x595DD60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546341 == false) {
				Il2CppMethodInitialized_07546341 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom4;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x1700056D")]
	public static string Boom5
	{
		[Token(Token = "0x6002836")]
		[Address(RVA = "0x595DDD0", Offset = "0x595CDD0", VA = "0x595DDD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546342 == false) {
				Il2CppMethodInitialized_07546342 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom5;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x1700056E")]
	public static string Boom6
	{
		[Token(Token = "0x6002837")]
		[Address(RVA = "0x595DE40", Offset = "0x595CE40", VA = "0x595DE40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom6): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546343 == false) {
				Il2CppMethodInitialized_07546343 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom6;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x1700056F")]
	public static string Boom7
	{
		[Token(Token = "0x6002838")]
		[Address(RVA = "0x595DEB0", Offset = "0x595CEB0", VA = "0x595DEB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom7): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546344 == false) {
				Il2CppMethodInitialized_07546344 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom7;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x17000570")]
	public static string Boom8
	{
		[Token(Token = "0x6002839")]
		[Address(RVA = "0x595DF20", Offset = "0x595CF20", VA = "0x595DF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Boom8): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546345 == false) {
				Il2CppMethodInitialized_07546345 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Boom8;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x17000571")]
	public static string Splash
	{
		[Token(Token = "0x600283A")]
		[Address(RVA = "0x595DF90", Offset = "0x595CF90", VA = "0x595DF90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Splash): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546346 == false) {
				Il2CppMethodInitialized_07546346 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Splash;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x17000572")]
	public static string TitanBite
	{
		[Token(Token = "0x600283B")]
		[Address(RVA = "0x595E000", Offset = "0x595D000", VA = "0x595E000")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_TitanBite): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546347 == false) {
				Il2CppMethodInitialized_07546347 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.TitanBite;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x17000573")]
	public static string ShifterThunder
	{
		[Token(Token = "0x600283C")]
		[Address(RVA = "0x595E070", Offset = "0x595D070", VA = "0x595E070")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ShifterThunder): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546348 == false) {
				Il2CppMethodInitialized_07546348 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.ShifterThunder;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x17000574")]
	public static string BladeThrowHit
	{
		[Token(Token = "0x600283D")]
		[Address(RVA = "0x595E0E0", Offset = "0x595D0E0", VA = "0x595E0E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_BladeThrowHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546349 == false) {
				Il2CppMethodInitialized_07546349 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.BladeThrowHit;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x17000575")]
	public static string APGTrail
	{
		[Token(Token = "0x600283E")]
		[Address(RVA = "0x595E150", Offset = "0x595D150", VA = "0x595E150")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_APGTrail): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634a == false) {
				Il2CppMethodInitialized_0754634a = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.APGTrail;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x17000576")]
	public static string SingleSplash
	{
		[Token(Token = "0x600283F")]
		[Address(RVA = "0x595E1C0", Offset = "0x595D1C0", VA = "0x595E1C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_SingleSplash): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634b == false) {
				Il2CppMethodInitialized_0754634b = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.SingleSplash;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x17000577")]
	public static string Splash1
	{
		[Token(Token = "0x6002840")]
		[Address(RVA = "0x595E230", Offset = "0x595D230", VA = "0x595E230")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Splash1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634c == false) {
				Il2CppMethodInitialized_0754634c = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Splash1;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 200);
		}
	}

	[Token(Token = "0x17000578")]
	public static string Splash2
	{
		[Token(Token = "0x6002841")]
		[Address(RVA = "0x595E2A0", Offset = "0x595D2A0", VA = "0x595E2A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Splash2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634d == false) {
				Il2CppMethodInitialized_0754634d = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Splash2;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x17000579")]
	public static string Splash3
	{
		[Token(Token = "0x6002842")]
		[Address(RVA = "0x595E310", Offset = "0x595D310", VA = "0x595E310")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_Splash3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634e == false) {
				Il2CppMethodInitialized_0754634e = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.Splash3;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x1700057A")]
	public static string WaterWake
	{
		[Token(Token = "0x6002843")]
		[Address(RVA = "0x595E380", Offset = "0x595D380", VA = "0x595E380")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_WaterWake): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754634f == false) {
				Il2CppMethodInitialized_0754634f = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.WaterWake;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xe0);
		}
	}

	[Token(Token = "0x1700057B")]
	public static string ColossalSpawn
	{
		[Token(Token = "0x6002844")]
		[Address(RVA = "0x595E3F0", Offset = "0x595D3F0", VA = "0x595E3F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ColossalSpawn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546350 == false) {
				Il2CppMethodInitialized_07546350 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.ColossalSpawn;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xe8);
		}
	}

	[Token(Token = "0x1700057C")]
	public static string ColossalRockSpawn
	{
		[Token(Token = "0x6002845")]
		[Address(RVA = "0x595E460", Offset = "0x595D460", VA = "0x595E460")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ColossalRockSpawn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546351 == false) {
				Il2CppMethodInitialized_07546351 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.ColossalRockSpawn;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xf0);
		}
	}

	[Token(Token = "0x1700057D")]
	public static string ColossalKick
	{
		[Token(Token = "0x6002846")]
		[Address(RVA = "0x595E4D0", Offset = "0x595D4D0", VA = "0x595E4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ColossalKick): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546352 == false) {
				Il2CppMethodInitialized_07546352 = true;
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return EffectPrefabs.ColossalKick;
			}
			return *(String*)((long)(typeof(EffectPrefabs)).static_fields + 0xf8);
		}
	}

	[Token(Token = "0x1700057E")]
	public override string ClassName
	{
		[Token(Token = "0x6002847")]
		[Address(RVA = "0x595E540", Offset = "0x595D540", VA = "0x595E540", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_ClassName): clean
			return "EffectNameEnum";
		}
	}

	[Token(Token = "0x1700057F")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002848")]
		[Address(RVA = "0x595E570", Offset = "0x595D570", VA = "0x595E570", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000580")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002849")]
		[Address(RVA = "0x595E580", Offset = "0x595D580", VA = "0x595E580", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000581")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600284A")]
		[Address(RVA = "0x595E590", Offset = "0x595D590", VA = "0x595E590", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x595D6D0", Offset = "0x595C6D0", VA = "0x595D6D0")]
	public CustomLogicEffectNameEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c (CustomLogic.CustomLogicEffectNameEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546332 == false) {
			Il2CppMethodInitialized_07546332 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicEffectNameEnum.c.

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ThunderspearExplode");
		__this.Add((Il2CppObject *)"GasBurst");
		__this.Add((Il2CppObject *)"GroundShatter");
		__this.Add((Il2CppObject *)"Blood1");
		__this.Add((Il2CppObject *)"Blood2");
		__this.Add((Il2CppObject *)"PunchHit");
		__this.Add((Il2CppObject *)"GunExplode");
		__this.Add((Il2CppObject *)"CriticalHit");
		__this.Add((Il2CppObject *)"TitanSpawn");
		__this.Add((Il2CppObject *)"TitanDie1");
		__this.Add((Il2CppObject *)"TitanDie2");
		__this.Add((Il2CppObject *)"Boom1");
		__this.Add((Il2CppObject *)"Boom2");
		__this.Add((Il2CppObject *)"Boom3");
		__this.Add((Il2CppObject *)"Boom4");
		__this.Add((Il2CppObject *)"Boom5");
		__this.Add((Il2CppObject *)"Boom6");
		__this.Add((Il2CppObject *)"Boom7");
		__this.Add((Il2CppObject *)"Boom8");
		__this.Add((Il2CppObject *)"Splash");
		__this.Add((Il2CppObject *)"TitanBite");
		__this.Add((Il2CppObject *)"ShifterThunder");
		__this.Add((Il2CppObject *)"BladeThrowHit");
		__this.Add((Il2CppObject *)"APGTrail");
		__this.Add((Il2CppObject *)"SingleSplash");
		__this.Add((Il2CppObject *)"Splash1");
		__this.Add((Il2CppObject *)"Splash2");
		__this.Add((Il2CppObject *)"Splash3");
		__this.Add((Il2CppObject *)"WaterWake");
		__this.Add((Il2CppObject *)"ColossalSpawn");
		__this.Add((Il2CppObject *)"ColossalRockSpawn");
		__this.Add((Il2CppObject *)"ColossalKick");
		CustomLogicEffectNameEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ThunderspearExplode>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ThunderspearExplode_g____getter_2_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546589 == false) {
			Il2CppMethodInitialized_07546589 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.ThunderspearExplode;
		}
		return *(object*)(typeof(EffectPrefabs)).static_fields;
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__GasBurst_g____getter_3_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658a == false) {
			Il2CppMethodInitialized_0754658a = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.GasBurst;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 8);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GroundShatter>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__GroundShatter_g____getter_4_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658b == false) {
			Il2CppMethodInitialized_0754658b = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.GroundShatter;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood1>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Blood1_g____getter_5_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658c == false) {
			Il2CppMethodInitialized_0754658c = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Blood1;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Blood2>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Blood2_g____getter_6_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658d == false) {
			Il2CppMethodInitialized_0754658d = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Blood2;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__PunchHit>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__PunchHit_g____getter_7_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658e == false) {
			Il2CppMethodInitialized_0754658e = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.PunchHit;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__GunExplode_g____getter_8_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754658f == false) {
			Il2CppMethodInitialized_0754658f = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.GunExplode;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__CriticalHit>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__CriticalHit_g____getter_9_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546590 == false) {
			Il2CppMethodInitialized_07546590 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.CriticalHit;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanSpawn>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__TitanSpawn_g____getter_10_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546591 == false) {
			Il2CppMethodInitialized_07546591 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.TitanSpawn;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie1>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__TitanDie1_g____getter_11_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546592 == false) {
			Il2CppMethodInitialized_07546592 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.TitanDie1;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanDie2>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__TitanDie2_g____getter_12_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546593 == false) {
			Il2CppMethodInitialized_07546593 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.TitanDie2;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom1>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Boom1_g____getter_13_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546594 == false) {
			Il2CppMethodInitialized_07546594 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom1;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom2>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Boom2_g____getter_14_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546595 == false) {
			Il2CppMethodInitialized_07546595 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom2;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom3>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Boom3_g____getter_15_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546596 == false) {
			Il2CppMethodInitialized_07546596 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom3;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom4>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Boom4_g____getter_16_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546597 == false) {
			Il2CppMethodInitialized_07546597 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom4;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom5>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Boom5_g____getter_17_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546598 == false) {
			Il2CppMethodInitialized_07546598 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom5;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom6>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Boom6_g____getter_18_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546599 == false) {
			Il2CppMethodInitialized_07546599 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom6;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom7>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Boom7_g____getter_19_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659a == false) {
			Il2CppMethodInitialized_0754659a = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom7;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Boom8>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Boom8_g____getter_20_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659b == false) {
			Il2CppMethodInitialized_0754659b = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Boom8;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Splash_g____getter_21_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659c == false) {
			Il2CppMethodInitialized_0754659c = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Splash;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__TitanBite>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__TitanBite_g____getter_22_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659d == false) {
			Il2CppMethodInitialized_0754659d = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.TitanBite;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ShifterThunder>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__ShifterThunder_g____getter_23_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659e == false) {
			Il2CppMethodInitialized_0754659e = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.ShifterThunder;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrowHit>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__BladeThrowHit_g____getter_24_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754659f == false) {
			Il2CppMethodInitialized_0754659f = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.BladeThrowHit;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__APGTrail>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__APGTrail_g____getter_25_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a0 == false) {
			Il2CppMethodInitialized_075465a0 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.APGTrail;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__SingleSplash>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__SingleSplash_g____getter_26_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a1 == false) {
			Il2CppMethodInitialized_075465a1 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.SingleSplash;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash1>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__Splash1_g____getter_27_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a2 == false) {
			Il2CppMethodInitialized_075465a2 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Splash1;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 200);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash2>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__Splash2_g____getter_28_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a3 == false) {
			Il2CppMethodInitialized_075465a3 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Splash2;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__Splash3>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__Splash3_g____getter_29_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a4 == false) {
			Il2CppMethodInitialized_075465a4 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.Splash3;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__WaterWake>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__WaterWake_g____getter_30_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a5 == false) {
			Il2CppMethodInitialized_075465a5 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.WaterWake;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xe0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalSpawn>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__ColossalSpawn_g____getter_31_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a6 == false) {
			Il2CppMethodInitialized_075465a6 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.ColossalSpawn;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xe8);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalRockSpawn>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__ColossalRockSpawn_g____getter_32_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a7 == false) {
			Il2CppMethodInitialized_075465a7 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.ColossalRockSpawn;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xf0);
	}

	// CustomLogic.CustomLogicEffectNameEnum.Bindings$$<__CreatePropertyBinding__ColossalKick>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__ColossalKick_g____getter_33_0(CustomLogicEffectNameEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a8 == false) {
			Il2CppMethodInitialized_075465a8 = true;
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)EffectPrefabs.ColossalKick;
		}
		return *(object*)((long)(typeof(EffectPrefabs)).static_fields + 0xf8);
	}
}
