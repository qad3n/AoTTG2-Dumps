// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHumanBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHumanBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicHumanBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004B9")]
[CompilerGenerated]
internal class CustomLogicHumanBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20004BA")]
	public new static class Factory
	{
		[Token(Token = "0x600223B")]
		[Address(RVA = "0x591BA40", Offset = "0x591AA40", VA = "0x591BA40")]
		public static CustomLogicHumanBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004BB")]
	public new static class Bindings
	{
		[Token(Token = "0x4001705")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600223C")]
		[Address(RVA = "0x591BAD0", Offset = "0x591AAD0", VA = "0x591BAD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicHumanBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicHumanBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x664a747d) {
				if (uVar2 < 0x30777bfc) {
					if (uVar2 < 0x1a43a2ad) {
						if (uVar2 < 0xfa61b95) {
							if (uVar2 < 0xbecd2a0) {
								if (uVar2 == 0xa6b8020) {
									bVar1 = (name == "Speed");
									if (bVar1) {
										pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Speed();
										return (ICLMemberBinding)pCVar4;
									}
								}
								else if (uVar2 == 0xbecd29f) {
									bVar1 = (name == "ClearRightHook");
									if (bVar1) {
										pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ClearRightHook();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0xd469333) {
								bVar1 = (name == "MountMapObject");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__MountMapObject();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xe1ef32d) {
								bVar1 = (name == "Jump");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Jump();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xfa61b94) {
								bVar1 = (name == "ReleaseHookLeft");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ReleaseHookLeft();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x155683ff) {
							if (uVar2 == 0xfedf86f) {
								bVar1 = (name == "ShifterLiveTime");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__ShifterLiveTime();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x1366e8ca) {
								bVar1 = (name == "ClearHooks");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ClearHooks();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x155683fe) {
								bVar1 = (name == "RefillImmediate");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__RefillImmediate();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x16b793c7) {
							bVar1 = (name == "AllowSkin");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__AllowSkin();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x182eb08c) {
							bVar1 = (name == "SetParticleEffect");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__SetParticleEffect();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1a43a2ac) {
							bVar1 = (name == "Reload");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Reload();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x25127d63) {
						if (uVar2 < 0x1af78072) {
							if (uVar2 == 0x1aa86c38) {
								bVar1 = (name == "SpecialCooldownTime");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__SpecialCooldownTime();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x1af78071) {
								bVar1 = (name == "RightHookReady");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__RightHookReady();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x1d66a535) {
							bVar1 = (name == "RightHookPosition");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__RightHookPosition();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x214f33c4) {
							bVar1 = (name == "PivotPosition");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__PivotPosition();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x25127d62) {
							bVar1 = (name == "GetAIState");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__GetAIState();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x27bbaff1) {
						if (uVar2 == 0x251ec0b8) {
							bVar1 = (name == "ClearLeftHook");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ClearLeftHook();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x26f20788) {
							bVar1 = (name == "DisablePerks");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__DisablePerks();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x27bbaff0) {
							bVar1 = (name == "MountedMapObject");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MountedMapObject();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x29089400) {
						bVar1 = (name == "ReleaseHookAll");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ReleaseHookAll();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2dd6aa84) {
						bVar1 = (name == "CurrentBlade");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentBlade();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x30777bfb) {
						bVar1 = (name == "TargetPosition");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__TargetPosition();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x41919632) {
					if (uVar2 < 0x3dd202bc) {
						if (uVar2 < 0x38adb9d5) {
							if (uVar2 == 0x3862ca21) {
								bVar1 = (name == "SpecialCooldown");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__SpecialCooldown();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x38adb9d4) {
								bVar1 = (name == "LeftHookEnabled");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__LeftHookEnabled();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x3b3e09bf) {
							bVar1 = (name == "AllowHorse");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__AllowHorse();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x3d775299) {
							bVar1 = (name == "HorseSpeed");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__HorseSpeed();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x3dd202bb) {
							bVar1 = (name == "CurrentBladeDurability");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentBladeDurability();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x3f43a877) {
						if (uVar2 == 0x3ea939be) {
							bVar1 = (name == "LeftHookReady");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__LeftHookReady();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x3f04971b) {
							bVar1 = (name == "TargetVelocity");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__TargetVelocity();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x3f43a876) {
							bVar1 = (name == "HasHookRight");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__HasHookRight();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x3f66c333) {
						bVar1 = (name == "CurrentGas");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentGas();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x41465646) {
						bVar1 = (name == "Horse");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Horse();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x41919631) {
						bVar1 = (name == "MaxAmmoRound");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MaxAmmoRound();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x4fc3dee1) {
					if (uVar2 < 0x43399e7b) {
						if (uVar2 == 0x420a2bbb) {
							bVar1 = (name == "IsMounted");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsMounted();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x43399e7a) {
							bVar1 = (name == "SetSpecial");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__SetSpecial();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x46b92be8) {
						bVar1 = (name == "FocusRange");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__FocusRange();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x481546b1) {
						bVar1 = (name == "UseGas");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__UseGas();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x4fc3dee0) {
						bVar1 = (name == "FindNearestEnemy");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__FindNearestEnemy();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x571689da) {
					if (uVar2 == 0x533f8aab) {
						bVar1 = (name == "ActivateSpecial");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ActivateSpecial();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x540059ef) {
						bVar1 = (name == "HorseWalk");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__HorseWalk();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x571689d9) {
						bVar1 = (name == "Reel");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Reel();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x5aae131e) {
					bVar1 = (name == "SetAIState");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__SetAIState();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6250ccf3) {
					bVar1 = (name == "SetWeapon");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__SetWeapon();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x664a747c) {
					bVar1 = (name == "SwitchAIState");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__SwitchAIState();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb7c10362) {
				if (uVar2 < 0x8b67f169) {
					if (uVar2 < 0x72ec0423) {
						if (uVar2 < 0x693e9e8d) {
							if (uVar2 == 0x68597615) {
								bVar1 = (name == "Dash");
								if (bVar1) {
									pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Dash();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x693e9e8c) {
								bVar1 = (name == "CurrentAmmoRound");
								if (bVar1) {
									pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentAmmoRound();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x694fcf3e) {
							bVar1 = (name == "HasAIState");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__HasAIState();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x6c198db1) {
							bVar1 = (name == "Refill");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Refill();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x72ec0422) {
							bVar1 = (name == "MountTransform");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__MountTransform();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x7f2c2a35) {
						if (uVar2 == 0x78fba3bd) {
							bVar1 = (name == "Acceleration");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Acceleration();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x79a5e667) {
							bVar1 = (name == "RightHookEnabled");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__RightHookEnabled();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x7f2c2a34) {
							bVar1 = (name == "Move");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Move();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x80804535) {
						bVar1 = (name == "MaxBlade");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MaxBlade();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x8af5b772) {
						bVar1 = (name == "IsHookedLeft");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsHookedLeft();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x8b67f168) {
						bVar1 = (name == "Target");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Target();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x9a811657) {
					if (uVar2 < 0x8da10a04) {
						if (uVar2 == 0x8ba9331d) {
							bVar1 = (name == "Attack");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Attack();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x8da10a03) {
							bVar1 = (name == "AutoRefillGas");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__AutoRefillGas();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x8f898d1d) {
						bVar1 = (name == "MountedTransform");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MountedTransform();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x90cf188a) {
						bVar1 = (name == "FocusTime");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__FocusTime();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x9a811656) {
						bVar1 = (name == "MaxGas");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MaxGas();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xb3178ff2) {
					if (uVar2 == 0x9f9bfd43) {
						bVar1 = (name == "IsHookingLeft");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsHookingLeft();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xa2ea93f6) {
						bVar1 = (name == "MaxBladeDurability");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MaxBladeDurability();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xb3178ff1) {
						bVar1 = (name == "IsCarried");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsCarried();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xb49e22b7) {
					bVar1 = (name == "Pivot");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Pivot();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xb51217d1) {
					bVar1 = (name == "CurrentSpecial");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentSpecial();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xb7c10361) {
					bVar1 = (name == "Weapon");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Weapon();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd0b62b1f) {
				if (uVar2 < 0xc52547e8) {
					if (uVar2 < 0xbad517ad) {
						if (uVar2 == 0xb90ee63d) {
							bVar1 = (name == "CurrentAmmoLeft");
							if (bVar1) {
								pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CurrentAmmoLeft();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0xbad517ac) {
							bVar1 = (name == "LaunchHookLeft");
							if (bVar1) {
								pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__LaunchHookLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xbe425288) {
						bVar1 = (name == "SpecialCooldownRatio");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__SpecialCooldownRatio();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xc3879128) {
						bVar1 = (name == "HorseFollowEnabled");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__HorseFollowEnabled();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xc52547e7) {
						bVar1 = (name == "HorseMount");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__HorseMount();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xcff18f3c) {
					if (uVar2 == 0xc899a893) {
						bVar1 = (name == "AimAt");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__AimAt();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xcad1beb0) {
						bVar1 = (name == "CanDodge");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__CanDodge();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xcff18f3b) {
						bVar1 = (name == "ResetCallback");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ResetCallback();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xcff57e4c) {
					bVar1 = (name == "IsHookingRight");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsHookingRight();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd08919c3) {
					bVar1 = (name == "Navigation");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Navigation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd0b62b1e) {
					bVar1 = (name == "HorseTransform");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__HorseTransform();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe2a0bd4c) {
				if (uVar2 < 0xdc120449) {
					if (uVar2 == 0xd66e6cc1) {
						bVar1 = (name == "ReleaseHookRight");
						if (bVar1) {
							pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__ReleaseHookRight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd8e7f61f) {
						bVar1 = (name == "IsHookedRight");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsHookedRight();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xdc120448) {
						bVar1 = (name == "InvincibleTimeLeft");
						if (bVar1) {
							pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__InvincibleTimeLeft();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xdca94c5c) {
					bVar1 = (name == "IsInvincible");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__IsInvincible();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe27f342a) {
					bVar1 = (name == "Position");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__Position();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe2a0bd4b) {
					bVar1 = (name == "MaxAmmoTotal");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MaxAmmoTotal();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xf526d671) {
				if (uVar2 == 0xf29eaab9) {
					bVar1 = (name == "LaunchHookRight");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__LaunchHookRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf41dd7ef) {
					bVar1 = (name == "MountState");
					if (bVar1) {
						pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__MountState();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf526d670) {
					bVar1 = (name == "Dodge");
					if (bVar1) {
						pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Dodge();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf8b1e70c) {
				bVar1 = (name == "LeftHookPosition");
				if (bVar1) {
					pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__LeftHookPosition();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfa055a2b) {
				bVar1 = (name == "Unmount");
				if (bVar1) {
					pCVar3 = CustomLogicHumanBuiltin.Bindings.__CreateMethodBinding__Unmount();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfc93affd) {
				bVar1 = (name == "HasHookLeft");
				if (bVar1) {
					pCVar4 = CustomLogicHumanBuiltin.Bindings.__CreatePropertyBinding__HasHookLeft();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600223D")]
		[Address(RVA = "0x591DB00", Offset = "0x591CB00", VA = "0x591DB00")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600223E")]
		[Address(RVA = "0x591DBE0", Offset = "0x591CBE0", VA = "0x591DBE0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Weapon()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Weapon): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____getter_3_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600223F")]
		[Address(RVA = "0x591DCC0", Offset = "0x591CCC0", VA = "0x591DCC0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentSpecial()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentSpecial): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____getter);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002240")]
		[Address(RVA = "0x591DDA0", Offset = "0x591CDA0", VA = "0x591DDA0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldownTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownTime): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____g);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002241")]
		[Address(RVA = "0x591DE80", Offset = "0x591CE80", VA = "0x591DE80")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldown): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____gette);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002242")]
		[Address(RVA = "0x591DF60", Offset = "0x591CF60", VA = "0x591DF60")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__ShifterLiveTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__ShifterLiveTime): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____gette);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002243")]
		[Address(RVA = "0x591E040", Offset = "0x591D040", VA = "0x591E040")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__SpecialCooldownRatio()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownRatio): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002244")]
		[Address(RVA = "0x591E0E0", Offset = "0x591D0E0", VA = "0x591E0E0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentGas()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentGas): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____getter_9_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____setter_9_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002245")]
		[Address(RVA = "0x591E1C0", Offset = "0x591D1C0", VA = "0x591E1C0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxGas()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxGas): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____getter_10_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002246")]
		[Address(RVA = "0x591E2A0", Offset = "0x591D2A0", VA = "0x591E2A0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Acceleration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Acceleration): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____getter_1);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002247")]
		[Address(RVA = "0x591E380", Offset = "0x591D380", VA = "0x591E380")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Speed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Speed): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____getter_12_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____setter_12_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002248")]
		[Address(RVA = "0x591E460", Offset = "0x591D460", VA = "0x591E460")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Horse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Horse): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002249")]
		[Address(RVA = "0x591E500", Offset = "0x591D500", VA = "0x591E500")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseFollowEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseFollowEnabled): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____ge);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600224A")]
		[Address(RVA = "0x591E5E0", Offset = "0x591D5E0", VA = "0x591E5E0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseTransform): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600224B")]
		[Address(RVA = "0x591E680", Offset = "0x591D680", VA = "0x591E680")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HorseSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseSpeed): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____getter_16);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____setter_16);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600224C")]
		[Address(RVA = "0x591E760", Offset = "0x591D760", VA = "0x591E760")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentBladeDurability()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBladeDurability): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_71bf8d0);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600224D")]
		[Address(RVA = "0x591E840", Offset = "0x591D840", VA = "0x591E840")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxBladeDurability()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBladeDurability): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____ge);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600224E")]
		[Address(RVA = "0x591E920", Offset = "0x591D920", VA = "0x591E920")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentBlade()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBlade): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____getter_1);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600224F")]
		[Address(RVA = "0x591EA00", Offset = "0x591DA00", VA = "0x591EA00")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxBlade()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBlade): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____getter_20_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____setter_20_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002250")]
		[Address(RVA = "0x591EAE0", Offset = "0x591DAE0", VA = "0x591EAE0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentAmmoRound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoRound): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____gett);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002251")]
		[Address(RVA = "0x591EBC0", Offset = "0x591DBC0", VA = "0x591EBC0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxAmmoRound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoRound): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____getter_2);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002252")]
		[Address(RVA = "0x591ECA0", Offset = "0x591DCA0", VA = "0x591ECA0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CurrentAmmoLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoLeft): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____gette);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002253")]
		[Address(RVA = "0x591ED80", Offset = "0x591DD80", VA = "0x591ED80")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MaxAmmoTotal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoTotal): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____getter_2);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002254")]
		[Address(RVA = "0x591EE60", Offset = "0x591DE60", VA = "0x591EE60")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookEnabled): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____gette);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002255")]
		[Address(RVA = "0x591EF40", Offset = "0x591DF40", VA = "0x591EF40")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookEnabled): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____gett);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002256")]
		[Address(RVA = "0x591F020", Offset = "0x591E020", VA = "0x591F020")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsMounted()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsMounted): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002257")]
		[Address(RVA = "0x591F0C0", Offset = "0x591E0C0", VA = "0x591F0C0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountState): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002258")]
		[Address(RVA = "0x591F160", Offset = "0x591E160", VA = "0x591F160")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountedMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedMapObject): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002259")]
		[Address(RVA = "0x591F200", Offset = "0x591E200", VA = "0x591F200")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__MountedTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedTransform): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600225A")]
		[Address(RVA = "0x591F2A0", Offset = "0x591E2A0", VA = "0x591F2A0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AutoRefillGas()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AutoRefillGas): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____getter);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600225B")]
		[Address(RVA = "0x591F380", Offset = "0x591E380", VA = "0x591F380")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__CanDodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CanDodge): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____getter_32_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____setter_32_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600225C")]
		[Address(RVA = "0x591F460", Offset = "0x591E460", VA = "0x591F460")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsInvincible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsInvincible): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____getter_3);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600225D")]
		[Address(RVA = "0x591F540", Offset = "0x591E540", VA = "0x591F540")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__InvincibleTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__InvincibleTimeLeft): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____ge);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600225E")]
		[Address(RVA = "0x591F620", Offset = "0x591E620", VA = "0x591F620")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsCarried()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsCarried): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600225F")]
		[Address(RVA = "0x591F6C0", Offset = "0x591E6C0", VA = "0x591F6C0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Pivot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Pivot): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002260")]
		[Address(RVA = "0x591F760", Offset = "0x591E760", VA = "0x591F760")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__PivotPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__PivotPosition): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002261")]
		[Address(RVA = "0x591F800", Offset = "0x591E800", VA = "0x591F800")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookedLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedLeft): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002262")]
		[Address(RVA = "0x591F8A0", Offset = "0x591E8A0", VA = "0x591F8A0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookedRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedRight): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002263")]
		[Address(RVA = "0x591F940", Offset = "0x591E940", VA = "0x591F940")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookingLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingLeft): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002264")]
		[Address(RVA = "0x591F9E0", Offset = "0x591E9E0", VA = "0x591F9E0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__IsHookingRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingRight): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002265")]
		[Address(RVA = "0x591FA80", Offset = "0x591EA80", VA = "0x591FA80")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HasHookLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookLeft): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002266")]
		[Address(RVA = "0x591FB20", Offset = "0x591EB20", VA = "0x591FB20")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__HasHookRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookRight): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002267")]
		[Address(RVA = "0x591FBC0", Offset = "0x591EBC0", VA = "0x591FBC0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookReady()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookReady): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002268")]
		[Address(RVA = "0x591FC60", Offset = "0x591EC60", VA = "0x591FC60")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookReady()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookReady): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002269")]
		[Address(RVA = "0x591FD00", Offset = "0x591ED00", VA = "0x591FD00")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__LeftHookPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookPosition): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600226A")]
		[Address(RVA = "0x591FDA0", Offset = "0x591EDA0", VA = "0x591FDA0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__RightHookPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookPosition): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600226B")]
		[Address(RVA = "0x591FE40", Offset = "0x591EE40", VA = "0x591FE40")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__FocusRange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_48);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_48);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600226C")]
		[Address(RVA = "0x591FF20", Offset = "0x591EF20", VA = "0x591FF20")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__FocusTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_49_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_49_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600226D")]
		[Address(RVA = "0x5920000", Offset = "0x591F000", VA = "0x5920000")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__Target()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Target): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____getter_50_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____setter_50_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600226E")]
		[Address(RVA = "0x59200E0", Offset = "0x591F0E0", VA = "0x59200E0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__TargetPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetPosition): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____getter);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600226F")]
		[Address(RVA = "0x59201C0", Offset = "0x591F1C0", VA = "0x59201C0")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__TargetVelocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetVelocity): 2 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_00;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002270")]
		[Address(RVA = "0x5920260", Offset = "0x591F260", VA = "0x5920260")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AllowHorse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowHorse): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____getter_53);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____setter_53);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002271")]
		[Address(RVA = "0x5920340", Offset = "0x591F340", VA = "0x5920340")]
		public static CLPropertyBinding<CustomLogicHumanBuiltin> __CreatePropertyBinding__AllowSkin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowSkin): 3 lines keep C-only constructs
			Func<CustomLogicHumanBuiltin, object> __this;
			Action<CustomLogicHumanBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicHumanBuiltin> __this_01;

			__this = new Func<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____getter_54_0);
			__this_00 = new Action<CustomLogicHumanBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____setter_54_1);
			__this_01 = new CLPropertyBinding<CustomLogicHumanBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002272")]
		[Address(RVA = "0x5920420", Offset = "0x591F420", VA = "0x5920420")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Refill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Refill): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754600b == false) {
				Il2CppMethodInitialized_0754600b = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__55_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__55_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__55_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002273")]
		[Address(RVA = "0x5920560", Offset = "0x591F560", VA = "0x5920560")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__RefillImmediate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__RefillImmediate): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754600c == false) {
				Il2CppMethodInitialized_0754600c = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__56_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__56_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__56_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002274")]
		[Address(RVA = "0x59206A0", Offset = "0x591F6A0", VA = "0x59206A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearHooks()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearHooks): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754600d == false) {
				Il2CppMethodInitialized_0754600d = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__57_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__57_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__57_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002275")]
		[Address(RVA = "0x59207E0", Offset = "0x591F7E0", VA = "0x59207E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearLeftHook()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearLeftHook): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754600e == false) {
				Il2CppMethodInitialized_0754600e = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__58_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__58_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__58_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002276")]
		[Address(RVA = "0x5920920", Offset = "0x591F920", VA = "0x5920920")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ClearRightHook()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearRightHook): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754600f == false) {
				Il2CppMethodInitialized_0754600f = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__59_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__59_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__59_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002277")]
		[Address(RVA = "0x5920A60", Offset = "0x591FA60", VA = "0x5920A60")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MountMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountMapObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546010 == false) {
				Il2CppMethodInitialized_07546010 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__60_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__60_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__60_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002278")]
		[Address(RVA = "0x5920BA0", Offset = "0x591FBA0", VA = "0x5920BA0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__MountTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountTransform): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546011 == false) {
				Il2CppMethodInitialized_07546011 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__61_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__61_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__61_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002279")]
		[Address(RVA = "0x5920CE0", Offset = "0x591FCE0", VA = "0x5920CE0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Unmount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Unmount): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546012 == false) {
				Il2CppMethodInitialized_07546012 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__62_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__62_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__62_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227A")]
		[Address(RVA = "0x5920E20", Offset = "0x591FE20", VA = "0x5920E20")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetSpecial()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetSpecial): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546013 == false) {
				Il2CppMethodInitialized_07546013 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__63_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__63_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__63_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227B")]
		[Address(RVA = "0x5920F60", Offset = "0x591FF60", VA = "0x5920F60")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ActivateSpecial()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ActivateSpecial): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546014 == false) {
				Il2CppMethodInitialized_07546014 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__64_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__64_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__64_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227C")]
		[Address(RVA = "0x59210A0", Offset = "0x59200A0", VA = "0x59210A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetWeapon()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetWeapon): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546015 == false) {
				Il2CppMethodInitialized_07546015 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__65_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__65_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__65_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227D")]
		[Address(RVA = "0x59211E0", Offset = "0x59201E0", VA = "0x59211E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__DisablePerks()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__DisablePerks): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546016 == false) {
				Il2CppMethodInitialized_07546016 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__66_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__66_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__66_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227E")]
		[Address(RVA = "0x5921320", Offset = "0x5920320", VA = "0x5921320")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HasAIState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HasAIState): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546017 == false) {
				Il2CppMethodInitialized_07546017 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__67_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__67_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__67_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600227F")]
		[Address(RVA = "0x5921460", Offset = "0x5920460", VA = "0x5921460")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetAIState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetAIState): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546018 == false) {
				Il2CppMethodInitialized_07546018 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__68_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__68_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__68_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002280")]
		[Address(RVA = "0x59215A0", Offset = "0x59205A0", VA = "0x59215A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__GetAIState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__GetAIState): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546019 == false) {
				Il2CppMethodInitialized_07546019 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__69_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__69_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__69_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002281")]
		[Address(RVA = "0x59216E0", Offset = "0x59206E0", VA = "0x59216E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SwitchAIState()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SwitchAIState): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601a == false) {
				Il2CppMethodInitialized_0754601a = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__70_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__70_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__70_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002282")]
		[Address(RVA = "0x5921820", Offset = "0x5920820", VA = "0x5921820")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ResetCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ResetCallback): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601b == false) {
				Il2CppMethodInitialized_0754601b = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__71_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__71_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__71_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002283")]
		[Address(RVA = "0x5921960", Offset = "0x5920960", VA = "0x5921960")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Move()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Move): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0) ;
				Il2CppMethodInitialized_0754601c = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__72_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__72_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__72_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002284")]
		[Address(RVA = "0x5921AA0", Offset = "0x5920AA0", VA = "0x5921AA0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__AimAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__AimAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601d == false) {
				Il2CppMethodInitialized_0754601d = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__73_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__73_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__73_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002285")]
		[Address(RVA = "0x5921BE0", Offset = "0x5920BE0", VA = "0x5921BE0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Jump): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0) ;
				Il2CppMethodInitialized_0754601e = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__74_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__74_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__74_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002286")]
		[Address(RVA = "0x5921D20", Offset = "0x5920D20", VA = "0x5921D20")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HorseMount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseMount): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754601f == false) {
				Il2CppMethodInitialized_0754601f = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__75_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__75_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__75_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002287")]
		[Address(RVA = "0x5921E60", Offset = "0x5920E60", VA = "0x5921E60")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Dodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dodge): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546020 == false) {
				Il2CppMethodInitialized_07546020 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__76_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__76_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__76_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002288")]
		[Address(RVA = "0x5921FA0", Offset = "0x5920FA0", VA = "0x5921FA0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Reload()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reload): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546021 == false) {
				Il2CppMethodInitialized_07546021 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__77_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__77_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__77_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002289")]
		[Address(RVA = "0x59220E0", Offset = "0x59210E0", VA = "0x59220E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__UseGas()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__UseGas): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546022 == false) {
				Il2CppMethodInitialized_07546022 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__78_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__78_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__78_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228A")]
		[Address(RVA = "0x5922220", Offset = "0x5921220", VA = "0x5922220")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__HorseWalk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseWalk): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546023 == false) {
				Il2CppMethodInitialized_07546023 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__79_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__79_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__79_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228B")]
		[Address(RVA = "0x5922360", Offset = "0x5921360", VA = "0x5922360")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Dash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dash): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546024 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0) ;
				Il2CppMethodInitialized_07546024 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__80_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__80_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__80_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228C")]
		[Address(RVA = "0x59224A0", Offset = "0x59214A0", VA = "0x59224A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Reel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reel): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546025 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0) ;
				Il2CppMethodInitialized_07546025 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__81_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__81_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__81_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228D")]
		[Address(RVA = "0x59225E0", Offset = "0x59215E0", VA = "0x59225E0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__LaunchHookLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookLeft): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546026 == false) {
				Il2CppMethodInitialized_07546026 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__82_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__82_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__82_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228E")]
		[Address(RVA = "0x5922720", Offset = "0x5921720", VA = "0x5922720")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__LaunchHookRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookRight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546027 == false) {
				Il2CppMethodInitialized_07546027 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__83_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__83_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__83_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600228F")]
		[Address(RVA = "0x5922860", Offset = "0x5921860", VA = "0x5922860")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookLeft): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546028 == false) {
				Il2CppMethodInitialized_07546028 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__84_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__84_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__84_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002290")]
		[Address(RVA = "0x59229A0", Offset = "0x59219A0", VA = "0x59229A0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookRight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546029 == false) {
				Il2CppMethodInitialized_07546029 = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__85_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__85_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__85_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002291")]
		[Address(RVA = "0x5922AE0", Offset = "0x5921AE0", VA = "0x5922AE0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__ReleaseHookAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754602a == false) {
				Il2CppMethodInitialized_0754602a = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__86_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__86_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__86_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002292")]
		[Address(RVA = "0x5922C20", Offset = "0x5921C20", VA = "0x5922C20")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Attack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Attack): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754602b == false) {
				Il2CppMethodInitialized_0754602b = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__87_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__87_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__87_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002293")]
		[Address(RVA = "0x5922D60", Offset = "0x5921D60", VA = "0x5922D60")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__FindNearestEnemy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__FindNearestEnemy): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754602c == false) {
				Il2CppMethodInitialized_0754602c = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__88_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__88_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__88_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002294")]
		[Address(RVA = "0x5922EA0", Offset = "0x5921EA0", VA = "0x5922EA0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__Navigation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Navigation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754602d == false) {
				Il2CppMethodInitialized_0754602d = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__89_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__89_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__89_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002295")]
		[Address(RVA = "0x5922FE0", Offset = "0x5921FE0", VA = "0x5922FE0")]
		public static CLMethodBinding<CustomLogicHumanBuiltin> __CreateMethodBinding__SetParticleEffect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetParticleEffect): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicHumanBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicHumanBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754602e == false) {
				Il2CppMethodInitialized_0754602e = true;
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicHumanBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__90_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicHumanBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__90_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicHumanBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicHumanBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0);
				pCVar2 = typeof(CustomLogicHumanBuiltin.Bindings.c).static_fields;
				pCVar2.__9__90_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicHumanBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001703")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Human Human;

	[Token(Token = "0x4001704")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public HumanAIController Controller;

	[Token(Token = "0x17000402")]
	public override CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60021BE")]
		[Address(RVA = "0x59185C0", Offset = "0x59175C0", VA = "0x59185C0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Position): clean
			CustomLogicVector3Builtin pCVar1;

			return pCVar1;
		}
		[Token(Token = "0x60021BF")]
		[Address(RVA = "0x59185D0", Offset = "0x59175D0", VA = "0x59185D0", Slot = "14")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_Position): clean
			Human pCVar1;
			bool bVar2;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					pCVar1.IsChangingPosition();
					this.Position = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000403")]
	public string Weapon
	{
		[Token(Token = "0x60021C0")]
		[Address(RVA = "0x5918630", Offset = "0x5917630", VA = "0x5918630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Weapon): 1 lines keep C-only constructs
			Human pCVar1;
			HumanSetup pCVar2;
			String pSVar3;
			Enum local_20;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Setup, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			local_20.klass = (Enum)typeof(HumanWeapon);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar3;
		}
		[Token(Token = "0x60021C1")]
		[Address(RVA = "0x59186B0", Offset = "0x59176B0", VA = "0x59186B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_Weapon): clean
			this.SetWeapon(value);
			return;
		}
	}

	[Token(Token = "0x17000404")]
	public string CurrentSpecial
	{
		[Token(Token = "0x60021C2")]
		[Address(RVA = "0x5918A90", Offset = "0x5917A90", VA = "0x5918A90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentSpecial): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CurrentSpecial;
		}
		[Token(Token = "0x60021C3")]
		[Address(RVA = "0x5918AB0", Offset = "0x5917AB0", VA = "0x5918AB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentSpecial): clean
			Human pCVar1;
			bool bVar2;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					pCVar1.SetSpecial(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000405")]
	public float SpecialCooldownTime
	{
		[Token(Token = "0x60021C4")]
		[Address(RVA = "0x5918B50", Offset = "0x5917B50", VA = "0x5918B50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownTime): clean
			Human pCVar1;
			BaseUseable __this_00;
			float fVar2;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pCVar1.Special;
			if (__this_00 == null) {
				return 0.0;
			}
			return fVar2;
		}
		[Token(Token = "0x60021C5")]
		[Address(RVA = "0x5918B80", Offset = "0x5917B80", VA = "0x5918B80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldownTime): clean
			Human pCVar1;
			BaseUseable __this_00;
			float ratio;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pCVar1.Special;
			if (__this_00 == null) {
				return;
			}
			ratio = 0.0;
			if (0.0 <= value) {
				ratio = value;
			}
			__this_00.SetCooldownRatio(ratio);
			return;
		}
	}

	[Token(Token = "0x17000406")]
	public float SpecialCooldown
	{
		[Token(Token = "0x60021C6")]
		[Address(RVA = "0x5918BB0", Offset = "0x5917BB0", VA = "0x5918BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldown): clean
			Human pCVar1;
			BaseUseable pCVar2;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar2 = pCVar1.Special;
			if (pCVar2 == null) {
				return 0.0;
			}
			return pCVar2.Cooldown;
		}
		[Token(Token = "0x60021C7")]
		[Address(RVA = "0x5918BE0", Offset = "0x5917BE0", VA = "0x5918BE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldown): clean
			Human pCVar1;
			BaseUseable pCVar2;
			float fVar3;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar2 = pCVar1.Special;
			if (pCVar2 != null) {
				fVar3 = 0.0;
				if (0.0 <= value) {
					fVar3 = value;
				}
				pCVar2.Cooldown = fVar3;
			}
			return;
		}
	}

	[Token(Token = "0x17000407")]
	public float ShifterLiveTime
	{
		[Token(Token = "0x60021C8")]
		[Address(RVA = "0x5918C10", Offset = "0x5917C10", VA = "0x5918C10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_ShifterLiveTime): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Special;
			if (pCVar3 != null) {
				bVar1 = (typeof(ShifterTransformSpecial)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ShifterTransformSpecial))) {
					return *(float)&(*(ulong)((sbyte)pCVar3 + 0x40));
				}
			}
			return 0.0;
		}
		[Token(Token = "0x60021C9")]
		[Address(RVA = "0x5918C90", Offset = "0x5917C90", VA = "0x5918C90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_ShifterLiveTime): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Special;
			if (pCVar3 != null) {
				bVar1 = (typeof(ShifterTransformSpecial)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ShifterTransformSpecial))) {
					*(float)&(*(ulong)((sbyte)pCVar3 + 0x40)) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000408")]
	public float SpecialCooldownRatio
	{
		[Token(Token = "0x60021CA")]
		[Address(RVA = "0x5918D20", Offset = "0x5917D20", VA = "0x5918D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownRatio): clean
			Human pCVar1;
			BaseUseable __this_00;
			float fVar2;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pCVar1.Special;
			if (__this_00 == null) {
				return 0.0;
			}
			return fVar2;
		}
	}

	[Token(Token = "0x17000409")]
	public float CurrentGas
	{
		[Token(Token = "0x60021CB")]
		[Address(RVA = "0x5918D50", Offset = "0x5917D50", VA = "0x5918D50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentGas): clean
			Human pCVar1;
			HumanStats pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.CurrentGas;
		}
		[Token(Token = "0x60021CC")]
		[Address(RVA = "0x5918D80", Offset = "0x5917D80", VA = "0x5918D80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentGas): clean
			Human pCVar1;
			HumanStats pCVar2;
			float fVar3;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			fVar3 = pCVar2.MaxGas;
			if (value <= fVar3) {
				fVar3 = value;
			}
			pCVar2.CurrentGas = fVar3;
			return;
		}
	}

	[Token(Token = "0x1700040A")]
	public float MaxGas
	{
		[Token(Token = "0x60021CD")]
		[Address(RVA = "0x5918DB0", Offset = "0x5917DB0", VA = "0x5918DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MaxGas): clean
			Human pCVar1;
			HumanStats pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.MaxGas;
		}
		[Token(Token = "0x60021CE")]
		[Address(RVA = "0x5918DE0", Offset = "0x5917DE0", VA = "0x5918DE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_MaxGas): clean
			Human pCVar1;
			HumanStats __this_00;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.Stats, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.MaxGas = value;
			__this_00.UpdateStats();
			return;
		}
	}

	[Token(Token = "0x1700040B")]
	public int Acceleration
	{
		[Token(Token = "0x60021CF")]
		[Address(RVA = "0x5918E10", Offset = "0x5917E10", VA = "0x5918E10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Acceleration): clean
			Human pCVar1;
			HumanStats pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.Acceleration;
		}
		[Token(Token = "0x60021D0")]
		[Address(RVA = "0x5918E30", Offset = "0x5917E30", VA = "0x5918E30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_Acceleration): clean
			Human pCVar1;
			HumanStats __this_00;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.Stats, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.Acceleration = value;
			__this_00.UpdateStats();
			return;
		}
	}

	[Token(Token = "0x1700040C")]
	public int Speed
	{
		[Token(Token = "0x60021D1")]
		[Address(RVA = "0x5918E60", Offset = "0x5917E60", VA = "0x5918E60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Speed): clean
			Human pCVar1;
			HumanStats pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.Speed;
		}
		[Token(Token = "0x60021D2")]
		[Address(RVA = "0x5918E80", Offset = "0x5917E80", VA = "0x5918E80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_Speed): clean
			Human pCVar1;
			HumanStats __this_00;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.Stats, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.Speed = value;
			__this_00.UpdateStats();
			return;
		}
	}

	[Token(Token = "0x1700040D")]
	public CustomLogicHorseBuiltin Horse
	{
		[Token(Token = "0x60021D3")]
		[Address(RVA = "0x5918EB0", Offset = "0x5917EB0", VA = "0x5918EB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Horse): clean
			Human pCVar1;
			Horse pCVar2;
			bool bVar3;
			CustomLogicHorseBuiltin __this_00;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a18f63: ;
				throw new NullReferenceException();
			}
			pCVar2 = pCVar1.Horse;
			__this_00 = null;
			bVar3 = ((Object)pCVar2 != null);
			if (bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a18f63;
				pCVar2 = pCVar1.Horse;
				__this_00 = new CustomLogicHorseBuiltin((BaseCharacter)pCVar2);
				__this_00.Horse = pCVar2;
			}
			return __this_00;
		}
	}

	[Token(Token = "0x1700040E")]
	public bool HorseFollowEnabled
	{
		[Token(Token = "0x60021D4")]
		[Address(RVA = "0x5918F70", Offset = "0x5917F70", VA = "0x5918F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_HorseFollowEnabled): clean
			Human pCVar1;
			Horse __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				__this_00 = pCVar1.Horse;
				bVar2 = ((Object)__this_00 != null);
				if (!bVar2) {
					return false;
				}
				if (__this_00 != null) {
					bVar2 = __this_00.FollowingEnabled;
					return bVar2;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x60021D5")]
		[Address(RVA = "0x5918FF0", Offset = "0x5917FF0", VA = "0x5918FF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_HorseFollowEnabled): clean
			Human pCVar1;
			Horse __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				__this_00 = pCVar1.Horse;
				bVar2 = ((Object)__this_00 != null);
				if (!bVar2) {
					return;
				}
				if (__this_00 != null) {
					__this_00.FollowingEnabled = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700040F")]
	public CustomLogicTransformBuiltin HorseTransform
	{
		[Token(Token = "0x60021D6")]
		[Address(RVA = "0x5919080", Offset = "0x5918080", VA = "0x5919080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_HorseTransform): clean
			Human pCVar1;
			Horse pCVar2;
			bool bVar3;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a19131: ;
				throw new NullReferenceException();
			}
			pCVar2 = pCVar1.Horse;
			bVar3 = ((Object)pCVar2 != null);
			if (bVar3) {
				pCVar1 = this.Human;
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.Horse, pCVar2 == null)) goto label_05a19131;
				transform = pCVar2.transform;
				__this_00 = new CustomLogicTransformBuiltin(transform);
			}
			return __this_00;
		}
	}

	[Token(Token = "0x17000410")]
	public float HorseSpeed
	{
		[Token(Token = "0x60021D7")]
		[Address(RVA = "0x5919140", Offset = "0x5918140", VA = "0x5919140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_HorseSpeed): clean
			Human pCVar1;
			Horse pCVar2;
			HumanStats pCVar3;
			bool bVar4;
			float fVar5;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				pCVar2 = pCVar1.Horse;
				bVar4 = ((Object)pCVar2 != null);
				pCVar1 = this.Human;
				if (bVar4) {
					if ((pCVar1 != null) &&(pCVar2 = pCVar1.Horse, pCVar2 != null)) {
						return fVar5;
					}
				}
				else if ((pCVar1 != null) &&(pCVar3 = pCVar1.Stats, pCVar3 != null)) {
					return pCVar3.HorseSpeed;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x60021D8")]
		[Address(RVA = "0x59191F0", Offset = "0x59181F0", VA = "0x59191F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_HorseSpeed): clean
			Human pCVar1;
			HumanStats pCVar2;
			Horse pCVar3;
			bool bVar4;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar4 = pCVar1.IsMine();
				if (((!bVar4) || (bVar4 = HorseController.IsFinite(value), value <= 0.0)) || (!bVar4)) {
					return;
				}
				pCVar1 = this.Human;
				if ((pCVar1 != null) &&(pCVar2 = pCVar1.Stats, pCVar2 != null)) {
					pCVar2.HorseSpeed = value;
					pCVar3 = pCVar1.Horse;
					bVar4 = ((Object)pCVar3 != null);
					if (!bVar4) {
						return;
					}
					pCVar1 = this.Human;
					if ((pCVar1 != null) &&(pCVar3 = pCVar1.Horse, pCVar3 != null)) {
						pCVar3.RunSpeed = value;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000411")]
	public float CurrentBladeDurability
	{
		[Token(Token = "0x60021D9")]
		[Address(RVA = "0x59192E0", Offset = "0x59182E0", VA = "0x59192E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBladeDurability): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					return *(float)&(*(ulong)((sbyte)pCVar3 + 0x40));
				}
			}
			return 0.0;
		}
		[Token(Token = "0x60021DA")]
		[Address(RVA = "0x5919360", Offset = "0x5918360", VA = "0x5919360")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBladeDurability): 2 lines keep C-only constructs
			float fVar1;
			byte bVar2;
			BaseUseable pCVar3;
			Characters_HumanSounds_StaticFields pCVar4;
			Human pCVar5;
			float fVar6;

			pCVar5 = this.Human;
			if (pCVar5 == null) goto label_05a194a0;
			pCVar3 = pCVar5.Weapon;
			if (pCVar3 != null) {
				bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar2 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BladeWeapon)) ) {
					fVar6 = *(float)((long)&(*(ulong)((sbyte)pCVar3 + 0x38)) + 4);
					fVar1 = *(float)&(*(ulong)((sbyte)pCVar3 + 0x40));
					if (value <= fVar6) {
						fVar6 = value;
					}
					fVar6 = (float)(-(uint)(0.0 <= value) & (uint)fVar6);
					*(float)&(*(ulong)((sbyte)pCVar3 + 0x40)) = fVar6;
					if ((fVar1 <= 0.0) || (0.0 < fVar6)) {
						if (0.0 < fVar1) {
							return;
						}
						if (fVar6 <= 0.0) {
							return;
						}
						pCVar5.ToggleBlades(true);
						pCVar5 = this.Human;
						if (pCVar5 == null) goto label_05a194a0;
						pCVar4 = (Characters_HumanSounds_StaticFields)&HumanSounds.BladeReloadGround;
					}
					else {
						pCVar5.ToggleBlades(false);
						pCVar5 = this.Human;
						if (pCVar5 == null) {
		label_05a194a0: ;
							throw new NullReferenceException();
						}
						pCVar4 = typeof(HumanSounds).static_fields;
					}
					pCVar5.PlaySound(pCVar4.BladeBreak);
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000412")]
	public float MaxBladeDurability
	{
		[Token(Token = "0x60021DB")]
		[Address(RVA = "0x59194B0", Offset = "0x59184B0", VA = "0x59194B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MaxBladeDurability): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					return *(float)((long)&(*(ulong)((sbyte)pCVar3 + 0x38)) + 4);
				}
			}
			return 0.0;
		}
		[Token(Token = "0x60021DC")]
		[Address(RVA = "0x5919530", Offset = "0x5918530", VA = "0x5919530")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_MaxBladeDurability): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					*(float)((long)&(*(ulong)((sbyte)pCVar3 + 0x38)) + 4) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000413")]
	public int CurrentBlade
	{
		[Token(Token = "0x60021DD")]
		[Address(RVA = "0x59195C0", Offset = "0x59185C0", VA = "0x59195C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBlade): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					return (int32_t)(*(uint)((sbyte)pCVar3 + 0x48));
				}
			}
			return 0;
		}
		[Token(Token = "0x60021DE")]
		[Address(RVA = "0x5919630", Offset = "0x5918630", VA = "0x5919630")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBlade): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;
			float fVar4;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					fVar4 = *(float)((long)&(*(ulong)((sbyte)pCVar3 + 0x40)) + 4);
					if (value < (int)fVar4) {
						fVar4 = (float)value;
					}
					(*(uint)((sbyte)pCVar3 + 0x48)) = fVar4;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000414")]
	public int MaxBlade
	{
		[Token(Token = "0x60021DF")]
		[Address(RVA = "0x59196C0", Offset = "0x59186C0", VA = "0x59196C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MaxBlade): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					return *(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x40)) + 4);
				}
			}
			return 0;
		}
		[Token(Token = "0x60021E0")]
		[Address(RVA = "0x5919730", Offset = "0x5918730", VA = "0x5919730")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_MaxBlade): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
					*(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x40)) + 4) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000415")]
	public int CurrentAmmoRound
	{
		[Token(Token = "0x60021E1")]
		[Address(RVA = "0x59197B0", Offset = "0x59187B0", VA = "0x59197B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoRound): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					return (int32_t)(*(uint)((sbyte)pCVar3 + 0x48));
				}
			}
			return 0;
		}
		[Token(Token = "0x60021E2")]
		[Address(RVA = "0x5919820", Offset = "0x5918820", VA = "0x5919820")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoRound): 1 lines keep C-only constructs
			byte bVar1;
			float fVar2;
			Human pCVar3;
			BaseUseable pCVar4;

			pCVar3 = this.Human;
			if (pCVar3 == null) {
				throw new NullReferenceException();
			}
			pCVar4 = pCVar3.Weapon;
			if (pCVar4 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					fVar2 = *(float)((long)&(*(ulong)((sbyte)pCVar4 + 0x40)) + 4);
					if ((int)fVar2 < value) {
						value = (int32_t)fVar2;
					}
					(*(uint)((sbyte)pCVar4 + 0x48)) = (float)value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000416")]
	public int MaxAmmoRound
	{
		[Token(Token = "0x60021E3")]
		[Address(RVA = "0x59198B0", Offset = "0x59188B0", VA = "0x59198B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoRound): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					return *(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x40)) + 4);
				}
			}
			return 0;
		}
		[Token(Token = "0x60021E4")]
		[Address(RVA = "0x5919920", Offset = "0x5918920", VA = "0x5919920")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoRound): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					*(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x40)) + 4) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000417")]
	public int CurrentAmmoLeft
	{
		[Token(Token = "0x60021E5")]
		[Address(RVA = "0x59199A0", Offset = "0x59189A0", VA = "0x59199A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoLeft): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					return *(int)&(*(ulong)((sbyte)pCVar3 + 0x40));
				}
			}
			return 0;
		}
		[Token(Token = "0x60021E6")]
		[Address(RVA = "0x5919A10", Offset = "0x5918A10", VA = "0x5919A10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoLeft): 1 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			Human pCVar3;
			BaseUseable pCVar4;

			pCVar3 = this.Human;
			if (pCVar3 == null) {
				throw new NullReferenceException();
			}
			pCVar4 = pCVar3.Weapon;
			if (pCVar4 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					iVar2 = *(int)((long)&(*(ulong)((sbyte)pCVar4 + 0x38)) + 4);
					if (iVar2 < value) {
						value = iVar2;
					}
					*(int)&(*(ulong)((sbyte)pCVar4 + 0x40)) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000418")]
	public int MaxAmmoTotal
	{
		[Token(Token = "0x60021E7")]
		[Address(RVA = "0x5919AA0", Offset = "0x5918AA0", VA = "0x5919AA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoTotal): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					return *(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x38)) + 4);
				}
			}
			return 0;
		}
		[Token(Token = "0x60021E8")]
		[Address(RVA = "0x5919B10", Offset = "0x5918B10", VA = "0x5919B10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoTotal): 1 lines keep C-only constructs
			byte bVar1;
			Human pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Human;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar3 = pCVar2.Weapon;
			if (pCVar3 != null) {
				bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
					*(int)((long)&(*(ulong)((sbyte)pCVar3 + 0x38)) + 4) = value;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000419")]
	public bool LeftHookEnabled
	{
		[Token(Token = "0x60021E9")]
		[Address(RVA = "0x5919B90", Offset = "0x5918B90", VA = "0x5919B90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookEnabled): clean
			Human pCVar1;
			HookUseable pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HookLeft, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.Enabled;
		}
		[Token(Token = "0x60021EA")]
		[Address(RVA = "0x5919BC0", Offset = "0x5918BC0", VA = "0x5919BC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_LeftHookEnabled): clean
			Human pCVar1;
			HookUseable pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HookLeft, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			pCVar2.Enabled = value;
			return;
		}
	}

	[Token(Token = "0x1700041A")]
	public bool RightHookEnabled
	{
		[Token(Token = "0x60021EB")]
		[Address(RVA = "0x5919BF0", Offset = "0x5918BF0", VA = "0x5919BF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_RightHookEnabled): clean
			Human pCVar1;
			HookUseable pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HookRight, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			return pCVar2.Enabled;
		}
		[Token(Token = "0x60021EC")]
		[Address(RVA = "0x5919C20", Offset = "0x5918C20", VA = "0x5919C20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_RightHookEnabled): clean
			Human pCVar1;
			HookUseable pCVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.HookRight, pCVar2 == null)) {
				throw new NullReferenceException();
			}
			pCVar2.Enabled = value;
			return;
		}
	}

	[Token(Token = "0x1700041B")]
	public bool IsMounted
	{
		[Token(Token = "0x60021ED")]
		[Address(RVA = "0x5919C50", Offset = "0x5918C50", VA = "0x5919C50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsMounted): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.MountState == 2;
		}
	}

	[Token(Token = "0x1700041C")]
	public int MountState
	{
		[Token(Token = "0x60021EE")]
		[Address(RVA = "0x5919C70", Offset = "0x5918C70", VA = "0x5919C70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MountState): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.MountState;
		}
	}

	[Token(Token = "0x1700041D")]
	public CustomLogicMapObjectBuiltin MountedMapObject
	{
		[Token(Token = "0x60021EF")]
		[Address(RVA = "0x5919C90", Offset = "0x5918C90", VA = "0x5919C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MountedMapObject): clean
			CustomLogicEvaluator __this_00;
			Human pCVar1;
			CustomLogicMapObjectBuiltin pCVar2;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.MountedMapObject == null) {
					return null;
				}
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar1 = this.Human;
					if (pCVar1 == null) goto label_05a19d19;
				}
				__this_00 = CustomLogicManager.Evaluator;
				if (__this_00 != null) {
					return pCVar2;
				}
			}
		label_05a19d19: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700041E")]
	public CustomLogicTransformBuiltin MountedTransform
	{
		[Token(Token = "0x60021F0")]
		[Address(RVA = "0x5919D20", Offset = "0x5918D20", VA = "0x5919D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_MountedTransform): clean
			Human pCVar1;
			Transform pUVar2;
			bool bVar3;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a19dc2: ;
				throw new NullReferenceException();
			}
			pUVar2 = pCVar1.MountedTransform;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a19dc2;
				pUVar2 = pCVar1.MountedTransform;
				__this_00 = new CustomLogicTransformBuiltin(pUVar2);
			}
			return __this_00;
		}
	}

	[Token(Token = "0x1700041F")]
	public bool AutoRefillGas
	{
		[Token(Token = "0x60021F1")]
		[Address(RVA = "0x5919DD0", Offset = "0x5918DD0", VA = "0x5919DD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_AutoRefillGas): clean
			Human pCVar1;
			InputSettings pSVar2;
			HumanInputSettings pSVar3;
			BoolSetting pSVar4;
			bool bVar5;
			bool bVar6;

			pCVar1 = this.Human;
			bVar5 = ((Object)pCVar1 != null);
			if (bVar5) {
				pCVar1 = this.Human;
				if (pCVar1 == null) {
		label_05a19e99: ;
					throw new NullReferenceException();
				}
				bVar5 = pCVar1.IsMine();
				if (bVar5) {
					pSVar2 = SettingsManager.InputSettings;
					if (((pSVar2 == null) ||(pSVar3 = pSVar2.Human, pSVar3 == null)) ||(pSVar4 = pSVar3.AutoRefillGas, pSVar4 == null)) goto label_05a19e99;
					bVar6 = pSVar4._value != false;
				}
				else {
				}
			}
			return bVar6;
		}
		[Token(Token = "0x60021F2")]
		[Address(RVA = "0x5919EA0", Offset = "0x5918EA0", VA = "0x5919EA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_AutoRefillGas): clean
			Human pCVar1;
			InputSettings pSVar2;
			HumanInputSettings pSVar3;
			BoolSetting __this_00;
			bool bVar4;

			pCVar1 = this.Human;
			bVar4 = ((Object)pCVar1 != null);
			if (!bVar4) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar4 = pCVar1.IsMine();
				if (!bVar4) {
					return;
				}
				pSVar2 = SettingsManager.InputSettings;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.Human, pSVar3 != null)) &&(__this_00 = pSVar3.AutoRefillGas, __this_00 != null)) {
					__this_00.Value = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000420")]
	public bool CanDodge
	{
		[Token(Token = "0x60021F3")]
		[Address(RVA = "0x5919F80", Offset = "0x5918F80", VA = "0x5919F80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_CanDodge): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CanDodge;
		}
		[Token(Token = "0x60021F4")]
		[Address(RVA = "0x5919FA0", Offset = "0x5918FA0", VA = "0x5919FA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_CanDodge): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.CanDodge = value;
			return;
		}
	}

	[Token(Token = "0x17000421")]
	public bool IsInvincible
	{
		[Token(Token = "0x60021F5")]
		[Address(RVA = "0x5919FC0", Offset = "0x5918FC0", VA = "0x5919FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsInvincible): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.IsInvincible;
		}
		[Token(Token = "0x60021F6")]
		[Address(RVA = "0x5919FE0", Offset = "0x5918FE0", VA = "0x5919FE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_IsInvincible): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.IsInvincible = value;
			return;
		}
	}

	[Token(Token = "0x17000422")]
	public float InvincibleTimeLeft
	{
		[Token(Token = "0x60021F7")]
		[Address(RVA = "0x591A000", Offset = "0x5919000", VA = "0x591A000")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_InvincibleTimeLeft): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.InvincibleTimeLeft;
		}
		[Token(Token = "0x60021F8")]
		[Address(RVA = "0x591A020", Offset = "0x5919020", VA = "0x591A020")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_InvincibleTimeLeft): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.InvincibleTimeLeft = value;
			return;
		}
	}

	[Token(Token = "0x17000423")]
	public bool IsCarried
	{
		[Token(Token = "0x60021F9")]
		[Address(RVA = "0x591A040", Offset = "0x5919040", VA = "0x591A040")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsCarried): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CarryState == 1;
		}
	}

	[Token(Token = "0x17000424")]
	public bool Pivot
	{
		[Token(Token = "0x60021FA")]
		[Address(RVA = "0x591A060", Offset = "0x5919060", VA = "0x591A060")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Pivot): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._pivot;
		}
	}

	[Token(Token = "0x17000425")]
	public CustomLogicVector3Builtin PivotPosition
	{
		[Token(Token = "0x60021FB")]
		[Address(RVA = "0x591A080", Offset = "0x5919080", VA = "0x591A080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_PivotPosition): 1 lines keep C-only constructs
			Human __this_00;
			CustomLogicVector3Builtin pCVar1;
			System_Nullable_Vector3__o SVar2;

			__this_00 = this.Human;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			SVar2 = __this_00.PivotPosition();
			if (SVar2.hasValue == false) {
				return null;
			}
			return pCVar1;
		}
	}

	[Token(Token = "0x17000426")]
	public bool IsHookedLeft
	{
		[Token(Token = "0x60021FC")]
		[Address(RVA = "0x591A100", Offset = "0x5919100", VA = "0x591A100")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedLeft): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookLeft, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x17000427")]
	public bool IsHookedRight
	{
		[Token(Token = "0x60021FD")]
		[Address(RVA = "0x591A130", Offset = "0x5919130", VA = "0x591A130")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedRight): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookRight, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x17000428")]
	public bool IsHookingLeft
	{
		[Token(Token = "0x60021FE")]
		[Address(RVA = "0x591A160", Offset = "0x5919160", VA = "0x591A160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingLeft): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookLeft, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x17000429")]
	public bool IsHookingRight
	{
		[Token(Token = "0x60021FF")]
		[Address(RVA = "0x591A190", Offset = "0x5919190", VA = "0x591A190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingRight): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookRight, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700042A")]
	public bool HasHookLeft
	{
		[Token(Token = "0x6002200")]
		[Address(RVA = "0x591A1C0", Offset = "0x59191C0", VA = "0x591A1C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_HasHookLeft): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookLeft, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700042B")]
	public bool HasHookRight
	{
		[Token(Token = "0x6002201")]
		[Address(RVA = "0x591A1F0", Offset = "0x59191F0", VA = "0x591A1F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_HasHookRight): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookRight, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700042C")]
	public bool LeftHookReady
	{
		[Token(Token = "0x6002202")]
		[Address(RVA = "0x591A220", Offset = "0x5919220", VA = "0x591A220")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookReady): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookLeft, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700042D")]
	public bool RightHookReady
	{
		[Token(Token = "0x6002203")]
		[Address(RVA = "0x591A250", Offset = "0x5919250", VA = "0x591A250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_RightHookReady): clean
			Human pCVar1;
			HookUseable __this_00;
			bool bVar2;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookRight, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700042E")]
	public CustomLogicVector3Builtin LeftHookPosition
	{
		[Token(Token = "0x6002204")]
		[Address(RVA = "0x591A280", Offset = "0x5919280", VA = "0x591A280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookPosition): 1 lines keep C-only constructs
			Human pCVar1;
			HookUseable __this_00;
			CustomLogicVector3Builtin pCVar2;
			System_Nullable_Vector3__o SVar3;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookLeft, __this_00 == null)) {
				throw new NullReferenceException();
			}
			SVar3 = __this_00.GetCLHookPosition();
			if (SVar3.hasValue == false) {
				return null;
			}
			return pCVar2;
		}
	}

	[Token(Token = "0x1700042F")]
	public CustomLogicVector3Builtin RightHookPosition
	{
		[Token(Token = "0x6002205")]
		[Address(RVA = "0x591A300", Offset = "0x5919300", VA = "0x591A300")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_RightHookPosition): 1 lines keep C-only constructs
			Human pCVar1;
			HookUseable __this_00;
			CustomLogicVector3Builtin pCVar2;
			System_Nullable_Vector3__o SVar3;

			pCVar1 = this.Human;
			if ((pCVar1 == null) ||(__this_00 = pCVar1.HookRight, __this_00 == null)) {
				throw new NullReferenceException();
			}
			SVar3 = __this_00.GetCLHookPosition();
			if (SVar3.hasValue == false) {
				return null;
			}
			return pCVar2;
		}
	}

	[Token(Token = "0x17000430")]
	public float FocusRange
	{
		[Token(Token = "0x6002206")]
		[Address(RVA = "0x591A380", Offset = "0x5919380", VA = "0x591A380")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_FocusRange): clean
			Human pCVar1;
			HumanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a1a41a: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a1a41a;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					bVar3 = ((Object)pCVar2 != null);
					if (bVar3) {
						pCVar2 = this.Controller;
						if (pCVar2 == null) goto label_05a1a41a;
					}
				}
			}
			return fVar4;
		}
		[Token(Token = "0x6002207")]
		[Address(RVA = "0x591A420", Offset = "0x5919420", VA = "0x591A420")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_FocusRange): clean
			Human pCVar1;
			HumanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a1a4c0: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a1a4c0;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					bVar3 = ((Object)pCVar2 != null);
					if (bVar3) {
						pCVar2 = this.Controller;
						if (pCVar2 == null) goto label_05a1a4c0;
						pCVar2.FocusRange = value;
					}
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000431")]
	public float FocusTime
	{
		[Token(Token = "0x6002208")]
		[Address(RVA = "0x591A4D0", Offset = "0x59194D0", VA = "0x591A4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_FocusTime): clean
			Human pCVar1;
			HumanAIController pCVar2;
			bool bVar3;
			float fVar4;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a1a56a: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a1a56a;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					bVar3 = ((Object)pCVar2 != null);
					if (bVar3) {
						pCVar2 = this.Controller;
						if (pCVar2 == null) goto label_05a1a56a;
					}
				}
			}
			return fVar4;
		}
		[Token(Token = "0x6002209")]
		[Address(RVA = "0x591A570", Offset = "0x5919570", VA = "0x591A570")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_FocusTime): clean
			Human pCVar1;
			HumanAIController pCVar2;
			bool bVar3;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
		label_05a1a610: ;
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.IsMine();
			if (bVar3) {
				pCVar1 = this.Human;
				if (pCVar1 == null) goto label_05a1a610;
				if (pCVar1.AI != false) {
					pCVar2 = this.Controller;
					bVar3 = ((Object)pCVar2 != null);
					if (bVar3) {
						pCVar2 = this.Controller;
						if (pCVar2 == null) goto label_05a1a610;
						pCVar2.FocusTime = value;
					}
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000432")]
	[Obsolete("Use GetTarget() and SetTarget() instead.")]
	public object Target
	{
		[Token(Token = "0x600220A")]
		[Address(RVA = "0x591A620", Offset = "0x5919620", VA = "0x591A620")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_Target): 1 lines keep C-only constructs
			byte bVar1;
			BaseShifter shifter;
			BaseAIController __this_00;
			ITargetable target;
			CustomLogicShifterBuiltin __this_01;

			__this_00 = this.AIController;
			if (__this_00 == null) {
				__this_01 = (CustomLogicShifterBuiltin)CustomLogicCharacterBuiltin.WrapTarget(null);
			}
			else {
				target = __this_00.GetTarget();
				__this_01 = (CustomLogicShifterBuiltin)CustomLogicCharacterBuiltin.WrapTarget(target);
			}
			if (__this_01 == null) {
				__this_01 = null;
			}
			else {
				bVar1 = ((typeof(CustomLogicWallColossalBuiltin))._2).typeHierarchyDepth;
				if ((bVar1 <= (((Il2CppClass)__this_01.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)__this_01.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicWallColossalBuiltin))) {
					shifter = (BaseShifter)(*(ulong)((sbyte)__this_01 + 0x48));
					__this_01 = new CustomLogicShifterBuiltin(shifter);
				}
			}
			return (object)__this_01;
		}
		[Token(Token = "0x600220B")]
		[Address(RVA = "0x591A6E0", Offset = "0x59196E0", VA = "0x591A6E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_Target): clean
			Human pCVar1;
			HumanAIController __this_00;
			bool bVar2;
			ITargetable value_00;

			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					if (pCVar1.Dead != false) {
						return;
					}
					if (pCVar1.AI == false) {
						return;
					}
					__this_00 = this.Controller;
					value_00 = CustomLogicCharacterBuiltin.UnwrapTarget(value);
					if (__this_00 != null) {
						__this_00.Target = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000433")]
	public CustomLogicVector3Builtin TargetPosition
	{
		[Token(Token = "0x600220C")]
		[Address(RVA = "0x591A760", Offset = "0x5919760", VA = "0x591A760")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_TargetPosition): clean
			HumanAIController pCVar1;
			CustomLogicVector3Builtin pCVar2;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar2;
		}
		[Token(Token = "0x600220D")]
		[Address(RVA = "0x591A790", Offset = "0x5919790", VA = "0x591A790")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_TargetPosition): clean
			HumanAIController __this_00;

			if ((value == null) ||(__this_00 = this.Controller, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.TargetPosition = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x17000434")]
	public CustomLogicVector3Builtin TargetVelocity
	{
		[Token(Token = "0x600220E")]
		[Address(RVA = "0x591A7C0", Offset = "0x59197C0", VA = "0x591A7C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_TargetVelocity): clean
			HumanAIController pCVar1;
			CustomLogicVector3Builtin pCVar2;

			pCVar1 = this.Controller;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar2;
		}
	}

	[Token(Token = "0x17000435")]
	public bool AllowHorse
	{
		[Token(Token = "0x600220F")]
		[Address(RVA = "0x591A7F0", Offset = "0x59197F0", VA = "0x591A7F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_AllowHorse): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AllowHorse;
		}
		[Token(Token = "0x6002210")]
		[Address(RVA = "0x591A810", Offset = "0x5919810", VA = "0x591A810")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_AllowHorse): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.AllowHorse = value;
			return;
		}
	}

	[Token(Token = "0x17000436")]
	public bool AllowSkin
	{
		[Token(Token = "0x6002211")]
		[Address(RVA = "0x591A830", Offset = "0x5919830", VA = "0x591A830")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_AllowSkin): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AllowSkin;
		}
		[Token(Token = "0x6002212")]
		[Address(RVA = "0x591A850", Offset = "0x5919850", VA = "0x591A850")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$set_AllowSkin): clean
			Human pCVar1;

			pCVar1 = this.Human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.AllowSkin = value;
			return;
		}
	}

	[Token(Token = "0x17000437")]
	public override string ClassName
	{
		[Token(Token = "0x6002237")]
		[Address(RVA = "0x591B900", Offset = "0x591A900", VA = "0x591B900", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_ClassName): clean
			return "Human";
		}
	}

	[Token(Token = "0x17000438")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002238")]
		[Address(RVA = "0x591B930", Offset = "0x591A930", VA = "0x591B930", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000439")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002239")]
		[Address(RVA = "0x591B940", Offset = "0x591A940", VA = "0x591B940", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x1700043A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600223A")]
		[Address(RVA = "0x591B950", Offset = "0x591A950", VA = "0x591B950", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60021BD")]
	[Address(RVA = "0x59184E0", Offset = "0x59174E0", VA = "0x59184E0")]
	public CustomLogicHumanBuiltin(Human human)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		HumanAIController pCVar3;
		HumanAIController pCVar4;

		base((BaseCharacter)human);
		this.Human = human;
		pCVar4 = typeof(HumanAIController);
		pCVar2 = this.Human;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		if (pCVar2.AI == false) {
			return;
		}
		pCVar3 = (HumanAIController)pCVar2.Controller;
		if (pCVar3 == null) {
			this.Controller = null;
	label_05a185a5: ;
			return;
		}
		bVar1 = (typeof(HumanAIController)._2).typeHierarchyDepth;
		if ((bVar1 <= (((IHumanController)pCVar3.klass)._2).typeHierarchyDepth) &&((((IHumanController)pCVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(HumanAIController))) {
			this.Controller = pCVar3;
			if ((bVar1 <= (((IHumanController)pCVar3.klass)._2).typeHierarchyDepth) &&((((IHumanController)pCVar3.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pCVar4)) goto label_05a185a5;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6002213")]
	[Address(RVA = "0x591A870", Offset = "0x5919870", VA = "0x591A870")]
	public bool Refill()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Refill): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return false;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar2 = pCVar1.NeedRefill(true);
				if (!bVar2) {
					return false;
				}
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					bVar2 = pCVar1.Refill();
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002214")]
	[Address(RVA = "0x591A8D0", Offset = "0x59198D0", VA = "0x591A8D0")]
	public void RefillImmediate()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$RefillImmediate): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				pCVar1.FinishRefill();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002215")]
	[Address(RVA = "0x591A910", Offset = "0x5919910", VA = "0x591A910")]
	public void ClearHooks()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ClearHooks): clean
		Human pCVar1;
		HookUseable pCVar2;
		bool bVar3;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar3 = pCVar1.IsMine();
			if (!bVar3) {
				return;
			}
			pCVar1 = this.Human;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1.HookLeft, pCVar2 != null)) {
				pCVar2.DisableAnyHook();
				pCVar1 = this.Human;
				if ((pCVar1 != null) &&(pCVar2 = pCVar1.HookRight, pCVar2 != null)) {
					pCVar2.DisableAnyHook();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002216")]
	[Address(RVA = "0x591A980", Offset = "0x5919980", VA = "0x591A980")]
	public void ClearLeftHook()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ClearLeftHook): clean
		Human pCVar1;
		HookUseable __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if ((pCVar1 != null) &&(__this_00 = pCVar1.HookLeft, __this_00 != null)) {
				__this_00.DisableAnyHook();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002217")]
	[Address(RVA = "0x591A9D0", Offset = "0x59199D0", VA = "0x591A9D0")]
	public void ClearRightHook()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ClearRightHook): clean
		Human pCVar1;
		HookUseable __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if ((pCVar1 != null) &&(__this_00 = pCVar1.HookRight, __this_00 != null)) {
				__this_00.DisableAnyHook();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002218")]
	[Address(RVA = "0x591AA20", Offset = "0x5919A20", VA = "0x591AA20")]
	public void MountMapObject(CustomLogicMapObjectBuiltin mapObject, CustomLogicVector3Builtin positionOffset, CustomLogicVector3Builtin rotationOffset, bool canMountedAttack = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$MountMapObject): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			if ((((mapObject != null) &&(positionOffset != null)) &&(rotationOffset != null)) &&(pCVar1 = this.Human, pCVar1 != null)) {
				pCVar1.Mount(mapObject.Value, (Vector3)positionOffset.Value, (Vector3)rotationOffset.Value, canMountedAttack);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002219")]
	[Address(RVA = "0x591AAB0", Offset = "0x5919AB0", VA = "0x591AAB0")]
	public void MountTransform(CustomLogicTransformBuiltin transform, CustomLogicVector3Builtin positionOffset, CustomLogicVector3Builtin rotationOffset, bool canMountedAttack = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$MountTransform): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			if ((((transform != null) &&(positionOffset != null)) &&(rotationOffset != null)) &&(pCVar1 = this.Human, pCVar1 != null)) {
				pCVar1.Mount(transform.Value, (Vector3)positionOffset.Value, (Vector3)rotationOffset.Value, canMountedAttack);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221A")]
	[Address(RVA = "0x591AB40", Offset = "0x5919B40", VA = "0x591AB40")]
	public void Unmount(bool immediate = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Unmount): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				pCVar1.Unmount(immediate);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221B")]
	[Address(RVA = "0x5918B00", Offset = "0x5917B00", VA = "0x5918B00")]
	public void SetSpecial(string special)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$SetSpecial): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				pCVar1.SetSpecial(special);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221C")]
	[Address(RVA = "0x591AB90", Offset = "0x5919B90", VA = "0x591AB90")]
	public void ActivateSpecial()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ActivateSpecial): clean
		Human pCVar1;
		BaseUseable pCVar2;
		bool bVar3;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar3 = pCVar1.IsMine();
			if (!bVar3) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				pCVar2 = pCVar1.Special;
				if (pCVar2 == null) {
					return;
				}
				pCVar2.SetInput(true);
				pCVar1 = this.Human;
				if ((pCVar1 != null) &&(pCVar2 = pCVar1.Special, pCVar2 != null)) {
					pCVar2.SetInput(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221D")]
	[Address(RVA = "0x59186C0", Offset = "0x59176C0", VA = "0x59186C0")]
	public void SetWeapon(string weapon)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$SetWeapon): 14 lines keep C-only constructs
		byte bVar1;
		StringSetting pSVar2;
		BaseGameManager pGVar3;
		Object x;
		long lVar4;
		object obj;
		bool bVar5;
		List<string> __this_00;
		InGameManager __this_01;
		Human pCVar6;
		InGameCharacterSettings pSVar7;
		Human* targetAddress;

		pCVar6 = this.Human;
		if (pCVar6 != null) {
			bVar5 = pCVar6.IsMine();
			if (!bVar5) {
				return;
			}
			targetAddress = &this.Human;
			pCVar6 = *targetAddress;
			if (pCVar6 != null) {
				if (pCVar6.AI == false) {
					pGVar3 = SceneLoader.CurrentGameManager;
					if (pGVar3 != null) {
						bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
						if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
							throw new InvalidCastException();
						}
						x = (*(ulong)((sbyte)pGVar3 + 0x80));
						bVar5 = (x != null);
						if (!bVar5) {
							return;
						}
						if ((*(ulong)((sbyte)pGVar3 + 0x80)) == null) {
							return;
						}
						lVar4 = *(long)(*(ulong)((sbyte)pGVar3 + 0x80));
						bVar1 = (typeof(Human)._2).typeHierarchyDepth;
						if (*(byte)(lVar4 + 0x130) < bVar1) {
							return;
						}
						if (*(Human*)(*(long)(lVar4 + 200) + -8 + (ulong)bVar1 * 8) != typeof(Human)) {
							return;
						}
						pCVar6 = *targetAddress;
						if (pCVar6 != null) {
							bVar5 = pCVar6.IsMine();
							if (!bVar5) {
								return;
							}
							bVar5 = (weapon == "Blades");
							if (bVar5) {
								weapon = (String)il2cpp_runtime_helper_05a1b960(0);
							}
							else {
								bVar5 = (weapon == "Thunderspears");
								if (bVar5) {
									weapon = (String)il2cpp_runtime_helper_05a1b9d0(0);
								}
							}
							if (*targetAddress != null) {
								if (((*targetAddress).fields).Dead != false) {
									return;
								}
								__this_00 = HumanLoadout.GetAllowed();
								if (__this_00 != null) {
									bVar5 = __this_00.Contains((object)weapon);
									if (!bVar5) {
										return;
									}
									pSVar7 = SettingsManager.InGameCharacterSettings;
									if ((pSVar7 != null) &&(pSVar2 = pSVar7.Loadout, pSVar2 != null)) {
										bVar5 = (weapon != pSVar2._value);
										if (!bVar5) {
											return;
										}
										pSVar7 = SettingsManager.InGameCharacterSettings;
										if ((pSVar7 != null) &&(pSVar2 = pSVar7.Loadout, pSVar2 != null)) {
											pSVar2.Value = (object)weapon;
											__this_01 = (InGameManager)il2cpp_codegen_is_inst_class((object)SceneLoader. CurrentGameManager, typeof(InGameManager));
											obj = (*(ulong)((sbyte)pGVar3 + 0x80));
											pCVar6 = (Human)il2cpp_codegen_is_inst_class(obj, typeof(Human));
											*targetAddress = pCVar6;
											il2cpp_codegen_is_inst_class(obj, typeof(Human));
											if (__this_01 != null) {
												pCVar6 = *targetAddress;
												pSVar7 = __this_01.GetSetHumanSettings();
												if (pCVar6 != null) goto label_05a187e8;
											}
										}
									}
								}
							}
						}
					}
				}
				else {
					pSVar7 = pCVar6.Settings;
					if ((pSVar7 != null) &&(pSVar2 = pSVar7.Loadout, pSVar2 != null)) {
						pSVar2.Value = (object)weapon;
						pCVar6 = *targetAddress;
						if (pCVar6 != null) {
	label_05a187e8: ;
							pCVar6.ReloadHuman(pSVar7);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221E")]
	[Address(RVA = "0x591AC10", Offset = "0x5919C10", VA = "0x591AC10")]
	public void DisablePerks()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$DisablePerks): clean
		Human pCVar1;
		HumanStats __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if ((pCVar1 != null) &&(__this_00 = pCVar1.Stats, __this_00 != null)) {
				__this_00.DisablePerks();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600221F")]
	[Address(RVA = "0x591AC60", Offset = "0x5919C60", VA = "0x591AC60")]
	public bool HasAIState(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$HasAIState): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return false;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return false;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					bVar2 = __this_00.HasAIState(name);
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002220")]
	[Address(RVA = "0x591ACD0", Offset = "0x5919CD0", VA = "0x591ACD0")]
	public void SetAIState(string name, [Optional] UserClassInstance classInstance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$SetAIState): clean
		Human pCVar1;
		HumanAIController pCVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;
		Custom __this_01;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar3 = pCVar1.IsMine();
			if (!bVar3) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				if (classInstance == null) {
					pCVar2 = this.Controller;
					if ((pCVar2 != null) &&(__this_00 = (Dictionary<object, object>)pCVar2.AIStates, __this_00 != null)) {
						__this_00.Remove((object)name);
						return;
					}
				}
				else {
					__this_01 = new Custom();
					if (__this_01 != null) {
						__this_01.Init(name, classInstance);
						pCVar2 = this.Controller;
						if (pCVar2 != null) {
							pCVar2.SetAIState(name, (HumanAIState)__this_01);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002221")]
	[Address(RVA = "0x591ADE0", Offset = "0x5919DE0", VA = "0x591ADE0")]
	public string GetAIState()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$GetAIState): clean
		Human pCVar1;
		HumanAIController pCVar2;
		HumanAIState pCVar3;
		bool bVar4;
		String pSVar5;

		pCVar1 = this.Human;
		if (pCVar1 == null) {
	label_05a1ae40: ;
			throw new NullReferenceException();
		}
		bVar4 = pCVar1.IsMine();
		if (bVar4) {
			pCVar1 = this.Human;
			if (pCVar1 == null) goto label_05a1ae40;
			if (pCVar1.AI != false) {
				pCVar2 = this.Controller;
				if (pCVar2 == null) goto label_05a1ae40;
				pCVar3 = pCVar2.AIState;
				if (pCVar3 != null) {
					return pSVar5;
				}
			}
		}
		return null;
	}

	[Token(Token = "0x6002222")]
	[Address(RVA = "0x591AE50", Offset = "0x5919E50", VA = "0x591AE50")]
	public void SwitchAIState(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$SwitchAIState): clean
		Human pCVar1;
		HumanAIController __this_00;
		Dictionary<object, object> __this_01;
		bool bVar2;
		HumanAIState aiState;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if ((__this_00 != null) &&(__this_01 = (Dictionary<object, object>)__this_00.AIStates, __this_01 != null)) {
					aiState = __this_01.get_Item((object)name);
					__this_00.SwitchAIState(aiState);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002223")]
	[Address(RVA = "0x591AEF0", Offset = "0x5919EF0", VA = "0x591AEF0")]
	public void ResetCallback(string callback, [Optional] UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ResetCallback): 1 lines keep C-only constructs
		Human pCVar1;
		HumanAIController pCVar2;
		bool bVar3;
		CustomLogicHumanBuiltin.c__DisplayClass157_0 __this_00;
		Type pSVar4;
		FieldInfo __this_01;
		Action __this_02;
		HumanAICallback pCVar5;

		__this_00 = new CustomLogicHumanBuiltin.c__DisplayClass157_0();
		if (__this_00 != null) {
			__this_00.method = method;
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					if (pCVar1.AI == false) {
						return;
					}
					pCVar2 = this.Controller;
					if (__this_00.method == null) {
						if (((pCVar2 != null) &&(pCVar5 = pCVar2.Callbacks, pCVar5 != null)) &&(pSVar4 = pCVar5.GetType(), pSVar4 != null)) {
							__this_01 = pSVar4.GetField(callback);
							pCVar2 = this.Controller;
							if ((pCVar2 != null) &&(__this_01 != null)) {
								pCVar5 = pCVar2.Callbacks;
								__this_02 = null;
	label_05a1b093: ;
								__this_01.SetValue((object)pCVar5, (object)__this_02);
								return;
							}
						}
					}
					else if (((pCVar2 != null) &&(pCVar5 = pCVar2.Callbacks, pCVar5 != null)) &&(pSVar4 = pCVar5.GetType(), pSVar4 != null)) {
						__this_01 = pSVar4.GetField(callback);
						pCVar2 = this.Controller;
						if (pCVar2 != null) {
							pCVar5 = pCVar2.Callbacks;
							__this_02 = new Action((object)__this_00, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0_ResetCallback_b__0);
							if (__this_01 != null) goto label_05a1b093;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002224")]
	[Address(RVA = "0x591B0B0", Offset = "0x591A0B0", VA = "0x591B0B0")]
	public void Move(CustomLogicVector3Builtin direction)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Move): 13 lines keep C-only constructs
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;
		System_Nullable_Vector3__o direction_00;
		System_Nullable_Vector3__Fields local_28;

		pCVar1 = this.Human;
		if (pCVar1 == null) {
	label_05a1b169: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Human;
			if (pCVar1 == null) goto label_05a1b169;
			if (pCVar1.AI != false) {
				__this_00 = this.Controller;
				if (direction == null) {
					uVar4._0_4_ = 0.0;
					uVar4._4_4_ = 0.0;
					uVar3._0_1_ = false;
					uVar3._1_3_ = 0;
					uVar3._4_4_ = 0.0;
				}
				else {
					local_28.hasValue = false;
					local_28._1_3_ = 0;
					local_28.value.x = 0.0;
					local_28.value.y = 0.0;
					local_28.value.z = 0.0;
					local_28 = new Nullable<Vector3>((Vector3)direction.Value);
					uVar3 = local_28._0_8_;
					uVar4 = local_28.value._4_8_;
				}
				if (__this_00 == null) goto label_05a1b169;
				direction_00.value.y = (float)uVar4;
				direction_00.value.z = SUB84(uVar4, 4);
				direction_00.hasValue = SUB81(uVar3, 0);
				direction_00._1_3_ = SUB83(uVar3, 1);
				direction_00.value.x = SUB84(uVar3, 4);
				__this_00.Move(direction_00);
			}
		}
		return;
	}

	[Token(Token = "0x6002225")]
	[Address(RVA = "0x591B170", Offset = "0x591A170", VA = "0x591B170")]
	public void AimAt(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$AimAt): 13 lines keep C-only constructs
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;
		System_Nullable_Vector3__o position_00;
		System_Nullable_Vector3__Fields local_28;

		pCVar1 = this.Human;
		if (pCVar1 == null) {
	label_05a1b229: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Human;
			if (pCVar1 == null) goto label_05a1b229;
			if (pCVar1.AI != false) {
				__this_00 = this.Controller;
				if (position == null) {
					uVar4._0_4_ = 0.0;
					uVar4._4_4_ = 0.0;
					uVar3._0_1_ = false;
					uVar3._1_3_ = 0;
					uVar3._4_4_ = 0.0;
				}
				else {
					local_28.hasValue = false;
					local_28._1_3_ = 0;
					local_28.value.x = 0.0;
					local_28.value.y = 0.0;
					local_28.value.z = 0.0;
					local_28 = new Nullable<Vector3>((Vector3)position.Value);
					uVar3 = local_28._0_8_;
					uVar4 = local_28.value._4_8_;
				}
				if (__this_00 == null) goto label_05a1b229;
				position_00.value.y = (float)uVar4;
				position_00.value.z = SUB84(uVar4, 4);
				position_00.hasValue = SUB81(uVar3, 0);
				position_00._1_3_ = SUB83(uVar3, 1);
				position_00.value.x = SUB84(uVar3, 4);
				__this_00.AimAt(position_00);
			}
		}
		return;
	}

	[Token(Token = "0x6002226")]
	[Address(RVA = "0x591B230", Offset = "0x591A230", VA = "0x591B230")]
	public void Jump()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Jump): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.Jump();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002227")]
	[Address(RVA = "0x591B280", Offset = "0x591A280", VA = "0x591B280")]
	public void HorseMount(bool mount = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$HorseMount): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.HorseMount(mount);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002228")]
	[Address(RVA = "0x591B2E0", Offset = "0x591A2E0", VA = "0x591B2E0")]
	public void Dodge()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Dodge): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.Dodge();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002229")]
	[Address(RVA = "0x591B330", Offset = "0x591A330", VA = "0x591B330")]
	public void Reload()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Reload): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.Reload();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600222A")]
	[Address(RVA = "0x591B380", Offset = "0x591A380", VA = "0x591B380")]
	public void UseGas(bool useGas)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$UseGas): clean
		Human pCVar1;
		HumanAIController pCVar2;
		bool bVar3;

		pCVar1 = this.Human;
		if (pCVar1 == null) {
	label_05a1b3ce: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = this.Human;
			if (pCVar1 == null) goto label_05a1b3ce;
			if (pCVar1.AI != false) {
				pCVar2 = this.Controller;
				if (pCVar2 == null) goto label_05a1b3ce;
				pCVar2._usingGas = useGas;
			}
		}
		return;
	}

	[Token(Token = "0x600222B")]
	[Address(RVA = "0x591B3E0", Offset = "0x591A3E0", VA = "0x591B3E0")]
	public void HorseWalk(bool isWalk)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$HorseWalk): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.HorseWalk(isWalk);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600222C")]
	[Address(RVA = "0x591B440", Offset = "0x591A440", VA = "0x591B440")]
	public void Dash(CustomLogicVector3Builtin direction)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Dash): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				if ((direction != null) &&(__this_00 = this.Controller, __this_00 != null)) {
					__this_00.Dash((Vector3)direction.Value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600222D")]
	[Address(RVA = "0x591B4B0", Offset = "0x591A4B0", VA = "0x591B4B0")]
	public void Reel(int reelAxis)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Reel): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.Reel(reelAxis);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600222E")]
	[Address(RVA = "0x591B510", Offset = "0x591A510", VA = "0x591B510")]
	public void LaunchHookLeft(CustomLogicVector3Builtin aimPoint)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$LaunchHookLeft): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				if ((aimPoint != null) &&(__this_00 = this.Controller, __this_00 != null)) {
					__this_00.LaunchHookLeft((Vector3)aimPoint.Value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600222F")]
	[Address(RVA = "0x591B580", Offset = "0x591A580", VA = "0x591B580")]
	public void LaunchHookRight(CustomLogicVector3Builtin aimPoint)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$LaunchHookRight): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				if ((aimPoint != null) &&(__this_00 = this.Controller, __this_00 != null)) {
					__this_00.LaunchHookRight((Vector3)aimPoint.Value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002230")]
	[Address(RVA = "0x591B5F0", Offset = "0x591A5F0", VA = "0x591B5F0")]
	public void ReleaseHookLeft()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookLeft): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.ReleaseHookLeft();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002231")]
	[Address(RVA = "0x591B640", Offset = "0x591A640", VA = "0x591B640")]
	public void ReleaseHookRight()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookRight): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.ReleaseHookRight();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002232")]
	[Address(RVA = "0x591B690", Offset = "0x591A690", VA = "0x591B690")]
	public void ReleaseHookAll()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookAll): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.ReleaseHookAll();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002233")]
	[Address(RVA = "0x591B6E0", Offset = "0x591A6E0", VA = "0x591B6E0")]
	public void Attack(bool attackOn)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Attack): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.Attack(attackOn);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002234")]
	[Address(RVA = "0x591B740", Offset = "0x591A740", VA = "0x591B740")]
	[Obsolete("Use TargetNearestEnemy() to assign or GetNearestEnemy() to query.")]
	public void FindNearestEnemy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$FindNearestEnemy): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;
		ITargetable value;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return;
				}
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					value = __this_00.GetNearestEnemy();
					__this_00.Target = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002235")]
	[Address(RVA = "0x591B7B0", Offset = "0x591A7B0", VA = "0x591B7B0")]
	public void Navigation()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$Navigation): clean
		Human pCVar1;
		HumanAIController __this_00;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = this.Human;
			if (pCVar1 != null) {
				if (pCVar1.AI == false) {
					return;
				}
				__this_00 = this.Controller;
				if (__this_00 != null) {
					__this_00.MoveToPosition();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002236")]
	[Address(RVA = "0x591B800", Offset = "0x591A800", VA = "0x591B800")]
	public void SetParticleEffect(string effectName, bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c (CustomLogic.CustomLogicHumanBuiltin$$SetParticleEffect): clean
		Human pCVar1;
		bool bVar2;

		pCVar1 = this.Human;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			bVar2 = (effectName == "Buff1");
			if (bVar2) {
				pCVar1 = this.Human;
				if (pCVar1 != null) {
					pCVar1.ToggleBuff1(enabled);
					return;
				}
			}
			else {
				bVar2 = (effectName == "Buff2");
				if (bVar2) {
					pCVar1 = this.Human;
					if (pCVar1 != null) {
						pCVar1.ToggleBuff2(enabled);
						return;
					}
				}
				else {
					bVar2 = (effectName == "Fire1");
					if (!bVar2) {
						return;
					}
					pCVar1 = this.Human;
					if (pCVar1 != null) {
						pCVar1.ToggleFire1(enabled);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHumanBuiltin.c.

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Weapon");
		__this.Add((Il2CppObject *)"CurrentSpecial");
		__this.Add((Il2CppObject *)"SpecialCooldownTime");
		__this.Add((Il2CppObject *)"SpecialCooldown");
		__this.Add((Il2CppObject *)"ShifterLiveTime");
		__this.Add((Il2CppObject *)"SpecialCooldownRatio");
		__this.Add((Il2CppObject *)"CurrentGas");
		__this.Add((Il2CppObject *)"MaxGas");
		__this.Add((Il2CppObject *)"Acceleration");
		__this.Add((Il2CppObject *)"Speed");
		__this.Add((Il2CppObject *)"Horse");
		__this.Add((Il2CppObject *)"HorseFollowEnabled");
		__this.Add((Il2CppObject *)"HorseTransform");
		__this.Add((Il2CppObject *)"HorseSpeed");
		__this.Add((Il2CppObject *)"CurrentBladeDurability");
		__this.Add((Il2CppObject *)"MaxBladeDurability");
		__this.Add((Il2CppObject *)"CurrentBlade");
		__this.Add((Il2CppObject *)"MaxBlade");
		__this.Add((Il2CppObject *)"CurrentAmmoRound");
		__this.Add((Il2CppObject *)"MaxAmmoRound");
		__this.Add((Il2CppObject *)"CurrentAmmoLeft");
		__this.Add((Il2CppObject *)"MaxAmmoTotal");
		__this.Add((Il2CppObject *)"LeftHookEnabled");
		__this.Add((Il2CppObject *)"RightHookEnabled");
		__this.Add((Il2CppObject *)"IsMounted");
		__this.Add((Il2CppObject *)"MountState");
		__this.Add((Il2CppObject *)"MountedMapObject");
		__this.Add((Il2CppObject *)"MountedTransform");
		__this.Add((Il2CppObject *)"AutoRefillGas");
		__this.Add((Il2CppObject *)"CanDodge");
		__this.Add((Il2CppObject *)"IsInvincible");
		__this.Add((Il2CppObject *)"InvincibleTimeLeft");
		__this.Add((Il2CppObject *)"IsCarried");
		__this.Add((Il2CppObject *)"Pivot");
		__this.Add((Il2CppObject *)"PivotPosition");
		__this.Add((Il2CppObject *)"IsHookedLeft");
		__this.Add((Il2CppObject *)"IsHookedRight");
		__this.Add((Il2CppObject *)"IsHookingLeft");
		__this.Add((Il2CppObject *)"IsHookingRight");
		__this.Add((Il2CppObject *)"HasHookLeft");
		__this.Add((Il2CppObject *)"HasHookRight");
		__this.Add((Il2CppObject *)"LeftHookReady");
		__this.Add((Il2CppObject *)"RightHookReady");
		__this.Add((Il2CppObject *)"LeftHookPosition");
		__this.Add((Il2CppObject *)"RightHookPosition");
		__this.Add((Il2CppObject *)"FocusRange");
		__this.Add((Il2CppObject *)"FocusTime");
		__this.Add((Il2CppObject *)"Target");
		__this.Add((Il2CppObject *)"TargetPosition");
		__this.Add((Il2CppObject *)"TargetVelocity");
		__this.Add((Il2CppObject *)"AllowHorse");
		__this.Add((Il2CppObject *)"AllowSkin");
		__this.Add((Il2CppObject *)"Refill");
		__this.Add((Il2CppObject *)"RefillImmediate");
		__this.Add((Il2CppObject *)"ClearHooks");
		__this.Add((Il2CppObject *)"ClearLeftHook");
		__this.Add((Il2CppObject *)"ClearRightHook");
		__this.Add((Il2CppObject *)"MountMapObject");
		__this.Add((Il2CppObject *)"MountTransform");
		__this.Add((Il2CppObject *)"Unmount");
		__this.Add((Il2CppObject *)"SetSpecial");
		__this.Add((Il2CppObject *)"ActivateSpecial");
		__this.Add((Il2CppObject *)"SetWeapon");
		__this.Add((Il2CppObject *)"DisablePerks");
		__this.Add((Il2CppObject *)"HasAIState");
		__this.Add((Il2CppObject *)"SetAIState");
		__this.Add((Il2CppObject *)"GetAIState");
		__this.Add((Il2CppObject *)"SwitchAIState");
		__this.Add((Il2CppObject *)"ResetCallback");
		__this.Add((Il2CppObject *)"Move");
		__this.Add((Il2CppObject *)"AimAt");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"HorseMount");
		__this.Add((Il2CppObject *)"Dodge");
		__this.Add((Il2CppObject *)"Reload");
		__this.Add((Il2CppObject *)"UseGas");
		__this.Add((Il2CppObject *)"HorseWalk");
		__this.Add((Il2CppObject *)"Dash");
		__this.Add((Il2CppObject *)"Reel");
		__this.Add((Il2CppObject *)"LaunchHookLeft");
		__this.Add((Il2CppObject *)"LaunchHookRight");
		__this.Add((Il2CppObject *)"ReleaseHookLeft");
		__this.Add((Il2CppObject *)"ReleaseHookRight");
		__this.Add((Il2CppObject *)"ReleaseHookAll");
		__this.Add((Il2CppObject *)"Attack");
		__this.Add((Il2CppObject *)"FindNearestEnemy");
		__this.Add((Il2CppObject *)"Navigation");
		__this.Add((Il2CppObject *)"SetParticleEffect");
		CustomLogicHumanBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_2_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.get_Position();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_2_1(CustomLogicHumanBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.set_Position(pCVar1);
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Weapon_g____getter_3_0(CustomLogicHumanBuiltin __i)
	{
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __i.Weapon;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Weapon_g____setter_3_1(CustomLogicHumanBuiltin __i, object __v)
	{
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Weapon = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentSpecial_g____getter_4_0(CustomLogicHumanBuiltin __i)
	{
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __i.CurrentSpecial;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentSpecial_g____setter_4_1(CustomLogicHumanBuiltin __i, object __v)
	{
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentSpecial = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpecialCooldownTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpecialCooldownTime = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialCooldown_g____getter_6_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpecialCooldown;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__SpecialCooldown_g____setter_6_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpecialCooldown = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ShifterLiveTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.ShifterLiveTime = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownRatio>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpecialCooldownRatio;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentGas_g____getter_9_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentGas;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentGas_g____setter_9_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentGas = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__MaxGas_g____getter_10_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxGas;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__MaxGas_g____setter_10_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxGas = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Acceleration_g____getter_11_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Acceleration;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Acceleration_g____setter_11_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Acceleration = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Speed_g____getter_12_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Speed;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__Speed_g____setter_12_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Speed = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Horse>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Horse_g____getter_13_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicHorseBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Horse;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____getter|14_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__HorseFollowEnabled_g____getter_14_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.HorseFollowEnabled;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__HorseFollowEnabled_g____setter_14_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HorseFollowEnabled = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseTransform>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__HorseTransform_g____getter_15_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicTransformBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.HorseTransform;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__HorseSpeed_g____getter_16_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HorseSpeed;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__HorseSpeed_g____setter_16_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HorseSpeed = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentBladeDurability_g____getter_17_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentBladeDurability;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentBladeDurability_g____setter_17_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentBladeDurability = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__MaxBladeDurability_g____getter_18_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxBladeDurability;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____setter|18_1: clean
	private static void Bindings____CreatePropertyBinding__MaxBladeDurability_g____setter_18_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxBladeDurability = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentBlade_g____getter_19_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentBlade;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentBlade_g____setter_19_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentBlade = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__MaxBlade_g____getter_20_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxBlade;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__MaxBlade_g____setter_20_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxBlade = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentAmmoRound_g____getter_21_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentAmmoRound;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentAmmoRound_g____setter_21_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentAmmoRound = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__MaxAmmoRound_g____getter_22_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxAmmoRound;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____setter|22_1: clean
	private static void Bindings____CreatePropertyBinding__MaxAmmoRound_g____setter_22_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxAmmoRound = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentAmmoLeft_g____getter_23_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentAmmoLeft;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__CurrentAmmoLeft_g____setter_23_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CurrentAmmoLeft = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__MaxAmmoTotal_g____getter_24_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxAmmoTotal;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____setter|24_1: clean
	private static void Bindings____CreatePropertyBinding__MaxAmmoTotal_g____setter_24_1(CustomLogicHumanBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MaxAmmoTotal = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____getter|25_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__LeftHookEnabled_g____getter_25_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.LeftHookEnabled;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____setter|25_1: clean
	private static void Bindings____CreatePropertyBinding__LeftHookEnabled_g____setter_25_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.LeftHookEnabled = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____getter|26_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__RightHookEnabled_g____getter_26_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.RightHookEnabled;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____setter|26_1: clean
	private static void Bindings____CreatePropertyBinding__RightHookEnabled_g____setter_26_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.RightHookEnabled = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsMounted>g____getter|27_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsMounted_g____getter_27_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsMounted;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountState>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__MountState_g____getter_28_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.MountState;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedMapObject>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__MountedMapObject_g____getter_29_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicMapObjectBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.MountedMapObject;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedTransform>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__MountedTransform_g____getter_30_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicTransformBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.MountedTransform;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____getter|31_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__AutoRefillGas_g____getter_31_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.AutoRefillGas;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____setter|31_1: clean
	private static void Bindings____CreatePropertyBinding__AutoRefillGas_g____setter_31_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.AutoRefillGas = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____getter|32_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__CanDodge_g____getter_32_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.CanDodge;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____setter|32_1: clean
	private static void Bindings____CreatePropertyBinding__CanDodge_g____setter_32_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CanDodge = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____getter|33_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsInvincible_g____getter_33_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsInvincible;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____setter|33_1: clean
	private static void Bindings____CreatePropertyBinding__IsInvincible_g____setter_33_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.IsInvincible = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.InvincibleTimeLeft;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____setter|34_1: clean
	private static void Bindings____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.InvincibleTimeLeft = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsCarried>g____getter|35_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsCarried_g____getter_35_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsCarried;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Pivot>g____getter|36_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Pivot_g____getter_36_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.Pivot;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__PivotPosition>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__PivotPosition_g____getter_37_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.PivotPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedLeft>g____getter|38_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsHookedLeft_g____getter_38_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsHookedLeft;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedRight>g____getter|39_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsHookedRight_g____getter_39_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsHookedRight;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingLeft>g____getter|40_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsHookingLeft_g____getter_40_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsHookingLeft;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingRight>g____getter|41_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsHookingRight_g____getter_41_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.IsHookingRight;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookLeft>g____getter|42_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__HasHookLeft_g____getter_42_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.HasHookLeft;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookRight>g____getter|43_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__HasHookRight_g____getter_43_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.HasHookRight;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookReady>g____getter|44_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__LeftHookReady_g____getter_44_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.LeftHookReady;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookReady>g____getter|45_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__RightHookReady_g____getter_45_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.RightHookReady;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookPosition>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__LeftHookPosition_g____getter_46_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.LeftHookPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookPosition>g____getter|47_0: clean
	private static object Bindings____CreatePropertyBinding__RightHookPosition_g____getter_47_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.RightHookPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|48_0: clean
	private static object Bindings____CreatePropertyBinding__FocusRange_g____getter_48_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.FocusRange;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|48_1: clean
	private static void Bindings____CreatePropertyBinding__FocusRange_g____setter_48_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.FocusRange = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|49_0: clean
	private static object Bindings____CreatePropertyBinding__FocusTime_g____getter_49_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.FocusTime;
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|49_1: clean
	private static void Bindings____CreatePropertyBinding__FocusTime_g____setter_49_1(CustomLogicHumanBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.FocusTime = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____getter|50_0: clean
	private static object Bindings____CreatePropertyBinding__Target_g____getter_50_0(CustomLogicHumanBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____setter|50_1: clean
	private static void Bindings____CreatePropertyBinding__Target_g____setter_50_1(CustomLogicHumanBuiltin __i, object __v)
	{
		object value;

		value = CustomLogicEvaluator.ConvertTo<object>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Target = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____getter|51_0: clean
	private static object Bindings____CreatePropertyBinding__TargetPosition_g____getter_51_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.TargetPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____setter|51_1: clean
	private static void Bindings____CreatePropertyBinding__TargetPosition_g____setter_51_1(CustomLogicHumanBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TargetPosition = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetVelocity>g____getter|52_0: clean
	private static object Bindings____CreatePropertyBinding__TargetVelocity_g____getter_52_0(CustomLogicHumanBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.TargetVelocity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____getter|53_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__AllowHorse_g____getter_53_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.AllowHorse;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____setter|53_1: clean
	private static void Bindings____CreatePropertyBinding__AllowHorse_g____setter_53_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.AllowHorse = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____getter|54_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__AllowSkin_g____getter_54_0(CustomLogicHumanBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.AllowSkin;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____setter|54_1: clean
	private static void Bindings____CreatePropertyBinding__AllowSkin_g____setter_54_1(CustomLogicHumanBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.AllowSkin = value;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicHumanBuiltin.Bindings.c();
		CustomLogicHumanBuiltin.Bindings.c.__9 =(CustomLogicHumanBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Refill>b__55_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Refill_b__55_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__c == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __c.Refill();
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__RefillImmediate>b__56_0: clean
	private object Bindings_c____CreateMethodBinding__RefillImmediate_b__56_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.RefillImmediate();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearHooks>b__57_0: clean
	private object Bindings_c____CreateMethodBinding__ClearHooks_b__57_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ClearHooks();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearLeftHook>b__58_0: clean
	private object Bindings_c____CreateMethodBinding__ClearLeftHook_b__58_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ClearLeftHook();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearRightHook>b__59_0: clean
	private object Bindings_c____CreateMethodBinding__ClearRightHook_b__59_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ClearRightHook();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountMapObject>b__60_0: clean
	private object Bindings_c____CreateMethodBinding__MountMapObject_b__60_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool canMountedAttack;
		CustomLogicMapObjectBuiltin mapObject;
		CustomLogicVector3Builtin positionOffset;
		CustomLogicVector3Builtin rotationOffset;

		if (__a == null) {
	label_05a258ea: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			mapObject = CustomLogicEvaluator.ConvertTo<CustomLogicMapObjectBuiltin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				positionOffset = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotationOffset = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((int)__a.Length < 4) {
						canMountedAttack = false;
					}
					else {
						pIVar1 = __a[3];
						canMountedAttack = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
					}
					if (__c != null) {
						__c.MountMapObject(mapObject, positionOffset, rotationOffset, canMountedAttack);
						return null;
					}
					goto label_05a258ea;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountTransform>b__61_0: clean
	private object Bindings_c____CreateMethodBinding__MountTransform_b__61_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool canMountedAttack;
		CustomLogicTransformBuiltin transform;
		CustomLogicVector3Builtin positionOffset;
		CustomLogicVector3Builtin rotationOffset;

		if (__a == null) {
	label_05a25a2a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			transform = CustomLogicEvaluator.ConvertTo<CustomLogicTransformBuiltin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				positionOffset = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotationOffset = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((int)__a.Length < 4) {
						canMountedAttack = false;
					}
					else {
						pIVar1 = __a[3];
						canMountedAttack = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
					}
					if (__c != null) {
						__c.MountTransform(transform, positionOffset, rotationOffset, canMountedAttack);
						return null;
					}
					goto label_05a25a2a;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unmount>b__62_0: clean
	private object Bindings_c____CreateMethodBinding__Unmount_b__62_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool immediate;

		if (__a != null) {
			if (__a.Length == 0) {
				immediate = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				immediate = CustomLogicEvaluator.ConvertTo<bool>(obj);
			}
			if (__c != null) {
				__c.Unmount(immediate);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpecial>b__63_0: clean
	private object Bindings_c____CreateMethodBinding__SetSpecial_b__63_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		String special;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			special = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.SetSpecial(special);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ActivateSpecial>b__64_0: clean
	private object Bindings_c____CreateMethodBinding__ActivateSpecial_b__64_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ActivateSpecial();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeapon>b__65_0: clean
	private object Bindings_c____CreateMethodBinding__SetWeapon_b__65_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		String weapon;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			weapon = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.SetWeapon(weapon);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__DisablePerks>b__66_0: clean
	private object Bindings_c____CreateMethodBinding__DisablePerks_b__66_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.DisablePerks();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasAIState>b__67_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__HasAIState_b__67_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		String name;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if (__c != null) {
				bVar1 = __c.HasAIState(name);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAIState>b__68_0: clean
	private object Bindings_c____CreateMethodBinding__SetAIState_b__68_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String name;
		UserClassInstance classInstance;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				classInstance = null;
			}
			else {
				pIVar1 = __a[1];
				classInstance = CustomLogicEvaluator.ConvertTo<UserClassInstance>(pIVar1);
			}
			if (__c != null) {
				__c.SetAIState(name, classInstance);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAIState>b__69_0: clean
	private object Bindings_c____CreateMethodBinding__GetAIState_b__69_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		String pSVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __c.GetAIState();
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SwitchAIState>b__70_0: clean
	private object Bindings_c____CreateMethodBinding__SwitchAIState_b__70_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		String name;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.SwitchAIState(name);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCallback>b__71_0: clean
	private object Bindings_c____CreateMethodBinding__ResetCallback_b__71_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String callback;
		UserMethod method_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			callback = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				method_00 = null;
			}
			else {
				pIVar1 = __a[1];
				method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
			}
			if (__c != null) {
				__c.ResetCallback(callback, method_00);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__72_0: clean
	private object Bindings_c____CreateMethodBinding__Move_b__72_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin direction;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			direction = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (__c != null) {
				__c.Move(direction);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__AimAt>b__73_0: clean
	private object Bindings_c____CreateMethodBinding__AimAt_b__73_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin position;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj) ;
			if (__c != null) {
				__c.AimAt(position);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Jump>b__74_0: clean
	private object Bindings_c____CreateMethodBinding__Jump_b__74_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Jump();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseMount>b__75_0: clean
	private object Bindings_c____CreateMethodBinding__HorseMount_b__75_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool mount;

		if (__a != null) {
			if (__a.Length == 0) {
				mount = true;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				mount = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				__c.HorseMount(mount);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dodge>b__76_0: clean
	private object Bindings_c____CreateMethodBinding__Dodge_b__76_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Dodge();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reload>b__77_0: clean
	private object Bindings_c____CreateMethodBinding__Reload_b__77_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Reload();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__UseGas>b__78_0: clean
	private object Bindings_c____CreateMethodBinding__UseGas_b__78_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool useGas;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			useGas = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if (__c != null) {
				__c.UseGas(useGas);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseWalk>b__79_0: clean
	private object Bindings_c____CreateMethodBinding__HorseWalk_b__79_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool isWalk;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			isWalk = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if (__c != null) {
				__c.HorseWalk(isWalk);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dash>b__80_0: clean
	private object Bindings_c____CreateMethodBinding__Dash_b__80_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin direction;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			direction = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (__c != null) {
				__c.Dash(direction);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reel>b__81_0: clean
	private object Bindings_c____CreateMethodBinding__Reel_b__81_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		int reelAxis;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			reelAxis = CustomLogicEvaluator.ConvertTo<int>(obj) ;
			if (__c != null) {
				__c.Reel(reelAxis);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookLeft>b__82_0: clean
	private object Bindings_c____CreateMethodBinding__LaunchHookLeft_b__82_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin aimPoint;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			aimPoint = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj) ;
			if (__c != null) {
				__c.LaunchHookLeft(aimPoint);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookRight>b__83_0: clean
	private object Bindings_c____CreateMethodBinding__LaunchHookRight_b__83_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin aimPoint;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			aimPoint = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj) ;
			if (__c != null) {
				__c.LaunchHookRight(aimPoint);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookLeft>b__84_0: clean
	private object Bindings_c____CreateMethodBinding__ReleaseHookLeft_b__84_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ReleaseHookLeft();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookRight>b__85_0: clean
	private object Bindings_c____CreateMethodBinding__ReleaseHookRight_b__85_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ReleaseHookRight();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookAll>b__86_0: clean
	private object Bindings_c____CreateMethodBinding__ReleaseHookAll_b__86_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ReleaseHookAll();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__87_0: clean
	private object Bindings_c____CreateMethodBinding__Attack_b__87_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool attackOn;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			attackOn = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if (__c != null) {
				__c.Attack(attackOn);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindNearestEnemy>b__88_0: clean
	private object Bindings_c____CreateMethodBinding__FindNearestEnemy_b__88_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.FindNearestEnemy();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Navigation>b__89_0: clean
	private object Bindings_c____CreateMethodBinding__Navigation_b__89_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Navigation();
		return null;
	}

	// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetParticleEffect>b__90_0: clean
	private object Bindings_c____CreateMethodBinding__SetParticleEffect_b__90_0(CustomLogicHumanBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;
		String effectName;

		if (__a == null) {
	label_05a26784: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			effectName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				enabled = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if (__c != null) {
					__c.SetParticleEffect(effectName, enabled);
					return null;
				}
				goto label_05a26784;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$.ctor: clean
	private void c__DisplayClass157_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$<ResetCallback>b__0: clean
	private void c__DisplayClass157_0__ResetCallback_b__0()
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[0];
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(userMethod, parameterValues);
		return;
	}
}
