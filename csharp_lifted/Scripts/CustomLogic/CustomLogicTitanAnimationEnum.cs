// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTitanAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000587")]
[CompilerGenerated]
internal class CustomLogicTitanAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000588")]
	public static class Factory
	{
		[Token(Token = "0x600317E")]
		[Address(RVA = "0x59B2150", Offset = "0x59B1150", VA = "0x59B2150")]
		public static CustomLogicTitanAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTitanAnimationEnum();
			return (CustomLogicTitanAnimationEnum)__this;
		}
	}

	[Token(Token = "0x2000589")]
	public static class Bindings
	{
		[Token(Token = "0x4001890")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600317F")]
		[Address(RVA = "0x59B2270", Offset = "0x59B1270", VA = "0x59B2270")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7cdffe18) {
				if (uVar2 < 0x3a2d364f) {
					if (uVar2 < 0x132daa60) {
						if (uVar2 < 0xcb00c2e) {
							if (uVar2 < 0x87de46c) {
								if (uVar2 == 0x4aec3cb) {
									bVar1 = (name == "AttackSlapR");
									if (bVar1) {
										if ((typeof(CustomLogicTitanAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapR();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x87de46b) {
									bVar1 = (name == "AttackPunch");
									if (bVar1) {
										if ((typeof(CustomLogicTitanAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
										}
										pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackPunch();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0xa250c8c) {
								bVar1 = (name == "DieFront");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieFront();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xb04c157) {
								bVar1 = (name == "AttackGrabGroundFrontR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabGroundFrontR();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xcb00c2d) {
								bVar1 = (name == "AttackGrabGroundBackL");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabGroundBackL();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0xfd3122c) {
							if (uVar2 == 0xd2f75f1) {
								bVar1 = (name == "AttackGrabAirR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabAirR();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xe1ef32d) {
								bVar1 = (name == "Jump");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Jump();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xfd3122b) {
								bVar1 = (name == "AttackGrabHighR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHighR();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1104cac9) {
							bVar1 = (name == "AttackGrabGroundFrontL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabGroundFrontL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x12aed9d5) {
							bVar1 = (name == "AttackSlapL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x132daa5f) {
							bVar1 = (name == "AttackBiteR");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBiteR();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x22ccd731) {
						if (uVar2 < 0x1d298760) {
							if (uVar2 == 0x172f85af) {
								bVar1 = (name == "AttackGrabAirL");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabAirL();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1d29875f) {
								bVar1 = (name == "AttackSlapHighR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapHighR();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1dd32835) {
							bVar1 = (name == "AttackGrabHighL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHighL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1f2dbd43) {
							bVar1 = (name == "AttackBiteF");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBiteF();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x22ccd730) {
							bVar1 = (name == "Walk");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x292dcd02) {
						if (uVar2 == 0x25093a4c) {
							bVar1 = (name == "ArmHurtL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__ArmHurtL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x27bb25ca) {
							bVar1 = (name == "SitFallCrawler");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitFallCrawler();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x292dcd01) {
							bVar1 = (name == "AttackBiteL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBiteL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3329aa01) {
						bVar1 = (name == "AttackSlapHighL");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapHighL();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x371c1522) {
						bVar1 = (name == "AttackStomp");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackStomp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3a2d364e) {
						bVar1 = (name == "AttackBellyFlop");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBellyFlop();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5d992b42) {
					if (uVar2 < 0x425a9db8) {
						if (uVar2 < 0x3d9daaed) {
							if (uVar2 == 0x3b095cee) {
								bVar1 = (name == "ArmHurtR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__ArmHurtR();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x3d9daaec) {
								bVar1 = (name == "StunLeft");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__StunLeft();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x3db5a1bf) {
							bVar1 = (name == "EmoteShake");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteShake();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3fd565eb) {
							bVar1 = (name == "DieSit");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieSit();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x425a9db7) {
							bVar1 = (name == "AttackBellyFlopGetup");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBellyFlopGetup();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x45aa17b4) {
						if (uVar2 == 0x426f593c) {
							bVar1 = (name == "EmoteLaugh");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteLaugh();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x45516aaa) {
							bVar1 = (name == "SitUp");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitUp();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x45aa17b3) {
							bVar1 = (name == "Idle");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x518c7bc2) {
						bVar1 = (name == "DieGround");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieGround();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x54623468) {
						bVar1 = (name == "FallCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__FallCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5d992b41) {
						bVar1 = (name == "Stun");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Stun();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x717ed71c) {
					if (uVar2 < 0x69fd27f7) {
						if (uVar2 == 0x5f7ebac5) {
							bVar1 = (name == "Turn90L");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Turn90L();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x6700754b) {
							bVar1 = (name == "AttackHitFace");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackHitFace();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x69fd27f6) {
							bVar1 = (name == "RunAbnormal");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__RunAbnormal();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x6ada9f85) {
						bVar1 = (name == "DieBlow");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieBlow();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x70cfd606) {
						bVar1 = (name == "RunCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__RunCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x717ed71b) {
						bVar1 = (name == "Turn90R");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Turn90R();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x7b00bc81) {
					if (uVar2 == 0x729a03b7) {
						bVar1 = (name == "AttackJumpCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackJumpCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x745f154b) {
						bVar1 = (name == "AttackSlapLowR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapLowR();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b00bc80) {
						bVar1 = (name == "Fall");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Fall();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x7b128cf9) {
					bVar1 = (name == "StunRight");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__StunRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7b4c8700) {
					bVar1 = (name == "AttackGrabCoreL");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabCoreL();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7cdffe17) {
					bVar1 = (name == "Turn90LCrawler");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Turn90LCrawler();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xac717d26) {
				if (uVar2 < 0x882f3d51) {
					if (uVar2 < 0x838656ad) {
						if (uVar2 < 0x7ee23ea7) {
							if (uVar2 == 0x7e4b9533) {
								bVar1 = (name == "AttackEatL");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackEatL();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x7ee23ea6) {
								bVar1 = (name == "AttackGrabHeadFrontR");
								if (bVar1) {
									pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHeadFrontR();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x825f2b55) {
							bVar1 = (name == "AttackSlapLowL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlapLowL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x838656ac) {
							bVar1 = (name == "AttackSlam");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSlam();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7f7ae464) {
							bVar1 = (name == "AttackBrushChestL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushChestL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x862f3a2b) {
						if (uVar2 == 0x84fc6844) {
							bVar1 = (name == "AttackGrabBackL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabBackL();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x857aedd6) {
							bVar1 = (name == "AttackBrushChestR");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushChestR();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x862f3a2a) {
							bVar1 = (name == "AttackGrabAirFarL");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabAirFarL();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x86827373) {
						bVar1 = (name == "DieCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x87b6990b) {
						bVar1 = (name == "SitDown");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitDown();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x882f3d50) {
						bVar1 = (name == "AttackGrabAirFarR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabAirFarR();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x994cb63b) {
					if (uVar2 < 0x912e23bf) {
						if (uVar2 == 0x8afc71b6) {
							bVar1 = (name == "AttackGrabBackR");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabBackR();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x912e23be) {
							bVar1 = (name == "SitFall");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitFall();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x972856bf) {
						bVar1 = (name == "SitIdleCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitIdleCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x98e26794) {
						bVar1 = (name == "AttackGrabHeadFrontL");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHeadFrontL();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x994cb63a) {
						bVar1 = (name == "AttackGrabCoreR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabCoreR();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa47f6adf) {
					if (uVar2 == 0x99ca44b9) {
						bVar1 = (name == "IdleCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__IdleCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9c4bc46d) {
						bVar1 = (name == "AttackEatR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackEatR();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa47f6ade) {
						bVar1 = (name == "DieBack");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieBack();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa9381ee1) {
					bVar1 = (name == "Turn90RCrawler");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Turn90RCrawler();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xaa02d909) {
					bVar1 = (name == "SprintAbnormal");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SprintAbnormal();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xac717d25) {
					bVar1 = (name == "AttackJump");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackJump();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd0f70cad) {
				if (uVar2 < 0xc2cea647) {
					if (uVar2 < 0xbe6b9bc0) {
						if (uVar2 == 0xb8819b82) {
							bVar1 = (name == "SitBlind");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitBlind();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbe6b9bbf) {
							bVar1 = (name == "JumpCrawler");
							if (bVar1) {
								pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__JumpCrawler();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xc0fd15a3) {
						bVar1 = (name == "AttackPunchCombo");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackPunchCombo();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc1018924) {
						bVar1 = (name == "EmoteNod");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteNod();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc2cea646) {
						bVar1 = (name == "SitUpCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitUpCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc6f75898) {
					if (uVar2 == 0xc4a10b99) {
						bVar1 = (name == "AttackSwingR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSwingR();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc65e5944) {
						bVar1 = (name == "AttackRockThrow");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackRockThrow();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc6f75897) {
						bVar1 = (name == "EmoteRoar");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__EmoteRoar();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc8f30ee7) {
					bVar1 = (name == "AttackKick");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackKick();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xcf14e204) {
					bVar1 = (name == "AttackGrabStomachL");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabStomachL();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd0f70cac) {
					bVar1 = (name == "DieHeadOff");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__DieHeadOff();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe6b2342e) {
				if (uVar2 < 0xd8f110d5) {
					if (uVar2 == 0xd514eb76) {
						bVar1 = (name == "AttackGrabStomachR");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabStomachR();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd5e03fe2) {
						bVar1 = (name == "CoverNape");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__CoverNape();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd8f110d4) {
						bVar1 = (name == "LandCrawler");
						if (bVar1) {
							pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__LandCrawler();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xdea13487) {
					bVar1 = (name == "AttackSwingL");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackSwingL();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe4d66f54) {
					bVar1 = (name == "Blind");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Blind();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe6b2342d) {
					bVar1 = (name == "SitIdle");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__SitIdle();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xee1682bd) {
				if (uVar2 == 0xe8476a11) {
					bVar1 = (name == "AttackHitBack");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackHitBack();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe89df278) {
					bVar1 = (name == "AttackGrabHeadBackR");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHeadBackR();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xee1682bc) {
					bVar1 = (name == "Land");
					if (bVar1) {
						pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__Land();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xeeafdcf3) {
				bVar1 = (name == "AttackGrabGroundBackR");
				if (bVar1) {
					pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabGroundBackR();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf69e0882) {
				bVar1 = (name == "AttackGrabHeadBackL");
				if (bVar1) {
					pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabHeadBackL();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfd07560c) {
				bVar1 = (name == "BlindCrawler");
				if (bVar1) {
					pCVar3 = CustomLogicTitanAnimationEnum.Bindings.__CreatePropertyBinding__BlindCrawler();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003180")]
		[Address(RVA = "0x59B42F0", Offset = "0x59B32F0", VA = "0x59B42F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Idle): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003181")]
		[Address(RVA = "0x59B4390", Offset = "0x59B3390", VA = "0x59B4390")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__RunAbnormal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunAbnormal): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunAbnormal_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003182")]
		[Address(RVA = "0x59B4430", Offset = "0x59B3430", VA = "0x59B4430")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SprintAbnormal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SprintAbnormal): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SprintAbnormal_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003183")]
		[Address(RVA = "0x59B44D0", Offset = "0x59B34D0", VA = "0x59B44D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__RunCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__RunCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__RunCrawler_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003184")]
		[Address(RVA = "0x59B4570", Offset = "0x59B3570", VA = "0x59B4570")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__IdleCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__IdleCrawler_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003185")]
		[Address(RVA = "0x59B4610", Offset = "0x59B3610", VA = "0x59B4610")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__JumpCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__JumpCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__JumpCrawler_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003186")]
		[Address(RVA = "0x59B46B0", Offset = "0x59B36B0", VA = "0x59B46B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__FallCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__FallCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__FallCrawler_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003187")]
		[Address(RVA = "0x59B4750", Offset = "0x59B3750", VA = "0x59B4750")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__LandCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__LandCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__LandCrawler_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003188")]
		[Address(RVA = "0x59B47F0", Offset = "0x59B37F0", VA = "0x59B47F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003189")]
		[Address(RVA = "0x59B4890", Offset = "0x59B3890", VA = "0x59B4890")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318A")]
		[Address(RVA = "0x59B4930", Offset = "0x59B3930", VA = "0x59B4930")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Fall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Fall): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_12);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318B")]
		[Address(RVA = "0x59B49D0", Offset = "0x59B39D0", VA = "0x59B49D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Land): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_13);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318C")]
		[Address(RVA = "0x59B4A70", Offset = "0x59B3A70", VA = "0x59B4A70")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Stun): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_14);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318D")]
		[Address(RVA = "0x59B4B10", Offset = "0x59B3B10", VA = "0x59B4B10")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__StunLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunLeft): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunLeft_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318E")]
		[Address(RVA = "0x59B4BB0", Offset = "0x59B3BB0", VA = "0x59B4BB0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__StunRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__StunRight): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__StunRight_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600318F")]
		[Address(RVA = "0x59B4C50", Offset = "0x59B3C50", VA = "0x59B4C50")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieBack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBack): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBack_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003190")]
		[Address(RVA = "0x59B4CF0", Offset = "0x59B3CF0", VA = "0x59B4CF0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieFront()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieFront): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieFront_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003191")]
		[Address(RVA = "0x59B4D90", Offset = "0x59B3D90", VA = "0x59B4D90")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieGround()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieGround): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieGround_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003192")]
		[Address(RVA = "0x59B4E30", Offset = "0x59B3E30", VA = "0x59B4E30")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieCrawler_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003193")]
		[Address(RVA = "0x59B4ED0", Offset = "0x59B3ED0", VA = "0x59B4ED0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieSit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieSit): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieSit_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003194")]
		[Address(RVA = "0x59B4F70", Offset = "0x59B3F70", VA = "0x59B4F70")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieBlow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieBlow): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieBlow_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003195")]
		[Address(RVA = "0x59B5010", Offset = "0x59B4010", VA = "0x59B5010")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__DieHeadOff()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__DieHeadOff): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__DieHeadOff_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003196")]
		[Address(RVA = "0x59B50B0", Offset = "0x59B40B0", VA = "0x59B50B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackPunchCombo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunchCombo): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunchCombo_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003197")]
		[Address(RVA = "0x59B5150", Offset = "0x59B4150", VA = "0x59B5150")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackPunch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackPunch): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackPunch_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003198")]
		[Address(RVA = "0x59B51F0", Offset = "0x59B41F0", VA = "0x59B51F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlam()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlam): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlam_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003199")]
		[Address(RVA = "0x59B5290", Offset = "0x59B4290", VA = "0x59B5290")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBellyFlop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319A")]
		[Address(RVA = "0x59B5330", Offset = "0x59B4330", VA = "0x59B5330")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBellyFlopGetup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlopGetup): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBellyFlopGetup);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319B")]
		[Address(RVA = "0x59B53D0", Offset = "0x59B43D0", VA = "0x59B53D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackKick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319C")]
		[Address(RVA = "0x59B5470", Offset = "0x59B4470", VA = "0x59B5470")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackStomp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319D")]
		[Address(RVA = "0x59B5510", Offset = "0x59B4510", VA = "0x59B5510")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSwingL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingL_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319E")]
		[Address(RVA = "0x59B55B0", Offset = "0x59B45B0", VA = "0x59B55B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSwingR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwingR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSwingR_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600319F")]
		[Address(RVA = "0x59B5650", Offset = "0x59B4650", VA = "0x59B5650")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBiteF()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteF): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A0")]
		[Address(RVA = "0x59B56F0", Offset = "0x59B46F0", VA = "0x59B56F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBiteL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A1")]
		[Address(RVA = "0x59B5790", Offset = "0x59B4790", VA = "0x59B5790")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBiteR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBiteR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A2")]
		[Address(RVA = "0x59B5830", Offset = "0x59B4830", VA = "0x59B5830")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabAirFarL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A3")]
		[Address(RVA = "0x59B58D0", Offset = "0x59B48D0", VA = "0x59B58D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabAirFarR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFarR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirFarR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A4")]
		[Address(RVA = "0x59B5970", Offset = "0x59B4970", VA = "0x59B5970")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabAirL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A5")]
		[Address(RVA = "0x59B5A10", Offset = "0x59B4A10", VA = "0x59B5A10")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabAirR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabAirR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A6")]
		[Address(RVA = "0x59B5AB0", Offset = "0x59B4AB0", VA = "0x59B5AB0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabBackL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A7")]
		[Address(RVA = "0x59B5B50", Offset = "0x59B4B50", VA = "0x59B5B50")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabBackR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBackR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBackR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A8")]
		[Address(RVA = "0x59B5BF0", Offset = "0x59B4BF0", VA = "0x59B5BF0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabCoreL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031A9")]
		[Address(RVA = "0x59B5C90", Offset = "0x59B4C90", VA = "0x59B5C90")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabCoreR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabCoreR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabCoreR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AA")]
		[Address(RVA = "0x59B5D30", Offset = "0x59B4D30", VA = "0x59B5D30")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabGroundBackL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AB")]
		[Address(RVA = "0x59B5DD0", Offset = "0x59B4DD0", VA = "0x59B5DD0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabGroundBackR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundBackR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundBack_71c1bd0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AC")]
		[Address(RVA = "0x59B5E70", Offset = "0x59B4E70", VA = "0x59B5E70")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabGroundFrontL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AD")]
		[Address(RVA = "0x59B5F10", Offset = "0x59B4F10", VA = "0x59B5F10")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabGroundFrontR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabGroundFrontR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabGroundFron_71c1be0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AE")]
		[Address(RVA = "0x59B5FB0", Offset = "0x59B4FB0", VA = "0x59B5FB0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHeadBackL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackL);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031AF")]
		[Address(RVA = "0x59B6050", Offset = "0x59B5050", VA = "0x59B6050")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHeadBackR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadBackR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadBackR);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B0")]
		[Address(RVA = "0x59B60F0", Offset = "0x59B50F0", VA = "0x59B60F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHeadFrontL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontL);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B1")]
		[Address(RVA = "0x59B6190", Offset = "0x59B5190", VA = "0x59B6190")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHeadFrontR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHeadFrontR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHeadFrontR);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B2")]
		[Address(RVA = "0x59B6230", Offset = "0x59B5230", VA = "0x59B6230")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHighL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B3")]
		[Address(RVA = "0x59B62D0", Offset = "0x59B52D0", VA = "0x59B62D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabHighR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabHighR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabHighR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B4")]
		[Address(RVA = "0x59B6370", Offset = "0x59B5370", VA = "0x59B6370")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabStomachL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B5")]
		[Address(RVA = "0x59B6410", Offset = "0x59B5410", VA = "0x59B6410")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackGrabStomachR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabStomachR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabStomachR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B6")]
		[Address(RVA = "0x59B64B0", Offset = "0x59B54B0", VA = "0x59B64B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackEatL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatL_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B7")]
		[Address(RVA = "0x59B6550", Offset = "0x59B5550", VA = "0x59B6550")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackEatR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackEatR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackEatR_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B8")]
		[Address(RVA = "0x59B65F0", Offset = "0x59B55F0", VA = "0x59B65F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapHighL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031B9")]
		[Address(RVA = "0x59B6690", Offset = "0x59B5690", VA = "0x59B6690")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapHighR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BA")]
		[Address(RVA = "0x59B6730", Offset = "0x59B5730", VA = "0x59B6730")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BB")]
		[Address(RVA = "0x59B67D0", Offset = "0x59B57D0", VA = "0x59B67D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BC")]
		[Address(RVA = "0x59B6870", Offset = "0x59B5870", VA = "0x59B6870")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapLowL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BD")]
		[Address(RVA = "0x59B6910", Offset = "0x59B5910", VA = "0x59B6910")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackSlapLowR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BE")]
		[Address(RVA = "0x59B69B0", Offset = "0x59B59B0", VA = "0x59B69B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBrushChestL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestL_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031BF")]
		[Address(RVA = "0x59B6A50", Offset = "0x59B5A50", VA = "0x59B6A50")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackBrushChestR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushChestR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushChestR_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C0")]
		[Address(RVA = "0x59B6AF0", Offset = "0x59B5AF0", VA = "0x59B6AF0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackHitBack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitBack): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C1")]
		[Address(RVA = "0x59B6B90", Offset = "0x59B5B90", VA = "0x59B6B90")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackHitFace()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHitFace): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C2")]
		[Address(RVA = "0x59B6C30", Offset = "0x59B5C30", VA = "0x59B6C30")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackRockThrow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C3")]
		[Address(RVA = "0x59B6CD0", Offset = "0x59B5CD0", VA = "0x59B6CD0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackJump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJump): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJump_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C4")]
		[Address(RVA = "0x59B6D70", Offset = "0x59B5D70", VA = "0x59B6D70")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__AttackJumpCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__AttackJumpCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__AttackJumpCrawler_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C5")]
		[Address(RVA = "0x59B6E10", Offset = "0x59B5E10", VA = "0x59B6E10")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitIdle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C6")]
		[Address(RVA = "0x59B6EB0", Offset = "0x59B5EB0", VA = "0x59B6EB0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitIdleCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdleCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitIdleCrawler_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C7")]
		[Address(RVA = "0x59B6F50", Offset = "0x59B5F50", VA = "0x59B6F50")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitDown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitDown): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitDown_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C8")]
		[Address(RVA = "0x59B6FF0", Offset = "0x59B5FF0", VA = "0x59B6FF0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_74);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031C9")]
		[Address(RVA = "0x59B7090", Offset = "0x59B6090", VA = "0x59B7090")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitUpCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitUpCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitUpCrawler_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CA")]
		[Address(RVA = "0x59B7130", Offset = "0x59B6130", VA = "0x59B7130")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitFall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CB")]
		[Address(RVA = "0x59B71D0", Offset = "0x59B61D0", VA = "0x59B71D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitFallCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitFallCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitFallCrawler_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CC")]
		[Address(RVA = "0x59B7270", Offset = "0x59B6270", VA = "0x59B7270")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Turn90L()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90L): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90L_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CD")]
		[Address(RVA = "0x59B7310", Offset = "0x59B6310", VA = "0x59B7310")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Turn90R()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90R): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90R_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CE")]
		[Address(RVA = "0x59B73B0", Offset = "0x59B63B0", VA = "0x59B73B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Turn90LCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90LCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90LCrawler_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031CF")]
		[Address(RVA = "0x59B7450", Offset = "0x59B6450", VA = "0x59B7450")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Turn90RCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Turn90RCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Turn90RCrawler_g);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D0")]
		[Address(RVA = "0x59B74F0", Offset = "0x59B64F0", VA = "0x59B74F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__Blind()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__Blind): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__Blind_g____getter_82);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D1")]
		[Address(RVA = "0x59B7590", Offset = "0x59B6590", VA = "0x59B7590")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__SitBlind()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__SitBlind): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__SitBlind_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D2")]
		[Address(RVA = "0x59B7630", Offset = "0x59B6630", VA = "0x59B7630")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__BlindCrawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__BlindCrawler): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__BlindCrawler_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D3")]
		[Address(RVA = "0x59B76D0", Offset = "0x59B66D0", VA = "0x59B76D0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__ArmHurtL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtL): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtL_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D4")]
		[Address(RVA = "0x59B7770", Offset = "0x59B6770", VA = "0x59B7770")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__ArmHurtR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__ArmHurtR): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__ArmHurtR_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D5")]
		[Address(RVA = "0x59B7810", Offset = "0x59B6810", VA = "0x59B7810")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__CoverNape()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__CoverNape): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__CoverNape_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D6")]
		[Address(RVA = "0x59B78B0", Offset = "0x59B68B0", VA = "0x59B78B0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__EmoteLaugh()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteLaugh): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteLaugh_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D7")]
		[Address(RVA = "0x59B7950", Offset = "0x59B6950", VA = "0x59B7950")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__EmoteNod()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D8")]
		[Address(RVA = "0x59B79F0", Offset = "0x59B69F0", VA = "0x59B79F0")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__EmoteShake()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteShake): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteShake_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60031D9")]
		[Address(RVA = "0x59B7A90", Offset = "0x59B6A90", VA = "0x59B7A90")]
		public static CLPropertyBinding<CustomLogicTitanAnimationEnum> __CreatePropertyBinding__EmoteRoar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar): 3 lines keep C-only constructs
			Func<CustomLogicTitanAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTitanAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000893")]
	public static string Idle
	{
		[Token(Token = "0x6003120")]
		[Address(RVA = "0x59B1010", Offset = "0x59B0010", VA = "0x59B1010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Idle): clean
			return "Amarture_VER2|idle";
		}
	}

	[Token(Token = "0x17000894")]
	public static string RunAbnormal
	{
		[Token(Token = "0x6003121")]
		[Address(RVA = "0x59B1040", Offset = "0x59B0040", VA = "0x59B1040")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_RunAbnormal): clean
			return "Amarture_VER2|run.abnormal";
		}
	}

	[Token(Token = "0x17000895")]
	public static string SprintAbnormal
	{
		[Token(Token = "0x6003122")]
		[Address(RVA = "0x59B1070", Offset = "0x59B0070", VA = "0x59B1070")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SprintAbnormal): clean
			return "Amarture_VER2|run.abnormal.1";
		}
	}

	[Token(Token = "0x17000896")]
	public static string RunCrawler
	{
		[Token(Token = "0x6003123")]
		[Address(RVA = "0x59B10A0", Offset = "0x59B00A0", VA = "0x59B10A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_RunCrawler): clean
			return "Amarture_VER2|crawler.run";
		}
	}

	[Token(Token = "0x17000897")]
	public static string IdleCrawler
	{
		[Token(Token = "0x6003124")]
		[Address(RVA = "0x59B10D0", Offset = "0x59B00D0", VA = "0x59B10D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_IdleCrawler): clean
			return "Amarture_VER2|crawler.idle";
		}
	}

	[Token(Token = "0x17000898")]
	public static string JumpCrawler
	{
		[Token(Token = "0x6003125")]
		[Address(RVA = "0x59B1100", Offset = "0x59B0100", VA = "0x59B1100")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_JumpCrawler): clean
			return "Amarture_VER2|attack.crawler.jump.0";
		}
	}

	[Token(Token = "0x17000899")]
	public static string FallCrawler
	{
		[Token(Token = "0x6003126")]
		[Address(RVA = "0x59B1130", Offset = "0x59B0130", VA = "0x59B1130")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_FallCrawler): clean
			return "Amarture_VER2|attack.crawler.jump.1";
		}
	}

	[Token(Token = "0x1700089A")]
	public static string LandCrawler
	{
		[Token(Token = "0x6003127")]
		[Address(RVA = "0x59B1160", Offset = "0x59B0160", VA = "0x59B1160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_LandCrawler): clean
			return "Amarture_VER2|attack.crawler.jump.2";
		}
	}

	[Token(Token = "0x1700089B")]
	public static string Walk
	{
		[Token(Token = "0x6003128")]
		[Address(RVA = "0x59B1190", Offset = "0x59B0190", VA = "0x59B1190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Walk): clean
			return "Amarture_VER2|run.walk";
		}
	}

	[Token(Token = "0x1700089C")]
	public static string Jump
	{
		[Token(Token = "0x6003129")]
		[Address(RVA = "0x59B11C0", Offset = "0x59B01C0", VA = "0x59B11C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Jump): clean
			return "Amarture_VER2|attack.jumper.0";
		}
	}

	[Token(Token = "0x1700089D")]
	public static string Fall
	{
		[Token(Token = "0x600312A")]
		[Address(RVA = "0x59B11F0", Offset = "0x59B01F0", VA = "0x59B11F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Fall): clean
			return "Amarture_VER2|attack.jumper.1";
		}
	}

	[Token(Token = "0x1700089E")]
	public static string Land
	{
		[Token(Token = "0x600312B")]
		[Address(RVA = "0x59B1220", Offset = "0x59B0220", VA = "0x59B1220")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Land): clean
			return "Amarture_VER2|attack.jumper.2";
		}
	}

	[Token(Token = "0x1700089F")]
	public static string Stun
	{
		[Token(Token = "0x600312C")]
		[Address(RVA = "0x59B1250", Offset = "0x59B0250", VA = "0x59B1250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Stun): clean
			return "Amarture_VER2|hit.eren.";
		}
	}

	[Token(Token = "0x170008A0")]
	public static string StunLeft
	{
		[Token(Token = "0x600312D")]
		[Address(RVA = "0x59B1280", Offset = "0x59B0280", VA = "0x59B1280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_StunLeft): clean
			return "Amarture_VER2|hit.eren.";
		}
	}

	[Token(Token = "0x170008A1")]
	public static string StunRight
	{
		[Token(Token = "0x600312E")]
		[Address(RVA = "0x59B12B0", Offset = "0x59B02B0", VA = "0x59B12B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_StunRight): clean
			return "Amarture_VER2|hit.eren.R";
		}
	}

	[Token(Token = "0x170008A2")]
	public static string DieBack
	{
		[Token(Token = "0x600312F")]
		[Address(RVA = "0x59B12E0", Offset = "0x59B02E0", VA = "0x59B12E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBack): clean
			return "Amarture_VER2|die.back";
		}
	}

	[Token(Token = "0x170008A3")]
	public static string DieFront
	{
		[Token(Token = "0x6003130")]
		[Address(RVA = "0x59B1310", Offset = "0x59B0310", VA = "0x59B1310")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieFront): clean
			return "Amarture_VER2|die.front";
		}
	}

	[Token(Token = "0x170008A4")]
	public static string DieGround
	{
		[Token(Token = "0x6003131")]
		[Address(RVA = "0x59B1340", Offset = "0x59B0340", VA = "0x59B1340")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieGround): clean
			return "Amarture_VER2|die.ground";
		}
	}

	[Token(Token = "0x170008A5")]
	public static string DieCrawler
	{
		[Token(Token = "0x6003132")]
		[Address(RVA = "0x59B1370", Offset = "0x59B0370", VA = "0x59B1370")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieCrawler): clean
			return "Amarture_VER2|crawler.die";
		}
	}

	[Token(Token = "0x170008A6")]
	public static string DieSit
	{
		[Token(Token = "0x6003133")]
		[Address(RVA = "0x59B13A0", Offset = "0x59B03A0", VA = "0x59B13A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieSit): clean
			return "Amarture_VER2|sit_die";
		}
	}

	[Token(Token = "0x170008A7")]
	public static string DieBlow
	{
		[Token(Token = "0x6003134")]
		[Address(RVA = "0x59B13D0", Offset = "0x59B03D0", VA = "0x59B13D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieBlow): clean
			return "Amarture_VER2|die.blow";
		}
	}

	[Token(Token = "0x170008A8")]
	public static string DieHeadOff
	{
		[Token(Token = "0x6003135")]
		[Address(RVA = "0x59B1400", Offset = "0x59B0400", VA = "0x59B1400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_DieHeadOff): clean
			return "Amarture_VER2|die.headOff";
		}
	}

	[Token(Token = "0x170008A9")]
	public static string AttackPunchCombo
	{
		[Token(Token = "0x6003136")]
		[Address(RVA = "0x59B1430", Offset = "0x59B0430", VA = "0x59B1430")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunchCombo): clean
			return "Amarture_VER2|attack.combo";
		}
	}

	[Token(Token = "0x170008AA")]
	public static string AttackPunch
	{
		[Token(Token = "0x6003137")]
		[Address(RVA = "0x59B1460", Offset = "0x59B0460", VA = "0x59B1460")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackPunch): clean
			return "Amarture_VER2|attack.comboPunch";
		}
	}

	[Token(Token = "0x170008AB")]
	public static string AttackSlam
	{
		[Token(Token = "0x6003138")]
		[Address(RVA = "0x59B1490", Offset = "0x59B0490", VA = "0x59B1490")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlam): clean
			return "Amarture_VER2|attack.front.ground";
		}
	}

	[Token(Token = "0x170008AC")]
	public static string AttackBellyFlop
	{
		[Token(Token = "0x6003139")]
		[Address(RVA = "0x59B14C0", Offset = "0x59B04C0", VA = "0x59B14C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlop): clean
			return "Amarture_VER2|attack.abnormal.jump";
		}
	}

	[Token(Token = "0x170008AD")]
	public static string AttackBellyFlopGetup
	{
		[Token(Token = "0x600313A")]
		[Address(RVA = "0x59B14F0", Offset = "0x59B04F0", VA = "0x59B14F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBellyFlopGetup): clean
			return "Amarture_VER2|attack.abnormal.getup";
		}
	}

	[Token(Token = "0x170008AE")]
	public static string AttackKick
	{
		[Token(Token = "0x600313B")]
		[Address(RVA = "0x59B1520", Offset = "0x59B0520", VA = "0x59B1520")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackKick): clean
			return "Amarture_VER2|attack.kick";
		}
	}

	[Token(Token = "0x170008AF")]
	public static string AttackStomp
	{
		[Token(Token = "0x600313C")]
		[Address(RVA = "0x59B1550", Offset = "0x59B0550", VA = "0x59B1550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackStomp): clean
			return "Amarture_VER2|attack.stomp";
		}
	}

	[Token(Token = "0x170008B0")]
	public static string AttackSwingL
	{
		[Token(Token = "0x600313D")]
		[Address(RVA = "0x59B1580", Offset = "0x59B0580", VA = "0x59B1580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingL): clean
			return "Amarture_VER2|attack.swing.l";
		}
	}

	[Token(Token = "0x170008B1")]
	public static string AttackSwingR
	{
		[Token(Token = "0x600313E")]
		[Address(RVA = "0x59B15B0", Offset = "0x59B05B0", VA = "0x59B15B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSwingR): clean
			return "Amarture_VER2|attack.swing.r";
		}
	}

	[Token(Token = "0x170008B2")]
	public static string AttackBiteF
	{
		[Token(Token = "0x600313F")]
		[Address(RVA = "0x59B15E0", Offset = "0x59B05E0", VA = "0x59B15E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteF): clean
			return "Amarture_VER2|bite";
		}
	}

	[Token(Token = "0x170008B3")]
	public static string AttackBiteL
	{
		[Token(Token = "0x6003140")]
		[Address(RVA = "0x59B1610", Offset = "0x59B0610", VA = "0x59B1610")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteL): clean
			return "Amarture_VER2|bite.l";
		}
	}

	[Token(Token = "0x170008B4")]
	public static string AttackBiteR
	{
		[Token(Token = "0x6003141")]
		[Address(RVA = "0x59B1640", Offset = "0x59B0640", VA = "0x59B1640")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBiteR): clean
			return "Amarture_VER2|bite.r";
		}
	}

	[Token(Token = "0x170008B5")]
	public static string AttackGrabAirFarL
	{
		[Token(Token = "0x6003142")]
		[Address(RVA = "0x59B1670", Offset = "0x59B0670", VA = "0x59B1670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarL): clean
			return "Amarture_VER2|grab.air.far.l";
		}
	}

	[Token(Token = "0x170008B6")]
	public static string AttackGrabAirFarR
	{
		[Token(Token = "0x6003143")]
		[Address(RVA = "0x59B16A0", Offset = "0x59B06A0", VA = "0x59B16A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirFarR): clean
			return "Amarture_VER2|grab.air.far.r";
		}
	}

	[Token(Token = "0x170008B7")]
	public static string AttackGrabAirL
	{
		[Token(Token = "0x6003144")]
		[Address(RVA = "0x59B16D0", Offset = "0x59B06D0", VA = "0x59B16D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirL): clean
			return "Amarture_VER2|grab.air.short.l";
		}
	}

	[Token(Token = "0x170008B8")]
	public static string AttackGrabAirR
	{
		[Token(Token = "0x6003145")]
		[Address(RVA = "0x59B1700", Offset = "0x59B0700", VA = "0x59B1700")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabAirR): clean
			return "Amarture_VER2|grab.air.short.r";
		}
	}

	[Token(Token = "0x170008B9")]
	public static string AttackGrabBackL
	{
		[Token(Token = "0x6003146")]
		[Address(RVA = "0x59B1730", Offset = "0x59B0730", VA = "0x59B1730")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackL): clean
			return "Amarture_VER2|grab.back.l";
		}
	}

	[Token(Token = "0x170008BA")]
	public static string AttackGrabBackR
	{
		[Token(Token = "0x6003147")]
		[Address(RVA = "0x59B1760", Offset = "0x59B0760", VA = "0x59B1760")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabBackR): clean
			return "Amarture_VER2|grab.back.r";
		}
	}

	[Token(Token = "0x170008BB")]
	public static string AttackGrabCoreL
	{
		[Token(Token = "0x6003148")]
		[Address(RVA = "0x59B1790", Offset = "0x59B0790", VA = "0x59B1790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreL): clean
			return "Amarture_VER2|grab.core.";
		}
	}

	[Token(Token = "0x170008BC")]
	public static string AttackGrabCoreR
	{
		[Token(Token = "0x6003149")]
		[Address(RVA = "0x59B17C0", Offset = "0x59B07C0", VA = "0x59B17C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabCoreR): clean
			return "Amarture_VER2|grab.core.R";
		}
	}

	[Token(Token = "0x170008BD")]
	public static string AttackGrabGroundBackL
	{
		[Token(Token = "0x600314A")]
		[Address(RVA = "0x59B17F0", Offset = "0x59B07F0", VA = "0x59B17F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackL): clean
			return "Amarture_VER2|grab.ground.back.l";
		}
	}

	[Token(Token = "0x170008BE")]
	public static string AttackGrabGroundBackR
	{
		[Token(Token = "0x600314B")]
		[Address(RVA = "0x59B1820", Offset = "0x59B0820", VA = "0x59B1820")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundBackR): clean
			return "Amarture_VER2|grab.ground.back.r";
		}
	}

	[Token(Token = "0x170008BF")]
	public static string AttackGrabGroundFrontL
	{
		[Token(Token = "0x600314C")]
		[Address(RVA = "0x59B1850", Offset = "0x59B0850", VA = "0x59B1850")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontL): clean
			return "Amarture_VER2|grab.ground.front.l";
		}
	}

	[Token(Token = "0x170008C0")]
	public static string AttackGrabGroundFrontR
	{
		[Token(Token = "0x600314D")]
		[Address(RVA = "0x59B1880", Offset = "0x59B0880", VA = "0x59B1880")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabGroundFrontR): clean
			return "Amarture_VER2|grab.ground.front.r";
		}
	}

	[Token(Token = "0x170008C1")]
	public static string AttackGrabHeadBackL
	{
		[Token(Token = "0x600314E")]
		[Address(RVA = "0x59B18B0", Offset = "0x59B08B0", VA = "0x59B18B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackL): clean
			return "Amarture_VER2|grab.head.back.l";
		}
	}

	[Token(Token = "0x170008C2")]
	public static string AttackGrabHeadBackR
	{
		[Token(Token = "0x600314F")]
		[Address(RVA = "0x59B18E0", Offset = "0x59B08E0", VA = "0x59B18E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadBackR): clean
			return "Amarture_VER2|grab.head.back.r";
		}
	}

	[Token(Token = "0x170008C3")]
	public static string AttackGrabHeadFrontL
	{
		[Token(Token = "0x6003150")]
		[Address(RVA = "0x59B1910", Offset = "0x59B0910", VA = "0x59B1910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontL): clean
			return "Amarture_VER2|grab.head.front.1";
		}
	}

	[Token(Token = "0x170008C4")]
	public static string AttackGrabHeadFrontR
	{
		[Token(Token = "0x6003151")]
		[Address(RVA = "0x59B1940", Offset = "0x59B0940", VA = "0x59B1940")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHeadFrontR): clean
			return "Amarture_VER2|grab.head.front.r";
		}
	}

	[Token(Token = "0x170008C5")]
	public static string AttackGrabHighL
	{
		[Token(Token = "0x6003152")]
		[Address(RVA = "0x59B1970", Offset = "0x59B0970", VA = "0x59B1970")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighL): clean
			return "Amarture_VER2|grab.high.l";
		}
	}

	[Token(Token = "0x170008C6")]
	public static string AttackGrabHighR
	{
		[Token(Token = "0x6003153")]
		[Address(RVA = "0x59B19A0", Offset = "0x59B09A0", VA = "0x59B19A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabHighR): clean
			return "Amarture_VER2|grab.high.r";
		}
	}

	[Token(Token = "0x170008C7")]
	public static string AttackGrabStomachL
	{
		[Token(Token = "0x6003154")]
		[Address(RVA = "0x59B19D0", Offset = "0x59B09D0", VA = "0x59B19D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachL): clean
			return "Amarture_VER2|grab.stomach.l";
		}
	}

	[Token(Token = "0x170008C8")]
	public static string AttackGrabStomachR
	{
		[Token(Token = "0x6003155")]
		[Address(RVA = "0x59B1A00", Offset = "0x59B0A00", VA = "0x59B1A00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackGrabStomachR): clean
			return "Amarture_VER2|grab.stomach.r";
		}
	}

	[Token(Token = "0x170008C9")]
	public static string AttackEatL
	{
		[Token(Token = "0x6003156")]
		[Address(RVA = "0x59B1A30", Offset = "0x59B0A30", VA = "0x59B1A30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatL): clean
			return "Amarture_VER2|eat.l";
		}
	}

	[Token(Token = "0x170008CA")]
	public static string AttackEatR
	{
		[Token(Token = "0x6003157")]
		[Address(RVA = "0x59B1A60", Offset = "0x59B0A60", VA = "0x59B1A60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackEatR): clean
			return "Amarture_VER2|eat.r";
		}
	}

	[Token(Token = "0x170008CB")]
	public static string AttackSlapHighL
	{
		[Token(Token = "0x6003158")]
		[Address(RVA = "0x59B1A90", Offset = "0x59B0A90", VA = "0x59B1A90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighL): clean
			return "Amarture_VER2|attack.anti.AE.high.l";
		}
	}

	[Token(Token = "0x170008CC")]
	public static string AttackSlapHighR
	{
		[Token(Token = "0x6003159")]
		[Address(RVA = "0x59B1AC0", Offset = "0x59B0AC0", VA = "0x59B1AC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapHighR): clean
			return "Amarture_VER2|attack.anti.AE.high.r";
		}
	}

	[Token(Token = "0x170008CD")]
	public static string AttackSlapL
	{
		[Token(Token = "0x600315A")]
		[Address(RVA = "0x59B1AF0", Offset = "0x59B0AF0", VA = "0x59B1AF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapL): clean
			return "Amarture_VER2|attack.anti.AE.l";
		}
	}

	[Token(Token = "0x170008CE")]
	public static string AttackSlapR
	{
		[Token(Token = "0x600315B")]
		[Address(RVA = "0x59B1B20", Offset = "0x59B0B20", VA = "0x59B1B20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapR): clean
			return "Amarture_VER2|attack.anti.AE.r";
		}
	}

	[Token(Token = "0x170008CF")]
	public static string AttackSlapLowL
	{
		[Token(Token = "0x600315C")]
		[Address(RVA = "0x59B1B50", Offset = "0x59B0B50", VA = "0x59B1B50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowL): clean
			return "Amarture_VER2|attack.anti.AE.low.l";
		}
	}

	[Token(Token = "0x170008D0")]
	public static string AttackSlapLowR
	{
		[Token(Token = "0x600315D")]
		[Address(RVA = "0x59B1B80", Offset = "0x59B0B80", VA = "0x59B1B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackSlapLowR): clean
			return "Amarture_VER2|attack.anti.AE.low.r";
		}
	}

	[Token(Token = "0x170008D1")]
	public static string AttackBrushChestL
	{
		[Token(Token = "0x600315E")]
		[Address(RVA = "0x59B1BB0", Offset = "0x59B0BB0", VA = "0x59B1BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestL): clean
			return "Amarture_VER2|attack.chest.";
		}
	}

	[Token(Token = "0x170008D2")]
	public static string AttackBrushChestR
	{
		[Token(Token = "0x600315F")]
		[Address(RVA = "0x59B1BE0", Offset = "0x59B0BE0", VA = "0x59B1BE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackBrushChestR): clean
			return "Amarture_VER2|attack.chest.R";
		}
	}

	[Token(Token = "0x170008D3")]
	public static string AttackHitBack
	{
		[Token(Token = "0x6003160")]
		[Address(RVA = "0x59B1C10", Offset = "0x59B0C10", VA = "0x59B1C10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitBack): clean
			return "Amarture_VER2|attack.slap.back";
		}
	}

	[Token(Token = "0x170008D4")]
	public static string AttackHitFace
	{
		[Token(Token = "0x6003161")]
		[Address(RVA = "0x59B1C40", Offset = "0x59B0C40", VA = "0x59B1C40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackHitFace): clean
			return "Amarture_VER2|attack.slap.face";
		}
	}

	[Token(Token = "0x170008D5")]
	public static string AttackRockThrow
	{
		[Token(Token = "0x6003162")]
		[Address(RVA = "0x59B1C70", Offset = "0x59B0C70", VA = "0x59B1C70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackRockThrow): clean
			return "Amarture_VER2|attack.throw";
		}
	}

	[Token(Token = "0x170008D6")]
	public static string AttackJump
	{
		[Token(Token = "0x6003163")]
		[Address(RVA = "0x59B1CA0", Offset = "0x59B0CA0", VA = "0x59B1CA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJump): clean
			return "Amarture_VER2|attack.jumper.0";
		}
	}

	[Token(Token = "0x170008D7")]
	public static string AttackJumpCrawler
	{
		[Token(Token = "0x6003164")]
		[Address(RVA = "0x59B1CD0", Offset = "0x59B0CD0", VA = "0x59B1CD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_AttackJumpCrawler): clean
			return "Amarture_VER2|attack.crawler.jump.0";
		}
	}

	[Token(Token = "0x170008D8")]
	public static string SitIdle
	{
		[Token(Token = "0x6003165")]
		[Address(RVA = "0x59B1D00", Offset = "0x59B0D00", VA = "0x59B1D00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdle): clean
			return "Amarture_VER2|sit_idle";
		}
	}

	[Token(Token = "0x170008D9")]
	public static string SitIdleCrawler
	{
		[Token(Token = "0x6003166")]
		[Address(RVA = "0x59B1D30", Offset = "0x59B0D30", VA = "0x59B1D30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitIdleCrawler): clean
			return "Amarture_VER2|crawler.sit.idle";
		}
	}

	[Token(Token = "0x170008DA")]
	public static string SitDown
	{
		[Token(Token = "0x6003167")]
		[Address(RVA = "0x59B1D60", Offset = "0x59B0D60", VA = "0x59B1D60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitDown): clean
			return "Amarture_VER2|sit_down";
		}
	}

	[Token(Token = "0x170008DB")]
	public static string SitUp
	{
		[Token(Token = "0x6003168")]
		[Address(RVA = "0x59B1D90", Offset = "0x59B0D90", VA = "0x59B1D90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUp): clean
			return "Amarture_VER2|sit_getup";
		}
	}

	[Token(Token = "0x170008DC")]
	public static string SitUpCrawler
	{
		[Token(Token = "0x6003169")]
		[Address(RVA = "0x59B1DC0", Offset = "0x59B0DC0", VA = "0x59B1DC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitUpCrawler): clean
			return "Amarture_VER2|crawler.getup";
		}
	}

	[Token(Token = "0x170008DD")]
	public static string SitFall
	{
		[Token(Token = "0x600316A")]
		[Address(RVA = "0x59B1DF0", Offset = "0x59B0DF0", VA = "0x59B1DF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFall): clean
			return "Amarture_VER2|sit_hunt_down";
		}
	}

	[Token(Token = "0x170008DE")]
	public static string SitFallCrawler
	{
		[Token(Token = "0x600316B")]
		[Address(RVA = "0x59B1E20", Offset = "0x59B0E20", VA = "0x59B1E20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitFallCrawler): clean
			return "Amarture_VER2|crawler.hunt.down";
		}
	}

	[Token(Token = "0x170008DF")]
	public static string Turn90L
	{
		[Token(Token = "0x600316C")]
		[Address(RVA = "0x59B1E50", Offset = "0x59B0E50", VA = "0x59B1E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90L): clean
			return "Amarture_VER2|turnaround.";
		}
	}

	[Token(Token = "0x170008E0")]
	public static string Turn90R
	{
		[Token(Token = "0x600316D")]
		[Address(RVA = "0x59B1E80", Offset = "0x59B0E80", VA = "0x59B1E80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90R): clean
			return "Amarture_VER2|turnaround.R";
		}
	}

	[Token(Token = "0x170008E1")]
	public static string Turn90LCrawler
	{
		[Token(Token = "0x600316E")]
		[Address(RVA = "0x59B1EB0", Offset = "0x59B0EB0", VA = "0x59B1EB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90LCrawler): clean
			return "Amarture_VER2|crawler.turnaround.";
		}
	}

	[Token(Token = "0x170008E2")]
	public static string Turn90RCrawler
	{
		[Token(Token = "0x600316F")]
		[Address(RVA = "0x59B1EE0", Offset = "0x59B0EE0", VA = "0x59B1EE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Turn90RCrawler): clean
			return "Amarture_VER2|crawler.turnaround.R";
		}
	}

	[Token(Token = "0x170008E3")]
	public static string Blind
	{
		[Token(Token = "0x6003170")]
		[Address(RVA = "0x59B1F10", Offset = "0x59B0F10", VA = "0x59B1F10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_Blind): clean
			return "Amarture_VER2|hit.eye";
		}
	}

	[Token(Token = "0x170008E4")]
	public static string SitBlind
	{
		[Token(Token = "0x6003171")]
		[Address(RVA = "0x59B1F40", Offset = "0x59B0F40", VA = "0x59B1F40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_SitBlind): clean
			return "Amarture_VER2|sit_hit_eye";
		}
	}

	[Token(Token = "0x170008E5")]
	public static string BlindCrawler
	{
		[Token(Token = "0x6003172")]
		[Address(RVA = "0x59B1F70", Offset = "0x59B0F70", VA = "0x59B1F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_BlindCrawler): clean
			return "Amarture_VER2|crawler.hiteyes";
		}
	}

	[Token(Token = "0x170008E6")]
	public static string ArmHurtL
	{
		[Token(Token = "0x6003173")]
		[Address(RVA = "0x59B1FA0", Offset = "0x59B0FA0", VA = "0x59B1FA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtL): clean
			return "Amarture_VER2|arm_hurt_L";
		}
	}

	[Token(Token = "0x170008E7")]
	public static string ArmHurtR
	{
		[Token(Token = "0x6003174")]
		[Address(RVA = "0x59B1FD0", Offset = "0x59B0FD0", VA = "0x59B1FD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_ArmHurtR): clean
			return "Amarture_VER2|arm_hurt_R";
		}
	}

	[Token(Token = "0x170008E8")]
	public static string CoverNape
	{
		[Token(Token = "0x6003175")]
		[Address(RVA = "0x59B2000", Offset = "0x59B1000", VA = "0x59B2000")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_CoverNape): clean
			return "Amarture_VER2|idle.recovery";
		}
	}

	[Token(Token = "0x170008E9")]
	public static string EmoteLaugh
	{
		[Token(Token = "0x6003176")]
		[Address(RVA = "0x59B2030", Offset = "0x59B1030", VA = "0x59B2030")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteLaugh): clean
			return "Amarture_VER2|laugh";
		}
	}

	[Token(Token = "0x170008EA")]
	public static string EmoteNod
	{
		[Token(Token = "0x6003177")]
		[Address(RVA = "0x59B2060", Offset = "0x59B1060", VA = "0x59B2060")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteNod): clean
			return "Amarture_VER2|emote_titan_yes";
		}
	}

	[Token(Token = "0x170008EB")]
	public static string EmoteShake
	{
		[Token(Token = "0x6003178")]
		[Address(RVA = "0x59B2090", Offset = "0x59B1090", VA = "0x59B2090")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteShake): clean
			return "Amarture_VER2|emote_titan_no";
		}
	}

	[Token(Token = "0x170008EC")]
	public static string EmoteRoar
	{
		[Token(Token = "0x6003179")]
		[Address(RVA = "0x59B20C0", Offset = "0x59B10C0", VA = "0x59B20C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_EmoteRoar): clean
			return "Amarture_VER2|attack.scream";
		}
	}

	[Token(Token = "0x170008ED")]
	public override string ClassName
	{
		[Token(Token = "0x600317A")]
		[Address(RVA = "0x59B20F0", Offset = "0x59B10F0", VA = "0x59B20F0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_ClassName): clean
			return "TitanAnimationEnum";
		}
	}

	[Token(Token = "0x170008EE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600317B")]
		[Address(RVA = "0x59B2120", Offset = "0x59B1120", VA = "0x59B2120", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170008EF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600317C")]
		[Address(RVA = "0x59B2130", Offset = "0x59B1130", VA = "0x59B2130", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170008F0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600317D")]
		[Address(RVA = "0x59B2140", Offset = "0x59B1140", VA = "0x59B2140", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600311F")]
	[Address(RVA = "0x59B0FA0", Offset = "0x59AFFA0", VA = "0x59B0FA0")]
	public CustomLogicTitanAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c (CustomLogic.CustomLogicTitanAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ad9 == false) {
			Il2CppMethodInitialized_07546ad9 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTitanAnimationEnum.c.

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"RunAbnormal");
		__this.Add((Il2CppObject *)"SprintAbnormal");
		__this.Add((Il2CppObject *)"RunCrawler");
		__this.Add((Il2CppObject *)"IdleCrawler");
		__this.Add((Il2CppObject *)"JumpCrawler");
		__this.Add((Il2CppObject *)"FallCrawler");
		__this.Add((Il2CppObject *)"LandCrawler");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Fall");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"Stun");
		__this.Add((Il2CppObject *)"StunLeft");
		__this.Add((Il2CppObject *)"StunRight");
		__this.Add((Il2CppObject *)"DieBack");
		__this.Add((Il2CppObject *)"DieFront");
		__this.Add((Il2CppObject *)"DieGround");
		__this.Add((Il2CppObject *)"DieCrawler");
		__this.Add((Il2CppObject *)"DieSit");
		__this.Add((Il2CppObject *)"DieBlow");
		__this.Add((Il2CppObject *)"DieHeadOff");
		__this.Add((Il2CppObject *)"AttackPunchCombo");
		__this.Add((Il2CppObject *)"AttackPunch");
		__this.Add((Il2CppObject *)"AttackSlam");
		__this.Add((Il2CppObject *)"AttackBellyFlop");
		__this.Add((Il2CppObject *)"AttackBellyFlopGetup");
		__this.Add((Il2CppObject *)"AttackKick");
		__this.Add((Il2CppObject *)"AttackStomp");
		__this.Add((Il2CppObject *)"AttackSwingL");
		__this.Add((Il2CppObject *)"AttackSwingR");
		__this.Add((Il2CppObject *)"AttackBiteF");
		__this.Add((Il2CppObject *)"AttackBiteL");
		__this.Add((Il2CppObject *)"AttackBiteR");
		__this.Add((Il2CppObject *)"AttackGrabAirFarL");
		__this.Add((Il2CppObject *)"AttackGrabAirFarR");
		__this.Add((Il2CppObject *)"AttackGrabAirL");
		__this.Add((Il2CppObject *)"AttackGrabAirR");
		__this.Add((Il2CppObject *)"AttackGrabBackL");
		__this.Add((Il2CppObject *)"AttackGrabBackR");
		__this.Add((Il2CppObject *)"AttackGrabCoreL");
		__this.Add((Il2CppObject *)"AttackGrabCoreR");
		__this.Add((Il2CppObject *)"AttackGrabGroundBackL");
		__this.Add((Il2CppObject *)"AttackGrabGroundBackR");
		__this.Add((Il2CppObject *)"AttackGrabGroundFrontL");
		__this.Add((Il2CppObject *)"AttackGrabGroundFrontR");
		__this.Add((Il2CppObject *)"AttackGrabHeadBackL");
		__this.Add((Il2CppObject *)"AttackGrabHeadBackR");
		__this.Add((Il2CppObject *)"AttackGrabHeadFrontL");
		__this.Add((Il2CppObject *)"AttackGrabHeadFrontR");
		__this.Add((Il2CppObject *)"AttackGrabHighL");
		__this.Add((Il2CppObject *)"AttackGrabHighR");
		__this.Add((Il2CppObject *)"AttackGrabStomachL");
		__this.Add((Il2CppObject *)"AttackGrabStomachR");
		__this.Add((Il2CppObject *)"AttackEatL");
		__this.Add((Il2CppObject *)"AttackEatR");
		__this.Add((Il2CppObject *)"AttackSlapHighL");
		__this.Add((Il2CppObject *)"AttackSlapHighR");
		__this.Add((Il2CppObject *)"AttackSlapL");
		__this.Add((Il2CppObject *)"AttackSlapR");
		__this.Add((Il2CppObject *)"AttackSlapLowL");
		__this.Add((Il2CppObject *)"AttackSlapLowR");
		__this.Add((Il2CppObject *)"AttackBrushChestL");
		__this.Add((Il2CppObject *)"AttackBrushChestR");
		__this.Add((Il2CppObject *)"AttackHitBack");
		__this.Add((Il2CppObject *)"AttackHitFace");
		__this.Add((Il2CppObject *)"AttackRockThrow");
		__this.Add((Il2CppObject *)"AttackJump");
		__this.Add((Il2CppObject *)"AttackJumpCrawler");
		__this.Add((Il2CppObject *)"SitIdle");
		__this.Add((Il2CppObject *)"SitIdleCrawler");
		__this.Add((Il2CppObject *)"SitDown");
		__this.Add((Il2CppObject *)"SitUp");
		__this.Add((Il2CppObject *)"SitUpCrawler");
		__this.Add((Il2CppObject *)"SitFall");
		__this.Add((Il2CppObject *)"SitFallCrawler");
		__this.Add((Il2CppObject *)"Turn90L");
		__this.Add((Il2CppObject *)"Turn90R");
		__this.Add((Il2CppObject *)"Turn90LCrawler");
		__this.Add((Il2CppObject *)"Turn90RCrawler");
		__this.Add((Il2CppObject *)"Blind");
		__this.Add((Il2CppObject *)"SitBlind");
		__this.Add((Il2CppObject *)"BlindCrawler");
		__this.Add((Il2CppObject *)"ArmHurtL");
		__this.Add((Il2CppObject *)"ArmHurtR");
		__this.Add((Il2CppObject *)"CoverNape");
		__this.Add((Il2CppObject *)"EmoteLaugh");
		__this.Add((Il2CppObject *)"EmoteNod");
		__this.Add((Il2CppObject *)"EmoteShake");
		__this.Add((Il2CppObject *)"EmoteRoar");
		CustomLogicTitanAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|idle";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunAbnormal>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__RunAbnormal_g____getter_3_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|run.abnormal";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SprintAbnormal>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__SprintAbnormal_g____getter_4_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|run.abnormal.1";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunCrawler>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__RunCrawler_g____getter_5_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.run";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleCrawler>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__IdleCrawler_g____getter_6_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.idle";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__JumpCrawler>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__JumpCrawler_g____getter_7_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.0";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__FallCrawler>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__FallCrawler_g____getter_8_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.1";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__LandCrawler>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__LandCrawler_g____getter_9_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.2";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_10_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|run.walk";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_11_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.jumper.0";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Fall_g____getter_12_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.jumper.1";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_13_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.jumper.2";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Stun_g____getter_14_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|hit.eren.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunLeft>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__StunLeft_g____getter_15_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|hit.eren.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__StunRight>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__StunRight_g____getter_16_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|hit.eren.R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBack>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__DieBack_g____getter_17_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|die.back";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieFront>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__DieFront_g____getter_18_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|die.front";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieGround>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__DieGround_g____getter_19_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|die.ground";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieCrawler>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__DieCrawler_g____getter_20_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.die";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieSit>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__DieSit_g____getter_21_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_die";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieBlow>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__DieBlow_g____getter_22_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|die.blow";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__DieHeadOff>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__DieHeadOff_g____getter_23_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|die.headOff";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunchCombo>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__AttackPunchCombo_g____getter_24_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.combo";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__AttackPunch_g____getter_25_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.comboPunch";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlam_g____getter_26_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.front.ground";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBellyFlop_g____getter_27_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.abnormal.jump";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlopGetup>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBellyFlopGetup_g____getter_28_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.abnormal.getup";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__AttackKick_g____getter_29_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.kick";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__AttackStomp_g____getter_30_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.stomp";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingL>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSwingL_g____getter_31_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.swing.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwingR>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSwingR_g____getter_32_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.swing.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteF_g____getter_33_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|bite";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteL_g____getter_34_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|bite.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBiteR_g____getter_35_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|bite.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarL>g____getter|36_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAirFarL_g____getter_36_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.air.far.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFarR>g____getter|37_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAirFarR_g____getter_37_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.air.far.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirL>g____getter|38_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAirL_g____getter_38_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.air.short.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirR>g____getter|39_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabAirR_g____getter_39_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.air.short.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackL>g____getter|40_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBackL_g____getter_40_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.back.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBackR>g____getter|41_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBackR_g____getter_41_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.back.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreL>g____getter|42_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabCoreL_g____getter_42_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.core.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCoreR>g____getter|43_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabCoreR_g____getter_43_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.core.R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackL>g____getter|44_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabGroundBackL_g____getter_44_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.ground.back.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundBackR>g____getter|45_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabGroundBackR_g____getter_45_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.ground.back.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontL>g____getter|46_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabGroundFrontL_g____getter_46_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.ground.front.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGroundFrontR>g____getter|47_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabGroundFrontR_g____getter_47_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.ground.front.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackL>g____getter|48_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHeadBackL_g____getter_48_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.head.back.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadBackR>g____getter|49_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHeadBackR_g____getter_49_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.head.back.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontL>g____getter|50_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHeadFrontL_g____getter_50_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.head.front.1";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHeadFrontR>g____getter|51_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHeadFrontR_g____getter_51_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.head.front.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighL>g____getter|52_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHighL_g____getter_52_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.high.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHighR>g____getter|53_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabHighR_g____getter_53_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.high.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachL>g____getter|54_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabStomachL_g____getter_54_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.stomach.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabStomachR>g____getter|55_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabStomachR_g____getter_55_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|grab.stomach.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatL>g____getter|56_0: clean
	private static object Bindings____CreatePropertyBinding__AttackEatL_g____getter_56_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|eat.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackEatR>g____getter|57_0: clean
	private static object Bindings____CreatePropertyBinding__AttackEatR_g____getter_57_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|eat.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|58_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapHighL_g____getter_58_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.high.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|59_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapHighR_g____getter_59_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.high.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|60_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapL_g____getter_60_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|61_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapR_g____getter_61_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|62_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapLowL_g____getter_62_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.low.l";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|63_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSlapLowR_g____getter_63_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.anti.AE.low.r";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestL>g____getter|64_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushChestL_g____getter_64_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.chest.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChestR>g____getter|65_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushChestR_g____getter_65_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.chest.R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|66_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHitBack_g____getter_66_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.slap.back";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|67_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHitFace_g____getter_67_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.slap.face";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|68_0: clean
	private static object Bindings____CreatePropertyBinding__AttackRockThrow_g____getter_68_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.throw";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJump>g____getter|69_0: clean
	private static object Bindings____CreatePropertyBinding__AttackJump_g____getter_69_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.jumper.0";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackJumpCrawler>g____getter|70_0: clean
	private static object Bindings____CreatePropertyBinding__AttackJumpCrawler_g____getter_70_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.crawler.jump.0";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|71_0: clean
	private static object Bindings____CreatePropertyBinding__SitIdle_g____getter_71_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_idle";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdleCrawler>g____getter|72_0: clean
	private static object Bindings____CreatePropertyBinding__SitIdleCrawler_g____getter_72_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.sit.idle";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitDown>g____getter|73_0: clean
	private static object Bindings____CreatePropertyBinding__SitDown_g____getter_73_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_down";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|74_0: clean
	private static object Bindings____CreatePropertyBinding__SitUp_g____getter_74_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_getup";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUpCrawler>g____getter|75_0: clean
	private static object Bindings____CreatePropertyBinding__SitUpCrawler_g____getter_75_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.getup";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|76_0: clean
	private static object Bindings____CreatePropertyBinding__SitFall_g____getter_76_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_hunt_down";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFallCrawler>g____getter|77_0: clean
	private static object Bindings____CreatePropertyBinding__SitFallCrawler_g____getter_77_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.hunt.down";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90L>g____getter|78_0: clean
	private static object Bindings____CreatePropertyBinding__Turn90L_g____getter_78_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|turnaround.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90R>g____getter|79_0: clean
	private static object Bindings____CreatePropertyBinding__Turn90R_g____getter_79_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|turnaround.R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90LCrawler>g____getter|80_0: clean
	private static object Bindings____CreatePropertyBinding__Turn90LCrawler_g____getter_80_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.turnaround.";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Turn90RCrawler>g____getter|81_0: clean
	private static object Bindings____CreatePropertyBinding__Turn90RCrawler_g____getter_81_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.turnaround.R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__Blind>g____getter|82_0: clean
	private static object Bindings____CreatePropertyBinding__Blind_g____getter_82_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|hit.eye";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__SitBlind>g____getter|83_0: clean
	private static object Bindings____CreatePropertyBinding__SitBlind_g____getter_83_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|sit_hit_eye";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__BlindCrawler>g____getter|84_0: clean
	private static object Bindings____CreatePropertyBinding__BlindCrawler_g____getter_84_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|crawler.hiteyes";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtL>g____getter|85_0: clean
	private static object Bindings____CreatePropertyBinding__ArmHurtL_g____getter_85_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|arm_hurt_L";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__ArmHurtR>g____getter|86_0: clean
	private static object Bindings____CreatePropertyBinding__ArmHurtR_g____getter_86_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|arm_hurt_R";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__CoverNape>g____getter|87_0: clean
	private static object Bindings____CreatePropertyBinding__CoverNape_g____getter_87_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|idle.recovery";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteLaugh>g____getter|88_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteLaugh_g____getter_88_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|laugh";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|89_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteNod_g____getter_89_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|emote_titan_yes";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteShake>g____getter|90_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteShake_g____getter_90_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|emote_titan_no";
	}

	// CustomLogic.CustomLogicTitanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|91_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteRoar_g____getter_91_0(CustomLogicTitanAnimationEnum __i)
	{
		return (Il2CppObject *)"Amarture_VER2|attack.scream";
	}
}
