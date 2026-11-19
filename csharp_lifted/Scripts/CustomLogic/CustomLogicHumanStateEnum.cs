// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHumanStateEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHumanStateEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000527")]
[CompilerGenerated]
internal class CustomLogicHumanStateEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000528")]
	public static class Factory
	{
		[Token(Token = "0x6002B58")]
		[Address(RVA = "0x597C1E0", Offset = "0x597B1E0", VA = "0x597C1E0")]
		public static CustomLogicHumanStateEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicHumanStateEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanStateEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHumanStateEnum();
			return __this;
		}
	}

	[Token(Token = "0x2000529")]
	public static class Bindings
	{
		[Token(Token = "0x40017EA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B59")]
		[Address(RVA = "0x597C300", Offset = "0x597B300", VA = "0x597C300")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicHumanStateEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x5d992b42) {
				if (uVar2 < 0x2ea46ab7) {
					if (uVar2 < 0x1a43a2ad) {
						if (uVar2 == 0x47d8d69) {
							bVar1 = (name == "GroundDodge");
							if (bVar1) {
								pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__GroundDodge();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1a43a2ac) {
							bVar1 = (name == "Reload");
							if (bVar1) {
								pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Reload();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x21c6d85f) {
						bVar1 = (name == "Grab");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Grab();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2ea46ab6) {
						bVar1 = (name == "WallSlide");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__WallSlide();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x3d692a72) {
					if (uVar2 == 0x3cd2b931) {
						bVar1 = (name == "EmoteAction");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__EmoteAction();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3d692a71) {
						bVar1 = (name == "Die");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Die();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x45aa17b3) {
					bVar1 = (name == "Idle");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Idle();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x5d992b41) {
					bVar1 = (name == "Stun");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Stun();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb460940d) {
				if (uVar2 < 0x8ba9331e) {
					if (uVar2 == 0x8ba9331d) {
						bVar1 = (name == "Attack");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Attack();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6c198db1) {
						bVar1 = (name == "Refill");
						if (bVar1) {
							pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Refill();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8d57e66a) {
					bVar1 = (name == "Run");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Run();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb460940c) {
					bVar1 = (name == "SpecialAttack");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__SpecialAttack();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd92f4bcb) {
				if (uVar2 == 0xc7f8c02e) {
					bVar1 = (name == "AirDodge");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__AirDodge();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd92f4bca) {
					bVar1 = (name == "SpecialAction");
					if (bVar1) {
						pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__SpecialAction();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xee1682bc) {
				bVar1 = (name == "Land");
				if (bVar1) {
					pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Land();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf972e12b) {
				bVar1 = (name == "MountingHorse");
				if (bVar1) {
					pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__MountingHorse();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xffc7c086) {
				bVar1 = (name == "Slide");
				if (bVar1) {
					pCVar3 = CustomLogicHumanStateEnum.Bindings.__CreatePropertyBinding__Slide();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanStateEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002B5A")]
		[Address(RVA = "0x597C9A0", Offset = "0x597B9A0", VA = "0x597C9A0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Idle): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B5B")]
		[Address(RVA = "0x597CA40", Offset = "0x597BA40", VA = "0x597CA40")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Attack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Attack): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B5C")]
		[Address(RVA = "0x597CAE0", Offset = "0x597BAE0", VA = "0x597CAE0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__GroundDodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__GroundDodge): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B5D")]
		[Address(RVA = "0x597CB80", Offset = "0x597BB80", VA = "0x597CB80")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__AirDodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__AirDodge): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B5E")]
		[Address(RVA = "0x597CC20", Offset = "0x597BC20", VA = "0x597CC20")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Reload()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Reload): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B5F")]
		[Address(RVA = "0x597CCC0", Offset = "0x597BCC0", VA = "0x597CCC0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Refill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Refill): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B60")]
		[Address(RVA = "0x597CD60", Offset = "0x597BD60", VA = "0x597CD60")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Die()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Die): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B61")]
		[Address(RVA = "0x597CE00", Offset = "0x597BE00", VA = "0x597CE00")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Grab()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Grab): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B62")]
		[Address(RVA = "0x597CEA0", Offset = "0x597BEA0", VA = "0x597CEA0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__EmoteAction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__EmoteAction): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B63")]
		[Address(RVA = "0x597CF40", Offset = "0x597BF40", VA = "0x597CF40")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__SpecialAttack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAttack): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B64")]
		[Address(RVA = "0x597CFE0", Offset = "0x597BFE0", VA = "0x597CFE0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__SpecialAction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAction): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B65")]
		[Address(RVA = "0x597D080", Offset = "0x597C080", VA = "0x597D080")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Slide()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Slide): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B66")]
		[Address(RVA = "0x597D120", Offset = "0x597C120", VA = "0x597D120")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Run()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Run): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B67")]
		[Address(RVA = "0x597D1C0", Offset = "0x597C1C0", VA = "0x597D1C0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Land): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B68")]
		[Address(RVA = "0x597D260", Offset = "0x597C260", VA = "0x597D260")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__MountingHorse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__MountingHorse): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B69")]
		[Address(RVA = "0x597D300", Offset = "0x597C300", VA = "0x597D300")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Stun): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002B6A")]
		[Address(RVA = "0x597D3A0", Offset = "0x597C3A0", VA = "0x597D3A0")]
		public static CLPropertyBinding<CustomLogicHumanStateEnum> __CreatePropertyBinding__WallSlide()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__WallSlide): 2 lines keep C-only constructs
			Func<CustomLogicHumanStateEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanStateEnum> __this_00;

			__this = new Func<CustomLogicHumanStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18);
			__this_00 = new CLPropertyBinding<CustomLogicHumanStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x40017D9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string IdleValue;

	[Token(Token = "0x40017DA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string AttackValue;

	[Token(Token = "0x40017DB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string GroundDodgeValue;

	[Token(Token = "0x40017DC")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string AirDodgeValue;

	[Token(Token = "0x40017DD")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string ReloadValue;

	[Token(Token = "0x40017DE")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string RefillValue;

	[Token(Token = "0x40017DF")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string DieValue;

	[Token(Token = "0x40017E0")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string GrabValue;

	[Token(Token = "0x40017E1")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string EmoteActionValue;

	[Token(Token = "0x40017E2")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string SpecialAttackValue;

	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string SpecialActionValue;

	[Token(Token = "0x40017E4")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string SlideValue;

	[Token(Token = "0x40017E5")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string RunValue;

	[Token(Token = "0x40017E6")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string LandValue;

	[Token(Token = "0x40017E7")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string MountingHorseValue;

	[Token(Token = "0x40017E8")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string StunValue;

	[Token(Token = "0x40017E9")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string WallSlideValue;

	[Token(Token = "0x17000677")]
	public static string Idle
	{
		[Token(Token = "0x6002B42")]
		[Address(RVA = "0x597B500", Offset = "0x597A500", VA = "0x597B500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Idle): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754652d == false) {
				Il2CppMethodInitialized_0754652d = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.IdleValue;
			}
			return *(String*)(typeof(CustomLogicHumanStateEnum)).static_fields;
		}
	}

	[Token(Token = "0x17000678")]
	public static string Attack
	{
		[Token(Token = "0x6002B43")]
		[Address(RVA = "0x597B570", Offset = "0x597A570", VA = "0x597B570")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Attack): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754652e == false) {
				Il2CppMethodInitialized_0754652e = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.AttackValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000679")]
	public static string GroundDodge
	{
		[Token(Token = "0x6002B44")]
		[Address(RVA = "0x597B5E0", Offset = "0x597A5E0", VA = "0x597B5E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_GroundDodge): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754652f == false) {
				Il2CppMethodInitialized_0754652f = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.GroundDodgeValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x1700067A")]
	public static string AirDodge
	{
		[Token(Token = "0x6002B45")]
		[Address(RVA = "0x597B650", Offset = "0x597A650", VA = "0x597B650")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_AirDodge): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546530 == false) {
				Il2CppMethodInitialized_07546530 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.AirDodgeValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x1700067B")]
	public static string Reload
	{
		[Token(Token = "0x6002B46")]
		[Address(RVA = "0x597B6C0", Offset = "0x597A6C0", VA = "0x597B6C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Reload): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546531 == false) {
				Il2CppMethodInitialized_07546531 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.ReloadValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x1700067C")]
	public static string Refill
	{
		[Token(Token = "0x6002B47")]
		[Address(RVA = "0x597B730", Offset = "0x597A730", VA = "0x597B730")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Refill): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546532 == false) {
				Il2CppMethodInitialized_07546532 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.RefillValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x1700067D")]
	public static string Die
	{
		[Token(Token = "0x6002B48")]
		[Address(RVA = "0x597B7A0", Offset = "0x597A7A0", VA = "0x597B7A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Die): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546533 == false) {
				Il2CppMethodInitialized_07546533 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.DieValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x1700067E")]
	public static string Grab
	{
		[Token(Token = "0x6002B49")]
		[Address(RVA = "0x597B810", Offset = "0x597A810", VA = "0x597B810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Grab): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546534 == false) {
				Il2CppMethodInitialized_07546534 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.GrabValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x1700067F")]
	public static string EmoteAction
	{
		[Token(Token = "0x6002B4A")]
		[Address(RVA = "0x597B880", Offset = "0x597A880", VA = "0x597B880")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_EmoteAction): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546535 == false) {
				Il2CppMethodInitialized_07546535 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.EmoteActionValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x17000680")]
	public static string SpecialAttack
	{
		[Token(Token = "0x6002B4B")]
		[Address(RVA = "0x597B8F0", Offset = "0x597A8F0", VA = "0x597B8F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAttack): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546536 == false) {
				Il2CppMethodInitialized_07546536 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.SpecialAttackValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x17000681")]
	public static string SpecialAction
	{
		[Token(Token = "0x6002B4C")]
		[Address(RVA = "0x597B960", Offset = "0x597A960", VA = "0x597B960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAction): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546537 == false) {
				Il2CppMethodInitialized_07546537 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.SpecialActionValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x17000682")]
	public static string Slide
	{
		[Token(Token = "0x6002B4D")]
		[Address(RVA = "0x597B9D0", Offset = "0x597A9D0", VA = "0x597B9D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Slide): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546538 == false) {
				Il2CppMethodInitialized_07546538 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.SlideValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x17000683")]
	public static string Run
	{
		[Token(Token = "0x6002B4E")]
		[Address(RVA = "0x597BA40", Offset = "0x597AA40", VA = "0x597BA40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Run): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546539 == false) {
				Il2CppMethodInitialized_07546539 = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.RunValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x17000684")]
	public static string Land
	{
		[Token(Token = "0x6002B4F")]
		[Address(RVA = "0x597BAB0", Offset = "0x597AAB0", VA = "0x597BAB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Land): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754653a == false) {
				Il2CppMethodInitialized_0754653a = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.LandValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x17000685")]
	public static string MountingHorse
	{
		[Token(Token = "0x6002B50")]
		[Address(RVA = "0x597BB20", Offset = "0x597AB20", VA = "0x597BB20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_MountingHorse): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754653b == false) {
				Il2CppMethodInitialized_0754653b = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.MountingHorseValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x17000686")]
	public static string Stun
	{
		[Token(Token = "0x6002B51")]
		[Address(RVA = "0x597BB90", Offset = "0x597AB90", VA = "0x597BB90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_Stun): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754653c == false) {
				Il2CppMethodInitialized_0754653c = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.StunValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x17000687")]
	public static string WallSlide
	{
		[Token(Token = "0x6002B52")]
		[Address(RVA = "0x597BC00", Offset = "0x597AC00", VA = "0x597BC00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_WallSlide): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754653d == false) {
				Il2CppMethodInitialized_0754653d = true;
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicHumanStateEnum.WallSlideValue;
			}
			return *(String*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x17000688")]
	public override string ClassName
	{
		[Token(Token = "0x6002B53")]
		[Address(RVA = "0x597BC70", Offset = "0x597AC70", VA = "0x597BC70", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_ClassName): clean
			return "HumanStateEnum";
		}
	}

	[Token(Token = "0x17000689")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B54")]
		[Address(RVA = "0x597BCA0", Offset = "0x597ACA0", VA = "0x597BCA0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700068A")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B55")]
		[Address(RVA = "0x597BCB0", Offset = "0x597ACB0", VA = "0x597BCB0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700068B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B56")]
		[Address(RVA = "0x597BCC0", Offset = "0x597ACC0", VA = "0x597BCC0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002B41")]
	[Address(RVA = "0x597B490", Offset = "0x597A490", VA = "0x597B490")]
	public CustomLogicHumanStateEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c (CustomLogic.CustomLogicHumanStateEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754652c == false) {
			Il2CppMethodInitialized_0754652c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHumanStateEnum.c.

	// CustomLogic.CustomLogicHumanStateEnum$$.cctor: 17 lines keep C-only constructs
	static CustomLogicHumanStateEnum()
	{
		CustomLogic_CustomLogicHumanStateEnum_StaticFields pCVar1;
		String pSVar2;
		Enum SStack_1a8;
		Enum SStack_190;
		Enum SStack_178;
		Enum SStack_160;
		Enum SStack_148;
		Enum SStack_130;
		Enum SStack_118;
		Enum SStack_100;
		Enum SStack_e8;
		Enum SStack_d0;
		Enum SStack_b8;
		Enum SStack_a0;
		Enum SStack_88;
		Enum SStack_70;
		Enum SStack_58;
		Enum SStack_40;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(HumanState);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_28.ToString();
		CustomLogicHumanStateEnum.IdleValue = pSVar2;
		SStack_40.klass = (Enum)typeof(HumanState);
		SStack_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_40.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.AttackValue = pSVar2;
		SStack_58.klass = (Enum)typeof(HumanState);
		SStack_58.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_58.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.GroundDodgeValue = pSVar2;
		SStack_70.klass = (Enum)typeof(HumanState);
		SStack_70.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_70.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.AirDodgeValue = pSVar2;
		SStack_88.klass = (Enum)typeof(HumanState);
		SStack_88.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_88.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.ReloadValue = pSVar2;
		SStack_a0.klass = (Enum)typeof(HumanState);
		SStack_a0.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_a0.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.RefillValue = pSVar2;
		SStack_b8.klass = (Enum)typeof(HumanState);
		SStack_b8.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_b8.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.DieValue = pSVar2;
		SStack_d0.klass = (Enum)typeof(HumanState);
		SStack_d0.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_d0.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.GrabValue = pSVar2;
		SStack_e8.klass = (Enum)typeof(HumanState);
		SStack_e8.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_e8.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.EmoteActionValue = pSVar2;
		SStack_100.klass = (Enum)typeof(HumanState);
		SStack_100.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_100.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.SpecialAttackValue = pSVar2;
		SStack_118.klass = (Enum)typeof(HumanState);
		SStack_118.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_118.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.SpecialActionValue = pSVar2;
		SStack_130.klass = (Enum)typeof(HumanState);
		SStack_130.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_130.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.SlideValue = pSVar2;
		SStack_148.klass = (Enum)typeof(HumanState);
		SStack_148.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_148.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.RunValue = pSVar2;
		SStack_160.klass = (Enum)typeof(HumanState);
		SStack_160.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_160.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.LandValue = pSVar2;
		SStack_178.klass = (Enum)typeof(HumanState);
		SStack_178.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_178.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.MountingHorseValue = pSVar2;
		SStack_190.klass = (Enum)typeof(HumanState);
		SStack_190.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_190.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.StunValue = pSVar2;
		SStack_1a8.klass = (Enum)typeof(HumanState);
		SStack_1a8.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_1a8.ToString();
		pCVar1 = typeof(CustomLogicHumanStateEnum).static_fields;
		pCVar1.WallSlideValue = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"Attack");
		__this.Add((Il2CppObject *)"GroundDodge");
		__this.Add((Il2CppObject *)"AirDodge");
		__this.Add((Il2CppObject *)"Reload");
		__this.Add((Il2CppObject *)"Refill");
		__this.Add((Il2CppObject *)"Die");
		__this.Add((Il2CppObject *)"Grab");
		__this.Add((Il2CppObject *)"EmoteAction");
		__this.Add((Il2CppObject *)"SpecialAttack");
		__this.Add((Il2CppObject *)"SpecialAction");
		__this.Add((Il2CppObject *)"Slide");
		__this.Add((Il2CppObject *)"Run");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"MountingHorse");
		__this.Add((Il2CppObject *)"Stun");
		__this.Add((Il2CppObject *)"WallSlide");
		CustomLogicHumanStateEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546554 == false) {
			Il2CppMethodInitialized_07546554 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754664b == false) {
			Il2CppMethodInitialized_0754664b = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.IdleValue;
		}
		return *(object*)(typeof(CustomLogicHumanStateEnum)).static_fields;
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Attack>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Attack_g____getter_3_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546555 == false) {
			Il2CppMethodInitialized_07546555 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754664c == false) {
			Il2CppMethodInitialized_0754664c = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.AttackValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__GroundDodge>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__GroundDodge_g____getter_4_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546556 == false) {
			Il2CppMethodInitialized_07546556 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754664d == false) {
			Il2CppMethodInitialized_0754664d = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.GroundDodgeValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__AirDodge>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__AirDodge_g____getter_5_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546557 == false) {
			Il2CppMethodInitialized_07546557 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754664e == false) {
			Il2CppMethodInitialized_0754664e = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.AirDodgeValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Reload_g____getter_6_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546558 == false) {
			Il2CppMethodInitialized_07546558 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754664f == false) {
			Il2CppMethodInitialized_0754664f = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.ReloadValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Refill_g____getter_7_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546559 == false) {
			Il2CppMethodInitialized_07546559 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546650 == false) {
			Il2CppMethodInitialized_07546650 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.RefillValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Die_g____getter_8_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655a == false) {
			Il2CppMethodInitialized_0754655a = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546651 == false) {
			Il2CppMethodInitialized_07546651 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.DieValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Grab>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Grab_g____getter_9_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655b == false) {
			Il2CppMethodInitialized_0754655b = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546652 == false) {
			Il2CppMethodInitialized_07546652 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.GrabValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__EmoteAction>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteAction_g____getter_10_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655c == false) {
			Il2CppMethodInitialized_0754655c = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546653 == false) {
			Il2CppMethodInitialized_07546653 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.EmoteActionValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAttack>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialAttack_g____getter_11_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655d == false) {
			Il2CppMethodInitialized_0754655d = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546654 == false) {
			Il2CppMethodInitialized_07546654 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.SpecialAttackValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAction>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialAction_g____getter_12_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655e == false) {
			Il2CppMethodInitialized_0754655e = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546655 == false) {
			Il2CppMethodInitialized_07546655 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.SpecialActionValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Slide_g____getter_13_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754655f == false) {
			Il2CppMethodInitialized_0754655f = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546656 == false) {
			Il2CppMethodInitialized_07546656 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.SlideValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Run_g____getter_14_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546560 == false) {
			Il2CppMethodInitialized_07546560 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546657 == false) {
			Il2CppMethodInitialized_07546657 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.RunValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_15_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546561 == false) {
			Il2CppMethodInitialized_07546561 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546658 == false) {
			Il2CppMethodInitialized_07546658 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.LandValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__MountingHorse>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__MountingHorse_g____getter_16_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546562 == false) {
			Il2CppMethodInitialized_07546562 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546659 == false) {
			Il2CppMethodInitialized_07546659 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.MountingHorseValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Stun_g____getter_17_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546563 == false) {
			Il2CppMethodInitialized_07546563 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754665a == false) {
			Il2CppMethodInitialized_0754665a = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.StunValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__WallSlide>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__WallSlide_g____getter_18_0(CustomLogicHumanStateEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546564 == false) {
			Il2CppMethodInitialized_07546564 = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754665b == false) {
			Il2CppMethodInitialized_0754665b = true;
			uVar1 = (typeof(CustomLogicHumanStateEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicHumanStateEnum))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicHumanStateEnum.WallSlideValue;
		}
		return *(object*)((long)(typeof(CustomLogicHumanStateEnum)).static_fields + 0x80);
	}
}
