// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHumanSoundEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000524")]
[CompilerGenerated]
internal class CustomLogicHumanSoundEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000525")]
	public static class Factory
	{
		[Token(Token = "0x6002AA0")]
		[Address(RVA = "0x59737E0", Offset = "0x59727E0", VA = "0x59737E0")]
		public static CustomLogicHumanSoundEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanSoundEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHumanSoundEnum();
			return (CustomLogicHumanSoundEnum)__this;
		}
	}

	[Token(Token = "0x2000526")]
	public static class Bindings
	{
		[Token(Token = "0x40017D8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002AA1")]
		[Address(RVA = "0x5973900", Offset = "0x5972900", VA = "0x5973900")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicHumanSoundEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6c198db2) {
				if (uVar2 < 0x3c39fb91) {
					if (uVar2 < 0x1bab3e7b) {
						if (uVar2 < 0x16ab369c) {
							if (uVar2 < 0xe1ef32e) {
								if (uVar2 == 0x6d9263a) {
									bVar1 = (name == "GasStart");
									if (bVar1) {
										pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GasStart();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0xe1ef32d) {
									bVar1 = (name == "Jump");
									if (bVar1) {
										pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Jump();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x15ab3508) {
								bVar1 = (name == "Death5");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Death5();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x16ab369b) {
								bVar1 = (name == "Death4");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Death4();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x19ab3b55) {
							if (uVar2 == 0x16ed547a) {
								bVar1 = (name == "ReelIn");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__ReelIn();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x19ab3b54) {
								bVar1 = (name == "Death1");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Death1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x19de4ccf) {
							bVar1 = (name == "GasEnd");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GasEnd();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1a4a6571) {
							bVar1 = (name == "OldNapeHit");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__OldNapeHit();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1bab3e7a) {
							bVar1 = (name == "Death3");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Death3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2ce556a4) {
						if (uVar2 < 0x1cab400e) {
							if (uVar2 == 0x1be90ac3) {
								bVar1 = (name == "Footstep2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Footstep2();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1cab400d) {
								bVar1 = (name == "Death2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Death2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1ce90c56) {
							bVar1 = (name == "Footstep1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Footstep1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x24424353) {
							bVar1 = (name == "BladeReloadGround");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeReloadGround();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2ce556a3) {
							bVar1 = (name == "TSLaunch2");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__TSLaunch2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x31598f8f) {
						if (uVar2 == 0x2de55836) {
							bVar1 = (name == "TSLaunch1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__TSLaunch1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x31598f8e) {
							bVar1 = (name == "LimbHit");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__LimbHit();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x322726f4) {
						bVar1 = (name == "BladeBreak");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeBreak();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x39c5bbac) {
						bVar1 = (name == "GunReload");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GunReload();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3c39fb90) {
						bVar1 = (name == "TimerGo");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__TimerGo();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x548b671f) {
					if (uVar2 < 0x474347a4) {
						if (uVar2 < 0x41f90b8f) {
							if (uVar2 == 0x40f909fb) {
								bVar1 = (name == "AHSSGunShot1");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShot1();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x41f90b8e) {
								bVar1 = (name == "AHSSGunShot2");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShot2();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x42f90d21) {
							bVar1 = (name == "AHSSGunShot3");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShot3();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x43f90eb4) {
							bVar1 = (name == "AHSSGunShot4");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShot4();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x474347a3) {
							bVar1 = (name == "BladeNape2Var1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape2Var1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x49434aca) {
						if (uVar2 == 0x48434936) {
							bVar1 = (name == "BladeNape2Var2");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape2Var2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x49434ac9) {
							bVar1 = (name == "BladeNape2Var3");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape2Var3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x4bbbd0ac) {
						bVar1 = (name == "AHSSGunShotDouble1");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShotDouble1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x4ebbd565) {
						bVar1 = (name == "AHSSGunShotDouble2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSGunShotDouble2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x548b671e) {
						bVar1 = (name == "Switchback");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Switchback();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5c39b690) {
					if (uVar2 < 0x5722e904) {
						if (uVar2 == 0x55c3fbee) {
							bVar1 = (name == "HookRetractLeft");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__HookRetractLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x5722e903) {
							bVar1 = (name == "AHSSNape2Var2");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape2Var2();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x5822ea96) {
						bVar1 = (name == "AHSSNape2Var1");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape2Var1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5b39b4fc) {
						bVar1 = (name == "BladeNape4Var2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape4Var2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5c39b68f) {
						bVar1 = (name == "BladeNape4Var3");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape4Var3();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x6082b447) {
					if (uVar2 == 0x5e39b9b5) {
						bVar1 = (name == "BladeNape4Var1");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape4Var1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6082b446) {
						bVar1 = (name == "BladeHit");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeHit();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x6083d558) {
					bVar1 = (name == "GasBurst");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GasBurst();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x66052020) {
					bVar1 = (name == "NapeHit");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__NapeHit();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6c198db1) {
					bVar1 = (name == "Refill");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Refill();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xacf875a8) {
				if (uVar2 < 0x99b7f233) {
					if (uVar2 < 0x799ccc7e) {
						if (uVar2 < 0x703d20cd) {
							if (uVar2 == 0x6d3d1c13) {
								bVar1 = (name == "BladeSwing4");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeSwing4();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x703d20cc) {
								bVar1 = (name == "BladeSwing1");
								if (bVar1) {
									pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeSwing1();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x723d23f2) {
							bVar1 = (name == "BladeSwing3");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeSwing3();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x733d2585) {
							bVar1 = (name == "BladeSwing2");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeSwing2();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x799ccc7d) {
							bVar1 = (name == "ThunderspearLaunch");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__ThunderspearLaunch();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x8eeafb7e) {
						if (uVar2 == 0x8cd14bad) {
							bVar1 = (name == "HookLaunch");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__HookLaunch();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x8eeafb7d) {
							bVar1 = (name == "CrashLand");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__CrashLand();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x936083cb) {
						bVar1 = (name == "AHSSNape1Var1");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape1Var1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9460855e) {
						bVar1 = (name == "AHSSNape1Var2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape1Var2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x99b7f232) {
						bVar1 = (name == "GunExplodeLoud");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GunExplodeLoud();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x9d1b4b32) {
					if (uVar2 < 0x9aadede9) {
						if (uVar2 == 0x9a1b4678) {
							bVar1 = (name == "BladeNape3Var1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape3Var1();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x9aadede8) {
							bVar1 = (name == "APGShot1");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__APGShot1();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9c1b499e) {
						bVar1 = (name == "BladeNape3Var3");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape3Var3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9cadf10e) {
						bVar1 = (name == "APGShot3");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__APGShot3();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9d1b4b31) {
						bVar1 = (name == "BladeNape3Var2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape3Var2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x9f3e662d) {
					if (uVar2 == 0x9dadf2a1) {
						bVar1 = (name == "APGShot2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__APGShot2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9f3e662c) {
						bVar1 = (name == "BladeReloadAir");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeReloadAir();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9fadf5c7) {
					bVar1 = (name == "APGShot4");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__APGShot4();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa114d213) {
					bVar1 = (name == "ReelOut");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__ReelOut();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xacf875a7) {
					bVar1 = (name == "TimerTick");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__TimerTick();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe2620ba0) {
				if (uVar2 < 0xcd507f81) {
					if (uVar2 < 0xbd9f8bfb) {
						if (uVar2 == 0xbb51b893) {
							bVar1 = (name == "NoGas");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__NoGas();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbd9f8bfa) {
							bVar1 = (name == "OldHookLaunch");
							if (bVar1) {
								pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__OldHookLaunch();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xc30f2900) {
						bVar1 = (name == "GasLoop");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GasLoop();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xcb990166) {
						bVar1 = (name == "GunExplode");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__GunExplode();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xcd507f80) {
						bVar1 = (name == "AHSSNape3Var2");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape3Var2();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xd9202fa7) {
					if (uVar2 == 0xd0508439) {
						bVar1 = (name == "AHSSNape3Var1");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__AHSSNape3Var1();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd9202fa6) {
						bVar1 = (name == "OldBladeSwing");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__OldBladeSwing();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xdb968bd5) {
					bVar1 = (name == "OldBladeHit");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__OldBladeHit();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdbdf1f18) {
					bVar1 = (name == "HookImpactLoud");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__HookImpactLoud();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe2620b9f) {
					bVar1 = (name == "Checkpoint");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Checkpoint();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf5697c89) {
				if (uVar2 < 0xee1682bd) {
					if (uVar2 == 0xea62a4c3) {
						bVar1 = (name == "HookRetractRight");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__HookRetractRight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xee1682bc) {
						bVar1 = (name == "Land");
						if (bVar1) {
							pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Land();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xf3dfd300) {
					bVar1 = (name == "HookImpact");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__HookImpact();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf526d670) {
					bVar1 = (name == "Dodge");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Dodge();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf5697c88) {
					bVar1 = (name == "FlareLaunch");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__FlareLaunch();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xfbb7b789) {
				if (uVar2 == 0xf7aaccdf) {
					bVar1 = (name == "WaterSplash");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__WaterSplash();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xfbb7b788) {
					bVar1 = (name == "BladeNape1Var3");
					if (bVar1) {
						pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape1Var3();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xfcb7b91b) {
				bVar1 = (name == "BladeNape1Var2");
				if (bVar1) {
					pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape1Var2();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfdb7baae) {
				bVar1 = (name == "BladeNape1Var1");
				if (bVar1) {
					pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__BladeNape1Var1();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xffc7c086) {
				bVar1 = (name == "Slide");
				if (bVar1) {
					pCVar3 = CustomLogicHumanSoundEnum.Bindings.__CreatePropertyBinding__Slide();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanSoundEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002AA2")]
		[Address(RVA = "0x59755C0", Offset = "0x59745C0", VA = "0x59755C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeBreak()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeBreak): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA3")]
		[Address(RVA = "0x5975660", Offset = "0x5974660", VA = "0x5975660")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeHit): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA4")]
		[Address(RVA = "0x5975700", Offset = "0x5974700", VA = "0x5975700")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__OldBladeHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeHit): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA5")]
		[Address(RVA = "0x59757A0", Offset = "0x59747A0", VA = "0x59757A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__NapeHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NapeHit): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA6")]
		[Address(RVA = "0x5975840", Offset = "0x5974840", VA = "0x5975840")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__LimbHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__LimbHit): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA7")]
		[Address(RVA = "0x59758E0", Offset = "0x59748E0", VA = "0x59758E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__OldNapeHit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldNapeHit): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA8")]
		[Address(RVA = "0x5975980", Offset = "0x5974980", VA = "0x5975980")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeReloadAir()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadAir): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AA9")]
		[Address(RVA = "0x5975A20", Offset = "0x5974A20", VA = "0x5975A20")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeReloadGround()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadGround): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAA")]
		[Address(RVA = "0x5975AC0", Offset = "0x5974AC0", VA = "0x5975AC0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GunReload()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunReload): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAB")]
		[Address(RVA = "0x5975B60", Offset = "0x5974B60", VA = "0x5975B60")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeSwing1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAC")]
		[Address(RVA = "0x5975C00", Offset = "0x5974C00", VA = "0x5975C00")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeSwing2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAD")]
		[Address(RVA = "0x5975CA0", Offset = "0x5974CA0", VA = "0x5975CA0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeSwing3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAE")]
		[Address(RVA = "0x5975D40", Offset = "0x5974D40", VA = "0x5975D40")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeSwing4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing4): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AAF")]
		[Address(RVA = "0x5975DE0", Offset = "0x5974DE0", VA = "0x5975DE0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__OldBladeSwing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeSwing): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB0")]
		[Address(RVA = "0x5975E80", Offset = "0x5974E80", VA = "0x5975E80")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Dodge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Dodge): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB1")]
		[Address(RVA = "0x5975F20", Offset = "0x5974F20", VA = "0x5975F20")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__FlareLaunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__FlareLaunch): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB2")]
		[Address(RVA = "0x5975FC0", Offset = "0x5974FC0", VA = "0x5975FC0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__ThunderspearLaunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ThunderspearLaunch): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB3")]
		[Address(RVA = "0x5976060", Offset = "0x5975060", VA = "0x5976060")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GasBurst()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasBurst): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB4")]
		[Address(RVA = "0x5976100", Offset = "0x5975100", VA = "0x5976100")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__HookLaunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookLaunch): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB5")]
		[Address(RVA = "0x59761A0", Offset = "0x59751A0", VA = "0x59761A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__OldHookLaunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldHookLaunch): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB6")]
		[Address(RVA = "0x5976240", Offset = "0x5975240", VA = "0x5976240")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__HookRetractLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractLeft): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB7")]
		[Address(RVA = "0x59762E0", Offset = "0x59752E0", VA = "0x59762E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__HookRetractRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractRight): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB8")]
		[Address(RVA = "0x5976380", Offset = "0x5975380", VA = "0x5976380")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__HookImpact()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpact): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AB9")]
		[Address(RVA = "0x5976420", Offset = "0x5975420", VA = "0x5976420")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__HookImpactLoud()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpactLoud): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABA")]
		[Address(RVA = "0x59764C0", Offset = "0x59754C0", VA = "0x59764C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GasStart()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasStart): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABB")]
		[Address(RVA = "0x5976560", Offset = "0x5975560", VA = "0x5976560")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GasLoop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasLoop): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABC")]
		[Address(RVA = "0x5976600", Offset = "0x5975600", VA = "0x5976600")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GasEnd()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasEnd): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABD")]
		[Address(RVA = "0x59766A0", Offset = "0x59756A0", VA = "0x59766A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__ReelIn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelIn): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABE")]
		[Address(RVA = "0x5976740", Offset = "0x5975740", VA = "0x5976740")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__ReelOut()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelOut): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ABF")]
		[Address(RVA = "0x59767E0", Offset = "0x59757E0", VA = "0x59767E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__CrashLand()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__CrashLand): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC0")]
		[Address(RVA = "0x5976880", Offset = "0x5975880", VA = "0x5976880")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Jump): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC1")]
		[Address(RVA = "0x5976920", Offset = "0x5975920", VA = "0x5976920")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Land): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC2")]
		[Address(RVA = "0x59769C0", Offset = "0x59759C0", VA = "0x59769C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__NoGas()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NoGas): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC3")]
		[Address(RVA = "0x5976A60", Offset = "0x5975A60", VA = "0x5976A60")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Refill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Refill): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC4")]
		[Address(RVA = "0x5976B00", Offset = "0x5975B00", VA = "0x5976B00")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Slide()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Slide): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC5")]
		[Address(RVA = "0x5976BA0", Offset = "0x5975BA0", VA = "0x5976BA0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Footstep1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC6")]
		[Address(RVA = "0x5976C40", Offset = "0x5975C40", VA = "0x5976C40")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Footstep2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC7")]
		[Address(RVA = "0x5976CE0", Offset = "0x5975CE0", VA = "0x5976CE0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Death1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC8")]
		[Address(RVA = "0x5976D80", Offset = "0x5975D80", VA = "0x5976D80")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Death2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AC9")]
		[Address(RVA = "0x5976E20", Offset = "0x5975E20", VA = "0x5976E20")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Death3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACA")]
		[Address(RVA = "0x5976EC0", Offset = "0x5975EC0", VA = "0x5976EC0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Death4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death4): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACB")]
		[Address(RVA = "0x5976F60", Offset = "0x5975F60", VA = "0x5976F60")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Death5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death5): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACC")]
		[Address(RVA = "0x5977000", Offset = "0x5976000", VA = "0x5977000")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Checkpoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Checkpoint): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACD")]
		[Address(RVA = "0x59770A0", Offset = "0x59760A0", VA = "0x59770A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__TimerTick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerTick): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACE")]
		[Address(RVA = "0x5977140", Offset = "0x5976140", VA = "0x5977140")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__TimerGo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerGo): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ACF")]
		[Address(RVA = "0x59771E0", Offset = "0x59761E0", VA = "0x59771E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GunExplode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplode): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD0")]
		[Address(RVA = "0x5977280", Offset = "0x5976280", VA = "0x5977280")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__GunExplodeLoud()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplodeLoud): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD1")]
		[Address(RVA = "0x5977320", Offset = "0x5976320", VA = "0x5977320")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__WaterSplash()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__WaterSplash): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD2")]
		[Address(RVA = "0x59773C0", Offset = "0x59763C0", VA = "0x59773C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__Switchback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Switchback): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD3")]
		[Address(RVA = "0x5977460", Offset = "0x5976460", VA = "0x5977460")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__APGShot1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD4")]
		[Address(RVA = "0x5977500", Offset = "0x5976500", VA = "0x5977500")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__APGShot2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD5")]
		[Address(RVA = "0x59775A0", Offset = "0x59765A0", VA = "0x59775A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__APGShot3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD6")]
		[Address(RVA = "0x5977640", Offset = "0x5976640", VA = "0x5977640")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__APGShot4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot4): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD7")]
		[Address(RVA = "0x59776E0", Offset = "0x59766E0", VA = "0x59776E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape1Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x5977780", Offset = "0x5976780", VA = "0x5977780")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape1Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x5977820", Offset = "0x5976820", VA = "0x5977820")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape1Var3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADA")]
		[Address(RVA = "0x59778C0", Offset = "0x59768C0", VA = "0x59778C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape2Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADB")]
		[Address(RVA = "0x5977960", Offset = "0x5976960", VA = "0x5977960")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape2Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADC")]
		[Address(RVA = "0x5977A00", Offset = "0x5976A00", VA = "0x5977A00")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape2Var3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADD")]
		[Address(RVA = "0x5977AA0", Offset = "0x5976AA0", VA = "0x5977AA0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape3Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADE")]
		[Address(RVA = "0x5977B40", Offset = "0x5976B40", VA = "0x5977B40")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape3Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002ADF")]
		[Address(RVA = "0x5977BE0", Offset = "0x5976BE0", VA = "0x5977BE0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape3Var3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE0")]
		[Address(RVA = "0x5977C80", Offset = "0x5976C80", VA = "0x5977C80")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape4Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE1")]
		[Address(RVA = "0x5977D20", Offset = "0x5976D20", VA = "0x5977D20")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape4Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE2")]
		[Address(RVA = "0x5977DC0", Offset = "0x5976DC0", VA = "0x5977DC0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__BladeNape4Var3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE3")]
		[Address(RVA = "0x5977E60", Offset = "0x5976E60", VA = "0x5977E60")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShot1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE4")]
		[Address(RVA = "0x5977F00", Offset = "0x5976F00", VA = "0x5977F00")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShot2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE5")]
		[Address(RVA = "0x5977FA0", Offset = "0x5976FA0", VA = "0x5977FA0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShot3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot3): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE6")]
		[Address(RVA = "0x5978040", Offset = "0x5977040", VA = "0x5978040")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShot4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot4): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE7")]
		[Address(RVA = "0x59780E0", Offset = "0x59770E0", VA = "0x59780E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShotDouble1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE8")]
		[Address(RVA = "0x5978180", Offset = "0x5977180", VA = "0x5978180")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSGunShotDouble2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AE9")]
		[Address(RVA = "0x5978220", Offset = "0x5977220", VA = "0x5978220")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape1Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AEA")]
		[Address(RVA = "0x59782C0", Offset = "0x59772C0", VA = "0x59782C0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape1Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AEB")]
		[Address(RVA = "0x5978360", Offset = "0x5977360", VA = "0x5978360")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape2Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AEC")]
		[Address(RVA = "0x5978400", Offset = "0x5977400", VA = "0x5978400")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape2Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AED")]
		[Address(RVA = "0x59784A0", Offset = "0x59774A0", VA = "0x59784A0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape3Var1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AEE")]
		[Address(RVA = "0x5978540", Offset = "0x5977540", VA = "0x5978540")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__AHSSNape3Var2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AEF")]
		[Address(RVA = "0x59785E0", Offset = "0x59775E0", VA = "0x59785E0")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__TSLaunch1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch1): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002AF0")]
		[Address(RVA = "0x5978680", Offset = "0x5977680", VA = "0x5978680")]
		public static CLPropertyBinding<CustomLogicHumanSoundEnum> __CreatePropertyBinding__TSLaunch2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch2): 2 lines keep C-only constructs
			Func<CustomLogicHumanSoundEnum, object> __this;
			CLPropertyBinding<CustomLogicHumanSoundEnum> __this_00;

			__this = new Func<CustomLogicHumanSoundEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80);
			__this_00 = new CLPropertyBinding<CustomLogicHumanSoundEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000624")]
	public static string BladeBreak
	{
		[Token(Token = "0x6002A4D")]
		[Address(RVA = "0x59714F0", Offset = "0x59704F0", VA = "0x59714F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeBreak): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648a == false) {
				Il2CppMethodInitialized_0754648a = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeBreak;
			}
			return *(String*)(typeof(HumanSounds)).static_fields;
		}
	}

	[Token(Token = "0x17000625")]
	public static string BladeHit
	{
		[Token(Token = "0x6002A4E")]
		[Address(RVA = "0x5971560", Offset = "0x5970560", VA = "0x5971560")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648b == false) {
				Il2CppMethodInitialized_0754648b = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeHit;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000626")]
	public static string OldBladeHit
	{
		[Token(Token = "0x6002A4F")]
		[Address(RVA = "0x59715D0", Offset = "0x59705D0", VA = "0x59715D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648c == false) {
				Il2CppMethodInitialized_0754648c = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.OldBladeHit;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000627")]
	public static string NapeHit
	{
		[Token(Token = "0x6002A50")]
		[Address(RVA = "0x5971640", Offset = "0x5970640", VA = "0x5971640")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_NapeHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648d == false) {
				Il2CppMethodInitialized_0754648d = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.NapeHit;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000628")]
	public static string LimbHit
	{
		[Token(Token = "0x6002A51")]
		[Address(RVA = "0x59716B0", Offset = "0x59706B0", VA = "0x59716B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_LimbHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648e == false) {
				Il2CppMethodInitialized_0754648e = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.LimbHit;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000629")]
	public static string OldNapeHit
	{
		[Token(Token = "0x6002A52")]
		[Address(RVA = "0x5971720", Offset = "0x5970720", VA = "0x5971720")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_OldNapeHit): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754648f == false) {
				Il2CppMethodInitialized_0754648f = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.OldNapeHit;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x1700062A")]
	public static string BladeReloadAir
	{
		[Token(Token = "0x6002A53")]
		[Address(RVA = "0x5971790", Offset = "0x5970790", VA = "0x5971790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadAir): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546490 == false) {
				Il2CppMethodInitialized_07546490 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeReloadAir;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x1700062B")]
	public static string BladeReloadGround
	{
		[Token(Token = "0x6002A54")]
		[Address(RVA = "0x5971800", Offset = "0x5970800", VA = "0x5971800")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadGround): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546491 == false) {
				Il2CppMethodInitialized_07546491 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeReloadGround;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x1700062C")]
	public static string GunReload
	{
		[Token(Token = "0x6002A55")]
		[Address(RVA = "0x5971870", Offset = "0x5970870", VA = "0x5971870")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GunReload): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546492 == false) {
				Il2CppMethodInitialized_07546492 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GunReload;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x1700062D")]
	public static string BladeSwing1
	{
		[Token(Token = "0x6002A56")]
		[Address(RVA = "0x59718E0", Offset = "0x59708E0", VA = "0x59718E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546493 == false) {
				Il2CppMethodInitialized_07546493 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeSwing1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x1700062E")]
	public static string BladeSwing2
	{
		[Token(Token = "0x6002A57")]
		[Address(RVA = "0x5971950", Offset = "0x5970950", VA = "0x5971950")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546494 == false) {
				Il2CppMethodInitialized_07546494 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeSwing2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x1700062F")]
	public static string BladeSwing3
	{
		[Token(Token = "0x6002A58")]
		[Address(RVA = "0x59719C0", Offset = "0x59709C0", VA = "0x59719C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546495 == false) {
				Il2CppMethodInitialized_07546495 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeSwing3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x17000630")]
	public static string BladeSwing4
	{
		[Token(Token = "0x6002A59")]
		[Address(RVA = "0x5971A30", Offset = "0x5970A30", VA = "0x5971A30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546496 == false) {
				Il2CppMethodInitialized_07546496 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeSwing4;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x17000631")]
	public static string OldBladeSwing
	{
		[Token(Token = "0x6002A5A")]
		[Address(RVA = "0x5971AA0", Offset = "0x5970AA0", VA = "0x5971AA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeSwing): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546497 == false) {
				Il2CppMethodInitialized_07546497 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.OldBladeSwing;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x17000632")]
	public static string Dodge
	{
		[Token(Token = "0x6002A5B")]
		[Address(RVA = "0x5971B10", Offset = "0x5970B10", VA = "0x5971B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Dodge): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546498 == false) {
				Il2CppMethodInitialized_07546498 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Dodge;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x17000633")]
	public static string FlareLaunch
	{
		[Token(Token = "0x6002A5C")]
		[Address(RVA = "0x5971B80", Offset = "0x5970B80", VA = "0x5971B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_FlareLaunch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546499 == false) {
				Il2CppMethodInitialized_07546499 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.FlareLaunch;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x17000634")]
	public static string ThunderspearLaunch
	{
		[Token(Token = "0x6002A5D")]
		[Address(RVA = "0x5971BF0", Offset = "0x5970BF0", VA = "0x5971BF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_ThunderspearLaunch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649a == false) {
				Il2CppMethodInitialized_0754649a = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.ThunderspearLaunch;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x17000635")]
	public static string GasBurst
	{
		[Token(Token = "0x6002A5E")]
		[Address(RVA = "0x5971C60", Offset = "0x5970C60", VA = "0x5971C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GasBurst): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649b == false) {
				Il2CppMethodInitialized_0754649b = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GasBurst;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x17000636")]
	public static string HookLaunch
	{
		[Token(Token = "0x6002A5F")]
		[Address(RVA = "0x5971CD0", Offset = "0x5970CD0", VA = "0x5971CD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_HookLaunch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649c == false) {
				Il2CppMethodInitialized_0754649c = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.HookLaunch;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x17000637")]
	public static string OldHookLaunch
	{
		[Token(Token = "0x6002A60")]
		[Address(RVA = "0x5971D40", Offset = "0x5970D40", VA = "0x5971D40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_OldHookLaunch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649d == false) {
				Il2CppMethodInitialized_0754649d = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.OldHookLaunch;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x17000638")]
	public static string HookRetractLeft
	{
		[Token(Token = "0x6002A61")]
		[Address(RVA = "0x5971DB0", Offset = "0x5970DB0", VA = "0x5971DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractLeft): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649e == false) {
				Il2CppMethodInitialized_0754649e = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.HookRetractLeft;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x17000639")]
	public static string HookRetractRight
	{
		[Token(Token = "0x6002A62")]
		[Address(RVA = "0x5971E20", Offset = "0x5970E20", VA = "0x5971E20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractRight): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754649f == false) {
				Il2CppMethodInitialized_0754649f = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.HookRetractRight;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x1700063A")]
	public static string HookImpact
	{
		[Token(Token = "0x6002A63")]
		[Address(RVA = "0x5971E90", Offset = "0x5970E90", VA = "0x5971E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpact): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a0 == false) {
				Il2CppMethodInitialized_075464a0 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.HookImpact;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x1700063B")]
	public static string HookImpactLoud
	{
		[Token(Token = "0x6002A64")]
		[Address(RVA = "0x5971F00", Offset = "0x5970F00", VA = "0x5971F00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpactLoud): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a1 == false) {
				Il2CppMethodInitialized_075464a1 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.HookImpactLoud;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x1700063C")]
	public static string GasStart
	{
		[Token(Token = "0x6002A65")]
		[Address(RVA = "0x5971F70", Offset = "0x5970F70", VA = "0x5971F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GasStart): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a2 == false) {
				Il2CppMethodInitialized_075464a2 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GasStart;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x1700063D")]
	public static string GasLoop
	{
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x5971FE0", Offset = "0x5970FE0", VA = "0x5971FE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GasLoop): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a3 == false) {
				Il2CppMethodInitialized_075464a3 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GasLoop;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 200);
		}
	}

	[Token(Token = "0x1700063E")]
	public static string GasEnd
	{
		[Token(Token = "0x6002A67")]
		[Address(RVA = "0x5972050", Offset = "0x5971050", VA = "0x5972050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GasEnd): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a4 == false) {
				Il2CppMethodInitialized_075464a4 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GasEnd;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x1700063F")]
	public static string ReelIn
	{
		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x59720C0", Offset = "0x59710C0", VA = "0x59720C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_ReelIn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a5 == false) {
				Il2CppMethodInitialized_075464a5 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.ReelIn;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x17000640")]
	public static string ReelOut
	{
		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x5972130", Offset = "0x5971130", VA = "0x5972130")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_ReelOut): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a6 == false) {
				Il2CppMethodInitialized_075464a6 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.ReelOut;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xe0);
		}
	}

	[Token(Token = "0x17000641")]
	public static string CrashLand
	{
		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x59721A0", Offset = "0x59711A0", VA = "0x59721A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_CrashLand): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a7 == false) {
				Il2CppMethodInitialized_075464a7 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.CrashLand;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xe8);
		}
	}

	[Token(Token = "0x17000642")]
	public static string Jump
	{
		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x5972210", Offset = "0x5971210", VA = "0x5972210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Jump): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a8 == false) {
				Il2CppMethodInitialized_075464a8 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Jump;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xf0);
		}
	}

	[Token(Token = "0x17000643")]
	public static string Land
	{
		[Token(Token = "0x6002A6C")]
		[Address(RVA = "0x5972280", Offset = "0x5971280", VA = "0x5972280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Land): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464a9 == false) {
				Il2CppMethodInitialized_075464a9 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Land;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0xf8);
		}
	}

	[Token(Token = "0x17000644")]
	public static string NoGas
	{
		[Token(Token = "0x6002A6D")]
		[Address(RVA = "0x59722F0", Offset = "0x59712F0", VA = "0x59722F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_NoGas): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464aa == false) {
				Il2CppMethodInitialized_075464aa = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.NoGas;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x100);
		}
	}

	[Token(Token = "0x17000645")]
	public static string Refill
	{
		[Token(Token = "0x6002A6E")]
		[Address(RVA = "0x5972360", Offset = "0x5971360", VA = "0x5972360")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Refill): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ab == false) {
				Il2CppMethodInitialized_075464ab = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Refill;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x108);
		}
	}

	[Token(Token = "0x17000646")]
	public static string Slide
	{
		[Token(Token = "0x6002A6F")]
		[Address(RVA = "0x59723D0", Offset = "0x59713D0", VA = "0x59723D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Slide): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ac == false) {
				Il2CppMethodInitialized_075464ac = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Slide;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x110);
		}
	}

	[Token(Token = "0x17000647")]
	public static string Footstep1
	{
		[Token(Token = "0x6002A70")]
		[Address(RVA = "0x5972440", Offset = "0x5971440", VA = "0x5972440")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ad == false) {
				Il2CppMethodInitialized_075464ad = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Footstep1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x118);
		}
	}

	[Token(Token = "0x17000648")]
	public static string Footstep2
	{
		[Token(Token = "0x6002A71")]
		[Address(RVA = "0x59724B0", Offset = "0x59714B0", VA = "0x59724B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ae == false) {
				Il2CppMethodInitialized_075464ae = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Footstep2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x120);
		}
	}

	[Token(Token = "0x17000649")]
	public static string Death1
	{
		[Token(Token = "0x6002A72")]
		[Address(RVA = "0x5972520", Offset = "0x5971520", VA = "0x5972520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Death1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464af == false) {
				Il2CppMethodInitialized_075464af = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Death1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x128);
		}
	}

	[Token(Token = "0x1700064A")]
	public static string Death2
	{
		[Token(Token = "0x6002A73")]
		[Address(RVA = "0x5972590", Offset = "0x5971590", VA = "0x5972590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Death2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b0 == false) {
				Il2CppMethodInitialized_075464b0 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Death2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x130);
		}
	}

	[Token(Token = "0x1700064B")]
	public static string Death3
	{
		[Token(Token = "0x6002A74")]
		[Address(RVA = "0x5972600", Offset = "0x5971600", VA = "0x5972600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Death3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b1 == false) {
				Il2CppMethodInitialized_075464b1 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Death3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x138);
		}
	}

	[Token(Token = "0x1700064C")]
	public static string Death4
	{
		[Token(Token = "0x6002A75")]
		[Address(RVA = "0x5972670", Offset = "0x5971670", VA = "0x5972670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Death4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b2 == false) {
				Il2CppMethodInitialized_075464b2 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Death4;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x140);
		}
	}

	[Token(Token = "0x1700064D")]
	public static string Death5
	{
		[Token(Token = "0x6002A76")]
		[Address(RVA = "0x59726E0", Offset = "0x59716E0", VA = "0x59726E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Death5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b3 == false) {
				Il2CppMethodInitialized_075464b3 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Death5;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x148);
		}
	}

	[Token(Token = "0x1700064E")]
	public static string Checkpoint
	{
		[Token(Token = "0x6002A77")]
		[Address(RVA = "0x5972750", Offset = "0x5971750", VA = "0x5972750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Checkpoint): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b4 == false) {
				Il2CppMethodInitialized_075464b4 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Checkpoint;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x150);
		}
	}

	[Token(Token = "0x1700064F")]
	public static string TimerTick
	{
		[Token(Token = "0x6002A78")]
		[Address(RVA = "0x59727C0", Offset = "0x59717C0", VA = "0x59727C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_TimerTick): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b5 == false) {
				Il2CppMethodInitialized_075464b5 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.TimerTick;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x158);
		}
	}

	[Token(Token = "0x17000650")]
	public static string TimerGo
	{
		[Token(Token = "0x6002A79")]
		[Address(RVA = "0x5972830", Offset = "0x5971830", VA = "0x5972830")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_TimerGo): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b6 == false) {
				Il2CppMethodInitialized_075464b6 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.TimerGo;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x160);
		}
	}

	[Token(Token = "0x17000651")]
	public static string GunExplode
	{
		[Token(Token = "0x6002A7A")]
		[Address(RVA = "0x59728A0", Offset = "0x59718A0", VA = "0x59728A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplode): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b7 == false) {
				Il2CppMethodInitialized_075464b7 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GunExplode;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x168);
		}
	}

	[Token(Token = "0x17000652")]
	public static string GunExplodeLoud
	{
		[Token(Token = "0x6002A7B")]
		[Address(RVA = "0x5972910", Offset = "0x5971910", VA = "0x5972910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplodeLoud): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b8 == false) {
				Il2CppMethodInitialized_075464b8 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.GunExplodeLoud;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x170);
		}
	}

	[Token(Token = "0x17000653")]
	public static string WaterSplash
	{
		[Token(Token = "0x6002A7C")]
		[Address(RVA = "0x5972980", Offset = "0x5971980", VA = "0x5972980")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_WaterSplash): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464b9 == false) {
				Il2CppMethodInitialized_075464b9 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.WaterSplash;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x178);
		}
	}

	[Token(Token = "0x17000654")]
	public static string Switchback
	{
		[Token(Token = "0x6002A7D")]
		[Address(RVA = "0x59729F0", Offset = "0x59719F0", VA = "0x59729F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_Switchback): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ba == false) {
				Il2CppMethodInitialized_075464ba = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.Switchback;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x180);
		}
	}

	[Token(Token = "0x17000655")]
	public static string APGShot1
	{
		[Token(Token = "0x6002A7E")]
		[Address(RVA = "0x5972A60", Offset = "0x5971A60", VA = "0x5972A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464bb == false) {
				Il2CppMethodInitialized_075464bb = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.APGShot1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x188);
		}
	}

	[Token(Token = "0x17000656")]
	public static string APGShot2
	{
		[Token(Token = "0x6002A7F")]
		[Address(RVA = "0x5972AD0", Offset = "0x5971AD0", VA = "0x5972AD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464bc == false) {
				Il2CppMethodInitialized_075464bc = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.APGShot2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 400);
		}
	}

	[Token(Token = "0x17000657")]
	public static string APGShot3
	{
		[Token(Token = "0x6002A80")]
		[Address(RVA = "0x5972B40", Offset = "0x5971B40", VA = "0x5972B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464bd == false) {
				Il2CppMethodInitialized_075464bd = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.APGShot3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x198);
		}
	}

	[Token(Token = "0x17000658")]
	public static string APGShot4
	{
		[Token(Token = "0x6002A81")]
		[Address(RVA = "0x5972BB0", Offset = "0x5971BB0", VA = "0x5972BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464be == false) {
				Il2CppMethodInitialized_075464be = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.APGShot4;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1a0);
		}
	}

	[Token(Token = "0x17000659")]
	public static string BladeNape1Var1
	{
		[Token(Token = "0x6002A82")]
		[Address(RVA = "0x5972C20", Offset = "0x5971C20", VA = "0x5972C20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464bf == false) {
				Il2CppMethodInitialized_075464bf = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape1Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1a8);
		}
	}

	[Token(Token = "0x1700065A")]
	public static string BladeNape1Var2
	{
		[Token(Token = "0x6002A83")]
		[Address(RVA = "0x5972C90", Offset = "0x5971C90", VA = "0x5972C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c0 == false) {
				Il2CppMethodInitialized_075464c0 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape1Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1b0);
		}
	}

	[Token(Token = "0x1700065B")]
	public static string BladeNape1Var3
	{
		[Token(Token = "0x6002A84")]
		[Address(RVA = "0x5972D00", Offset = "0x5971D00", VA = "0x5972D00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c1 == false) {
				Il2CppMethodInitialized_075464c1 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape1Var3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1b8);
		}
	}

	[Token(Token = "0x1700065C")]
	public static string BladeNape2Var1
	{
		[Token(Token = "0x6002A85")]
		[Address(RVA = "0x5972D70", Offset = "0x5971D70", VA = "0x5972D70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c2 == false) {
				Il2CppMethodInitialized_075464c2 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape2Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1c0);
		}
	}

	[Token(Token = "0x1700065D")]
	public static string BladeNape2Var2
	{
		[Token(Token = "0x6002A86")]
		[Address(RVA = "0x5972DE0", Offset = "0x5971DE0", VA = "0x5972DE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c3 == false) {
				Il2CppMethodInitialized_075464c3 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape2Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1c8);
		}
	}

	[Token(Token = "0x1700065E")]
	public static string BladeNape2Var3
	{
		[Token(Token = "0x6002A87")]
		[Address(RVA = "0x5972E50", Offset = "0x5971E50", VA = "0x5972E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c4 == false) {
				Il2CppMethodInitialized_075464c4 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape2Var3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1d0);
		}
	}

	[Token(Token = "0x1700065F")]
	public static string BladeNape3Var1
	{
		[Token(Token = "0x6002A88")]
		[Address(RVA = "0x5972EC0", Offset = "0x5971EC0", VA = "0x5972EC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c5 == false) {
				Il2CppMethodInitialized_075464c5 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape3Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1d8);
		}
	}

	[Token(Token = "0x17000660")]
	public static string BladeNape3Var2
	{
		[Token(Token = "0x6002A89")]
		[Address(RVA = "0x5972F30", Offset = "0x5971F30", VA = "0x5972F30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c6 == false) {
				Il2CppMethodInitialized_075464c6 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape3Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1e0);
		}
	}

	[Token(Token = "0x17000661")]
	public static string BladeNape3Var3
	{
		[Token(Token = "0x6002A8A")]
		[Address(RVA = "0x5972FA0", Offset = "0x5971FA0", VA = "0x5972FA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c7 == false) {
				Il2CppMethodInitialized_075464c7 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape3Var3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1e8);
		}
	}

	[Token(Token = "0x17000662")]
	public static string BladeNape4Var1
	{
		[Token(Token = "0x6002A8B")]
		[Address(RVA = "0x5973010", Offset = "0x5972010", VA = "0x5973010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c8 == false) {
				Il2CppMethodInitialized_075464c8 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape4Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1f0);
		}
	}

	[Token(Token = "0x17000663")]
	public static string BladeNape4Var2
	{
		[Token(Token = "0x6002A8C")]
		[Address(RVA = "0x5973080", Offset = "0x5972080", VA = "0x5973080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464c9 == false) {
				Il2CppMethodInitialized_075464c9 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape4Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x1f8);
		}
	}

	[Token(Token = "0x17000664")]
	public static string BladeNape4Var3
	{
		[Token(Token = "0x6002A8D")]
		[Address(RVA = "0x59730F0", Offset = "0x59720F0", VA = "0x59730F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ca == false) {
				Il2CppMethodInitialized_075464ca = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.BladeNape4Var3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x200);
		}
	}

	[Token(Token = "0x17000665")]
	public static string AHSSGunShot1
	{
		[Token(Token = "0x6002A8E")]
		[Address(RVA = "0x5973160", Offset = "0x5972160", VA = "0x5973160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464cb == false) {
				Il2CppMethodInitialized_075464cb = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShot1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x208);
		}
	}

	[Token(Token = "0x17000666")]
	public static string AHSSGunShot2
	{
		[Token(Token = "0x6002A8F")]
		[Address(RVA = "0x59731D0", Offset = "0x59721D0", VA = "0x59731D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464cc == false) {
				Il2CppMethodInitialized_075464cc = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShot2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x210);
		}
	}

	[Token(Token = "0x17000667")]
	public static string AHSSGunShot3
	{
		[Token(Token = "0x6002A90")]
		[Address(RVA = "0x5973240", Offset = "0x5972240", VA = "0x5973240")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464cd == false) {
				Il2CppMethodInitialized_075464cd = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShot3;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x218);
		}
	}

	[Token(Token = "0x17000668")]
	public static string AHSSGunShot4
	{
		[Token(Token = "0x6002A91")]
		[Address(RVA = "0x59732B0", Offset = "0x59722B0", VA = "0x59732B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464ce == false) {
				Il2CppMethodInitialized_075464ce = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShot4;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x220);
		}
	}

	[Token(Token = "0x17000669")]
	public static string AHSSGunShotDouble1
	{
		[Token(Token = "0x6002A92")]
		[Address(RVA = "0x5973320", Offset = "0x5972320", VA = "0x5973320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464cf == false) {
				Il2CppMethodInitialized_075464cf = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShotDouble1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x228);
		}
	}

	[Token(Token = "0x1700066A")]
	public static string AHSSGunShotDouble2
	{
		[Token(Token = "0x6002A93")]
		[Address(RVA = "0x5973390", Offset = "0x5972390", VA = "0x5973390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d0 == false) {
				Il2CppMethodInitialized_075464d0 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSGunShotDouble2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x230);
		}
	}

	[Token(Token = "0x1700066B")]
	public static string AHSSNape1Var1
	{
		[Token(Token = "0x6002A94")]
		[Address(RVA = "0x5973400", Offset = "0x5972400", VA = "0x5973400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d1 == false) {
				Il2CppMethodInitialized_075464d1 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape1Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x238);
		}
	}

	[Token(Token = "0x1700066C")]
	public static string AHSSNape1Var2
	{
		[Token(Token = "0x6002A95")]
		[Address(RVA = "0x5973470", Offset = "0x5972470", VA = "0x5973470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d2 == false) {
				Il2CppMethodInitialized_075464d2 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape1Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x240);
		}
	}

	[Token(Token = "0x1700066D")]
	public static string AHSSNape2Var1
	{
		[Token(Token = "0x6002A96")]
		[Address(RVA = "0x59734E0", Offset = "0x59724E0", VA = "0x59734E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d3 == false) {
				Il2CppMethodInitialized_075464d3 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape2Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x248);
		}
	}

	[Token(Token = "0x1700066E")]
	public static string AHSSNape2Var2
	{
		[Token(Token = "0x6002A97")]
		[Address(RVA = "0x5973550", Offset = "0x5972550", VA = "0x5973550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d4 == false) {
				Il2CppMethodInitialized_075464d4 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape2Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x250);
		}
	}

	[Token(Token = "0x1700066F")]
	public static string AHSSNape3Var1
	{
		[Token(Token = "0x6002A98")]
		[Address(RVA = "0x59735C0", Offset = "0x59725C0", VA = "0x59735C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d5 == false) {
				Il2CppMethodInitialized_075464d5 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape3Var1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 600);
		}
	}

	[Token(Token = "0x17000670")]
	public static string AHSSNape3Var2
	{
		[Token(Token = "0x6002A99")]
		[Address(RVA = "0x5973630", Offset = "0x5972630", VA = "0x5973630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d6 == false) {
				Il2CppMethodInitialized_075464d6 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.AHSSNape3Var2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x260);
		}
	}

	[Token(Token = "0x17000671")]
	public static string TSLaunch1
	{
		[Token(Token = "0x6002A9A")]
		[Address(RVA = "0x59736A0", Offset = "0x59726A0", VA = "0x59736A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d7 == false) {
				Il2CppMethodInitialized_075464d7 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.TSLaunch1;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x268);
		}
	}

	[Token(Token = "0x17000672")]
	public static string TSLaunch2
	{
		[Token(Token = "0x6002A9B")]
		[Address(RVA = "0x5973710", Offset = "0x5972710", VA = "0x5973710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075464d8 == false) {
				Il2CppMethodInitialized_075464d8 = true;
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanSounds.TSLaunch2;
			}
			return *(String*)((long)(typeof(HumanSounds)).static_fields + 0x270);
		}
	}

	[Token(Token = "0x17000673")]
	public override string ClassName
	{
		[Token(Token = "0x6002A9C")]
		[Address(RVA = "0x5973780", Offset = "0x5972780", VA = "0x5973780", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_ClassName): clean
			return "HumanSoundEnum";
		}
	}

	[Token(Token = "0x17000674")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002A9D")]
		[Address(RVA = "0x59737B0", Offset = "0x59727B0", VA = "0x59737B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000675")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002A9E")]
		[Address(RVA = "0x59737C0", Offset = "0x59727C0", VA = "0x59737C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000676")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002A9F")]
		[Address(RVA = "0x59737D0", Offset = "0x59727D0", VA = "0x59737D0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x5971480", Offset = "0x5970480", VA = "0x5971480")]
	public CustomLogicHumanSoundEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c (CustomLogic.CustomLogicHumanSoundEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546489 == false) {
			Il2CppMethodInitialized_07546489 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHumanSoundEnum.c.

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"BladeBreak");
		__this.Add((Il2CppObject *)"BladeHit");
		__this.Add((Il2CppObject *)"OldBladeHit");
		__this.Add((Il2CppObject *)"NapeHit");
		__this.Add((Il2CppObject *)"LimbHit");
		__this.Add((Il2CppObject *)"OldNapeHit");
		__this.Add((Il2CppObject *)"BladeReloadAir");
		__this.Add((Il2CppObject *)"BladeReloadGround");
		__this.Add((Il2CppObject *)"GunReload");
		__this.Add((Il2CppObject *)"BladeSwing1");
		__this.Add((Il2CppObject *)"BladeSwing2");
		__this.Add((Il2CppObject *)"BladeSwing3");
		__this.Add((Il2CppObject *)"BladeSwing4");
		__this.Add((Il2CppObject *)"OldBladeSwing");
		__this.Add((Il2CppObject *)"Dodge");
		__this.Add((Il2CppObject *)"FlareLaunch");
		__this.Add((Il2CppObject *)"ThunderspearLaunch");
		__this.Add((Il2CppObject *)"GasBurst");
		__this.Add((Il2CppObject *)"HookLaunch");
		__this.Add((Il2CppObject *)"OldHookLaunch");
		__this.Add((Il2CppObject *)"HookRetractLeft");
		__this.Add((Il2CppObject *)"HookRetractRight");
		__this.Add((Il2CppObject *)"HookImpact");
		__this.Add((Il2CppObject *)"HookImpactLoud");
		__this.Add((Il2CppObject *)"GasStart");
		__this.Add((Il2CppObject *)"GasLoop");
		__this.Add((Il2CppObject *)"GasEnd");
		__this.Add((Il2CppObject *)"ReelIn");
		__this.Add((Il2CppObject *)"ReelOut");
		__this.Add((Il2CppObject *)"CrashLand");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"NoGas");
		__this.Add((Il2CppObject *)"Refill");
		__this.Add((Il2CppObject *)"Slide");
		__this.Add((Il2CppObject *)"Footstep1");
		__this.Add((Il2CppObject *)"Footstep2");
		__this.Add((Il2CppObject *)"Death1");
		__this.Add((Il2CppObject *)"Death2");
		__this.Add((Il2CppObject *)"Death3");
		__this.Add((Il2CppObject *)"Death4");
		__this.Add((Il2CppObject *)"Death5");
		__this.Add((Il2CppObject *)"Checkpoint");
		__this.Add((Il2CppObject *)"TimerTick");
		__this.Add((Il2CppObject *)"TimerGo");
		__this.Add((Il2CppObject *)"GunExplode");
		__this.Add((Il2CppObject *)"GunExplodeLoud");
		__this.Add((Il2CppObject *)"WaterSplash");
		__this.Add((Il2CppObject *)"Switchback");
		__this.Add((Il2CppObject *)"APGShot1");
		__this.Add((Il2CppObject *)"APGShot2");
		__this.Add((Il2CppObject *)"APGShot3");
		__this.Add((Il2CppObject *)"APGShot4");
		__this.Add((Il2CppObject *)"BladeNape1Var1");
		__this.Add((Il2CppObject *)"BladeNape1Var2");
		__this.Add((Il2CppObject *)"BladeNape1Var3");
		__this.Add((Il2CppObject *)"BladeNape2Var1");
		__this.Add((Il2CppObject *)"BladeNape2Var2");
		__this.Add((Il2CppObject *)"BladeNape2Var3");
		__this.Add((Il2CppObject *)"BladeNape3Var1");
		__this.Add((Il2CppObject *)"BladeNape3Var2");
		__this.Add((Il2CppObject *)"BladeNape3Var3");
		__this.Add((Il2CppObject *)"BladeNape4Var1");
		__this.Add((Il2CppObject *)"BladeNape4Var2");
		__this.Add((Il2CppObject *)"BladeNape4Var3");
		__this.Add((Il2CppObject *)"AHSSGunShot1");
		__this.Add((Il2CppObject *)"AHSSGunShot2");
		__this.Add((Il2CppObject *)"AHSSGunShot3");
		__this.Add((Il2CppObject *)"AHSSGunShot4");
		__this.Add((Il2CppObject *)"AHSSGunShotDouble1");
		__this.Add((Il2CppObject *)"AHSSGunShotDouble2");
		__this.Add((Il2CppObject *)"AHSSNape1Var1");
		__this.Add((Il2CppObject *)"AHSSNape1Var2");
		__this.Add((Il2CppObject *)"AHSSNape2Var1");
		__this.Add((Il2CppObject *)"AHSSNape2Var2");
		__this.Add((Il2CppObject *)"AHSSNape3Var1");
		__this.Add((Il2CppObject *)"AHSSNape3Var2");
		__this.Add((Il2CppObject *)"TSLaunch1");
		__this.Add((Il2CppObject *)"TSLaunch2");
		CustomLogicHumanSoundEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeBreak>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__BladeBreak_g____getter_2_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465fc == false) {
			Il2CppMethodInitialized_075465fc = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeBreak;
		}
		return *(object*)(typeof(HumanSounds)).static_fields;
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeHit>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__BladeHit_g____getter_3_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465fd == false) {
			Il2CppMethodInitialized_075465fd = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeHit;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeHit>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__OldBladeHit_g____getter_4_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465fe == false) {
			Il2CppMethodInitialized_075465fe = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.OldBladeHit;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NapeHit>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__NapeHit_g____getter_5_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ff == false) {
			Il2CppMethodInitialized_075465ff = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.NapeHit;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__LimbHit>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__LimbHit_g____getter_6_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546600 == false) {
			Il2CppMethodInitialized_07546600 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.LimbHit;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldNapeHit>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__OldNapeHit_g____getter_7_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546601 == false) {
			Il2CppMethodInitialized_07546601 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.OldNapeHit;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadAir>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__BladeReloadAir_g____getter_8_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546602 == false) {
			Il2CppMethodInitialized_07546602 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeReloadAir;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadGround>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__BladeReloadGround_g____getter_9_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546603 == false) {
			Il2CppMethodInitialized_07546603 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeReloadGround;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunReload>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__GunReload_g____getter_10_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546604 == false) {
			Il2CppMethodInitialized_07546604 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GunReload;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing1>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__BladeSwing1_g____getter_11_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546605 == false) {
			Il2CppMethodInitialized_07546605 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeSwing1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing2>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__BladeSwing2_g____getter_12_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546606 == false) {
			Il2CppMethodInitialized_07546606 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeSwing2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing3>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__BladeSwing3_g____getter_13_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546607 == false) {
			Il2CppMethodInitialized_07546607 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeSwing3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing4>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__BladeSwing4_g____getter_14_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546608 == false) {
			Il2CppMethodInitialized_07546608 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeSwing4;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeSwing>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__OldBladeSwing_g____getter_15_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546609 == false) {
			Il2CppMethodInitialized_07546609 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.OldBladeSwing;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Dodge_g____getter_16_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660a == false) {
			Il2CppMethodInitialized_0754660a = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Dodge;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__FlareLaunch>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__FlareLaunch_g____getter_17_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660b == false) {
			Il2CppMethodInitialized_0754660b = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.FlareLaunch;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ThunderspearLaunch>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660c == false) {
			Il2CppMethodInitialized_0754660c = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.ThunderspearLaunch;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__GasBurst_g____getter_19_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660d == false) {
			Il2CppMethodInitialized_0754660d = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GasBurst;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookLaunch>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__HookLaunch_g____getter_20_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660e == false) {
			Il2CppMethodInitialized_0754660e = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.HookLaunch;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldHookLaunch>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__OldHookLaunch_g____getter_21_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754660f == false) {
			Il2CppMethodInitialized_0754660f = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.OldHookLaunch;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractLeft>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__HookRetractLeft_g____getter_22_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546610 == false) {
			Il2CppMethodInitialized_07546610 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.HookRetractLeft;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractRight>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__HookRetractRight_g____getter_23_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546611 == false) {
			Il2CppMethodInitialized_07546611 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.HookRetractRight;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpact>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__HookImpact_g____getter_24_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546612 == false) {
			Il2CppMethodInitialized_07546612 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.HookImpact;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpactLoud>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__HookImpactLoud_g____getter_25_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546613 == false) {
			Il2CppMethodInitialized_07546613 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.HookImpactLoud;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasStart>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__GasStart_g____getter_26_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546614 == false) {
			Il2CppMethodInitialized_07546614 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GasStart;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasLoop>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__GasLoop_g____getter_27_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546615 == false) {
			Il2CppMethodInitialized_07546615 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GasLoop;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 200);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasEnd>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__GasEnd_g____getter_28_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546616 == false) {
			Il2CppMethodInitialized_07546616 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GasEnd;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__ReelIn_g____getter_29_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546617 == false) {
			Il2CppMethodInitialized_07546617 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.ReelIn;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__ReelOut_g____getter_30_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546618 == false) {
			Il2CppMethodInitialized_07546618 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.ReelOut;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xe0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__CrashLand>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__CrashLand_g____getter_31_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546619 == false) {
			Il2CppMethodInitialized_07546619 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.CrashLand;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xe8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_32_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661a == false) {
			Il2CppMethodInitialized_0754661a = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Jump;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xf0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_33_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661b == false) {
			Il2CppMethodInitialized_0754661b = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Land;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0xf8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NoGas>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__NoGas_g____getter_34_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661c == false) {
			Il2CppMethodInitialized_0754661c = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.NoGas;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x100);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__Refill_g____getter_35_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661d == false) {
			Il2CppMethodInitialized_0754661d = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Refill;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x108);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|36_0: clean
	private static object Bindings____CreatePropertyBinding__Slide_g____getter_36_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661e == false) {
			Il2CppMethodInitialized_0754661e = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Slide;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x110);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__Footstep1_g____getter_37_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754661f == false) {
			Il2CppMethodInitialized_0754661f = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Footstep1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x118);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|38_0: clean
	private static object Bindings____CreatePropertyBinding__Footstep2_g____getter_38_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546620 == false) {
			Il2CppMethodInitialized_07546620 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Footstep2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x120);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death1>g____getter|39_0: clean
	private static object Bindings____CreatePropertyBinding__Death1_g____getter_39_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546621 == false) {
			Il2CppMethodInitialized_07546621 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Death1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x128);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death2>g____getter|40_0: clean
	private static object Bindings____CreatePropertyBinding__Death2_g____getter_40_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546622 == false) {
			Il2CppMethodInitialized_07546622 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Death2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x130);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death3>g____getter|41_0: clean
	private static object Bindings____CreatePropertyBinding__Death3_g____getter_41_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546623 == false) {
			Il2CppMethodInitialized_07546623 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Death3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x138);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death4>g____getter|42_0: clean
	private static object Bindings____CreatePropertyBinding__Death4_g____getter_42_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546624 == false) {
			Il2CppMethodInitialized_07546624 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Death4;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x140);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death5>g____getter|43_0: clean
	private static object Bindings____CreatePropertyBinding__Death5_g____getter_43_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546625 == false) {
			Il2CppMethodInitialized_07546625 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Death5;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x148);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Checkpoint>g____getter|44_0: clean
	private static object Bindings____CreatePropertyBinding__Checkpoint_g____getter_44_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546626 == false) {
			Il2CppMethodInitialized_07546626 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Checkpoint;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x150);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerTick>g____getter|45_0: clean
	private static object Bindings____CreatePropertyBinding__TimerTick_g____getter_45_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546627 == false) {
			Il2CppMethodInitialized_07546627 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.TimerTick;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x158);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerGo>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__TimerGo_g____getter_46_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546628 == false) {
			Il2CppMethodInitialized_07546628 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.TimerGo;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x160);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|47_0: clean
	private static object Bindings____CreatePropertyBinding__GunExplode_g____getter_47_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546629 == false) {
			Il2CppMethodInitialized_07546629 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GunExplode;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x168);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplodeLoud>g____getter|48_0: clean
	private static object Bindings____CreatePropertyBinding__GunExplodeLoud_g____getter_48_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662a == false) {
			Il2CppMethodInitialized_0754662a = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.GunExplodeLoud;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x170);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__WaterSplash>g____getter|49_0: clean
	private static object Bindings____CreatePropertyBinding__WaterSplash_g____getter_49_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662b == false) {
			Il2CppMethodInitialized_0754662b = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.WaterSplash;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x178);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|50_0: clean
	private static object Bindings____CreatePropertyBinding__Switchback_g____getter_50_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662c == false) {
			Il2CppMethodInitialized_0754662c = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.Switchback;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x180);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot1>g____getter|51_0: clean
	private static object Bindings____CreatePropertyBinding__APGShot1_g____getter_51_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662d == false) {
			Il2CppMethodInitialized_0754662d = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.APGShot1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x188);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot2>g____getter|52_0: clean
	private static object Bindings____CreatePropertyBinding__APGShot2_g____getter_52_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662e == false) {
			Il2CppMethodInitialized_0754662e = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.APGShot2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 400);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot3>g____getter|53_0: clean
	private static object Bindings____CreatePropertyBinding__APGShot3_g____getter_53_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754662f == false) {
			Il2CppMethodInitialized_0754662f = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.APGShot3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x198);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot4>g____getter|54_0: clean
	private static object Bindings____CreatePropertyBinding__APGShot4_g____getter_54_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546630 == false) {
			Il2CppMethodInitialized_07546630 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.APGShot4;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1a0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var1>g____getter|55_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape1Var1_g____getter_55_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546631 == false) {
			Il2CppMethodInitialized_07546631 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape1Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1a8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var2>g____getter|56_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape1Var2_g____getter_56_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546632 == false) {
			Il2CppMethodInitialized_07546632 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape1Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1b0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var3>g____getter|57_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape1Var3_g____getter_57_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546633 == false) {
			Il2CppMethodInitialized_07546633 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape1Var3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1b8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var1>g____getter|58_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape2Var1_g____getter_58_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546634 == false) {
			Il2CppMethodInitialized_07546634 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape2Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1c0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var2>g____getter|59_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape2Var2_g____getter_59_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546635 == false) {
			Il2CppMethodInitialized_07546635 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape2Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1c8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var3>g____getter|60_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape2Var3_g____getter_60_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546636 == false) {
			Il2CppMethodInitialized_07546636 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape2Var3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1d0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var1>g____getter|61_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape3Var1_g____getter_61_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546637 == false) {
			Il2CppMethodInitialized_07546637 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape3Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1d8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var2>g____getter|62_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape3Var2_g____getter_62_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546638 == false) {
			Il2CppMethodInitialized_07546638 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape3Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1e0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var3>g____getter|63_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape3Var3_g____getter_63_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546639 == false) {
			Il2CppMethodInitialized_07546639 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape3Var3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1e8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var1>g____getter|64_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape4Var1_g____getter_64_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663a == false) {
			Il2CppMethodInitialized_0754663a = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape4Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1f0);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var2>g____getter|65_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape4Var2_g____getter_65_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663b == false) {
			Il2CppMethodInitialized_0754663b = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape4Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x1f8);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var3>g____getter|66_0: clean
	private static object Bindings____CreatePropertyBinding__BladeNape4Var3_g____getter_66_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663c == false) {
			Il2CppMethodInitialized_0754663c = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.BladeNape4Var3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x200);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot1>g____getter|67_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShot1_g____getter_67_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663d == false) {
			Il2CppMethodInitialized_0754663d = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShot1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x208);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot2>g____getter|68_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShot2_g____getter_68_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663e == false) {
			Il2CppMethodInitialized_0754663e = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShot2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x210);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot3>g____getter|69_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShot3_g____getter_69_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754663f == false) {
			Il2CppMethodInitialized_0754663f = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShot3;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x218);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot4>g____getter|70_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShot4_g____getter_70_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546640 == false) {
			Il2CppMethodInitialized_07546640 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShot4;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x220);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter|71_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_71_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546641 == false) {
			Il2CppMethodInitialized_07546641 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShotDouble1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x228);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter|72_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_72_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546642 == false) {
			Il2CppMethodInitialized_07546642 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSGunShotDouble2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x230);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var1>g____getter|73_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape1Var1_g____getter_73_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546643 == false) {
			Il2CppMethodInitialized_07546643 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape1Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x238);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var2>g____getter|74_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape1Var2_g____getter_74_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546644 == false) {
			Il2CppMethodInitialized_07546644 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape1Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x240);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var1>g____getter|75_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape2Var1_g____getter_75_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546645 == false) {
			Il2CppMethodInitialized_07546645 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape2Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x248);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var2>g____getter|76_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape2Var2_g____getter_76_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546646 == false) {
			Il2CppMethodInitialized_07546646 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape2Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x250);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var1>g____getter|77_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape3Var1_g____getter_77_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546647 == false) {
			Il2CppMethodInitialized_07546647 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape3Var1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 600);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var2>g____getter|78_0: clean
	private static object Bindings____CreatePropertyBinding__AHSSNape3Var2_g____getter_78_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546648 == false) {
			Il2CppMethodInitialized_07546648 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.AHSSNape3Var2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x260);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch1>g____getter|79_0: clean
	private static object Bindings____CreatePropertyBinding__TSLaunch1_g____getter_79_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546649 == false) {
			Il2CppMethodInitialized_07546649 = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.TSLaunch1;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x268);
	}

	// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch2>g____getter|80_0: clean
	private static object Bindings____CreatePropertyBinding__TSLaunch2_g____getter_80_0(CustomLogicHumanSoundEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754664a == false) {
			Il2CppMethodInitialized_0754664a = true;
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanSounds.TSLaunch2;
		}
		return *(object*)((long)(typeof(HumanSounds)).static_fields + 0x270);
	}
}
