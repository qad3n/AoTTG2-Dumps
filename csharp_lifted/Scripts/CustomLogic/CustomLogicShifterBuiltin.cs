// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicShifterBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicShifterBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicShifterBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004D2")]
[CompilerGenerated]
internal class CustomLogicShifterBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20004D3")]
	public new static class Factory
	{
		[Token(Token = "0x6002507")]
		[Address(RVA = "0x593F810", Offset = "0x593E810", VA = "0x593F810")]
		public static CustomLogicShifterBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004D4")]
	public new static class Bindings
	{
		[Token(Token = "0x400177A")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002508")]
		[Address(RVA = "0x593F8A0", Offset = "0x593E8A0", VA = "0x593F8A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicShifterBuiltin> pCVar3;
			CLMethodBinding<CustomLogicShifterBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x8b67f169) {
				if (uVar2 < 0x3da81e8e) {
					if (uVar2 < 0x246c98e1) {
						if (uVar2 == 0x7186f3c) {
							bVar1 = (name == "NapePosition");
							if (bVar1) {
								pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__NapePosition();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1d46812f) {
							bVar1 = (name == "AttackSpeedMultiplier");
							if (bVar1) {
								pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__AttackSpeedMultiplier();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x246c98e0) {
							bVar1 = (name == "RunSpeedBase");
							if (bVar1) {
								pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__RunSpeedBase();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x320c4020) {
						if (uVar2 == 0x2ae002cc) {
							bVar1 = (name == "JumpForce");
							if (bVar1) {
								pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__JumpForce();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x320c401f) {
							bVar1 = (name == "ActionPause");
							if (bVar1) {
								pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__ActionPause();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x384157d7) {
						bVar1 = (name == "MoveToExactCallback");
						if (bVar1) {
							pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__MoveToExactCallback();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x3da81e8d) {
						bVar1 = (name == "RotateSpeed");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__RotateSpeed();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x6709f835) {
					if (uVar2 == 0x46b92be8) {
						bVar1 = (name == "FocusRange");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__FocusRange();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5d992b41) {
						bVar1 = (name == "Stun");
						if (bVar1) {
							pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Stun();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x6709f834) {
						bVar1 = (name == "Wander");
						if (bVar1) {
							pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Wander();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x6fd42729) {
					if (uVar2 == 0x69ba519b) {
						bVar1 = (name == "FarAttackCooldown");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__FarAttackCooldown();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6fd42728) {
						bVar1 = (name == "WalkSpeedPerLevel");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__WalkSpeedPerLevel();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8b67f168) {
					bVar1 = (name == "Target");
					if (bVar1) {
						pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Target();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x7c69a11c) {
					bVar1 = (name == "MoveToExact");
					if (bVar1) {
						pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__MoveToExact();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xbb10b4ad) {
				if (uVar2 < 0x90cf188b) {
					if (uVar2 == 0x8ba9331d) {
						bVar1 = (name == "Attack");
						if (bVar1) {
							pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Attack();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x8dc5a9a3) {
						bVar1 = (name == "NeckMount");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__NeckMount();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x90cf188a) {
						bVar1 = (name == "FocusTime");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__FocusTime();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa6478e7d) {
					if (uVar2 == 0x9891bf88) {
						bVar1 = (name == "AttackWait");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__AttackWait();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa6478e7c) {
						bVar1 = (name == "Size");
						if (bVar1) {
							pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__Size();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xb5f3afdd) {
					bVar1 = (name == "TurnSpeed");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__TurnSpeed();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xbb10b4ac) {
					bVar1 = (name == "HeadMount");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__HeadMount();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd0d86e03) {
				if (uVar2 == 0xc746e5f5) {
					bVar1 = (name == "AttackPause");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__AttackPause();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xcf6befb4) {
					bVar1 = (name == "DeathAnimLength");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__DeathAnimLength();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd0d86e02) {
					bVar1 = (name == "RunSpeedPerLevel");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__RunSpeedPerLevel();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe4d66f55) {
				if (uVar2 == 0xd2528dac) {
					bVar1 = (name == "TurnPause");
					if (bVar1) {
						pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__TurnPause();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe4d66f54) {
					bVar1 = (name == "Blind");
					if (bVar1) {
						pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Blind();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xedff5766) {
				bVar1 = (name == "WalkSpeedBase");
				if (bVar1) {
					pCVar3 = CustomLogicShifterBuiltin.Bindings.__CreatePropertyBinding__WalkSpeedBase();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf96e74c8) {
				bVar1 = (name == "Cripple");
				if (bVar1) {
					pCVar4 = CustomLogicShifterBuiltin.Bindings.__CreateMethodBinding__Cripple();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002509")]
		[Address(RVA = "0x5940330", Offset = "0x593F330", VA = "0x5940330")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__Size()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__Size): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250A")]
		[Address(RVA = "0x5940410", Offset = "0x593F410", VA = "0x5940410")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RunSpeedBase()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250B")]
		[Address(RVA = "0x59404F0", Offset = "0x593F4F0", VA = "0x59404F0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__WalkSpeedBase()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250C")]
		[Address(RVA = "0x59405D0", Offset = "0x593F5D0", VA = "0x59405D0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__WalkSpeedPerLevel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250D")]
		[Address(RVA = "0x59406B0", Offset = "0x593F6B0", VA = "0x59406B0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RunSpeedPerLevel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250E")]
		[Address(RVA = "0x5940790", Offset = "0x593F790", VA = "0x5940790")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__TurnSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600250F")]
		[Address(RVA = "0x5940870", Offset = "0x593F870", VA = "0x5940870")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__RotateSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002510")]
		[Address(RVA = "0x5940950", Offset = "0x593F950", VA = "0x5940950")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__JumpForce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__JumpForce): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002511")]
		[Address(RVA = "0x5940A30", Offset = "0x593FA30", VA = "0x5940A30")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__ActionPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__ActionPause): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002512")]
		[Address(RVA = "0x5940B10", Offset = "0x593FB10", VA = "0x5940B10")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackPause): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002513")]
		[Address(RVA = "0x5940BF0", Offset = "0x593FBF0", VA = "0x5940BF0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__TurnPause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnPause): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002514")]
		[Address(RVA = "0x5940CD0", Offset = "0x593FCD0", VA = "0x5940CD0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FocusRange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusRange): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002515")]
		[Address(RVA = "0x5940DB0", Offset = "0x593FDB0", VA = "0x5940DB0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FocusTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusTime): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002516")]
		[Address(RVA = "0x5940E90", Offset = "0x593FE90", VA = "0x5940E90")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__FarAttackCooldown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002517")]
		[Address(RVA = "0x5940F70", Offset = "0x593FF70", VA = "0x5940F70")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackWait()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackWait): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002518")]
		[Address(RVA = "0x5941050", Offset = "0x5940050", VA = "0x5941050")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__AttackSpeedMultiplier()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1638);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002519")]
		[Address(RVA = "0x5941130", Offset = "0x5940130", VA = "0x5941130")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__NapePosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NapePosition): 2 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_00;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600251A")]
		[Address(RVA = "0x59411D0", Offset = "0x59401D0", VA = "0x59411D0")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__HeadMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__HeadMount): 2 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_00;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19);
			__this_00 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600251B")]
		[Address(RVA = "0x5941270", Offset = "0x5940270", VA = "0x5941270")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__NeckMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NeckMount): 2 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_00;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20);
			__this_00 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600251C")]
		[Address(RVA = "0x5941310", Offset = "0x5940310", VA = "0x5941310")]
		public static CLPropertyBinding<CustomLogicShifterBuiltin> __CreatePropertyBinding__DeathAnimLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__DeathAnimLength): 3 lines keep C-only constructs
			Func<CustomLogicShifterBuiltin, object> __this;
			Action<CustomLogicShifterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicShifterBuiltin> __this_01;

			__this = new Func<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get);
			__this_00 = new Action<CustomLogicShifterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicShifterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600251D")]
		[Address(RVA = "0x59413F0", Offset = "0x59403F0", VA = "0x59413F0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__MoveToExact()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExact): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546199 == false) {
				Il2CppMethodInitialized_07546199 = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600251E")]
		[Address(RVA = "0x5941530", Offset = "0x5940530", VA = "0x5941530")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__MoveToExactCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExactCallback): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619a == false) {
				Il2CppMethodInitialized_0754619a = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600251F")]
		[Address(RVA = "0x5941670", Offset = "0x5940670", VA = "0x5941670")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Target()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Target): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619b == false) {
				Il2CppMethodInitialized_0754619b = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002520")]
		[Address(RVA = "0x59417B0", Offset = "0x59407B0", VA = "0x59417B0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Wander()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Wander): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619c == false) {
				Il2CppMethodInitialized_0754619c = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002521")]
		[Address(RVA = "0x59418F0", Offset = "0x59408F0", VA = "0x59418F0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Blind()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Blind): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619d == false) {
				Il2CppMethodInitialized_0754619d = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002522")]
		[Address(RVA = "0x5941A30", Offset = "0x5940A30", VA = "0x5941A30")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Cripple()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Cripple): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619e == false) {
				Il2CppMethodInitialized_0754619e = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002523")]
		[Address(RVA = "0x5941B70", Offset = "0x5940B70", VA = "0x5941B70")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Attack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Attack): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754619f == false) {
				Il2CppMethodInitialized_0754619f = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002524")]
		[Address(RVA = "0x5941CB0", Offset = "0x5940CB0", VA = "0x5941CB0")]
		public static CLMethodBinding<CustomLogicShifterBuiltin> __CreateMethodBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Stun): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicShifterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicShifterBuiltin> __this_00;

			if (Il2CppMethodInitialized_075461a0 == false) {
				Il2CppMethodInitialized_075461a0 = true;
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicShifterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicShifterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicShifterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicShifterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0);
				pCVar2 = typeof(CustomLogicShifterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicShifterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001778")]
	[FieldOffset(Offset = "0x38")]
	public readonly BaseShifter Shifter;

	[Token(Token = "0x4001779")]
	[FieldOffset(Offset = "0x40")]
	public readonly BaseTitanAIController Controller;

	[Token(Token = "0x17000487")]
	public float Size
	{
		[Token(Token = "0x60024D6")]
		[Address(RVA = "0x593E8E0", Offset = "0x593D8E0", VA = "0x593E8E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_Size): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.Size;
		}
		[Token(Token = "0x60024D7")]
		[Address(RVA = "0x593E900", Offset = "0x593D900", VA = "0x593E900")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_Size): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetSize(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000488")]
	public float RunSpeedBase
	{
		[Token(Token = "0x60024D8")]
		[Address(RVA = "0x593E960", Offset = "0x593D960", VA = "0x593E960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedBase): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RunSpeedBase;
		}
		[Token(Token = "0x60024D9")]
		[Address(RVA = "0x593E980", Offset = "0x593D980", VA = "0x593E980")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedBase): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3e9c8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3e9c8;
				pCVar1.RunSpeedBase = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000489")]
	public float WalkSpeedBase
	{
		[Token(Token = "0x60024DA")]
		[Address(RVA = "0x593E9D0", Offset = "0x593D9D0", VA = "0x593E9D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedBase): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WalkSpeedBase;
		}
		[Token(Token = "0x60024DB")]
		[Address(RVA = "0x593E9F0", Offset = "0x593D9F0", VA = "0x593E9F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedBase): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ea38: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ea38;
				pCVar1.WalkSpeedBase = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048A")]
	public float WalkSpeedPerLevel
	{
		[Token(Token = "0x60024DC")]
		[Address(RVA = "0x593EA40", Offset = "0x593DA40", VA = "0x593EA40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedPerLevel): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.WalkSpeedPerLevel;
		}
		[Token(Token = "0x60024DD")]
		[Address(RVA = "0x593EA60", Offset = "0x593DA60", VA = "0x593EA60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedPerLevel): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3eaa8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3eaa8;
				pCVar1.WalkSpeedPerLevel = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048B")]
	public float RunSpeedPerLevel
	{
		[Token(Token = "0x60024DE")]
		[Address(RVA = "0x593EAB0", Offset = "0x593DAB0", VA = "0x593EAB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedPerLevel): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RunSpeedPerLevel;
		}
		[Token(Token = "0x60024DF")]
		[Address(RVA = "0x593EAD0", Offset = "0x593DAD0", VA = "0x593EAD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedPerLevel): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3eb18: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3eb18;
				pCVar1.RunSpeedPerLevel = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048C")]
	public float TurnSpeed
	{
		[Token(Token = "0x60024E0")]
		[Address(RVA = "0x593EB20", Offset = "0x593DB20", VA = "0x593EB20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_TurnSpeed): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.TurnSpeed;
		}
		[Token(Token = "0x60024E1")]
		[Address(RVA = "0x593EB40", Offset = "0x593DB40", VA = "0x593EB40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_TurnSpeed): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3eb88: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3eb88;
				pCVar1.TurnSpeed = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048D")]
	public float RotateSpeed
	{
		[Token(Token = "0x60024E2")]
		[Address(RVA = "0x593EB90", Offset = "0x593DB90", VA = "0x593EB90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_RotateSpeed): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RotateSpeed;
		}
		[Token(Token = "0x60024E3")]
		[Address(RVA = "0x593EBB0", Offset = "0x593DBB0", VA = "0x593EBB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_RotateSpeed): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ebf8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ebf8;
				pCVar1.RotateSpeed = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048E")]
	public float JumpForce
	{
		[Token(Token = "0x60024E4")]
		[Address(RVA = "0x593EC00", Offset = "0x593DC00", VA = "0x593EC00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_JumpForce): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.JumpForce;
		}
		[Token(Token = "0x60024E5")]
		[Address(RVA = "0x593EC20", Offset = "0x593DC20", VA = "0x593EC20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_JumpForce): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ec68: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ec68;
				pCVar1.JumpForce = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700048F")]
	public float ActionPause
	{
		[Token(Token = "0x60024E6")]
		[Address(RVA = "0x593EC70", Offset = "0x593DC70", VA = "0x593EC70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_ActionPause): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.ActionPause;
		}
		[Token(Token = "0x60024E7")]
		[Address(RVA = "0x593EC90", Offset = "0x593DC90", VA = "0x593EC90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_ActionPause): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ecd8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ecd8;
				pCVar1.ActionPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000490")]
	public float AttackPause
	{
		[Token(Token = "0x60024E8")]
		[Address(RVA = "0x593ECE0", Offset = "0x593DCE0", VA = "0x593ECE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_AttackPause): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AttackPause;
		}
		[Token(Token = "0x60024E9")]
		[Address(RVA = "0x593ED00", Offset = "0x593DD00", VA = "0x593ED00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_AttackPause): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ed48: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ed48;
				pCVar1.AttackPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000491")]
	public float TurnPause
	{
		[Token(Token = "0x60024EA")]
		[Address(RVA = "0x593ED50", Offset = "0x593DD50", VA = "0x593ED50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_TurnPause): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.TurnPause;
		}
		[Token(Token = "0x60024EB")]
		[Address(RVA = "0x593ED70", Offset = "0x593DD70", VA = "0x593ED70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_TurnPause): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3edb8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3edb8;
				pCVar1.TurnPause = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000492")]
	public float FocusRange
	{
		[Token(Token = "0x60024EC")]
		[Address(RVA = "0x593EDC0", Offset = "0x593DDC0", VA = "0x593EDC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_FocusRange): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ee06: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ee06;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3ee06;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x60024ED")]
		[Address(RVA = "0x593EE10", Offset = "0x593DE10", VA = "0x593EE10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_FocusRange): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ee67: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ee67;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3ee67;
					pCVar2.FocusRange = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000493")]
	public float FocusTime
	{
		[Token(Token = "0x60024EE")]
		[Address(RVA = "0x593EE70", Offset = "0x593DE70", VA = "0x593EE70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_FocusTime): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3eeb6: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3eeb6;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3eeb6;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x60024EF")]
		[Address(RVA = "0x593EEC0", Offset = "0x593DEC0", VA = "0x593EEC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_FocusTime): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ef17: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ef17;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3ef17;
					pCVar2.FocusTime = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000494")]
	public float FarAttackCooldown
	{
		[Token(Token = "0x60024F0")]
		[Address(RVA = "0x593EF20", Offset = "0x593DF20", VA = "0x593EF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_FarAttackCooldown): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3ef69: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3ef69;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3ef69;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x60024F1")]
		[Address(RVA = "0x593EF70", Offset = "0x593DF70", VA = "0x593EF70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_FarAttackCooldown): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3efca: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3efca;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3efca;
					pCVar2.FarAttackCooldown = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000495")]
	public float AttackWait
	{
		[Token(Token = "0x60024F2")]
		[Address(RVA = "0x593EFD0", Offset = "0x593DFD0", VA = "0x593EFD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_AttackWait): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3f019: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3f019;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3f019;
				}
			}
			return fVar4;
		}
		[Token(Token = "0x60024F3")]
		[Address(RVA = "0x593F020", Offset = "0x593E020", VA = "0x593F020")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_AttackWait): clean
			BaseShifter pCVar1;
			BaseTitanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3f07a: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3f07a;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					if (pCVar2 == null) goto label_05a3f07a;
					pCVar2.AttackWait = value;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000496")]
	public float AttackSpeedMultiplier
	{
		[Token(Token = "0x60024F4")]
		[Address(RVA = "0x593F080", Offset = "0x593E080", VA = "0x593F080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_AttackSpeedMultiplier): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AttackSpeedMultiplier;
		}
		[Token(Token = "0x60024F5")]
		[Address(RVA = "0x593F0A0", Offset = "0x593E0A0", VA = "0x593F0A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_AttackSpeedMultiplier): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3f0e8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3f0e8;
				pCVar1.AttackSpeedMultiplier = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000497")]
	public CustomLogicVector3Builtin NapePosition
	{
		[Token(Token = "0x60024F6")]
		[Address(RVA = "0x593F0F0", Offset = "0x593E0F0", VA = "0x593F0F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_NapePosition): clean
			BaseShifter pCVar1;
			BaseTitanComponentCache pCVar2;
			Component __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			Vector3 value;

			pCVar1 = this.Shifter;
			if (((pCVar1 != null) &&(pCVar2 = pCVar1.BaseTitanCache, pCVar2 != null)) &&(__this_00 = (Component)pCVar2.NapeHurtbox, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value = __this_01.position;
					__this_02 = new CustomLogicVector3Builtin(value);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000498")]
	public CustomLogicTransformBuiltin HeadMount
	{
		[Token(Token = "0x60024F7")]
		[Address(RVA = "0x593F190", Offset = "0x593E190", VA = "0x593F190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_HeadMount): clean
			BaseShifter pCVar1;
			BaseTitanComponentCache pCVar2;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Shifter;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.BaseTitanCache, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			transform = pCVar2.Head;
			__this_00 = new CustomLogicTransformBuiltin(transform);
			return __this_00;
		}
	}

	[Token(Token = "0x17000499")]
	public CustomLogicTransformBuiltin NeckMount
	{
		[Token(Token = "0x60024F8")]
		[Address(RVA = "0x593F250", Offset = "0x593E250", VA = "0x593F250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_NeckMount): clean
			BaseShifter pCVar1;
			BaseTitanComponentCache pCVar2;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Shifter;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.BaseTitanCache, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			transform = pCVar2.Neck;
			__this_00 = new CustomLogicTransformBuiltin(transform);
			return __this_00;
		}
	}

	[Token(Token = "0x1700049A")]
	public float DeathAnimLength
	{
		[Token(Token = "0x60024F9")]
		[Address(RVA = "0x593F2C0", Offset = "0x593E2C0", VA = "0x593F2C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_DeathAnimLength): clean
			BaseShifter pCVar1;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.DeathAnimationLength;
		}
		[Token(Token = "0x60024FA")]
		[Address(RVA = "0x593F2E0", Offset = "0x593E2E0", VA = "0x593F2E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$set_DeathAnimLength): clean
			BaseShifter pCVar1;
			bool bVar2;

			pCVar1 = this.Shifter;
			if (pCVar1 == null) {
		label_05a3f328: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Shifter;
				if (pCVar1 == null) goto label_05a3f328;
				pCVar1.DeathAnimationLength = value;
			}
			return;
		}
	}

	[Token(Token = "0x1700049B")]
	public override string ClassName
	{
		[Token(Token = "0x6002503")]
		[Address(RVA = "0x593F7B0", Offset = "0x593E7B0", VA = "0x593F7B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_ClassName): clean
			return "Shifter";
		}
	}

	[Token(Token = "0x1700049C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002504")]
		[Address(RVA = "0x593F7E0", Offset = "0x593E7E0", VA = "0x593F7E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700049D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002505")]
		[Address(RVA = "0x593F7F0", Offset = "0x593E7F0", VA = "0x593F7F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x1700049E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002506")]
		[Address(RVA = "0x593F800", Offset = "0x593E800", VA = "0x593F800", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60024D5")]
	[Address(RVA = "0x593E860", Offset = "0x593D860", VA = "0x593E860")]
	public CustomLogicShifterBuiltin(BaseShifter shifter)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$.ctor): clean
		BaseTitanAIController pCVar1;

		base((BaseCharacter)shifter);
		this.Shifter = shifter;
		if (shifter == null) {
			throw new NullReferenceException();
		}
		pCVar1 = shifter.GetComponent<BaseTitanAIController>();
		this.Controller = pCVar1;
		return;
	}

	[Token(Token = "0x60024FB")]
	[Address(RVA = "0x593F330", Offset = "0x593E330", VA = "0x593F330")]
	public void MoveToExact(CustomLogicVector3Builtin position, float timeoutPadding = 1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$MoveToExact): clean
		BaseShifter pCVar1;
		BaseTitanAIController __this_00;
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
				if ((position != null) &&(__this_00 = this.Controller, __this_00 != null)) {
					__this_00.MoveToExact((Vector3)position.Value, 10.0, timeoutPadding);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024FC")]
	[Address(RVA = "0x593F3C0", Offset = "0x593E3C0", VA = "0x593F3C0")]
	public void MoveToExactCallback(UserMethod method, CustomLogicVector3Builtin position, float range = 10f, float timeoutPadding = 1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$MoveToExactCallback): 2 lines keep C-only constructs
		BaseShifter pCVar1;
		BaseTitanAIController __this_00;
		bool bVar2;
		CustomLogicShifterBuiltin.c__DisplayClass61_0 __this_01;
		Action __this_02;

		if (Il2CppMethodInitialized_07546181 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0) ;
			Il2CppMethodInitialized_07546181 = true;
		}
		__this_01 = new CustomLogicShifterBuiltin.c__DisplayClass61_0();
		if (__this_01 != null) {
			__this_01.method = method;
			__this_01.__4__this = this;
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
					__this_02 = new Action((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0);
					if ((position != null) &&(__this_00 != null)) {
						__this_00.MoveToExactCallback(__this_02, (Vector3)position.Value, range, timeoutPadding);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024FD")]
	[Address(RVA = "0x593F520", Offset = "0x593E520", VA = "0x593F520")]
	[Obsolete("Use SetTarget(target, focusDuration) instead.")]
	public void Target(object enemyObj, float focus)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Target): clean
		this.SetTarget(enemyObj, focus);
		return;
	}

	[Token(Token = "0x60024FE")]
	[Address(RVA = "0x593F530", Offset = "0x593E530", VA = "0x593F530")]
	public void Wander()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Wander): clean
		BaseShifter pCVar1;
		BaseTitanAIController __this_00;
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
					__this_00.CancelOrder();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024FF")]
	[Address(RVA = "0x593F590", Offset = "0x593E590", VA = "0x593F590")]
	public void Blind()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Blind): clean
		BaseShifter pCVar1;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 == null) {
	label_05a3f5d6: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Shifter;
			if (pCVar1 == null) goto label_05a3f5d6;
			if (pCVar1.Dead == false) {
				pCVar1.Blind();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6002500")]
	[Address(RVA = "0x593F5E0", Offset = "0x593E5E0", VA = "0x593F5E0")]
	public void Cripple(float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Cripple): clean
		BaseShifter pCVar1;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 == null) {
	label_05a3f63e: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Shifter;
			if (pCVar1 == null) goto label_05a3f63e;
			if (pCVar1.Dead == false) {
				pCVar1.Cripple(time);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6002501")]
	[Address(RVA = "0x593F650", Offset = "0x593E650", VA = "0x593F650")]
	public void Attack(string attack)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Attack): clean
		BaseShifter pCVar1;
		bool bVar2;

		pCVar1 = this.Shifter;
		if (pCVar1 == null) {
	label_05a3f6c8: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Shifter;
			if (pCVar1 == null) goto label_05a3f6c8;
			if (pCVar1.Dead == false) {
				bVar2 = pCVar1.CanAttack();
				if (bVar2) {
					pCVar1 = this.Shifter;
					if (pCVar1 != null) {
						pCVar1.Attack(attack);
						return;
					}
					goto label_05a3f6c8;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6002502")]
	[Address(RVA = "0x593F6D0", Offset = "0x593E6D0", VA = "0x593F6D0")]
	public void Stun(float duration = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c (CustomLogic.CustomLogicShifterBuiltin$$Stun): 1 lines keep C-only constructs
		byte bVar1;
		BaseShifter pCVar2;
		WallColossalShifter __this_00;
		WallColossalShifter pCVar3;
		bool bVar4;

		pCVar2 = this.Shifter;
		if (pCVar2 == null) {
	label_05a3f7aa: ;
			throw new NullReferenceException();
		}
		bVar4 = pCVar2.IsMine();
		if (bVar4) {
			__this_00 = (WallColossalShifter)this.Shifter;
			if (__this_00 == null) goto label_05a3f7aa;
			if (__this_00.Dead == false) {
				pCVar3 = __this_00.klass;
				bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3._2).typeHierarchyDepth) &&((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(WallColossalShifter))) {
					__this_00.EnterStunState(duration, true);
					return;
				}
				if ((duration == 0.0) && (!NAN(duration))) {
					duration = __this_00.StunTime;
				}
				__this_00.Stun(duration, true);
				return;
			}
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicShifterBuiltin.c.

	// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$.ctor: clean
	private void c__DisplayClass61_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Size");
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
		__this.Add((Il2CppObject *)"FocusRange");
		__this.Add((Il2CppObject *)"FocusTime");
		__this.Add((Il2CppObject *)"FarAttackCooldown");
		__this.Add((Il2CppObject *)"AttackWait");
		__this.Add((Il2CppObject *)"AttackSpeedMultiplier");
		__this.Add((Il2CppObject *)"NapePosition");
		__this.Add((Il2CppObject *)"HeadMount");
		__this.Add((Il2CppObject *)"NeckMount");
		__this.Add((Il2CppObject *)"DeathAnimLength");
		__this.Add((Il2CppObject *)"MoveToExact");
		__this.Add((Il2CppObject *)"MoveToExactCallback");
		__this.Add((Il2CppObject *)"Target");
		__this.Add((Il2CppObject *)"Wander");
		__this.Add((Il2CppObject *)"Blind");
		__this.Add((Il2CppObject *)"Cripple");
		__this.Add((Il2CppObject *)"Attack");
		__this.Add((Il2CppObject *)"Stun");
		CustomLogicShifterBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Size_g____getter_2_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Size_g____setter_2_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float size;

		size = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = __i.Shifter;
				if (pCVar1 != null) {
					pCVar1.SetSize(size);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__RunSpeedBase_g____getter_3_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__RunSpeedBase_g____setter_3_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a42413;
					pCVar1.RunSpeedBase = fVar3;
				}
				return;
			}
		}
	label_05a42413: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a42503;
					pCVar1.WalkSpeedBase = fVar3;
				}
				return;
			}
		}
	label_05a42503: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a425f3;
					pCVar1.WalkSpeedPerLevel = fVar3;
				}
				return;
			}
		}
	label_05a425f3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a426e3;
					pCVar1.RunSpeedPerLevel = fVar3;
				}
				return;
			}
		}
	label_05a426e3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__TurnSpeed_g____getter_7_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__TurnSpeed_g____setter_7_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a427d3;
					pCVar1.TurnSpeed = fVar3;
				}
				return;
			}
		}
	label_05a427d3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__RotateSpeed_g____getter_8_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__RotateSpeed_g____setter_8_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a428c3;
					pCVar1.RotateSpeed = fVar3;
				}
				return;
			}
		}
	label_05a428c3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__JumpForce_g____getter_9_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__JumpForce_g____setter_9_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a429b3;
					pCVar1.JumpForce = fVar3;
				}
				return;
			}
		}
	label_05a429b3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__ActionPause_g____getter_10_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__ActionPause_g____setter_10_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a42aa3;
					pCVar1.ActionPause = fVar3;
				}
				return;
			}
		}
	label_05a42aa3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__AttackPause_g____getter_11_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__AttackPause_g____setter_11_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a42b93;
					pCVar1.AttackPause = fVar3;
				}
				return;
			}
		}
	label_05a42b93: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__TurnPause_g____getter_12_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__TurnPause_g____setter_12_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a42c83;
					pCVar1.TurnPause = fVar3;
				}
				return;
			}
		}
	label_05a42c83: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__FocusRange_g____getter_13_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a42cfe: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a42cfe;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a42cfe;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__FocusRange_g____setter_13_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a42dc2: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a42dc2;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a42dc2;
				pCVar2.FocusRange = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__FocusTime_g____getter_14_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a42e3e: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a42e3e;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a42e3e;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__FocusTime_g____setter_14_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a42f02: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a42f02;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a42f02;
				pCVar2.FocusTime = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__FarAttackCooldown_g____getter_15_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a42f81: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a42f81;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a42f81;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__FarAttackCooldown_g____setter_15_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a43045: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a43045;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a43045;
				pCVar2.FarAttackCooldown = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__AttackWait_g____getter_16_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		object pIVar4;

		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a430c1: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a430c1;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a430c1;
			}
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__AttackWait_g____setter_16_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		BaseTitanAIController pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) {
	label_05a43185: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Shifter;
			if (pCVar1 == null) goto label_05a43185;
			if (pCVar1.AI != false) {
				pCVar2 = __i.Controller;
				if (pCVar2 == null) goto label_05a43185;
				pCVar2.AttackWait = fVar4;
			}
		}
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_17_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_17_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a43273;
					pCVar1.AttackSpeedMultiplier = fVar3;
				}
				return;
			}
		}
	label_05a43273: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__NapePosition_g____getter_18_0(CustomLogicShifterBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.NapePosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__HeadMount_g____getter_19_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanComponentCache pCVar2;
		Transform transform;
		CustomLogicTransformBuiltin __this;

		if (((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) ||(pCVar2 = pCVar1.BaseTitanCache, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		transform = pCVar2.Head;
		__this = new CustomLogicTransformBuiltin(transform);
		return (object)__this;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__NeckMount_g____getter_20_0(CustomLogicShifterBuiltin __i)
	{
		BaseShifter pCVar1;
		BaseTitanComponentCache pCVar2;
		Transform transform;
		CustomLogicTransformBuiltin __this;

		if (((__i == null) ||(pCVar1 = __i.Shifter, pCVar1 == null)) ||(pCVar2 = pCVar1.BaseTitanCache, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		transform = pCVar2.Neck;
		__this = new CustomLogicTransformBuiltin(transform);
		return (object)__this;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__DeathAnimLength_g____getter_21_0(CustomLogicShifterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Shifter == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__DeathAnimLength_g____setter_21_1(CustomLogicShifterBuiltin __i, object __v)
	{
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Shifter;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __i.Shifter;
					if (pCVar1 == null) goto label_05a43453;
					pCVar1.DeathAnimationLength = fVar3;
				}
				return;
			}
		}
	label_05a43453: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicShifterBuiltin.Bindings.c)) ;
		__this = new Object();
		CustomLogicShifterBuiltin.Bindings.c.__9 =(CustomLogicShifterBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExact>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__MoveToExact_b__22_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		CustomLogicVector3Builtin position;
		float timeoutPadding;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
			if ((int)__a.Length < 2) {
				timeoutPadding = 1.0;
			}
			else {
				pIVar1 = __a[1];
				timeoutPadding = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if (__c != null) {
				__c.MoveToExact(position, timeoutPadding);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExactCallback>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__MoveToExactCallback_b__23_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		UserMethod method_00;
		CustomLogicVector3Builtin position;
		float range;
		float timeoutPadding;

		if (__a == null) {
	label_05a43734: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				timeoutPadding = 1.0;
				if ((int)__a.Length < 3) {
					range = 10.0;
				}
				else {
					pIVar1 = __a[2];
					range = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if ((int)__a.Length < 4) {
						timeoutPadding = 1.0;
					}
					else {
						pIVar1 = __a[3];
						timeoutPadding = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					}
				}
				if (__c != null) {
					__c.MoveToExactCallback(method_00, position, range, timeoutPadding);
					return null;
				}
				goto label_05a43734;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__Target_b__24_0(CustomLogicShifterBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__Wander_b__25_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		BaseShifter pCVar1;
		BaseTitanAIController __this_00;
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
					__this_00.CancelOrder();
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__Blind_b__26_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		BaseShifter pCVar1;
		bool bVar2;

		if ((__c == null) ||(pCVar1 = __c.Shifter, pCVar1 == null)) {
	label_05a4388d: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __c.Shifter;
			if (pCVar1 == null) goto label_05a4388d;
			if (pCVar1.Dead == false) {
				pCVar1.Blind();
				return null;
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__Cripple_b__27_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseShifter pCVar1;
		bool bVar2;
		float fVar3;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(pCVar1 = __c.Shifter, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Shifter;
					if (pCVar1 == null) goto label_05a4396a;
					if (pCVar1.Dead == false) {
						pCVar1.Cripple(fVar3);
					}
				}
				return null;
			}
		}
	label_05a4396a: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__Attack_b__28_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseShifter pCVar1;
		bool bVar2;
		String pSVar3;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pSVar3 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(pCVar1 = __c.Shifter, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Shifter;
					if (pCVar1 == null) goto label_05a43a60;
					if (pCVar1.Dead == false) {
						bVar2 = pCVar1.CanAttack();
						if (bVar2) {
							pCVar1 = __c.Shifter;
							if (pCVar1 == null) goto label_05a43a60;
							pCVar1.Attack(pSVar3);
						}
					}
				}
				return null;
			}
		}
	label_05a43a60: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__Stun_b__29_0(CustomLogicShifterBuiltin __c, Object[] __a)
	{
		object obj;
		float duration;

		if (__a != null) {
			if (__a.Length == 0) {
				duration = 0.0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				duration = CustomLogicEvaluator.ConvertTo<float>(obj);
			}
			if (__c != null) {
				__c.Stun(duration);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$<MoveToExactCallback>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass61_0__MoveToExactCallback_b__0()
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		CustomLogicShifterBuiltin obj;
		Object[] parameterValues;
		object pIVar1;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[1];
		if (parameterValues != null) {
			obj = this.__4__this;
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameterValues.obj).klass)._1).element_class) ;
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = (object)obj;
			if (__this_00 != null) {
				__this_00.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
