// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicGameBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicGameBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x20005B3")]
[CompilerGenerated]
internal class CustomLogicGameBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005B4")]
	public static class Factory
	{
		[Token(Token = "0x6003469")]
		[Address(RVA = "0x59D4DE0", Offset = "0x59D3DE0", VA = "0x59D4DE0")]
		public static CustomLogicGameBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicGameBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGameBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicGameBuiltin();
			return __this;
		}
	}

	[Token(Token = "0x20005B5")]
	public static class Bindings
	{
		[Token(Token = "0x40018BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600346A")]
		[Address(RVA = "0x59D4EC0", Offset = "0x59D3EC0", VA = "0x59D4EC0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicGameBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicGameBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6e104b4f) {
				if (uVar2 < 0x444d9eda) {
					if (uVar2 < 0x2b56c4fc) {
						if (uVar2 < 0x1f94047f) {
							if (uVar2 < 0x177ad93c) {
								if (uVar2 == 0x541c794) {
									bVar1 = (name == "SetPreloadGeneralSetting");
									if (bVar1) {
										if ((typeof(CustomLogicGameBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadGeneralSetting();
										return (ICLMemberBinding)pCVar3;
									}
								}
								else if (uVar2 == 0x177ad93b) {
									bVar1 = (name == "ShowKillFeedAll");
									if (bVar1) {
										if ((typeof(CustomLogicGameBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__ShowKillFeedAll();
										return (ICLMemberBinding)pCVar3;
									}
								}
							}
							else if (uVar2 == 0x1aa259a2) {
								bVar1 = (name == "SpawnProjectileWithOwner");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnProjectileWithOwner();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1f94047e) {
								bVar1 = (name == "SaveExperienceScore");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SaveExperienceScore();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x2075e2a8) {
							if (uVar2 == 0x203c8139) {
								bVar1 = (name == "DefaultAddKillScore");
								if (bVar1) {
									pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__DefaultAddKillScore();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x2075e2a7) {
								bVar1 = (name == "MainCharacter");
								if (bVar1) {
									pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__MainCharacter();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x2a610338) {
							bVar1 = (name == "Debug");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__Debug();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2b56c4fb) {
							bVar1 = (name == "SpawnShifter");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnShifter();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x3411d8c8) {
						if (uVar2 < 0x2e389efc) {
							if (uVar2 == 0x2cf09a84) {
								bVar1 = (name == "SetPreloadMiscSetting");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadMiscSetting();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x2e389efb) {
								bVar1 = (name == "PlayerTitans");
								if (bVar1) {
									pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__PlayerTitans();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x31cb34ce) {
							bVar1 = (name == "SpawnShifterAt");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnShifterAt();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3411d8c7) {
							bVar1 = (name == "SpawnTitanAt");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitanAt();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x35d2d6c6) {
						if (uVar2 == 0x34e873c4) {
							bVar1 = (name == "SpawnUnscaledEffect");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnUnscaledEffect();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x35d2d6c5) {
							bVar1 = (name == "SetPlaylist");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPlaylist();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3bba96bf) {
						bVar1 = (name == "SpawnProjectile");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnProjectile();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3c86640b) {
						bVar1 = (name == "SaveExperienceCompletionTime");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SaveExperienceCompletionTime();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x444d9ed9) {
						bVar1 = (name == "IsExperience");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__IsExperience();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x55e82501) {
					if (uVar2 < 0x4e95b0ee) {
						if (uVar2 < 0x459c1314) {
							if (uVar2 == 0x4514d439) {
								bVar1 = (name == "SetPreloadGameMode");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadGameMode();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x459c1313) {
								bVar1 = (name == "GetGeneralSetting");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__GetGeneralSetting();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x4609842f) {
							bVar1 = (name == "DefaultShowKillFeed");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__DefaultShowKillFeed();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x4e95b0ed) {
							bVar1 = (name == "SpawnPlayer");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnPlayer();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x4f326cfd) {
						if (uVar2 == 0x4f00efb2) {
							bVar1 = (name == "EndTimeLeft");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__EndTimeLeft();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x4f326cfc) {
							bVar1 = (name == "SpawnHumanAt");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnHumanAt();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x52ed1a20) {
						bVar1 = (name == "AITitans");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__AITitans();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x55e82500) {
						bVar1 = (name == "ShowScoreboardStatus");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__ShowScoreboardStatus();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x5ea6cd54) {
					if (uVar2 < 0x5d069fc9) {
						if (uVar2 == 0x5c14003e) {
							bVar1 = (name == "Titans");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__Titans();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x5d069fc8) {
							bVar1 = (name == "DefaultHideKillScore");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__DefaultHideKillScore();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x5e4e5f76) {
						bVar1 = (name == "ShowKillScore");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__ShowKillScore();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5ea6cd53) {
						bVar1 = (name == "SpawnTitans");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitans();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x62485e87) {
					if (uVar2 == 0x619baabe) {
						bVar1 = (name == "CanSaveExperienceScore");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__CanSaveExperienceScore();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x62485e86) {
						bVar1 = (name == "SpawnTitansAt");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitansAt();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x66ef4f10) {
					bVar1 = (name == "SpawnPlayerAt");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnPlayerAt();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6d57abb9) {
					bVar1 = (name == "GetMiscSetting");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__GetMiscSetting();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6e104b4e) {
					bVar1 = (name == "PlayerHumans");
					if (bVar1) {
						pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__PlayerHumans();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xc4c554de) {
				if (uVar2 < 0x9061daa7) {
					if (uVar2 < 0x7b40a20a) {
						if (uVar2 < 0x770cabbb) {
							if (uVar2 == 0x73e55886) {
								bVar1 = (name == "SetPreloadMap");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadMap();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x770cabba) {
								bVar1 = (name == "SetSong");
								if (bVar1) {
									pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetSong();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x7a63a383) {
							bVar1 = (name == "SpawnPlayerAtAll");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnPlayerAtAll();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7b40a209) {
							bVar1 = (name == "SetPreloadModeSetting");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadModeSetting();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x8da9183e) {
						if (uVar2 == 0x86a5057c) {
							bVar1 = (name == "SpawnPlayerAll");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnPlayerAll();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x8da9183d) {
							bVar1 = (name == "DrawRay");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__DrawRay();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x8deaef15) {
						bVar1 = (name == "SpawnTitansAsync");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitansAsync();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9061daa6) {
						bVar1 = (name == "IsEnding");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__IsEnding();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xa0137020) {
					if (uVar2 < 0x935c8bb0) {
						if (uVar2 == 0x930b044b) {
							bVar1 = (name == "Humans");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__Humans();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x935c8baf) {
							bVar1 = (name == "AIShifters");
							if (bVar1) {
								pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__AIShifters();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x947f7155) {
						bVar1 = (name == "AIHumans");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__AIHumans();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xa013701f) {
						bVar1 = (name == "DefaultShowKillScore");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__DefaultShowKillScore();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xbc3a7c7a) {
					if (uVar2 == 0xa100db20) {
						bVar1 = (name == "PlayerShifters");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__PlayerShifters();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xbc3a7c79) {
						bVar1 = (name == "LoadPreloadPreset");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__LoadPreloadPreset();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xbcac6db6) {
					bVar1 = (name == "SetPreloadTitanSetting");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SetPreloadTitanSetting();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc008ebe1) {
					bVar1 = (name == "SpawnHuman");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnHuman();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc4c554dd) {
					bVar1 = (name == "Shifters");
					if (bVar1) {
						pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__Shifters();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe5ac988a) {
				if (uVar2 < 0xcf93764b) {
					if (uVar2 < 0xcc06912c) {
						if (uVar2 == 0xc7260798) {
							bVar1 = (name == "ShowKillFeed");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__ShowKillFeed();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xcc06912b) {
							bVar1 = (name == "PrintAll");
							if (bVar1) {
								pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__PrintAll();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0xce302050) {
						bVar1 = (name == "Loadouts");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__Loadouts();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xcf93764a) {
						bVar1 = (name == "End");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__End();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xdbc1608d) {
					if (uVar2 == 0xd14f5a0c) {
						bVar1 = (name == "ExperienceID");
						if (bVar1) {
							pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__ExperienceID();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xdbc1608c) {
						bVar1 = (name == "RestartWithPreloadSettings");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__RestartWithPreloadSettings();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe19eaead) {
					bVar1 = (name == "SpawnHorse");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnHorse();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe3470562) {
					bVar1 = (name == "ShowScoreboardLoadout");
					if (bVar1) {
						pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__ShowScoreboardLoadout();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe5ac9889) {
					bVar1 = (name == "SpawnEffect");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnEffect();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xeb1c5d33) {
				if (uVar2 < 0xe7990e31) {
					if (uVar2 == 0xe6a5bf31) {
						bVar1 = (name == "GetTitanSetting");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__GetTitanSetting();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xe7990e30) {
						bVar1 = (name == "FindCharacterByViewID");
						if (bVar1) {
							pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__FindCharacterByViewID();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe8320d28) {
					bVar1 = (name == "Print");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__Print();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xeb1c5d32) {
					bVar1 = (name == "SpawnTitan");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitan();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf1244ac1) {
				if (uVar2 == 0xeb1f3d1a) {
					bVar1 = (name == "SpawnTitansAtAsync");
					if (bVar1) {
						pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__SpawnTitansAtAsync();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf1244ac0) {
					bVar1 = (name == "ForcedLoadout");
					if (bVar1) {
						pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__ForcedLoadout();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xf6719867) {
				bVar1 = (name == "ForcedCharacterType");
				if (bVar1) {
					if ((typeof(CustomLogicGameBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings)) ;
					}
					pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__ForcedCharacterType();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf6b9b56f) {
				bVar1 = (name == "Horses");
				if (bVar1) {
					if ((typeof(CustomLogicGameBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings)) ;
					}
					pCVar4 = CustomLogicGameBuiltin.Bindings.__CreatePropertyBinding__Horses();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfbcf6143) {
				bVar1 = (name == "GetExperienceScore");
				if (bVar1) {
					if ((typeof(CustomLogicGameBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicGameBuiltin.Bindings.__CreateMethodBinding__GetExperienceScore();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGameBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600346B")]
		[Address(RVA = "0x59D6820", Offset = "0x59D5820", VA = "0x59D6820")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsEnding()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsEnding): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d63 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d63 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600346C")]
		[Address(RVA = "0x59D68C0", Offset = "0x59D58C0", VA = "0x59D68C0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__EndTimeLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__EndTimeLeft): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d64 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d64 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600346D")]
		[Address(RVA = "0x59D6960", Offset = "0x59D5960", VA = "0x59D6960")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsExperience()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsExperience): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d65 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d65 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600346E")]
		[Address(RVA = "0x59D6A00", Offset = "0x59D5A00", VA = "0x59D6A00")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ExperienceID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d66 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d66 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600346F")]
		[Address(RVA = "0x59D6AA0", Offset = "0x59D5AA0", VA = "0x59D6AA0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__CanSaveExperienceScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__CanSaveExperienceScore): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d67 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d67 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003470")]
		[Address(RVA = "0x59D6B40", Offset = "0x59D5B40", VA = "0x59D6B40")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__MainCharacter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__MainCharacter): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d68 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d68 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003471")]
		[Address(RVA = "0x59D6BE0", Offset = "0x59D5BE0", VA = "0x59D6BE0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Titans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Titans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d69 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d69 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003472")]
		[Address(RVA = "0x59D6C80", Offset = "0x59D5C80", VA = "0x59D6C80")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AITitans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AITitans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6a = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003473")]
		[Address(RVA = "0x59D6D20", Offset = "0x59D5D20", VA = "0x59D6D20")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerTitans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerTitans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6b = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003474")]
		[Address(RVA = "0x59D6DC0", Offset = "0x59D5DC0", VA = "0x59D6DC0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Shifters()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Shifters): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6c = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003475")]
		[Address(RVA = "0x59D6E60", Offset = "0x59D5E60", VA = "0x59D6E60")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIShifters()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIShifters): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6d = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003476")]
		[Address(RVA = "0x59D6F00", Offset = "0x59D5F00", VA = "0x59D6F00")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerShifters()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerShifters): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6e = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003477")]
		[Address(RVA = "0x59D6FA0", Offset = "0x59D5FA0", VA = "0x59D6FA0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Horses()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Horses): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d6f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d6f = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003478")]
		[Address(RVA = "0x59D7040", Offset = "0x59D6040", VA = "0x59D7040")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Humans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Humans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d70 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d70 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003479")]
		[Address(RVA = "0x59D70E0", Offset = "0x59D60E0", VA = "0x59D70E0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIHumans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIHumans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d71 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d71 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600347A")]
		[Address(RVA = "0x59D7180", Offset = "0x59D6180", VA = "0x59D7180")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerHumans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerHumans): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d72 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d72 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600347B")]
		[Address(RVA = "0x59D7220", Offset = "0x59D6220", VA = "0x59D7220")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Loadouts()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Loadouts): 3 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d73 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d73 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600347C")]
		[Address(RVA = "0x59D72C0", Offset = "0x59D62C0", VA = "0x59D72C0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillScore): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d74 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d74 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____g);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600347D")]
		[Address(RVA = "0x59D73A0", Offset = "0x59D63A0", VA = "0x59D73A0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillFeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillFeed): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d75 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d75 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____ge);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600347E")]
		[Address(RVA = "0x59D7480", Offset = "0x59D6480", VA = "0x59D7480")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultHideKillScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultHideKillScore): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d76 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d76 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____g);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600347F")]
		[Address(RVA = "0x59D7560", Offset = "0x59D6560", VA = "0x59D7560")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultAddKillScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultAddKillScore): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d77 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d77 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____ge);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003480")]
		[Address(RVA = "0x59D7640", Offset = "0x59D6640", VA = "0x59D7640")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardLoadout()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardLoadout): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d78 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d78 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_71bf4e8);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003481")]
		[Address(RVA = "0x59D7720", Offset = "0x59D6720", VA = "0x59D7720")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardStatus()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardStatus): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d79 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d79 = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____g);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003482")]
		[Address(RVA = "0x59D7800", Offset = "0x59D6800", VA = "0x59D7800")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedCharacterType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedCharacterType): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d7a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d7a = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____ge);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003483")]
		[Address(RVA = "0x59D78E0", Offset = "0x59D68E0", VA = "0x59D78E0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedLoadout()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedLoadout): 4 lines keep C-only constructs
			Func<CustomLogicGameBuiltin, object> __this;
			Action<CustomLogicGameBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicGameBuiltin> __this_01;

			if (Il2CppMethodInitialized_07546d7b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicGameBuiltin>)) ;
				Il2CppMethodInitialized_07546d7b = true;
			}
			__this = new Func<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____getter_2);
			__this_00 = new Action<CustomLogicGameBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicGameBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003484")]
		[Address(RVA = "0x59D79C0", Offset = "0x59D69C0", VA = "0x59D79C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetExperienceScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetExperienceScore): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d7c == false) {
				Il2CppMethodInitialized_07546d7c = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003485")]
		[Address(RVA = "0x59D7B00", Offset = "0x59D6B00", VA = "0x59D7B00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SaveExperienceScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceScore): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d7d == false) {
				Il2CppMethodInitialized_07546d7d = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003486")]
		[Address(RVA = "0x59D7C40", Offset = "0x59D6C40", VA = "0x59D7C40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SaveExperienceCompletionTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceCompletionTime): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d7e == false) {
				Il2CppMethodInitialized_07546d7e = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003487")]
		[Address(RVA = "0x59D7D80", Offset = "0x59D6D80", VA = "0x59D7D80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHorse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHorse): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d7f == false) {
				Il2CppMethodInitialized_07546d7f = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003488")]
		[Address(RVA = "0x59D7EC0", Offset = "0x59D6EC0", VA = "0x59D7EC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Debug()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Debug): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d80 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0) ;
				Il2CppMethodInitialized_07546d80 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003489")]
		[Address(RVA = "0x59D8000", Offset = "0x59D7000", VA = "0x59D8000")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Print()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Print): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d81 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0) ;
				Il2CppMethodInitialized_07546d81 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348A")]
		[Address(RVA = "0x59D8140", Offset = "0x59D7140", VA = "0x59D8140")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__PrintAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__PrintAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d82 == false) {
				Il2CppMethodInitialized_07546d82 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348B")]
		[Address(RVA = "0x59D8280", Offset = "0x59D7280", VA = "0x59D8280")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetGeneralSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetGeneralSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d83 == false) {
				Il2CppMethodInitialized_07546d83 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348C")]
		[Address(RVA = "0x59D83C0", Offset = "0x59D73C0", VA = "0x59D83C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetTitanSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetTitanSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d84 == false) {
				Il2CppMethodInitialized_07546d84 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348D")]
		[Address(RVA = "0x59D8500", Offset = "0x59D7500", VA = "0x59D8500")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetMiscSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetMiscSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d85 == false) {
				Il2CppMethodInitialized_07546d85 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348E")]
		[Address(RVA = "0x59D8640", Offset = "0x59D7640", VA = "0x59D8640")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGeneralSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGeneralSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d86 == false) {
				Il2CppMethodInitialized_07546d86 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600348F")]
		[Address(RVA = "0x59D8780", Offset = "0x59D7780", VA = "0x59D8780")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadTitanSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadTitanSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d87 == false) {
				Il2CppMethodInitialized_07546d87 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003490")]
		[Address(RVA = "0x59D88C0", Offset = "0x59D78C0", VA = "0x59D88C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMiscSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMiscSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d88 == false) {
				Il2CppMethodInitialized_07546d88 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003491")]
		[Address(RVA = "0x59D8A00", Offset = "0x59D7A00", VA = "0x59D8A00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadModeSetting()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadModeSetting): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d89 == false) {
				Il2CppMethodInitialized_07546d89 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003492")]
		[Address(RVA = "0x59D8B40", Offset = "0x59D7B40", VA = "0x59D8B40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMap): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8a == false) {
				Il2CppMethodInitialized_07546d8a = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003493")]
		[Address(RVA = "0x59D8C80", Offset = "0x59D7C80", VA = "0x59D8C80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGameMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGameMode): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8b == false) {
				Il2CppMethodInitialized_07546d8b = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003494")]
		[Address(RVA = "0x59D8DC0", Offset = "0x59D7DC0", VA = "0x59D8DC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__LoadPreloadPreset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__LoadPreloadPreset): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8c == false) {
				Il2CppMethodInitialized_07546d8c = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003495")]
		[Address(RVA = "0x59D8F00", Offset = "0x59D7F00", VA = "0x59D8F00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__RestartWithPreloadSettings()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__RestartWithPreloadSettings): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8d == false) {
				Il2CppMethodInitialized_07546d8d = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003496")]
		[Address(RVA = "0x59D9040", Offset = "0x59D8040", VA = "0x59D9040")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__End()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__End): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8e == false) {
				Il2CppMethodInitialized_07546d8e = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__45_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__45_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__45_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003497")]
		[Address(RVA = "0x59D9180", Offset = "0x59D8180", VA = "0x59D9180")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__FindCharacterByViewID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__FindCharacterByViewID): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d8f == false) {
				Il2CppMethodInitialized_07546d8f = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__46_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__46_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__46_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003498")]
		[Address(RVA = "0x59D92C0", Offset = "0x59D82C0", VA = "0x59D92C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitan): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d90 == false) {
				Il2CppMethodInitialized_07546d90 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__47_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__47_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__47_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003499")]
		[Address(RVA = "0x59D9400", Offset = "0x59D8400", VA = "0x59D9400")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitanAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitanAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d91 == false) {
				Il2CppMethodInitialized_07546d91 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__48_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__48_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__48_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349A")]
		[Address(RVA = "0x59D9540", Offset = "0x59D8540", VA = "0x59D9540")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitans): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d92 == false) {
				Il2CppMethodInitialized_07546d92 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__49_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__49_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__49_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349B")]
		[Address(RVA = "0x59D9680", Offset = "0x59D8680", VA = "0x59D9680")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAsync()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAsync): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d93 == false) {
				Il2CppMethodInitialized_07546d93 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__50_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__50_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__50_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349C")]
		[Address(RVA = "0x59D97C0", Offset = "0x59D87C0", VA = "0x59D97C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d94 == false) {
				Il2CppMethodInitialized_07546d94 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__51_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__51_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__51_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349D")]
		[Address(RVA = "0x59D9900", Offset = "0x59D8900", VA = "0x59D9900")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAtAsync()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAtAsync): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d95 == false) {
				Il2CppMethodInitialized_07546d95 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__52_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__52_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__52_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349E")]
		[Address(RVA = "0x59D9A40", Offset = "0x59D8A40", VA = "0x59D9A40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifter): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d96 == false) {
				Il2CppMethodInitialized_07546d96 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__53_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__53_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__53_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600349F")]
		[Address(RVA = "0x59D9B80", Offset = "0x59D8B80", VA = "0x59D9B80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHuman()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHuman): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d97 == false) {
				Il2CppMethodInitialized_07546d97 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__54_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__54_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__54_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A0")]
		[Address(RVA = "0x59D9CC0", Offset = "0x59D8CC0", VA = "0x59D9CC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHumanAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHumanAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d98 == false) {
				Il2CppMethodInitialized_07546d98 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__55_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__55_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__55_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A1")]
		[Address(RVA = "0x59D9E00", Offset = "0x59D8E00", VA = "0x59D9E00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifterAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifterAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d99 == false) {
				Il2CppMethodInitialized_07546d99 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__56_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__56_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__56_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A2")]
		[Address(RVA = "0x59D9F40", Offset = "0x59D8F40", VA = "0x59D9F40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectile()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectile): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9a == false) {
				Il2CppMethodInitialized_07546d9a = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__57_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__57_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__57_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A3")]
		[Address(RVA = "0x59DA080", Offset = "0x59D9080", VA = "0x59DA080")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectileWithOwner()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectileWithOwner): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9b == false) {
				Il2CppMethodInitialized_07546d9b = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__58_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__58_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__58_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A4")]
		[Address(RVA = "0x59DA1C0", Offset = "0x59D91C0", VA = "0x59DA1C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnEffect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnEffect): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9c == false) {
				Il2CppMethodInitialized_07546d9c = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__59_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__59_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__59_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A5")]
		[Address(RVA = "0x59DA300", Offset = "0x59D9300", VA = "0x59DA300")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnUnscaledEffect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnUnscaledEffect): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9d == false) {
				Il2CppMethodInitialized_07546d9d = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__60_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__60_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__60_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A6")]
		[Address(RVA = "0x59DA440", Offset = "0x59D9440", VA = "0x59DA440")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayer): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9e == false) {
				Il2CppMethodInitialized_07546d9e = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__61_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__61_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__61_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A7")]
		[Address(RVA = "0x59DA580", Offset = "0x59D9580", VA = "0x59DA580")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546d9f == false) {
				Il2CppMethodInitialized_07546d9f = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__62_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__62_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__62_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A8")]
		[Address(RVA = "0x59DA6C0", Offset = "0x59D96C0", VA = "0x59DA6C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da0 == false) {
				Il2CppMethodInitialized_07546da0 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__63_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__63_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__63_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034A9")]
		[Address(RVA = "0x59DA800", Offset = "0x59D9800", VA = "0x59DA800")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAtAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAtAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da1 == false) {
				Il2CppMethodInitialized_07546da1 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__64_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__64_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__64_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AA")]
		[Address(RVA = "0x59DA940", Offset = "0x59D9940", VA = "0x59DA940")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPlaylist()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPlaylist): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da2 == false) {
				Il2CppMethodInitialized_07546da2 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__65_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__65_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__65_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AB")]
		[Address(RVA = "0x59DAA80", Offset = "0x59D9A80", VA = "0x59DAA80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetSong()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetSong): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da3 == false) {
				Il2CppMethodInitialized_07546da3 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__66_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__66_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__66_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AC")]
		[Address(RVA = "0x59DABC0", Offset = "0x59D9BC0", VA = "0x59DABC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__DrawRay()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__DrawRay): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da4 == false) {
				Il2CppMethodInitialized_07546da4 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__67_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__67_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__67_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AD")]
		[Address(RVA = "0x59DAD00", Offset = "0x59D9D00", VA = "0x59DAD00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillScore()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillScore): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da5 == false) {
				Il2CppMethodInitialized_07546da5 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__68_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__68_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__68_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AE")]
		[Address(RVA = "0x59DAE40", Offset = "0x59D9E40", VA = "0x59DAE40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeed): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da6 == false) {
				Il2CppMethodInitialized_07546da6 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__69_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__69_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__69_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60034AF")]
		[Address(RVA = "0x59DAF80", Offset = "0x59D9F80", VA = "0x59DAF80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeedAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeedAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicGameBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicGameBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546da7 == false) {
				Il2CppMethodInitialized_07546da7 = true;
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicGameBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__70_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicGameBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__70_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicGameBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicGameBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicGameBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0);
				pCVar2 = typeof(CustomLogicGameBuiltin.Bindings.c).static_fields;
				pCVar2.__9__70_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicGameBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40018BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _lastSetTopLabel;

	[Token(Token = "0x40018BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Dictionary<string, CustomLogicListBuiltin> _cachedLists;

	[Token(Token = "0x17000989")]
	private InGameManager _inGameManager
	{
		[Token(Token = "0x6003410")]
		[Address(RVA = "0x59CB9F0", Offset = "0x59CA9F0", VA = "0x59CB9F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get__inGameManager): 1 lines keep C-only constructs
			byte bVar1;
			InGameManager pGVar2;

			pGVar2 = (InGameManager)SceneLoader.CurrentGameManager;
			if (pGVar2 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
			}
			return pGVar2;
		}
	}

	[Token(Token = "0x1700098A")]
	public bool IsEnding
	{
		[Token(Token = "0x6003411")]
		[Address(RVA = "0x59CBA70", Offset = "0x59CAA70", VA = "0x59CBA70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_IsEnding): 1 lines keep C-only constructs
			byte bVar1;
			BaseGameManager pGVar2;

			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			return (bool)*(byte)&(*(ulong)((sbyte)pGVar2 + 0x70));
		}
	}

	[Token(Token = "0x1700098B")]
	public float EndTimeLeft
	{
		[Token(Token = "0x6003412")]
		[Address(RVA = "0x59CBAF0", Offset = "0x59CAAF0", VA = "0x59CBAF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_EndTimeLeft): 1 lines keep C-only constructs
			byte bVar1;
			BaseGameManager pGVar2;

			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			return *(float)((long)&(*(ulong)((sbyte)pGVar2 + 0x70)) + 4);
		}
	}

	[Token(Token = "0x1700098C")]
	public bool IsExperience
	{
		[Token(Token = "0x6003413")]
		[Address(RVA = "0x59CBB70", Offset = "0x59CAB70", VA = "0x59CBB70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_IsExperience): clean
			bool bVar1;

			return bVar1;
		}
	}

	[Token(Token = "0x1700098D")]
	public string ExperienceID
	{
		[Token(Token = "0x6003414")]
		[Address(RVA = "0x59CBBB0", Offset = "0x59CABB0", VA = "0x59CBBB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ExperienceID): clean
			String pSVar1;

			return pSVar1;
		}
	}

	[Token(Token = "0x1700098E")]
	public bool CanSaveExperienceScore
	{
		[Token(Token = "0x6003415")]
		[Address(RVA = "0x59CBBF0", Offset = "0x59CABF0", VA = "0x59CBBF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_CanSaveExperienceScore): clean
			sbyte cVar1;
			uint uVar2;
			bool bVar3;

			if (Il2CppMethodInitialized_07546d15 == false) {
				Il2CppMethodInitialized_07546d15 = true;
				uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			if (Il2CppMethodInitialized_07544cc2 == false) {
				Il2CppMethodInitialized_07544cc2 = true;
				uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				cVar1 = PhotonNetwork.offlineMode;
			}
			else {
				cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
			}
			if (cVar1 == false) {
				return false;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x1700098F")]
	public CustomLogicCharacterBuiltin MainCharacter
	{
		[Token(Token = "0x600341A")]
		[Address(RVA = "0x59CC1A0", Offset = "0x59CB1A0", VA = "0x59CC1A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_MainCharacter): 1 lines keep C-only constructs
			byte bVar1;
			BaseGameManager pGVar2;
			BaseCharacter character;
			bool bVar3;
			CustomLogicCharacterBuiltin pCVar4;

			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			character = (*(ulong)((sbyte)pGVar2 + 0x80));
			bVar3 = ((Object)character == null);
			if (bVar3) {
				return null;
			}
			if ((typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor == 0) {
				return pCVar4;
			}
			return pCVar4;
		}
	}

	[Token(Token = "0x17000990")]
	public CustomLogicListBuiltin Titans
	{
		[Token(Token = "0x600341B")]
		[Address(RVA = "0x59CC2B0", Offset = "0x59CB2B0", VA = "0x59CC2B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_Titans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			PhotonView __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			BasicTitan pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicTitanBuiltin __this_02;
			byte[] auStack_68 = new byte[8];
			BasicTitan pCStack_58;
			byte[] auStack_50 = new byte[16];
			BasicTitan pCStack_40;
			CustomLogicGameBuiltin pCStack_38;

			auStack_68 = (byte[])0x0;
			pCStack_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acc6db;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acc6e0: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BasicTitan>("Titans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x48)), true, true, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acc6db;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acc6e0;
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 == null) goto label_05acc6db;
				pCStack_38 = this;
				auStack_50.GetEnumerator((HashSet<object>)__this_00);
				pCStack_58 = pCStack_40;
				auStack_68 = (byte[])auStack_50._0_8_;
				auStack_50._0_8_ = null;
				auStack_50._8_8_ = auStack_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = auStack_68.MoveNext();
						pCVar8 = pCStack_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05acc6d1;
							if (pCVar8.Dead == false) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05acc540: ;
					bVar9 = auStack_68.MoveNext();
					pCVar8 = pCStack_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05acc6d1: ;
								throw new NullReferenceException();
							}
							if (pCVar8.Dead == false) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicTitanBuiltin)) ;
								__this_02 = new CustomLogicTitanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05acc540;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05acc540;
					}
				}
				auStack_68.Dispose();
				this = pCStack_38;
				pSVar6 = (Dictionary<object, object>)pCStack_38._cachedLists;
				if (pSVar6 == null) goto label_05acc6db;
				pSVar6.set_Item((Il2CppObject *)"Titans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"Titans");
				return pCVar10;
			}
		label_05acc6db: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000991")]
	public CustomLogicListBuiltin AITitans
	{
		[Token(Token = "0x600341C")]
		[Address(RVA = "0x59CC760", Offset = "0x59CB760", VA = "0x59CC760")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_AITitans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			PhotonView __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			BasicTitan pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicTitanBuiltin __this_02;
			byte[] local_68 = new byte[8];
			BasicTitan local_58;
			byte[] local_50 = new byte[16];
			BasicTitan local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05accb93;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05accb98: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BasicTitan>("AITitans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x48)), true, false, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05accb93;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05accb98;
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 == null) goto label_05accb93;
				local_38 = this;
				local_50.GetEnumerator((HashSet<object>)__this_00);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = local_68.MoveNext();
						pCVar8 = local_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05accb8e;
							if ((pCVar8.Dead == false) && (pCVar8.AI != false)) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05acc9f0: ;
					bVar9 = local_68.MoveNext();
					pCVar8 = local_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05accb8e: ;
								throw new NullReferenceException();
							}
							if ((pCVar8.Dead == false) && (pCVar8.AI != false)) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicTitanBuiltin)) ;
								__this_02 = new CustomLogicTitanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05acc9f0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05acc9f0;
					}
				}
				local_68.Dispose();
				this = local_38;
				pSVar6 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar6 == null) goto label_05accb93;
				pSVar6.set_Item((Il2CppObject *)"AITitans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"AITitans");
				return pCVar10;
			}
		label_05accb93: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000992")]
	public CustomLogicListBuiltin PlayerTitans
	{
		[Token(Token = "0x600341D")]
		[Address(RVA = "0x59CCC20", Offset = "0x59CBC20", VA = "0x59CCC20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_PlayerTitans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			PhotonView __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			BasicTitan pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicTitanBuiltin __this_02;
			byte[] local_68 = new byte[8];
			BasicTitan local_58;
			byte[] local_50 = new byte[16];
			BasicTitan local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acd053;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acd058: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BasicTitan>("PlayerTitans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x48)), false, true, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acd053;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acd058;
				__this_00 = (*(ulong)((sbyte)pGVar4 + 0x48));
				if (__this_00 == null) goto label_05acd053;
				local_38 = this;
				local_50.GetEnumerator((HashSet<object>)__this_00);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = local_68.MoveNext();
						pCVar8 = local_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05acd04e;
							if ((pCVar8.Dead == false) && (pCVar8.AI == false)) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05acceb0: ;
					bVar9 = local_68.MoveNext();
					pCVar8 = local_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05acd04e: ;
								throw new NullReferenceException();
							}
							if ((pCVar8.Dead == false) && (pCVar8.AI == false)) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicTitanBuiltin)) ;
								__this_02 = new CustomLogicTitanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05acceb0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05acceb0;
					}
				}
				local_68.Dispose();
				this = local_38;
				pSVar6 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar6 == null) goto label_05acd053;
				pSVar6.set_Item((Il2CppObject *)"PlayerTitans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"PlayerTitans");
				return pCVar10;
			}
		label_05acd053: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000993")]
	public CustomLogicListBuiltin Shifters
	{
		[Token(Token = "0x600341E")]
		[Address(RVA = "0x59CD0E0", Offset = "0x59CC0E0", VA = "0x59CD0E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_Shifters): 11 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			List<object> pSVar5;
			Object[] pSVar6;
			Dictionary<object, object> pSVar7;
			WallColossalShifter shifter;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicShifterBuiltin __this_00;
			CustomLogicWallColossalBuiltin __this_01;
			byte[] local_68 = new byte[8];
			WallColossalShifter local_58;
			byte[] local_50 = new byte[16];
			WallColossalShifter local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acd5cb;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acd5d0: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BaseShifter>("Shifters", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x50)), true, true, true);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acd5cb;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acd5d0;
				local_38 = this;
				if ((*(ulong)((sbyte)pGVar4 + 0x50)) == null) goto label_05acd5cb;
				local_50.GetEnumerator((HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x50)));
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
		label_05acd380: ;
				bVar9 = local_68.MoveNext();
				shifter = local_58;
				if (bVar9) {
					bVar9 = ((Object)shifter != null);
					if (bVar9) {
						if (shifter == null) {
							throw new NullReferenceException();
						}
						if ((shifter.Dead == false) || (shifter.TransformingToHuman != false)) {
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								if (pCVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pCVar10.List;
								__this_00 = new CustomLogicShifterBuiltin((BaseShifter)shifter);
								if (pSVar5 != null) {
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = pSVar5._items;
									if (pSVar6 != null) {
										uVar3 = pSVar5._size;
										if (uVar3 < (uint)pSVar6.Length) {
											pSVar5._size = uVar3 + 1;
											pSVar6[(int)uVar3] = (object)__this_00;
										}
										else {
											pSVar5.AddWithResize((object)__this_00);
										}
										goto label_05acd380;
									}
								}
								throw new NullReferenceException();
							}
							if (pCVar10 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pCVar10.List;
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								throw new InvalidCastException();
							}
							__this_01 = new CustomLogicWallColossalBuiltin(shifter);
							if (pSVar5 != null) {
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar5._items;
								if (pSVar6 != null) {
									uVar3 = pSVar5._size;
									if (uVar3 < (uint)pSVar6.Length) {
										pSVar5._size = uVar3 + 1;
										pSVar6[(int)uVar3] = (object)__this_01;
									}
									else {
										pSVar5.AddWithResize((object)__this_01);
									}
									goto label_05acd380;
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05acd380;
				}
				local_68.Dispose();
				this = local_38;
				pSVar7 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar7 == null) goto label_05acd5cb;
				pSVar7.set_Item((Il2CppObject *)"Shifters", (object)pCVar10);
			}
			pSVar7 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar7 != null) {
				pCVar10 = pSVar7.get_Item((Il2CppObject *)"Shifters");
				return pCVar10;
			}
		label_05acd5cb: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000994")]
	public CustomLogicListBuiltin AIShifters
	{
		[Token(Token = "0x600341F")]
		[Address(RVA = "0x59CD660", Offset = "0x59CC660", VA = "0x59CD660")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_AIShifters): 11 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			List<object> pSVar5;
			Object[] pSVar6;
			Dictionary<object, object> pSVar7;
			WallColossalShifter shifter;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicShifterBuiltin __this_00;
			CustomLogicWallColossalBuiltin __this_01;
			byte[] local_68 = new byte[8];
			WallColossalShifter local_58;
			byte[] local_50 = new byte[16];
			WallColossalShifter local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acdb4f;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acdb59: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BaseShifter>("AIShifters", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x50)), true, false, true);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acdb4f;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acdb59;
				local_38 = this;
				if ((*(ulong)((sbyte)pGVar4 + 0x50)) == null) goto label_05acdb4f;
				local_50.GetEnumerator((HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x50)));
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
		label_05acd900: ;
				bVar9 = local_68.MoveNext();
				shifter = local_58;
				if (bVar9) {
					bVar9 = ((Object)shifter != null);
					if (bVar9) {
						if (shifter == null) {
							throw new NullReferenceException();
						}
						if ((shifter.AI != false) &&((shifter.Dead == false || (shifter.TransformingToHuman != false)))) {
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								if (pCVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pCVar10.List;
								__this_00 = new CustomLogicShifterBuiltin((BaseShifter)shifter);
								if (pSVar5 != null) {
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = pSVar5._items;
									if (pSVar6 != null) {
										uVar3 = pSVar5._size;
										if (uVar3 < (uint)pSVar6.Length) {
											pSVar5._size = uVar3 + 1;
											pSVar6[(int)uVar3] = (object)__this_00;
										}
										else {
											pSVar5.AddWithResize((object)__this_00);
										}
										goto label_05acd900;
									}
								}
								throw new NullReferenceException();
							}
							if (pCVar10 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pCVar10.List;
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								throw new InvalidCastException();
							}
							__this_01 = new CustomLogicWallColossalBuiltin(shifter);
							if (pSVar5 != null) {
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar5._items;
								if (pSVar6 != null) {
									uVar3 = pSVar5._size;
									if (uVar3 < (uint)pSVar6.Length) {
										pSVar5._size = uVar3 + 1;
										pSVar6[(int)uVar3] = (object)__this_01;
									}
									else {
										pSVar5.AddWithResize((object)__this_01);
									}
									goto label_05acd900;
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05acd900;
				}
				local_68.Dispose();
				this = local_38;
				pSVar7 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar7 == null) goto label_05acdb4f;
				pSVar7.set_Item((Il2CppObject *)"AIShifters", (object)pCVar10);
			}
			pSVar7 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar7 != null) {
				pCVar10 = pSVar7.get_Item((Il2CppObject *)"AIShifters");
				return pCVar10;
			}
		label_05acdb4f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000995")]
	public CustomLogicListBuiltin PlayerShifters
	{
		[Token(Token = "0x6003420")]
		[Address(RVA = "0x59CDBF0", Offset = "0x59CCBF0", VA = "0x59CDBF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_PlayerShifters): 11 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			List<object> pSVar5;
			Object[] pSVar6;
			Dictionary<object, object> pSVar7;
			WallColossalShifter shifter;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicShifterBuiltin __this_00;
			CustomLogicWallColossalBuiltin __this_01;
			byte[] local_68 = new byte[8];
			WallColossalShifter local_58;
			byte[] local_50 = new byte[16];
			WallColossalShifter local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05ace0df;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05ace0e4: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<BaseShifter>("PlayerShifters", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x50)), false, true, true);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05ace0df;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05ace0e4;
				local_38 = this;
				if ((*(ulong)((sbyte)pGVar4 + 0x50)) == null) goto label_05ace0df;
				local_50.GetEnumerator((HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x50)));
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
		label_05acde90: ;
				bVar9 = local_68.MoveNext();
				shifter = local_58;
				if (bVar9) {
					bVar9 = ((Object)shifter != null);
					if (bVar9) {
						if (shifter == null) {
							throw new NullReferenceException();
						}
						if ((shifter.AI == false) &&((shifter.Dead == false || (shifter.TransformingToHuman != false)))) {
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								if (pCVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pCVar10.List;
								__this_00 = new CustomLogicShifterBuiltin((BaseShifter)shifter);
								if (pSVar5 != null) {
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = pSVar5._items;
									if (pSVar6 != null) {
										uVar3 = pSVar5._size;
										if (uVar3 < (uint)pSVar6.Length) {
											pSVar5._size = uVar3 + 1;
											pSVar6[(int)uVar3] = (object)__this_00;
										}
										else {
											pSVar5.AddWithResize((object)__this_00);
										}
										goto label_05acde90;
									}
								}
								throw new NullReferenceException();
							}
							if (pCVar10 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pCVar10.List;
							bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
							if (((shifter.klass._2).typeHierarchyDepth < bVar2) ||((shifter.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(WallColossalShifter))) {
								throw new InvalidCastException();
							}
							__this_01 = new CustomLogicWallColossalBuiltin(shifter);
							if (pSVar5 != null) {
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar5._items;
								if (pSVar6 != null) {
									uVar3 = pSVar5._size;
									if (uVar3 < (uint)pSVar6.Length) {
										pSVar5._size = uVar3 + 1;
										pSVar6[(int)uVar3] = (object)__this_01;
									}
									else {
										pSVar5.AddWithResize((object)__this_01);
									}
									goto label_05acde90;
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05acde90;
				}
				local_68.Dispose();
				this = local_38;
				pSVar7 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar7 == null) goto label_05ace0df;
				pSVar7.set_Item((Il2CppObject *)"PlayerShifters", (object)pCVar10);
			}
			pSVar7 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar7 != null) {
				pCVar10 = pSVar7.get_Item((Il2CppObject *)"PlayerShifters");
				return pCVar10;
			}
		label_05ace0df: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000996")]
	public CustomLogicListBuiltin Horses
	{
		[Token(Token = "0x6003421")]
		[Address(RVA = "0x59CE180", Offset = "0x59CD180", VA = "0x59CE180")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_Horses): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			List<object> __this_00;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			Horse pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicHorseBuiltin __this_01;
			byte[] local_68 = new byte[8];
			Horse local_58;
			byte[] local_50 = new byte[16];
			Horse local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05ace5ab;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05ace5b0: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<Horse>("Horses", (*(ulong)((sbyte)pGVar4 + 0x58)), true, true, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05ace5ab;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05ace5b0;
				if ((*(ulong)((sbyte)pGVar4 + 0x58)) == null) goto label_05ace5ab;
				local_38 = this;
				local_50.GetEnumerator((*(ulong)((sbyte)pGVar4 + 0x58)));
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = local_68.MoveNext();
						pCVar8 = local_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05ace5a1;
							if (pCVar8.Dead == false) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05ace410: ;
					bVar9 = local_68.MoveNext();
					pCVar8 = local_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05ace5a1: ;
								throw new NullReferenceException();
							}
							if (pCVar8.Dead == false) {
								__this_00 = pCVar10.List;
								__this_01 = il2cpp_codegen_object_new(typeof(CustomLogicHorseBuiltin)) ;
								__this_01 = new CustomLogicHorseBuiltin(pCVar8);
								if (__this_00 != null) {
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_00._items;
									if (pSVar5 != null) {
										uVar3 = __this_00._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_00._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_01;
										}
										else {
											__this_00.AddWithResize((object)__this_01);
										}
										goto label_05ace410;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05ace410;
					}
				}
				local_68.Dispose();
				this = local_38;
				pSVar6 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar6 == null) goto label_05ace5ab;
				pSVar6.set_Item((Il2CppObject *)"Horses", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"Horses");
				return pCVar10;
			}
		label_05ace5ab: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000997")]
	public CustomLogicListBuiltin Humans
	{
		[Token(Token = "0x6003423")]
		[Address(RVA = "0x59CE830", Offset = "0x59CD830", VA = "0x59CE830")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_Humans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			HashSet<object> __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			Human pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicHumanBuiltin __this_02;
			byte[] auStack_68 = new byte[8];
			Human pCStack_58;
			byte[] auStack_50 = new byte[16];
			Human pCStack_40;
			CustomLogicGameBuiltin pCStack_38;

			auStack_68 = (byte[])0x0;
			pCStack_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acec5b;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acec60: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<Human>("Humans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x40)), true, true, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acec5b;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acec60;
				__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x40));
				if (__this_00 == null) goto label_05acec5b;
				pCStack_38 = this;
				auStack_50.GetEnumerator(__this_00);
				pCStack_58 = pCStack_40;
				auStack_68 = (byte[])auStack_50._0_8_;
				auStack_50._0_8_ = null;
				auStack_50._8_8_ = auStack_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = auStack_68.MoveNext();
						pCVar8 = pCStack_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05acec51;
							if (pCVar8.Dead == false) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05aceac0: ;
					bVar9 = auStack_68.MoveNext();
					pCVar8 = pCStack_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05acec51: ;
								throw new NullReferenceException();
							}
							if (pCVar8.Dead == false) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicHumanBuiltin)) ;
								__this_02 = new CustomLogicHumanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05aceac0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05aceac0;
					}
				}
				auStack_68.Dispose();
				this = pCStack_38;
				pSVar6 = (Dictionary<object, object>)pCStack_38._cachedLists;
				if (pSVar6 == null) goto label_05acec5b;
				pSVar6.set_Item((Il2CppObject *)"Humans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"Humans");
				return pCVar10;
			}
		label_05acec5b: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000998")]
	public CustomLogicListBuiltin AIHumans
	{
		[Token(Token = "0x6003424")]
		[Address(RVA = "0x59CECE0", Offset = "0x59CDCE0", VA = "0x59CECE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_AIHumans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			HashSet<object> __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			Human pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicHumanBuiltin __this_02;
			byte[] local_68 = new byte[8];
			Human local_58;
			byte[] local_50 = new byte[16];
			Human local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acf113;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acf118: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<Human>("AIHumans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x40)), true, false, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acf113;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acf118;
				__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x40));
				if (__this_00 == null) goto label_05acf113;
				local_38 = this;
				local_50.GetEnumerator(__this_00);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = local_68.MoveNext();
						pCVar8 = local_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05acf10e;
							if ((pCVar8.Dead == false) && (pCVar8.AI != false)) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05acef70: ;
					bVar9 = local_68.MoveNext();
					pCVar8 = local_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05acf10e: ;
								throw new NullReferenceException();
							}
							if ((pCVar8.Dead == false) && (pCVar8.AI != false)) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicHumanBuiltin)) ;
								__this_02 = new CustomLogicHumanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05acef70;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05acef70;
					}
				}
				local_68.Dispose();
				this = local_38;
				pSVar6 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar6 == null) goto label_05acf113;
				pSVar6.set_Item((Il2CppObject *)"AIHumans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"AIHumans");
				return pCVar10;
			}
		label_05acf113: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000999")]
	public CustomLogicListBuiltin PlayerHumans
	{
		[Token(Token = "0x6003425")]
		[Address(RVA = "0x59CF1A0", Offset = "0x59CE1A0", VA = "0x59CF1A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_PlayerHumans): 8 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			BaseGameManager pGVar4;
			HashSet<object> __this_00;
			List<object> __this_01;
			Object[] pSVar5;
			Dictionary<object, object> pSVar6;
			Human pCVar8;
			bool bVar9;
			CustomLogicListBuiltin pCVar10;
			CustomLogicHumanBuiltin __this_02;
			byte[] local_68 = new byte[8];
			Human local_58;
			byte[] local_50 = new byte[16];
			Human local_40;
			CustomLogicGameBuiltin local_38;

			local_68 = (byte[])0x0;
			local_58 = null;
			pGVar4 = SceneLoader.CurrentGameManager;
			if (pGVar4 == null) goto label_05acf5d3;
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
		label_05acf5d8: ;
				throw new InvalidCastException();
			}
			bVar9 = this.NeedRefreshList<Human>("PlayerHumans", (HashSet<T>)(*(ulong)((sbyte)pGVar4 + 0x40)), false, true, false);
			if (bVar9) {
				pCVar10 = new CustomLogicListBuiltin();
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) goto label_05acf5d3;
				bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05acf5d8;
				__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x40));
				if (__this_00 == null) goto label_05acf5d3;
				local_38 = this;
				local_50.GetEnumerator(__this_00);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (pCVar10 == null) {
					while(true) {
						bVar9 = local_68.MoveNext();
						pCVar8 = local_58;
						if (!bVar9) break;
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) goto label_05acf5ce;
							if ((pCVar8.Dead == false) && (pCVar8.AI == false)) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
		label_05acf430: ;
					bVar9 = local_68.MoveNext();
					pCVar8 = local_58;
					if (bVar9) {
						bVar9 = ((Object)pCVar8 != null);
						if (bVar9) {
							if (pCVar8 == null) {
		label_05acf5ce: ;
								throw new NullReferenceException();
							}
							if ((pCVar8.Dead == false) && (pCVar8.AI == false)) {
								__this_01 = pCVar10.List;
								__this_02 = il2cpp_codegen_object_new(typeof(CustomLogicHumanBuiltin)) ;
								__this_02 = new CustomLogicHumanBuiltin(pCVar8);
								if (__this_01 != null) {
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 != null) {
										uVar3 = __this_01._size;
										if (uVar3 < (uint)pSVar5.Length) {
											__this_01._size = uVar3 + 1;
											pSVar5[(int)uVar3] = (object)__this_02;
										}
										else {
											__this_01.AddWithResize((object)__this_02);
										}
										goto label_05acf430;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05acf430;
					}
				}
				local_68.Dispose();
				this = local_38;
				pSVar6 = (Dictionary<object, object>)local_38._cachedLists;
				if (pSVar6 == null) goto label_05acf5d3;
				pSVar6.set_Item((Il2CppObject *)"PlayerHumans", (object)pCVar10);
			}
			pSVar6 = (Dictionary<object, object>)this._cachedLists;
			if (pSVar6 != null) {
				pCVar10 = pSVar6.get_Item((Il2CppObject *)"PlayerHumans");
				return pCVar10;
			}
		label_05acf5d3: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700099A")]
	public CustomLogicListBuiltin Loadouts
	{
		[Token(Token = "0x6003426")]
		[Address(RVA = "0x59CF660", Offset = "0x59CE660", VA = "0x59CF660")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_Loadouts): 3 lines keep C-only constructs
			object @object;
			List<string> __this_00;
			CustomLogicListBuiltin __this_01;
			CustomLogic_CustomLogicGameBuiltin___c_StaticFields pCVar1;
			Converter<TInput, TOutput> __this_02;
			System_Collections_Generic_List_TOutput__o pSVar2;

			__this_00 = HumanLoadout.GetAllowed();
			__this_01 = new CustomLogicListBuiltin();
			if ((typeof(CustomLogicGameBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar1 = typeof(CustomLogicGameBuiltin.c).static_fields;
				__this_02 = (Converter<TInput, TOutput>)pCVar1.__9__43_0;
			}
			else {
				pCVar1 = typeof(CustomLogicGameBuiltin.c).static_fields;
				__this_02 = (Converter<TInput, TOutput>)pCVar1.__9__43_0;
			}
			if (__this_02 == null) {
				if (((typeof(CustomLogicGameBuiltin.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar1 = typeof(CustomLogicGameBuiltin.c).static_fields;
				}
				@object = (object)pCVar1.__9;
				__this_02 = new Converter<string, @object>(@object, (intptr_t)MethodInfo_CustomLogic_CustomLogicGameBuiltin_c_get_Loadouts_b__43_0);
				pCVar1 = typeof(CustomLogicGameBuiltin.c).static_fields;
				pCVar1.__9__43_0 = (Converter<string, @object>)__this_02;
			}
			if ((__this_00 == null) ||(pSVar2 = __this_00.ConvertAll<@object>((System_Converter_T__TOutput__o)__this_02), __this_01 == null)) {
				throw new NullReferenceException();
			}
			__this_01.List = (List<@object>)pSVar2;
			return __this_01;
		}
	}

	[Token(Token = "0x1700099B")]
	public bool DefaultShowKillScore
	{
		[Token(Token = "0x6003427")]
		[Address(RVA = "0x59CF7F0", Offset = "0x59CE7F0", VA = "0x59CF7F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d27 == false) {
				Il2CppMethodInitialized_07546d27 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.DefaultShowKillScore;
		}
		[Token(Token = "0x6003428")]
		[Address(RVA = "0x59CF870", Offset = "0x59CE870", VA = "0x59CF870")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d28 == false) {
				Il2CppMethodInitialized_07546d28 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.DefaultShowKillScore = value;
			return;
		}
	}

	[Token(Token = "0x1700099C")]
	public bool DefaultShowKillFeed
	{
		[Token(Token = "0x6003429")]
		[Address(RVA = "0x59CF900", Offset = "0x59CE900", VA = "0x59CF900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillFeed): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d29 == false) {
				Il2CppMethodInitialized_07546d29 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.DefaultShowKillFeed;
		}
		[Token(Token = "0x600342A")]
		[Address(RVA = "0x59CF980", Offset = "0x59CE980", VA = "0x59CF980")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillFeed): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2a == false) {
				Il2CppMethodInitialized_07546d2a = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.DefaultShowKillFeed = value;
			return;
		}
	}

	[Token(Token = "0x1700099D")]
	[Obsolete("Use DefaultShowKillFeed instead.")]
	public bool DefaultHideKillScore
	{
		[Token(Token = "0x600342B")]
		[Address(RVA = "0x59CFA10", Offset = "0x59CEA10", VA = "0x59CFA10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_DefaultHideKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d29 == false) {
				Il2CppMethodInitialized_07546d29 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.DefaultShowKillFeed;
		}
		[Token(Token = "0x600342C")]
		[Address(RVA = "0x59CFA90", Offset = "0x59CEA90", VA = "0x59CFA90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_DefaultHideKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2a == false) {
				Il2CppMethodInitialized_07546d2a = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.DefaultShowKillFeed = value;
			return;
		}
	}

	[Token(Token = "0x1700099E")]
	public bool DefaultAddKillScore
	{
		[Token(Token = "0x600342D")]
		[Address(RVA = "0x59CFB20", Offset = "0x59CEB20", VA = "0x59CFB20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_DefaultAddKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2b == false) {
				Il2CppMethodInitialized_07546d2b = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.DefaultAddKillScore;
		}
		[Token(Token = "0x600342E")]
		[Address(RVA = "0x59CFBA0", Offset = "0x59CEBA0", VA = "0x59CFBA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_DefaultAddKillScore): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2c == false) {
				Il2CppMethodInitialized_07546d2c = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.DefaultAddKillScore = value;
			return;
		}
	}

	[Token(Token = "0x1700099F")]
	public bool ShowScoreboardLoadout
	{
		[Token(Token = "0x600342F")]
		[Address(RVA = "0x59CFC30", Offset = "0x59CEC30", VA = "0x59CFC30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardLoadout): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2d == false) {
				Il2CppMethodInitialized_07546d2d = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.ShowScoreboardLoadout;
		}
		[Token(Token = "0x6003430")]
		[Address(RVA = "0x59CFCB0", Offset = "0x59CECB0", VA = "0x59CFCB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardLoadout): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2e == false) {
				Il2CppMethodInitialized_07546d2e = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.ShowScoreboardLoadout = value;
			return;
		}
	}

	[Token(Token = "0x170009A0")]
	public bool ShowScoreboardStatus
	{
		[Token(Token = "0x6003431")]
		[Address(RVA = "0x59CFD40", Offset = "0x59CED40", VA = "0x59CFD40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardStatus): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d2f == false) {
				Il2CppMethodInitialized_07546d2f = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.ShowScoreboardStatus;
		}
		[Token(Token = "0x6003432")]
		[Address(RVA = "0x59CFDC0", Offset = "0x59CEDC0", VA = "0x59CFDC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardStatus): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d30 == false) {
				Il2CppMethodInitialized_07546d30 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.ShowScoreboardStatus = value;
			return;
		}
	}

	[Token(Token = "0x170009A1")]
	public string ForcedCharacterType
	{
		[Token(Token = "0x6003433")]
		[Address(RVA = "0x59CFE50", Offset = "0x59CEE50", VA = "0x59CFE50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ForcedCharacterType): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d31 == false) {
				Il2CppMethodInitialized_07546d31 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.ForcedCharacterType;
		}
		[Token(Token = "0x6003434")]
		[Address(RVA = "0x59CFED0", Offset = "0x59CEED0", VA = "0x59CFED0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_ForcedCharacterType): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d32 == false) {
				Il2CppMethodInitialized_07546d32 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.ForcedCharacterType = value;
			return;
		}
	}

	[Token(Token = "0x170009A2")]
	public string ForcedLoadout
	{
		[Token(Token = "0x6003435")]
		[Address(RVA = "0x59CFF70", Offset = "0x59CEF70", VA = "0x59CFF70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ForcedLoadout): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d33 == false) {
				Il2CppMethodInitialized_07546d33 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			return pCVar2.ForcedLoadout;
		}
		[Token(Token = "0x6003436")]
		[Address(RVA = "0x59CFFF0", Offset = "0x59CEFF0", VA = "0x59CFFF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$set_ForcedLoadout): clean
			uint uVar1;
			CustomLogicEvaluator pCVar2;

			if (Il2CppMethodInitialized_07546d34 == false) {
				Il2CppMethodInitialized_07546d34 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.ForcedLoadout = value;
			return;
		}
	}

	[Token(Token = "0x170009A3")]
	public override string ClassName
	{
		[Token(Token = "0x6003465")]
		[Address(RVA = "0x59D4D80", Offset = "0x59D3D80", VA = "0x59D4D80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_ClassName): clean
			return "Game";
		}
	}

	[Token(Token = "0x170009A4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003466")]
		[Address(RVA = "0x59D4DB0", Offset = "0x59D3DB0", VA = "0x59D4DB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009A5")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003467")]
		[Address(RVA = "0x59D4DC0", Offset = "0x59D3DC0", VA = "0x59D4DC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009A6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003468")]
		[Address(RVA = "0x59D4DD0", Offset = "0x59D3DD0", VA = "0x59D4DD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600340F")]
	[Address(RVA = "0x59CB930", Offset = "0x59CA930", VA = "0x59CB930")]
	public CustomLogicGameBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, CustomLogicListBuiltin> __this_00;

		this._lastSetTopLabel = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicListBuiltin>));
		__this_00 = new Dictionary<object, object>();
		this._cachedLists = __this_00;
		base();
		return;
	}

	[Token(Token = "0x6003416")]
	[Address(RVA = "0x59CBCE0", Offset = "0x59CACE0", VA = "0x59CBCE0")]
	public CustomLogicExperienceScoreBuiltin GetExperienceScore()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$GetExperienceScore): 2 lines keep C-only constructs
		ExperienceScoreStore __this_00;
		String experienceID;
		ExperienceScoreRecord pSVar1;
		CustomLogicExperienceScoreBuiltin __this_01;
		ExperienceScoreStore* ppSVar2;

		if (Il2CppMethodInitialized_07546d16 == false) {
			ppSVar2 = &typeof(ExperienceScoreStore);
			Il2CppMethodInitialized_07546d16 = true;
			this = (CustomLogicGameBuiltin)ppSVar2;
		}
		experienceID = this.RequireExperienceID();
		__this_00 = ExperienceScoreStore.Local;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_01 = null;
		pSVar1 = __this_00.Get(experienceID);
		if (pSVar1 != null) {
			__this_01 = new CustomLogicExperienceScoreBuiltin() ;
			__this_01._record = pSVar1;
		}
		return __this_01;
	}

	[Token(Token = "0x6003417")]
	[Address(RVA = "0x59CBED0", Offset = "0x59CAED0", VA = "0x59CBED0")]
	public void SaveExperienceScore(float score, string unit, bool lowerIsBetter = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SaveExperienceScore): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		ExperienceScoreStore __this_00;
		String pSVar3;
		Il2CppClass klass;
		InvalidOperationException __this_01;
		MethodInfo pMVar4;
		PhotonNetwork* ppPVar5;

		if (Il2CppMethodInitialized_07546d17 == false) {
			ppPVar5 = &typeof(PhotonNetwork);
			Il2CppMethodInitialized_07546d17 = true;
			this = (CustomLogicGameBuiltin)ppPVar5;
		}
		pSVar3 = this.RequireExperienceID();
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
		}
		if (cVar1 == false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
			__this_01 = (InvalidOperationException)il2cpp_codegen_object_new(klass);
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Experience scores can only be saved in singleplayer.");
			__this_01 = new InvalidOperationException(pSVar3);
			pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceScore);
			throw (object)__this_01;
		}
		if (((typeof(ExperienceScoreStore))._2).cctor_finished_or_no_cctor == 0) {
		}
		__this_00 = ExperienceScoreStore.Local;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Save(pSVar3, score, unit, lowerIsBetter);
		return;
	}

	[Token(Token = "0x6003418")]
	[Address(RVA = "0x59CC050", Offset = "0x59CB050", VA = "0x59CC050")]
	public void SaveExperienceCompletionTime(float elapsed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SaveExperienceCompletionTime): 7 lines keep C-only constructs
		ExperienceScoreRecord pSVar1;
		bool bVar2;
		CustomLogicExperienceScoreBuiltin pCVar3;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		String* __this_01;

		__this_01 = (String*)this;
		if (g_data_07546d18 == false) {
			__this_01 = &"s";
			g_data_07546d18 = true;
		}
		bVar2 = __this_01.CanSaveExperienceScore;
		if (!bVar2) {
			return;
		}
		if (((0x7f800000 < (uint)ABS(elapsed)) || (elapsed < 0.0)) || (ABS(elapsed) == INFINITY)) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
			__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
			paramName = il2cpp_codegen_get_runtime_metadata(&"elapsed");
			message = il2cpp_codegen_get_runtime_metadata(&"Completion time must be finite and nonnegative.");
			__this_00 = new ArgumentOutOfRangeException(paramName, message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceCompletionTime);
			throw (object)__this_00;
		}
		pCVar3 = this.GetExperienceScore();
		if (pCVar3 != null) {
			pSVar1 = pCVar3._record;
			if (pSVar1 == null) {
	label_05acc18d: ;
				throw new NullReferenceException();
			}
			this = (CustomLogicGameBuiltin)pSVar1.Unit;
			bVar2 = ((String)this != "s");
			if (!bVar2) {
				pSVar1 = pCVar3._record;
				if (pSVar1 == null) goto label_05acc18d;
				if ((pSVar1.LowerIsBetter != false) && (pSVar1.Score <= elapsed)) {
					return;
				}
			}
		}
		this.SaveExperienceScore(elapsed, "s", true);
		return;
	}

	[Token(Token = "0x6003419")]
	[Address(RVA = "0x59CBDD0", Offset = "0x59CADD0", VA = "0x59CBDD0")]
	private string RequireExperienceID()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$RequireExperienceID): 7 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		Il2CppClass pIVar3;
		InvalidOperationException __this_00;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		pSVar2 = ExperienceIdentity.GetId(SettingsManager.InGameCurrent);
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
			__this_00 = (InvalidOperationException)il2cpp_codegen_object_new(pIVar3);
			metadataPointer = &"Experience scores are only available in an official experience.";
		}
		else {
			bVar1 = ExperienceIdentity.HasScoring(SettingsManager.InGameCurrent);
			if (bVar1) {
				return pSVar2;
			}
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
			__this_00 = (InvalidOperationException)il2cpp_codegen_object_new(pIVar3);
			metadataPointer = &"This experience does not have a scoring system.";
		}
		pSVar2 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		__this_00 = new InvalidOperationException(pSVar2);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_RequireExperienceID) ;
		throw (object)__this_00;
	}

	[Token(Token = "0x6003422")]
	[Address(RVA = "0x59CE630", Offset = "0x59CD630", VA = "0x59CE630")]
	public CustomLogicHorseBuiltin SpawnHorse(CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnHorse): 5 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		String name;
		bool bVar3;
		Horse horse;
		CustomLogicHorseBuiltin __this_00;
		Quaternion rotation;
		Vector3 position_00;
		Vector3 local_38;
		ulong local_28;

		bVar3 = PhotonNetwork.IsMasterClient;
		if ((position != null) && (bVar3)) {
			bVar3 = HorseController.IsFinite((Vector3)position.Value);
			if (bVar3) {
				bVar3 = HorseController.IsFinite(rotationY);
				if (bVar3) {
					name = CharacterPrefabs.Horse;
					local_28._0_4_ = position.Value.x;
					local_28._4_4_ = position.Value.y;
					fVar1 = position.Value.z;
					local_38.x = 0.0;
					local_38.y = rotationY * 0.017453292;
					local_38.z = 0.0;
					rotation = Quaternion.Internal_FromEulerRad(ref local_38);
					position_00.z = fVar1;
					position_00.x = (float)(undefined4)local_28;
					position_00.y = (float)local_28._4_4_;
					horse = (Horse)CharacterSpawner.Spawn(name, position_00, rotation);
					if (horse != null) {
						bVar2 = (typeof(Horse)._2).typeHierarchyDepth;
						if (((horse.klass._2).typeHierarchyDepth < bVar2) ||((horse.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Horse))) {
							throw new InvalidCastException();
						}
					}
					if (horse == null) {
						throw new NullReferenceException();
					}
					horse.Init(true, TeamInfo.None);
					__this_00 = new CustomLogicHorseBuiltin(horse);
				}
			}
		}
		return __this_00;
	}

	[Token(Token = "0x6003437")]
	[Address(RVA = "0x59D0090", Offset = "0x59CF090", VA = "0x59D0090")]
	public void Debug(object message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$Debug): clean
		bool showInChat;
		UISettings pSVar1;
		BoolSetting pSVar2;
		String message_00;

		if (message == null) {
			message = (Il2CppObject *)"null";
		}
		if ((String)message != null) {
			message_00 = message.ToString();
			pSVar1 = SettingsManager.UISettings;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.ChatCLErrors, pSVar2 != null)) {
				showInChat = pSVar2._value;
				DebugConsole.LogCustomLogic(message_00, showInChat);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003438")]
	[Address(RVA = "0x59D0170", Offset = "0x59CF170", VA = "0x59D0170")]
	public void Print(object message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$Print): 1 lines keep C-only constructs
		String message_00;

		if (message == null) {
			message = (Il2CppObject *)"null";
		}
		else {
		}
		if ((String)message == null) {
			throw new NullReferenceException();
		}
		message_00 = message.ToString();
		ChatManager.AddLine(message_00, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x6003439")]
	[Address(RVA = "0x59D0230", Offset = "0x59CF230", VA = "0x59D0230")]
	public void PrintAll(object message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$PrintAll): clean
		String message_00;

		if (message == null) {
			message = (Il2CppObject *)"null";
		}
		else {
		}
		if ((String)message == null) {
			throw new NullReferenceException();
		}
		message_00 = message.ToString();
		ChatManager.SendChatAll(message_00, 3);
		return;
	}

	[Token(Token = "0x600343A")]
	[Address(RVA = "0x59D02C0", Offset = "0x59CF2C0", VA = "0x59D02C0")]
	public object GetGeneralSetting(string settingName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$GetGeneralSetting): clean
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		Dictionary<object, object> __this_00;
		BaseSetting __this_01;
		Type __this_02;
		PropertyInfo __this_03;
		object pIVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings, __this_00 != null)) {
			__this_01 = __this_00.get_Item((object)settingName);
			if (__this_01 != null) {
				__this_02 = __this_01.GetType();
				if (__this_02 != null) {
					__this_03 = __this_02.GetProperty("Value");
					if (__this_03 != null) {
						pIVar3 = __this_03.GetValue((object)__this_01);
						return pIVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600343B")]
	[Address(RVA = "0x59D0380", Offset = "0x59CF380", VA = "0x59D0380")]
	public object GetTitanSetting(string settingName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$GetTitanSetting): clean
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		Dictionary<object, object> __this_00;
		BaseSetting __this_01;
		Type __this_02;
		PropertyInfo __this_03;
		object pIVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) &&(__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings, __this_00 != null)) {
			__this_01 = __this_00.get_Item((object)settingName);
			if (__this_01 != null) {
				__this_02 = __this_01.GetType();
				if (__this_02 != null) {
					__this_03 = __this_02.GetProperty("Value");
					if (__this_03 != null) {
						pIVar3 = __this_03.GetValue((object)__this_01);
						return pIVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600343C")]
	[Address(RVA = "0x59D0440", Offset = "0x59CF440", VA = "0x59D0440")]
	public object GetMiscSetting(string settingName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$GetMiscSetting): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		Dictionary<object, object> __this_00;
		BaseSetting __this_01;
		Type __this_02;
		PropertyInfo __this_03;
		object pIVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings, __this_00 != null)) {
			__this_01 = __this_00.get_Item((object)settingName);
			if (__this_01 != null) {
				__this_02 = __this_01.GetType();
				if (__this_02 != null) {
					__this_03 = __this_02.GetProperty("Value");
					if (__this_03 != null) {
						pIVar3 = __this_03.GetValue((object)__this_01);
						return pIVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600343D")]
	[Address(RVA = "0x59D0500", Offset = "0x59CF500", VA = "0x59D0500")]
	public bool SetPreloadGeneralSetting(string settingName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadGeneralSetting): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;
		BaseSetting local_20;

		bVar3 = PhotonNetwork.IsMasterClient;
		if (!bVar3) {
			return false;
		}
		pSVar1 = SettingsManager.InGameUI;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) {
			__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings;
			local_20 = null;
			if (__this_00 != null) {
				bVar3 = __this_00.TryGetValue((object)settingName, (object*)&local_20);
				if (bVar3) {
					bVar3 = CustomLogicGameBuiltin.TryAssignSettingValue(local_20, value);
					return bVar3;
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600343E")]
	[Address(RVA = "0x59D0680", Offset = "0x59CF680", VA = "0x59D0680")]
	public bool SetPreloadTitanSetting(string settingName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadTitanSetting): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;
		BaseSetting local_20;

		bVar3 = PhotonNetwork.IsMasterClient;
		if (!bVar3) {
			return false;
		}
		pSVar1 = SettingsManager.InGameUI;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) {
			__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings;
			local_20 = null;
			if (__this_00 != null) {
				bVar3 = __this_00.TryGetValue((object)settingName, (object*)&local_20);
				if (bVar3) {
					bVar3 = CustomLogicGameBuiltin.TryAssignSettingValue(local_20, value);
					return bVar3;
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600343F")]
	[Address(RVA = "0x59D0780", Offset = "0x59CF780", VA = "0x59D0780")]
	public bool SetPreloadMiscSetting(string settingName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadMiscSetting): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;
		BaseSetting local_20;

		bVar3 = PhotonNetwork.IsMasterClient;
		if (!bVar3) {
			return false;
		}
		pSVar1 = SettingsManager.InGameUI;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) {
			__this_00 = (Dictionary<object, object>)pSVar2.TypedSettings;
			local_20 = null;
			if (__this_00 != null) {
				bVar3 = __this_00.TryGetValue((object)settingName, (object*)&local_20);
				if (bVar3) {
					bVar3 = CustomLogicGameBuiltin.TryAssignSettingValue(local_20, value);
					return bVar3;
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003440")]
	[Address(RVA = "0x59D0880", Offset = "0x59CF880", VA = "0x59D0880")]
	public bool SetPreloadModeSetting(string settingName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadModeSetting): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameModeSettings pSVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;
		bool bVar4;
		BaseSetting local_20;

		local_20 = null;
		bVar3 = PhotonNetwork.IsMasterClient;
		if (bVar3) {
			CustomLogicGameBuiltin.EnsurePreloadSelectionsAndModeSettings();
			pSVar1 = SettingsManager.InGameUI;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.Mode, pSVar2 == null)) ||(__this_00 = (Dictionary<object, object>)pSVar2.Current, __this_00 == null)) {
				throw new NullReferenceException();
			}
			bVar3 = __this_00.TryGetValue((object)settingName, (object*)&local_20);
			if (bVar3) {
				bVar4 = CustomLogicGameBuiltin.TryAssignSettingValue(local_20, value);
			}
			else {
			}
		}
		return bVar4;
	}

	[Token(Token = "0x6003441")]
	[Address(RVA = "0x59D13A0", Offset = "0x59D03A0", VA = "0x59D13A0")]
	public bool SetPreloadMap(string mapCategory, string mapName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadMap): clean
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		String a;
		bool bVar4;
		bool bVar5;
		MethodInfo method_00;

		bVar4 = PhotonNetwork.IsMasterClient;
		if (!bVar4) {
			return bVar4;
		}
		pSVar1 = SettingsManager.InGameUI;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_05ad154d;
		a = pSVar3._value;
		bVar5 = (a == BuiltinLevels.UseMapLogic);
		if (bVar5) {
			pSVar3 = pSVar2.MapCategory;
			if (pSVar3 == null) goto label_05ad154d;
			bVar5 = (pSVar3._value != mapCategory);
			if (!bVar5) {
				pSVar3 = pSVar2.MapName;
				if (pSVar3 == null) goto label_05ad154d;
				bVar5 = (pSVar3._value != mapName);
				if (!bVar5) goto label_05ad1507;
			}
			pSVar3 = pSVar2.PrevGameMode;
			if (pSVar3 == null) goto label_05ad154d;
			pSVar3.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		}
	label_05ad1507: ;
		pSVar3 = pSVar2.MapCategory;
		if (pSVar3 != null) {
			pSVar3.Value = (object)mapCategory;
			method_00 = (MethodInfo)pSVar2.MapName;
			if (method_00 != null) {
				method_00.Value = (object)mapName;
				CustomLogicGameBuiltin.EnsurePreloadSelectionsAndModeSettings();
				return bVar4;
			}
		}
	label_05ad154d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003442")]
	[Address(RVA = "0x59D1560", Offset = "0x59D0560", VA = "0x59D1560")]
	public bool SetPreloadGameMode(string gameMode)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPreloadGameMode): clean
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		bool bVar3;
		MethodInfo method_00;

		bVar3 = PhotonNetwork.IsMasterClient;
		if (bVar3) {
			pSVar1 = SettingsManager.InGameUI;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(method_00 = (MethodInfo)pSVar2.GameMode, method_00 == null)) {
				throw new NullReferenceException();
			}
			method_00.Value = (object)gameMode;
			CustomLogicGameBuiltin.EnsurePreloadSelectionsAndModeSettings();
		}
		return bVar3;
	}

	[Token(Token = "0x6003443")]
	[Address(RVA = "0x59D1620", Offset = "0x59D0620", VA = "0x59D1620")]
	public bool LoadPreloadPreset(string presetName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$LoadPreloadPreset): 9 lines keep C-only constructs
		byte bVar1;
		InGameSettings pSVar2;
		SetSettingsContainer<InGameSet> pSVar3;
		ListSetting<T> __this_00;
		InGameSet pSVar4;
		object pIVar5;
		bool bVar6;
		bool bVar7;
		List<BaseSetting> __this_01;
		int iVar8;
		byte[] local_60 = new byte[16];
		BaseSetting local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		bVar6 = PhotonNetwork.IsMasterClient;
		if (!bVar6) {
			return false;
		}
		pSVar2 = SettingsManager.InGameSettings;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar2.InGameSets, pSVar3 == null)) ||(__this_00 = pSVar3.Sets, __this_00 == null)) ||(__this_01 = __this_00.GetItems(), __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator((List<object>)__this_01);
		local_48._current = (object)local_50;
		local_48._list = (List<T>)local_60._0_8_;
		local_48._index = local_60._8_4_;
		local_48._version = local_60._12_4_;
		local_60._0_8_ = null;
		local_60._8_8_ = &local_48;
		do {
			bVar6 = local_48.MoveNext();
			pIVar5 = local_48._current;
			if (!bVar6) {
				iVar8 = 6;
				goto label_05ad182f;
			}
			if ((BaseSetting)local_48._current == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameSet)._2).typeHierarchyDepth;
			if (((((BaseSetting)(local_48._current).klass)._2).typeHierarchyDepth < bVar1) ||((((BaseSetting)(local_48._current).klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameSet))) {
				throw new InvalidCastException();
			}
			if (((BaseSetting)((long)local_48._current + 0x30)).klass ==null) {
				throw new NullReferenceException();
			}
			bVar7 = String.Equals((((BaseSetting)((long)local_48._current + 0x30)).klass._1). byval_arg.data, presetName, 5);
		} while (!bVar7);
		pSVar4 = SettingsManager.InGameUI;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		iVar8 = 5;
		pSVar4.Copy((BaseSetting)pIVar5);
	label_05ad182f: ;
		local_48.Dispose();
		return iVar8 == 5 && bVar6;
	}

	[Token(Token = "0x6003444")]
	[Address(RVA = "0x59D18F0", Offset = "0x59D08F0", VA = "0x59D18F0")]
	public bool RestartWithPreloadSettings()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$RestartWithPreloadSettings): clean
		bool bVar1;

		bVar1 = PhotonNetwork.IsMasterClient;
		if (bVar1) {
			InGameManager.RestartGame();
		}
		return bVar1;
	}

	[Token(Token = "0x6003445")]
	[Address(RVA = "0x59D1970", Offset = "0x59D0970", VA = "0x59D1970")]
	public void End(float delay)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$End): 1 lines keep C-only constructs
		uint uVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		float local_1c;

		if (Il2CppMethodInitialized_07546d43 == false) {
			Il2CppMethodInitialized_07546d43 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar2) {
			return;
		}
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		local_1c = delay;
		pIVar3 = (object)local_1c;
		if (parameters != null) {
			if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar3;
			if (__this_00 != null) {
				__this_00.RPC("EndGameRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003446")]
	[Address(RVA = "0x59D1AE0", Offset = "0x59D0AE0", VA = "0x59D1AE0")]
	public CustomLogicCharacterBuiltin FindCharacterByViewID(int viewID)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$FindCharacterByViewID): clean
		bool bVar1;
		BaseCharacter character;
		CustomLogicCharacterBuiltin pCVar2;

		character = Util.FindCharacterByViewId(viewID);
		bVar1 = ((Object)character == null);
		if (!bVar1) {
			if (character == null) {
				throw new NullReferenceException();
			}
			if (character.Dead == false) {
				if ((typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor == 0) {
					return pCVar2;
				}
				return pCVar2;
			}
		}
		return null;
	}

	[Token(Token = "0x6003447")]
	[Address(RVA = "0x59D1BB0", Offset = "0x59D0BB0", VA = "0x59D1BB0")]
	public CustomLogicTitanBuiltin SpawnTitan(string type)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitan): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		BasicTitan titan;
		CustomLogicTitanBuiltin __this_01;

		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			titan = __this_00.SpawnAITitan(type);
			__this_01 = new CustomLogicTitanBuiltin(titan);
		}
		return __this_01;
	}

	[Token(Token = "0x6003448")]
	[Address(RVA = "0x59D1CC0", Offset = "0x59D0CC0", VA = "0x59D1CC0")]
	public CustomLogicTitanBuiltin SpawnTitanAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitanAt): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		BasicTitan titan;
		CustomLogicTitanBuiltin __this_01;

		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				if (position != null) {
					titan = __this_00.SpawnAITitanAt(type, (Vector3)position.Value, rotationY);
					__this_01 = new CustomLogicTitanBuiltin(titan);
					return __this_01;
				}
			}
			throw new NullReferenceException();
		}
		return null;
	}

	[Token(Token = "0x6003449")]
	[Address(RVA = "0x59D1DF0", Offset = "0x59D0DF0", VA = "0x59D1DF0")]
	public CustomLogicListBuiltin SpawnTitans(string type, int count)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitans): 10 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		InGameManager __this_00;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		List<object> __this_01;
		Object[] pSVar6;
		bool bVar8;
		sbyte cVar9;
		CustomLogicListBuiltin __this_02;
		object pIVar10;
		VirtualInvokeData pVVar11;
		BasicTitan titan;
		CustomLogicTitanBuiltin __this_03;
		ulong uVar12;
		long lVar13;
		object pIStack_48;
		byte puStack_38;

		pIStack_48 = null;
		bVar8 = PhotonNetwork.IsMasterClient;
		if (!bVar8) {
			return null;
		}
		__this_02 = new CustomLogicListBuiltin();
		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			pIVar10 = (object)__this_00.SpawnAITitans(type, count);
			if (pIVar10 != null) {
				pIVar4 = pIVar10.klass;
				uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
				pIVar10 = pIVar10.Dispose();
				puStack_38 = (byte)&pIStack_48;
				do {
					pIStack_48 = pIVar10;
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar4 = pIVar10.klass;
					uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
					cVar9 = pIVar10.Dispose();
					pIVar10 = pIStack_48;
					if (cVar9 == false) {
						if (pIStack_48 == null) {
							return __this_02;
						}
						pIVar4 = pIStack_48.klass;
						uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
						if (uVar12 == 0) goto label_05ad21bf;
						pIVar5 = (pIVar4._1).interfaceOffsets;
						lVar13 = 0;
						goto label_05ad21b0;
					}
					if (pIStack_48 == null) {
						throw new NullReferenceException();
					}
					pIVar4 = pIStack_48.klass;
					uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
					titan = (BasicTitan)pIVar10.Dispose();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_01 = __this_02.List;
					__this_03 = new CustomLogicTitanBuiltin(titan);
					if (__this_01 == null) {
	label_05ad21fd: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_01._items;
					if (pSVar6 == null) goto label_05ad21fd;
					uVar3 = __this_01._size;
					if (uVar3 < (uint)pSVar6.Length) {
						__this_01._size = uVar3 + 1;
						pSVar6[(int)uVar3] = (object)__this_03;
						pIVar10 = pIStack_48;
					}
					else {
						__this_01.AddWithResize((object)__this_03);
						pIVar10 = pIStack_48;
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar12 * 0x10 != lVar13)) break;
	label_05ad21b0: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar11 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar13);
				goto label_05ad21dd;
			}
		}
	label_05ad21bf: ;
	label_05ad21dd: ;
		pIVar10.Dispose();
		return __this_02;
	}

	[Token(Token = "0x600344A")]
	[Address(RVA = "0x59D2270", Offset = "0x59D1270", VA = "0x59D2270")]
	public void SpawnTitansAsync(string type, int count)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAsync): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this_00;
		bool bVar3;

		if (Il2CppMethodInitialized_07546d48 == false) {
			Il2CppMethodInitialized_07546d48 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		if (bVar3) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			__this_00.SpawnAITitansAsync(type, count);
			return;
		}
		return;
	}

	[Token(Token = "0x600344B")]
	[Address(RVA = "0x59D2380", Offset = "0x59D1380", VA = "0x59D2380")]
	public CustomLogicListBuiltin SpawnTitansAt(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAt): 5 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		InGameManager pGVar4;
		List<object> __this_00;
		Object[] pSVar5;
		BaseGameManager pGVar6;
		BaseGameManager pGVar7;
		bool bVar9;
		CustomLogicListBuiltin __this_01;
		BasicTitan pCVar10;
		CustomLogicTitanBuiltin pCVar11;

		__this_01 = null;
		bVar9 = PhotonNetwork.IsMasterClient;
		if (bVar9) {
			__this_01 = new CustomLogicListBuiltin();
			if (0 < count) {
				if (position == null) {
					pGVar6 = SceneLoader.CurrentGameManager;
					if (pGVar6 != null) {
						pGVar7 = pGVar6.klass;
						bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
						if (((pGVar7._2).typeHierarchyDepth < bVar2) ||((pGVar7._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05ad26aa;
					}
				}
				else if (__this_01 == null) {
					pGVar4 = (InGameManager)SceneLoader.CurrentGameManager;
					if (pGVar4 != null) {
						bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
						if ((bVar2 <= (pGVar4.klass._2).typeHierarchyDepth) &&((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(InGameManager))) {
							pCVar10 = pGVar4.SpawnAITitanAt(type, (Vector3)position.Value, rotationY);
							pCVar11 = new CustomLogicTitanBuiltin(pCVar10);
							throw new NullReferenceException();
						}
	label_05ad26aa: ;
						throw new InvalidCastException();
					}
				}
				else {
					while(true) {
						pGVar4 = (InGameManager)SceneLoader.CurrentGameManager;
						if (pGVar4 == null) break;
						bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
						if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) goto label_05ad26aa;
						pCVar10 = pGVar4.SpawnAITitanAt(type, (Vector3)position.Value, rotationY);
						pCVar11 = new CustomLogicTitanBuiltin(pCVar10);
						__this_00 = __this_01.List;
						if (__this_00 == null) break;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this_00._items;
						if (pSVar5 == null) break;
						uVar3 = __this_00._size;
						if (uVar3 < (uint)pSVar5.Length) {
							__this_00._size = uVar3 + 1;
							pSVar5[(int)uVar3] = (object)pCVar11;
							count = count + -1;
							if (count == 0) {
								return __this_01;
							}
						}
						else {
							__this_00.AddWithResize((object)pCVar11);
							count = count + -1;
							if (count == 0) {
								return __this_01;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return __this_01;
	}

	[Token(Token = "0x600344C")]
	[Address(RVA = "0x59D26B0", Offset = "0x59D16B0", VA = "0x59D26B0")]
	public void SpawnTitansAtAsync(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAtAsync): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this_00;
		bool bVar3;

		if (Il2CppMethodInitialized_07546d4a == false) {
			Il2CppMethodInitialized_07546d4a = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar3) {
			return;
		}
		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			if (position != null) {
				__this_00.SpawnAITitansAtAsync(type, count, (Vector3)position.Value, rotationY);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600344D")]
	[Address(RVA = "0x59D27F0", Offset = "0x59D17F0", VA = "0x59D27F0")]
	public CustomLogicShifterBuiltin SpawnShifter(string type)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnShifter): 2 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		WallColossalShifter shifter;
		String b;
		CustomLogicWallColossalBuiltin __this_01;

		__this_01 = null;
		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			shifter = (WallColossalShifter)__this_00.SpawnAIShifter(type);
			b = CustomLogicShifterTypeEnum.WallColossal;
			bVar2 = (type == b);
			if (bVar2) {
				if (shifter != null) {
					bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
					if (((shifter.klass._2).typeHierarchyDepth < bVar1) ||((shifter.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(WallColossalShifter))) {
						throw new InvalidCastException();
					}
				}
				__this_01 = new CustomLogicShifterBuiltin(shifter);
			}
			else {
				__this_01 = new CustomLogicShifterBuiltin((BaseShifter)shifter);
			}
		}
		return (CustomLogicShifterBuiltin)__this_01;
	}

	[Token(Token = "0x600344E")]
	[Address(RVA = "0x59D2990", Offset = "0x59D1990", VA = "0x59D2990")]
	public CustomLogicHumanBuiltin SpawnHuman(int costume, string costumeName, string loadout)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnHuman): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		Human human;
		CustomLogicHumanBuiltin __this_01;

		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			human = __this_00.SpawnAIHuman(costume, costumeName, loadout);
			__this_01 = new CustomLogicHumanBuiltin(human);
		}
		return __this_01;
	}

	[Token(Token = "0x600344F")]
	[Address(RVA = "0x59D2AB0", Offset = "0x59D1AB0", VA = "0x59D2AB0")]
	public CustomLogicHumanBuiltin SpawnHumanAt(int costume, string costumeName, string loadout, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnHumanAt): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		Human human;
		CustomLogicHumanBuiltin __this_01;

		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				if (position != null) {
					human = __this_00.SpawnAIHumanAt(costume, costumeName, loadout, (Vector3)position.Value, rotationY) ;
					__this_01 = new CustomLogicHumanBuiltin(human);
					return __this_01;
				}
			}
			throw new NullReferenceException();
		}
		return null;
	}

	[Token(Token = "0x6003450")]
	[Address(RVA = "0x59D2C00", Offset = "0x59D1C00", VA = "0x59D2C00")]
	public CustomLogicShifterBuiltin SpawnShifterAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnShifterAt): 2 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;
		WallColossalShifter shifter;
		String b;
		CustomLogicWallColossalBuiltin __this_01;
		CustomLogicShifterBuiltin __this_02;

		bVar2 = PhotonNetwork.IsMasterClient;
		if (!bVar2) {
			return null;
		}
		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			if (position != null) {
				shifter = (WallColossalShifter)__this_00.SpawnAIShifterAt(type, (Vector3)position.Value, rotationY);
				b = CustomLogicShifterTypeEnum.WallColossal;
				bVar2 = (type == b);
				if (!bVar2) {
					__this_02 = new CustomLogicShifterBuiltin((BaseShifter)shifter);
					return __this_02;
				}
				if (shifter != null) {
					bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
					if (((shifter.klass._2).typeHierarchyDepth < bVar1) ||((shifter.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(WallColossalShifter))) {
						throw new InvalidCastException();
					}
				}
				__this_01 = new CustomLogicWallColossalBuiltin(shifter);
				return (CustomLogicShifterBuiltin)__this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003451")]
	[Address(RVA = "0x59D2DD0", Offset = "0x59D1DD0", VA = "0x59D2DD0")]
	public void SpawnProjectile(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, string team, [Optional] object extraParam, [Optional] object extraParam2)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnProjectile): 39 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Color255 pUVar5;
		bool bVar6;
		CustomLogicColorBuiltin pCVar7;
		Object[] settings;
		object pIVar8;
		object pIVar9;
		object* targetAddress;
		float fVar10;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar11;
		Quaternion rotation_00;
		Vector3 position_00;
		byte local_99;
		Vector3 local_98;
		byte[] local_88 = new byte[16];
		float local_70;
		uint local_6c;
		byte[] local_68 = new byte[16];
		String local_58;
		CustomLogicVector3Builtin local_50;
		byte[] local_48 = new byte[16];

		local_70 = liveTime;
		local_50 = gravity;
		bVar6 = (projectileName == ProjectilePrefabs.Thunderspear);
		if (bVar6) {
			fVar10 = CustomLogicEvaluator.ConvertTo<float>(extraParam);
			local_88._0_4_ = fVar10;
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(extraParam2);
			if (pCVar7 == null) goto label_05ad331e;
			pUVar5 = pCVar7.Value;
			local_58 = projectileName;
			if (pUVar5 == null) goto label_05ad331e;
			UVar11 = pUVar5.ToColor();
			local_68._8_4_ = extraout_XMM0_Dc;
			local_68._0_8_ = UVar11._0_8_;
			local_68._12_4_ = extraout_XMM0_Dd;
			local_48._8_4_ = in_XMM1_Dc;
			local_48._0_8_ = UVar11._8_8_;
			local_48._12_4_ = in_XMM1_Dd;
			settings = (Object[])new object[3];
			local_6c = local_88._0_4_;
			pIVar8 = (object)local_6c;
			if (settings == null) goto label_05ad331e;
			if (pIVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((settings.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05ad3328;
			}
			if ((int)settings.Length == 0) goto label_05ad3323;
			settings[0] = pIVar8;
			local_98.z = local_48._0_4_;
			local_98._0_8_ = local_68._0_8_;
			pIVar8 = (object)local_98;
			if (pIVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((settings.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05ad3328;
			}
			if ((settings.Length & 0xfffffffe) == 0) goto label_05ad3323;
			settings[1] = pIVar8;
			local_99 = 0;
			pIVar8 = (object)local_99;
			if (pIVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((settings.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05ad3328;
			}
			if ((uint)settings.Length < 3) goto label_05ad3323;
			targetAddress = settings.m_Items + 2;
			settings[2] = pIVar8;
			projectileName = local_58;
	label_05ad324e: ;
		}
		else {
			bVar6 = (projectileName == ProjectilePrefabs.Flare);
			if (!bVar6) {
				bVar6 = (projectileName == ProjectilePrefabs.Rock1);
				if (!bVar6) {
					settings = null;
					bVar6 = (projectileName == ProjectilePrefabs.Rock2);
					if (!bVar6) goto label_05ad3256;
				}
				fVar10 = CustomLogicEvaluator.ConvertTo<float>(extraParam);
				local_88._0_4_ = fVar10;
				settings = (Object[])new object[1];
				local_98.x = (float)local_88._0_4_;
				pIVar8 = (object)local_98;
				if (settings == null) goto label_05ad331e;
				if (pIVar8 != null) {
					pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((settings.obj).klass)._1).element_class);
					if (pIVar9 == null) {
	label_05ad3328: ;
						pIVar8 = new ArrayTypeMismatchException();
						throw pIVar8;
					}
				}
				if ((int)settings.Length == 0) {
	label_05ad3323: ;
					throw new IndexOutOfRangeException();
				}
				settings[0] = pIVar8;
				goto label_05ad324e;
			}
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(extraParam);
			if ((pCVar7 == null) ||(pUVar5 = pCVar7.Value, pUVar5 == null)) goto label_05ad331e;
			UVar11 = pUVar5.ToColor();
			local_88._8_4_ = extraout_XMM0_Dc_00;
			local_88._0_8_ = UVar11._0_8_;
			local_88._12_4_ = extraout_XMM0_Dd_00;
			local_68._8_4_ = in_XMM1_Dc;
			local_68._0_8_ = UVar11._8_8_;
			local_68._12_4_ = in_XMM1_Dd;
			settings = (Object[])new object[1];
			local_98.z = local_68._0_4_;
			local_98._0_8_ = local_88._0_8_;
			pIVar8 = (object)local_98;
			if (settings == null) goto label_05ad331e;
			if (pIVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((settings.obj).klass)._1).element_class);
				if (pIVar9 == null) goto label_05ad3328;
			}
			if ((int)settings.Length == 0) goto label_05ad3323;
			settings[0] = pIVar8;
		}
	label_05ad3256: ;
		if ((position != null) &&(rotation != null)) {
			uVar1 = position.Value.x;
			uVar3 = position.Value.y;
			local_88._4_4_ = uVar3;
			local_88._0_4_ = uVar1;
			local_88._8_8_ = 0;
			local_68._0_4_ = position.Value.z;
			uVar2 = rotation.Value.x;
			uVar4 = rotation.Value.y;
			local_98.z = rotation.Value.z * 0.017453292;
			local_98.y = (float)uVar4 * 0.017453292;
			local_98.x = (float)uVar2 * 0.017453292;
			rotation_00 = Quaternion.Internal_FromEulerRad(ref local_98);
			if ((velocity != null) &&(local_50 != null)) {
				position_00.z = (float)local_68._0_4_;
				position_00.x = (float)local_88._0_4_;
				position_00.y = (float)local_88._4_4_;
				ProjectileSpawner.Spawn(projectileName, position_00, rotation_00, (Vector3)velocity.Value, (Vector3)local_50.Value, local_70, -1, team, settings);
				return;
			}
		}
	label_05ad331e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003452")]
	[Address(RVA = "0x59D3340", Offset = "0x59D2340", VA = "0x59D3340")]
	public void SpawnProjectileWithOwner(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, CustomLogicCharacterBuiltin owner, [Optional] object extraParam, [Optional] object extraParam2)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnProjectileWithOwner): 63 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Color255 pUVar5;
		BaseCharacter pCVar6;
		bool bVar7;
		CustomLogicColorBuiltin pCVar8;
		Object[] settings;
		object pIVar9;
		object pIVar10;
		PhotonView pPVar11;
		object* targetAddress;
		float fVar12;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint in_XMM1_Dc;
		uint uVar13;
		uint in_XMM1_Dd;
		uint uVar14;
		Color UVar15;
		Quaternion UVar16;
		Vector3 position_00;
		Vector3 gravity_00;
		Vector3 velocity_00;
		byte local_d9;
		Vector3 local_d8;
		byte[] local_c8 = new byte[16];
		CustomLogicVector3Builtin local_b0;
		float local_a4;
		float local_a0;
		uint local_9c;
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		BaseCharacter local_60;
		ulong local_58;
		ulong local_48;

		local_b0 = velocity;
		local_a0 = liveTime;
		if (owner == null) goto label_05ad392a;
		local_60 = owner.Character;
		bVar7 = (projectileName == ProjectilePrefabs.Thunderspear);
		if (bVar7) {
			fVar12 = CustomLogicEvaluator.ConvertTo<float>(extraParam);
			local_c8._0_4_ = fVar12;
			pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(extraParam2);
			if (pCVar8 == null) goto label_05ad392a;
			local_88._0_8_ = gravity;
			pUVar5 = pCVar8.Value;
			if (pUVar5 == null) goto label_05ad392a;
			UVar15 = pUVar5.ToColor();
			local_98._8_4_ = extraout_XMM0_Dc;
			local_98._0_8_ = UVar15._0_8_;
			local_98._12_4_ = extraout_XMM0_Dd;
			local_78._8_4_ = in_XMM1_Dc;
			local_78._0_8_ = UVar15._8_8_;
			local_78._12_4_ = in_XMM1_Dd;
			settings = (Object[])new object[3];
			local_9c = local_c8._0_4_;
			pIVar9 = (object)local_9c;
			if (settings == null) goto label_05ad392a;
			if (pIVar9 != null) {
				pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((settings.obj).klass)._1).element_class);
				if (pIVar10 == null) goto label_05ad3934;
			}
			if ((int)settings.Length == 0) goto label_05ad392f;
			settings[0] = pIVar9;
			local_d8.z = local_78._0_4_;
			local_d8._0_8_ = local_98._0_8_;
			pIVar9 = (object)local_d8;
			if (pIVar9 != null) {
				pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((settings.obj).klass)._1).element_class);
				if (pIVar10 == null) goto label_05ad3934;
			}
			if ((settings.Length & 0xfffffffe) == 0) goto label_05ad392f;
			settings[1] = pIVar9;
			local_d9 = 0;
			pIVar9 = (object)local_d9;
			if (pIVar9 != null) {
				pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((settings.obj).klass)._1).element_class);
				if (pIVar10 == null) goto label_05ad3934;
			}
			if ((uint)settings.Length < 3) goto label_05ad392f;
			targetAddress = settings.m_Items + 2;
			settings[2] = pIVar9;
			gravity = (CustomLogicVector3Builtin)local_88._0_8_;
	label_05ad37eb: ;
		}
		else {
			bVar7 = (projectileName == ProjectilePrefabs.Flare);
			if (!bVar7) {
				bVar7 = (projectileName == ProjectilePrefabs.Rock1);
				if (!bVar7) {
					settings = null;
					bVar7 = (projectileName == ProjectilePrefabs.Rock2);
					if (!bVar7) goto label_05ad37f3;
				}
				fVar12 = CustomLogicEvaluator.ConvertTo<float>(extraParam);
				local_c8._0_4_ = fVar12;
				settings = (Object[])new object[1];
				local_d8.x = (float)local_c8._0_4_;
				pIVar9 = (object)local_d8;
				if (settings == null) goto label_05ad392a;
				if (pIVar9 != null) {
					pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((settings.obj).klass)._1).element_class);
					if (pIVar10 == null) {
	label_05ad3934: ;
						pIVar9 = new ArrayTypeMismatchException();
						throw pIVar9;
					}
				}
				if ((int)settings.Length == 0) {
	label_05ad392f: ;
					throw new IndexOutOfRangeException();
				}
				settings[0] = pIVar9;
				goto label_05ad37eb;
			}
			pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(extraParam);
			if ((pCVar8 == null) ||(pUVar5 = pCVar8.Value, pUVar5 == null)) goto label_05ad392a;
			UVar15 = pUVar5.ToColor();
			local_c8._8_4_ = extraout_XMM0_Dc_00;
			local_c8._0_8_ = UVar15._0_8_;
			local_c8._12_4_ = extraout_XMM0_Dd_00;
			local_98._8_4_ = in_XMM1_Dc;
			local_98._0_8_ = UVar15._8_8_;
			local_98._12_4_ = in_XMM1_Dd;
			settings = (Object[])new object[1];
			local_d8.z = local_98._0_4_;
			local_d8._0_8_ = local_c8._0_8_;
			pIVar9 = (object)local_d8;
			if (settings == null) goto label_05ad392a;
			if (pIVar9 != null) {
				pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((settings.obj).klass)._1).element_class);
				if (pIVar10 == null) goto label_05ad3934;
			}
			if ((int)settings.Length == 0) goto label_05ad392f;
			settings[0] = pIVar9;
		}
	label_05ad37f3: ;
		if ((position != null) &&(rotation != null)) {
			uVar1 = position.Value.x;
			uVar3 = position.Value.y;
			local_c8._4_4_ = uVar3;
			local_c8._0_4_ = uVar1;
			local_c8._8_8_ = 0;
			local_98._0_4_ = position.Value.z;
			uVar2 = rotation.Value.x;
			uVar4 = rotation.Value.y;
			uVar13 = 0;
			uVar14 = 0;
			local_d8.z = rotation.Value.z * 0.017453292;
			local_d8.y = (float)uVar4 * 0.017453292;
			local_d8.x = (float)uVar2 * 0.017453292;
			UVar16 = Quaternion.Internal_FromEulerRad(ref local_d8);
			pCVar6 = local_60;
			if ((local_b0 != null) &&(gravity != null)) {
				local_88._8_4_ = uVar13;
				local_88._0_8_ = UVar16._8_8_;
				local_88._12_4_ = uVar14;
				local_78._8_4_ = extraout_XMM0_Dc_01;
				local_78._0_8_ = UVar16._0_8_;
				local_78._12_4_ = extraout_XMM0_Dd_01;
				if (local_60 != null) {
					local_48._0_4_ = local_b0.Value.x;
					local_48._4_4_ = local_b0.Value.y;
					local_b0 = (CustomLogicVector3Builtin)CONCAT44(local_b0._4_4_, local_b0.Value.z);
					local_58._0_4_ = gravity.Value.x;
					local_58._4_4_ = gravity.Value.y;
					local_a4 = gravity.Value.z;
					pPVar11 = local_60.photonView;
					if (pPVar11 != null) {
						UVar16.z = (float)local_88._0_4_;
						UVar16.w = (float)local_88._4_4_;
						UVar16.x = (float)local_78._0_4_;
						UVar16.y = (float)local_78._4_4_;
						position_00.z = (float)local_98._0_4_;
						position_00.x = (float)local_c8._0_4_;
						position_00.y = (float)local_c8._4_4_;
						gravity_00.z = local_a4;
						gravity_00.x = (float)(undefined4)local_58;
						gravity_00.y = (float)local_58._4_4_;
						velocity_00.z = local_b0._0_4_;
						velocity_00.x = (float)(undefined4)local_48;
						velocity_00.y = (float)local_48._4_4_;
						ProjectileSpawner.Spawn(projectileName, position_00, UVar16, velocity_00, gravity_00, local_a0, pPVar11.viewIdField, pCVar6.Team, settings);
						return;
					}
				}
			}
		}
	label_05ad392a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003453")]
	[Address(RVA = "0x59D3950", Offset = "0x59D2950", VA = "0x59D3950")]
	public void SpawnEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnEffect): clean


		CustomLogicGameBuiltin.SpawnEffectInternal(effectName, position, rotation, scale, true, tsExplodeColor, tsKillSound);
		return;
	}

	[Token(Token = "0x6003454")]
	[Address(RVA = "0x59D3D60", Offset = "0x59D2D60", VA = "0x59D3D60")]
	public void SpawnUnscaledEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnUnscaledEffect): clean


		CustomLogicGameBuiltin.SpawnEffectInternal(effectName, position, rotation, 1.0, false, tsExplodeColor, tsKillSound);
		return;
	}

	[Token(Token = "0x6003455")]
	[Address(RVA = "0x59D3D80", Offset = "0x59D2D80", VA = "0x59D3D80")]
	public void SpawnPlayer(CustomLogicPlayerBuiltin player, bool force)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnPlayer): 2 lines keep C-only constructs
		byte bVar1;
		Player pPVar2;
		InGameManager __this_00;
		PhotonView __this_01;
		bool bVar3;
		Player pPVar4;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		byte local_29;

		if (player != null) {
			pPVar2 = player.Player;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar4 = PhotonNetwork.LocalPlayer;
			}
			else {
				pPVar4 = PhotonNetwork.LocalPlayer;
			}
			if (pPVar2 == pPVar4) {
				__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
				if (__this_00 != null) {
					bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
						throw new InvalidCastException();
					}
					__this_00.SpawnPlayer(force);
					return;
				}
			}
			else {
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = PhotonNetwork.IsMasterClient;
				}
				else {
					bVar3 = PhotonNetwork.IsMasterClient;
				}
				if (!bVar3) {
					return;
				}
				__this_01 = RPCManager.PhotonView;
				pPVar2 = player.Player;
				parameters = (Object[])new object[1];
				local_29 = force;
				pIVar5 = (object)local_29;
				if (parameters != null) {
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar5;
					if (__this_01 != null) {
						__this_01.RPC("SpawnPlayerRPC", pPVar2, parameters);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003456")]
	[Address(RVA = "0x59D3FB0", Offset = "0x59D2FB0", VA = "0x59D3FB0")]
	public void SpawnPlayerAll(bool force)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAll): 1 lines keep C-only constructs
		uint uVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_19;

		if (Il2CppMethodInitialized_07546d52 == false) {
			Il2CppMethodInitialized_07546d52 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar2) {
			return;
		}
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		local_19 = force;
		pIVar3 = (object)local_19;
		if (parameters != null) {
			if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar3;
			if (__this_00 != null) {
				__this_00.RPC("SpawnPlayerRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003457")]
	[Address(RVA = "0x59D4110", Offset = "0x59D3110", VA = "0x59D4110")]
	public void SpawnPlayerAt(CustomLogicPlayerBuiltin player, bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAt): 6 lines keep C-only constructs
		byte bVar1;
		Player pPVar2;
		InGameManager __this_00;
		PhotonView __this_01;
		bool bVar3;
		Player pPVar4;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		byte local_49;
		float local_48;
		float local_44;
		ulong local_40;

		local_48 = rotationY;
		if (player != null) {
			pPVar2 = player.Player;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar4 = PhotonNetwork.LocalPlayer;
			}
			else {
				pPVar4 = PhotonNetwork.LocalPlayer;
			}
			if (pPVar2 == pPVar4) {
				__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
				if (__this_00 != null) {
					bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
						throw new InvalidCastException();
					}
					if (position != null) {
						__this_00.SpawnPlayerAt(force, (Vector3)position.Value, local_48);
						return;
					}
				}
			}
			else {
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = PhotonNetwork.IsMasterClient;
				}
				else {
					bVar3 = PhotonNetwork.IsMasterClient;
				}
				if (!bVar3) {
					return;
				}
				__this_01 = RPCManager.PhotonView;
				pPVar2 = player.Player;
				parameters = (Object[])new object[3];
				local_49 = force;
				pIVar5 = (object)local_49;
				if (parameters != null) {
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) goto label_05ad441e;
					if ((int)parameters.Length == 0) goto label_05ad4414;
					parameters[0] = pIVar5;
					if (position == null) goto label_05ad4430;
					local_40._0_4_ = position.Value.x;
					local_40._4_4_ = position.Value.y;
					pIVar5 = (object)local_40;
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05ad441e: ;
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar5;
						local_44 = local_48;
						pIVar5 = (object)local_44;
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) goto label_05ad441e;
						if (2 < (uint)parameters.Length) {
							parameters[2] = pIVar5;
							if (__this_01 != null) {
								__this_01.RPC("SpawnPlayerAtRPC", pPVar2, parameters);
								return;
							}
							goto label_05ad4430;
						}
					}
	label_05ad4414: ;
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05ad4430: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003458")]
	[Address(RVA = "0x59D4440", Offset = "0x59D3440", VA = "0x59D4440")]
	public void SpawnPlayerAtAll(bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAtAll): 5 lines keep C-only constructs
		PhotonView __this_00;
		bool bVar1;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		byte local_41;
		float local_40;
		float local_3c;
		ulong local_38;

		local_40 = rotationY;
		if (Il2CppMethodInitialized_07546d54 == false) {
			Il2CppMethodInitialized_07546d54 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05ad4473;
	label_05ad44d9: ;
			bVar1 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05ad44d9;
	label_05ad4473: ;
			bVar1 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar1) {
			return;
		}
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[3];
		local_41 = force;
		pIVar2 = (object)local_41;
		if (parameters == null) {
	label_05ad4662: ;
			throw new NullReferenceException();
		}
		if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05ad4667;
		if ((int)parameters.Length == 0) goto label_05ad465d;
		parameters[0] = pIVar2;
		if (position == null) goto label_05ad4662;
		local_38._0_4_ = position.Value.x;
		local_38._4_4_ = position.Value.y;
		pIVar2 = (object)local_38;
		if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05ad4667: ;
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((parameters.Length & 0xfffffffe) != 0) {
			parameters[1] = pIVar2;
			local_3c = local_40;
			pIVar2 = (object)local_3c;
			if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05ad4667;
			if (2 < (uint)parameters.Length) {
				parameters[2] = pIVar2;
				if (__this_00 != null) {
					__this_00.RPC("SpawnPlayerAtRPC", 0, parameters);
					return;
				}
				goto label_05ad4662;
			}
		}
	label_05ad465d: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003459")]
	[Address(RVA = "0x59D4680", Offset = "0x59D3680", VA = "0x59D4680")]
	public void SetPlaylist(string playlist)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetPlaylist): clean
		CustomLogicEvaluator pCVar1;

		MusicManager.SetPlaylist(playlist);
		pCVar1 = CustomLogicManager.Evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasSetMusic = true;
		return;
	}

	[Token(Token = "0x600345A")]
	[Address(RVA = "0x59D46E0", Offset = "0x59D36E0", VA = "0x59D46E0")]
	public void SetSong(string song)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SetSong): clean
		CustomLogicEvaluator pCVar1;

		MusicManager.SetSong(song, 0.0);
		pCVar1 = CustomLogicManager.Evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasSetMusic = true;
		return;
	}

	[Token(Token = "0x600345B")]
	[Address(RVA = "0x59D4750", Offset = "0x59D3750", VA = "0x59D4750")]
	public void DrawRay(CustomLogicVector3Builtin start, CustomLogicVector3Builtin dir, CustomLogicColorBuiltin color, float duration)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$DrawRay): clean
		Color255 __this_00;
		Vector3 start_00;
		Vector3 dir_00;
		Color color_00;

		if ((((start == null) ||(dir == null)) ||(color == null)) ||(__this_00 = color.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		start_00 = start.Value;
		dir_00 = dir.Value;
		color_00 = __this_00.ToColor();
		Debug.DrawRay((Vector3)start_00, (Vector3)dir_00, color_00, duration);
		return;
	}

	[Token(Token = "0x600345C")]
	[Address(RVA = "0x59D4850", Offset = "0x59D3850", VA = "0x59D4850")]
	public void ShowKillScore(int damage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$ShowKillScore): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this_00;

		if (Il2CppMethodInitialized_07546d58 == false) {
			Il2CppMethodInitialized_07546d58 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.ShowKillScore(damage, true);
		return;
	}

	[Token(Token = "0x600345D")]
	[Address(RVA = "0x59D4930", Offset = "0x59D3930", VA = "0x59D4930")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$ShowKillFeed): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this_00;

		if (Il2CppMethodInitialized_07546d59 == false) {
			Il2CppMethodInitialized_07546d59 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.ShowKillFeed(killer, victim, score, weapon);
		return;
	}

	[Token(Token = "0x600345E")]
	[Address(RVA = "0x59D4A20", Offset = "0x59D3A20", VA = "0x59D4A20")]
	public void ShowKillFeedAll(string killer, string victim, int score, string weapon)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$ShowKillFeedAll): 8 lines keep C-only constructs
		PhotonView __this_00;
		ulong in_RAX;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		ulong uStack_38;

		uStack_38 = in_RAX;
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[4];
		if (parameters == null) {
	label_05ad4bd3: ;
			throw new NullReferenceException();
		}
		if (killer != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)killer, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_05ad4bc4;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)killer;
			if (victim != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)victim, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) goto label_05ad4bc4;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_05ad4bbf;
			parameters[1] = (object)victim;
			uStack_38 = CONCAT44(score, (undefined4)uStack_38);
			pIVar1 = (object)(((long)&uStack_38 + 4));
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05ad4bc4;
			}
			if (2 < (uint)parameters.Length) {
				parameters[2] = pIVar1;
				if (weapon != null) {
					pIVar1 = il2cpp_vm_Object_IsInst((object)weapon, (((parameters.obj).klass)._1).element_class) ;
					if (pIVar1 == null) {
	label_05ad4bc4: ;
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if ((parameters.Length & 0xfffffffc) != 0) {
					parameters[3] = (object)weapon;
					if (__this_00 != null) {
						__this_00.RPC("ShowKillFeedRPC", 0, parameters);
						return;
					}
					goto label_05ad4bd3;
				}
			}
		}
	label_05ad4bbf: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600345F")]
	[Address(RVA = "0x59D0600", Offset = "0x59CF600", VA = "0x59D0600")]
	private static bool TrySetTypedSetting(Dictionary<string, BaseSetting> typedSettings, string settingName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$TrySetTypedSetting): 1 lines keep C-only constructs
		bool bVar1;
		BaseSetting pSStack_20;

		pSStack_20 = null;
		if (typedSettings == null) {
			throw new NullReferenceException();
		}
		bVar1 = typedSettings.TryGetValue((object)settingName, (object*)&pSStack_20);
		if (bVar1) {
			bVar1 = CustomLogicGameBuiltin.TryAssignSettingValue(pSStack_20, value);
		}
		else {
			bVar1 = false;
		}
		return bVar1;
	}

	[Token(Token = "0x6003460")]
	[Address(RVA = "0x59D1170", Offset = "0x59D0170", VA = "0x59D1170")]
	private static bool TryAssignSettingValue(BaseSetting setting, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$TryAssignSettingValue): 1 lines keep C-only constructs
		int iVar1;
		object pIVar2;
		byte local_19;
		float local_18;
		int local_14;

		iVar1 = SettingsUtil.GetSettingType(setting);
		switch(iVar1) {
		case 1:
			local_19 = CustomLogicGameBuiltin.ConvertToBool(value);
			pIVar2 = (object)local_19;
			SettingsUtil.SetSettingValue(setting, 1, pIVar2);
			break;
		case 2:
			local_14 = CustomLogicEvaluator.ConvertTo<int>(value);
			pIVar2 = (object)local_14;
			SettingsUtil.SetSettingValue(setting, 2, pIVar2);
			break;
		case 3:
			local_18 = CustomLogicEvaluator.ConvertTo<float>(value);
			pIVar2 = (object)local_18;
			SettingsUtil.SetSettingValue(setting, 3, pIVar2);
			break;
		case 4:
			if ((value == null) ||(pIVar2 = (object)(*value.klass.vtable[3].methodPtr)(value,value.klass.vtable[3].method), pIVar2 == null)) {
				pIVar2 = (object)**(ulong*)(g_data_07556758 + 0xb8);
			}
			SettingsUtil.SetSettingValue(setting, 4, pIVar2);
			return true;
		default: ;
			return false;
		}
		return true;
	}

	[Token(Token = "0x6003461")]
	[Address(RVA = "0x59D0970", Offset = "0x59CF970", VA = "0x59D0970")]
	private static void EnsurePreloadSelectionsAndModeSettings()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$EnsurePreloadSelectionsAndModeSettings): 7 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		String pSVar5;
		StringSetting pSVar6;
		String gameMode;
		InGameMiscSettings settings;
		InGameModeSettings pSVar7;
		Dictionary<object, object> __this;
		object key;
		bool bVar8;
		String[] pSVar9;
		MapScript __this_00;
		String pSVar10;
		il2cpp_array_size_t iVar11;
		Dictionary<string, BaseSetting> pSVar12;
		String pSVar13;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o collection;
		List<string> __this_01;
		BaseSetting value;
		String* ppSVar14;
		ulong uVar15;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		InGameSet local_48;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pSVar1 = SettingsManager.InGameUI;
		if ((((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(pSVar3 = pSVar2.MapCategory, pSVar3 != null)) &&(pSVar4 = pSVar2.MapName, pSVar4 != null)) {
			pSVar10 = pSVar3._value;
			pSVar13 = pSVar4._value;
			pSVar9 = BuiltinLevels.GetMapNames(pSVar10);
			if (pSVar9 == null) goto label_05ad10d9;
			iVar11 = pSVar9.Length;
			if (0 < (int)iVar11) {
				uVar15 = 0;
				do {
					if ((iVar11 & 0xffffffff) <= uVar15) goto label_05ad1051;
					bVar8 = (pSVar9[uVar15] == pSVar13);
					if (bVar8) goto label_05ad0b99;
					uVar15 = uVar15 + 1;
					iVar11 = pSVar9.Length;
				} while ((long)uVar15 < (long)(int)iVar11);
			}
			pSVar2 = pSVar1.General;
			if (pSVar2 == null) goto label_05ad10d9;
			pSVar3 = pSVar2.MapName;
			if (iVar11 == 0) {
				ppSVar14 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				if ((int)iVar11 == 0) goto label_05ad1051;
				ppSVar14 = pSVar9.m_Items;
			}
			if (pSVar3 != null) {
				pSVar3.Value = (object)*ppSVar14;
	label_05ad0b99: ;
				__this_00 = new MapScript();
				pSVar2 = pSVar1.General;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar3 = pSVar2.MapCategory;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				pSVar4 = pSVar2.MapName;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar10 = pSVar3._value;
				pSVar13 = pSVar4._value;
				pSVar10 = BuiltinLevels.LoadMap(pSVar10, pSVar13);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Deserialize(pSVar10, false);
				pSVar10 = __this_00.Logic;
				bVar8 = String.IsNullOrWhiteSpace(pSVar10);
				pSVar2 = pSVar1.General;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.MapCategory, pSVar3 != null)) &&(pSVar4 = pSVar2.MapName, pSVar4 != null)) {
					pSVar13 = pSVar3._value;
					pSVar5 = pSVar4._value;
					pSVar9 = BuiltinLevels.GetGameModes(pSVar13, pSVar5, !bVar8);
					if (pSVar9 != null) {
						iVar11 = pSVar9.Length;
						if (0 < (int)iVar11) {
							uVar15 = 0;
							do {
								if ((iVar11 & 0xffffffff) <= uVar15) goto label_05ad1051;
								pSVar2 = pSVar1.General;
								if ((pSVar2 == null) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_05ad10d9;
								bVar8 = (pSVar9[uVar15] == pSVar3._value);
								if (bVar8) goto label_05ad0d32;
								uVar15 = uVar15 + 1;
								iVar11 = pSVar9.Length;
							} while ((long)uVar15 < (long)(int)iVar11);
						}
						if (iVar11 != 0) {
							pSVar2 = pSVar1.General;
							if (pSVar2 == null) goto label_05ad10d9;
							if ((int)iVar11 == 0) {
	label_05ad1051: ;
								throw new IndexOutOfRangeException();
							}
							pSVar3 = pSVar2.GameMode;
							if (pSVar3 == null) goto label_05ad10d9;
							pSVar3.Value = (object)pSVar9[0];
						}
	label_05ad0d32: ;
						pSVar2 = pSVar1.General;
						if (((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) &&(pSVar4 = pSVar2.PrevGameMode, pSVar4 != null)) {
							bVar8 = (pSVar3._value != pSVar4._value);
							if (bVar8) {
								SandboxGameCreateConfiguration.ApplyMiscDefaults(pSVar1.Misc);
								pSVar2 = pSVar1.General;
								if (((pSVar2 == null) ||(pSVar3 = pSVar2.MapCategory, pSVar3 == null)) ||((pSVar4 = pSVar2.MapName, pSVar4 == null ||(pSVar6 = pSVar2.GameMode, pSVar6 == null)))) goto label_05ad10d9;
								pSVar13 = pSVar3._value;
								pSVar5 = pSVar4._value;
								gameMode = pSVar6._value;
								settings = pSVar1.Misc;
								BuiltinLevels.LoadSandboxMiscSettings(pSVar13, pSVar5, gameMode, settings);
								pSVar7 = pSVar1.Mode;
								pSVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, BaseSetting>));
								pSVar12 = new Dictionary<object, object>();
								if (pSVar7 == null) goto label_05ad10d9;
								pSVar7.Current = pSVar12;
							}
							pSVar2 = pSVar1.General;
							if (((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) &&(pSVar4 = pSVar2.PrevGameMode, pSVar4 != null)) {
								pSVar4.Value = (object)pSVar3._value;
								pSVar2 = pSVar1.General;
								if ((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) {
									pSVar13 = pSVar3._value;
									pSVar13 = BuiltinLevels.LoadLogic(pSVar13);
									bVar8 = (pSVar13 == BuiltinLevels.UseMapLogic);
									if (!bVar8) {
										pSVar10 = pSVar13;
									}
									pSVar12 = CustomLogicManager.GetModeSettings(pSVar10);
									pSVar7 = pSVar1.Mode;
									if ((pSVar7 != null) &&(pSVar12 != null)) {
										__this = (Dictionary<object, object>)pSVar7.Current ;
										collection = pSVar12.Keys;
										__this_01 = new List<string>((IEnumerable<T>)collection);
										if (__this_01 != null) {
											local_68 = __this_01.GetEnumerator();
											local_48 = pSVar1;
											local_38 = &local_68;
											if (__this == null) {
												bVar8 = local_68.MoveNext();
												if (bVar8) {
													throw new NullReferenceException();
												}
											}
											else {
												while (true) {
													bVar8 = local_68.MoveNext();
													key = local_68._current;
													if (!(bVar8)) break;
													bVar8 = __this.ContainsKey(local_68._current);
													if (bVar8) {
														value = __this.get_Item(key);
														pSVar12.set_Item(key, (object)value);
													}
												}
											}
											local_68.Dispose();
											pSVar7 = local_48.Mode;
											if (pSVar7 != null) {
												pSVar7.Current = pSVar12;
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05ad10d9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003462")]
	[Address(RVA = "0x59D4BE0", Offset = "0x59D3BE0", VA = "0x59D4BE0")]
	private static bool ConvertToBool(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$ConvertToBool): 8 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		bool bVar3;
		sbyte pcVar4;
		int piVar5;
		float pfVar6;
		bool local_21;
		float local_20;
		int local_1c;
		byte[] local_18 = new byte[16];

		local_21 = false;
		local_1c = 0;
		local_20 = 0.0;
		if (value != null) {
			pIVar2 = value.klass;
			if (pIVar2 == g_data_075566f0) {
				pcVar4 = il2cpp_vm_Object_Unbox(value);
				return *pcVar4 != false;
			}
			if (pIVar2 == g_data_07556710) {
				piVar5 = il2cpp_vm_Object_Unbox(value);
				return *piVar5 != 0;
			}
			if (pIVar2 == g_data_07556740) {
				pfVar6 = il2cpp_vm_Object_Unbox(value);
				local_18._0_4_ = *pfVar6;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
	joined_r0x05ad4cc3: ;
				if (uVar1 == 0) {
					local_18 = ZEXT416((uint)local_18._0_4_);
				}
				return 1.4013e-45 < ABS((float)local_18._0_4_);
			}
			if (pIVar2 == g_data_07556758) {
				bVar3 = Boolean.TryParse((String)value, ref local_21);
				if (bVar3) {
					return local_21 != false;
				}
				bVar3 = Int32.TryParse((String)value, ref local_1c);
				if (bVar3) {
					return local_1c != 0;
				}
				bVar3 = Single.TryParse((String)value, ref local_20);
				if (bVar3) {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					local_18._0_4_ = local_20;
					goto joined_r0x05ad4cc3;
				}
			}
		}
		bVar3 = Convert.ToBoolean(value);
		return bVar3;
	}

	[Token(Token = "0x6003463")]
	private bool NeedRefreshList<T>(string cacheKey, HashSet<T> currentSet, bool includeAI, bool includeNonAI, bool isShifter) where T : BaseCharacter
	{
		return default(bool);
	}

	[Token(Token = "0x6003464")]
	[Address(RVA = "0x59D3970", Offset = "0x59D2970", VA = "0x59D3970")]
	private static void SpawnEffectInternal(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, bool scaled, CustomLogicColorBuiltin tsExplodeColor, string tsKillSound)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c (CustomLogic.CustomLogicGameBuiltin$$SpawnEffectInternal): 28 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Color255 __this;
		Il2CppType handle;
		Color UVar3;
		bool bVar4;
		Type __this_00;
		FieldInfo left;
		String pSVar5;
		Object[] settings;
		object pIVar6;
		object pIVar7;
		String str0;
		Il2CppClass klass;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		undefined7 in_register_00000009;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar8;
		uint uVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Quaternion UVar14;
		Vector3 position_00;
		int local_94;
		CustomLogicColorBuiltin local_90;
		uint local_84;
		float local_80;
		int local_7c;
		Color local_78;
		String local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[24];

		local_90 = tsExplodeColor;
		local_80 = scale;
		local_68 = tsKillSound;
		handle = TypeRef_Effects_EffectPrefabs;
		local_94 = 0;
		__this_00 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (__this_00 == null) goto label_05ad3ce7;
		left = __this_00.GetField(effectName);
		bVar4 = (left != null);
		if (bVar4) {
			if (left == null) goto label_05ad3ce7;
			pSVar5 = (String)left.unknown(0);
			effectName = null;
			if (pSVar5 != null) {
				if (pSVar5.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				effectName = pSVar5;
			}
		}
		local_84 = (undefined4)CONCAT71(in_register_00000009, scaled);
		settings = null;
		bVar4 = (effectName == EffectPrefabs.ThunderspearExplode);
		pSVar5 = local_68;
		if (bVar4) {
			local_94 = 2;
			if (local_68 != null) {
				bVar4 = Enum.TryParse<TSKillType>(pSVar5, ref local_94);
				if (!bVar4) {
					str0 = il2cpp_codegen_get_runtime_metadata(&"Unknown Thunderspear kill sound type: ");
					pSVar5 = String.Concat(str0, pSVar5);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_01 = new ArgumentException(pSVar5);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SpawnEffectInternal);
					throw (object)__this_01;
				}
			}
			settings = (Object[])new object[2];
			if ((local_90 == null) ||(__this = local_90.Value, __this == null)) goto label_05ad3ce7;
			local_78 = __this.ToColor();
			pIVar6 = (object)local_78;
			if (settings == null) goto label_05ad3ce7;
			if (pIVar6 != null) {
				pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((settings.obj).klass)._1).element_class);
				if (pIVar7 == null) goto label_05ad3cf1;
			}
			if ((int)settings.Length == 0) {
	label_05ad3cec: ;
				throw new IndexOutOfRangeException();
			}
			settings[0] = pIVar6;
			local_7c = local_94;
			pIVar6 = (object)local_7c;
			if (pIVar6 != null) {
				pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((settings.obj).klass)._1).element_class);
				if (pIVar7 == null) {
	label_05ad3cf1: ;
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
			}
			if ((settings.Length & 0xfffffffe) == 0) goto label_05ad3cec;
			settings[1] = pIVar6;
		}
		UVar3 = local_78;
		if ((position != null) &&(rotation != null)) {
			local_68._0_4_ = position.Value.x;
			local_68._4_4_ = position.Value.y;
			local_90 = (CustomLogicColorBuiltin)CONCAT44(local_90._4_4_, position.Value.z);
			uVar1 = rotation.Value.x;
			uVar2 = rotation.Value.y;
			uVar8 = 0;
			uVar9 = 0;
			local_78.g = (float)uVar2 * 0.017453292;
			local_78.r = (float)uVar1 * 0.017453292;
			local_78.a = UVar3.a;
			local_78.b = rotation.Value.z * 0.017453292;
			UVar14 = Quaternion.Internal_FromEulerRad(ref local_78);
			fVar10 = UVar14.x;
			fVar11 = UVar14.y;
			fVar12 = UVar14.z;
			fVar13 = UVar14.w;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				local_48._8_4_ = extraout_XMM0_Dc;
				local_48._0_8_ = UVar14._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd;
				local_58._8_4_ = uVar8;
				local_58._0_8_ = UVar14._8_8_;
				local_58._12_4_ = uVar9;
				fVar10 = (float)local_48._0_4_;
				fVar11 = (float)local_48._4_4_;
				fVar12 = (float)local_58._0_4_;
				fVar13 = (float)local_58._4_4_;
			}
			UVar14.y = fVar11;
			UVar14.x = fVar10;
			UVar14.w = fVar13;
			UVar14.z = fVar12;
			position_00.z = local_90._0_4_;
			position_00._0_8_ = local_68;
			EffectSpawner.Spawn(effectName, position_00, UVar14, local_80, local_84._0_1_, settings);
			return;
		}
	label_05ad3ce7: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicGameBuiltin.c.

	// CustomLogic.CustomLogicGameBuiltin$$NeedRefreshList<object>: 14 lines keep C-only constructs
	private bool NeedRefreshList_object(String cacheKey, HashSet<T> currentSet, bool includeAI, bool includeNonAI, bool isShifter)
	{
		byte bVar1;
		Dictionary<object, object> pSVar2;
		List<object> pSVar3;
		Il2CppClass x;
		MethodInfo_34BE5E0 method_00;
		bool bVar4;
		CustomLogicListBuiltin pCVar5;
		object pIVar6;
		Object pUVar7;
		int iVar8;
		int local_7c;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_50 = new byte[16];
		Object local_40;
		Il2CppClass local_38;

		method_00 = method;
		if (method.rgctx_data == null) {
			if (method_00.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method_00);
			}
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar2 = (Dictionary<object, object>)this._cachedLists;
		if (pSVar2 == null) goto label_035beb62;
		bVar4 = pSVar2.ContainsKey((object)cacheKey);
		if (!bVar4) {
			return true;
		}
		pSVar2 = (Dictionary<object, object>)this._cachedLists;
		if ((((pSVar2 == null) ||(pCVar5 = pSVar2.get_Item((object)cacheKey), pCVar5 == null)) ||(pSVar3 = pCVar5.List, pSVar3 == null)) ||(currentSet == null)) goto label_035beb62;
		if (currentSet._count < pSVar3._size) {
			return true;
		}
		local_50.GetEnumerator((HashSet<object>)currentSet);
		local_58 = local_40;
		local_68 = (byte[])local_50._0_8_;
		local_50._0_8_ = null;
		local_50._8_8_ = local_68;
		local_40 = (Object)&method;
		if (isShifter) {
			local_7c = 0;
			if (includeAI) goto label_035be840;
			while(true) {
				bVar4 = local_68.MoveNext();
				pUVar7 = local_58;
				if (!bVar4) break;
				if (local_58 == null) {
	label_035beb5d: ;
					throw new NullReferenceException();
				}
				bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
				if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseShifter))) goto label_035beb5d;
				if ((*(sbyte)&(*(ulong)((sbyte)local_58 + 0x78)) == false) ||(*(sbyte)((long)&local_58[0x1b].m_CachedPtr + 2) != false)) {
					bVar4 = (pUVar7 != null);
					if (((bVar4) && (*(sbyte)&(*(ulong)((sbyte)pUVar7 + 0x78)) == false)) &&((includeNonAI && ((char)(*(ulong)((sbyte)pUVar7 + 0x88)) == false)))) {
						while(true) {
							pSVar3 = pCVar5.List;
							if (pSVar3 == null) goto label_035beb81;
							if (pSVar3._size <= local_7c) goto label_035beb59;
							pIVar6 = pSVar3.get_Item(local_7c);
							if (pIVar6 == null) goto label_035beb86;
							bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
							if (((pIVar6.klass._2).typeHierarchyDepth < bVar1) ||((pIVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicCharacterBuiltin))) goto label_035beb79;
							local_38 = pIVar6[3].klass;
							bVar4 = ((Object)local_38 != pUVar7);
							if (bVar4) goto label_035beb59;
							local_7c = local_7c + 1;
							if (!includeAI) break;
	label_035be840: ;
							do {
								do {
									bVar4 = local_68.MoveNext();
									pUVar7 = local_58;
									if (!bVar4) goto label_035beaf9;
									if (local_58 == null) goto label_035beb5d;
									bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
									if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseShifter))) goto label_035beb5d;
								} while ((*(sbyte)&(*(ulong)((sbyte)local_58 + 0x78)) != false) &&(*(sbyte)((long)&local_58[0x1b].m_CachedPtr + 2) == false));
								bVar4 = (pUVar7 != null);
							} while (((!bVar4) || (*(sbyte)&(*(ulong)((sbyte)pUVar7 + 0x78)) != false)) ||(((char)(*(ulong)((sbyte)pUVar7 + 0x88)) == false && (!includeNonAI))));
						}
					}
				}
			}
		}
		else {
			local_7c = 0;
			while(true) {
				bVar4 = local_68.MoveNext();
				pUVar7 = local_58;
				if (!bVar4) break;
				bVar4 = (pUVar7 != null);
				if (bVar4) {
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					if ((*(sbyte)&(*(ulong)((sbyte)pUVar7 + 0x78)) == false) &&(((includeAI && ((char)(*(ulong)((sbyte)pUVar7 + 0x88)) != false)) ||((includeNonAI && ((char)(*(ulong)((sbyte)pUVar7 + 0x88)) == false)))))) {
						pSVar3 = pCVar5.List;
						if (pSVar3 == null) {
	label_035beb81: ;
							throw new NullReferenceException();
						}
						if (pSVar3._size <= local_7c) goto label_035beb59;
						pIVar6 = pSVar3.get_Item(local_7c);
						if (pIVar6 == null) {
	label_035beb86: ;
							throw new NullReferenceException();
						}
						bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
						if (((pIVar6.klass._2).typeHierarchyDepth < bVar1) ||((pIVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicCharacterBuiltin))) {
	label_035beb79: ;
							throw new InvalidCastException();
						}
						x = pIVar6[3].klass;
						bVar4 = ((Object)x != pUVar7);
						if (bVar4) goto label_035beb59;
						local_7c = local_7c + 1;
					}
				}
			}
		}
	label_035beaf9: ;
		iVar8 = 0xc;
		bVar4 = false;
	label_035beb04: ;
		local_68.Dispose();
		if ((iVar8 == 0xc) || (iVar8 == 0)) {
			pSVar3 = pCVar5.List;
			if (pSVar3 == null) {
	label_035beb62: ;
				throw new NullReferenceException();
			}
			bVar4 = local_7c != pSVar3._size;
		}
		return bVar4;
	label_035beb59: ;
		bVar4 = true;
		iVar8 = 0xb;
		goto label_035beb04;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsEnding");
		__this.Add((Il2CppObject *)"EndTimeLeft");
		__this.Add((Il2CppObject *)"IsExperience");
		__this.Add((Il2CppObject *)"ExperienceID");
		__this.Add((Il2CppObject *)"CanSaveExperienceScore");
		__this.Add((Il2CppObject *)"MainCharacter");
		__this.Add((Il2CppObject *)"Titans");
		__this.Add((Il2CppObject *)"AITitans");
		__this.Add((Il2CppObject *)"PlayerTitans");
		__this.Add((Il2CppObject *)"Shifters");
		__this.Add((Il2CppObject *)"AIShifters");
		__this.Add((Il2CppObject *)"PlayerShifters");
		__this.Add((Il2CppObject *)"Horses");
		__this.Add((Il2CppObject *)"Humans");
		__this.Add((Il2CppObject *)"AIHumans");
		__this.Add((Il2CppObject *)"PlayerHumans");
		__this.Add((Il2CppObject *)"Loadouts");
		__this.Add((Il2CppObject *)"DefaultShowKillScore");
		__this.Add((Il2CppObject *)"DefaultShowKillFeed");
		__this.Add((Il2CppObject *)"DefaultHideKillScore");
		__this.Add((Il2CppObject *)"DefaultAddKillScore");
		__this.Add((Il2CppObject *)"ShowScoreboardLoadout");
		__this.Add((Il2CppObject *)"ShowScoreboardStatus");
		__this.Add((Il2CppObject *)"ForcedCharacterType");
		__this.Add((Il2CppObject *)"ForcedLoadout");
		__this.Add((Il2CppObject *)"GetExperienceScore");
		__this.Add((Il2CppObject *)"SaveExperienceScore");
		__this.Add((Il2CppObject *)"SaveExperienceCompletionTime");
		__this.Add((Il2CppObject *)"SpawnHorse");
		__this.Add((Il2CppObject *)"Debug");
		__this.Add((Il2CppObject *)"Print");
		__this.Add((Il2CppObject *)"PrintAll");
		__this.Add((Il2CppObject *)"GetGeneralSetting");
		__this.Add((Il2CppObject *)"GetTitanSetting");
		__this.Add((Il2CppObject *)"GetMiscSetting");
		__this.Add((Il2CppObject *)"SetPreloadGeneralSetting");
		__this.Add((Il2CppObject *)"SetPreloadTitanSetting");
		__this.Add((Il2CppObject *)"SetPreloadMiscSetting");
		__this.Add((Il2CppObject *)"SetPreloadModeSetting");
		__this.Add((Il2CppObject *)"SetPreloadMap");
		__this.Add((Il2CppObject *)"SetPreloadGameMode");
		__this.Add((Il2CppObject *)"LoadPreloadPreset");
		__this.Add((Il2CppObject *)"RestartWithPreloadSettings");
		__this.Add((Il2CppObject *)"End");
		__this.Add((Il2CppObject *)"FindCharacterByViewID");
		__this.Add((Il2CppObject *)"SpawnTitan");
		__this.Add((Il2CppObject *)"SpawnTitanAt");
		__this.Add((Il2CppObject *)"SpawnTitans");
		__this.Add((Il2CppObject *)"SpawnTitansAsync");
		__this.Add((Il2CppObject *)"SpawnTitansAt");
		__this.Add((Il2CppObject *)"SpawnTitansAtAsync");
		__this.Add((Il2CppObject *)"SpawnShifter");
		__this.Add((Il2CppObject *)"SpawnHuman");
		__this.Add((Il2CppObject *)"SpawnHumanAt");
		__this.Add((Il2CppObject *)"SpawnShifterAt");
		__this.Add((Il2CppObject *)"SpawnProjectile");
		__this.Add((Il2CppObject *)"SpawnProjectileWithOwner");
		__this.Add((Il2CppObject *)"SpawnEffect");
		__this.Add((Il2CppObject *)"SpawnUnscaledEffect");
		__this.Add((Il2CppObject *)"SpawnPlayer");
		__this.Add((Il2CppObject *)"SpawnPlayerAll");
		__this.Add((Il2CppObject *)"SpawnPlayerAt");
		__this.Add((Il2CppObject *)"SpawnPlayerAtAll");
		__this.Add((Il2CppObject *)"SetPlaylist");
		__this.Add((Il2CppObject *)"SetSong");
		__this.Add((Il2CppObject *)"DrawRay");
		__this.Add((Il2CppObject *)"ShowKillScore");
		__this.Add((Il2CppObject *)"ShowKillFeed");
		__this.Add((Il2CppObject *)"ShowKillFeedAll");
		CustomLogicGameBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicGameBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsEnding>g____getter|2_0: 5 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsEnding_g____getter_2_0(CustomLogicGameBuiltin __i)
	{
		byte bVar1;
		BaseGameManager pGVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (__i != null) {
			uStack_8 = in_RAX;
			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				uStack_8 = CONCAT17(*(byte)&(*(ulong)((sbyte)pGVar2 + 0x70)), (undefined7)uStack_8);
				pIVar3 = (object)(((long)&uStack_8 + 7));
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__EndTimeLeft>g____getter|3_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__EndTimeLeft_g____getter_3_0(CustomLogicGameBuiltin __i)
	{
		byte bVar1;
		BaseGameManager pGVar2;
		BaseGameManager pGVar3;
		object pIVar4;
		byte[] auStack_4 = new byte[4];

		if (__i != null) {
			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 != null) {
				pGVar3 = pGVar2.klass;
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar3._2).typeHierarchyDepth < bVar1) ||((pGVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				return pIVar4;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsExperience>g____getter|4_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsExperience_g____getter_4_0(CustomLogicGameBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = ExperienceIdentity.IsExperience(SettingsManager.InGameCurrent);
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ExperienceID_g____getter_5_0(CustomLogicGameBuiltin __i)
	{
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pSVar1 = ExperienceIdentity.GetId(SettingsManager.InGameCurrent);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__CanSaveExperienceScore>g____getter|6_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__CanSaveExperienceScore_g____getter_6_0(CustomLogicGameBuiltin __i)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __i.CanSaveExperienceScore;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__MainCharacter>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__MainCharacter_g____getter_7_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicCharacterBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.MainCharacter;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Titans>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Titans_g____getter_8_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Titans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AITitans>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__AITitans_g____getter_9_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.AITitans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerTitans>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__PlayerTitans_g____getter_10_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.PlayerTitans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Shifters>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Shifters_g____getter_11_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Shifters;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIShifters>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__AIShifters_g____getter_12_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.AIShifters;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerShifters>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__PlayerShifters_g____getter_13_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.PlayerShifters;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Horses>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Horses_g____getter_14_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Horses;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Humans>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Humans_g____getter_15_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Humans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIHumans>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__AIHumans_g____getter_16_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.AIHumans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerHumans>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__PlayerHumans_g____getter_17_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.PlayerHumans;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Loadouts>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Loadouts_g____getter_18_0(CustomLogicGameBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Loadouts;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__DefaultShowKillScore_g____getter_19_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d27 == false) {
				Il2CppMethodInitialized_07546d27 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__DefaultShowKillScore_g____setter_19_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d28 == false) {
				Il2CppMethodInitialized_07546d28 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.DefaultShowKillScore = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__DefaultShowKillFeed_g____getter_20_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d29 == false) {
				Il2CppMethodInitialized_07546d29 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__DefaultShowKillFeed_g____setter_20_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2a == false) {
				Il2CppMethodInitialized_07546d2a = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.DefaultShowKillFeed = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__DefaultHideKillScore_g____getter_21_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d29 == false) {
				Il2CppMethodInitialized_07546d29 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__DefaultHideKillScore_g____setter_21_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2a == false) {
				Il2CppMethodInitialized_07546d2a = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.DefaultShowKillFeed = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__DefaultAddKillScore_g____getter_22_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2b == false) {
				Il2CppMethodInitialized_07546d2b = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____setter|22_1: clean
	private static void Bindings____CreatePropertyBinding__DefaultAddKillScore_g____setter_22_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2c == false) {
				Il2CppMethodInitialized_07546d2c = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.DefaultAddKillScore = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_23_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2d == false) {
				Il2CppMethodInitialized_07546d2d = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_23_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2e == false) {
				Il2CppMethodInitialized_07546d2e = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.ShowScoreboardLoadout = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__ShowScoreboardStatus_g____getter_24_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		object pIVar3;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d2f == false) {
				Il2CppMethodInitialized_07546d2f = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____setter|24_1: clean
	private static void Bindings____CreatePropertyBinding__ShowScoreboardStatus_g____setter_24_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d30 == false) {
				Il2CppMethodInitialized_07546d30 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.ShowScoreboardStatus = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__ForcedCharacterType_g____getter_25_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d31 == false) {
				Il2CppMethodInitialized_07546d31 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return (object)pCVar2.ForcedCharacterType;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____setter|25_1: clean
	private static void Bindings____CreatePropertyBinding__ForcedCharacterType_g____setter_25_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		String pSVar3;

		pSVar3 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d32 == false) {
				Il2CppMethodInitialized_07546d32 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.ForcedCharacterType = pSVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__ForcedLoadout_g____getter_26_0(CustomLogicGameBuiltin __i)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546d33 == false) {
				Il2CppMethodInitialized_07546d33 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				return (object)pCVar2.ForcedLoadout;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____setter|26_1: clean
	private static void Bindings____CreatePropertyBinding__ForcedLoadout_g____setter_26_1(CustomLogicGameBuiltin __i, object __v)
	{
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		String pSVar3;

		pSVar3 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546d34 == false) {
				Il2CppMethodInitialized_07546d34 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			}
			if (pCVar2 != null) {
				pCVar2.ForcedLoadout = pSVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicGameBuiltin.Bindings.c();
		CustomLogicGameBuiltin.Bindings.c.__9 =(CustomLogicGameBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetExperienceScore>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__GetExperienceScore_b__27_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		CustomLogicExperienceScoreBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetExperienceScore();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceScore>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__SaveExperienceScore_b__28_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		bool lowerIsBetter;
		String unit;
		CustomLogicGameBuiltin __this_00;
		float score;

		if (__a == null) {
	label_05adcb5b: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			score = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				unit = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
				if ((int)__a.Length < 3) {
					lowerIsBetter = false;
				}
				else {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					lowerIsBetter = CustomLogicEvaluator.ConvertTo<bool>((object)__this_00);
				}
				if (__c != null) {
					__this_00.SaveExperienceScore(score, unit, lowerIsBetter);
					return null;
				}
				goto label_05adcb5b;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceCompletionTime>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__SaveExperienceCompletionTime_b__29_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		float elapsed;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			elapsed = CustomLogicEvaluator.ConvertTo<float>(obj);
			if (__c != null) {
				__c.SaveExperienceCompletionTime(elapsed);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHorse>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnHorse_b__30_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin position;
		CustomLogicHorseBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00);
			rotationY = 0.0;
			if (1 < (int)__a.Length) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
			}
			if (__c != null) {
				pCVar1 = __this_00.SpawnHorse(position, rotationY);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Debug>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__Debug_b__31_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				this.Debug(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Print>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__Print_b__32_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				this.Print(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrintAll>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__PrintAll_b__33_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String pSVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pSVar1 = (String)__a[0];
				if (pSVar1 == null) {
					pSVar1 = "null";
				}
				if (pSVar1 != null) {
					pSVar1 = pSVar1.ToString();
					ChatManager.SendChatAll(pSVar1, 3);
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetGeneralSetting>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__GetGeneralSetting_b__34_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTitanSetting>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__GetTitanSetting_b__35_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMiscSetting>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__GetMiscSetting_b__36_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGeneralSetting>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__SetPreloadGeneralSetting_b__37_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;
		byte uStack_19;

		if (__a == null) {
	label_05add05d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					uStack_19 = __this_00.SetPreloadGeneralSetting(settingName, __a[1]);
					return pIVar1;
				}
				goto label_05add05d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadTitanSetting>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__SetPreloadTitanSetting_b__38_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;
		byte uStack_19;

		if (__a == null) {
	label_05add11d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					uStack_19 = __this_00.SetPreloadTitanSetting(settingName, __a[1]);
					return pIVar1;
				}
				goto label_05add11d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMiscSetting>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__SetPreloadMiscSetting_b__39_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;
		byte uStack_19;

		if (__a == null) {
	label_05add1dd: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					uStack_19 = __this_00.SetPreloadMiscSetting(settingName, __a[1]);
					return pIVar1;
				}
				goto label_05add1dd;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadModeSetting>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__SetPreloadModeSetting_b__40_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String settingName;
		object pIVar1;
		CustomLogicGameBuiltin __this_00;
		byte uStack_19;

		if (__a == null) {
	label_05add29d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			settingName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					uStack_19 = __this_00.SetPreloadModeSetting(settingName, __a[1]);
					return pIVar1;
				}
				goto label_05add29d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMap>b__41_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SetPreloadMap_b__41_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		String mapCategory;
		String mapName;
		object pIVar2;
		CustomLogicGameBuiltin __this_00;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a == null) {
	label_05add376: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			mapCategory = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				mapName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00) ;
				if (__c != null) {
					bVar1 = __this_00.SetPreloadMap(mapCategory, mapName);
					uStack_28 = CONCAT17(bVar1, (undefined7)uStack_28);
					pIVar2 = (object)(((long)&uStack_28 + 7));
					return pIVar2;
				}
				goto label_05add376;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGameMode>b__42_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SetPreloadGameMode_b__42_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		String gameMode;
		object pIVar2;
		CustomLogicGameBuiltin __this_00;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			gameMode = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				bVar1 = __this_00.SetPreloadGameMode(gameMode);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadPreloadPreset>b__43_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__LoadPreloadPreset_b__43_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		String presetName;
		object pIVar2;
		CustomLogicGameBuiltin __this_00;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			presetName = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				bVar1 = __this_00.LoadPreloadPreset(presetName);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__RestartWithPreloadSettings>b__44_0: clean
	private object Bindings_c____CreateMethodBinding__RestartWithPreloadSettings_b__44_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		bool bVar1;
		object pIVar2;

		if (__c == null) {
			throw new NullReferenceException();
		}
		bVar1 = PhotonNetwork.IsMasterClient;
		if (bVar1) {
			InGameManager.RestartGame();
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__End>b__45_0: clean
	private object Bindings_c____CreateMethodBinding__End_b__45_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		CustomLogicGameBuiltin __this_00;
		float delay;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			delay = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
			if (__c != null) {
				__this_00.End(delay);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindCharacterByViewID>b__46_0: clean
	private object Bindings_c____CreateMethodBinding__FindCharacterByViewID_b__46_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		int viewID;
		CustomLogicCharacterBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			viewID = CustomLogicEvaluator.ConvertTo<int>((object)__this_00);
			if (__c != null) {
				pCVar1 = __this_00.FindCharacterByViewID(viewID);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitan>b__47_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitan_b__47_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String type;
		CustomLogicTitanBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			type = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				pCVar1 = __this_00.SpawnTitan(type);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitanAt>b__48_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitanAt_b__48_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		String type;
		CustomLogicVector3Builtin position;
		CustomLogicTitanBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05add82d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00);
				rotationY = 0.0;
				if (2 < (int)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
				}
				if (__c != null) {
					pCVar1 = __this_00.SpawnTitanAt(type, position, rotationY);
					return (object)pCVar1;
				}
				goto label_05add82d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitans>b__49_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitans_b__49_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int count;
		String type;
		CustomLogicListBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05add8eb: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				count = CustomLogicEvaluator.ConvertTo<int>((object)__this_00);
				if (__c != null) {
					pCVar1 = __this_00.SpawnTitans(type, count);
					return (object)pCVar1;
				}
				goto label_05add8eb;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAsync>b__50_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitansAsync_b__50_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int count;
		String type;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05add9ae: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				count = CustomLogicEvaluator.ConvertTo<int>((object)__this_00);
				if (__c != null) {
					__this_00.SpawnTitansAsync(type, count);
					return null;
				}
				goto label_05add9ae;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAt>b__51_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitansAt_b__51_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int count;
		String type;
		CustomLogicVector3Builtin position;
		CustomLogicListBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05addaf8: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				count = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00) ;
					rotationY = 0.0;
					if (3 < (int)__a.Length) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
					}
					if (__c != null) {
						pCVar1 = __this_00.SpawnTitansAt(type, count, position, rotationY);
						return (object)pCVar1;
					}
					goto label_05addaf8;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAtAsync>b__52_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnTitansAtAsync_b__52_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int count;
		String type;
		CustomLogicVector3Builtin position;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05addc3b: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				count = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00) ;
					rotationY = 0.0;
					if (3 < (int)__a.Length) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
					}
					if (__c != null) {
						__this_00.SpawnTitansAtAsync(type, count, position, rotationY);
						return null;
					}
					goto label_05addc3b;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifter>b__53_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnShifter_b__53_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		String type;
		CustomLogicShifterBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			type = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
			if (__c != null) {
				pCVar1 = __this_00.SpawnShifter(type);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHuman>b__54_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnHuman_b__54_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int costume;
		String costumeName;
		String loadout;
		CustomLogicHumanBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05addda5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			costume = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				costumeName = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					loadout = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
					if (__c != null) {
						pCVar1 = __this_00.SpawnHuman(costume, costumeName, loadout) ;
						return (object)pCVar1;
					}
					goto label_05addda5;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHumanAt>b__55_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnHumanAt_b__55_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int costume;
		String costumeName;
		String loadout;
		CustomLogicVector3Builtin position;
		CustomLogicHumanBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05addf0e: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			costume = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				costumeName = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					loadout = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00);
						rotationY = 0.0;
						if (4 < (int)__a.Length) {
							__this_00 = (CustomLogicGameBuiltin)__a[4];
							rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
						}
						if (__c != null) {
							pCVar1 = __this_00.SpawnHumanAt(costume, costumeName, loadout, position, rotationY);
							return (object)pCVar1;
						}
						goto label_05addf0e;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifterAt>b__56_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnShifterAt_b__56_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		String type;
		CustomLogicVector3Builtin position;
		CustomLogicShifterBuiltin pCVar1;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05ade01d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			type = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00);
				rotationY = 0.0;
				if (2 < (int)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
				}
				if (__c != null) {
					pCVar1 = __this_00.SpawnShifterAt(type, position, rotationY);
					return (object)pCVar1;
				}
				goto label_05ade01d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectile>b__57_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnProjectile_b__57_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		int iVar1;
		String projectileName;
		CustomLogicVector3Builtin position;
		CustomLogicVector3Builtin rotation;
		CustomLogicVector3Builtin velocity;
		CustomLogicVector3Builtin gravity;
		String team;
		object pIVar2;
		CustomLogicGameBuiltin __this_00;
		float liveTime;

		if (__a == null) {
	label_05ade1e3: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			projectileName = CustomLogicEvaluator.ConvertTo<string>(pIVar2) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						velocity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[3]);
						if (4 < (uint)__a.Length) {
							gravity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[4]);
							if (5 < (uint)__a.Length) {
								liveTime = CustomLogicEvaluator.ConvertTo<float>(__a[5]);
								if (6 < (uint)__a.Length) {
									team = CustomLogicEvaluator.ConvertTo<string>(__a[6]);
									iVar1 = (int)__a.Length;
									if (iVar1 < 8) {
										__this_00 = null;
										pIVar2 = null;
									}
									else {
										__this_00 = (CustomLogicGameBuiltin)__a[7];
										if (iVar1 == 8) {
											pIVar2 = null;
										}
										else {
											pIVar2 = __a[8];
										}
									}
									if (__c != null) {
										__this_00.SpawnProjectile(projectileName, position, rotation, velocity, gravity, liveTime, team, (object)__this_00, pIVar2);
										return null;
									}
									goto label_05ade1e3;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectileWithOwner>b__58_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnProjectileWithOwner_b__58_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		int iVar1;
		String projectileName;
		CustomLogicVector3Builtin position;
		CustomLogicVector3Builtin rotation;
		CustomLogicVector3Builtin velocity;
		CustomLogicVector3Builtin gravity;
		CustomLogicCharacterBuiltin owner;
		object pIVar2;
		CustomLogicGameBuiltin __this_00;
		float liveTime;

		if (__a == null) {
	label_05ade3af: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			projectileName = CustomLogicEvaluator.ConvertTo<string>(pIVar2) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						velocity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[3]);
						if (4 < (uint)__a.Length) {
							gravity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[4]);
							if (5 < (uint)__a.Length) {
								liveTime = CustomLogicEvaluator.ConvertTo<float>(__a[5]);
								if (6 < (uint)__a.Length) {
									owner = CustomLogicEvaluator.ConvertTo<CustomLogicCharacterBuiltin>(__a[6]);
									iVar1 = (int)__a.Length;
									if (iVar1 < 8) {
										__this_00 = null;
										pIVar2 = null;
									}
									else {
										__this_00 = (CustomLogicGameBuiltin)__a[7];
										if (iVar1 == 8) {
											pIVar2 = null;
										}
										else {
											pIVar2 = __a[8];
										}
									}
									if (__c != null) {
										__this_00.SpawnProjectileWithOwner(projectileName, position, rotation, velocity, gravity, liveTime, owner, (object)__this_00, pIVar2);
										return null;
									}
									goto label_05ade3af;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnEffect>b__59_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnEffect_b__59_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String effectName;
		CustomLogicVector3Builtin position;
		CustomLogicVector3Builtin rotation;
		CustomLogicColorBuiltin tsExplodeColor;
		String tsKillSound;
		float scale;

		if (__a == null) {
	label_05ade579: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			effectName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((((__a.Length & 0xfffffffe) != 0) &&(position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]), 2 < (uint)__a.Length)) &&(rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]) , (__a.Length & 0xfffffffc) != 0)) {
				scale = CustomLogicEvaluator.ConvertTo<float>(__a[3]);
				if ((int)__a.Length < 5) {
					tsExplodeColor = null;
					tsKillSound = null;
				}
				else {
					pIVar1 = __a[4];
					tsExplodeColor = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(pIVar1);
					if ((int)__a.Length < 6) {
						tsKillSound = null;
					}
					else {
						pIVar1 = __a[5];
						tsKillSound = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
					}
				}
				if (__c != null) {
					CustomLogicGameBuiltin.SpawnEffectInternal(effectName, position, rotation, scale, true, tsExplodeColor, tsKillSound);
					return null;
				}
				goto label_05ade579;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnUnscaledEffect>b__60_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnUnscaledEffect_b__60_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String effectName;
		CustomLogicVector3Builtin position;
		CustomLogicVector3Builtin rotation;
		CustomLogicColorBuiltin tsExplodeColor;
		String tsKillSound;

		if (__a == null) {
	label_05ade703: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			effectName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]) ;
					if ((int)__a.Length < 4) {
						tsExplodeColor = null;
						tsKillSound = null;
					}
					else {
						pIVar1 = __a[3];
						tsExplodeColor = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(pIVar1);
						if ((int)__a.Length < 5) {
							tsKillSound = null;
						}
						else {
							pIVar1 = __a[4];
							tsKillSound = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
						}
					}
					if (__c != null) {
						CustomLogicGameBuiltin.SpawnEffectInternal(effectName, position, rotation, 1.0, false, tsExplodeColor, tsKillSound);
						return null;
					}
					goto label_05ade703;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayer>b__61_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnPlayer_b__61_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		bool force;
		CustomLogicPlayerBuiltin player;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05ade7bf: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			player = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				force = CustomLogicEvaluator.ConvertTo<bool>((object)__this_00);
				if (__c != null) {
					__this_00.SpawnPlayer(player, force);
					return null;
				}
				goto label_05ade7bf;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAll>b__62_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnPlayerAll_b__62_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		bool force;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			force = CustomLogicEvaluator.ConvertTo<bool>((object)__this_00);
			if (__c != null) {
				__this_00.SpawnPlayerAll(force);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAt>b__63_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnPlayerAt_b__63_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		bool force;
		CustomLogicPlayerBuiltin player;
		CustomLogicVector3Builtin position;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05ade99c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			player = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				force = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00) ;
					rotationY = 0.0;
					if (3 < (int)__a.Length) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
					}
					if (__c != null) {
						__this_00.SpawnPlayerAt(player, force, position, rotationY);
						return null;
					}
					goto label_05ade99c;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAtAll>b__64_0: clean
	private object Bindings_c____CreateMethodBinding__SpawnPlayerAtAll_b__64_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		bool force;
		CustomLogicVector3Builtin position;
		CustomLogicGameBuiltin __this_00;
		float rotationY;

		if (__a == null) {
	label_05adeaaf: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			force = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicGameBuiltin)__a[1];
				position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>((object)__this_00);
				rotationY = 0.0;
				if (2 < (int)__a.Length) {
					__this_00 = (CustomLogicGameBuiltin)__a[2];
					rotationY = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
				}
				if (__c != null) {
					__this_00.SpawnPlayerAtAll(force, position, rotationY);
					return null;
				}
				goto label_05adeaaf;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPlaylist>b__65_0: clean
	private object Bindings_c____CreateMethodBinding__SetPlaylist_b__65_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicEvaluator pCVar1;
		String playlist;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			playlist = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				MusicManager.SetPlaylist(playlist);
				pCVar1 = CustomLogicManager.Evaluator;
				if (pCVar1 != null) {
					pCVar1.HasSetMusic = true;
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSong>b__66_0: clean
	private object Bindings_c____CreateMethodBinding__SetSong_b__66_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicEvaluator pCVar1;
		String song;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			song = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				MusicManager.SetSong(song, 0.0);
				pCVar1 = CustomLogicManager.Evaluator;
				if (pCVar1 != null) {
					pCVar1.HasSetMusic = true;
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__DrawRay>b__67_0: clean
	private object Bindings_c____CreateMethodBinding__DrawRay_b__67_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin dir;
		CustomLogicColorBuiltin color;
		CustomLogicGameBuiltin __this_00;
		float duration;

		if (__a == null) {
	label_05adeda9: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				dir = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						duration = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
						if (__c != null) {
							__this_00.DrawRay(start, dir, color, duration);
							return null;
						}
						goto label_05adeda9;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillScore>b__68_0: clean
	private object Bindings_c____CreateMethodBinding__ShowKillScore_b__68_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		int damage;
		CustomLogicGameBuiltin __this_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicGameBuiltin)__a[0];
			damage = CustomLogicEvaluator.ConvertTo<int>((object)__this_00);
			if (__c != null) {
				__this_00.ShowKillScore(damage);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeed>b__69_0: clean
	private object Bindings_c____CreateMethodBinding__ShowKillFeed_b__69_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int score;
		String killer;
		String victim;
		String weapon;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05adef3f: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			killer = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				victim = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					score = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						weapon = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
						if (__c != null) {
							__this_00.ShowKillFeed(killer, victim, score, weapon);
							return null;
						}
						goto label_05adef3f;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeedAll>b__70_0: clean
	private object Bindings_c____CreateMethodBinding__ShowKillFeedAll_b__70_0(CustomLogicGameBuiltin __c, Object[] __a)
	{
		object obj;
		int score;
		String killer;
		String victim;
		String weapon;
		CustomLogicGameBuiltin __this_00;

		if (__a == null) {
	label_05adf04f: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			killer = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				victim = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					score = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						__this_00 = (CustomLogicGameBuiltin)__a[3];
						weapon = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
						if (__c != null) {
							__this_00.ShowKillFeedAll(killer, victim, score, weapon);
							return null;
						}
						goto label_05adf04f;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicGameBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicGameBuiltin.c();
		CustomLogicGameBuiltin.c.__9 =(CustomLogicGameBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicGameBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicGameBuiltin.<>c$$<get_Loadouts>b__43_0: clean
	private object c__get_Loadouts_b__43_0(String x)
	{
		return (object)x;
	}
}
