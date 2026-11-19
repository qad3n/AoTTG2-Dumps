// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHumanAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200051E")]
[CompilerGenerated]
internal class CustomLogicHumanAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x200051F")]
	public static class Factory
	{
		[Token(Token = "0x60029A0")]
		[Address(RVA = "0x59694D0", Offset = "0x59684D0", VA = "0x59694D0")]
		public static CustomLogicHumanAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHumanAnimationEnum();
			return (CustomLogicHumanAnimationEnum)__this;
		}
	}

	[Token(Token = "0x2000520")]
	public static class Bindings
	{
		[Token(Token = "0x40017D3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60029A1")]
		[Address(RVA = "0x59695F0", Offset = "0x59685F0", VA = "0x59695F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6e8be55e) {
				if (uVar2 < 0x3c73ce13) {
					if (uVar2 < 0xdb32d0a) {
						if (uVar2 < 0x75b8e45) {
							if (uVar2 < 0x45b898c) {
								if (uVar2 == 0x331aacb) {
									bVar1 = (name == "Air2Right");
									if (bVar1) {
										if ((typeof(CustomLogicHumanAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Air2Right();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x45b898b) {
									bVar1 = (name == "Attack4");
									if (bVar1) {
										if ((typeof(CustomLogicHumanAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack4();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x520dc57) {
								bVar1 = (name == "TSShootR");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__TSShootR();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x75b8e44) {
								bVar1 = (name == "Attack1");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0xb20e5ca) {
							if (uVar2 == 0xa5b92fd) {
								bVar1 = (name == "Attack2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack2();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xb20e5c9) {
								bVar1 = (name == "TSShootL");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__TSShootL();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xc43456b) {
							bVar1 = (name == "RunTS");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__RunTS();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xcb32b76) {
							bVar1 = (name == "SpecialMarco0");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialMarco0();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xdb32d09) {
							bVar1 = (name == "SpecialMarco1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialMarco1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1eea5c97) {
						if (uVar2 < 0x11ff6d0c) {
							if (uVar2 == 0xe1ef32d) {
								bVar1 = (name == "Jump");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Jump();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x11ff6d0b) {
								bVar1 = (name == "AHSSShootRAir");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootRAir();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x18ea5324) {
							bVar1 = (name == "AirHookL");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirHookL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1ddf2a11) {
							bVar1 = (name == "AHSSShootR");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootR();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1eea5c96) {
							bVar1 = (name == "AirHookR");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirHookR();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x27df39d0) {
						if (uVar2 == 0x22ccd730) {
							bVar1 = (name == "Walk");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x27df39cf) {
							bVar1 = (name == "AHSSShootL");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2ea8c1d5) {
						bVar1 = (name == "SpecialArmin");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialArmin();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x324d8372) {
						bVar1 = (name == "EmoteWave");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteWave();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3c73ce12) {
						bVar1 = (name == "AHSSShootBothAir");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootBothAir();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x502d6444) {
					if (uVar2 < 0x43ea2092) {
						if (uVar2 < 0x40ea1bd9) {
							if (uVar2 == 0x3d57045f) {
								bVar1 = (name == "Air2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Air2();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x40ea1bd8) {
								bVar1 = (name == "SpecialMikasa2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialMikasa2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x42bf6b8e) {
							bVar1 = (name == "AHSSGunReloadBothAir");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSGunReloadBothAir();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x43ea2091) {
							bVar1 = (name == "SpecialMikasa1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialMikasa1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x48d20264) {
						if (uVar2 == 0x47ae9c66) {
							bVar1 = (name == "EmoteYes");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteYes();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x48d20263) {
							bVar1 = (name == "ChangeBladeAir");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__ChangeBladeAir();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x4928501c) {
						bVar1 = (name == "AirHookRJust");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirHookRJust();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x4a4b98a8) {
						bVar1 = (name == "EmoteNo");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteNo();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x502d6443) {
						bVar1 = (name == "TSShootLAir");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__TSShootLAir();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5e0c8deb) {
					if (uVar2 < 0x5a18e72b) {
						if (uVar2 == 0x569fee3e) {
							bVar1 = (name == "SpecialSasha");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialSasha();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x5a18e72a) {
							bVar1 = (name == "ToRoof");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__ToRoof();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x5a234b86) {
						bVar1 = (name == "Grabbed");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Grabbed();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5a8567fe) {
						bVar1 = (name == "RunBuffed");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__RunBuffed();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5e0c8dea) {
						bVar1 = (name == "AHSSGunReloadBoth");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSGunReloadBoth();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x68597616) {
					if (uVar2 == 0x6153e692) {
						bVar1 = (name == "AirRise");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirRise();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x68597615) {
						bVar1 = (name == "Dash");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Dash();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x6b8be0a4) {
					bVar1 = (name == "Attack1HookL1");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack1HookL1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6c198db1) {
					bVar1 = (name == "Refill");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Refill();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6e8be55d) {
					bVar1 = (name == "Attack1HookL2");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack1HookL2();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xade67049) {
				if (uVar2 < 0x95a8311d) {
					if (uVar2 < 0x82a65fa0) {
						if (uVar2 < 0x76a54823) {
							if (uVar2 == 0x71e5e680) {
								bVar1 = (name == "AirHook");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirHook();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x76a54822) {
								bVar1 = (name == "Air2Backward");
								if (bVar1) {
									pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Air2Backward();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x8149ffda) {
							bVar1 = (name == "SpecialJean");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialJean();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x82a65f9f) {
							bVar1 = (name == "HorseRun");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HorseRun();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x897c9be9) {
						if (uVar2 == 0x89394d92) {
							bVar1 = (name == "SpecialLevi");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialLevi();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x897c9be8) {
							bVar1 = (name == "HoodPullAir");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HoodPullAir();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x8bdddf4c) {
						bVar1 = (name == "IdleTSF");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleTSF();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8d57e66a) {
						bVar1 = (name == "Run");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Run();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x95a8311c) {
						bVar1 = (name == "HoodPull");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HoodPull();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa7c39be9) {
					if (uVar2 < 0x9be653f3) {
						if (uVar2 == 0x96ddf09d) {
							bVar1 = (name == "IdleTSM");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleTSM();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9be653f2) {
							bVar1 = (name == "AHSSHookForwardL");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSHookForwardL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9dce8fa9) {
						bVar1 = (name == "ChangeBlade");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__ChangeBlade();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9fc3b6af) {
						bVar1 = (name == "IdleF");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleF();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa7c39be8) {
						bVar1 = (name == "SpecialPetra");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialPetra();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa8c3c4db) {
					if (uVar2 == 0xa80c6d01) {
						bVar1 = (name == "AHSSHookForwardBoth");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSHookForwardBoth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa8c3c4da) {
						bVar1 = (name == "IdleM");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleM();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa97fed56) {
					bVar1 = (name == "AirFall");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirFall();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa9da7dea) {
					bVar1 = (name == "AirHookLJust");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirHookLJust();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xade67048) {
					bVar1 = (name == "AHSSHookForwardR");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSHookForwardR();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd79107d7) {
				if (uVar2 < 0xc35fd7d4) {
					if (uVar2 < 0xbe4185ab) {
						if (uVar2 == 0xb541777f) {
							bVar1 = (name == "IdleAHSSM");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleAHSSM();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbe4185aa) {
							bVar1 = (name == "IdleAHSSF");
							if (bVar1) {
								pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__IdleAHSSF();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xc0f4f364) {
						bVar1 = (name == "OnWall");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__OnWall();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc35fd7d3) {
						bVar1 = (name == "EmoteSalute");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteSalute();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc52547e8) {
					if (uVar2 == 0xc3e1ce03) {
						bVar1 = (name == "SpecialShifter");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__SpecialShifter();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc52547e7) {
						bVar1 = (name == "HorseMount");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HorseMount();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xce6417cc) {
					bVar1 = (name == "AirRelease");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AirRelease();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd6910643) {
					bVar1 = (name == "Attack1HookR2");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack1HookR2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd79107d6) {
					bVar1 = (name == "Attack1HookR1");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Attack1HookR1();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xec4867bb) {
				if (uVar2 < 0xe54a3917) {
					if (uVar2 == 0xdaf9a716) {
						bVar1 = (name == "AHSSShootBoth");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootBoth();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xe54a3916) {
						bVar1 = (name == "Air2Left");
						if (bVar1) {
							pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Air2Left();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe6146cb1) {
					bVar1 = (name == "AHSSShootLAir");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__AHSSShootLAir();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe9e243fb) {
					bVar1 = (name == "HorseDismount");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HorseDismount();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xec4867ba) {
					bVar1 = (name == "WallRun");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__WallRun();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf2adf85a) {
				if (uVar2 == 0xee1682bc) {
					bVar1 = (name == "Land");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Land();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf2adf859) {
					bVar1 = (name == "TSShootRAir");
					if (bVar1) {
						pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__TSShootRAir();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf526d670) {
				bVar1 = (name == "Dodge");
				if (bVar1) {
					pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Dodge();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfc5e3070) {
				bVar1 = (name == "HorseIdle");
				if (bVar1) {
					pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__HorseIdle();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xffc7c086) {
				bVar1 = (name == "Slide");
				if (bVar1) {
					pCVar3 = CustomLogicHumanAnimationEnum.Bindings.__CreatePropertyBinding__Slide();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60029A2")]
		[Address(RVA = "0x596B1B0", Offset = "0x596A1B0", VA = "0x596B1B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HorseMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseMount): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A3")]
		[Address(RVA = "0x596B250", Offset = "0x596A250", VA = "0x596B250")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HorseDismount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseDismount): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A4")]
		[Address(RVA = "0x596B2F0", Offset = "0x596A2F0", VA = "0x596B2F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HorseIdle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseIdle): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A5")]
		[Address(RVA = "0x596B390", Offset = "0x596A390", VA = "0x596B390")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HorseRun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseRun): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A6")]
		[Address(RVA = "0x596B430", Offset = "0x596A430", VA = "0x596B430")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleF()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleF): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A7")]
		[Address(RVA = "0x596B4D0", Offset = "0x596A4D0", VA = "0x596B4D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleM()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleM): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A8")]
		[Address(RVA = "0x596B570", Offset = "0x596A570", VA = "0x596B570")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleAHSSM()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSM): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029A9")]
		[Address(RVA = "0x596B610", Offset = "0x596A610", VA = "0x596B610")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleAHSSF()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSF): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AA")]
		[Address(RVA = "0x596B6B0", Offset = "0x596A6B0", VA = "0x596B6B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleTSF()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSF): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AB")]
		[Address(RVA = "0x596B750", Offset = "0x596A750", VA = "0x596B750")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__IdleTSM()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSM): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AC")]
		[Address(RVA = "0x596B7F0", Offset = "0x596A7F0", VA = "0x596B7F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AD")]
		[Address(RVA = "0x596B890", Offset = "0x596A890", VA = "0x596B890")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Run()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Run): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AE")]
		[Address(RVA = "0x596B930", Offset = "0x596A930", VA = "0x596B930")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029AF")]
		[Address(RVA = "0x596B9D0", Offset = "0x596A9D0", VA = "0x596B9D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__RunTS()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunTS): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B0")]
		[Address(RVA = "0x596BA70", Offset = "0x596AA70", VA = "0x596BA70")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__RunBuffed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunBuffed): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B1")]
		[Address(RVA = "0x596BB10", Offset = "0x596AB10", VA = "0x596BB10")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Dodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dodge): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B2")]
		[Address(RVA = "0x596BBB0", Offset = "0x596ABB0", VA = "0x596BBB0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Land): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B3")]
		[Address(RVA = "0x596BC50", Offset = "0x596AC50", VA = "0x596BC50")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Slide()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Slide): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B4")]
		[Address(RVA = "0x596BCF0", Offset = "0x596ACF0", VA = "0x596BCF0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Grabbed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Grabbed): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B5")]
		[Address(RVA = "0x596BD90", Offset = "0x596AD90", VA = "0x596BD90")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Dash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dash): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B6")]
		[Address(RVA = "0x596BE30", Offset = "0x596AE30", VA = "0x596BE30")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Refill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Refill): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B7")]
		[Address(RVA = "0x596BED0", Offset = "0x596AED0", VA = "0x596BED0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__ToRoof()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ToRoof): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B8")]
		[Address(RVA = "0x596BF70", Offset = "0x596AF70", VA = "0x596BF70")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__WallRun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__WallRun): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029B9")]
		[Address(RVA = "0x596C010", Offset = "0x596B010", VA = "0x596C010")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__OnWall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__OnWall): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BA")]
		[Address(RVA = "0x596C0B0", Offset = "0x596B0B0", VA = "0x596C0B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__ChangeBlade()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBlade): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BB")]
		[Address(RVA = "0x596C150", Offset = "0x596B150", VA = "0x596C150")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__ChangeBladeAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBladeAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BC")]
		[Address(RVA = "0x596C1F0", Offset = "0x596B1F0", VA = "0x596C1F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSHookForwardBoth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardBoth): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BD")]
		[Address(RVA = "0x596C290", Offset = "0x596B290", VA = "0x596C290")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSHookForwardL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardL): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BE")]
		[Address(RVA = "0x596C330", Offset = "0x596B330", VA = "0x596C330")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSHookForwardR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardR): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029BF")]
		[Address(RVA = "0x596C3D0", Offset = "0x596B3D0", VA = "0x596C3D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootR): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C0")]
		[Address(RVA = "0x596C470", Offset = "0x596B470", VA = "0x596C470")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootL): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C1")]
		[Address(RVA = "0x596C510", Offset = "0x596B510", VA = "0x596C510")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootBoth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBoth): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C2")]
		[Address(RVA = "0x596C5B0", Offset = "0x596B5B0", VA = "0x596C5B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootRAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootRAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C3")]
		[Address(RVA = "0x596C650", Offset = "0x596B650", VA = "0x596C650")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootLAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootLAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C4")]
		[Address(RVA = "0x596C6F0", Offset = "0x596B6F0", VA = "0x596C6F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSShootBothAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBothAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C5")]
		[Address(RVA = "0x596C790", Offset = "0x596B790", VA = "0x596C790")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSGunReloadBoth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBoth): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C6")]
		[Address(RVA = "0x596C830", Offset = "0x596B830", VA = "0x596C830")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AHSSGunReloadBothAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBothAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C7")]
		[Address(RVA = "0x596C8D0", Offset = "0x596B8D0", VA = "0x596C8D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__TSShootR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootR): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C8")]
		[Address(RVA = "0x596C970", Offset = "0x596B970", VA = "0x596C970")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__TSShootL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootL): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029C9")]
		[Address(RVA = "0x596CA10", Offset = "0x596BA10", VA = "0x596CA10")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__TSShootRAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootRAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CA")]
		[Address(RVA = "0x596CAB0", Offset = "0x596BAB0", VA = "0x596CAB0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__TSShootLAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootLAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CB")]
		[Address(RVA = "0x596CB50", Offset = "0x596BB50", VA = "0x596CB50")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirHookLJust()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookLJust): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CC")]
		[Address(RVA = "0x596CBF0", Offset = "0x596BBF0", VA = "0x596CBF0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirHookRJust()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookRJust): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CD")]
		[Address(RVA = "0x596CC90", Offset = "0x596BC90", VA = "0x596CC90")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirHookL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookL): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CE")]
		[Address(RVA = "0x596CD30", Offset = "0x596BD30", VA = "0x596CD30")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirHookR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookR): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029CF")]
		[Address(RVA = "0x596CDD0", Offset = "0x596BDD0", VA = "0x596CDD0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirHook()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHook): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D0")]
		[Address(RVA = "0x596CE70", Offset = "0x596BE70", VA = "0x596CE70")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirRelease()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRelease): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D1")]
		[Address(RVA = "0x596CF10", Offset = "0x596BF10", VA = "0x596CF10")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirFall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirFall): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D2")]
		[Address(RVA = "0x596CFB0", Offset = "0x596BFB0", VA = "0x596CFB0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__AirRise()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRise): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D3")]
		[Address(RVA = "0x596D050", Offset = "0x596C050", VA = "0x596D050")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Air2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D4")]
		[Address(RVA = "0x596D0F0", Offset = "0x596C0F0", VA = "0x596D0F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Air2Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Right): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D5")]
		[Address(RVA = "0x596D190", Offset = "0x596C190", VA = "0x596D190")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Air2Left()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Left): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D6")]
		[Address(RVA = "0x596D230", Offset = "0x596C230", VA = "0x596D230")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Air2Backward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Backward): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D7")]
		[Address(RVA = "0x596D2D0", Offset = "0x596C2D0", VA = "0x596D2D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack1HookL1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL1): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D8")]
		[Address(RVA = "0x596D370", Offset = "0x596C370", VA = "0x596D370")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack1HookL2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL2): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029D9")]
		[Address(RVA = "0x596D410", Offset = "0x596C410", VA = "0x596D410")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack1HookR1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR1): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DA")]
		[Address(RVA = "0x596D4B0", Offset = "0x596C4B0", VA = "0x596D4B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack1HookR2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR2): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DB")]
		[Address(RVA = "0x596D550", Offset = "0x596C550", VA = "0x596D550")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DC")]
		[Address(RVA = "0x596D5F0", Offset = "0x596C5F0", VA = "0x596D5F0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack2): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DD")]
		[Address(RVA = "0x596D690", Offset = "0x596C690", VA = "0x596D690")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__Attack4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack4): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DE")]
		[Address(RVA = "0x596D730", Offset = "0x596C730", VA = "0x596D730")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialArmin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialArmin): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029DF")]
		[Address(RVA = "0x596D7D0", Offset = "0x596C7D0", VA = "0x596D7D0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialMarco0()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco0): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E0")]
		[Address(RVA = "0x596D870", Offset = "0x596C870", VA = "0x596D870")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialMarco1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco1): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E1")]
		[Address(RVA = "0x596D910", Offset = "0x596C910", VA = "0x596D910")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialSasha()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialSasha): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E2")]
		[Address(RVA = "0x596D9B0", Offset = "0x596C9B0", VA = "0x596D9B0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialMikasa1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa1): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E3")]
		[Address(RVA = "0x596DA50", Offset = "0x596CA50", VA = "0x596DA50")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialMikasa2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa2): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E4")]
		[Address(RVA = "0x596DAF0", Offset = "0x596CAF0", VA = "0x596DAF0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialLevi()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialLevi): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E5")]
		[Address(RVA = "0x596DB90", Offset = "0x596CB90", VA = "0x596DB90")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialPetra()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialPetra): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E6")]
		[Address(RVA = "0x596DC30", Offset = "0x596CC30", VA = "0x596DC30")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialJean()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialJean): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E7")]
		[Address(RVA = "0x596DCD0", Offset = "0x596CCD0", VA = "0x596DCD0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__SpecialShifter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialShifter): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E8")]
		[Address(RVA = "0x596DD70", Offset = "0x596CD70", VA = "0x596DD70")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__EmoteSalute()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029E9")]
		[Address(RVA = "0x596DE10", Offset = "0x596CE10", VA = "0x596DE10")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__EmoteNo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNo): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029EA")]
		[Address(RVA = "0x596DEB0", Offset = "0x596CEB0", VA = "0x596DEB0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__EmoteYes()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteYes): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029EB")]
		[Address(RVA = "0x596DF50", Offset = "0x596CF50", VA = "0x596DF50")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__EmoteWave()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029EC")]
		[Address(RVA = "0x596DFF0", Offset = "0x596CFF0", VA = "0x596DFF0")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HoodPull()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPull): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60029ED")]
		[Address(RVA = "0x596E090", Offset = "0x596D090", VA = "0x596E090")]
		public static CLPropertyBinding<CustomLogicHumanAnimationEnum> __CreatePropertyBinding__HoodPullAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPullAir): 3 lines keep C-only constructs
			Func<CustomLogicHumanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHumanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005CD")]
	public static string HorseMount
	{
		[Token(Token = "0x6002950")]
		[Address(RVA = "0x5967330", Offset = "0x5966330", VA = "0x5967330")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseMount): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e2 == false) {
				Il2CppMethodInitialized_075463e2 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HorseMount;
			}
			return *(String*)(typeof(HumanAnimations)).static_fields;
		}
	}

	[Token(Token = "0x170005CE")]
	public static string HorseDismount
	{
		[Token(Token = "0x6002951")]
		[Address(RVA = "0x59673A0", Offset = "0x59663A0", VA = "0x59673A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseDismount): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e3 == false) {
				Il2CppMethodInitialized_075463e3 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HorseDismount;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 8);
		}
	}

	[Token(Token = "0x170005CF")]
	public static string HorseIdle
	{
		[Token(Token = "0x6002952")]
		[Address(RVA = "0x5967410", Offset = "0x5966410", VA = "0x5967410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseIdle): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e4 == false) {
				Il2CppMethodInitialized_075463e4 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HorseIdle;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170005D0")]
	public static string HorseRun
	{
		[Token(Token = "0x6002953")]
		[Address(RVA = "0x5967480", Offset = "0x5966480", VA = "0x5967480")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseRun): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e5 == false) {
				Il2CppMethodInitialized_075463e5 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HorseRun;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170005D1")]
	public static string IdleF
	{
		[Token(Token = "0x6002954")]
		[Address(RVA = "0x59674F0", Offset = "0x59664F0", VA = "0x59674F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleF): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e6 == false) {
				Il2CppMethodInitialized_075463e6 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleF;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170005D2")]
	public static string IdleM
	{
		[Token(Token = "0x6002955")]
		[Address(RVA = "0x5967560", Offset = "0x5966560", VA = "0x5967560")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleM): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e7 == false) {
				Il2CppMethodInitialized_075463e7 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleM;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170005D3")]
	public static string IdleAHSSM
	{
		[Token(Token = "0x6002956")]
		[Address(RVA = "0x59675D0", Offset = "0x59665D0", VA = "0x59675D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSM): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e8 == false) {
				Il2CppMethodInitialized_075463e8 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleAHSSM;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x170005D4")]
	public static string IdleAHSSF
	{
		[Token(Token = "0x6002957")]
		[Address(RVA = "0x5967640", Offset = "0x5966640", VA = "0x5967640")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSF): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463e9 == false) {
				Il2CppMethodInitialized_075463e9 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleAHSSF;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x170005D5")]
	public static string IdleTSF
	{
		[Token(Token = "0x6002958")]
		[Address(RVA = "0x59676B0", Offset = "0x59666B0", VA = "0x59676B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSF): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ea == false) {
				Il2CppMethodInitialized_075463ea = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleTSF;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x170005D6")]
	public static string IdleTSM
	{
		[Token(Token = "0x6002959")]
		[Address(RVA = "0x5967720", Offset = "0x5966720", VA = "0x5967720")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSM): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463eb == false) {
				Il2CppMethodInitialized_075463eb = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.IdleTSM;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x170005D7")]
	public static string Jump
	{
		[Token(Token = "0x600295A")]
		[Address(RVA = "0x5967790", Offset = "0x5966790", VA = "0x5967790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ec == false) {
				Il2CppMethodInitialized_075463ec = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Jump;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x170005D8")]
	public static string Run
	{
		[Token(Token = "0x600295B")]
		[Address(RVA = "0x5967800", Offset = "0x5966800", VA = "0x5967800")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Run): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ed == false) {
				Il2CppMethodInitialized_075463ed = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Run;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x170005D9")]
	public static string Walk
	{
		[Token(Token = "0x600295C")]
		[Address(RVA = "0x5967870", Offset = "0x5966870", VA = "0x5967870")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ee == false) {
				Il2CppMethodInitialized_075463ee = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Walk;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x248);
		}
	}

	[Token(Token = "0x170005DA")]
	public static string RunTS
	{
		[Token(Token = "0x600295D")]
		[Address(RVA = "0x59678E0", Offset = "0x59668E0", VA = "0x59678E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_RunTS): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ef == false) {
				Il2CppMethodInitialized_075463ef = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.RunTS;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x170005DB")]
	public static string RunBuffed
	{
		[Token(Token = "0x600295E")]
		[Address(RVA = "0x5967950", Offset = "0x5966950", VA = "0x5967950")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_RunBuffed): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f0 == false) {
				Il2CppMethodInitialized_075463f0 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.RunBuffed;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x170005DC")]
	public static string Dodge
	{
		[Token(Token = "0x600295F")]
		[Address(RVA = "0x59679C0", Offset = "0x59669C0", VA = "0x59679C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Dodge): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f1 == false) {
				Il2CppMethodInitialized_075463f1 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Dodge;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x170005DD")]
	public static string Land
	{
		[Token(Token = "0x6002960")]
		[Address(RVA = "0x5967A30", Offset = "0x5966A30", VA = "0x5967A30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Land): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f2 == false) {
				Il2CppMethodInitialized_075463f2 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Land;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x170005DE")]
	public static string Slide
	{
		[Token(Token = "0x6002961")]
		[Address(RVA = "0x5967AA0", Offset = "0x5966AA0", VA = "0x5967AA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Slide): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f3 == false) {
				Il2CppMethodInitialized_075463f3 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Slide;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x170005DF")]
	public static string Grabbed
	{
		[Token(Token = "0x6002962")]
		[Address(RVA = "0x5967B10", Offset = "0x5966B10", VA = "0x5967B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Grabbed): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f4 == false) {
				Il2CppMethodInitialized_075463f4 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Grabbed;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x170005E0")]
	public static string Dash
	{
		[Token(Token = "0x6002963")]
		[Address(RVA = "0x5967B80", Offset = "0x5966B80", VA = "0x5967B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Dash): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f5 == false) {
				Il2CppMethodInitialized_075463f5 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Dash;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x170005E1")]
	public static string Refill
	{
		[Token(Token = "0x6002964")]
		[Address(RVA = "0x5967BF0", Offset = "0x5966BF0", VA = "0x5967BF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Refill): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f6 == false) {
				Il2CppMethodInitialized_075463f6 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Refill;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x170005E2")]
	public static string ToRoof
	{
		[Token(Token = "0x6002965")]
		[Address(RVA = "0x5967C60", Offset = "0x5966C60", VA = "0x5967C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_ToRoof): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f7 == false) {
				Il2CppMethodInitialized_075463f7 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.ToRoof;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x170005E3")]
	public static string WallRun
	{
		[Token(Token = "0x6002966")]
		[Address(RVA = "0x5967CD0", Offset = "0x5966CD0", VA = "0x5967CD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_WallRun): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f8 == false) {
				Il2CppMethodInitialized_075463f8 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.WallRun;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x170005E4")]
	public static string OnWall
	{
		[Token(Token = "0x6002967")]
		[Address(RVA = "0x5967D40", Offset = "0x5966D40", VA = "0x5967D40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_OnWall): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463f9 == false) {
				Il2CppMethodInitialized_075463f9 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.OnWall;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x170005E5")]
	public static string ChangeBlade
	{
		[Token(Token = "0x6002968")]
		[Address(RVA = "0x5967DB0", Offset = "0x5966DB0", VA = "0x5967DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBlade): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463fa == false) {
				Il2CppMethodInitialized_075463fa = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.ChangeBlade;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x170005E6")]
	public static string ChangeBladeAir
	{
		[Token(Token = "0x6002969")]
		[Address(RVA = "0x5967E20", Offset = "0x5966E20", VA = "0x5967E20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBladeAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463fb == false) {
				Il2CppMethodInitialized_075463fb = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.ChangeBladeAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x170005E7")]
	public static string AHSSHookForwardBoth
	{
		[Token(Token = "0x600296A")]
		[Address(RVA = "0x5967E90", Offset = "0x5966E90", VA = "0x5967E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardBoth): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463fc == false) {
				Il2CppMethodInitialized_075463fc = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSHookForwardBoth;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 200);
		}
	}

	[Token(Token = "0x170005E8")]
	public static string AHSSHookForwardL
	{
		[Token(Token = "0x600296B")]
		[Address(RVA = "0x5967F00", Offset = "0x5966F00", VA = "0x5967F00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463fd == false) {
				Il2CppMethodInitialized_075463fd = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSHookForwardL;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x170005E9")]
	public static string AHSSHookForwardR
	{
		[Token(Token = "0x600296C")]
		[Address(RVA = "0x5967F70", Offset = "0x5966F70", VA = "0x5967F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463fe == false) {
				Il2CppMethodInitialized_075463fe = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSHookForwardR;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x170005EA")]
	public static string AHSSShootR
	{
		[Token(Token = "0x600296D")]
		[Address(RVA = "0x5967FE0", Offset = "0x5966FE0", VA = "0x5967FE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463ff == false) {
				Il2CppMethodInitialized_075463ff = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootR;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xe0);
		}
	}

	[Token(Token = "0x170005EB")]
	public static string AHSSShootL
	{
		[Token(Token = "0x600296E")]
		[Address(RVA = "0x5968050", Offset = "0x5967050", VA = "0x5968050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546400 == false) {
				Il2CppMethodInitialized_07546400 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootL;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xe8);
		}
	}

	[Token(Token = "0x170005EC")]
	public static string AHSSShootBoth
	{
		[Token(Token = "0x600296F")]
		[Address(RVA = "0x59680C0", Offset = "0x59670C0", VA = "0x59680C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBoth): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546401 == false) {
				Il2CppMethodInitialized_07546401 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootBoth;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xf0);
		}
	}

	[Token(Token = "0x170005ED")]
	public static string AHSSShootRAir
	{
		[Token(Token = "0x6002970")]
		[Address(RVA = "0x5968130", Offset = "0x5967130", VA = "0x5968130")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootRAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546402 == false) {
				Il2CppMethodInitialized_07546402 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootRAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0xf8);
		}
	}

	[Token(Token = "0x170005EE")]
	public static string AHSSShootLAir
	{
		[Token(Token = "0x6002971")]
		[Address(RVA = "0x59681A0", Offset = "0x59671A0", VA = "0x59681A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootLAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546403 == false) {
				Il2CppMethodInitialized_07546403 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootLAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x100);
		}
	}

	[Token(Token = "0x170005EF")]
	public static string AHSSShootBothAir
	{
		[Token(Token = "0x6002972")]
		[Address(RVA = "0x5968210", Offset = "0x5967210", VA = "0x5968210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBothAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546404 == false) {
				Il2CppMethodInitialized_07546404 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSShootBothAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x108);
		}
	}

	[Token(Token = "0x170005F0")]
	public static string AHSSGunReloadBoth
	{
		[Token(Token = "0x6002973")]
		[Address(RVA = "0x5968280", Offset = "0x5967280", VA = "0x5968280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBoth): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546405 == false) {
				Il2CppMethodInitialized_07546405 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSGunReloadBoth;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x110);
		}
	}

	[Token(Token = "0x170005F1")]
	public static string AHSSGunReloadBothAir
	{
		[Token(Token = "0x6002974")]
		[Address(RVA = "0x59682F0", Offset = "0x59672F0", VA = "0x59682F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBothAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546406 == false) {
				Il2CppMethodInitialized_07546406 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AHSSGunReloadBothAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x118);
		}
	}

	[Token(Token = "0x170005F2")]
	public static string TSShootR
	{
		[Token(Token = "0x6002975")]
		[Address(RVA = "0x5968360", Offset = "0x5967360", VA = "0x5968360")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546407 == false) {
				Il2CppMethodInitialized_07546407 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.TSShootR;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x120);
		}
	}

	[Token(Token = "0x170005F3")]
	public static string TSShootL
	{
		[Token(Token = "0x6002976")]
		[Address(RVA = "0x59683D0", Offset = "0x59673D0", VA = "0x59683D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546408 == false) {
				Il2CppMethodInitialized_07546408 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.TSShootL;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x128);
		}
	}

	[Token(Token = "0x170005F4")]
	public static string TSShootRAir
	{
		[Token(Token = "0x6002977")]
		[Address(RVA = "0x5968440", Offset = "0x5967440", VA = "0x5968440")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootRAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546409 == false) {
				Il2CppMethodInitialized_07546409 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.TSShootRAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x130);
		}
	}

	[Token(Token = "0x170005F5")]
	public static string TSShootLAir
	{
		[Token(Token = "0x6002978")]
		[Address(RVA = "0x59684B0", Offset = "0x59674B0", VA = "0x59684B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootLAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640a == false) {
				Il2CppMethodInitialized_0754640a = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.TSShootLAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x138);
		}
	}

	[Token(Token = "0x170005F6")]
	public static string AirHookLJust
	{
		[Token(Token = "0x6002979")]
		[Address(RVA = "0x5968520", Offset = "0x5967520", VA = "0x5968520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookLJust): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640b == false) {
				Il2CppMethodInitialized_0754640b = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirHookLJust;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x140);
		}
	}

	[Token(Token = "0x170005F7")]
	public static string AirHookRJust
	{
		[Token(Token = "0x600297A")]
		[Address(RVA = "0x5968590", Offset = "0x5967590", VA = "0x5968590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookRJust): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640c == false) {
				Il2CppMethodInitialized_0754640c = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirHookRJust;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x148);
		}
	}

	[Token(Token = "0x170005F8")]
	public static string AirHookL
	{
		[Token(Token = "0x600297B")]
		[Address(RVA = "0x5968600", Offset = "0x5967600", VA = "0x5968600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookL): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640d == false) {
				Il2CppMethodInitialized_0754640d = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirHookL;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x150);
		}
	}

	[Token(Token = "0x170005F9")]
	public static string AirHookR
	{
		[Token(Token = "0x600297C")]
		[Address(RVA = "0x5968670", Offset = "0x5967670", VA = "0x5968670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookR): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640e == false) {
				Il2CppMethodInitialized_0754640e = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirHookR;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x158);
		}
	}

	[Token(Token = "0x170005FA")]
	public static string AirHook
	{
		[Token(Token = "0x600297D")]
		[Address(RVA = "0x59686E0", Offset = "0x59676E0", VA = "0x59686E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHook): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754640f == false) {
				Il2CppMethodInitialized_0754640f = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirHook;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x160);
		}
	}

	[Token(Token = "0x170005FB")]
	public static string AirRelease
	{
		[Token(Token = "0x600297E")]
		[Address(RVA = "0x5968750", Offset = "0x5967750", VA = "0x5968750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRelease): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546410 == false) {
				Il2CppMethodInitialized_07546410 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirRelease;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x168);
		}
	}

	[Token(Token = "0x170005FC")]
	public static string AirFall
	{
		[Token(Token = "0x600297F")]
		[Address(RVA = "0x59687C0", Offset = "0x59677C0", VA = "0x59687C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirFall): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546411 == false) {
				Il2CppMethodInitialized_07546411 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirFall;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x170);
		}
	}

	[Token(Token = "0x170005FD")]
	public static string AirRise
	{
		[Token(Token = "0x6002980")]
		[Address(RVA = "0x5968830", Offset = "0x5967830", VA = "0x5968830")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRise): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546412 == false) {
				Il2CppMethodInitialized_07546412 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.AirRise;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x178);
		}
	}

	[Token(Token = "0x170005FE")]
	public static string Air2
	{
		[Token(Token = "0x6002981")]
		[Address(RVA = "0x59688A0", Offset = "0x59678A0", VA = "0x59688A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546413 == false) {
				Il2CppMethodInitialized_07546413 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Air2;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x180);
		}
	}

	[Token(Token = "0x170005FF")]
	public static string Air2Right
	{
		[Token(Token = "0x6002982")]
		[Address(RVA = "0x5968910", Offset = "0x5967910", VA = "0x5968910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Right): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546414 == false) {
				Il2CppMethodInitialized_07546414 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Air2Right;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x188);
		}
	}

	[Token(Token = "0x17000600")]
	public static string Air2Left
	{
		[Token(Token = "0x6002983")]
		[Address(RVA = "0x5968980", Offset = "0x5967980", VA = "0x5968980")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Left): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546415 == false) {
				Il2CppMethodInitialized_07546415 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Air2Left;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 400);
		}
	}

	[Token(Token = "0x17000601")]
	public static string Air2Backward
	{
		[Token(Token = "0x6002984")]
		[Address(RVA = "0x59689F0", Offset = "0x59679F0", VA = "0x59689F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Backward): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546416 == false) {
				Il2CppMethodInitialized_07546416 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Air2Backward;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x198);
		}
	}

	[Token(Token = "0x17000602")]
	public static string Attack1HookL1
	{
		[Token(Token = "0x6002985")]
		[Address(RVA = "0x5968A60", Offset = "0x5967A60", VA = "0x5968A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546417 == false) {
				Il2CppMethodInitialized_07546417 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack1HookL1;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1a0);
		}
	}

	[Token(Token = "0x17000603")]
	public static string Attack1HookL2
	{
		[Token(Token = "0x6002986")]
		[Address(RVA = "0x5968AD0", Offset = "0x5967AD0", VA = "0x5968AD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546418 == false) {
				Il2CppMethodInitialized_07546418 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack1HookL2;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1a8);
		}
	}

	[Token(Token = "0x17000604")]
	public static string Attack1HookR1
	{
		[Token(Token = "0x6002987")]
		[Address(RVA = "0x5968B40", Offset = "0x5967B40", VA = "0x5968B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546419 == false) {
				Il2CppMethodInitialized_07546419 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack1HookR1;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1b0);
		}
	}

	[Token(Token = "0x17000605")]
	public static string Attack1HookR2
	{
		[Token(Token = "0x6002988")]
		[Address(RVA = "0x5968BB0", Offset = "0x5967BB0", VA = "0x5968BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641a == false) {
				Il2CppMethodInitialized_0754641a = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack1HookR2;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1b8);
		}
	}

	[Token(Token = "0x17000606")]
	public static string Attack1
	{
		[Token(Token = "0x6002989")]
		[Address(RVA = "0x5968C20", Offset = "0x5967C20", VA = "0x5968C20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641b == false) {
				Il2CppMethodInitialized_0754641b = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack1;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1c0);
		}
	}

	[Token(Token = "0x17000607")]
	public static string Attack2
	{
		[Token(Token = "0x600298A")]
		[Address(RVA = "0x5968C90", Offset = "0x5967C90", VA = "0x5968C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641c == false) {
				Il2CppMethodInitialized_0754641c = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack2;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1c8);
		}
	}

	[Token(Token = "0x17000608")]
	public static string Attack4
	{
		[Token(Token = "0x600298B")]
		[Address(RVA = "0x5968D00", Offset = "0x5967D00", VA = "0x5968D00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641d == false) {
				Il2CppMethodInitialized_0754641d = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.Attack4;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1d0);
		}
	}

	[Token(Token = "0x17000609")]
	public static string SpecialArmin
	{
		[Token(Token = "0x600298C")]
		[Address(RVA = "0x5968D70", Offset = "0x5967D70", VA = "0x5968D70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialArmin): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641e == false) {
				Il2CppMethodInitialized_0754641e = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialArmin;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1d8);
		}
	}

	[Token(Token = "0x1700060A")]
	public static string SpecialMarco0
	{
		[Token(Token = "0x600298D")]
		[Address(RVA = "0x5968DE0", Offset = "0x5967DE0", VA = "0x5968DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco0): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754641f == false) {
				Il2CppMethodInitialized_0754641f = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialMarco0;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1e0);
		}
	}

	[Token(Token = "0x1700060B")]
	public static string SpecialMarco1
	{
		[Token(Token = "0x600298E")]
		[Address(RVA = "0x5968E50", Offset = "0x5967E50", VA = "0x5968E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546420 == false) {
				Il2CppMethodInitialized_07546420 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialMarco1;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1e8);
		}
	}

	[Token(Token = "0x1700060C")]
	public static string SpecialSasha
	{
		[Token(Token = "0x600298F")]
		[Address(RVA = "0x5968EC0", Offset = "0x5967EC0", VA = "0x5968EC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialSasha): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546421 == false) {
				Il2CppMethodInitialized_07546421 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialSasha;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1f0);
		}
	}

	[Token(Token = "0x1700060D")]
	public static string SpecialMikasa1
	{
		[Token(Token = "0x6002990")]
		[Address(RVA = "0x5968F30", Offset = "0x5967F30", VA = "0x5968F30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546422 == false) {
				Il2CppMethodInitialized_07546422 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialMikasa1;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x1f8);
		}
	}

	[Token(Token = "0x1700060E")]
	public static string SpecialMikasa2
	{
		[Token(Token = "0x6002991")]
		[Address(RVA = "0x5968FA0", Offset = "0x5967FA0", VA = "0x5968FA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546423 == false) {
				Il2CppMethodInitialized_07546423 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialMikasa2;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x200);
		}
	}

	[Token(Token = "0x1700060F")]
	public static string SpecialLevi
	{
		[Token(Token = "0x6002992")]
		[Address(RVA = "0x5969010", Offset = "0x5968010", VA = "0x5969010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialLevi): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546424 == false) {
				Il2CppMethodInitialized_07546424 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialLevi;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x208);
		}
	}

	[Token(Token = "0x17000610")]
	public static string SpecialPetra
	{
		[Token(Token = "0x6002993")]
		[Address(RVA = "0x5969080", Offset = "0x5968080", VA = "0x5969080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialPetra): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546425 == false) {
				Il2CppMethodInitialized_07546425 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialPetra;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x210);
		}
	}

	[Token(Token = "0x17000611")]
	public static string SpecialJean
	{
		[Token(Token = "0x6002994")]
		[Address(RVA = "0x59690F0", Offset = "0x59680F0", VA = "0x59690F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialJean): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546426 == false) {
				Il2CppMethodInitialized_07546426 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialJean;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x218);
		}
	}

	[Token(Token = "0x17000612")]
	public static string SpecialShifter
	{
		[Token(Token = "0x6002995")]
		[Address(RVA = "0x5969160", Offset = "0x5968160", VA = "0x5969160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialShifter): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546427 == false) {
				Il2CppMethodInitialized_07546427 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.SpecialShifter;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x220);
		}
	}

	[Token(Token = "0x17000613")]
	public static string EmoteSalute
	{
		[Token(Token = "0x6002996")]
		[Address(RVA = "0x59691D0", Offset = "0x59681D0", VA = "0x59691D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteSalute): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546428 == false) {
				Il2CppMethodInitialized_07546428 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.EmoteSalute;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x228);
		}
	}

	[Token(Token = "0x17000614")]
	public static string EmoteNo
	{
		[Token(Token = "0x6002997")]
		[Address(RVA = "0x5969240", Offset = "0x5968240", VA = "0x5969240")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteNo): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546429 == false) {
				Il2CppMethodInitialized_07546429 = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.EmoteNo;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x230);
		}
	}

	[Token(Token = "0x17000615")]
	public static string EmoteYes
	{
		[Token(Token = "0x6002998")]
		[Address(RVA = "0x59692B0", Offset = "0x59682B0", VA = "0x59692B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteYes): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754642a == false) {
				Il2CppMethodInitialized_0754642a = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.EmoteYes;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x238);
		}
	}

	[Token(Token = "0x17000616")]
	public static string EmoteWave
	{
		[Token(Token = "0x6002999")]
		[Address(RVA = "0x5969320", Offset = "0x5968320", VA = "0x5969320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteWave): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754642b == false) {
				Il2CppMethodInitialized_0754642b = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.EmoteWave;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x240);
		}
	}

	[Token(Token = "0x17000617")]
	public static string HoodPull
	{
		[Token(Token = "0x600299A")]
		[Address(RVA = "0x5969390", Offset = "0x5968390", VA = "0x5969390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPull): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754642c == false) {
				Il2CppMethodInitialized_0754642c = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HoodPull;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 0x250);
		}
	}

	[Token(Token = "0x17000618")]
	public static string HoodPullAir
	{
		[Token(Token = "0x600299B")]
		[Address(RVA = "0x5969400", Offset = "0x5968400", VA = "0x5969400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPullAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754642d == false) {
				Il2CppMethodInitialized_0754642d = true;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanAnimations.HoodPullAir;
			}
			return *(String*)((long)(typeof(HumanAnimations)).static_fields + 600);
		}
	}

	[Token(Token = "0x17000619")]
	public override string ClassName
	{
		[Token(Token = "0x600299C")]
		[Address(RVA = "0x5969470", Offset = "0x5968470", VA = "0x5969470", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_ClassName): clean
			return "HumanAnimationEnum";
		}
	}

	[Token(Token = "0x1700061A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600299D")]
		[Address(RVA = "0x59694A0", Offset = "0x59684A0", VA = "0x59694A0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700061B")]
	public override bool IsStatic
	{
		[Token(Token = "0x600299E")]
		[Address(RVA = "0x59694B0", Offset = "0x59684B0", VA = "0x59694B0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700061C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600299F")]
		[Address(RVA = "0x59694C0", Offset = "0x59684C0", VA = "0x59694C0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x59672C0", Offset = "0x59662C0", VA = "0x59672C0")]
	public CustomLogicHumanAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c (CustomLogic.CustomLogicHumanAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463e1 == false) {
			Il2CppMethodInitialized_075463e1 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHumanAnimationEnum.c.

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"HorseMount");
		__this.Add((Il2CppObject *)"HorseDismount");
		__this.Add((Il2CppObject *)"HorseIdle");
		__this.Add((Il2CppObject *)"HorseRun");
		__this.Add((Il2CppObject *)"IdleF");
		__this.Add((Il2CppObject *)"IdleM");
		__this.Add((Il2CppObject *)"IdleAHSSM");
		__this.Add((Il2CppObject *)"IdleAHSSF");
		__this.Add((Il2CppObject *)"IdleTSF");
		__this.Add((Il2CppObject *)"IdleTSM");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Run");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"RunTS");
		__this.Add((Il2CppObject *)"RunBuffed");
		__this.Add((Il2CppObject *)"Dodge");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"Slide");
		__this.Add((Il2CppObject *)"Grabbed");
		__this.Add((Il2CppObject *)"Dash");
		__this.Add((Il2CppObject *)"Refill");
		__this.Add((Il2CppObject *)"ToRoof");
		__this.Add((Il2CppObject *)"WallRun");
		__this.Add((Il2CppObject *)"OnWall");
		__this.Add((Il2CppObject *)"ChangeBlade");
		__this.Add((Il2CppObject *)"ChangeBladeAir");
		__this.Add((Il2CppObject *)"AHSSHookForwardBoth");
		__this.Add((Il2CppObject *)"AHSSHookForwardL");
		__this.Add((Il2CppObject *)"AHSSHookForwardR");
		__this.Add((Il2CppObject *)"AHSSShootR");
		__this.Add((Il2CppObject *)"AHSSShootL");
		__this.Add((Il2CppObject *)"AHSSShootBoth");
		__this.Add((Il2CppObject *)"AHSSShootRAir");
		__this.Add((Il2CppObject *)"AHSSShootLAir");
		__this.Add((Il2CppObject *)"AHSSShootBothAir");
		__this.Add((Il2CppObject *)"AHSSGunReloadBoth");
		__this.Add((Il2CppObject *)"AHSSGunReloadBothAir");
		__this.Add((Il2CppObject *)"TSShootR");
		__this.Add((Il2CppObject *)"TSShootL");
		__this.Add((Il2CppObject *)"TSShootRAir");
		__this.Add((Il2CppObject *)"TSShootLAir");
		__this.Add((Il2CppObject *)"AirHookLJust");
		__this.Add((Il2CppObject *)"AirHookRJust");
		__this.Add((Il2CppObject *)"AirHookL");
		__this.Add((Il2CppObject *)"AirHookR");
		__this.Add((Il2CppObject *)"AirHook");
		__this.Add((Il2CppObject *)"AirRelease");
		__this.Add((Il2CppObject *)"AirFall");
		__this.Add((Il2CppObject *)"AirRise");
		__this.Add((Il2CppObject *)"Air2");
		__this.Add((Il2CppObject *)"Air2Right");
		__this.Add((Il2CppObject *)"Air2Left");
		__this.Add((Il2CppObject *)"Air2Backward");
		__this.Add((Il2CppObject *)"Attack1HookL1");
		__this.Add((Il2CppObject *)"Attack1HookL2");
		__this.Add((Il2CppObject *)"Attack1HookR1");
		__this.Add((Il2CppObject *)"Attack1HookR2");
		__this.Add((Il2CppObject *)"Attack1");
		__this.Add((Il2CppObject *)"Attack2");
		__this.Add((Il2CppObject *)"Attack4");
		__this.Add((Il2CppObject *)"SpecialArmin");
		__this.Add((Il2CppObject *)"SpecialMarco0");
		__this.Add((Il2CppObject *)"SpecialMarco1");
		__this.Add((Il2CppObject *)"SpecialSasha");
		__this.Add((Il2CppObject *)"SpecialMikasa1");
		__this.Add((Il2CppObject *)"SpecialMikasa2");
		__this.Add((Il2CppObject *)"SpecialLevi");
		__this.Add((Il2CppObject *)"SpecialPetra");
		__this.Add((Il2CppObject *)"SpecialJean");
		__this.Add((Il2CppObject *)"SpecialShifter");
		__this.Add((Il2CppObject *)"EmoteSalute");
		__this.Add((Il2CppObject *)"EmoteNo");
		__this.Add((Il2CppObject *)"EmoteYes");
		__this.Add((Il2CppObject *)"EmoteWave");
		__this.Add((Il2CppObject *)"HoodPull");
		__this.Add((Il2CppObject *)"HoodPullAir");
		CustomLogicHumanAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__HorseMount_g____getter_2_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b0 == false) {
			Il2CppMethodInitialized_075465b0 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HorseMount;
		}
		return *(object*)(typeof(HumanAnimations)).static_fields;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseDismount>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__HorseDismount_g____getter_3_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b1 == false) {
			Il2CppMethodInitialized_075465b1 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HorseDismount;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseIdle>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__HorseIdle_g____getter_4_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b2 == false) {
			Il2CppMethodInitialized_075465b2 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HorseIdle;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseRun>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HorseRun_g____getter_5_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b3 == false) {
			Il2CppMethodInitialized_075465b3 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HorseRun;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleF>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__IdleF_g____getter_6_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b4 == false) {
			Il2CppMethodInitialized_075465b4 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleF;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleM>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__IdleM_g____getter_7_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b5 == false) {
			Il2CppMethodInitialized_075465b5 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleM;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSM>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__IdleAHSSM_g____getter_8_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b6 == false) {
			Il2CppMethodInitialized_075465b6 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleAHSSM;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSF>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__IdleAHSSF_g____getter_9_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b7 == false) {
			Il2CppMethodInitialized_075465b7 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleAHSSF;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSF>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__IdleTSF_g____getter_10_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b8 == false) {
			Il2CppMethodInitialized_075465b8 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleTSF;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSM>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__IdleTSM_g____getter_11_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465b9 == false) {
			Il2CppMethodInitialized_075465b9 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.IdleTSM;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_12_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ba == false) {
			Il2CppMethodInitialized_075465ba = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Jump;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Run_g____getter_13_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465bb == false) {
			Il2CppMethodInitialized_075465bb = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Run;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_14_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465bc == false) {
			Il2CppMethodInitialized_075465bc = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Walk;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x248) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunTS>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__RunTS_g____getter_15_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465bd == false) {
			Il2CppMethodInitialized_075465bd = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.RunTS;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunBuffed>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__RunBuffed_g____getter_16_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465be == false) {
			Il2CppMethodInitialized_075465be = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.RunBuffed;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Dodge_g____getter_17_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465bf == false) {
			Il2CppMethodInitialized_075465bf = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Dodge;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_18_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c0 == false) {
			Il2CppMethodInitialized_075465c0 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Land;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Slide_g____getter_19_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c1 == false) {
			Il2CppMethodInitialized_075465c1 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Slide;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Grabbed>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Grabbed_g____getter_20_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c2 == false) {
			Il2CppMethodInitialized_075465c2 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Grabbed;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Dash_g____getter_21_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c3 == false) {
			Il2CppMethodInitialized_075465c3 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Dash;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Refill_g____getter_22_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c4 == false) {
			Il2CppMethodInitialized_075465c4 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Refill;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ToRoof>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__ToRoof_g____getter_23_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c5 == false) {
			Il2CppMethodInitialized_075465c5 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.ToRoof;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__WallRun>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__WallRun_g____getter_24_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c6 == false) {
			Il2CppMethodInitialized_075465c6 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.WallRun;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__OnWall>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__OnWall_g____getter_25_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c7 == false) {
			Il2CppMethodInitialized_075465c7 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.OnWall;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBlade>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__ChangeBlade_g____getter_26_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c8 == false) {
			Il2CppMethodInitialized_075465c8 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.ChangeBlade;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBladeAir>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__ChangeBladeAir_g____getter_27_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465c9 == false) {
			Il2CppMethodInitialized_075465c9 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.ChangeBladeAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_28_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ca == false) {
			Il2CppMethodInitialized_075465ca = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSHookForwardBoth;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 200);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardL>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSHookForwardL_g____getter_29_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465cb == false) {
			Il2CppMethodInitialized_075465cb = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSHookForwardL;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardR>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSHookForwardR_g____getter_30_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465cc == false) {
			Il2CppMethodInitialized_075465cc = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSHookForwardR;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootR>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootR_g____getter_31_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465cd == false) {
			Il2CppMethodInitialized_075465cd = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootR;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xe0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootL>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootL_g____getter_32_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ce == false) {
			Il2CppMethodInitialized_075465ce = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootL;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xe8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBoth>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootBoth_g____getter_33_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465cf == false) {
			Il2CppMethodInitialized_075465cf = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootBoth;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xf0);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootRAir>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootRAir_g____getter_34_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d0 == false) {
			Il2CppMethodInitialized_075465d0 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootRAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0xf8);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootLAir>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootLAir_g____getter_35_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d1 == false) {
			Il2CppMethodInitialized_075465d1 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootLAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x100) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBothAir>g____getter|36_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSShootBothAir_g____getter_36_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d2 == false) {
			Il2CppMethodInitialized_075465d2 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSShootBothAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x108) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_37_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d3 == false) {
			Il2CppMethodInitialized_075465d3 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSGunReloadBoth;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x110) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter|38_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_38_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d4 == false) {
			Il2CppMethodInitialized_075465d4 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AHSSGunReloadBothAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x118) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootR>g____getter|39_0: clean
	private static object Bindings____CreatePropertyBinding__TSShootR_g____getter_39_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d5 == false) {
			Il2CppMethodInitialized_075465d5 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.TSShootR;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x120) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootL>g____getter|40_0: clean
	private static object Bindings____CreatePropertyBinding__TSShootL_g____getter_40_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d6 == false) {
			Il2CppMethodInitialized_075465d6 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.TSShootL;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x128) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootRAir>g____getter|41_0: clean
	private static object Bindings____CreatePropertyBinding__TSShootRAir_g____getter_41_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d7 == false) {
			Il2CppMethodInitialized_075465d7 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.TSShootRAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x130) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootLAir>g____getter|42_0: clean
	private static object Bindings____CreatePropertyBinding__TSShootLAir_g____getter_42_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d8 == false) {
			Il2CppMethodInitialized_075465d8 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.TSShootLAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x138) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookLJust>g____getter|43_0: clean
	private static object Bindings____CreatePropertyBinding__AirHookLJust_g____getter_43_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465d9 == false) {
			Il2CppMethodInitialized_075465d9 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirHookLJust;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x140) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookRJust>g____getter|44_0: clean
	private static object Bindings____CreatePropertyBinding__AirHookRJust_g____getter_44_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465da == false) {
			Il2CppMethodInitialized_075465da = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirHookRJust;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x148) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookL>g____getter|45_0: clean
	private static object Bindings____CreatePropertyBinding__AirHookL_g____getter_45_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465db == false) {
			Il2CppMethodInitialized_075465db = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirHookL;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x150) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookR>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__AirHookR_g____getter_46_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465dc == false) {
			Il2CppMethodInitialized_075465dc = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirHookR;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x158) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHook>g____getter|47_0: clean
	private static object Bindings____CreatePropertyBinding__AirHook_g____getter_47_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465dd == false) {
			Il2CppMethodInitialized_075465dd = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirHook;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x160) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRelease>g____getter|48_0: clean
	private static object Bindings____CreatePropertyBinding__AirRelease_g____getter_48_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465de == false) {
			Il2CppMethodInitialized_075465de = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirRelease;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x168) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirFall>g____getter|49_0: clean
	private static object Bindings____CreatePropertyBinding__AirFall_g____getter_49_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465df == false) {
			Il2CppMethodInitialized_075465df = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirFall;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x170) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRise>g____getter|50_0: clean
	private static object Bindings____CreatePropertyBinding__AirRise_g____getter_50_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e0 == false) {
			Il2CppMethodInitialized_075465e0 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.AirRise;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x178) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2>g____getter|51_0: clean
	private static object Bindings____CreatePropertyBinding__Air2_g____getter_51_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e1 == false) {
			Il2CppMethodInitialized_075465e1 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Air2;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x180) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Right>g____getter|52_0: clean
	private static object Bindings____CreatePropertyBinding__Air2Right_g____getter_52_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e2 == false) {
			Il2CppMethodInitialized_075465e2 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Air2Right;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x188) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Left>g____getter|53_0: clean
	private static object Bindings____CreatePropertyBinding__Air2Left_g____getter_53_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e3 == false) {
			Il2CppMethodInitialized_075465e3 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Air2Left;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 400);
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Backward>g____getter|54_0: clean
	private static object Bindings____CreatePropertyBinding__Air2Backward_g____getter_54_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e4 == false) {
			Il2CppMethodInitialized_075465e4 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Air2Backward;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x198) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL1>g____getter|55_0: clean
	private static object Bindings____CreatePropertyBinding__Attack1HookL1_g____getter_55_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e5 == false) {
			Il2CppMethodInitialized_075465e5 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack1HookL1;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1a0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL2>g____getter|56_0: clean
	private static object Bindings____CreatePropertyBinding__Attack1HookL2_g____getter_56_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e6 == false) {
			Il2CppMethodInitialized_075465e6 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack1HookL2;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1a8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR1>g____getter|57_0: clean
	private static object Bindings____CreatePropertyBinding__Attack1HookR1_g____getter_57_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e7 == false) {
			Il2CppMethodInitialized_075465e7 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack1HookR1;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1b0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR2>g____getter|58_0: clean
	private static object Bindings____CreatePropertyBinding__Attack1HookR2_g____getter_58_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e8 == false) {
			Il2CppMethodInitialized_075465e8 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack1HookR2;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1b8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1>g____getter|59_0: clean
	private static object Bindings____CreatePropertyBinding__Attack1_g____getter_59_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465e9 == false) {
			Il2CppMethodInitialized_075465e9 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack1;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1c0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack2>g____getter|60_0: clean
	private static object Bindings____CreatePropertyBinding__Attack2_g____getter_60_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ea == false) {
			Il2CppMethodInitialized_075465ea = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack2;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1c8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack4>g____getter|61_0: clean
	private static object Bindings____CreatePropertyBinding__Attack4_g____getter_61_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465eb == false) {
			Il2CppMethodInitialized_075465eb = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.Attack4;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1d0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialArmin>g____getter|62_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialArmin_g____getter_62_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ec == false) {
			Il2CppMethodInitialized_075465ec = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialArmin;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1d8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco0>g____getter|63_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialMarco0_g____getter_63_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ed == false) {
			Il2CppMethodInitialized_075465ed = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialMarco0;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1e0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco1>g____getter|64_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialMarco1_g____getter_64_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ee == false) {
			Il2CppMethodInitialized_075465ee = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialMarco1;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1e8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialSasha>g____getter|65_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialSasha_g____getter_65_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ef == false) {
			Il2CppMethodInitialized_075465ef = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialSasha;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1f0) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa1>g____getter|66_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialMikasa1_g____getter_66_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f0 == false) {
			Il2CppMethodInitialized_075465f0 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialMikasa1;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x1f8) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa2>g____getter|67_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialMikasa2_g____getter_67_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f1 == false) {
			Il2CppMethodInitialized_075465f1 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialMikasa2;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x200) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialLevi>g____getter|68_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialLevi_g____getter_68_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f2 == false) {
			Il2CppMethodInitialized_075465f2 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialLevi;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x208) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialPetra>g____getter|69_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialPetra_g____getter_69_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f3 == false) {
			Il2CppMethodInitialized_075465f3 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialPetra;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x210) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialJean>g____getter|70_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialJean_g____getter_70_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f4 == false) {
			Il2CppMethodInitialized_075465f4 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialJean;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x218) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialShifter>g____getter|71_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialShifter_g____getter_71_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f5 == false) {
			Il2CppMethodInitialized_075465f5 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.SpecialShifter;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x220) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|72_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteSalute_g____getter_72_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f6 == false) {
			Il2CppMethodInitialized_075465f6 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.EmoteSalute;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x228) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNo>g____getter|73_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteNo_g____getter_73_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f7 == false) {
			Il2CppMethodInitialized_075465f7 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.EmoteNo;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x230) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteYes>g____getter|74_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteYes_g____getter_74_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f8 == false) {
			Il2CppMethodInitialized_075465f8 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.EmoteYes;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x238) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|75_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteWave_g____getter_75_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465f9 == false) {
			Il2CppMethodInitialized_075465f9 = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.EmoteWave;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x240) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPull>g____getter|76_0: clean
	private static object Bindings____CreatePropertyBinding__HoodPull_g____getter_76_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465fa == false) {
			Il2CppMethodInitialized_075465fa = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HoodPull;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 0x250) ;
	}

	// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPullAir>g____getter|77_0: clean
	private static object Bindings____CreatePropertyBinding__HoodPullAir_g____getter_77_0(CustomLogicHumanAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465fb == false) {
			Il2CppMethodInitialized_075465fb = true;
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanAnimations.HoodPullAir;
		}
		return *(object*)((long)(typeof(HumanAnimations)).static_fields + 600);
	}
}
