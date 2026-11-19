// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputTitanEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputTitanEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200053C")]
[CompilerGenerated]
internal class CustomLogicInputTitanEnum : BuiltinClassInstance
{
	[Token(Token = "0x200053D")]
	public static class Factory
	{
		[Token(Token = "0x6002CDC")]
		[Address(RVA = "0x598D7F0", Offset = "0x598C7F0", VA = "0x598D7F0")]
		public static CustomLogicInputTitanEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputTitanEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputTitanEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputTitanEnum();
			return __this;
		}
	}

	[Token(Token = "0x200053E")]
	public static class Bindings
	{
		[Token(Token = "0x4001867")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002CDD")]
		[Address(RVA = "0x598D910", Offset = "0x598C910", VA = "0x598D910")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicInputTitanEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x3a2d364f) {
				if (uVar2 < 0x1d298760) {
					if (uVar2 < 0x87de46c) {
						if (uVar2 == 0x3b80da8) {
							bVar1 = (name == "AttackGrabGround");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabGround();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x4aec3cb) {
							bVar1 = (name == "AttackSlapR");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapR();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x87de46b) {
							bVar1 = (name == "AttackPunch");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackPunch();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x12aed9d6) {
						if (uVar2 == 0xe1ef32d) {
							bVar1 = (name == "Jump");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__Jump();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x12aed9d5) {
							bVar1 = (name == "AttackSlapL");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x132daa5f) {
						bVar1 = (name == "AttackBiteR");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackBiteR();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1d29875f) {
						bVar1 = (name == "AttackSlapHighR");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapHighR();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x292dcd02) {
					if (uVar2 < 0x22ccd731) {
						if (uVar2 == 0x1f2dbd43) {
							bVar1 = (name == "AttackBiteF");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackBiteF();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x22ccd730) {
							bVar1 = (name == "Walk");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__Walk();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x28bc2bff) {
						bVar1 = (name == "Sit");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__Sit();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x292dcd01) {
						bVar1 = (name == "AttackBiteL");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackBiteL();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x3329aa02) {
					if (uVar2 == 0x2cfbaa3f) {
						bVar1 = (name == "Kick");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__Kick();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3329aa01) {
						bVar1 = (name == "AttackSlapHighL");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapHighL();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x371c1522) {
					bVar1 = (name == "AttackStomp");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackStomp();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3a2d364e) {
					bVar1 = (name == "AttackBellyFlop");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackBellyFlop();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x8304792a) {
				if (uVar2 < 0x6136bd0e) {
					if (uVar2 < 0x4f638210) {
						if (uVar2 == 0x3f31bd4c) {
							bVar1 = (name == "AttackGrabCore");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabCore();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x4f63820f) {
							bVar1 = (name == "AttackGrabBody");
							if (bVar1) {
								pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabBody();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x5aec6cb9) {
						bVar1 = (name == "AttackGrabAir");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabAir();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6136bd0d) {
						bVar1 = (name == "AttackGrabHead");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabHead();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x745f154c) {
					if (uVar2 == 0x6700754b) {
						bVar1 = (name == "AttackHitFace");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackHitFace();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x745f154b) {
						bVar1 = (name == "AttackSlapLowR");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapLowR();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x825f2b55) {
					bVar1 = (name == "AttackSlapLowL");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlapLowL();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x83047929) {
					bVar1 = (name == "CoverNape1");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__CoverNape1();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb502d8c1) {
				if (uVar2 < 0x92d2a9f2) {
					if (uVar2 == 0x838656ac) {
						bVar1 = (name == "AttackSlam");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSlam();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x92d2a9f1) {
						bVar1 = (name == "AttackSwing");
						if (bVar1) {
							pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackSwing();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9ed36c5b) {
					bVar1 = (name == "AttackGrabHigh");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabHigh();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb502d8c0) {
					bVar1 = (name == "AttackBrushChest");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackBrushChest();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe8476a12) {
				if (uVar2 == 0xc65e5944) {
					bVar1 = (name == "AttackRockThrow");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackRockThrow();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe8476a11) {
					bVar1 = (name == "AttackHitBack");
					if (bVar1) {
						pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackHitBack();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe943dc75) {
				bVar1 = (name == "Sprint");
				if (bVar1) {
					pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__Sprint();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xeda35f22) {
				bVar1 = (name == "AttackGrabAirFar");
				if (bVar1) {
					pCVar3 = CustomLogicInputTitanEnum.Bindings.__CreatePropertyBinding__AttackGrabAirFar();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputTitanEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002CDE")]
		[Address(RVA = "0x598E4D0", Offset = "0x598D4D0", VA = "0x598E4D0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__Kick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Kick): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CDF")]
		[Address(RVA = "0x598E570", Offset = "0x598D570", VA = "0x598E570")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Jump): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE0")]
		[Address(RVA = "0x598E610", Offset = "0x598D610", VA = "0x598E610")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__Sit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sit): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE1")]
		[Address(RVA = "0x598E6B0", Offset = "0x598D6B0", VA = "0x598E6B0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Walk): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE2")]
		[Address(RVA = "0x598E750", Offset = "0x598D750", VA = "0x598E750")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__Sprint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sprint): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE3")]
		[Address(RVA = "0x598E7F0", Offset = "0x598D7F0", VA = "0x598E7F0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__CoverNape1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__CoverNape1): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE4")]
		[Address(RVA = "0x598E890", Offset = "0x598D890", VA = "0x598E890")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackPunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackPunch): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE5")]
		[Address(RVA = "0x598E930", Offset = "0x598D930", VA = "0x598E930")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackBellyFlop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE6")]
		[Address(RVA = "0x598E9D0", Offset = "0x598D9D0", VA = "0x598E9D0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapL): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE7")]
		[Address(RVA = "0x598EA70", Offset = "0x598DA70", VA = "0x598EA70")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapR): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE8")]
		[Address(RVA = "0x598EB10", Offset = "0x598DB10", VA = "0x598EB10")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackRockThrow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CE9")]
		[Address(RVA = "0x598EBB0", Offset = "0x598DBB0", VA = "0x598EBB0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackBiteL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteL): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CEA")]
		[Address(RVA = "0x598EC50", Offset = "0x598DC50", VA = "0x598EC50")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackBiteF()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteF): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CEB")]
		[Address(RVA = "0x598ECF0", Offset = "0x598DCF0", VA = "0x598ECF0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackBiteR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteR): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CEC")]
		[Address(RVA = "0x598ED90", Offset = "0x598DD90", VA = "0x598ED90")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackHitFace()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitFace): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CED")]
		[Address(RVA = "0x598EE30", Offset = "0x598DE30", VA = "0x598EE30")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackHitBack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitBack): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CEE")]
		[Address(RVA = "0x598EED0", Offset = "0x598DED0", VA = "0x598EED0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlam): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CEF")]
		[Address(RVA = "0x598EF70", Offset = "0x598DF70", VA = "0x598EF70")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackStomp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackStomp): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF0")]
		[Address(RVA = "0x598F010", Offset = "0x598E010", VA = "0x598F010")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSwing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSwing): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF1")]
		[Address(RVA = "0x598F0B0", Offset = "0x598E0B0", VA = "0x598F0B0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabAirFar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFar): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF2")]
		[Address(RVA = "0x598F150", Offset = "0x598E150", VA = "0x598F150")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAir): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF3")]
		[Address(RVA = "0x598F1F0", Offset = "0x598E1F0", VA = "0x598F1F0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabBody()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabBody): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF4")]
		[Address(RVA = "0x598F290", Offset = "0x598E290", VA = "0x598F290")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabCore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabCore): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF5")]
		[Address(RVA = "0x598F330", Offset = "0x598E330", VA = "0x598F330")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabGround()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabGround): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF6")]
		[Address(RVA = "0x598F3D0", Offset = "0x598E3D0", VA = "0x598F3D0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabHead()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHead): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF7")]
		[Address(RVA = "0x598F470", Offset = "0x598E470", VA = "0x598F470")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackGrabHigh()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHigh): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF8")]
		[Address(RVA = "0x598F510", Offset = "0x598E510", VA = "0x598F510")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapHighL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CF9")]
		[Address(RVA = "0x598F5B0", Offset = "0x598E5B0", VA = "0x598F5B0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapHighR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CFA")]
		[Address(RVA = "0x598F650", Offset = "0x598E650", VA = "0x598F650")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapLowL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CFB")]
		[Address(RVA = "0x598F6F0", Offset = "0x598E6F0", VA = "0x598F6F0")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackSlapLowR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CFC")]
		[Address(RVA = "0x598F790", Offset = "0x598E790", VA = "0x598F790")]
		public static CLPropertyBinding<CustomLogicInputTitanEnum> __CreatePropertyBinding__AttackBrushChest()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBrushChest): 2 lines keep C-only constructs
			Func<CustomLogicInputTitanEnum, object> __this;
			CLPropertyBinding<CustomLogicInputTitanEnum> __this_00;

			__this = new Func<CustomLogicInputTitanEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicInputTitanEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001848")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string KickValue;

	[Token(Token = "0x4001849")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string JumpValue;

	[Token(Token = "0x400184A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SitValue;

	[Token(Token = "0x400184B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string WalkValue;

	[Token(Token = "0x400184C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string SprintValue;

	[Token(Token = "0x400184D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string CoverNape1Value;

	[Token(Token = "0x400184E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string AttackPunchValue;

	[Token(Token = "0x400184F")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string AttackBellyFlopValue;

	[Token(Token = "0x4001850")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string AttackSlapLValue;

	[Token(Token = "0x4001851")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string AttackSlapRValue;

	[Token(Token = "0x4001852")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string AttackRockThrowValue;

	[Token(Token = "0x4001853")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string AttackBiteLValue;

	[Token(Token = "0x4001854")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string AttackBiteFValue;

	[Token(Token = "0x4001855")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string AttackBiteRValue;

	[Token(Token = "0x4001856")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string AttackHitFaceValue;

	[Token(Token = "0x4001857")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string AttackHitBackValue;

	[Token(Token = "0x4001858")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string AttackSlamValue;

	[Token(Token = "0x4001859")]
	[FieldOffset(Offset = "0x88")]
	private static readonly string AttackStompValue;

	[Token(Token = "0x400185A")]
	[FieldOffset(Offset = "0x90")]
	private static readonly string AttackSwingValue;

	[Token(Token = "0x400185B")]
	[FieldOffset(Offset = "0x98")]
	private static readonly string AttackGrabAirFarValue;

	[Token(Token = "0x400185C")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly string AttackGrabAirValue;

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly string AttackGrabBodyValue;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly string AttackGrabCoreValue;

	[Token(Token = "0x400185F")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly string AttackGrabGroundValue;

	[Token(Token = "0x4001860")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly string AttackGrabHeadValue;

	[Token(Token = "0x4001861")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly string AttackGrabHighValue;

	[Token(Token = "0x4001862")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly string AttackSlapHighLValue;

	[Token(Token = "0x4001863")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly string AttackSlapHighRValue;

	[Token(Token = "0x4001864")]
	[FieldOffset(Offset = "0xE0")]
	private static readonly string AttackSlapLowLValue;

	[Token(Token = "0x4001865")]
	[FieldOffset(Offset = "0xE8")]
	private static readonly string AttackSlapLowRValue;

	[Token(Token = "0x4001866")]
	[FieldOffset(Offset = "0xF0")]
	private static readonly string AttackBrushChestValue;

	[Token(Token = "0x170006FB")]
	public static string Kick
	{
		[Token(Token = "0x6002CB8")]
		[Address(RVA = "0x598C400", Offset = "0x598B400", VA = "0x598C400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_Kick): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754676e == false) {
				Il2CppMethodInitialized_0754676e = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.KickValue;
			}
			return *(String*)(typeof(CustomLogicInputTitanEnum)).static_fields;
		}
	}

	[Token(Token = "0x170006FC")]
	public static string Jump
	{
		[Token(Token = "0x6002CB9")]
		[Address(RVA = "0x598C470", Offset = "0x598B470", VA = "0x598C470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754676f == false) {
				Il2CppMethodInitialized_0754676f = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.JumpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x170006FD")]
	public static string Sit
	{
		[Token(Token = "0x6002CBA")]
		[Address(RVA = "0x598C4E0", Offset = "0x598B4E0", VA = "0x598C4E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_Sit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546770 == false) {
				Il2CppMethodInitialized_07546770 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.SitValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170006FE")]
	public static string Walk
	{
		[Token(Token = "0x6002CBB")]
		[Address(RVA = "0x598C550", Offset = "0x598B550", VA = "0x598C550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546771 == false) {
				Il2CppMethodInitialized_07546771 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.WalkValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170006FF")]
	public static string Sprint
	{
		[Token(Token = "0x6002CBC")]
		[Address(RVA = "0x598C5C0", Offset = "0x598B5C0", VA = "0x598C5C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_Sprint): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546772 == false) {
				Il2CppMethodInitialized_07546772 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.SprintValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000700")]
	public static string CoverNape1
	{
		[Token(Token = "0x6002CBD")]
		[Address(RVA = "0x598C630", Offset = "0x598B630", VA = "0x598C630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_CoverNape1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546773 == false) {
				Il2CppMethodInitialized_07546773 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.CoverNape1Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000701")]
	public static string AttackPunch
	{
		[Token(Token = "0x6002CBE")]
		[Address(RVA = "0x598C6A0", Offset = "0x598B6A0", VA = "0x598C6A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackPunch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546774 == false) {
				Il2CppMethodInitialized_07546774 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackPunchValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x17000702")]
	public static string AttackBellyFlop
	{
		[Token(Token = "0x6002CBF")]
		[Address(RVA = "0x598C710", Offset = "0x598B710", VA = "0x598C710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackBellyFlop): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546775 == false) {
				Il2CppMethodInitialized_07546775 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackBellyFlopValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x17000703")]
	public static string AttackSlapL
	{
		[Token(Token = "0x6002CC0")]
		[Address(RVA = "0x598C780", Offset = "0x598B780", VA = "0x598C780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546776 == false) {
				Il2CppMethodInitialized_07546776 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapLValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x17000704")]
	public static string AttackSlapR
	{
		[Token(Token = "0x6002CC1")]
		[Address(RVA = "0x598C7F0", Offset = "0x598B7F0", VA = "0x598C7F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546777 == false) {
				Il2CppMethodInitialized_07546777 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapRValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x17000705")]
	public static string AttackRockThrow
	{
		[Token(Token = "0x6002CC2")]
		[Address(RVA = "0x598C860", Offset = "0x598B860", VA = "0x598C860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackRockThrow): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546778 == false) {
				Il2CppMethodInitialized_07546778 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackRockThrowValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x17000706")]
	public static string AttackBiteL
	{
		[Token(Token = "0x6002CC3")]
		[Address(RVA = "0x598C8D0", Offset = "0x598B8D0", VA = "0x598C8D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546779 == false) {
				Il2CppMethodInitialized_07546779 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackBiteLValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x17000707")]
	public static string AttackBiteF
	{
		[Token(Token = "0x6002CC4")]
		[Address(RVA = "0x598C940", Offset = "0x598B940", VA = "0x598C940")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteF): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677a == false) {
				Il2CppMethodInitialized_0754677a = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackBiteFValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x17000708")]
	public static string AttackBiteR
	{
		[Token(Token = "0x6002CC5")]
		[Address(RVA = "0x598C9B0", Offset = "0x598B9B0", VA = "0x598C9B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677b == false) {
				Il2CppMethodInitialized_0754677b = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackBiteRValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x17000709")]
	public static string AttackHitFace
	{
		[Token(Token = "0x6002CC6")]
		[Address(RVA = "0x598CA20", Offset = "0x598BA20", VA = "0x598CA20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitFace): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677c == false) {
				Il2CppMethodInitialized_0754677c = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackHitFaceValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x1700070A")]
	public static string AttackHitBack
	{
		[Token(Token = "0x6002CC7")]
		[Address(RVA = "0x598CA90", Offset = "0x598BA90", VA = "0x598CA90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitBack): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677d == false) {
				Il2CppMethodInitialized_0754677d = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackHitBackValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x1700070B")]
	public static string AttackSlam
	{
		[Token(Token = "0x6002CC8")]
		[Address(RVA = "0x598CB00", Offset = "0x598BB00", VA = "0x598CB00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlam): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677e == false) {
				Il2CppMethodInitialized_0754677e = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlamValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x1700070C")]
	public static string AttackStomp
	{
		[Token(Token = "0x6002CC9")]
		[Address(RVA = "0x598CB70", Offset = "0x598BB70", VA = "0x598CB70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackStomp): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754677f == false) {
				Il2CppMethodInitialized_0754677f = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackStompValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x1700070D")]
	public static string AttackSwing
	{
		[Token(Token = "0x6002CCA")]
		[Address(RVA = "0x598CBE0", Offset = "0x598BBE0", VA = "0x598CBE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSwing): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546780 == false) {
				Il2CppMethodInitialized_07546780 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSwingValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x1700070E")]
	public static string AttackGrabAirFar
	{
		[Token(Token = "0x6002CCB")]
		[Address(RVA = "0x598CC50", Offset = "0x598BC50", VA = "0x598CC50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAirFar): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546781 == false) {
				Il2CppMethodInitialized_07546781 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabAirFarValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x1700070F")]
	public static string AttackGrabAir
	{
		[Token(Token = "0x6002CCC")]
		[Address(RVA = "0x598CCC0", Offset = "0x598BCC0", VA = "0x598CCC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546782 == false) {
				Il2CppMethodInitialized_07546782 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabAirValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x17000710")]
	public static string AttackGrabBody
	{
		[Token(Token = "0x6002CCD")]
		[Address(RVA = "0x598CD30", Offset = "0x598BD30", VA = "0x598CD30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabBody): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546783 == false) {
				Il2CppMethodInitialized_07546783 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabBodyValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x17000711")]
	public static string AttackGrabCore
	{
		[Token(Token = "0x6002CCE")]
		[Address(RVA = "0x598CDA0", Offset = "0x598BDA0", VA = "0x598CDA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabCore): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546784 == false) {
				Il2CppMethodInitialized_07546784 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabCoreValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x17000712")]
	public static string AttackGrabGround
	{
		[Token(Token = "0x6002CCF")]
		[Address(RVA = "0x598CE10", Offset = "0x598BE10", VA = "0x598CE10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabGround): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546785 == false) {
				Il2CppMethodInitialized_07546785 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabGroundValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x17000713")]
	public static string AttackGrabHead
	{
		[Token(Token = "0x6002CD0")]
		[Address(RVA = "0x598CE80", Offset = "0x598BE80", VA = "0x598CE80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHead): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546786 == false) {
				Il2CppMethodInitialized_07546786 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabHeadValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x17000714")]
	public static string AttackGrabHigh
	{
		[Token(Token = "0x6002CD1")]
		[Address(RVA = "0x598CEF0", Offset = "0x598BEF0", VA = "0x598CEF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHigh): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546787 == false) {
				Il2CppMethodInitialized_07546787 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackGrabHighValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 200);
		}
	}

	[Token(Token = "0x17000715")]
	public static string AttackSlapHighL
	{
		[Token(Token = "0x6002CD2")]
		[Address(RVA = "0x598CF60", Offset = "0x598BF60", VA = "0x598CF60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546788 == false) {
				Il2CppMethodInitialized_07546788 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapHighLValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x17000716")]
	public static string AttackSlapHighR
	{
		[Token(Token = "0x6002CD3")]
		[Address(RVA = "0x598CFD0", Offset = "0x598BFD0", VA = "0x598CFD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546789 == false) {
				Il2CppMethodInitialized_07546789 = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapHighRValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x17000717")]
	public static string AttackSlapLowL
	{
		[Token(Token = "0x6002CD4")]
		[Address(RVA = "0x598D040", Offset = "0x598C040", VA = "0x598D040")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754678a == false) {
				Il2CppMethodInitialized_0754678a = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapLowLValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xe0);
		}
	}

	[Token(Token = "0x17000718")]
	public static string AttackSlapLowR
	{
		[Token(Token = "0x6002CD5")]
		[Address(RVA = "0x598D0B0", Offset = "0x598C0B0", VA = "0x598D0B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754678b == false) {
				Il2CppMethodInitialized_0754678b = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackSlapLowRValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xe8);
		}
	}

	[Token(Token = "0x17000719")]
	public static string AttackBrushChest
	{
		[Token(Token = "0x6002CD6")]
		[Address(RVA = "0x598D120", Offset = "0x598C120", VA = "0x598D120")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_AttackBrushChest): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754678c == false) {
				Il2CppMethodInitialized_0754678c = true;
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputTitanEnum.AttackBrushChestValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xf0);
		}
	}

	[Token(Token = "0x1700071A")]
	public override string ClassName
	{
		[Token(Token = "0x6002CD7")]
		[Address(RVA = "0x598D190", Offset = "0x598C190", VA = "0x598D190", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_ClassName): clean
			return "InputTitanEnum";
		}
	}

	[Token(Token = "0x1700071B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002CD8")]
		[Address(RVA = "0x598D1C0", Offset = "0x598C1C0", VA = "0x598D1C0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700071C")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002CD9")]
		[Address(RVA = "0x598D1D0", Offset = "0x598C1D0", VA = "0x598D1D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700071D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002CDA")]
		[Address(RVA = "0x598D1E0", Offset = "0x598C1E0", VA = "0x598D1E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002CB7")]
	[Address(RVA = "0x598C390", Offset = "0x598B390", VA = "0x598C390")]
	public CustomLogicInputTitanEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c (CustomLogic.CustomLogicInputTitanEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754676d == false) {
			Il2CppMethodInitialized_0754676d = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputTitanEnum.c.

	// CustomLogic.CustomLogicInputTitanEnum$$.cctor: clean
	static CustomLogicInputTitanEnum()
	{
		CustomLogic_CustomLogicInputTitanEnum_StaticFields pCVar1;

		CustomLogicInputTitanEnum.KickValue = "Titan/Kick";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.JumpValue = "Titan/Jump";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.SitValue = "Titan/Sit";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.WalkValue = "Titan/Walk";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.SprintValue = "Titan/Sprint";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.CoverNape1Value = "Titan/CoverNape1";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackPunchValue = "Titan/AttackPunch";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackBellyFlopValue = "Titan/AttackBellyFlop";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapLValue = "Titan/AttackSlapL";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapRValue = "Titan/AttackSlapR";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackRockThrowValue = "Titan/AttackRockThrow";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackBiteLValue = "Titan/AttackBiteL";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackBiteFValue = "Titan/AttackBiteF";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackBiteRValue = "Titan/AttackBiteR";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackHitFaceValue = "Titan/AttackHitFace";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackHitBackValue = "Titan/AttackHitBack";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlamValue = "Titan/AttackSlam";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackStompValue = "Titan/AttackStomp";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSwingValue = "Titan/AttackSwing";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabAirFarValue = "Titan/AttackGrabAirFar";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabAirValue = "Titan/AttackGrabAir";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabBodyValue = "Titan/AttackGrabBody";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabCoreValue = "Titan/AttackGrabCore";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabGroundValue = "Titan/AttackGrabGround";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabHeadValue = "Titan/AttackGrabHead";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackGrabHighValue = "Titan/AttackGrabHigh";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapHighLValue = "Titan/AttackSlapHighL";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapHighRValue = "Titan/AttackSlapHighR";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapLowLValue = "Titan/AttackSlapLowL";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackSlapLowRValue = "Titan/AttackSlapLowR";
		pCVar1 = typeof(CustomLogicInputTitanEnum).static_fields;
		pCVar1.AttackBrushChestValue = "Titan/AttackBrushChest";
		return;
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Kick");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Sit");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"Sprint");
		__this.Add((Il2CppObject *)"CoverNape1");
		__this.Add((Il2CppObject *)"AttackPunch");
		__this.Add((Il2CppObject *)"AttackBellyFlop");
		__this.Add((Il2CppObject *)"AttackSlapL");
		__this.Add((Il2CppObject *)"AttackSlapR");
		__this.Add((Il2CppObject *)"AttackRockThrow");
		__this.Add((Il2CppObject *)"AttackBiteL");
		__this.Add((Il2CppObject *)"AttackBiteF");
		__this.Add((Il2CppObject *)"AttackBiteR");
		__this.Add((Il2CppObject *)"AttackHitFace");
		__this.Add((Il2CppObject *)"AttackHitBack");
		__this.Add((Il2CppObject *)"AttackSlam");
		__this.Add((Il2CppObject *)"AttackStomp");
		__this.Add((Il2CppObject *)"AttackSwing");
		__this.Add((Il2CppObject *)"AttackGrabAirFar");
		__this.Add((Il2CppObject *)"AttackGrabAir");
		__this.Add((Il2CppObject *)"AttackGrabBody");
		__this.Add((Il2CppObject *)"AttackGrabCore");
		__this.Add((Il2CppObject *)"AttackGrabGround");
		__this.Add((Il2CppObject *)"AttackGrabHead");
		__this.Add((Il2CppObject *)"AttackGrabHigh");
		__this.Add((Il2CppObject *)"AttackSlapHighL");
		__this.Add((Il2CppObject *)"AttackSlapHighR");
		__this.Add((Il2CppObject *)"AttackSlapLowL");
		__this.Add((Il2CppObject *)"AttackSlapLowR");
		__this.Add((Il2CppObject *)"AttackBrushChest");
		CustomLogicInputTitanEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Kick_g____getter_2_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b1 == false) {
			Il2CppMethodInitialized_075467b1 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469df == false) {
			Il2CppMethodInitialized_075469df = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.KickValue;
		}
		return *(object*)(typeof(CustomLogicInputTitanEnum)).static_fields;
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_3_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b2 == false) {
			Il2CppMethodInitialized_075467b2 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e0 == false) {
			Il2CppMethodInitialized_075469e0 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.JumpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sit>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Sit_g____getter_4_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b3 == false) {
			Il2CppMethodInitialized_075467b3 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e1 == false) {
			Il2CppMethodInitialized_075469e1 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.SitValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_5_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b4 == false) {
			Il2CppMethodInitialized_075467b4 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e2 == false) {
			Il2CppMethodInitialized_075469e2 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.WalkValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sprint>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Sprint_g____getter_6_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b5 == false) {
			Il2CppMethodInitialized_075467b5 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e3 == false) {
			Il2CppMethodInitialized_075469e3 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.SprintValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__CoverNape1>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__CoverNape1_g____getter_7_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b6 == false) {
			Il2CppMethodInitialized_075467b6 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e4 == false) {
			Il2CppMethodInitialized_075469e4 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.CoverNape1Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__AttackPunch_g____getter_8_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b7 == false) {
			Il2CppMethodInitialized_075467b7 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e5 == false) {
			Il2CppMethodInitialized_075469e5 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackPunchValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b8 == false) {
			Il2CppMethodInitialized_075467b8 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e6 == false) {
			Il2CppMethodInitialized_075469e6 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackBellyFlopValue ;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapL_g____getter_10_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467b9 == false) {
			Il2CppMethodInitialized_075467b9 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e7 == false) {
			Il2CppMethodInitialized_075469e7 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapLValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapR_g____getter_11_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467ba == false) {
			Il2CppMethodInitialized_075467ba = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e8 == false) {
			Il2CppMethodInitialized_075469e8 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapRValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__AttackRockThrow_g____getter_12_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467bb == false) {
			Il2CppMethodInitialized_075467bb = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469e9 == false) {
			Il2CppMethodInitialized_075469e9 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackRockThrowValue ;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteL_g____getter_13_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467bc == false) {
			Il2CppMethodInitialized_075467bc = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ea == false) {
			Il2CppMethodInitialized_075469ea = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackBiteLValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteF_g____getter_14_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467bd == false) {
			Il2CppMethodInitialized_075467bd = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469eb == false) {
			Il2CppMethodInitialized_075469eb = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackBiteFValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteR_g____getter_15_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467be == false) {
			Il2CppMethodInitialized_075467be = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ec == false) {
			Il2CppMethodInitialized_075469ec = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackBiteRValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHitFace_g____getter_16_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467bf == false) {
			Il2CppMethodInitialized_075467bf = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ed == false) {
			Il2CppMethodInitialized_075469ed = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackHitFaceValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHitBack_g____getter_17_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c0 == false) {
			Il2CppMethodInitialized_075467c0 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ee == false) {
			Il2CppMethodInitialized_075469ee = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackHitBackValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlam_g____getter_18_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c1 == false) {
			Il2CppMethodInitialized_075467c1 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ef == false) {
			Il2CppMethodInitialized_075469ef = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlamValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__AttackStomp_g____getter_19_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c2 == false) {
			Il2CppMethodInitialized_075467c2 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f0 == false) {
			Il2CppMethodInitialized_075469f0 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackStompValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSwing_g____getter_20_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c3 == false) {
			Il2CppMethodInitialized_075467c3 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f1 == false) {
			Il2CppMethodInitialized_075469f1 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSwingValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFar>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c4 == false) {
			Il2CppMethodInitialized_075467c4 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f2 == false) {
			Il2CppMethodInitialized_075469f2 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabAirFarValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAir>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAir_g____getter_22_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c5 == false) {
			Il2CppMethodInitialized_075467c5 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f3 == false) {
			Il2CppMethodInitialized_075469f3 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabAirValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBody>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBody_g____getter_23_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c6 == false) {
			Il2CppMethodInitialized_075467c6 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f4 == false) {
			Il2CppMethodInitialized_075469f4 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabBodyValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCore>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabCore_g____getter_24_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c7 == false) {
			Il2CppMethodInitialized_075467c7 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f5 == false) {
			Il2CppMethodInitialized_075469f5 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabCoreValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGround>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabGround_g____getter_25_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c8 == false) {
			Il2CppMethodInitialized_075467c8 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f6 == false) {
			Il2CppMethodInitialized_075469f6 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabGroundValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHead>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHead_g____getter_26_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467c9 == false) {
			Il2CppMethodInitialized_075467c9 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f7 == false) {
			Il2CppMethodInitialized_075469f7 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabHeadValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHigh>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467ca == false) {
			Il2CppMethodInitialized_075467ca = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f8 == false) {
			Il2CppMethodInitialized_075469f8 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackGrabHighValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 200);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467cb == false) {
			Il2CppMethodInitialized_075467cb = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469f9 == false) {
			Il2CppMethodInitialized_075469f9 = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapHighLValue ;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467cc == false) {
			Il2CppMethodInitialized_075467cc = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469fa == false) {
			Il2CppMethodInitialized_075469fa = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapHighRValue ;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467cd == false) {
			Il2CppMethodInitialized_075467cd = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469fb == false) {
			Il2CppMethodInitialized_075469fb = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapLowLValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xe0);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467ce == false) {
			Il2CppMethodInitialized_075467ce = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469fc == false) {
			Il2CppMethodInitialized_075469fc = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackSlapLowRValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xe8);
	}

	// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChest>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushChest_g____getter_32_0(CustomLogicInputTitanEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075467cf == false) {
			Il2CppMethodInitialized_075467cf = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469fd == false) {
			Il2CppMethodInitialized_075469fd = true;
			uVar1 = (typeof(CustomLogicInputTitanEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputTitanEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputTitanEnum.AttackBrushChestValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputTitanEnum)).static_fields + 0xf0);
	}
}
