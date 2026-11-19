// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTitanBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTitanBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTitanBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004D7")]
[CompilerGenerated]
internal class CustomLogicTitanBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20004D8")]
	public new static class Factory
	{
		[Token(Token = "0x6002596")]
		[Address(RVA = "0x5944CC0", Offset = "0x5943CC0", VA = "0x5944CC0")]
		public static CustomLogicTitanBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004D9")]
	public new static class Bindings
	{
		[Token(Token = "0x4001788")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002597")]
		[Address(RVA = "0x5944D50", Offset = "0x5943D50", VA = "0x5944D50")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTitanBuiltin> pCVar3;
			CLMethodBinding<CustomLogicTitanBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7b41749d) {
				if (uVar2 < 0x320c4020) {
					if (uVar2 < 0x22bd3b3f) {
						if (uVar2 < 0x17a0b8d7) {
							if (uVar2 == 0x7186f3c) {
								bVar1 = (name == "NapePosition");
								if (bVar1) {
									pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__NapePosition();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x17a0b8d6) {
								bVar1 = (name == "Stamina");
								if (bVar1) {
									pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__Stamina();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1d46812f) {
							bVar1 = (name == "AttackSpeedMultiplier");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__AttackSpeedMultiplier();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x22bd3b3e) {
							bVar1 = (name == "IsHardened");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__IsHardened();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2ae002cd) {
						if (uVar2 == 0x246c98e0) {
							bVar1 = (name == "RunSpeedBase");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__RunSpeedBase();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2ae002cc) {
							bVar1 = (name == "JumpForce");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__JumpForce();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2b5690da) {
						bVar1 = (name == "DeathVelocity");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__DeathVelocity();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x320c401f) {
						bVar1 = (name == "ActionPause");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__ActionPause();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x6709f835) {
					if (uVar2 < 0x46b92be9) {
						if (uVar2 == 0x3da81e8d) {
							bVar1 = (name == "RotateSpeed");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__RotateSpeed();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x46b92be8) {
							bVar1 = (name == "FocusRange");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__FocusRange();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x5d992b41) {
						bVar1 = (name == "Stun");
						if (bVar1) {
							pCVar4 = CustomLogicTitanBuiltin.Bindings.__CreateMethodBinding__Stun();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x6709f834) {
						bVar1 = (name == "Wander");
						if (bVar1) {
							pCVar4 = CustomLogicTitanBuiltin.Bindings.__CreateMethodBinding__Wander();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x6b178ac3) {
					if (uVar2 == 0x69ba519b) {
						bVar1 = (name == "FarAttackCooldown");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__FarAttackCooldown();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6b178ac2) {
						bVar1 = (name == "IsWarded");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__IsWarded();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x6fd42728) {
					bVar1 = (name == "WalkSpeedPerLevel");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__WalkSpeedPerLevel();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x783cf542) {
					bVar1 = (name == "HeadSize");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__HeadSize();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7b41749c) {
					bVar1 = (name == "IsBald");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__IsBald();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb5f3afde) {
				if (uVar2 < 0x9891bf89) {
					if (uVar2 < 0x8dc5a9a4) {
						if (uVar2 == 0x8b67f168) {
							bVar1 = (name == "Target");
							if (bVar1) {
								pCVar4 = CustomLogicTitanBuiltin.Bindings.__CreateMethodBinding__Target();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x8dc5a9a3) {
							bVar1 = (name == "NeckMount");
							if (bVar1) {
								pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__NeckMount();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x90cf188a) {
						bVar1 = (name == "FocusTime");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__FocusTime();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9891bf88) {
						bVar1 = (name == "AttackWait");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__AttackWait();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xab8d157b) {
					if (uVar2 == 0xa6478e7c) {
						bVar1 = (name == "Size");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__Size();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xab8d157a) {
						bVar1 = (name == "MaxStamina");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__MaxStamina();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xb20fe4aa) {
					bVar1 = (name == "CanRun");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__CanRun();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb5f3afdd) {
					bVar1 = (name == "TurnSpeed");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__TurnSpeed();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd0d86e03) {
				if (uVar2 < 0xbfccc708) {
					if (uVar2 == 0xbb10b4ac) {
						bVar1 = (name == "HeadMount");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__HeadMount();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xbfccc707) {
						bVar1 = (name == "IsCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__IsCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc746e5f5) {
					bVar1 = (name == "AttackPause");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__AttackPause();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd0d86e02) {
					bVar1 = (name == "RunSpeedPerLevel");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__RunSpeedPerLevel();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe4d66f55) {
				if (uVar2 == 0xd2528dac) {
					bVar1 = (name == "TurnPause");
					if (bVar1) {
						pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__TurnPause();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe4d66f54) {
					bVar1 = (name == "Blind");
					if (bVar1) {
						pCVar4 = CustomLogicTitanBuiltin.Bindings.__CreateMethodBinding__Blind();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xf96e74c8) {
				bVar1 = (name == "Cripple");
				if (bVar1) {
					pCVar4 = CustomLogicTitanBuiltin.Bindings.__CreateMethodBinding__Cripple();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xedff5766) {
				bVar1 = (name == "WalkSpeedBase");
				if (bVar1) {
					pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__WalkSpeedBase();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xeb9a5ec5) {
				bVar1 = (name == "DeathType");
				if (bVar1) {
					pCVar3 = CustomLogicTitanBuiltin.Bindings.__CreatePropertyBinding__DeathType();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002598")]
		[Address(RVA = "0x5945A20", Offset = "0x5944A20", VA = "0x5945A20")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__DeathType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathType): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____getter_2_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002599")]
		[Address(RVA = "0x5945B00", Offset = "0x5944B00", VA = "0x5945B00")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__DeathVelocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathVelocity): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____getter);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259A")]
		[Address(RVA = "0x5945BE0", Offset = "0x5944BE0", VA = "0x5945BE0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__Size()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Size): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_4_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259B")]
		[Address(RVA = "0x5945CC0", Offset = "0x5944CC0", VA = "0x5945CC0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__HeadSize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadSize): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____getter_5_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259C")]
		[Address(RVA = "0x5945DA0", Offset = "0x5944DA0", VA = "0x5945DA0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__RunSpeedBase()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter_6);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter_6);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259D")]
		[Address(RVA = "0x5945E80", Offset = "0x5944E80", VA = "0x5945E80")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__WalkSpeedBase()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____getter);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259E")]
		[Address(RVA = "0x5945F60", Offset = "0x5944F60", VA = "0x5945F60")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__WalkSpeedPerLevel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____get);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600259F")]
		[Address(RVA = "0x5946040", Offset = "0x5945040", VA = "0x5946040")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__RunSpeedPerLevel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____gett);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A0")]
		[Address(RVA = "0x5946120", Offset = "0x5945120", VA = "0x5946120")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__TurnSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_10_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A1")]
		[Address(RVA = "0x5946200", Offset = "0x5945200", VA = "0x5946200")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__RotateSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter_11);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter_11);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A2")]
		[Address(RVA = "0x59462E0", Offset = "0x59452E0", VA = "0x59462E0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__JumpForce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__JumpForce): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_12_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_12_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A3")]
		[Address(RVA = "0x59463C0", Offset = "0x59453C0", VA = "0x59463C0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__ActionPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__ActionPause): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter_13);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter_13);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A4")]
		[Address(RVA = "0x59464A0", Offset = "0x59454A0", VA = "0x59464A0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__AttackPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackPause): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter_14);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter_14);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A5")]
		[Address(RVA = "0x5946580", Offset = "0x5945580", VA = "0x5946580")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__TurnPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnPause): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_15_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_15_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A6")]
		[Address(RVA = "0x5946660", Offset = "0x5945660", VA = "0x5946660")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__Stamina()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Stamina): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____getter_16_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____setter_16_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A7")]
		[Address(RVA = "0x5946740", Offset = "0x5945740", VA = "0x5946740")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__MaxStamina()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__MaxStamina): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____getter_17);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____setter_17);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025A8")]
		[Address(RVA = "0x5946820", Offset = "0x5945820", VA = "0x5946820")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__NapePosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NapePosition): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025A9")]
		[Address(RVA = "0x59468C0", Offset = "0x59458C0", VA = "0x59468C0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__IsCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsCrawler): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025AA")]
		[Address(RVA = "0x5946960", Offset = "0x5945960", VA = "0x5946960")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__IsBald()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsBald): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsBald_g____getter_20_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025AB")]
		[Address(RVA = "0x5946A00", Offset = "0x5945A00", VA = "0x5946A00")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__IsWarded()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsWarded): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_21_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_21_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025AC")]
		[Address(RVA = "0x5946AE0", Offset = "0x5945AE0", VA = "0x5946AE0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__IsHardened()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsHardened): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_22);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025AD")]
		[Address(RVA = "0x5946B80", Offset = "0x5945B80", VA = "0x5946B80")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__FocusRange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_23);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_23);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025AE")]
		[Address(RVA = "0x5946C60", Offset = "0x5945C60", VA = "0x5946C60")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__FocusTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_24_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_24_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025AF")]
		[Address(RVA = "0x5946D40", Offset = "0x5945D40", VA = "0x5946D40")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__FarAttackCooldown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____get);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025B0")]
		[Address(RVA = "0x5946E20", Offset = "0x5945E20", VA = "0x5946E20")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__AttackWait()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackWait): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_26);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_26);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025B1")]
		[Address(RVA = "0x5946F00", Offset = "0x5945F00", VA = "0x5946F00")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__CanRun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__CanRun): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_27_0);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_27_1);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025B2")]
		[Address(RVA = "0x5946FE0", Offset = "0x5945FE0", VA = "0x5946FE0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__AttackSpeedMultiplier()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier): 3 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			Action<CustomLogicTitanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_01;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g);
			__this_00 = new Action<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1e38);
			__this_01 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60025B3")]
		[Address(RVA = "0x59470C0", Offset = "0x59460C0", VA = "0x59470C0")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__HeadMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadMount): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_29_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025B4")]
		[Address(RVA = "0x5947160", Offset = "0x5946160", VA = "0x5947160")]
		public static CLPropertyBinding<CustomLogicTitanBuiltin> __CreatePropertyBinding__NeckMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NeckMount): 2 lines keep C-only constructs
			Func<CustomLogicTitanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTitanBuiltin> __this_00;

			__this = new Func<CustomLogicTitanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_30_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60025B5")]
		[Address(RVA = "0x5947200", Offset = "0x5946200", VA = "0x5947200")]
		public static CLMethodBinding<CustomLogicTitanBuiltin> __CreateMethodBinding__Target()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Target): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTitanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTitanBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461dc == false) {
				Il2CppMethodInitialized_075461dc = true;
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTitanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTitanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTitanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__31_0);
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTitanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60025B6")]
		[Address(RVA = "0x5947340", Offset = "0x5946340", VA = "0x5947340")]
		public static CLMethodBinding<CustomLogicTitanBuiltin> __CreateMethodBinding__Wander()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Wander): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTitanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTitanBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461dd == false) {
				Il2CppMethodInitialized_075461dd = true;
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTitanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTitanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTitanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__32_0);
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTitanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60025B7")]
		[Address(RVA = "0x5947480", Offset = "0x5946480", VA = "0x5947480")]
		public static CLMethodBinding<CustomLogicTitanBuiltin> __CreateMethodBinding__Blind()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Blind): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTitanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTitanBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461de == false) {
				Il2CppMethodInitialized_075461de = true;
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTitanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTitanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTitanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__33_0);
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTitanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60025B8")]
		[Address(RVA = "0x59475C0", Offset = "0x59465C0", VA = "0x59475C0")]
		public static CLMethodBinding<CustomLogicTitanBuiltin> __CreateMethodBinding__Cripple()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Cripple): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTitanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTitanBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461df == false) {
				Il2CppMethodInitialized_075461df = true;
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTitanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTitanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTitanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__34_0);
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTitanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60025B9")]
		[Address(RVA = "0x5947700", Offset = "0x5946700", VA = "0x5947700")]
		public static CLMethodBinding<CustomLogicTitanBuiltin> __CreateMethodBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Stun): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTitanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTitanBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461e0 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__35_0) ;
				Il2CppMethodInitialized_075461e0 = true;
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTitanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTitanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTitanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTitanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__35_0);
				pCVar2 = typeof(CustomLogicTitanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTitanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001786")]
	[FieldOffset(Offset = "0x38")]
	public readonly BasicTitan Titan;

	[Token(Token = "0x4001787")]
	[FieldOffset(Offset = "0x40")]
	public readonly BaseTitanAIController Controller;

	[Token(Token = "0x1700049F")]
	public int DeathType
	{
		[Token(Token = "0x6002558")]
		[Address(RVA = "0x5943C80", Offset = "0x5942C80", VA = "0x5943C80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_DeathType): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.DeathType;
		}
		[Token(Token = "0x6002559")]
		[Address(RVA = "0x5943CA0", Offset = "0x5942CA0", VA = "0x5943CA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_DeathType): 5 lines keep C-only constructs
			BasicTitan pCVar1;
			Il2CppType handle;
			bool bVar2;
			Type enumType;
			object pIVar3;
			String pSVar4;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a43d82: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			handle = TypeRef_Characters_TitanDeathType;
			if (bVar2) {
				enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				iStack_2c = value;
				pIVar3 = (object)iStack_2c;
				bVar2 = Enum.IsDefined(enumType, pIVar3);
				if (!bVar2) {
					iStack_30 = value;
					pIVar3 = (object)iStack_30;
					pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown death type: {0}");
					pSVar4 = String.Format(pSVar4, pIVar3);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar4);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_set_DeathType);
					throw (object)__this_00;
				}
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a43d82;
				pCVar1.DeathType = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A0")]
	public CustomLogicVector3Builtin DeathVelocity
	{
		[Token(Token = "0x600255A")]
		[Address(RVA = "0x5943E00", Offset = "0x5942E00", VA = "0x5943E00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_DeathVelocity): clean
			BasicTitan pCVar1;
			CustomLogicVector3Builtin pCVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar2;
		}
		[Token(Token = "0x600255B")]
		[Address(RVA = "0x5943E30", Offset = "0x5942E30", VA = "0x5943E30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_DeathVelocity): clean
			BasicTitan pCVar1;
			float fVar2;
			float fVar3;
			bool bVar4;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a43e82: ;
				throw new NullReferenceException();
			}
			bVar4 = pCVar1.IsMine();
			if (bVar4) {
				if ((value == null) ||(pCVar1 = this.Titan, pCVar1 == null)) goto label_05a43e82;
				fVar2 = value.Value.x;
				fVar3 = value.Value.y;
				pCVar1.DeathVelocity.z = value.Value.z;
				pCVar1.DeathVelocity.x = fVar2;
				pCVar1.DeathVelocity.y = fVar3;
			}
			return;
		}
	}

	[Token(Token = "0x170004A1")]
	public float Size
	{
		[Token(Token = "0x600255C")]
		[Address(RVA = "0x5943E90", Offset = "0x5942E90", VA = "0x5943E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_Size): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.Size;
		}
		[Token(Token = "0x600255D")]
		[Address(RVA = "0x5943EB0", Offset = "0x5942EB0", VA = "0x5943EB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_Size): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Titan;
				if (pCVar1 != null) {
					pCVar1.SetSize(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004A2")]
	public float HeadSize
	{
		[Token(Token = "0x600255E")]
		[Address(RVA = "0x5943F10", Offset = "0x5942F10", VA = "0x5943F10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_HeadSize): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.HeadSize;
		}
		[Token(Token = "0x600255F")]
		[Address(RVA = "0x5943F30", Offset = "0x5942F30", VA = "0x5943F30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_HeadSize): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.HeadSize = value;
			return;
		}
	}

	[Token(Token = "0x170004A3")]
	public float RunSpeedBase
	{
		[Token(Token = "0x6002560")]
		[Address(RVA = "0x5943F50", Offset = "0x5942F50", VA = "0x5943F50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedBase): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RunSpeedBase;
		}
		[Token(Token = "0x6002561")]
		[Address(RVA = "0x5943F70", Offset = "0x5942F70", VA = "0x5943F70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedBase): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a43fb8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a43fb8;
				pCVar1.RunSpeedBase = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A4")]
	public float WalkSpeedBase
	{
		[Token(Token = "0x6002562")]
		[Address(RVA = "0x5943FC0", Offset = "0x5942FC0", VA = "0x5943FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedBase): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WalkSpeedBase;
		}
		[Token(Token = "0x6002563")]
		[Address(RVA = "0x5943FE0", Offset = "0x5942FE0", VA = "0x5943FE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedBase): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44028: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44028;
				pCVar1.WalkSpeedBase = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A5")]
	public float WalkSpeedPerLevel
	{
		[Token(Token = "0x6002564")]
		[Address(RVA = "0x5944030", Offset = "0x5943030", VA = "0x5944030")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedPerLevel): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WalkSpeedPerLevel;
		}
		[Token(Token = "0x6002565")]
		[Address(RVA = "0x5944050", Offset = "0x5943050", VA = "0x5944050")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedPerLevel): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44098: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44098;
				pCVar1.WalkSpeedPerLevel = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A6")]
	public float RunSpeedPerLevel
	{
		[Token(Token = "0x6002566")]
		[Address(RVA = "0x59440A0", Offset = "0x59430A0", VA = "0x59440A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedPerLevel): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RunSpeedPerLevel;
		}
		[Token(Token = "0x6002567")]
		[Address(RVA = "0x59440C0", Offset = "0x59430C0", VA = "0x59440C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedPerLevel): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44108: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44108;
				pCVar1.RunSpeedPerLevel = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A7")]
	public float TurnSpeed
	{
		[Token(Token = "0x6002568")]
		[Address(RVA = "0x5944110", Offset = "0x5943110", VA = "0x5944110")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_TurnSpeed): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.TurnSpeed;
		}
		[Token(Token = "0x6002569")]
		[Address(RVA = "0x5944130", Offset = "0x5943130", VA = "0x5944130")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_TurnSpeed): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44178: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44178;
				pCVar1.TurnSpeed = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A8")]
	public float RotateSpeed
	{
		[Token(Token = "0x600256A")]
		[Address(RVA = "0x5944180", Offset = "0x5943180", VA = "0x5944180")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_RotateSpeed): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RotateSpeed;
		}
		[Token(Token = "0x600256B")]
		[Address(RVA = "0x59441A0", Offset = "0x59431A0", VA = "0x59441A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_RotateSpeed): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a441e8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a441e8;
				pCVar1.RotateSpeed = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004A9")]
	public float JumpForce
	{
		[Token(Token = "0x600256C")]
		[Address(RVA = "0x59441F0", Offset = "0x59431F0", VA = "0x59441F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_JumpForce): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.JumpForce;
		}
		[Token(Token = "0x600256D")]
		[Address(RVA = "0x5944210", Offset = "0x5943210", VA = "0x5944210")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_JumpForce): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44258: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44258;
				pCVar1.JumpForce = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AA")]
	public float ActionPause
	{
		[Token(Token = "0x600256E")]
		[Address(RVA = "0x5944260", Offset = "0x5943260", VA = "0x5944260")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_ActionPause): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.ActionPause;
		}
		[Token(Token = "0x600256F")]
		[Address(RVA = "0x5944280", Offset = "0x5943280", VA = "0x5944280")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_ActionPause): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a442c8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a442c8;
				pCVar1.ActionPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AB")]
	public float AttackPause
	{
		[Token(Token = "0x6002570")]
		[Address(RVA = "0x59442D0", Offset = "0x59432D0", VA = "0x59442D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_AttackPause): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AttackPause;
		}
		[Token(Token = "0x6002571")]
		[Address(RVA = "0x59442F0", Offset = "0x59432F0", VA = "0x59442F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_AttackPause): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44338: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44338;
				pCVar1.AttackPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AC")]
	public float TurnPause
	{
		[Token(Token = "0x6002572")]
		[Address(RVA = "0x5944340", Offset = "0x5943340", VA = "0x5944340")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_TurnPause): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.TurnPause;
		}
		[Token(Token = "0x6002573")]
		[Address(RVA = "0x5944360", Offset = "0x5943360", VA = "0x5944360")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_TurnPause): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a443a8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a443a8;
				pCVar1.TurnPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AD")]
	public float Stamina
	{
		[Token(Token = "0x6002574")]
		[Address(RVA = "0x59443B0", Offset = "0x59433B0", VA = "0x59443B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_Stamina): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CurrentSprintStamina;
		}
		[Token(Token = "0x6002575")]
		[Address(RVA = "0x59443D0", Offset = "0x59433D0", VA = "0x59443D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_Stamina): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44418: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44418;
				pCVar1.CurrentSprintStamina = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AE")]
	public float MaxStamina
	{
		[Token(Token = "0x6002576")]
		[Address(RVA = "0x5944420", Offset = "0x5943420", VA = "0x5944420")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_MaxStamina): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.MaxSprintStamina;
		}
		[Token(Token = "0x6002577")]
		[Address(RVA = "0x5944440", Offset = "0x5943440", VA = "0x5944440")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_MaxStamina): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44488: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44488;
				pCVar1.MaxSprintStamina = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004AF")]
	public CustomLogicVector3Builtin NapePosition
	{
		[Token(Token = "0x6002578")]
		[Address(RVA = "0x5944490", Offset = "0x5943490", VA = "0x5944490")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_NapePosition): clean
			BasicTitan pCVar1;
			BasicTitanComponentCache pCVar2;
			Component __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin pCVar3;

			pCVar1 = this.Titan;
			if (((pCVar1 != null) &&(pCVar2 = pCVar1.BasicCache, pCVar2 != null)) &&(__this_00 = (Component)pCVar2.NapeHurtbox, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					return pCVar3;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004B0")]
	public bool IsCrawler
	{
		[Token(Token = "0x6002579")]
		[Address(RVA = "0x59444E0", Offset = "0x59434E0", VA = "0x59444E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsCrawler): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.IsCrawler;
		}
	}

	[Token(Token = "0x170004B1")]
	public bool IsBald
	{
		[Token(Token = "0x600257A")]
		[Address(RVA = "0x5944500", Offset = "0x5943500", VA = "0x5944500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsBald): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._hairCut;
		}
	}

	[Token(Token = "0x170004B2")]
	public bool IsWarded
	{
		[Token(Token = "0x600257B")]
		[Address(RVA = "0x5944520", Offset = "0x5943520", VA = "0x5944520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsWarded): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.isWarded;
		}
		[Token(Token = "0x600257C")]
		[Address(RVA = "0x5944540", Offset = "0x5943540", VA = "0x5944540")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_IsWarded): clean
			BasicTitan __this_00;

			__this_00 = this.Titan;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetWarded(value);
			return;
		}
	}

	[Token(Token = "0x170004B3")]
	public bool IsHardened
	{
		[Token(Token = "0x600257D")]
		[Address(RVA = "0x5944560", Offset = "0x5943560", VA = "0x5944560")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsHardened): clean
			BasicTitan pCVar1;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CurrentWardedWeakSpot != 0;
		}
	}

	[Token(Token = "0x170004B4")]
	public float FocusRange
	{
		[Token(Token = "0x600257E")]
		[Address(RVA = "0x5944580", Offset = "0x5943580", VA = "0x5944580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_FocusRange): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a445c6: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a445c6;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a445c6;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x600257F")]
		[Address(RVA = "0x59445D0", Offset = "0x59435D0", VA = "0x59445D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_FocusRange): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44627: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44627;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a44627;
					pCVar2.FocusRange = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x170004B5")]
	public float FocusTime
	{
		[Token(Token = "0x6002580")]
		[Address(RVA = "0x5944630", Offset = "0x5943630", VA = "0x5944630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_FocusTime): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44676: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44676;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a44676;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x6002581")]
		[Address(RVA = "0x5944680", Offset = "0x5943680", VA = "0x5944680")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_FocusTime): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a446d7: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a446d7;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a446d7;
					pCVar2.FocusTime = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x170004B6")]
	public float FarAttackCooldown
	{
		[Token(Token = "0x6002582")]
		[Address(RVA = "0x59446E0", Offset = "0x59436E0", VA = "0x59446E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_FarAttackCooldown): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44729: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44729;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a44729;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x6002583")]
		[Address(RVA = "0x5944730", Offset = "0x5943730", VA = "0x5944730")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_FarAttackCooldown): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a4478a: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a4478a;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a4478a;
					pCVar2.FarAttackCooldown = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x170004B7")]
	public float AttackWait
	{
		[Token(Token = "0x6002584")]
		[Address(RVA = "0x5944790", Offset = "0x5943790", VA = "0x5944790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_AttackWait): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a447d9: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a447d9;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a447d9;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x6002585")]
		[Address(RVA = "0x59447E0", Offset = "0x59437E0", VA = "0x59447E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_AttackWait): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a4483a: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a4483a;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a4483a;
					pCVar2.AttackWait = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x170004B8")]
	public bool CanRun
	{
		[Token(Token = "0x6002586")]
		[Address(RVA = "0x5944840", Offset = "0x5943840", VA = "0x5944840")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_CanRun): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return false;
				}
				pCVar1 = this.Titan;
				if (pCVar1 != null) {
					if (pCVar1.AI == false) {
						return false;
					}
					pCVar2 = this.Controller;
					if (pCVar2 != null) {
						return pCVar2.IsRun != false;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002587")]
		[Address(RVA = "0x59448A0", Offset = "0x59438A0", VA = "0x59448A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_CanRun): clean
			BasicTitan pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a448ee: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a448ee;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a448ee;
					pCVar2.IsRun = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x170004B9")]
	public float AttackSpeedMultiplier
	{
		[Token(Token = "0x6002588")]
		[Address(RVA = "0x5944900", Offset = "0x5943900", VA = "0x5944900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_AttackSpeedMultiplier): clean
			BasicTitan pCVar1;
			bool bVar2;
			float fVar3;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44937: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44937;
			}
			return fVar3;
		}
		[Token(Token = "0x6002589")]
		[Address(RVA = "0x5944940", Offset = "0x5943940", VA = "0x5944940")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$set_AttackSpeedMultiplier): clean
			BasicTitan pCVar1;
			bool bVar2;

			pCVar1 = this.Titan;
			if (pCVar1 == null) {
		label_05a44988: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Titan;
				if (pCVar1 == null) goto label_05a44988;
				pCVar1.AttackSpeedMultiplier = value;
			}
			return;
		}
	}

	[Token(Token = "0x170004BA")]
	public CustomLogicTransformBuiltin HeadMount
	{
		[Token(Token = "0x600258A")]
		[Address(RVA = "0x5944990", Offset = "0x5943990", VA = "0x5944990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_HeadMount): clean
			BasicTitan pCVar1;
			BasicTitanComponentCache pCVar2;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Titan;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.BasicCache, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			transform = pCVar2.Head;
			__this_00 = new CustomLogicTransformBuiltin(transform);
			return __this_00;
		}
	}

	[Token(Token = "0x170004BB")]
	public CustomLogicTransformBuiltin NeckMount
	{
		[Token(Token = "0x600258B")]
		[Address(RVA = "0x5944A00", Offset = "0x5943A00", VA = "0x5944A00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_NeckMount): clean
			BasicTitan pCVar1;
			BasicTitanComponentCache pCVar2;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Titan;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.BasicCache, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			transform = pCVar2.Neck;
			__this_00 = new CustomLogicTransformBuiltin(transform);
			return __this_00;
		}
	}

	[Token(Token = "0x170004BC")]
	public override string ClassName
	{
		[Token(Token = "0x6002592")]
		[Address(RVA = "0x5944C60", Offset = "0x5943C60", VA = "0x5944C60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_ClassName): clean
			return "Titan";
		}
	}

	[Token(Token = "0x170004BD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002593")]
		[Address(RVA = "0x5944C90", Offset = "0x5943C90", VA = "0x5944C90", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170004BE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002594")]
		[Address(RVA = "0x5944CA0", Offset = "0x5943CA0", VA = "0x5944CA0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170004BF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002595")]
		[Address(RVA = "0x5944CB0", Offset = "0x5943CB0", VA = "0x5944CB0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002557")]
	[Address(RVA = "0x5943C00", Offset = "0x5942C00", VA = "0x5943C00")]
	public CustomLogicTitanBuiltin(BasicTitan titan)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$.ctor): clean
		BasicTitan __this_00;
		BaseTitanAIController pCVar1;

		base((BaseCharacter)titan);
		this.Titan = titan;
		__this_00 = this.Titan;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.GetComponent<BaseTitanAIController>();
		this.Controller = pCVar1;
		return;
	}

	[Token(Token = "0x600258C")]
	[Address(RVA = "0x5944A70", Offset = "0x5943A70", VA = "0x5944A70")]
	[Obsolete("Use SetTarget(target, focusDuration) instead.")]
	public void Target(object enemyObj, float focus)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$Target): clean
		this.SetTarget(enemyObj, focus);
		return;
	}

	[Token(Token = "0x600258D")]
	[Address(RVA = "0x5944A80", Offset = "0x5943A80", VA = "0x5944A80")]
	public void Wander()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$Wander): clean
		BasicTitan pCVar1;
		BaseTitanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Titan;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Titan;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return;
				}
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.CancelOrder();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600258E")]
	[Address(RVA = "0x5944B20", Offset = "0x5943B20", VA = "0x5944B20")]
	public void Blind()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$Blind): clean
		BasicTitan pCVar1;
		bool bVar2;

		pCVar1 = this.Titan;
		if (pCVar1 == null) {
	label_05a44b66: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Titan;
			if (pCVar1 == null) goto label_05a44b66;
			if (pCVar1.Dead == false) {
				pCVar1.Blind();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600258F")]
	[Address(RVA = "0x5944B70", Offset = "0x5943B70", VA = "0x5944B70")]
	public void Cripple(float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$Cripple): clean
		BasicTitan pCVar1;
		bool bVar2;

		pCVar1 = this.Titan;
		if (pCVar1 == null) {
	label_05a44bce: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Titan;
			if (pCVar1 == null) goto label_05a44bce;
			if (pCVar1.Dead == false) {
				pCVar1.Cripple(time);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6002590")]
	[Address(RVA = "0x5944BE0", Offset = "0x5943BE0", VA = "0x5944BE0")]
	public void Stun(float duration = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$Stun): clean
		BasicTitan pCVar1;
		bool bVar2;

		pCVar1 = this.Titan;
		if (pCVar1 == null) {
	label_05a44c58: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Titan;
			if (pCVar1 == null) goto label_05a44c58;
			if (pCVar1.Dead == false) {
				if ((duration == 0.0) && (!NAN(duration))) {
					duration = pCVar1.StunTime;
				}
				pCVar1.Stun(duration, true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6002591")]
	[Address(RVA = "0x5944AE0", Offset = "0x5943AE0", VA = "0x5944AE0")]
	private new bool IsAlive()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c (CustomLogic.CustomLogicTitanBuiltin$$IsAlive): clean
		BasicTitan pCVar1;
		bool bVar2;

		pCVar1 = this.Titan;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return false;
			}
			pCVar1 = this.Titan;
			if (pCVar1 != null) {
				return pCVar1.Dead == false;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTitanBuiltin.c.

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"DeathType");
		__this.Add((Il2CppObject *)"DeathVelocity");
		__this.Add((Il2CppObject *)"Size");
		__this.Add((Il2CppObject *)"HeadSize");
		__this.Add((Il2CppObject *)"RunSpeedBase");
		__this.Add((Il2CppObject *)"WalkSpeedBase");
		__this.Add((Il2CppObject *)"WalkSpeedPerLevel");
		__this.Add((Il2CppObject *)"RunSpeedPerLevel");
		__this.Add((Il2CppObject *)"TurnSpeed");
		__this.Add((Il2CppObject *)"RotateSpeed");
		__this.Add((Il2CppObject *)"JumpForce");
		__this.Add((Il2CppObject *)"ActionPause");
		__this.Add((Il2CppObject *)"AttackPause");
		__this.Add((Il2CppObject *)"TurnPause");
		__this.Add((Il2CppObject *)"Stamina");
		__this.Add((Il2CppObject *)"MaxStamina");
		__this.Add((Il2CppObject *)"NapePosition");
		__this.Add((Il2CppObject *)"IsCrawler");
		__this.Add((Il2CppObject *)"IsBald");
		__this.Add((Il2CppObject *)"IsWarded");
		__this.Add((Il2CppObject *)"IsHardened");
		__this.Add((Il2CppObject *)"FocusRange");
		__this.Add((Il2CppObject *)"FocusTime");
		__this.Add((Il2CppObject *)"FarAttackCooldown");
		__this.Add((Il2CppObject *)"AttackWait");
		__this.Add((Il2CppObject *)"CanRun");
		__this.Add((Il2CppObject *)"AttackSpeedMultiplier");
		__this.Add((Il2CppObject *)"HeadMount");
		__this.Add((Il2CppObject *)"NeckMount");
		__this.Add((Il2CppObject *)"Target");
		__this.Add((Il2CppObject *)"Wander");
		__this.Add((Il2CppObject *)"Blind");
		__this.Add((Il2CppObject *)"Cripple");
		__this.Add((Il2CppObject *)"Stun");
		CustomLogicTitanBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__DeathType_g____getter_2_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__DeathType_g____setter_2_1(CustomLogicTitanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.DeathType = value;
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DeathVelocity_g____getter_3_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		CustomLogicVector3Builtin pCVar2;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		pCVar2 = ((CustomLogicVector3Builtin)(Vector3)pCVar1.DeathVelocity);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__DeathVelocity_g____setter_3_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		float fVar2;
		float fVar3;
		bool bVar4;
		CustomLogicVector3Builtin pCVar5;

		pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a47eeb: ;
			throw new NullReferenceException();
		}
		bVar4 = pCVar1.IsMine();
		if (bVar4) {
			if ((pCVar5 == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) goto label_05a47eeb;
			fVar2 = pCVar5.Value.x;
			fVar3 = pCVar5.Value.y;
			pCVar1.DeathVelocity.z = pCVar5.Value.z;
			pCVar1.DeathVelocity.x = fVar2;
			pCVar1.DeathVelocity.y = fVar3;
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Size_g____getter_4_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Size_g____setter_4_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float size;

		size = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = __i.Titan;
				if (pCVar1 != null) {
					pCVar1.SetSize(size);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HeadSize_g____getter_5_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__HeadSize_g____setter_5_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		pCVar1.HeadSize = fVar2;
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__RunSpeedBase_g____getter_6_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__RunSpeedBase_g____setter_6_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48183;
					pCVar1.RunSpeedBase = fVar3;
				}
				return;
			}
		}
	label_05a48183: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__WalkSpeedBase_g____getter_7_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__WalkSpeedBase_g____setter_7_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48273;
					pCVar1.WalkSpeedBase = fVar3;
				}
				return;
			}
		}
	label_05a48273: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_8_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_8_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48363;
					pCVar1.WalkSpeedPerLevel = fVar3;
				}
				return;
			}
		}
	label_05a48363: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__RunSpeedPerLevel_g____getter_9_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__RunSpeedPerLevel_g____setter_9_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48453;
					pCVar1.RunSpeedPerLevel = fVar3;
				}
				return;
			}
		}
	label_05a48453: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__TurnSpeed_g____getter_10_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__TurnSpeed_g____setter_10_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48543;
					pCVar1.TurnSpeed = fVar3;
				}
				return;
			}
		}
	label_05a48543: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__RotateSpeed_g____getter_11_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__RotateSpeed_g____setter_11_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48633;
					pCVar1.RotateSpeed = fVar3;
				}
				return;
			}
		}
	label_05a48633: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__JumpForce_g____getter_12_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__JumpForce_g____setter_12_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48723;
					pCVar1.JumpForce = fVar3;
				}
				return;
			}
		}
	label_05a48723: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__ActionPause_g____getter_13_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__ActionPause_g____setter_13_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48813;
					pCVar1.ActionPause = fVar3;
				}
				return;
			}
		}
	label_05a48813: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__AttackPause_g____getter_14_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__AttackPause_g____setter_14_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48903;
					pCVar1.AttackPause = fVar3;
				}
				return;
			}
		}
	label_05a48903: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__TurnPause_g____getter_15_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__TurnPause_g____setter_15_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a489f3;
					pCVar1.TurnPause = fVar3;
				}
				return;
			}
		}
	label_05a489f3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Stamina_g____getter_16_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__Stamina_g____setter_16_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48ae3;
					pCVar1.CurrentSprintStamina = fVar3;
				}
				return;
			}
		}
	label_05a48ae3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__MaxStamina_g____getter_17_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__MaxStamina_g____setter_17_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a48bd3;
					pCVar1.MaxSprintStamina = fVar3;
				}
				return;
			}
		}
	label_05a48bd3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__NapePosition_g____getter_18_0(CustomLogicTitanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.NapePosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsCrawler>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__IsCrawler_g____getter_19_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsBald>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__IsBald_g____getter_20_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__IsWarded_g____getter_21_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__IsWarded_g____setter_21_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan __this;
		bool warded;

		warded = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Titan, __this == null)) {
			throw new NullReferenceException();
		}
		__this.SetWarded(warded);
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsHardened>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__IsHardened_g____getter_22_0(CustomLogicTitanBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Titan == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__FocusRange_g____getter_23_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a48dde: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a48dde;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a48dde;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__FocusRange_g____setter_23_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a48ea2: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a48ea2;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a48ea2;
				pCVar2.FocusRange = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__FocusTime_g____getter_24_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a48f1e: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a48f1e;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a48f1e;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|24_1: clean
	private static void Bindings____CreatePropertyBinding__FocusTime_g____setter_24_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a48fe2: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a48fe2;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a48fe2;
				pCVar2.FocusTime = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__FarAttackCooldown_g____getter_25_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a49061: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a49061;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a49061;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|25_1: clean
	private static void Bindings____CreatePropertyBinding__FarAttackCooldown_g____setter_25_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a49125: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a49125;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a49125;
				pCVar2.FarAttackCooldown = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWait_g____getter_26_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a491a1: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a491a1;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a491a1;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|26_1: clean
	private static void Bindings____CreatePropertyBinding__AttackWait_g____setter_26_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a49265: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a49265;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a49265;
				pCVar2.AttackWait = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__CanRun_g____getter_27_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a492df: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a492df;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a492df;
				goto label_05a492c0;
			}
		}
	label_05a492c0: ;
		return pIVar4;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____setter|27_1: clean
	private static void Bindings____CreatePropertyBinding__CanRun_g____setter_27_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		bool bVar4;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a49398: ;
			throw new NullReferenceException();
		}
		bVar4 = pCVar1.IsMine();
		if (bVar4) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a49398;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a49398;
				pCVar2.IsRun = bVar3;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_28_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		bool bVar2;
		object pIVar3;

		if ((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) {
	label_05a493ff: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __i.Titan;
			if (pCVar1 == null) goto label_05a493ff;
		}
		return pIVar3;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|28_1: clean
	private static void Bindings____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_28_1(CustomLogicTitanBuiltin __i, object __v)
	{
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Titan;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Titan;
					if (pCVar1 == null) goto label_05a494b3;
					pCVar1.AttackSpeedMultiplier = fVar3;
				}
				return;
			}
		}
	label_05a494b3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__HeadMount_g____getter_29_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BasicTitanComponentCache pCVar2;
		Transform transform;
		CustomLogicTransformBuiltin __this;

		if (((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) ||(pCVar2 = pCVar1.BasicCache, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		transform = pCVar2.Head;
		__this = new CustomLogicTransformBuiltin(transform);
		return (object)__this;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__NeckMount_g____getter_30_0(CustomLogicTitanBuiltin __i)
	{
		BasicTitan pCVar1;
		BasicTitanComponentCache pCVar2;
		Transform transform;
		CustomLogicTransformBuiltin __this;

		if (((__i == null) ||(pCVar1 = __i.Titan, pCVar1 == null)) ||(pCVar2 = pCVar1.BasicCache, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		transform = pCVar2.Neck;
		__this = new CustomLogicTransformBuiltin(transform);
		return (object)__this;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicTitanBuiltin.Bindings.c();
		CustomLogicTitanBuiltin.Bindings.c.__9 =(CustomLogicTitanBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__Target_b__31_0(CustomLogicTitanBuiltin __c, Object[] __a)
	{
		int iVar1;
		object target;
		object obj;
		float focusDuration;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			target = __a[0];
			obj = __a[1];
			focusDuration = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				__c.SetTarget(target, focusDuration);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__Wander_b__32_0(CustomLogicTitanBuiltin __c, Object[] __a)
	{
		BasicTitan pCVar1;
		BaseTitanAIController __this_00;
		bool bVar2;

		if ((__c != null) &&(pCVar1 = __c.Titan, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return null;
			}
			pCVar1 = __c.Titan;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return null;
				}
				if (pCVar1.AI == false) {
					return null;
				}
				__this_00 = __c.Controller;
				if (__this_00 != null) {
					__this_00.CancelOrder();
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__Blind_b__33_0(CustomLogicTitanBuiltin __c, Object[] __a)
	{
		BasicTitan pCVar1;
		bool bVar2;

		if ((__c == null) ||(pCVar1 = __c.Titan, pCVar1 == null)) {
	label_05a4976d: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __c.Titan;
			if (pCVar1 == null) goto label_05a4976d;
			if (pCVar1.Dead == false) {
				pCVar1.Blind();
				return null;
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__Cripple_b__34_0(CustomLogicTitanBuiltin __c, Object[] __a)
	{
		object obj;
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(pCVar1 = __c.Titan, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Titan;
					if (pCVar1 == null) goto label_05a4984a;
					if (pCVar1.Dead == false) {
						pCVar1.Cripple(fVar3);
					}
				}
				return null;
			}
		}
	label_05a4984a: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__Stun_b__35_0(CustomLogicTitanBuiltin __c, Object[] __a)
	{
		object obj;
		BasicTitan pCVar1;
		bool bVar2;
		float fVar3;

		if (__a != null) {
			if (__a.Length == 0) {
				fVar3 = 0.0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(obj);
			}
			if ((__c != null) &&(pCVar1 = __c.Titan, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Titan;
					if (pCVar1 == null) goto label_05a49955;
					if (pCVar1.Dead == false) {
						if ((fVar3 == 0.0) && (!NAN(fVar3))) {
							fVar3 = pCVar1.StunTime;
						}
						pCVar1.Stun(fVar3, true);
					}
				}
				return null;
			}
		}
	label_05a49955: ;
		throw new NullReferenceException();
	}
}
