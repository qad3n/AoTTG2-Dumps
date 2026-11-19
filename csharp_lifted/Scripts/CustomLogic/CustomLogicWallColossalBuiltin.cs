// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWallColossalBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004DF")]
[CompilerGenerated]
internal class CustomLogicWallColossalBuiltin : CustomLogicShifterBuiltin
{
	[Token(Token = "0x20004E0")]
	public new static class Factory
	{
		[Token(Token = "0x60026BA")]
		[Address(RVA = "0x5950FE0", Offset = "0x594FFE0", VA = "0x5950FE0")]
		public static CustomLogicWallColossalBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWallColossalBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004E1")]
	public new static class Bindings
	{
		[Token(Token = "0x40017B1")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60026BB")]
		[Address(RVA = "0x5951070", Offset = "0x5950070", VA = "0x5951070")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> pCVar3;
			CLMethodBinding<CustomLogicWallColossalBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x848ecb43) {
				if (uVar2 < 0x40e3d514) {
					if (uVar2 < 0x32b26902) {
						if (uVar2 == 0x27dc816) {
							bVar1 = (name == "RecoveryTimeLeft");
							if (bVar1) {
								pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__RecoveryTimeLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xa0c428d) {
							bVar1 = (name == "WallAttack");
							if (bVar1) {
								pCVar4 = CustomLogicWallColossalBuiltin.Bindings.__CreateMethodBinding__WallAttack();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x32b26901) {
							bVar1 = (name == "HandSeverWindow");
							if (bVar1) {
								pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__HandSeverWindow();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3736fc29) {
						bVar1 = (name == "RightHandSeverTimeLeft");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__RightHandSeverTimeLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3a204e3a) {
						bVar1 = (name == "MaxRightHandHealth");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__MaxRightHandHealth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x40e3d513) {
						bVar1 = (name == "LeftHandHealth");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__LeftHandHealth();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x63ececc1) {
					if (uVar2 == 0x43369292) {
						bVar1 = (name == "StunState");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__StunState();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x4f9fdfe6) {
						bVar1 = (name == "HandHealth");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__HandHealth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x63ececc0) {
						bVar1 = (name == "WallAttackCooldown");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__WallAttackCooldown();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x848ecb42) {
					bVar1 = (name == "MaxHandHealth");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__MaxHandHealth();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x662d291c) {
					bVar1 = (name == "CanDamageLeftHand");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__CanDamageLeftHand();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x67ff8d2b) {
					bVar1 = (name == "AttackSteam");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar4 = CustomLogicWallColossalBuiltin.Bindings.__CreateMethodBinding__AttackSteam();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xa87e463f) {
				if (uVar2 < 0x9e7aa180) {
					if (uVar2 == 0x875ecbb5) {
						bVar1 = (name == "RightHandState");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__RightHandState();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x98c20b49) {
						bVar1 = (name == "StunTimeLeft");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__StunTimeLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9e7aa17f) {
						bVar1 = (name == "MaxLeftHandHealth");
						if (bVar1) {
							pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__MaxLeftHandHealth();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa2d6f7c7) {
					bVar1 = (name == "CanDamageRightHand");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__CanDamageRightHand();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa7e140ea) {
					bVar1 = (name == "RecoveryDuration");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__RecoveryDuration();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa87e463e) {
					bVar1 = (name == "LeftHandSeverTimeLeft");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__LeftHandSeverTimeLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdf3a7932) {
				if (uVar2 == 0xb22e4ad3) {
					bVar1 = (name == "StopSteam");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar4 = CustomLogicWallColossalBuiltin.Bindings.__CreateMethodBinding__StopSteam();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xbebdf4c1) {
					bVar1 = (name == "WallAttackCooldownLeft");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__WallAttackCooldownLeft();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdf3a7931) {
					bVar1 = (name == "StunDuration");
					if (bVar1) {
						if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__StunDuration();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf0344aa6) {
				bVar1 = (name == "RightHandHealth");
				if (bVar1) {
					pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__RightHandHealth();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfbba1884) {
				bVar1 = (name == "SteamState");
				if (bVar1) {
					pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__SteamState();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfc51eb92) {
				bVar1 = (name == "LeftHandState");
				if (bVar1) {
					pCVar3 = CustomLogicWallColossalBuiltin.Bindings.__CreatePropertyBinding__LeftHandState();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWallColossalBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60026BC")]
		[Address(RVA = "0x5951980", Offset = "0x5950980", VA = "0x5951980")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____get);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____set);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026BD")]
		[Address(RVA = "0x5951A60", Offset = "0x5950A60", VA = "0x5951A60")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxHandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxHandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_71c26a0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026BE")]
		[Address(RVA = "0x5951B40", Offset = "0x5950B40", VA = "0x5951B40")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_71c2678);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026BF")]
		[Address(RVA = "0x5951C20", Offset = "0x5950C20", VA = "0x5951C20")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxLeftHandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxLeftHandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_71c26b0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C0")]
		[Address(RVA = "0x5951D00", Offset = "0x5950D00", VA = "0x5951D00")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_71c26f0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C1")]
		[Address(RVA = "0x5951DE0", Offset = "0x5950DE0", VA = "0x5951DE0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__MaxRightHandHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxRightHandHealth): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_71c26c0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C2")]
		[Address(RVA = "0x5951EC0", Offset = "0x5950EC0", VA = "0x5951EC0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageLeftHand()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageLeftHand): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_71c2638);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C3")]
		[Address(RVA = "0x5951FA0", Offset = "0x5950FA0", VA = "0x5951FA0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__CanDamageRightHand()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageRightHand): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_71c2648);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C4")]
		[Address(RVA = "0x5952080", Offset = "0x5951080", VA = "0x5952080")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandState): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_00;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60026C5")]
		[Address(RVA = "0x5952120", Offset = "0x5951120", VA = "0x5952120")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandState): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_00;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60026C6")]
		[Address(RVA = "0x59521C0", Offset = "0x59511C0", VA = "0x59521C0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__HandSeverWindow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandSeverWindow): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_71c2668);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C7")]
		[Address(RVA = "0x59522A0", Offset = "0x59512A0", VA = "0x59522A0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__LeftHandSeverTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandSeverTimeLeft): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_71c2688);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C8")]
		[Address(RVA = "0x5952380", Offset = "0x5951380", VA = "0x5952380")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RightHandSeverTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandSeverTimeLeft): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_71c2700);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026C9")]
		[Address(RVA = "0x5952460", Offset = "0x5951460", VA = "0x5952460")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunDuration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunDuration): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____s);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026CA")]
		[Address(RVA = "0x5952540", Offset = "0x5951540", VA = "0x5952540")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunTimeLeft): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____s);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026CB")]
		[Address(RVA = "0x5952620", Offset = "0x5951620", VA = "0x5952620")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryDuration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryDuration): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_71c26d0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026CC")]
		[Address(RVA = "0x5952700", Offset = "0x5951700", VA = "0x5952700")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__RecoveryTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryTimeLeft): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_71c26e0);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x59527E0", Offset = "0x59517E0", VA = "0x59527E0")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__StunState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunState): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_00;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x5952880", Offset = "0x5951880", VA = "0x5952880")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldown): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_71c2748);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x5952960", Offset = "0x5951960", VA = "0x5952960")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__WallAttackCooldownLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldownLeft): 4 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			Action<CustomLogicWallColossalBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_01;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL);
			__this_00 = new Action<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_71c2758);
			__this_01 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x5952A40", Offset = "0x5951A40", VA = "0x5952A40")]
		public static CLPropertyBinding<CustomLogicWallColossalBuiltin> __CreatePropertyBinding__SteamState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__SteamState): 3 lines keep C-only constructs
			Func<CustomLogicWallColossalBuiltin, object> __this;
			CLPropertyBinding<CustomLogicWallColossalBuiltin> __this_00;

			__this = new Func<CustomLogicWallColossalBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicWallColossalBuiltin>)) ;
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60026D1")]
		[Address(RVA = "0x5952AE0", Offset = "0x5951AE0", VA = "0x5952AE0")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__AttackSteam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__AttackSteam): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicWallColossalBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicWallColossalBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546266 == false) {
				Il2CppMethodInitialized_07546266 = true;
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicWallColossalBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicWallColossalBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__AttackSteam_b__23_0);
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicWallColossalBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x60026D2")]
		[Address(RVA = "0x5952C20", Offset = "0x5951C20", VA = "0x5952C20")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__StopSteam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__StopSteam): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicWallColossalBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicWallColossalBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546267 == false) {
				Il2CppMethodInitialized_07546267 = true;
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicWallColossalBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicWallColossalBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__StopSteam_b__24_0);
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicWallColossalBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}

		[Token(Token = "0x60026D3")]
		[Address(RVA = "0x5952D60", Offset = "0x5951D60", VA = "0x5952D60")]
		public static CLMethodBinding<CustomLogicWallColossalBuiltin> __CreateMethodBinding__WallAttack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__WallAttack): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicWallColossalBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicWallColossalBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546268 == false) {
				Il2CppMethodInitialized_07546268 = true;
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicWallColossalBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicWallColossalBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicWallColossalBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__WallAttack_b__25_0);
				pCVar2 = typeof(CustomLogicWallColossalBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicWallColossalBuiltin>((System_Func_T__object____object__o)__this) ;
			return __this_00;
		}
	}

	[Token(Token = "0x40017AF")]
	[FieldOffset(Offset = "0x48")]
	public new readonly WallColossalShifter Shifter;

	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0x50")]
	public new readonly WallColossalAIController Controller;

	[Token(Token = "0x170004D6")]
	public int HandHealth
	{
		[Token(Token = "0x600268D")]
		[Address(RVA = "0x5950680", Offset = "0x594F680", VA = "0x5950680")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_HandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return (pCVar1.CurrentRightHandHealth + pCVar1.CurrentLeftHandHealth) / 2;
		}
		[Token(Token = "0x600268E")]
		[Address(RVA = "0x59506B0", Offset = "0x594F6B0", VA = "0x59506B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_HandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetCurrentLeftHandHealth(value);
					pCVar1 = this.Shifter;
					if (pCVar1 != null) {
						pCVar1.SetCurrentRightHandHealth(value);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004D7")]
	public int MaxHandHealth
	{
		[Token(Token = "0x600268F")]
		[Address(RVA = "0x5950710", Offset = "0x594F710", VA = "0x5950710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxHandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return (pCVar1.MaxRightHandHealth + pCVar1.MaxLeftHandHealth) / 2;
		}
		[Token(Token = "0x6002690")]
		[Address(RVA = "0x5950740", Offset = "0x594F740", VA = "0x5950740")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxHandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetMaxLeftHandHealth(value);
					pCVar1 = this.Shifter;
					if (pCVar1 != null) {
						pCVar1.SetMaxRightHandHealth(value);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004D8")]
	public int LeftHandHealth
	{
		[Token(Token = "0x6002691")]
		[Address(RVA = "0x59507A0", Offset = "0x594F7A0", VA = "0x59507A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CurrentLeftHandHealth;
		}
		[Token(Token = "0x6002692")]
		[Address(RVA = "0x59507C0", Offset = "0x594F7C0", VA = "0x59507C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetCurrentLeftHandHealth(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004D9")]
	public int MaxLeftHandHealth
	{
		[Token(Token = "0x6002693")]
		[Address(RVA = "0x5950810", Offset = "0x594F810", VA = "0x5950810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxLeftHandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.MaxLeftHandHealth;
		}
		[Token(Token = "0x6002694")]
		[Address(RVA = "0x5950830", Offset = "0x594F830", VA = "0x5950830")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxLeftHandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetMaxLeftHandHealth(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004DA")]
	public int RightHandHealth
	{
		[Token(Token = "0x6002695")]
		[Address(RVA = "0x5950880", Offset = "0x594F880", VA = "0x5950880")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CurrentRightHandHealth;
		}
		[Token(Token = "0x6002696")]
		[Address(RVA = "0x59508A0", Offset = "0x594F8A0", VA = "0x59508A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetCurrentRightHandHealth(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004DB")]
	public int MaxRightHandHealth
	{
		[Token(Token = "0x6002697")]
		[Address(RVA = "0x59508F0", Offset = "0x594F8F0", VA = "0x59508F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxRightHandHealth): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.MaxRightHandHealth;
		}
		[Token(Token = "0x6002698")]
		[Address(RVA = "0x5950910", Offset = "0x594F910", VA = "0x5950910")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxRightHandHealth): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetMaxRightHandHealth(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004DC")]
	public bool CanDamageLeftHand
	{
		[Token(Token = "0x6002699")]
		[Address(RVA = "0x5950960", Offset = "0x594F960", VA = "0x5950960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageLeftHand): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CanDamageLeftHand;
		}
		[Token(Token = "0x600269A")]
		[Address(RVA = "0x5950980", Offset = "0x594F980", VA = "0x5950980")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageLeftHand): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a509bc: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a509bc;
				pCVar1.CanDamageLeftHand = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004DD")]
	public bool CanDamageRightHand
	{
		[Token(Token = "0x600269B")]
		[Address(RVA = "0x59509D0", Offset = "0x594F9D0", VA = "0x59509D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageRightHand): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CanDamageRightHand;
		}
		[Token(Token = "0x600269C")]
		[Address(RVA = "0x59509F0", Offset = "0x594F9F0", VA = "0x59509F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageRightHand): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50a2c: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50a2c;
				pCVar1.CanDamageRightHand = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004DE")]
	public int LeftHandState
	{
		[Token(Token = "0x600269D")]
		[Address(RVA = "0x5950A40", Offset = "0x594FA40", VA = "0x5950A40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandState): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._leftHandState;
		}
	}

	[Token(Token = "0x170004DF")]
	public int RightHandState
	{
		[Token(Token = "0x600269E")]
		[Address(RVA = "0x5950A60", Offset = "0x594FA60", VA = "0x5950A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandState): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._rightHandState;
		}
	}

	[Token(Token = "0x170004E0")]
	public float HandSeverWindow
	{
		[Token(Token = "0x600269F")]
		[Address(RVA = "0x5950A80", Offset = "0x594FA80", VA = "0x5950A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_HandSeverWindow): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.HandSeverWindow;
		}
		[Token(Token = "0x60026A0")]
		[Address(RVA = "0x5950AA0", Offset = "0x594FAA0", VA = "0x5950AA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_HandSeverWindow): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50ae8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50ae8;
				pCVar1.HandSeverWindow = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E1")]
	public float LeftHandSeverTimeLeft
	{
		[Token(Token = "0x60026A1")]
		[Address(RVA = "0x5950AF0", Offset = "0x594FAF0", VA = "0x5950AF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandSeverTimeLeft): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.LeftHandSeverTimeLeft;
		}
		[Token(Token = "0x60026A2")]
		[Address(RVA = "0x5950B10", Offset = "0x594FB10", VA = "0x5950B10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandSeverTimeLeft): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50b58: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50b58;
				pCVar1.LeftHandSeverTimeLeft = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E2")]
	public float RightHandSeverTimeLeft
	{
		[Token(Token = "0x60026A3")]
		[Address(RVA = "0x5950B60", Offset = "0x594FB60", VA = "0x5950B60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandSeverTimeLeft): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RightHandSeverTimeLeft;
		}
		[Token(Token = "0x60026A4")]
		[Address(RVA = "0x5950B80", Offset = "0x594FB80", VA = "0x5950B80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandSeverTimeLeft): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50bc8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50bc8;
				pCVar1.RightHandSeverTimeLeft = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E3")]
	public float StunDuration
	{
		[Token(Token = "0x60026A5")]
		[Address(RVA = "0x5950BD0", Offset = "0x594FBD0", VA = "0x5950BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_StunDuration): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.StunDuration;
		}
		[Token(Token = "0x60026A6")]
		[Address(RVA = "0x5950BF0", Offset = "0x594FBF0", VA = "0x5950BF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_StunDuration): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50c38: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50c38;
				pCVar1.StunDuration = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E4")]
	public float StunTimeLeft
	{
		[Token(Token = "0x60026A7")]
		[Address(RVA = "0x5950C40", Offset = "0x594FC40", VA = "0x5950C40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_StunTimeLeft): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.StunTimeLeft;
		}
		[Token(Token = "0x60026A8")]
		[Address(RVA = "0x5950C60", Offset = "0x594FC60", VA = "0x5950C60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_StunTimeLeft): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50ca8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50ca8;
				pCVar1.StunTimeLeft = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E5")]
	public float RecoveryDuration
	{
		[Token(Token = "0x60026A9")]
		[Address(RVA = "0x5950CB0", Offset = "0x594FCB0", VA = "0x5950CB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryDuration): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RecoveryDuration;
		}
		[Token(Token = "0x60026AA")]
		[Address(RVA = "0x5950CD0", Offset = "0x594FCD0", VA = "0x5950CD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryDuration): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50d18: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50d18;
				pCVar1.RecoveryDuration = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E6")]
	public float RecoveryTimeLeft
	{
		[Token(Token = "0x60026AB")]
		[Address(RVA = "0x5950D20", Offset = "0x594FD20", VA = "0x5950D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryTimeLeft): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RecoveryTimeLeft;
		}
		[Token(Token = "0x60026AC")]
		[Address(RVA = "0x5950D40", Offset = "0x594FD40", VA = "0x5950D40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryTimeLeft): clean
			WallColossalShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a50d88: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a50d88;
				pCVar1.RecoveryTimeLeft = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004E7")]
	public string StunState
	{
		[Token(Token = "0x60026AD")]
		[Address(RVA = "0x5950D90", Offset = "0x594FD90", VA = "0x5950D90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_StunState): 1 lines keep C-only constructs
			WallColossalShifter pCVar1;
			String pSVar2;
			Enum local_20;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			local_20.klass = (Enum)typeof(ColossalStunState);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar2;
		}
	}

	[Token(Token = "0x170004E8")]
	public float WallAttackCooldown
	{
		[Token(Token = "0x60026AE")]
		[Address(RVA = "0x5950E00", Offset = "0x594FE00", VA = "0x5950E00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldown): clean
			WallColossalAIController pCVar1;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WallAttackCooldown;
		}
		[Token(Token = "0x60026AF")]
		[Address(RVA = "0x5950E20", Offset = "0x594FE20", VA = "0x5950E20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldown): clean
			WallColossalAIController pCVar1;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.WallAttackCooldown = value;
			return;
		}
	}

	[Token(Token = "0x170004E9")]
	public float WallAttackCooldownLeft
	{
		[Token(Token = "0x60026B0")]
		[Address(RVA = "0x5950E40", Offset = "0x594FE40", VA = "0x5950E40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldownLeft): clean
			WallColossalAIController pCVar1;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WallAttackCooldownLeft;
		}
		[Token(Token = "0x60026B1")]
		[Address(RVA = "0x5950E60", Offset = "0x594FE60", VA = "0x5950E60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldownLeft): clean
			WallColossalAIController pCVar1;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.WallAttackCooldownLeft = value;
			return;
		}
	}

	[Token(Token = "0x170004EA")]
	public int SteamState
	{
		[Token(Token = "0x60026B2")]
		[Address(RVA = "0x5950E80", Offset = "0x594FE80", VA = "0x5950E80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_SteamState): clean
			WallColossalShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._steamState;
		}
	}

	[Token(Token = "0x170004EB")]
	public override string ClassName
	{
		[Token(Token = "0x60026B6")]
		[Address(RVA = "0x5950F80", Offset = "0x594FF80", VA = "0x5950F80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_ClassName): clean
			return "WallColossal";
		}
	}

	[Token(Token = "0x170004EC")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60026B7")]
		[Address(RVA = "0x5950FB0", Offset = "0x594FFB0", VA = "0x5950FB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170004ED")]
	public override bool IsStatic
	{
		[Token(Token = "0x60026B8")]
		[Address(RVA = "0x5950FC0", Offset = "0x594FFC0", VA = "0x5950FC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170004EE")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60026B9")]
		[Address(RVA = "0x5950FD0", Offset = "0x594FFD0", VA = "0x5950FD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600268C")]
	[Address(RVA = "0x59505B0", Offset = "0x594F5B0", VA = "0x59505B0")]
	public CustomLogicWallColossalBuiltin(WallColossalShifter shifter)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$.ctor): clean
		BaseTitanAIController pCVar1;
		WallColossalAIController pCVar2;

		base((BaseCharacter)shifter);
		this.Shifter__base0 = (BaseShifter)shifter;
		if (shifter == null) {
			throw new NullReferenceException();
		}
		pCVar1 = shifter.GetComponent<BaseTitanAIController>();
		this.Controller__base1 = pCVar1;
		this.Shifter = shifter;
		pCVar2 = shifter.GetComponent<WallColossalAIController>();
		this.Controller = pCVar2;
		return;
	}

	[Token(Token = "0x60026B3")]
	[Address(RVA = "0x5950EA0", Offset = "0x594FEA0", VA = "0x5950EA0")]
	public void AttackSteam()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$AttackSteam): clean
		WallColossalShifter pCVar1;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 == null) {
	label_05a50eda: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Shifter;
			if (pCVar1 == null) goto label_05a50eda;
			if (pCVar1.Dead == false) {
				pCVar1.SteamAttack();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60026B4")]
	[Address(RVA = "0x5950EE0", Offset = "0x594FEE0", VA = "0x5950EE0")]
	public void StopSteam()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$StopSteam): clean
		WallColossalShifter pCVar1;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 == null) {
	label_05a50f1a: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Shifter;
			if (pCVar1 == null) goto label_05a50f1a;
			if (pCVar1.Dead == false) {
				pCVar1.StopSteam();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60026B5")]
	[Address(RVA = "0x5950F20", Offset = "0x594FF20", VA = "0x5950F20")]
	public void WallAttack()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c (CustomLogic.CustomLogicWallColossalBuiltin$$WallAttack): clean
		WallColossalShifter pCVar1;
		WallColossalAIController __this_00;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return;
				}
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.WallAttack();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicWallColossalBuiltin.c.

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"HandHealth");
		__this.Add((Il2CppObject *)"MaxHandHealth");
		__this.Add((Il2CppObject *)"LeftHandHealth");
		__this.Add((Il2CppObject *)"MaxLeftHandHealth");
		__this.Add((Il2CppObject *)"RightHandHealth");
		__this.Add((Il2CppObject *)"MaxRightHandHealth");
		__this.Add((Il2CppObject *)"CanDamageLeftHand");
		__this.Add((Il2CppObject *)"CanDamageRightHand");
		__this.Add((Il2CppObject *)"LeftHandState");
		__this.Add((Il2CppObject *)"RightHandState");
		__this.Add((Il2CppObject *)"HandSeverWindow");
		__this.Add((Il2CppObject *)"LeftHandSeverTimeLeft");
		__this.Add((Il2CppObject *)"RightHandSeverTimeLeft");
		__this.Add((Il2CppObject *)"StunDuration");
		__this.Add((Il2CppObject *)"StunTimeLeft");
		__this.Add((Il2CppObject *)"RecoveryDuration");
		__this.Add((Il2CppObject *)"RecoveryTimeLeft");
		__this.Add((Il2CppObject *)"StunState");
		__this.Add((Il2CppObject *)"WallAttackCooldown");
		__this.Add((Il2CppObject *)"WallAttackCooldownLeft");
		__this.Add((Il2CppObject *)"SteamState");
		__this.Add((Il2CppObject *)"AttackSteam");
		__this.Add((Il2CppObject *)"StopSteam");
		__this.Add((Il2CppObject *)"WallAttack");
		CustomLogicWallColossalBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__HandHealth_g____getter_2_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__HandHealth_g____setter_2_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int health;

		health = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetCurrentLeftHandHealth(health);
				pCVar1 = __i.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetCurrentRightHandHealth(health);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__MaxHandHealth_g____getter_3_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__MaxHandHealth_g____setter_3_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int maxHealth;

		maxHealth = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetMaxLeftHandHealth(maxHealth);
				pCVar1 = __i.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetMaxRightHandHealth(maxHealth);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__LeftHandHealth_g____getter_4_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__LeftHandHealth_g____setter_4_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int health;

		health = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetCurrentLeftHandHealth(health);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int maxHealth;

		maxHealth = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetMaxLeftHandHealth(maxHealth);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__RightHandHealth_g____getter_6_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__RightHandHealth_g____setter_6_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int health;

		health = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetCurrentRightHandHealth(health);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		int maxHealth;

		maxHealth = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(pCVar1 = __i.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				pCVar1.SetMaxRightHandHealth(maxHealth);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a538e5: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a538e5;
			pCVar1.CanDamageLeftHand = bVar2;
		}
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a539c5: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a539c5;
			pCVar1.CanDamageRightHand = bVar2;
		}
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandState>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__LeftHandState_g____getter_10_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandState>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__RightHandState_g____getter_11_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__HandSeverWindow_g____getter_12_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__HandSeverWindow_g____setter_12_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53b33;
					pCVar1.HandSeverWindow = fVar3;
				}
				return;
			}
		}
	label_05a53b33: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53c23;
					pCVar1.LeftHandSeverTimeLeft = fVar3;
				}
				return;
			}
		}
	label_05a53c23: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53d13;
					pCVar1.RightHandSeverTimeLeft = fVar3;
				}
				return;
			}
		}
	label_05a53d13: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__StunDuration_g____getter_15_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__StunDuration_g____setter_15_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53e03;
					pCVar1.StunDuration = fVar3;
				}
				return;
			}
		}
	label_05a53e03: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__StunTimeLeft_g____getter_16_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__StunTimeLeft_g____setter_16_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53ef3;
					pCVar1.StunTimeLeft = fVar3;
				}
				return;
			}
		}
	label_05a53ef3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__RecoveryDuration_g____getter_17_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__RecoveryDuration_g____setter_17_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a53fe3;
					pCVar1.RecoveryDuration = fVar3;
				}
				return;
			}
		}
	label_05a53fe3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____setter|18_1: clean
	private static void Bindings____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a540d3;
					pCVar1.RecoveryTimeLeft = fVar3;
				}
				return;
			}
		}
	label_05a540d3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunState>g____getter|19_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__StunState_g____getter_19_0(CustomLogicWallColossalBuiltin __i)
	{
		WallColossalShifter pCVar1;
		String pSVar2;
		Enum local_20;

		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				local_20.klass = (Enum)typeof(ColossalStunState);
				local_20.monitor = (IntPtr)0xffffffffffffffff;
				pSVar2 = local_20.ToString();
				return (object)pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Controller == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalAIController pCVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Controller, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		pCVar1.WallAttackCooldown = fVar2;
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Controller == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1(CustomLogicWallColossalBuiltin __i, object __v)
	{
		WallColossalAIController pCVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Controller, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		pCVar1.WallAttackCooldownLeft = fVar2;
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__SteamState>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__SteamState_g____getter_22_0(CustomLogicWallColossalBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicWallColossalBuiltin.Bindings.c();
		CustomLogicWallColossalBuiltin.Bindings.c.__9 =(CustomLogicWallColossalBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__AttackSteam>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__AttackSteam_b__23_0(CustomLogicWallColossalBuiltin __c, Object[] __a)
	{
		WallColossalShifter pCVar1;
		bool bVar2;

		if ((__c == null) ||(pCVar1 = __c.Shifter, pCVar1 == null)) {
	label_05a543d4: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __c.Shifter;
			if (pCVar1 == null) goto label_05a543d4;
			if (pCVar1.Dead == false) {
				pCVar1.SteamAttack();
				return null;
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSteam>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__StopSteam_b__24_0(CustomLogicWallColossalBuiltin __c, Object[] __a)
	{
		WallColossalShifter pCVar1;
		bool bVar2;

		if ((__c == null) ||(pCVar1 = __c.Shifter, pCVar1 == null)) {
	label_05a54424: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __c.Shifter;
			if (pCVar1 == null) goto label_05a54424;
			if (pCVar1.Dead == false) {
				pCVar1.StopSteam();
				return null;
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__WallAttack>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__WallAttack_b__25_0(CustomLogicWallColossalBuiltin __c, Object[] __a)
	{
		WallColossalShifter pCVar1;
		WallColossalAIController __this_00;
		bool bVar2;

		if ((__c != null) &&(pCVar1 = __c.Shifter, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return null;
			}
			pCVar1 = __c.Shifter;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return null;
				}
				if (pCVar1.AI == false) {
					return null;
				}
				__this_00 = __c.Controller;
				if (__this_00 != null) {
					__this_00.WallAttack();
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}
}
