// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBuiltinTypes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBuiltinTypes.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000639")]
[CompilerGenerated]
internal class CustomLogicBuiltinTypes
{
	[Token(Token = "0x4001AC9")]
	[FieldOffset(Offset = "0x0")]
	private static CustomLogicBuiltinTypes __selfForEasyReferencing;

	[Token(Token = "0x4001ACA")]
	[FieldOffset(Offset = "0x8")]
	public static readonly HashSet<string> TypeNames;

	[Token(Token = "0x4001ACB")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Dictionary<string, string> BaseTypeNames;

	[Token(Token = "0x4001ACC")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Dictionary<string, HashSet<string>> MemberNames;

	[Token(Token = "0x4001ACD")]
	[FieldOffset(Offset = "0x20")]
	public static readonly HashSet<string> StaticTypeNames;

	[Token(Token = "0x4001ACE")]
	[FieldOffset(Offset = "0x28")]
	public static readonly HashSet<string> AbstractTypeNames;

	[Token(Token = "0x6003B6B")]
	[Address(RVA = "0x5A58370", Offset = "0x5A57370", VA = "0x5A58370")]
	public static bool IsBuiltinType(string typeName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$IsBuiltinType): 1 lines keep C-only constructs
		uint uVar1;
		HashSet<object> __this;
		bool bVar2;

		if (Il2CppMethodInitialized_075472f8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075472f8 = true;
			uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (HashSet<object>)CustomLogicBuiltinTypes.TypeNames;
		}
		else {
			__this = *(HashSet<object>*)((long)(typeof(CustomLogicBuiltinTypes)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this.Contains((object)typeName);
		return bVar2;
	}

	[Token(Token = "0x6003B6C")]
	[Address(RVA = "0x5A58410", Offset = "0x5A57410", VA = "0x5A58410")]
	public static bool IsAbstract(string typeName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$IsAbstract): 1 lines keep C-only constructs
		uint uVar1;
		HashSet<object> __this;
		bool bVar2;

		if (Il2CppMethodInitialized_075472f9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075472f9 = true;
			uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (HashSet<object>)CustomLogicBuiltinTypes.AbstractTypeNames;
		}
		else {
			__this = *(HashSet<object>*)((long)(typeof(CustomLogicBuiltinTypes)).static_fields + 0x28);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this.Contains((object)typeName);
		return bVar2;
	}

	[Token(Token = "0x6003B6D")]
	[Address(RVA = "0x5A584B0", Offset = "0x5A574B0", VA = "0x5A584B0")]
	public static ICLMemberBinding CreateBinding(string typeName, string varName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$CreateBinding): 11 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		ICLMemberBinding pCVar3;
		String pSVar4;
		String str2;
		Il2CppClass klass;
		Exception __this;
		MethodInfo lastManagedFrame;

		if (Il2CppMethodInitialized_075472fa == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputInteractionEnum.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicMapTargetableBuiltin.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicScrollElasticityEnum.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVisualElementBuiltin.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputErenShifterEnum.Bindings)) ;
			Il2CppMethodInitialized_075472fa = true;
		}
		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(typeName);
		if (uVar2 < 0x7bb199a5) {
			if (uVar2 < 0x4115d183) {
				if (uVar2 < 0x1bcb960f) {
					if (uVar2 < 0xbf49dfa) {
						if (uVar2 < 0x6b7e4bd) {
							if (uVar2 == 0xa8938) {
								bVar1 = (typeName == "ErenAnimationEnum");
								if (bVar1) {
									if ((typeof(CustomLogicErenAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									return pCVar3;
								}
							}
							else if (uVar2 == 0x5b115bc) {
								bVar1 = (typeName == "Shifter");
								if (bVar1) {
									return pCVar3;
								}
							}
							else if (uVar2 == 0x6b7e4bc) {
								bVar1 = (typeName == "InputInteractionEnum");
								if (bVar1) {
									if ((typeof(CustomLogicInputInteractionEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									return pCVar3;
								}
							}
						}
						else if (uVar2 < 0x91ceb7d) {
							if (uVar2 == 0x6f486c8) {
								bVar1 = (typeName == "WallColossalAnimationEnum");
								if (bVar1) {
									if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									return pCVar3;
								}
							}
							else if (uVar2 == 0x91ceb7c) {
								bVar1 = (typeName == "TitanAnimationEnum");
								if (bVar1) {
									if ((typeof(CustomLogicTitanAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									return pCVar3;
								}
							}
						}
						else if (uVar2 == 0xa324a9e) {
							bVar1 = (typeName == "InputAnnieShifterEnum");
							if (bVar1) {
								if ((typeof(CustomLogicInputAnnieShifterEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0xbf49df9) {
							bVar1 = (typeName == "Titan");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 < 0x17a631e7) {
						if (uVar2 < 0x15794802) {
							if (uVar2 == 0xdc58442) {
								bVar1 = (typeName == "Physics");
								if (bVar1) {
									return pCVar3;
								}
							}
							else if (uVar2 == 0x15794801) {
								bVar1 = (typeName == "HorseAnimationEnum");
								if (bVar1) {
									if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
									}
									return pCVar3;
								}
							}
						}
						else if (uVar2 == 0x16518ba4) {
							bVar1 = (typeName == "UnityComponentEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x17a631e6) {
							bVar1 = (typeName == "InputCategoryEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 < 0x19a37e36) {
						if (uVar2 == 0x1983851a) {
							bVar1 = (typeName == "Human");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x19a37e35) {
							bVar1 = (typeName == "CharacterTypeEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x1b528e1c) {
						bVar1 = (typeName == "ScrollElasticityEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x1bcb960e) {
						bVar1 = (typeName == "ForceModeEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x2e7323dc) {
					if (uVar2 < 0x2300193d) {
						if (uVar2 < 0x1e3a3682) {
							if (uVar2 == 0x1c70fc20) {
								bVar1 = (typeName == "Player");
								if (bVar1) {
									return pCVar3;
								}
							}
							else if (uVar2 == 0x1e3a3681) {
								bVar1 = (typeName == "Cutscene");
								if (bVar1) {
									return pCVar3;
								}
							}
						}
						else if (uVar2 == 0x21a45a82) {
							bVar1 = (typeName == "ProfileIconEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x2300193c) {
							bVar1 = (typeName == "HumanSoundEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2cfc1e5e) {
						if (uVar2 == 0x28b19ea3) {
							bVar1 = (typeName == "Set");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x2cfc1e5d) {
							bVar1 = (typeName == "Collider");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2dcc2acc) {
						bVar1 = (typeName == "WeaponEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x2e7323db) {
						bVar1 = (typeName == "CollideModeEnum");
						if (bVar1) {
							if ((typeof(CustomLogicCollideModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x33881a92) {
					if (uVar2 < 0x3162cd2b) {
						if (uVar2 == 0x301a1a8d) {
							bVar1 = (typeName == "NavmeshObstacleBuiltin");
							if (bVar1) {
								if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0x3162cd2a) {
							bVar1 = (typeName == "UILabelEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3263b09d) {
						bVar1 = (typeName == "TitanSoundEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x33881a91) {
						bVar1 = (typeName == "Button");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x3868216b) {
					if (uVar2 == 0x34d45601) {
						bVar1 = (typeName == "SteamStateEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x3868216a) {
						bVar1 = (typeName == "TextField");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x3f9ee7fb) {
					bVar1 = (typeName == "OutlineModeEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x4115d182) {
					bVar1 = (typeName == "Random");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0x5ad044e1) {
				if (uVar2 < 0x4fcedcd8) {
					if (uVar2 < 0x44a7f052) {
						if (uVar2 < 0x41e389fe) {
							if (uVar2 == 0x41465646) {
								bVar1 = (typeName == "Horse");
								if (bVar1) {
									return pCVar3;
								}
							}
							else if (uVar2 == 0x41e389fd) {
								bVar1 = (typeName == "Animation");
								if (bVar1) {
									return pCVar3;
								}
							}
						}
						else if (uVar2 == 0x43fb04fa) {
							bVar1 = (typeName == "DummyAnimationEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x44a7f051) {
							bVar1 = (typeName == "Map");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 < 0x4dc60ca7) {
						if (uVar2 == 0x44e32e0e) {
							bVar1 = (typeName == "LightBuiltin");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x4dc60ca6) {
							bVar1 = (typeName == "PhysicsMaterialBuiltin");
							if (bVar1) {
								if ((typeof(CustomLogicPhysicsMaterialBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x4ea4edda) {
						bVar1 = (typeName == "ShifterSoundEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x4fcedcd7) {
						bVar1 = (typeName == "AngleUnitEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5569c3b0) {
					if (uVar2 < 0x53573f20) {
						if (uVar2 == 0x530abb38) {
							bVar1 = (typeName == "HumanParticleEffectEnum");
							if (bVar1) {
								if ((typeof(CustomLogicHumanParticleEffectEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0x53573f1f) {
							bVar1 = (typeName == "ProgressBar");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x55671e43) {
						bVar1 = (typeName == "GradientModeEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x5569c3af) {
						bVar1 = (typeName == "Math");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5710ad21) {
					if (uVar2 == 0x55836470) {
						bVar1 = (typeName == "FontStyleEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x5710ad20) {
						bVar1 = (typeName == "WrapEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x590ca79a) {
					bVar1 = (typeName == "Image");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x5ad044e0) {
					bVar1 = (typeName == "ShadowCastingModeEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0x6974ad66) {
				if (uVar2 < 0x60a3ca7a) {
					if (uVar2 < 0x5e59578e) {
						if (uVar2 == 0x5de6f45b) {
							bVar1 = (typeName == "VisualElement");
							if (bVar1) {
								if ((typeof(CustomLogicVisualElementBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0x5e59578d) {
							bVar1 = (typeName == "LineAlignmentEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x604f4858) {
						bVar1 = (typeName == "String");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x60a3ca79) {
						bVar1 = (typeName == "TextOverflowEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x64666905) {
					if (uVar2 == 0x631663a4) {
						bVar1 = (typeName == "PhysicMaterialCombineEnum");
						if (bVar1) {
							if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							}
							return pCVar3;
						}
					}
					else if (uVar2 == 0x64666904) {
						bVar1 = (typeName == "TitanDeathTypeEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x68e6cb10) {
					bVar1 = (typeName == "Icon");
					if (bVar1) {
						pCVar3 = CustomLogicIconBuiltin.Bindings.CreateMemberBinding(varName) ;
						return pCVar3;
					}
				}
				else if (uVar2 == 0x6974ad65) {
					bVar1 = (typeName == "Network");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0x6fb6fabd) {
				if (uVar2 < 0x6ce5458d) {
					if (uVar2 == 0x6c73be56) {
						bVar1 = (typeName == "JustifyEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x6ce5458c) {
						bVar1 = (typeName == "ProjectileNameEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x6cf1ba25) {
					bVar1 = (typeName == "Toggle");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x6fb6fabc) {
					bVar1 = (typeName == "MapTargetable");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0x73754f17) {
				if (uVar2 == 0x73207b93) {
					bVar1 = (typeName == "PlayerStatusEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x73754f16) {
					bVar1 = (typeName == "InputTitanEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 == 0x7988a5b0) {
				bVar1 = (typeName == "HandStateEnum");
				if (bVar1) {
					pCVar3 = CustomLogicHandStateEnum.Bindings.CreateMemberBinding(varName) ;
					return pCVar3;
				}
			}
			else if (uVar2 == 0x7bb199a4) {
				bVar1 = (typeName == "AudioSource");
				if (bVar1) {
					return pCVar3;
				}
			}
		}
		else if (uVar2 < 0xb5933c5a) {
			if (uVar2 < 0x9bfdbd30) {
				if (uVar2 < 0x8889f200) {
					if (uVar2 < 0x840071c4) {
						if (uVar2 < 0x83007031) {
							if (uVar2 == 0x83007030) {
								bVar1 = (typeName == "Vector2");
								if (bVar1) {
									return pCVar3;
								}
							}
							else if (uVar2 == 0x7bf3b2fb) {
								bVar1 = (typeName == "UI");
								if (bVar1) {
									return pCVar3;
								}
							}
						}
						else if (uVar2 == 0x83fa9b28) {
							bVar1 = (typeName == "LineRenderer");
							if (bVar1) {
								if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0x840071c3) {
							bVar1 = (typeName == "Vector3");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 < 0x881d799e) {
						if (uVar2 == 0x86f78564) {
							bVar1 = (typeName == "FontScaleModeEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x881d799d) {
							bVar1 = (typeName == "InputHumanEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x882c89c6) {
						bVar1 = (typeName == "TSKillSoundEnum");
						if (bVar1) {
							if ((typeof(CustomLogicTSKillSoundEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
					else if (uVar2 == 0x8889f1ff) {
						bVar1 = (typeName == "ScaleModeEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x92e29219) {
					if (uVar2 < 0x8eb6f7b2) {
						if (uVar2 == 0x8d2937a1) {
							bVar1 = (typeName == "List");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0x8eb6f7b1) {
							bVar1 = (typeName == "ExperienceScore");
							if (bVar1) {
								if ((typeof(CustomLogicExperienceScoreBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								}
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9260a455) {
						bVar1 = (typeName == "AspectRatioEnum");
						if (bVar1) {
							if ((typeof(CustomLogicAspectRatioEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
					else if (uVar2 == 0x92e29218) {
						bVar1 = (typeName == "Convert");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x971550f4) {
					if (uVar2 == 0x9397d3d7) {
						bVar1 = (typeName == "LodBuiltin");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x971550f3) {
						bVar1 = (typeName == "Commands");
						if (bVar1) {
							if ((typeof(CustomLogicCommandsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9b74c01c) {
					bVar1 = (typeName == "Slider");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x9bfdbd2f) {
					bVar1 = (typeName == "Collision");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9fa52e4b) {
				if (uVar2 < 0x9dd79571) {
					if (uVar2 < 0x9d82cc64) {
						if (uVar2 == 0x9cb923e3) {
							bVar1 = (typeName == "StunStateEnum");
							if (bVar1) {
								if ((typeof(CustomLogicStunStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								return pCVar3;
							}
						}
						else if (uVar2 == 0x9d82cc63) {
							bVar1 = (typeName == "Json");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9dabc5e1) {
						bVar1 = (typeName == "VideoPlayer");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x9dd79570) {
						bVar1 = (typeName == "CollisionDetectionModeEnum");
						if (bVar1) {
							if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
							}
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0x9f4e7c79) {
					if (uVar2 == 0x9eccf29d) {
						bVar1 = (typeName == "Label");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0x9f4e7c78) {
						bVar1 = (typeName == "NetworkView");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9f93e11b) {
					bVar1 = (typeName == "Input");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0x9fa52e4a) {
					bVar1 = (typeName == "RoomData");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0xa311e773) {
				if (uVar2 < 0xa093206d) {
					if (uVar2 == 0xa0588591) {
						bVar1 = (typeName == "ShifterTypeEnum");
						if (bVar1) {
							if ((typeof(CustomLogicShifterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
					else if (uVar2 == 0xa093206c) {
						bVar1 = (typeName == "CollideWithEnum");
						if (bVar1) {
							if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa1d74a4f) {
					bVar1 = (typeName == "AlignEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xa311e772) {
					bVar1 = (typeName == "Range");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0xaab7b9ad) {
				if (uVar2 == 0xa3e78787) {
					bVar1 = (typeName == "RigidbodyBuiltin");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xaab7b9ac) {
					bVar1 = (typeName == "InputGeneralEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 == 0xad82abbb) {
				bVar1 = (typeName == "Transform");
				if (bVar1) {
					return pCVar3;
				}
			}
			else if (uVar2 == 0xb5933c59) {
				bVar1 = (typeName == "Dict");
				if (bVar1) {
					return pCVar3;
				}
			}
		}
		else if (uVar2 < 0xde63acae) {
			if (uVar2 < 0xc7933b35) {
				if (uVar2 < 0xc1541143) {
					if (uVar2 < 0xb9a9903b) {
						if (uVar2 == 0xb643c704) {
							bVar1 = (typeName == "Service");
							if (bVar1) {
								return pCVar3;
							}
						}
						else if (uVar2 == 0xb9a9903a) {
							bVar1 = (typeName == "LoadoutEnum");
							if (bVar1) {
								return pCVar3;
							}
						}
					}
					else if (uVar2 == 0xbbd01375) {
						bVar1 = (typeName == "ScrollView");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0xc1541142) {
						bVar1 = (typeName == "OverflowEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 < 0xc28a9c8f) {
					if (uVar2 == 0xc2762327) {
						bVar1 = (typeName == "Game");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0xc28a9c8e) {
						bVar1 = (typeName == "MapObject");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc6faa295) {
					bVar1 = (typeName == "HumanAnimationEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xc7933b34) {
					bVar1 = (typeName == "Animator");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd5e92637) {
				if (uVar2 < 0xd0018936) {
					if (uVar2 == 0xcd48d190) {
						bVar1 = (typeName == "CameraModeEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0xd0018935) {
						bVar1 = (typeName == "WallColossal");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0xd1454556) {
					bVar1 = (typeName == "HumanStateEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xd5e92636) {
					bVar1 = (typeName == "EffectNameEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd848ce24) {
				if (uVar2 == 0xd6415ba3) {
					bVar1 = (typeName == "Prefab");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xd848ce23) {
					bVar1 = (typeName == "InputErenShifterEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 == 0xdd6e5bb7) {
				bVar1 = (typeName == "Locale");
				if (bVar1) {
					pCVar3 = CustomLogicLocaleBuiltin.Bindings.CreateMemberBinding(varName) ;
					return pCVar3;
				}
			}
			else if (uVar2 == 0xde63acad) {
				bVar1 = (typeName == "Quaternion");
				if (bVar1) {
					return pCVar3;
				}
			}
		}
		else if (uVar2 < 0xe5b43cf9) {
			if (uVar2 < 0xe3137abd) {
				if (uVar2 < 0xdfe4e405) {
					if (uVar2 == 0xdf19b82e) {
						bVar1 = (typeName == "FlexDirectionEnum");
						if (bVar1) {
							return pCVar3;
						}
					}
					else if (uVar2 == 0xdfe4e404) {
						bVar1 = (typeName == "Time");
						if (bVar1) {
							return pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe109ff8d) {
					bVar1 = (typeName == "SpecialEnum");
					if (bVar1) {
						pCVar3 = CustomLogicSpecialEnum.Bindings.CreateMemberBinding(varName) ;
						return pCVar3;
					}
				}
				else if (uVar2 == 0xe3137abc) {
					bVar1 = (typeName == "LineCastHitResult");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
						}
						return pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe4462ef9) {
				if (uVar2 == 0xe3309cc8) {
					bVar1 = (typeName == "PersistentData");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xe4462ef8) {
					bVar1 = (typeName == "Dropdown");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe48b0628) {
				bVar1 = (typeName == "SliderDirectionEnum");
				if (bVar1) {
					if ((typeof(CustomLogicSliderDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					return pCVar3;
				}
			}
			else if (uVar2 == 0xe5b43cf8) {
				bVar1 = (typeName == "Color");
				if (bVar1) {
					return pCVar3;
				}
			}
		}
		else if (uVar2 < 0xec7340b1) {
			if (uVar2 < 0xe74c7b6f) {
				if (uVar2 == 0xe6ecf932) {
					bVar1 = (typeName == "LanguageEnum");
					if (bVar1) {
						return pCVar3;
					}
				}
				else if (uVar2 == 0xe74c7b6e) {
					bVar1 = (typeName == "Camera");
					if (bVar1) {
						return pCVar3;
					}
				}
			}
			else if (uVar2 == 0xeb4aea7d) {
				bVar1 = (typeName == "AnnieAnimationEnum");
				if (bVar1) {
					return pCVar3;
				}
			}
			else if (uVar2 == 0xec7340b0) {
				bVar1 = (typeName == "Character");
				if (bVar1) {
					return pCVar3;
				}
			}
		}
		else if (uVar2 < 0xf6ae1227) {
			if (uVar2 == 0xed3f33e9) {
				bVar1 = (typeName == "TeamEnum");
				if (bVar1) {
					return pCVar3;
				}
			}
			else if (uVar2 == 0xf6ae1226) {
				bVar1 = (typeName == "TextAlignEnum");
				if (bVar1) {
					pCVar3 = CustomLogicTextAlignEnum.Bindings.CreateMemberBinding(varName) ;
					return pCVar3;
				}
			}
		}
		else if (uVar2 == 0xfbcf4c1c) {
			bVar1 = (typeName == "TitanTypeEnum");
			if (bVar1) {
				return pCVar3;
			}
		}
		else if (uVar2 == 0xfd081608) {
			bVar1 = (typeName == "LineTextureModeEnum");
			if (bVar1) {
				return pCVar3;
			}
		}
		pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Builtin type '");
		str2 = il2cpp_codegen_get_runtime_metadata(&"' does not exist");
		pSVar4 = String.Concat(pSVar4, typeName, str2);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this = (Exception)il2cpp_codegen_object_new(klass);
		__this = new Exception(pSVar4);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicBuiltinTypes_CreateBinding);
		throw (object)__this;
	}

	[Token(Token = "0x6003B6E")]
	[Address(RVA = "0x5A5BB80", Offset = "0x5A5AB80", VA = "0x5A5BB80")]
	public static BuiltinClassInstance CreateClassInstance(string typeName, object[] args)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$CreateClassInstance): 6 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		CustomLogicInputInteractionEnum pCVar3;
		CustomLogicUIBuiltin pCVar4;
		CustomLogicAnimationBuiltin pCVar5;
		CustomLogicLoadoutEnum pCVar6;
		CustomLogicExperienceScoreBuiltin pCVar7;
		CustomLogicProgressBarBuiltin pCVar8;
		CustomLogicWallColossalBuiltin pCVar9;
		CustomLogicInputHumanEnum pCVar10;
		CustomLogicPhysicsMaterialBuiltin pCVar11;
		CustomLogicMapObjectBuiltin pCVar12;
		CustomLogicColliderBuiltin pCVar13;
		CustomLogicNetworkViewBuiltin pCVar14;
		CustomLogicDropdownBuiltin pCVar15;
		CustomLogicInputErenShifterEnum pCVar16;
		CustomLogicTextFieldBuiltin pCVar17;
		CustomLogicInputGeneralEnum pCVar18;
		CustomLogicInputTitanEnum pCVar19;
		CustomLogicVector3Builtin pCVar20;
		CustomLogicMapBuiltin pCVar21;
		CustomLogicLineCastHitResultBuiltin pCVar22;
		CustomLogicButtonBuiltin pCVar23;
		CustomLogicRangeBuiltin pCVar24;
		CustomLogicMapTargetableBuiltin pCVar25;
		CustomLogicCharacterBuiltin pCVar26;
		CustomLogicTitanBuiltin pCVar27;
		CustomLogicAnimatorBuiltin pCVar28;
		CustomLogicColorBuiltin pCVar29;
		CustomLogicCollisionBuiltin pCVar30;
		CustomLogicQuaternionBuiltin pCVar31;
		CustomLogicRandomBuiltin pCVar32;
		CustomLogicDictBuiltin pCVar33;
		CustomLogicAudioSourceBuiltin pCVar34;
		BuiltinClassInstance pCVar35;
		CustomLogicShifterBuiltin pCVar36;
		CustomLogicVector2Builtin pCVar37;
		CustomLogicHorseBuiltin pCVar38;
		CustomLogicPlayerBuiltin pCVar39;
		CustomLogicVisualElementBuiltin pCVar40;
		CustomLogicListBuiltin pCVar41;
		CustomLogicCameraModeEnum pCVar42;
		CustomLogicNavmeshObstacleBuiltin pCVar43;
		CustomLogicLightBuiltin pCVar44;
		CustomLogicGameBuiltin pCVar45;
		CustomLogicSetBuiltin pCVar46;
		CustomLogicLabelBuiltin pCVar47;
		CustomLogicHumanBuiltin pCVar48;
		CustomLogicLodBuiltin pCVar49;
		CustomLogicPrefabBuiltin pCVar50;
		CustomLogicRigidbodyBuiltin pCVar51;
		CustomLogicLineRendererBuiltin pCVar52;
		CustomLogicScrollViewBuiltin pCVar53;
		CustomLogicVideoPlayerBuiltin pCVar54;
		CustomLogicHumanStateEnum pCVar55;
		CustomLogicToggleBuiltin pCVar56;
		CustomLogicInputAnnieShifterEnum pCVar57;
		CustomLogicTSKillSoundEnum pCVar58;
		CustomLogicIconBuiltin pCVar59;
		CustomLogicSliderBuiltin pCVar60;
		CustomLogicImageBuiltin pCVar61;
		CustomLogicLocaleBuiltin pCVar62;
		CustomLogicOutlineModeEnum pCVar63;
		CustomLogicTransformBuiltin pCVar64;
		String pSVar65;
		String str2;
		Il2CppClass klass;
		Exception __this;
		MethodInfo lastManagedFrame;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(typeName);
		if (uVar2 < 0x7bb199a5) {
			if (uVar2 < 0x4115d183) {
				if (uVar2 < 0x1bcb960f) {
					if (uVar2 < 0xbf49dfa) {
						if (uVar2 < 0x6b7e4bd) {
							if (uVar2 == 0xa8938) {
								bVar1 = (typeName == "ErenAnimationEnum");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicErenAnimationEnum.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
							else if (uVar2 == 0x5b115bc) {
								bVar1 = (typeName == "Shifter");
								if (bVar1) {
									pCVar36 = CustomLogicShifterBuiltin.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar36;
								}
							}
							else if (uVar2 == 0x6b7e4bc) {
								bVar1 = (typeName == "InputInteractionEnum");
								if (bVar1) {
									pCVar3 = CustomLogicInputInteractionEnum.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x91ceb7d) {
							if (uVar2 == 0x6f486c8) {
								bVar1 = (typeName == "WallColossalAnimationEnum");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicWallColossalAnimationEnum.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
							else if (uVar2 == 0x91ceb7c) {
								bVar1 = (typeName == "TitanAnimationEnum");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicTitanAnimationEnum.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
						}
						else if (uVar2 == 0xa324a9e) {
							bVar1 = (typeName == "InputAnnieShifterEnum");
							if (bVar1) {
								pCVar57 = CustomLogicInputAnnieShifterEnum.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar57;
							}
						}
						else if (uVar2 == 0xbf49df9) {
							bVar1 = (typeName == "Titan");
							if (bVar1) {
								pCVar27 = CustomLogicTitanBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar27;
							}
						}
					}
					else if (uVar2 < 0x17a631e7) {
						if (uVar2 < 0x15794802) {
							if (uVar2 == 0xdc58442) {
								bVar1 = (typeName == "Physics");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicPhysicsBuiltin.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
							else if (uVar2 == 0x15794801) {
								bVar1 = (typeName == "HorseAnimationEnum");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicHorseAnimationEnum.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
						}
						else if (uVar2 == 0x16518ba4) {
							bVar1 = (typeName == "UnityComponentEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicUnityComponentEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
						else if (uVar2 == 0x17a631e6) {
							bVar1 = (typeName == "InputCategoryEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicInputCategoryEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 < 0x19a37e36) {
						if (uVar2 == 0x1983851a) {
							bVar1 = (typeName == "Human");
							if (bVar1) {
								pCVar48 = CustomLogicHumanBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar48;
							}
						}
						else if (uVar2 == 0x19a37e35) {
							bVar1 = (typeName == "CharacterTypeEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicCharacterTypeEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 == 0x1b528e1c) {
						bVar1 = (typeName == "ScrollElasticityEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicScrollElasticityEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x1bcb960e) {
						bVar1 = (typeName == "ForceModeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicForceModeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x2e7323dc) {
					if (uVar2 < 0x2300193d) {
						if (uVar2 < 0x1e3a3682) {
							if (uVar2 == 0x1c70fc20) {
								bVar1 = (typeName == "Player");
								if (bVar1) {
									pCVar39 = CustomLogicPlayerBuiltin.Factory.CreateInstance(args) ;
									return (BuiltinClassInstance)pCVar39;
								}
							}
							else if (uVar2 == 0x1e3a3681) {
								bVar1 = (typeName == "Cutscene");
								if (bVar1) {
									pCVar35 = (BuiltinClassInstance)CustomLogicCutsceneBuiltin.Factory.CreateInstance(args);
									return pCVar35;
								}
							}
						}
						else if (uVar2 == 0x21a45a82) {
							bVar1 = (typeName == "ProfileIconEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicProfileIconEnum.Factory.CreateInstance(args) ;
								return pCVar35;
							}
						}
						else if (uVar2 == 0x2300193c) {
							bVar1 = (typeName == "HumanSoundEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicHumanSoundEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 < 0x2cfc1e5e) {
						if (uVar2 == 0x28b19ea3) {
							bVar1 = (typeName == "Set");
							if (bVar1) {
								pCVar46 = CustomLogicSetBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar46;
							}
						}
						else if (uVar2 == 0x2cfc1e5d) {
							bVar1 = (typeName == "Collider");
							if (bVar1) {
								pCVar13 = CustomLogicColliderBuiltin.Factory.CreateInstance(args) ;
								return (BuiltinClassInstance)pCVar13;
							}
						}
					}
					else if (uVar2 == 0x2dcc2acc) {
						bVar1 = (typeName == "WeaponEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicWeaponEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x2e7323db) {
						bVar1 = (typeName == "CollideModeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicCollideModeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x33881a92) {
					if (uVar2 < 0x3162cd2b) {
						if (uVar2 == 0x301a1a8d) {
							bVar1 = (typeName == "NavmeshObstacleBuiltin");
							if (bVar1) {
								pCVar43 = CustomLogicNavmeshObstacleBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar43;
							}
						}
						else if (uVar2 == 0x3162cd2a) {
							bVar1 = (typeName == "UILabelEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicUILabelEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 == 0x3263b09d) {
						bVar1 = (typeName == "TitanSoundEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicTitanSoundEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x33881a91) {
						bVar1 = (typeName == "Button");
						if (bVar1) {
							pCVar23 = CustomLogicButtonBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar23;
						}
					}
				}
				else if (uVar2 < 0x3868216b) {
					if (uVar2 == 0x34d45601) {
						bVar1 = (typeName == "SteamStateEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicSteamStateEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x3868216a) {
						bVar1 = (typeName == "TextField");
						if (bVar1) {
							pCVar17 = CustomLogicTextFieldBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar17;
						}
					}
				}
				else if (uVar2 == 0x3f9ee7fb) {
					bVar1 = (typeName == "OutlineModeEnum");
					if (bVar1) {
						pCVar63 = CustomLogicOutlineModeEnum.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar63;
					}
				}
				else if (uVar2 == 0x4115d182) {
					bVar1 = (typeName == "Random");
					if (bVar1) {
						pCVar32 = CustomLogicRandomBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar32;
					}
				}
			}
			else if (uVar2 < 0x5ad044e1) {
				if (uVar2 < 0x4fcedcd8) {
					if (uVar2 < 0x44a7f052) {
						if (uVar2 < 0x41e389fe) {
							if (uVar2 == 0x41465646) {
								bVar1 = (typeName == "Horse");
								if (bVar1) {
									pCVar38 = CustomLogicHorseBuiltin.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar38;
								}
							}
							else if (uVar2 == 0x41e389fd) {
								bVar1 = (typeName == "Animation");
								if (bVar1) {
									pCVar5 = CustomLogicAnimationBuiltin.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar5;
								}
							}
						}
						else if (uVar2 == 0x43fb04fa) {
							bVar1 = (typeName == "DummyAnimationEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicDummyAnimationEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
						else if (uVar2 == 0x44a7f051) {
							bVar1 = (typeName == "Map");
							if (bVar1) {
								pCVar21 = CustomLogicMapBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar21;
							}
						}
					}
					else if (uVar2 < 0x4dc60ca7) {
						if (uVar2 == 0x44e32e0e) {
							bVar1 = (typeName == "LightBuiltin");
							if (bVar1) {
								pCVar44 = CustomLogicLightBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar44;
							}
						}
						else if (uVar2 == 0x4dc60ca6) {
							bVar1 = (typeName == "PhysicsMaterialBuiltin");
							if (bVar1) {
								pCVar11 = CustomLogicPhysicsMaterialBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar11;
							}
						}
					}
					else if (uVar2 == 0x4ea4edda) {
						bVar1 = (typeName == "ShifterSoundEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicShifterSoundEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x4fcedcd7) {
						bVar1 = (typeName == "AngleUnitEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicAngleUnitEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x5569c3b0) {
					if (uVar2 < 0x53573f20) {
						if (uVar2 == 0x530abb38) {
							bVar1 = (typeName == "HumanParticleEffectEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicHumanParticleEffectEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
						else if (uVar2 == 0x53573f1f) {
							bVar1 = (typeName == "ProgressBar");
							if (bVar1) {
								pCVar8 = CustomLogicProgressBarBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar8;
							}
						}
					}
					else if (uVar2 == 0x55671e43) {
						bVar1 = (typeName == "GradientModeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicGradientModeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x5569c3af) {
						bVar1 = (typeName == "Math");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicMathBuiltin.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x5710ad21) {
					if (uVar2 == 0x55836470) {
						bVar1 = (typeName == "FontStyleEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicFontStyleEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x5710ad20) {
						bVar1 = (typeName == "WrapEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicWrapEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0x590ca79a) {
					bVar1 = (typeName == "Image");
					if (bVar1) {
						pCVar61 = CustomLogicImageBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar61;
					}
				}
				else if (uVar2 == 0x5ad044e0) {
					bVar1 = (typeName == "ShadowCastingModeEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicShadowCastingModeEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
			}
			else if (uVar2 < 0x6974ad66) {
				if (uVar2 < 0x60a3ca7a) {
					if (uVar2 < 0x5e59578e) {
						if (uVar2 == 0x5de6f45b) {
							bVar1 = (typeName == "VisualElement");
							if (bVar1) {
								pCVar40 = CustomLogicVisualElementBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar40;
							}
						}
						else if (uVar2 == 0x5e59578d) {
							bVar1 = (typeName == "LineAlignmentEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicLineAlignmentEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 == 0x604f4858) {
						bVar1 = (typeName == "String");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicStringBuiltin.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x60a3ca79) {
						bVar1 = (typeName == "TextOverflowEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicTextOverflowEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x64666905) {
					if (uVar2 == 0x631663a4) {
						bVar1 = (typeName == "PhysicMaterialCombineEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicPhysicMaterialCombineEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x64666904) {
						bVar1 = (typeName == "TitanDeathTypeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicTitanDeathTypeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0x68e6cb10) {
					bVar1 = (typeName == "Icon");
					if (bVar1) {
						pCVar59 = CustomLogicIconBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar59;
					}
				}
				else if (uVar2 == 0x6974ad65) {
					bVar1 = (typeName == "Network");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicNetworkBuiltin.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
			}
			else if (uVar2 < 0x6fb6fabd) {
				if (uVar2 < 0x6ce5458d) {
					if (uVar2 == 0x6c73be56) {
						bVar1 = (typeName == "JustifyEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicJustifyEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x6ce5458c) {
						bVar1 = (typeName == "ProjectileNameEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicProjectileNameEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0x6cf1ba25) {
					bVar1 = (typeName == "Toggle");
					if (bVar1) {
						pCVar56 = CustomLogicToggleBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar56;
					}
				}
				else if (uVar2 == 0x6fb6fabc) {
					bVar1 = (typeName == "MapTargetable");
					if (bVar1) {
						pCVar25 = CustomLogicMapTargetableBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar25;
					}
				}
			}
			else if (uVar2 < 0x73754f17) {
				if (uVar2 == 0x73207b93) {
					bVar1 = (typeName == "PlayerStatusEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicPlayerStatusEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0x73754f16) {
					bVar1 = (typeName == "InputTitanEnum");
					if (bVar1) {
						pCVar19 = CustomLogicInputTitanEnum.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar19;
					}
				}
			}
			else if (uVar2 == 0x7988a5b0) {
				bVar1 = (typeName == "HandStateEnum");
				if (bVar1) {
					pCVar35 = (BuiltinClassInstance)CustomLogicHandStateEnum.Factory.CreateInstance(args);
					return pCVar35;
				}
			}
			else if (uVar2 == 0x7bb199a4) {
				bVar1 = (typeName == "AudioSource");
				if (bVar1) {
					pCVar34 = CustomLogicAudioSourceBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar34;
				}
			}
		}
		else if (uVar2 < 0xb5933c5a) {
			if (uVar2 < 0x9bfdbd30) {
				if (uVar2 < 0x8889f200) {
					if (uVar2 < 0x840071c4) {
						if (uVar2 < 0x83007031) {
							if (uVar2 == 0x83007030) {
								bVar1 = (typeName == "Vector2");
								if (bVar1) {
									pCVar37 = CustomLogicVector2Builtin.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar37;
								}
							}
							else if (uVar2 == 0x7bf3b2fb) {
								bVar1 = (typeName == "UI");
								if (bVar1) {
									pCVar4 = CustomLogicUIBuiltin.Factory.CreateInstance(args);
									return (BuiltinClassInstance)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x83fa9b28) {
							bVar1 = (typeName == "LineRenderer");
							if (bVar1) {
								pCVar52 = CustomLogicLineRendererBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar52;
							}
						}
						else if (uVar2 == 0x840071c3) {
							bVar1 = (typeName == "Vector3");
							if (bVar1) {
								pCVar20 = CustomLogicVector3Builtin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar20;
							}
						}
					}
					else if (uVar2 < 0x881d799e) {
						if (uVar2 == 0x86f78564) {
							bVar1 = (typeName == "FontScaleModeEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicFontScaleModeEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
						else if (uVar2 == 0x881d799d) {
							bVar1 = (typeName == "InputHumanEnum");
							if (bVar1) {
								pCVar10 = CustomLogicInputHumanEnum.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar10;
							}
						}
					}
					else if (uVar2 == 0x882c89c6) {
						bVar1 = (typeName == "TSKillSoundEnum");
						if (bVar1) {
							pCVar58 = CustomLogicTSKillSoundEnum.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar58;
						}
					}
					else if (uVar2 == 0x8889f1ff) {
						bVar1 = (typeName == "ScaleModeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicScaleModeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x92e29219) {
					if (uVar2 < 0x8eb6f7b2) {
						if (uVar2 == 0x8d2937a1) {
							bVar1 = (typeName == "List");
							if (bVar1) {
								pCVar41 = CustomLogicListBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar41;
							}
						}
						else if (uVar2 == 0x8eb6f7b1) {
							bVar1 = (typeName == "ExperienceScore");
							if (bVar1) {
								pCVar7 = CustomLogicExperienceScoreBuiltin.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar7;
							}
						}
					}
					else if (uVar2 == 0x9260a455) {
						bVar1 = (typeName == "AspectRatioEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicAspectRatioEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0x92e29218) {
						bVar1 = (typeName == "Convert");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicConvertBuiltin.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x971550f4) {
					if (uVar2 == 0x9397d3d7) {
						bVar1 = (typeName == "LodBuiltin");
						if (bVar1) {
							pCVar49 = CustomLogicLodBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar49;
						}
					}
					else if (uVar2 == 0x971550f3) {
						bVar1 = (typeName == "Commands");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicCommandsBuiltin.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0x9b74c01c) {
					bVar1 = (typeName == "Slider");
					if (bVar1) {
						pCVar60 = CustomLogicSliderBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar60;
					}
				}
				else if (uVar2 == 0x9bfdbd2f) {
					bVar1 = (typeName == "Collision");
					if (bVar1) {
						pCVar30 = CustomLogicCollisionBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar30;
					}
				}
			}
			else if (uVar2 < 0x9fa52e4b) {
				if (uVar2 < 0x9dd79571) {
					if (uVar2 < 0x9d82cc64) {
						if (uVar2 == 0x9cb923e3) {
							bVar1 = (typeName == "StunStateEnum");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicStunStateEnum.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
						else if (uVar2 == 0x9d82cc63) {
							bVar1 = (typeName == "Json");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicJsonBuiltin.Factory.CreateInstance(args);
								return pCVar35;
							}
						}
					}
					else if (uVar2 == 0x9dabc5e1) {
						bVar1 = (typeName == "VideoPlayer");
						if (bVar1) {
							pCVar54 = CustomLogicVideoPlayerBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar54;
						}
					}
					else if (uVar2 == 0x9dd79570) {
						bVar1 = (typeName == "CollisionDetectionModeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicCollisionDetectionModeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0x9f4e7c79) {
					if (uVar2 == 0x9eccf29d) {
						bVar1 = (typeName == "Label");
						if (bVar1) {
							pCVar47 = CustomLogicLabelBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar47;
						}
					}
					else if (uVar2 == 0x9f4e7c78) {
						bVar1 = (typeName == "NetworkView");
						if (bVar1) {
							pCVar14 = CustomLogicNetworkViewBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar14;
						}
					}
				}
				else if (uVar2 == 0x9f93e11b) {
					bVar1 = (typeName == "Input");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicInputBuiltin.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0x9fa52e4a) {
					bVar1 = (typeName == "RoomData");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicRoomDataBuiltin.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
			}
			else if (uVar2 < 0xa311e773) {
				if (uVar2 < 0xa093206d) {
					if (uVar2 == 0xa0588591) {
						bVar1 = (typeName == "ShifterTypeEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicShifterTypeEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
					else if (uVar2 == 0xa093206c) {
						bVar1 = (typeName == "CollideWithEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicCollideWithEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0xa1d74a4f) {
					bVar1 = (typeName == "AlignEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicAlignEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0xa311e772) {
					bVar1 = (typeName == "Range");
					if (bVar1) {
						pCVar24 = CustomLogicRangeBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar24;
					}
				}
			}
			else if (uVar2 < 0xaab7b9ad) {
				if (uVar2 == 0xa3e78787) {
					bVar1 = (typeName == "RigidbodyBuiltin");
					if (bVar1) {
						pCVar51 = CustomLogicRigidbodyBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar51;
					}
				}
				else if (uVar2 == 0xaab7b9ac) {
					bVar1 = (typeName == "InputGeneralEnum");
					if (bVar1) {
						pCVar18 = CustomLogicInputGeneralEnum.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar18;
					}
				}
			}
			else if (uVar2 == 0xad82abbb) {
				bVar1 = (typeName == "Transform");
				if (bVar1) {
					pCVar64 = CustomLogicTransformBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar64;
				}
			}
			else if (uVar2 == 0xb5933c59) {
				bVar1 = (typeName == "Dict");
				if (bVar1) {
					pCVar33 = CustomLogicDictBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar33;
				}
			}
		}
		else if (uVar2 < 0xde63acae) {
			if (uVar2 < 0xc7933b35) {
				if (uVar2 < 0xc1541143) {
					if (uVar2 < 0xb9a9903b) {
						if (uVar2 == 0xb643c704) {
							bVar1 = (typeName == "Service");
							if (bVar1) {
								pCVar35 = (BuiltinClassInstance)CustomLogicServicesBuiltin.Factory.CreateInstance(args) ;
								return pCVar35;
							}
						}
						else if (uVar2 == 0xb9a9903a) {
							bVar1 = (typeName == "LoadoutEnum");
							if (bVar1) {
								pCVar6 = CustomLogicLoadoutEnum.Factory.CreateInstance(args);
								return (BuiltinClassInstance)pCVar6;
							}
						}
					}
					else if (uVar2 == 0xbbd01375) {
						bVar1 = (typeName == "ScrollView");
						if (bVar1) {
							pCVar53 = CustomLogicScrollViewBuiltin.Factory.CreateInstance(args) ;
							return (BuiltinClassInstance)pCVar53;
						}
					}
					else if (uVar2 == 0xc1541142) {
						bVar1 = (typeName == "OverflowEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicOverflowEnum.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 < 0xc28a9c8f) {
					if (uVar2 == 0xc2762327) {
						bVar1 = (typeName == "Game");
						if (bVar1) {
							pCVar45 = CustomLogicGameBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar45;
						}
					}
					else if (uVar2 == 0xc28a9c8e) {
						bVar1 = (typeName == "MapObject");
						if (bVar1) {
							pCVar12 = CustomLogicMapObjectBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar12;
						}
					}
				}
				else if (uVar2 == 0xc6faa295) {
					bVar1 = (typeName == "HumanAnimationEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicHumanAnimationEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0xc7933b34) {
					bVar1 = (typeName == "Animator");
					if (bVar1) {
						pCVar28 = CustomLogicAnimatorBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar28;
					}
				}
			}
			else if (uVar2 < 0xd5e92637) {
				if (uVar2 < 0xd0018936) {
					if (uVar2 == 0xcd48d190) {
						bVar1 = (typeName == "CameraModeEnum");
						if (bVar1) {
							pCVar42 = CustomLogicCameraModeEnum.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar42;
						}
					}
					else if (uVar2 == 0xd0018935) {
						bVar1 = (typeName == "WallColossal");
						if (bVar1) {
							pCVar9 = CustomLogicWallColossalBuiltin.Factory.CreateInstance(args);
							return (BuiltinClassInstance)pCVar9;
						}
					}
				}
				else if (uVar2 == 0xd1454556) {
					bVar1 = (typeName == "HumanStateEnum");
					if (bVar1) {
						pCVar55 = CustomLogicHumanStateEnum.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar55;
					}
				}
				else if (uVar2 == 0xd5e92636) {
					bVar1 = (typeName == "EffectNameEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicEffectNameEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
			}
			else if (uVar2 < 0xd848ce24) {
				if (uVar2 == 0xd6415ba3) {
					bVar1 = (typeName == "Prefab");
					if (bVar1) {
						pCVar50 = CustomLogicPrefabBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar50;
					}
				}
				else if (uVar2 == 0xd848ce23) {
					bVar1 = (typeName == "InputErenShifterEnum");
					if (bVar1) {
						pCVar16 = CustomLogicInputErenShifterEnum.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar16;
					}
				}
			}
			else if (uVar2 == 0xdd6e5bb7) {
				bVar1 = (typeName == "Locale");
				if (bVar1) {
					pCVar62 = CustomLogicLocaleBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar62;
				}
			}
			else if (uVar2 == 0xde63acad) {
				bVar1 = (typeName == "Quaternion");
				if (bVar1) {
					pCVar31 = CustomLogicQuaternionBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar31;
				}
			}
		}
		else if (uVar2 < 0xe5b43cf9) {
			if (uVar2 < 0xe3137abd) {
				if (uVar2 < 0xdfe4e405) {
					if (uVar2 == 0xdf19b82e) {
						bVar1 = (typeName == "FlexDirectionEnum");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicFlexDirectionEnum.Factory.CreateInstance(args) ;
							return pCVar35;
						}
					}
					else if (uVar2 == 0xdfe4e404) {
						bVar1 = (typeName == "Time");
						if (bVar1) {
							pCVar35 = (BuiltinClassInstance)CustomLogicTimeBuiltin.Factory.CreateInstance(args);
							return pCVar35;
						}
					}
				}
				else if (uVar2 == 0xe109ff8d) {
					bVar1 = (typeName == "SpecialEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicSpecialEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0xe3137abc) {
					bVar1 = (typeName == "LineCastHitResult");
					if (bVar1) {
						pCVar22 = CustomLogicLineCastHitResultBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar22;
					}
				}
			}
			else if (uVar2 < 0xe4462ef9) {
				if (uVar2 == 0xe3309cc8) {
					bVar1 = (typeName == "PersistentData");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicPersistentDataBuiltin.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0xe4462ef8) {
					bVar1 = (typeName == "Dropdown");
					if (bVar1) {
						pCVar15 = CustomLogicDropdownBuiltin.Factory.CreateInstance(args);
						return (BuiltinClassInstance)pCVar15;
					}
				}
			}
			else if (uVar2 == 0xe48b0628) {
				bVar1 = (typeName == "SliderDirectionEnum");
				if (bVar1) {
					pCVar35 = (BuiltinClassInstance)CustomLogicSliderDirectionEnum.Factory.CreateInstance(args);
					return pCVar35;
				}
			}
			else if (uVar2 == 0xe5b43cf8) {
				bVar1 = (typeName == "Color");
				if (bVar1) {
					pCVar29 = CustomLogicColorBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar29;
				}
			}
		}
		else if (uVar2 < 0xec7340b1) {
			if (uVar2 < 0xe74c7b6f) {
				if (uVar2 == 0xe6ecf932) {
					bVar1 = (typeName == "LanguageEnum");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicLanguageEnum.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
				else if (uVar2 == 0xe74c7b6e) {
					bVar1 = (typeName == "Camera");
					if (bVar1) {
						pCVar35 = (BuiltinClassInstance)CustomLogicCameraBuiltin.Factory.CreateInstance(args);
						return pCVar35;
					}
				}
			}
			else if (uVar2 == 0xeb4aea7d) {
				bVar1 = (typeName == "AnnieAnimationEnum");
				if (bVar1) {
					pCVar35 = (BuiltinClassInstance)CustomLogicAnnieAnimationEnum.Factory.CreateInstance(args);
					return pCVar35;
				}
			}
			else if (uVar2 == 0xec7340b0) {
				bVar1 = (typeName == "Character");
				if (bVar1) {
					pCVar26 = CustomLogicCharacterBuiltin.Factory.CreateInstance(args);
					return (BuiltinClassInstance)pCVar26;
				}
			}
		}
		else if (uVar2 < 0xf6ae1227) {
			if (uVar2 == 0xed3f33e9) {
				bVar1 = (typeName == "TeamEnum");
				if (bVar1) {
					pCVar35 = (BuiltinClassInstance)CustomLogicTeamEnum.Factory.CreateInstance(args);
					return pCVar35;
				}
			}
			else if (uVar2 == 0xf6ae1226) {
				bVar1 = (typeName == "TextAlignEnum");
				if (bVar1) {
					pCVar35 = (BuiltinClassInstance)CustomLogicTextAlignEnum.Factory.CreateInstance(args);
					return pCVar35;
				}
			}
		}
		else if (uVar2 == 0xfbcf4c1c) {
			bVar1 = (typeName == "TitanTypeEnum");
			if (bVar1) {
				pCVar35 = (BuiltinClassInstance)CustomLogicTitanTypeEnum.Factory.CreateInstance(args);
				return pCVar35;
			}
		}
		else if (uVar2 == 0xfd081608) {
			bVar1 = (typeName == "LineTextureModeEnum");
			if (bVar1) {
				pCVar35 = (BuiltinClassInstance)CustomLogicLineTextureModeEnum.Factory.CreateInstance(args);
				return pCVar35;
			}
		}
		pSVar65 = il2cpp_codegen_get_runtime_metadata(&"Builtin type '");
		str2 = il2cpp_codegen_get_runtime_metadata(&"' does not exist");
		pSVar65 = String.Concat(pSVar65, typeName, str2);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this = (Exception)il2cpp_codegen_object_new(klass);
		__this = new Exception(pSVar65);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicBuiltinTypes_CreateClassInstance);
		throw (object)__this;
	}

	[Token(Token = "0x6003B6F")]
	[Address(RVA = "0x5A5E070", Offset = "0x5A5D070", VA = "0x5A5E070")]
	public static Func<object[], BuiltinClassInstance> CreateFactory(string typeName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$CreateFactory): 320 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		uint uVar3;
		Func<object[], BuiltinClassInstance> __this;
		String pSVar4;
		String str2;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		CustomLogic_CustomLogicBuiltinTypes___c_StaticFields pCVar5;
		Func<object[], BuiltinClassInstance>* targetAddress;

		uVar3 = _PrivateImplementationDetails_.ComputeStringHash(typeName);
		if (0x7bb199a4 < uVar3) {
			if (0xb5933c59 < uVar3) {
				if (0xde63acad < uVar3) {
					if (0xe5b43cf8 < uVar3) {
						if (0xec7340b0 < uVar3) {
							if (uVar3 < 0xf6ae1227) {
								if (uVar3 == 0xed3f33e9) {
									bVar2 = (typeName == "TeamEnum");
									if (!bVar2) goto label_05b64b53;
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									if (pCVar5.__9__10_84 != null) {
										return pCVar5.__9__10_84;
									}
									if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
										pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									}
									pIVar1 = (object)pCVar5.__9;
									__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_84);
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									pCVar5.__9__10_84 = __this;
									targetAddress = &pCVar5.__9__10_84;
								}
								else {
									if ((uVar3 != 0xf6ae1226) ||(bVar2 = (typeName == "TextAlignEnum"), !bVar2)) goto label_05b64b53;
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									if (pCVar5.__9__10_85 != null) {
										return pCVar5.__9__10_85;
									}
									if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
										pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									}
									pIVar1 = (object)pCVar5.__9;
									__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_85);
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
									pCVar5.__9__10_85 = __this;
									targetAddress = &pCVar5.__9__10_85;
								}
							}
							else if (uVar3 == 0xfbcf4c1c) {
								bVar2 = (typeName == "TitanTypeEnum");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_90 != null) {
									return pCVar5.__9__10_90;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_90);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_90 = __this;
								targetAddress = &pCVar5.__9__10_90;
							}
							else {
								if ((uVar3 != 0xfd081608) ||(bVar2 = (typeName == "LineTextureModeEnum"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_66 != null) {
									return pCVar5.__9__10_66;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_66);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_66 = __this;
								targetAddress = &pCVar5.__9__10_66;
							}
							goto label_05b64b42;
						}
						if (uVar3 < 0xe74c7b6f) {
							if (uVar3 == 0xe6ecf932) {
								bVar2 = (typeName == "LanguageEnum");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_64 != null) {
									return pCVar5.__9__10_64;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_64);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_64 = __this;
								targetAddress = &pCVar5.__9__10_64;
							}
							else {
								if ((uVar3 != 0xe74c7b6e) ||(bVar2 = (typeName == "Camera"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_96 != null) {
									return pCVar5.__9__10_96;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_96);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_96 = __this;
								targetAddress = &pCVar5.__9__10_96;
							}
						}
						else if (uVar3 == 0xeb4aea7d) {
							bVar2 = (typeName == "AnnieAnimationEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_35 != null) {
								return pCVar5.__9__10_35;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_35);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_35 = __this;
							targetAddress = &pCVar5.__9__10_35;
						}
						else {
							if ((uVar3 != 0xec7340b0) ||(bVar2 = (typeName == "Character"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_22 != null) {
								return pCVar5.__9__10_22;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_22);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_22 = __this;
							targetAddress = &pCVar5.__9__10_22;
						}
						goto label_05b64b42;
					}
					if (0xe3137abc < uVar3) {
						if (uVar3 < 0xe4462ef9) {
							if (uVar3 == 0xe3309cc8) {
								bVar2 = (typeName == "PersistentData");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_105 != null) {
									return pCVar5.__9__10_105;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_105);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_105 = __this;
								targetAddress = &pCVar5.__9__10_105;
							}
							else {
								if ((uVar3 != 0xe4462ef8) ||(bVar2 = (typeName == "Dropdown"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_111 != null) {
									return pCVar5.__9__10_111;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_111);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_111 = __this;
								targetAddress = &pCVar5.__9__10_111;
							}
						}
						else if (uVar3 == 0xe48b0628) {
							bVar2 = (typeName == "SliderDirectionEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_79 != null) {
								return pCVar5.__9__10_79;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_79);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_79 = __this;
							targetAddress = &pCVar5.__9__10_79;
						}
						else {
							if ((uVar3 != 0xe5b43cf8) ||(bVar2 = (typeName == "Color"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_0 != null) {
								return pCVar5.__9__10_0;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_0);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_0 = __this;
							targetAddress = &pCVar5.__9__10_0;
						}
						goto label_05b64b42;
					}
					if (uVar3 < 0xdfe4e405) {
						if (uVar3 == 0xdf19b82e) {
							bVar2 = (typeName == "FlexDirectionEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_45 != null) {
								return pCVar5.__9__10_45;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_45);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_45 = __this;
							targetAddress = &pCVar5.__9__10_45;
						}
						else {
							if ((uVar3 != 0xdfe4e404) ||(bVar2 = (typeName == "Time"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_109 != null) {
								return pCVar5.__9__10_109;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_109);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_109 = __this;
							targetAddress = &pCVar5.__9__10_109;
						}
					}
					else if (uVar3 == 0xe109ff8d) {
						bVar2 = (typeName == "SpecialEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_80 != null) {
							return pCVar5.__9__10_80;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_80);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_80 = __this;
						targetAddress = &pCVar5.__9__10_80;
					}
					else {
						if ((uVar3 != 0xe3137abc) ||(bVar2 = (typeName == "LineCastHitResult"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_2 != null) {
							return pCVar5.__9__10_2;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_2);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_2 = __this;
						targetAddress = &pCVar5.__9__10_2;
					}
					goto label_05b64b42;
				}
				if (0xc7933b34 < uVar3) {
					if (0xd5e92636 < uVar3) {
						if (uVar3 < 0xd848ce24) {
							if (uVar3 == 0xd6415ba3) {
								bVar2 = (typeName == "Prefab");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_28 != null) {
									return pCVar5.__9__10_28;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_28);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_28 = __this;
								targetAddress = &pCVar5.__9__10_28;
							}
							else {
								if ((uVar3 != 0xd848ce23) ||(bVar2 = (typeName == "InputErenShifterEnum"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_58 != null) {
									return pCVar5.__9__10_58;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_58);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_58 = __this;
								targetAddress = &pCVar5.__9__10_58;
							}
						}
						else if (uVar3 == 0xdd6e5bb7) {
							bVar2 = (typeName == "Locale");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_102 != null) {
								return pCVar5.__9__10_102;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_102);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_102 = __this;
							targetAddress = &pCVar5.__9__10_102;
						}
						else {
							if ((uVar3 != 0xde63acad) ||(bVar2 = (typeName == "Quaternion"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_4 != null) {
								return pCVar5.__9__10_4;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_4);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_4 = __this;
							targetAddress = &pCVar5.__9__10_4;
						}
						goto label_05b64b42;
					}
					if (uVar3 < 0xd0018936) {
						if (uVar3 == 0xcd48d190) {
							bVar2 = (typeName == "CameraModeEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_37 != null) {
								return pCVar5.__9__10_37;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_37);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_37 = __this;
							targetAddress = &pCVar5.__9__10_37;
						}
						else {
							if ((uVar3 != 0xd0018935) ||(bVar2 = (typeName == "WallColossal"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_32 != null) {
								return pCVar5.__9__10_32;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_32);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_32 = __this;
							targetAddress = &pCVar5.__9__10_32;
						}
					}
					else if (uVar3 == 0xd1454556) {
						bVar2 = (typeName == "HumanStateEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_55 != null) {
							return pCVar5.__9__10_55;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_55);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_55 = __this;
						targetAddress = &pCVar5.__9__10_55;
					}
					else {
						if ((uVar3 != 0xd5e92636) ||(bVar2 = (typeName == "EffectNameEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_43 != null) {
							return pCVar5.__9__10_43;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_43);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_43 = __this;
						targetAddress = &pCVar5.__9__10_43;
					}
					goto label_05b64b42;
				}
				if (0xc1541142 < uVar3) {
					if (uVar3 < 0xc28a9c8f) {
						if (uVar3 == 0xc2762327) {
							bVar2 = (typeName == "Game");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_100 != null) {
								return pCVar5.__9__10_100;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_100);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_100 = __this;
							targetAddress = &pCVar5.__9__10_100;
						}
						else {
							if ((uVar3 != 0xc28a9c8e) ||(bVar2 = (typeName == "MapObject"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_25 != null) {
								return pCVar5.__9__10_25;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_25);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_25 = __this;
							targetAddress = &pCVar5.__9__10_25;
						}
					}
					else if (uVar3 == 0xc6faa295) {
						bVar2 = (typeName == "HumanAnimationEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_52 != null) {
							return pCVar5.__9__10_52;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_52);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_52 = __this;
						targetAddress = &pCVar5.__9__10_52;
					}
					else {
						if ((uVar3 != 0xc7933b34) ||(bVar2 = (typeName == "Animator"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_10 != null) {
							return pCVar5.__9__10_10;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_10);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_10 = __this;
						targetAddress = &pCVar5.__9__10_10;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0xb9a9903b) {
					if (uVar3 == 0xb643c704) {
						bVar2 = (typeName == "Service");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_108 != null) {
							return pCVar5.__9__10_108;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_108);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_108 = __this;
						targetAddress = &pCVar5.__9__10_108;
					}
					else {
						if ((uVar3 != 0xb9a9903a) ||(bVar2 = (typeName == "LoadoutEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_67 != null) {
							return pCVar5.__9__10_67;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_67);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_67 = __this;
						targetAddress = &pCVar5.__9__10_67;
					}
				}
				else if (uVar3 == 0xbbd01375) {
					bVar2 = (typeName == "ScrollView");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_116 != null) {
						return pCVar5.__9__10_116;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_116);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_116 = __this;
					targetAddress = &pCVar5.__9__10_116;
				}
				else {
					if ((uVar3 != 0xc1541142) ||(bVar2 = (typeName == "OverflowEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_69 != null) {
						return pCVar5.__9__10_69;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_69);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_69 = __this;
					targetAddress = &pCVar5.__9__10_69;
				}
				goto label_05b64b42;
			}
			if (0x9bfdbd2f < uVar3) {
				if (0x9fa52e4a < uVar3) {
					if (0xa311e772 < uVar3) {
						if (uVar3 < 0xaab7b9ad) {
							if (uVar3 == 0xa3e78787) {
								bVar2 = (typeName == "RigidbodyBuiltin");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_20 != null) {
									return pCVar5.__9__10_20;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_20);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_20 = __this;
								targetAddress = &pCVar5.__9__10_20;
							}
							else {
								if ((uVar3 != 0xaab7b9ac) ||(bVar2 = (typeName == "InputGeneralEnum"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_59 != null) {
									return pCVar5.__9__10_59;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_59);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_59 = __this;
								targetAddress = &pCVar5.__9__10_59;
							}
						}
						else if (uVar3 == 0xad82abbb) {
							bVar2 = (typeName == "Transform");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_31 != null) {
								return pCVar5.__9__10_31;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_31);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_31 = __this;
							targetAddress = &pCVar5.__9__10_31;
						}
						else {
							if ((uVar3 != 0xb5933c59) ||(bVar2 = (typeName == "Dict"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_1 != null) {
								return pCVar5.__9__10_1;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_1);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_1 = __this;
							targetAddress = &pCVar5.__9__10_1;
						}
						goto label_05b64b42;
					}
					if (uVar3 < 0xa093206d) {
						if (uVar3 == 0xa0588591) {
							bVar2 = (typeName == "ShifterTypeEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_78 != null) {
								return pCVar5.__9__10_78;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_78);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_78 = __this;
							targetAddress = &pCVar5.__9__10_78;
						}
						else {
							if ((uVar3 != 0xa093206c) ||(bVar2 = (typeName == "CollideWithEnum"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_40 != null) {
								return pCVar5.__9__10_40;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_40);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_40 = __this;
							targetAddress = &pCVar5.__9__10_40;
						}
					}
					else if (uVar3 == 0xa1d74a4f) {
						bVar2 = (typeName == "AlignEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_33 != null) {
							return pCVar5.__9__10_33;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_33);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_33 = __this;
						targetAddress = &pCVar5.__9__10_33;
					}
					else {
						if ((uVar3 != 0xa311e772) ||(bVar2 = (typeName == "Range"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_5 != null) {
							return pCVar5.__9__10_5;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_5);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_5 = __this;
						targetAddress = &pCVar5.__9__10_5;
					}
					goto label_05b64b42;
				}
				if (0x9dd79570 < uVar3) {
					if (uVar3 < 0x9f4e7c79) {
						if (uVar3 == 0x9eccf29d) {
							bVar2 = (typeName == "Label");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_114 != null) {
								return pCVar5.__9__10_114;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_114);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_114 = __this;
							targetAddress = &pCVar5.__9__10_114;
						}
						else {
							if ((uVar3 != 0x9f4e7c78) ||(bVar2 = (typeName == "NetworkView"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_26 != null) {
								return pCVar5.__9__10_26;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_26);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_26 = __this;
							targetAddress = &pCVar5.__9__10_26;
						}
					}
					else if (uVar3 == 0x9f93e11b) {
						bVar2 = (typeName == "Input");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_101 != null) {
							return pCVar5.__9__10_101;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_101);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_101 = __this;
						targetAddress = &pCVar5.__9__10_101;
					}
					else {
						if ((uVar3 != 0x9fa52e4a) ||(bVar2 = (typeName == "RoomData"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_107 != null) {
							return pCVar5.__9__10_107;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_107);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_107 = __this;
						targetAddress = &pCVar5.__9__10_107;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0x9d82cc64) {
					if (uVar3 == 0x9cb923e3) {
						bVar2 = (typeName == "StunStateEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_82 != null) {
							return pCVar5.__9__10_82;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_82);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_82 = __this;
						targetAddress = &pCVar5.__9__10_82;
					}
					else {
						if ((uVar3 != 0x9d82cc63) ||(bVar2 = (typeName == "Json"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_123 != null) {
							return pCVar5.__9__10_123;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_123);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_123 = __this;
						targetAddress = &pCVar5.__9__10_123;
					}
				}
				else if (uVar3 == 0x9dabc5e1) {
					bVar2 = (typeName == "VideoPlayer");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_21 != null) {
						return pCVar5.__9__10_21;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_21);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_21 = __this;
					targetAddress = &pCVar5.__9__10_21;
				}
				else {
					if ((uVar3 != 0x9dd79570) ||(bVar2 = (typeName == "CollisionDetectionModeEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_41 != null) {
						return pCVar5.__9__10_41;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_41);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_41 = __this;
					targetAddress = &pCVar5.__9__10_41;
				}
				goto label_05b64b42;
			}
			if (0x8889f1ff < uVar3) {
				if (0x92e29218 < uVar3) {
					if (uVar3 < 0x971550f4) {
						if (uVar3 == 0x9397d3d7) {
							bVar2 = (typeName == "LodBuiltin");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_16 != null) {
								return pCVar5.__9__10_16;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_16);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_16 = __this;
							targetAddress = &pCVar5.__9__10_16;
						}
						else {
							if ((uVar3 != 0x971550f3) ||(bVar2 = (typeName == "Commands"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_97 != null) {
								return pCVar5.__9__10_97;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_97);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_97 = __this;
							targetAddress = &pCVar5.__9__10_97;
						}
					}
					else if (uVar3 == 0x9b74c01c) {
						bVar2 = (typeName == "Slider");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_117 != null) {
							return pCVar5.__9__10_117;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_117);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_117 = __this;
						targetAddress = &pCVar5.__9__10_117;
					}
					else {
						if ((uVar3 != 0x9bfdbd2f) ||(bVar2 = (typeName == "Collision"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_13 != null) {
							return pCVar5.__9__10_13;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_13);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_13 = __this;
						targetAddress = &pCVar5.__9__10_13;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0x8eb6f7b2) {
					if (uVar3 == 0x8d2937a1) {
						bVar2 = (typeName == "List");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_3 != null) {
							return pCVar5.__9__10_3;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_3);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_3 = __this;
						targetAddress = &pCVar5.__9__10_3;
					}
					else {
						if ((uVar3 != 0x8eb6f7b1) ||(bVar2 = (typeName == "ExperienceScore"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_99 != null) {
							return pCVar5.__9__10_99;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_99);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_99 = __this;
						targetAddress = &pCVar5.__9__10_99;
					}
				}
				else if (uVar3 == 0x9260a455) {
					bVar2 = (typeName == "AspectRatioEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_36 != null) {
						return pCVar5.__9__10_36;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_36);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_36 = __this;
					targetAddress = &pCVar5.__9__10_36;
				}
				else {
					if ((uVar3 != 0x92e29218) ||(bVar2 = (typeName == "Convert"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_122 != null) {
						return pCVar5.__9__10_122;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_122);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_122 = __this;
					targetAddress = &pCVar5.__9__10_122;
				}
				goto label_05b64b42;
			}
			if (0x840071c3 < uVar3) {
				if (uVar3 < 0x881d799e) {
					if (uVar3 == 0x86f78564) {
						bVar2 = (typeName == "FontScaleModeEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_46 != null) {
							return pCVar5.__9__10_46;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_46);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_46 = __this;
						targetAddress = &pCVar5.__9__10_46;
					}
					else {
						if ((uVar3 != 0x881d799d) ||(bVar2 = (typeName == "InputHumanEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_60 != null) {
							return pCVar5.__9__10_60;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_60);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_60 = __this;
						targetAddress = &pCVar5.__9__10_60;
					}
				}
				else if (uVar3 == 0x882c89c6) {
					bVar2 = (typeName == "TSKillSoundEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_83 != null) {
						return pCVar5.__9__10_83;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_83);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_83 = __this;
					targetAddress = &pCVar5.__9__10_83;
				}
				else {
					if ((uVar3 != 0x8889f1ff) ||(bVar2 = (typeName == "ScaleModeEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_74 != null) {
						return pCVar5.__9__10_74;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_74);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_74 = __this;
					targetAddress = &pCVar5.__9__10_74;
				}
				goto label_05b64b42;
			}
			if (uVar3 < 0x83007031) {
				if (uVar3 == 0x83007030) {
					bVar2 = (typeName == "Vector2");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_7 != null) {
						return pCVar5.__9__10_7;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_7);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_7 = __this;
					targetAddress = &pCVar5.__9__10_7;
				}
				else {
					if ((uVar3 != 0x7bf3b2fb) ||(bVar2 = (typeName == "UI"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_120 != null) {
						return pCVar5.__9__10_120;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_120);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_120 = __this;
					targetAddress = &pCVar5.__9__10_120;
				}
			}
			else if (uVar3 == 0x83fa9b28) {
				bVar2 = (typeName == "LineRenderer");
				if (!bVar2) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_15 != null) {
					return pCVar5.__9__10_15;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_15);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_15 = __this;
				targetAddress = &pCVar5.__9__10_15;
			}
			else {
				if ((uVar3 != 0x840071c3) ||(bVar2 = (typeName == "Vector3"), !bVar2)) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_8 != null) {
					return pCVar5.__9__10_8;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_8);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_8 = __this;
				targetAddress = &pCVar5.__9__10_8;
			}
			goto label_05b64b42;
		}
		if (0x4115d182 < uVar3) {
			if (0x5ad044e0 < uVar3) {
				if (0x6974ad65 < uVar3) {
					if (0x6fb6fabc < uVar3) {
						if (uVar3 < 0x73754f17) {
							if (uVar3 == 0x73207b93) {
								bVar2 = (typeName == "PlayerStatusEnum");
								if (!bVar2) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_71 != null) {
									return pCVar5.__9__10_71;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_71);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_71 = __this;
								targetAddress = &pCVar5.__9__10_71;
							}
							else {
								if ((uVar3 != 0x73754f16) ||(bVar2 = (typeName == "InputTitanEnum"), !bVar2 )) goto label_05b64b53;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								if (pCVar5.__9__10_62 != null) {
									return pCVar5.__9__10_62;
								}
								if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
									pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								}
								pIVar1 = (object)pCVar5.__9;
								__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_62);
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
								pCVar5.__9__10_62 = __this;
								targetAddress = &pCVar5.__9__10_62;
							}
						}
						else if (uVar3 == 0x7988a5b0) {
							bVar2 = (typeName == "HandStateEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_50 != null) {
								return pCVar5.__9__10_50;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_50);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_50 = __this;
							targetAddress = &pCVar5.__9__10_50;
						}
						else {
							if ((uVar3 != 0x7bb199a4) ||(bVar2 = (typeName == "AudioSource"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_11 != null) {
								return pCVar5.__9__10_11;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_11);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_11 = __this;
							targetAddress = &pCVar5.__9__10_11;
						}
						goto label_05b64b42;
					}
					if (uVar3 < 0x6ce5458d) {
						if (uVar3 == 0x6c73be56) {
							bVar2 = (typeName == "JustifyEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_63 != null) {
								return pCVar5.__9__10_63;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_63);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_63 = __this;
							targetAddress = &pCVar5.__9__10_63;
						}
						else {
							if ((uVar3 != 0x6ce5458c) ||(bVar2 = (typeName == "ProjectileNameEnum"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_73 != null) {
								return pCVar5.__9__10_73;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_73);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_73 = __this;
							targetAddress = &pCVar5.__9__10_73;
						}
					}
					else if (uVar3 == 0x6cf1ba25) {
						bVar2 = (typeName == "Toggle");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_119 != null) {
							return pCVar5.__9__10_119;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_119);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_119 = __this;
						targetAddress = &pCVar5.__9__10_119;
					}
					else {
						if ((uVar3 != 0x6fb6fabc) ||(bVar2 = (typeName == "MapTargetable"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_17 != null) {
							return pCVar5.__9__10_17;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_17);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_17 = __this;
						targetAddress = &pCVar5.__9__10_17;
					}
					goto label_05b64b42;
				}
				if (0x60a3ca79 < uVar3) {
					if (uVar3 < 0x64666905) {
						if (uVar3 == 0x631663a4) {
							bVar2 = (typeName == "PhysicMaterialCombineEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_70 != null) {
								return pCVar5.__9__10_70;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_70);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_70 = __this;
							targetAddress = &pCVar5.__9__10_70;
						}
						else {
							if ((uVar3 != 0x64666904) ||(bVar2 = (typeName == "TitanDeathTypeEnum"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_88 != null) {
								return pCVar5.__9__10_88;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_88);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_88 = __this;
							targetAddress = &pCVar5.__9__10_88;
						}
					}
					else if (uVar3 == 0x68e6cb10) {
						bVar2 = (typeName == "Icon");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_112 != null) {
							return pCVar5.__9__10_112;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_112);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_112 = __this;
						targetAddress = &pCVar5.__9__10_112;
					}
					else {
						if ((uVar3 != 0x6974ad65) ||(bVar2 = (typeName == "Network"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_104 != null) {
							return pCVar5.__9__10_104;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_104);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_104 = __this;
						targetAddress = &pCVar5.__9__10_104;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0x5e59578e) {
					if (uVar3 == 0x5de6f45b) {
						bVar2 = (typeName == "VisualElement");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_121 != null) {
							return pCVar5.__9__10_121;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_121);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_121 = __this;
						targetAddress = &pCVar5.__9__10_121;
					}
					else {
						if ((uVar3 != 0x5e59578d) ||(bVar2 = (typeName == "LineAlignmentEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_65 != null) {
							return pCVar5.__9__10_65;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_65);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_65 = __this;
						targetAddress = &pCVar5.__9__10_65;
					}
				}
				else if (uVar3 == 0x604f4858) {
					bVar2 = (typeName == "String");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_126 != null) {
						return pCVar5.__9__10_126;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_126);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_126 = __this;
					targetAddress = &pCVar5.__9__10_126;
				}
				else {
					if ((uVar3 != 0x60a3ca79) ||(bVar2 = (typeName == "TextOverflowEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_86 != null) {
						return pCVar5.__9__10_86;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_86);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_86 = __this;
					targetAddress = &pCVar5.__9__10_86;
				}
				goto label_05b64b42;
			}
			if (0x4fcedcd7 < uVar3) {
				if (0x5569c3af < uVar3) {
					if (uVar3 < 0x5710ad21) {
						if (uVar3 == 0x55836470) {
							bVar2 = (typeName == "FontStyleEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_47 != null) {
								return pCVar5.__9__10_47;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_47);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_47 = __this;
							targetAddress = &pCVar5.__9__10_47;
						}
						else {
							if ((uVar3 != 0x5710ad20) ||(bVar2 = (typeName == "WrapEnum"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_95 != null) {
								return pCVar5.__9__10_95;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_95);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_95 = __this;
							targetAddress = &pCVar5.__9__10_95;
						}
					}
					else if (uVar3 == 0x590ca79a) {
						bVar2 = (typeName == "Image");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_113 != null) {
							return pCVar5.__9__10_113;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_113);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_113 = __this;
						targetAddress = &pCVar5.__9__10_113;
					}
					else {
						if ((uVar3 != 0x5ad044e0) ||(bVar2 = (typeName == "ShadowCastingModeEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_76 != null) {
							return pCVar5.__9__10_76;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_76);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_76 = __this;
						targetAddress = &pCVar5.__9__10_76;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0x53573f20) {
					if (uVar3 == 0x530abb38) {
						bVar2 = (typeName == "HumanParticleEffectEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_53 != null) {
							return pCVar5.__9__10_53;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_53);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_53 = __this;
						targetAddress = &pCVar5.__9__10_53;
					}
					else {
						if ((uVar3 != 0x53573f1f) ||(bVar2 = (typeName == "ProgressBar"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_115 != null) {
							return pCVar5.__9__10_115;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_115);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_115 = __this;
						targetAddress = &pCVar5.__9__10_115;
					}
				}
				else if (uVar3 == 0x55671e43) {
					bVar2 = (typeName == "GradientModeEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_49 != null) {
						return pCVar5.__9__10_49;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_49);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_49 = __this;
					targetAddress = &pCVar5.__9__10_49;
				}
				else {
					if ((uVar3 != 0x5569c3af) ||(bVar2 = (typeName == "Math"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_124 != null) {
						return pCVar5.__9__10_124;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_124);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_124 = __this;
					targetAddress = &pCVar5.__9__10_124;
				}
				goto label_05b64b42;
			}
			if (0x44a7f051 < uVar3) {
				if (uVar3 < 0x4dc60ca7) {
					if (uVar3 == 0x44e32e0e) {
						bVar2 = (typeName == "LightBuiltin");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_14 != null) {
							return pCVar5.__9__10_14;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_14);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_14 = __this;
						targetAddress = &pCVar5.__9__10_14;
					}
					else {
						if ((uVar3 != 0x4dc60ca6) ||(bVar2 = (typeName == "PhysicsMaterialBuiltin"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_19 != null) {
							return pCVar5.__9__10_19;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_19);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_19 = __this;
						targetAddress = &pCVar5.__9__10_19;
					}
				}
				else if (uVar3 == 0x4ea4edda) {
					bVar2 = (typeName == "ShifterSoundEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_77 != null) {
						return pCVar5.__9__10_77;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_77);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_77 = __this;
					targetAddress = &pCVar5.__9__10_77;
				}
				else {
					if ((uVar3 != 0x4fcedcd7) ||(bVar2 = (typeName == "AngleUnitEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_34 != null) {
						return pCVar5.__9__10_34;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_34);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_34 = __this;
					targetAddress = &pCVar5.__9__10_34;
				}
				goto label_05b64b42;
			}
			if (uVar3 < 0x41e389fe) {
				if (uVar3 == 0x41465646) {
					bVar2 = (typeName == "Horse");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_23 != null) {
						return pCVar5.__9__10_23;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_23);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_23 = __this;
					targetAddress = &pCVar5.__9__10_23;
				}
				else {
					if ((uVar3 != 0x41e389fd) ||(bVar2 = (typeName == "Animation"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_9 != null) {
						return pCVar5.__9__10_9;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_9);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_9 = __this;
					targetAddress = &pCVar5.__9__10_9;
				}
			}
			else if (uVar3 == 0x43fb04fa) {
				bVar2 = (typeName == "DummyAnimationEnum");
				if (!bVar2) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_42 != null) {
					return pCVar5.__9__10_42;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_42);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_42 = __this;
				targetAddress = &pCVar5.__9__10_42;
			}
			else {
				if ((uVar3 != 0x44a7f051) ||(bVar2 = (typeName == "Map"), !bVar2)) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_103 != null) {
					return pCVar5.__9__10_103;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_103);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_103 = __this;
				targetAddress = &pCVar5.__9__10_103;
			}
			goto label_05b64b42;
		}
		if (0x1bcb960e < uVar3) {
			if (0x2e7323db < uVar3) {
				if (0x33881a91 < uVar3) {
					if (uVar3 < 0x3868216b) {
						if (uVar3 == 0x34d45601) {
							bVar2 = (typeName == "SteamStateEnum");
							if (!bVar2) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_81 != null) {
								return pCVar5.__9__10_81;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_81);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_81 = __this;
							targetAddress = &pCVar5.__9__10_81;
						}
						else {
							if ((uVar3 != 0x3868216a) ||(bVar2 = (typeName == "TextField"), !bVar2)) goto label_05b64b53;
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
							}
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							if (pCVar5.__9__10_118 != null) {
								return pCVar5.__9__10_118;
							}
							if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
								il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes.c)) ;
								pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							}
							pIVar1 = (object)pCVar5.__9;
							__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_118);
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
							pCVar5.__9__10_118 = __this;
							targetAddress = &pCVar5.__9__10_118;
						}
					}
					else if (uVar3 == 0x3f9ee7fb) {
						bVar2 = (typeName == "OutlineModeEnum");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_68 != null) {
							return pCVar5.__9__10_68;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_68);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_68 = __this;
						targetAddress = &pCVar5.__9__10_68;
					}
					else {
						if ((uVar3 != 0x4115d182) ||(bVar2 = (typeName == "Random"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_125 != null) {
							return pCVar5.__9__10_125;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_125);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_125 = __this;
						targetAddress = &pCVar5.__9__10_125;
					}
					goto label_05b64b42;
				}
				if (uVar3 < 0x3162cd2b) {
					if (uVar3 == 0x301a1a8d) {
						bVar2 = (typeName == "NavmeshObstacleBuiltin");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_18 != null) {
							return pCVar5.__9__10_18;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_18);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_18 = __this;
						targetAddress = &pCVar5.__9__10_18;
					}
					else {
						if ((uVar3 != 0x3162cd2a) ||(bVar2 = (typeName == "UILabelEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_91 != null) {
							return pCVar5.__9__10_91;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_91);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_91 = __this;
						targetAddress = &pCVar5.__9__10_91;
					}
				}
				else if (uVar3 == 0x3263b09d) {
					bVar2 = (typeName == "TitanSoundEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_89 != null) {
						return pCVar5.__9__10_89;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_89);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_89 = __this;
					targetAddress = &pCVar5.__9__10_89;
				}
				else {
					if ((uVar3 != 0x33881a91) ||(bVar2 = (typeName == "Button"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_110 != null) {
						return pCVar5.__9__10_110;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_110);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_110 = __this;
					targetAddress = &pCVar5.__9__10_110;
				}
				goto label_05b64b42;
			}
			if (0x2300193c < uVar3) {
				if (uVar3 < 0x2cfc1e5e) {
					if (uVar3 == 0x28b19ea3) {
						bVar2 = (typeName == "Set");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_6 != null) {
							return pCVar5.__9__10_6;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_6);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_6 = __this;
						targetAddress = &pCVar5.__9__10_6;
					}
					else {
						if ((uVar3 != 0x2cfc1e5d) ||(bVar2 = (typeName == "Collider"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_12 != null) {
							return pCVar5.__9__10_12;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_12);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_12 = __this;
						targetAddress = &pCVar5.__9__10_12;
					}
				}
				else if (uVar3 == 0x2dcc2acc) {
					bVar2 = (typeName == "WeaponEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_94 != null) {
						return pCVar5.__9__10_94;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_94);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_94 = __this;
					targetAddress = &pCVar5.__9__10_94;
				}
				else {
					if ((uVar3 != 0x2e7323db) ||(bVar2 = (typeName == "CollideModeEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_39 != null) {
						return pCVar5.__9__10_39;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_39);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_39 = __this;
					targetAddress = &pCVar5.__9__10_39;
				}
				goto label_05b64b42;
			}
			if (uVar3 < 0x1e3a3682) {
				if (uVar3 == 0x1c70fc20) {
					bVar2 = (typeName == "Player");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_27 != null) {
						return pCVar5.__9__10_27;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_27);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_27 = __this;
					targetAddress = &pCVar5.__9__10_27;
				}
				else {
					if ((uVar3 != 0x1e3a3681) ||(bVar2 = (typeName == "Cutscene"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_98 != null) {
						return pCVar5.__9__10_98;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_98);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_98 = __this;
					targetAddress = &pCVar5.__9__10_98;
				}
			}
			else if (uVar3 == 0x21a45a82) {
				bVar2 = (typeName == "ProfileIconEnum");
				if (!bVar2) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_72 != null) {
					return pCVar5.__9__10_72;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_72);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_72 = __this;
				targetAddress = &pCVar5.__9__10_72;
			}
			else {
				if ((uVar3 != 0x2300193c) ||(bVar2 = (typeName == "HumanSoundEnum"), !bVar2)) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_54 != null) {
					return pCVar5.__9__10_54;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_54);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_54 = __this;
				targetAddress = &pCVar5.__9__10_54;
			}
			goto label_05b64b42;
		}
		if (uVar3 < 0xbf49dfa) {
			if (uVar3 < 0x6b7e4bd) {
				if (uVar3 == 0xa8938) {
					bVar2 = (typeName == "ErenAnimationEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_44 != null) {
						return pCVar5.__9__10_44;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_44);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_44 = __this;
					targetAddress = &pCVar5.__9__10_44;
				}
				else if (uVar3 == 0x5b115bc) {
					bVar2 = (typeName == "Shifter");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_29 != null) {
						return pCVar5.__9__10_29;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_29);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_29 = __this;
					targetAddress = &pCVar5.__9__10_29;
				}
				else {
					if ((uVar3 != 0x6b7e4bc) ||(bVar2 = (typeName == "InputInteractionEnum"), !bVar2)) {
	label_05b64b53: ;
						pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Builtin type '");
						str2 = il2cpp_codegen_get_runtime_metadata(&"' does not exist");
						pSVar4 = String.Concat(pSVar4, typeName, str2);
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
						__this_00 = (Exception)il2cpp_codegen_object_new(klass);
						__this_00 = new Exception(pSVar4);
						lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicBuiltinTypes_CreateFactory);
						throw (object)__this_00;
					}
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_61 != null) {
						return pCVar5.__9__10_61;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_61);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_61 = __this;
					targetAddress = &pCVar5.__9__10_61;
				}
			}
			else if (uVar3 < 0x91ceb7d) {
				if (uVar3 == 0x6f486c8) {
					bVar2 = (typeName == "WallColossalAnimationEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_93 != null) {
						return pCVar5.__9__10_93;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_93);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_93 = __this;
					targetAddress = &pCVar5.__9__10_93;
				}
				else {
					if ((uVar3 != 0x91ceb7c) ||(bVar2 = (typeName == "TitanAnimationEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_87 != null) {
						return pCVar5.__9__10_87;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_87);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_87 = __this;
					targetAddress = &pCVar5.__9__10_87;
				}
			}
			else if (uVar3 == 0xa324a9e) {
				bVar2 = (typeName == "InputAnnieShifterEnum");
				if (!bVar2) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_56 != null) {
					return pCVar5.__9__10_56;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_56);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_56 = __this;
				targetAddress = &pCVar5.__9__10_56;
			}
			else {
				if ((uVar3 != 0xbf49df9) ||(bVar2 = (typeName == "Titan"), !bVar2)) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_30 != null) {
					return pCVar5.__9__10_30;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_30);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_30 = __this;
				targetAddress = &pCVar5.__9__10_30;
			}
		}
		else {
			if (0x17a631e6 < uVar3) {
				if (uVar3 < 0x19a37e36) {
					if (uVar3 == 0x1983851a) {
						bVar2 = (typeName == "Human");
						if (!bVar2) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_24 != null) {
							return pCVar5.__9__10_24;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_24);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_24 = __this;
						targetAddress = &pCVar5.__9__10_24;
					}
					else {
						if ((uVar3 != 0x19a37e35) ||(bVar2 = (typeName == "CharacterTypeEnum"), !bVar2)) goto label_05b64b53;
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						if (pCVar5.__9__10_38 != null) {
							return pCVar5.__9__10_38;
						}
						if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
							pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						}
						pIVar1 = (object)pCVar5.__9;
						__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_38);
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
						pCVar5.__9__10_38 = __this;
						targetAddress = &pCVar5.__9__10_38;
					}
				}
				else if (uVar3 == 0x1b528e1c) {
					bVar2 = (typeName == "ScrollElasticityEnum");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_75 != null) {
						return pCVar5.__9__10_75;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_75);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_75 = __this;
					targetAddress = &pCVar5.__9__10_75;
				}
				else {
					if ((uVar3 != 0x1bcb960e) ||(bVar2 = (typeName == "ForceModeEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_48 != null) {
						return pCVar5.__9__10_48;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_48);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_48 = __this;
					targetAddress = &pCVar5.__9__10_48;
				}
				goto label_05b64b42;
			}
			if (uVar3 < 0x15794802) {
				if (uVar3 == 0xdc58442) {
					bVar2 = (typeName == "Physics");
					if (!bVar2) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_106 != null) {
						return pCVar5.__9__10_106;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_106);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_106 = __this;
					targetAddress = &pCVar5.__9__10_106;
				}
				else {
					if ((uVar3 != 0x15794801) ||(bVar2 = (typeName == "HorseAnimationEnum"), !bVar2)) goto label_05b64b53;
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					if (pCVar5.__9__10_51 != null) {
						return pCVar5.__9__10_51;
					}
					if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					}
					pIVar1 = (object)pCVar5.__9;
					__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_51);
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
					pCVar5.__9__10_51 = __this;
					targetAddress = &pCVar5.__9__10_51;
				}
			}
			else if (uVar3 == 0x16518ba4) {
				bVar2 = (typeName == "UnityComponentEnum");
				if (!bVar2) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_92 != null) {
					return pCVar5.__9__10_92;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_92);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_92 = __this;
				targetAddress = &pCVar5.__9__10_92;
			}
			else {
				if ((uVar3 != 0x17a631e6) ||(bVar2 = (typeName == "InputCategoryEnum"), !bVar2)) goto label_05b64b53;
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				if (pCVar5.__9__10_57 != null) {
					return pCVar5.__9__10_57;
				}
				if ((typeof(CustomLogicBuiltinTypes.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				}
				pIVar1 = (object)pCVar5.__9;
				__this = new Func<object[], BuiltinClassInstance>(pIVar1, (intptr_t)MethodInfo_CustomLogic_CustomLogicBuiltinTypes_c_CreateFactory_b__10_57);
				pCVar5 = typeof(CustomLogicBuiltinTypes.c).static_fields;
				pCVar5.__9__10_57 = __this;
				targetAddress = &pCVar5.__9__10_57;
			}
		}
	label_05b64b42: ;
		return __this;
	}

	[Token(Token = "0x6003B70")]
	[Address(RVA = "0x5A64BC0", Offset = "0x5A63BC0", VA = "0x5A64BC0")]
	public CustomLogicBuiltinTypes()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c (CustomLogic.CustomLogicBuiltinTypes$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicBuiltinTypes.c.

	// CustomLogic.CustomLogicBuiltinTypes$$.cctor: 8 lines keep C-only constructs
	static CustomLogicBuiltinTypes()
	{
		CustomLogic_CustomLogicBuiltinTypes_StaticFields pCVar1;
		HashSet<string> pSVar2;
		Dictionary<string, string> __this;
		Dictionary<string, HashSet<string>> __this_00;

		if (Il2CppMethodInitialized_075472fd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputInteractionEnum.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicMapTargetableBuiltin.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicScrollElasticityEnum.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicVisualElementBuiltin.Bindings)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputErenShifterEnum.Bindings)) ;
			Il2CppMethodInitialized_075472fd = true;
		}
		pSVar2 = new HashSet<string>();
		if (pSVar2 != null) {
			pSVar2.Add((Il2CppObject *)"Color");
			pSVar2.Add((Il2CppObject *)"Dict");
			pSVar2.Add((Il2CppObject *)"LineCastHitResult");
			pSVar2.Add((Il2CppObject *)"List");
			pSVar2.Add((Il2CppObject *)"Quaternion");
			pSVar2.Add((Il2CppObject *)"Range");
			pSVar2.Add((Il2CppObject *)"Set");
			pSVar2.Add((Il2CppObject *)"Vector2");
			pSVar2.Add((Il2CppObject *)"Vector3");
			pSVar2.Add((Il2CppObject *)"Animation");
			pSVar2.Add((Il2CppObject *)"Animator");
			pSVar2.Add((Il2CppObject *)"AudioSource");
			pSVar2.Add((Il2CppObject *)"Collider");
			pSVar2.Add((Il2CppObject *)"Collision");
			pSVar2.Add((Il2CppObject *)"LightBuiltin");
			pSVar2.Add((Il2CppObject *)"LineRenderer");
			pSVar2.Add((Il2CppObject *)"LodBuiltin");
			pSVar2.Add((Il2CppObject *)"MapTargetable");
			pSVar2.Add((Il2CppObject *)"NavmeshObstacleBuiltin");
			pSVar2.Add((Il2CppObject *)"PhysicsMaterialBuiltin");
			pSVar2.Add((Il2CppObject *)"RigidbodyBuiltin");
			pSVar2.Add((Il2CppObject *)"VideoPlayer");
			pSVar2.Add((Il2CppObject *)"Character");
			pSVar2.Add((Il2CppObject *)"Horse");
			pSVar2.Add((Il2CppObject *)"Human");
			pSVar2.Add((Il2CppObject *)"MapObject");
			pSVar2.Add((Il2CppObject *)"NetworkView");
			pSVar2.Add((Il2CppObject *)"Player");
			pSVar2.Add((Il2CppObject *)"Prefab");
			pSVar2.Add((Il2CppObject *)"Shifter");
			pSVar2.Add((Il2CppObject *)"Titan");
			pSVar2.Add((Il2CppObject *)"Transform");
			pSVar2.Add((Il2CppObject *)"WallColossal");
			pSVar2.Add((Il2CppObject *)"AlignEnum");
			pSVar2.Add((Il2CppObject *)"AngleUnitEnum");
			pSVar2.Add((Il2CppObject *)"AnnieAnimationEnum");
			pSVar2.Add((Il2CppObject *)"AspectRatioEnum");
			pSVar2.Add((Il2CppObject *)"CameraModeEnum");
			pSVar2.Add((Il2CppObject *)"CharacterTypeEnum");
			pSVar2.Add((Il2CppObject *)"CollideModeEnum");
			pSVar2.Add((Il2CppObject *)"CollideWithEnum");
			pSVar2.Add((Il2CppObject *)"CollisionDetectionModeEnum");
			pSVar2.Add((Il2CppObject *)"DummyAnimationEnum");
			pSVar2.Add((Il2CppObject *)"EffectNameEnum");
			pSVar2.Add((Il2CppObject *)"ErenAnimationEnum");
			pSVar2.Add((Il2CppObject *)"FlexDirectionEnum");
			pSVar2.Add((Il2CppObject *)"FontScaleModeEnum");
			pSVar2.Add((Il2CppObject *)"FontStyleEnum");
			pSVar2.Add((Il2CppObject *)"ForceModeEnum");
			pSVar2.Add((Il2CppObject *)"GradientModeEnum");
			pSVar2.Add((Il2CppObject *)"HandStateEnum");
			pSVar2.Add((Il2CppObject *)"HorseAnimationEnum");
			pSVar2.Add((Il2CppObject *)"HumanAnimationEnum");
			pSVar2.Add((Il2CppObject *)"HumanParticleEffectEnum");
			pSVar2.Add((Il2CppObject *)"HumanSoundEnum");
			pSVar2.Add((Il2CppObject *)"HumanStateEnum");
			pSVar2.Add((Il2CppObject *)"InputAnnieShifterEnum");
			pSVar2.Add((Il2CppObject *)"InputCategoryEnum");
			pSVar2.Add((Il2CppObject *)"InputErenShifterEnum");
			pSVar2.Add((Il2CppObject *)"InputGeneralEnum");
			pSVar2.Add((Il2CppObject *)"InputHumanEnum");
			pSVar2.Add((Il2CppObject *)"InputInteractionEnum");
			pSVar2.Add((Il2CppObject *)"InputTitanEnum");
			pSVar2.Add((Il2CppObject *)"JustifyEnum");
			pSVar2.Add((Il2CppObject *)"LanguageEnum");
			pSVar2.Add((Il2CppObject *)"LineAlignmentEnum");
			pSVar2.Add((Il2CppObject *)"LineTextureModeEnum");
			pSVar2.Add((Il2CppObject *)"LoadoutEnum");
			pSVar2.Add((Il2CppObject *)"OutlineModeEnum");
			pSVar2.Add((Il2CppObject *)"OverflowEnum");
			pSVar2.Add((Il2CppObject *)"PhysicMaterialCombineEnum");
			pSVar2.Add((Il2CppObject *)"PlayerStatusEnum");
			pSVar2.Add((Il2CppObject *)"ProfileIconEnum");
			pSVar2.Add((Il2CppObject *)"ProjectileNameEnum");
			pSVar2.Add((Il2CppObject *)"ScaleModeEnum");
			pSVar2.Add((Il2CppObject *)"ScrollElasticityEnum");
			pSVar2.Add((Il2CppObject *)"ShadowCastingModeEnum");
			pSVar2.Add((Il2CppObject *)"ShifterSoundEnum");
			pSVar2.Add((Il2CppObject *)"ShifterTypeEnum");
			pSVar2.Add((Il2CppObject *)"SliderDirectionEnum");
			pSVar2.Add((Il2CppObject *)"SpecialEnum");
			pSVar2.Add((Il2CppObject *)"SteamStateEnum");
			pSVar2.Add((Il2CppObject *)"StunStateEnum");
			pSVar2.Add((Il2CppObject *)"TSKillSoundEnum");
			pSVar2.Add((Il2CppObject *)"TeamEnum");
			pSVar2.Add((Il2CppObject *)"TextAlignEnum");
			pSVar2.Add((Il2CppObject *)"TextOverflowEnum");
			pSVar2.Add((Il2CppObject *)"TitanAnimationEnum");
			pSVar2.Add((Il2CppObject *)"TitanDeathTypeEnum");
			pSVar2.Add((Il2CppObject *)"TitanSoundEnum");
			pSVar2.Add((Il2CppObject *)"TitanTypeEnum");
			pSVar2.Add((Il2CppObject *)"UILabelEnum");
			pSVar2.Add((Il2CppObject *)"UnityComponentEnum");
			pSVar2.Add((Il2CppObject *)"WallColossalAnimationEnum");
			pSVar2.Add((Il2CppObject *)"WeaponEnum");
			pSVar2.Add((Il2CppObject *)"WrapEnum");
			pSVar2.Add((Il2CppObject *)"Camera");
			pSVar2.Add((Il2CppObject *)"Commands");
			pSVar2.Add((Il2CppObject *)"Cutscene");
			pSVar2.Add((Il2CppObject *)"ExperienceScore");
			pSVar2.Add((Il2CppObject *)"Game");
			pSVar2.Add((Il2CppObject *)"Input");
			pSVar2.Add((Il2CppObject *)"Locale");
			pSVar2.Add((Il2CppObject *)"Map");
			pSVar2.Add((Il2CppObject *)"Network");
			pSVar2.Add((Il2CppObject *)"PersistentData");
			pSVar2.Add((Il2CppObject *)"Physics");
			pSVar2.Add((Il2CppObject *)"RoomData");
			pSVar2.Add((Il2CppObject *)"Service");
			pSVar2.Add((Il2CppObject *)"Time");
			pSVar2.Add((Il2CppObject *)"Button");
			pSVar2.Add((Il2CppObject *)"Dropdown");
			pSVar2.Add((Il2CppObject *)"Icon");
			pSVar2.Add((Il2CppObject *)"Image");
			pSVar2.Add((Il2CppObject *)"Label");
			pSVar2.Add((Il2CppObject *)"ProgressBar");
			pSVar2.Add((Il2CppObject *)"ScrollView");
			pSVar2.Add((Il2CppObject *)"Slider");
			pSVar2.Add((Il2CppObject *)"TextField");
			pSVar2.Add((Il2CppObject *)"Toggle");
			pSVar2.Add((Il2CppObject *)"UI");
			pSVar2.Add((Il2CppObject *)"VisualElement");
			pSVar2.Add((Il2CppObject *)"Convert");
			pSVar2.Add((Il2CppObject *)"Json");
			pSVar2.Add((Il2CppObject *)"Math");
			pSVar2.Add((Il2CppObject *)"Random");
			pSVar2.Add((Il2CppObject *)"String");
			pCVar1 = typeof(CustomLogicBuiltinTypes).static_fields;
			pCVar1.TypeNames = pSVar2;
			__this = new Dictionary<string, string>();
			if (__this != null) {
				__this.set_Item((Il2CppObject *)"Range", (Il2CppObject *)"List");
				__this.set_Item((Il2CppObject *)"Horse", (Il2CppObject *)"Character");
				__this.set_Item((Il2CppObject *)"Human", (Il2CppObject *)"Character");
				__this.set_Item((Il2CppObject *)"Shifter", (Il2CppObject *)"Character");
				__this.set_Item((Il2CppObject *)"Titan", (Il2CppObject *)"Character");
				__this.set_Item((Il2CppObject *)"WallColossal", (Il2CppObject *)"Shifter");
				__this.set_Item((Il2CppObject *)"Button", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"Dropdown", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"Icon", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"Label", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"ProgressBar", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"ScrollView", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"Slider", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"TextField", (Il2CppObject *)"VisualElement");
				__this.set_Item((Il2CppObject *)"Toggle", (Il2CppObject *)"VisualElement");
				pCVar1 = typeof(CustomLogicBuiltinTypes).static_fields;
				pCVar1.BaseTypeNames = __this;
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, HashSet<string>>));
				__this_00 = new Dictionary<object, object>();
				if (__this_00 != null) {
					__this_00.set_Item((Il2CppObject *)"Color", (object)CustomLogicColorBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Dict", (object)CustomLogicDictBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LineCastHitResult", (object)CustomLogicLineCastHitResultBuiltin.Bindings. MemberNames);
					__this_00.set_Item((Il2CppObject *)"List", (object)CustomLogicListBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Quaternion", (object)CustomLogicQuaternionBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Range", (object)CustomLogicRangeBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Set", (object)CustomLogicSetBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Vector2", (object)CustomLogicVector2Builtin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Vector3", (object)CustomLogicVector3Builtin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Animation", (object)CustomLogicAnimationBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Animator", (object)CustomLogicAnimatorBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"AudioSource", (object)CustomLogicAudioSourceBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Collider", (object)CustomLogicColliderBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Collision", (object)CustomLogicCollisionBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LightBuiltin", (object)CustomLogicLightBuiltin.Bindings.MemberNames);
					if ((typeof(CustomLogicLineRendererBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					__this_00.set_Item((Il2CppObject *)"LineRenderer", (object)CustomLogicLineRendererBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LodBuiltin", (object)CustomLogicLodBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"MapTargetable", (object)CustomLogicMapTargetableBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"NavmeshObstacleBuiltin", (object)CustomLogicNavmeshObstacleBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"PhysicsMaterialBuiltin", (object)CustomLogicPhysicsMaterialBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"RigidbodyBuiltin", (object)CustomLogicRigidbodyBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"VideoPlayer", (object)CustomLogicVideoPlayerBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Character", (object)CustomLogicCharacterBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Horse", (object)CustomLogicHorseBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Human", (object)CustomLogicHumanBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"MapObject", (object)CustomLogicMapObjectBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"NetworkView", (object)CustomLogicNetworkViewBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Player", (object)CustomLogicPlayerBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Prefab", (object)CustomLogicPrefabBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Shifter", (object)CustomLogicShifterBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Titan", (object)CustomLogicTitanBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Transform", (object)CustomLogicTransformBuiltin.Bindings.MemberNames);
					if ((typeof(CustomLogicWallColossalBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					__this_00.set_Item((Il2CppObject *)"WallColossal", (object)CustomLogicWallColossalBuiltin.Bindings.MemberNames);
					if ((typeof(CustomLogicAlignEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicAlignEnum.Bindings)) ;
					}
					__this_00.set_Item((Il2CppObject *)"AlignEnum", (object)CustomLogicAlignEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"AngleUnitEnum", (object)CustomLogicAngleUnitEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"AnnieAnimationEnum", (object)CustomLogicAnnieAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"AspectRatioEnum", (object)CustomLogicAspectRatioEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"CameraModeEnum", (object)CustomLogicCameraModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"CharacterTypeEnum", (object)CustomLogicCharacterTypeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"CollideModeEnum", (object)CustomLogicCollideModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"CollideWithEnum", (object)CustomLogicCollideWithEnum.Bindings.MemberNames);
					if ((typeof(CustomLogicCollisionDetectionModeEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
					}
					__this_00.set_Item((Il2CppObject *)"CollisionDetectionModeEnum", (object)CustomLogicCollisionDetectionModeEnum.Bindings. MemberNames);
					__this_00.set_Item((Il2CppObject *)"DummyAnimationEnum", (object)CustomLogicDummyAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"EffectNameEnum", (object)CustomLogicEffectNameEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ErenAnimationEnum", (object)CustomLogicErenAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"FlexDirectionEnum", (object)CustomLogicFlexDirectionEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"FontScaleModeEnum", (object)CustomLogicFontScaleModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"FontStyleEnum", (object)CustomLogicFontStyleEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ForceModeEnum", (object)CustomLogicForceModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"GradientModeEnum", (object)CustomLogicGradientModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"HandStateEnum", (object)CustomLogicHandStateEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"HorseAnimationEnum", (object)CustomLogicHorseAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"HumanAnimationEnum", (object)CustomLogicHumanAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"HumanParticleEffectEnum", (object)CustomLogicHumanParticleEffectEnum.Bindings. MemberNames);
					__this_00.set_Item((Il2CppObject *)"HumanSoundEnum", (object)CustomLogicHumanSoundEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"HumanStateEnum", (object)CustomLogicHumanStateEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputAnnieShifterEnum", (object)CustomLogicInputAnnieShifterEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputCategoryEnum", (object)CustomLogicInputCategoryEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputErenShifterEnum", (object)CustomLogicInputErenShifterEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputGeneralEnum", (object)CustomLogicInputGeneralEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputHumanEnum", (object)CustomLogicInputHumanEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputInteractionEnum", (object)CustomLogicInputInteractionEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"InputTitanEnum", (object)CustomLogicInputTitanEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"JustifyEnum", (object)CustomLogicJustifyEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LanguageEnum", (object)CustomLogicLanguageEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LineAlignmentEnum", (object)CustomLogicLineAlignmentEnum.Bindings.MemberNames);
					if ((typeof(CustomLogicLineTextureModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					__this_00.set_Item((Il2CppObject *)"LineTextureModeEnum", (object)CustomLogicLineTextureModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"LoadoutEnum", (object)CustomLogicLoadoutEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"OutlineModeEnum", (object)CustomLogicOutlineModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"OverflowEnum", (object)CustomLogicOverflowEnum.Bindings.MemberNames);
					if ((typeof(CustomLogicPhysicMaterialCombineEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
					}
					__this_00.set_Item((Il2CppObject *)"PhysicMaterialCombineEnum", (object)CustomLogicPhysicMaterialCombineEnum.Bindings. MemberNames);
					__this_00.set_Item((Il2CppObject *)"PlayerStatusEnum", (object)CustomLogicPlayerStatusEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ProfileIconEnum", (object)CustomLogicProfileIconEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ProjectileNameEnum", (object)CustomLogicProjectileNameEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ScaleModeEnum", (object)CustomLogicScaleModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ScrollElasticityEnum", (object)CustomLogicScrollElasticityEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ShadowCastingModeEnum", (object)CustomLogicShadowCastingModeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ShifterSoundEnum", (object)CustomLogicShifterSoundEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ShifterTypeEnum", (object)CustomLogicShifterTypeEnum.Bindings.MemberNames);
					if ((typeof(CustomLogicSliderDirectionEnum.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					__this_00.set_Item((Il2CppObject *)"SliderDirectionEnum", (object)CustomLogicSliderDirectionEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"SpecialEnum", (object)CustomLogicSpecialEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"SteamStateEnum", (object)CustomLogicSteamStateEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"StunStateEnum", (object)CustomLogicStunStateEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TSKillSoundEnum", (object)CustomLogicTSKillSoundEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TeamEnum", (object)CustomLogicTeamEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TextAlignEnum", (object)CustomLogicTextAlignEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TextOverflowEnum", (object)CustomLogicTextOverflowEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TitanAnimationEnum", (object)CustomLogicTitanAnimationEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TitanDeathTypeEnum", (object)CustomLogicTitanDeathTypeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TitanSoundEnum", (object)CustomLogicTitanSoundEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TitanTypeEnum", (object)CustomLogicTitanTypeEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"UILabelEnum", (object)CustomLogicUILabelEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"UnityComponentEnum", (object)CustomLogicUnityComponentEnum.Bindings.MemberNames);
					if ((typeof(CustomLogicWallColossalAnimationEnum.Bindings)._2). cctor_finished_or_no_cctor == 0) {
					}
					__this_00.set_Item((Il2CppObject *)"WallColossalAnimationEnum", (object)CustomLogicWallColossalAnimationEnum.Bindings. MemberNames);
					__this_00.set_Item((Il2CppObject *)"WeaponEnum", (object)CustomLogicWeaponEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"WrapEnum", (object)CustomLogicWrapEnum.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Camera", (object)CustomLogicCameraBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Commands", (object)CustomLogicCommandsBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Cutscene", (object)CustomLogicCutsceneBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ExperienceScore", (object)CustomLogicExperienceScoreBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Game", (object)CustomLogicGameBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Input", (object)CustomLogicInputBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Locale", (object)CustomLogicLocaleBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Map", (object)CustomLogicMapBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Network", (object)CustomLogicNetworkBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"PersistentData", (object)CustomLogicPersistentDataBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Physics", (object)CustomLogicPhysicsBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"RoomData", (object)CustomLogicRoomDataBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Service", (object)CustomLogicServicesBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Time", (object)CustomLogicTimeBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Button", (object)CustomLogicButtonBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Dropdown", (object)CustomLogicDropdownBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Icon", (object)CustomLogicIconBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Image", (object)CustomLogicImageBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Label", (object)CustomLogicLabelBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ProgressBar", (object)CustomLogicProgressBarBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"ScrollView", (object)CustomLogicScrollViewBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Slider", (object)CustomLogicSliderBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"TextField", (object)CustomLogicTextFieldBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Toggle", (object)CustomLogicToggleBuiltin.Bindings.MemberNames);
					if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
					}
					__this_00.set_Item((Il2CppObject *)"UI", (object)CustomLogicUIBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"VisualElement", (object)CustomLogicVisualElementBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Convert", (object)CustomLogicConvertBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Json", (object)CustomLogicJsonBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Math", (object)CustomLogicMathBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"Random", (object)CustomLogicRandomBuiltin.Bindings.MemberNames);
					__this_00.set_Item((Il2CppObject *)"String", (object)CustomLogicStringBuiltin.Bindings.MemberNames);
					pCVar1 = typeof(CustomLogicBuiltinTypes).static_fields;
					pCVar1.MemberNames = __this_00;
					pSVar2 = new HashSet<string>();
					if (pSVar2 != null) {
						pSVar2.Add((Il2CppObject *)"Color");
						pSVar2.Add((Il2CppObject *)"Quaternion");
						pSVar2.Add((Il2CppObject *)"Vector2");
						pSVar2.Add((Il2CppObject *)"Vector3");
						pSVar2.Add((Il2CppObject *)"LightBuiltin");
						pSVar2.Add((Il2CppObject *)"LineRenderer");
						pSVar2.Add((Il2CppObject *)"LodBuiltin");
						pSVar2.Add((Il2CppObject *)"NavmeshObstacleBuiltin");
						pSVar2.Add((Il2CppObject *)"PhysicsMaterialBuiltin");
						pSVar2.Add((Il2CppObject *)"RigidbodyBuiltin");
						pSVar2.Add((Il2CppObject *)"AlignEnum");
						pSVar2.Add((Il2CppObject *)"AngleUnitEnum");
						pSVar2.Add((Il2CppObject *)"AnnieAnimationEnum");
						pSVar2.Add((Il2CppObject *)"AspectRatioEnum");
						pSVar2.Add((Il2CppObject *)"CameraModeEnum");
						pSVar2.Add((Il2CppObject *)"CharacterTypeEnum");
						pSVar2.Add((Il2CppObject *)"CollideModeEnum");
						pSVar2.Add((Il2CppObject *)"CollideWithEnum");
						pSVar2.Add((Il2CppObject *)"CollisionDetectionModeEnum");
						pSVar2.Add((Il2CppObject *)"DummyAnimationEnum");
						pSVar2.Add((Il2CppObject *)"EffectNameEnum");
						pSVar2.Add((Il2CppObject *)"ErenAnimationEnum");
						pSVar2.Add((Il2CppObject *)"FlexDirectionEnum");
						pSVar2.Add((Il2CppObject *)"FontScaleModeEnum");
						pSVar2.Add((Il2CppObject *)"FontStyleEnum");
						pSVar2.Add((Il2CppObject *)"ForceModeEnum");
						pSVar2.Add((Il2CppObject *)"GradientModeEnum");
						pSVar2.Add((Il2CppObject *)"HandStateEnum");
						pSVar2.Add((Il2CppObject *)"HorseAnimationEnum");
						pSVar2.Add((Il2CppObject *)"HumanAnimationEnum");
						pSVar2.Add((Il2CppObject *)"HumanParticleEffectEnum");
						pSVar2.Add((Il2CppObject *)"HumanSoundEnum");
						pSVar2.Add((Il2CppObject *)"HumanStateEnum");
						pSVar2.Add((Il2CppObject *)"InputAnnieShifterEnum");
						pSVar2.Add((Il2CppObject *)"InputCategoryEnum");
						pSVar2.Add((Il2CppObject *)"InputErenShifterEnum");
						pSVar2.Add((Il2CppObject *)"InputGeneralEnum");
						pSVar2.Add((Il2CppObject *)"InputHumanEnum");
						pSVar2.Add((Il2CppObject *)"InputInteractionEnum");
						pSVar2.Add((Il2CppObject *)"InputTitanEnum");
						pSVar2.Add((Il2CppObject *)"JustifyEnum");
						pSVar2.Add((Il2CppObject *)"LanguageEnum");
						pSVar2.Add((Il2CppObject *)"LineAlignmentEnum");
						pSVar2.Add((Il2CppObject *)"LineTextureModeEnum");
						pSVar2.Add((Il2CppObject *)"LoadoutEnum");
						pSVar2.Add((Il2CppObject *)"OutlineModeEnum");
						pSVar2.Add((Il2CppObject *)"OverflowEnum");
						pSVar2.Add((Il2CppObject *)"PhysicMaterialCombineEnum");
						pSVar2.Add((Il2CppObject *)"PlayerStatusEnum");
						pSVar2.Add((Il2CppObject *)"ProfileIconEnum");
						pSVar2.Add((Il2CppObject *)"ProjectileNameEnum");
						pSVar2.Add((Il2CppObject *)"ScaleModeEnum");
						pSVar2.Add((Il2CppObject *)"ScrollElasticityEnum");
						pSVar2.Add((Il2CppObject *)"ShadowCastingModeEnum");
						pSVar2.Add((Il2CppObject *)"ShifterSoundEnum");
						pSVar2.Add((Il2CppObject *)"ShifterTypeEnum");
						pSVar2.Add((Il2CppObject *)"SliderDirectionEnum");
						pSVar2.Add((Il2CppObject *)"SpecialEnum");
						pSVar2.Add((Il2CppObject *)"SteamStateEnum");
						pSVar2.Add((Il2CppObject *)"StunStateEnum");
						pSVar2.Add((Il2CppObject *)"TSKillSoundEnum");
						pSVar2.Add((Il2CppObject *)"TeamEnum");
						pSVar2.Add((Il2CppObject *)"TextAlignEnum");
						pSVar2.Add((Il2CppObject *)"TextOverflowEnum");
						pSVar2.Add((Il2CppObject *)"TitanAnimationEnum");
						pSVar2.Add((Il2CppObject *)"TitanDeathTypeEnum");
						pSVar2.Add((Il2CppObject *)"TitanSoundEnum");
						pSVar2.Add((Il2CppObject *)"TitanTypeEnum");
						pSVar2.Add((Il2CppObject *)"UILabelEnum");
						pSVar2.Add((Il2CppObject *)"UnityComponentEnum");
						pSVar2.Add((Il2CppObject *)"WallColossalAnimationEnum");
						pSVar2.Add((Il2CppObject *)"WeaponEnum");
						pSVar2.Add((Il2CppObject *)"WrapEnum");
						pSVar2.Add((Il2CppObject *)"Camera");
						pSVar2.Add((Il2CppObject *)"Commands");
						pSVar2.Add((Il2CppObject *)"Cutscene");
						pSVar2.Add((Il2CppObject *)"Game");
						pSVar2.Add((Il2CppObject *)"Input");
						pSVar2.Add((Il2CppObject *)"Locale");
						pSVar2.Add((Il2CppObject *)"Map");
						pSVar2.Add((Il2CppObject *)"Network");
						pSVar2.Add((Il2CppObject *)"PersistentData");
						pSVar2.Add((Il2CppObject *)"Physics");
						pSVar2.Add((Il2CppObject *)"RoomData");
						pSVar2.Add((Il2CppObject *)"Service");
						pSVar2.Add((Il2CppObject *)"Time");
						pSVar2.Add((Il2CppObject *)"UI");
						pSVar2.Add((Il2CppObject *)"Convert");
						pSVar2.Add((Il2CppObject *)"Json");
						pSVar2.Add((Il2CppObject *)"Math");
						pSVar2.Add((Il2CppObject *)"Random");
						pSVar2.Add((Il2CppObject *)"String");
						pCVar1 = typeof(CustomLogicBuiltinTypes).static_fields;
						pCVar1.StaticTypeNames = pSVar2;
						pSVar2 = new HashSet<string>();
						if (pSVar2 != null) {
							pSVar2.Add((Il2CppObject *)"LineCastHitResult");
							pSVar2.Add((Il2CppObject *)"Animation");
							pSVar2.Add((Il2CppObject *)"Animator");
							pSVar2.Add((Il2CppObject *)"AudioSource");
							pSVar2.Add((Il2CppObject *)"Collider");
							pSVar2.Add((Il2CppObject *)"Collision");
							pSVar2.Add((Il2CppObject *)"LightBuiltin");
							pSVar2.Add((Il2CppObject *)"LodBuiltin");
							pSVar2.Add((Il2CppObject *)"MapTargetable");
							pSVar2.Add((Il2CppObject *)"NavmeshObstacleBuiltin");
							pSVar2.Add((Il2CppObject *)"PhysicsMaterialBuiltin");
							pSVar2.Add((Il2CppObject *)"RigidbodyBuiltin");
							pSVar2.Add((Il2CppObject *)"VideoPlayer");
							pSVar2.Add((Il2CppObject *)"Character");
							pSVar2.Add((Il2CppObject *)"Horse");
							pSVar2.Add((Il2CppObject *)"Human");
							pSVar2.Add((Il2CppObject *)"MapObject");
							pSVar2.Add((Il2CppObject *)"NetworkView");
							pSVar2.Add((Il2CppObject *)"Player");
							pSVar2.Add((Il2CppObject *)"Shifter");
							pSVar2.Add((Il2CppObject *)"Titan");
							pSVar2.Add((Il2CppObject *)"Transform");
							pSVar2.Add((Il2CppObject *)"WallColossal");
							pSVar2.Add((Il2CppObject *)"AlignEnum");
							pSVar2.Add((Il2CppObject *)"AngleUnitEnum");
							pSVar2.Add((Il2CppObject *)"AnnieAnimationEnum");
							pSVar2.Add((Il2CppObject *)"AspectRatioEnum");
							pSVar2.Add((Il2CppObject *)"CameraModeEnum");
							pSVar2.Add((Il2CppObject *)"CharacterTypeEnum");
							pSVar2.Add((Il2CppObject *)"CollideModeEnum");
							pSVar2.Add((Il2CppObject *)"CollideWithEnum");
							pSVar2.Add((Il2CppObject *)"CollisionDetectionModeEnum");
							pSVar2.Add((Il2CppObject *)"DummyAnimationEnum");
							pSVar2.Add((Il2CppObject *)"EffectNameEnum");
							pSVar2.Add((Il2CppObject *)"ErenAnimationEnum");
							pSVar2.Add((Il2CppObject *)"FlexDirectionEnum");
							pSVar2.Add((Il2CppObject *)"FontScaleModeEnum");
							pSVar2.Add((Il2CppObject *)"FontStyleEnum");
							pSVar2.Add((Il2CppObject *)"ForceModeEnum");
							pSVar2.Add((Il2CppObject *)"GradientModeEnum");
							pSVar2.Add((Il2CppObject *)"HandStateEnum");
							pSVar2.Add((Il2CppObject *)"HorseAnimationEnum");
							pSVar2.Add((Il2CppObject *)"HumanAnimationEnum");
							pSVar2.Add((Il2CppObject *)"HumanParticleEffectEnum");
							pSVar2.Add((Il2CppObject *)"HumanSoundEnum");
							pSVar2.Add((Il2CppObject *)"HumanStateEnum");
							pSVar2.Add((Il2CppObject *)"InputAnnieShifterEnum");
							pSVar2.Add((Il2CppObject *)"InputCategoryEnum");
							pSVar2.Add((Il2CppObject *)"InputErenShifterEnum");
							pSVar2.Add((Il2CppObject *)"InputGeneralEnum");
							pSVar2.Add((Il2CppObject *)"InputHumanEnum");
							pSVar2.Add((Il2CppObject *)"InputInteractionEnum");
							pSVar2.Add((Il2CppObject *)"InputTitanEnum");
							pSVar2.Add((Il2CppObject *)"JustifyEnum");
							pSVar2.Add((Il2CppObject *)"LanguageEnum");
							pSVar2.Add((Il2CppObject *)"LineAlignmentEnum");
							pSVar2.Add((Il2CppObject *)"LineTextureModeEnum");
							pSVar2.Add((Il2CppObject *)"LoadoutEnum");
							pSVar2.Add((Il2CppObject *)"OutlineModeEnum");
							pSVar2.Add((Il2CppObject *)"OverflowEnum");
							pSVar2.Add((Il2CppObject *)"PhysicMaterialCombineEnum");
							pSVar2.Add((Il2CppObject *)"PlayerStatusEnum");
							pSVar2.Add((Il2CppObject *)"ProfileIconEnum");
							pSVar2.Add((Il2CppObject *)"ProjectileNameEnum");
							pSVar2.Add((Il2CppObject *)"ScaleModeEnum");
							pSVar2.Add((Il2CppObject *)"ScrollElasticityEnum");
							pSVar2.Add((Il2CppObject *)"ShadowCastingModeEnum");
							pSVar2.Add((Il2CppObject *)"ShifterSoundEnum");
							pSVar2.Add((Il2CppObject *)"ShifterTypeEnum");
							pSVar2.Add((Il2CppObject *)"SliderDirectionEnum");
							pSVar2.Add((Il2CppObject *)"SpecialEnum");
							pSVar2.Add((Il2CppObject *)"SteamStateEnum");
							pSVar2.Add((Il2CppObject *)"StunStateEnum");
							pSVar2.Add((Il2CppObject *)"TSKillSoundEnum");
							pSVar2.Add((Il2CppObject *)"TeamEnum");
							pSVar2.Add((Il2CppObject *)"TextAlignEnum");
							pSVar2.Add((Il2CppObject *)"TextOverflowEnum");
							pSVar2.Add((Il2CppObject *)"TitanAnimationEnum");
							pSVar2.Add((Il2CppObject *)"TitanDeathTypeEnum");
							pSVar2.Add((Il2CppObject *)"TitanSoundEnum");
							pSVar2.Add((Il2CppObject *)"TitanTypeEnum");
							pSVar2.Add((Il2CppObject *)"UILabelEnum");
							pSVar2.Add((Il2CppObject *)"UnityComponentEnum");
							pSVar2.Add((Il2CppObject *)"WallColossalAnimationEnum");
							pSVar2.Add((Il2CppObject *)"WeaponEnum");
							pSVar2.Add((Il2CppObject *)"WrapEnum");
							pSVar2.Add((Il2CppObject *)"Camera");
							pSVar2.Add((Il2CppObject *)"Commands");
							pSVar2.Add((Il2CppObject *)"Cutscene");
							pSVar2.Add((Il2CppObject *)"ExperienceScore");
							pSVar2.Add((Il2CppObject *)"Game");
							pSVar2.Add((Il2CppObject *)"Input");
							pSVar2.Add((Il2CppObject *)"Locale");
							pSVar2.Add((Il2CppObject *)"Map");
							pSVar2.Add((Il2CppObject *)"Network");
							pSVar2.Add((Il2CppObject *)"PersistentData");
							pSVar2.Add((Il2CppObject *)"Physics");
							pSVar2.Add((Il2CppObject *)"RoomData");
							pSVar2.Add((Il2CppObject *)"Service");
							pSVar2.Add((Il2CppObject *)"Time");
							pSVar2.Add((Il2CppObject *)"Button");
							pSVar2.Add((Il2CppObject *)"Dropdown");
							pSVar2.Add((Il2CppObject *)"Icon");
							pSVar2.Add((Il2CppObject *)"Image");
							pSVar2.Add((Il2CppObject *)"Label");
							pSVar2.Add((Il2CppObject *)"ProgressBar");
							pSVar2.Add((Il2CppObject *)"Slider");
							pSVar2.Add((Il2CppObject *)"TextField");
							pSVar2.Add((Il2CppObject *)"Toggle");
							pSVar2.Add((Il2CppObject *)"UI");
							pSVar2.Add((Il2CppObject *)"VisualElement");
							pSVar2.Add((Il2CppObject *)"Convert");
							pSVar2.Add((Il2CppObject *)"Json");
							pSVar2.Add((Il2CppObject *)"Math");
							pSVar2.Add((Il2CppObject *)"String");
							pCVar1 = typeof(CustomLogicBuiltinTypes).static_fields;
							pCVar1.AbstractTypeNames = pSVar2;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicBuiltinTypes.c();
		CustomLogicBuiltinTypes.c.__9 =(CustomLogicBuiltinTypes.c)__this;
		return;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_0: clean
	private BuiltinClassInstance c__CreateFactory_b__10_0(Object[] args)
	{
		CustomLogicColorBuiltin pCVar1;

		pCVar1 = CustomLogicColorBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_1: clean
	private BuiltinClassInstance c__CreateFactory_b__10_1(Object[] args)
	{
		CustomLogicDictBuiltin pCVar1;

		pCVar1 = CustomLogicDictBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_2: clean
	private BuiltinClassInstance c__CreateFactory_b__10_2(Object[] args)
	{
		CustomLogicLineCastHitResultBuiltin pCVar1;

		pCVar1 = CustomLogicLineCastHitResultBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_3: clean
	private BuiltinClassInstance c__CreateFactory_b__10_3(Object[] args)
	{
		CustomLogicListBuiltin pCVar1;

		pCVar1 = CustomLogicListBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_4: clean
	private BuiltinClassInstance c__CreateFactory_b__10_4(Object[] args)
	{
		CustomLogicQuaternionBuiltin pCVar1;

		pCVar1 = CustomLogicQuaternionBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_5: clean
	private BuiltinClassInstance c__CreateFactory_b__10_5(Object[] args)
	{
		CustomLogicRangeBuiltin pCVar1;

		pCVar1 = CustomLogicRangeBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_6: clean
	private BuiltinClassInstance c__CreateFactory_b__10_6(Object[] args)
	{
		CustomLogicSetBuiltin pCVar1;

		pCVar1 = CustomLogicSetBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_7: clean
	private BuiltinClassInstance c__CreateFactory_b__10_7(Object[] args)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_8: clean
	private BuiltinClassInstance c__CreateFactory_b__10_8(Object[] args)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_9: clean
	private BuiltinClassInstance c__CreateFactory_b__10_9(Object[] args)
	{
		CustomLogicAnimationBuiltin pCVar1;

		pCVar1 = CustomLogicAnimationBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_10: clean
	private BuiltinClassInstance c__CreateFactory_b__10_10(Object[] args)
	{
		CustomLogicAnimatorBuiltin pCVar1;

		pCVar1 = CustomLogicAnimatorBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_11: clean
	private BuiltinClassInstance c__CreateFactory_b__10_11(Object[] args)
	{
		CustomLogicAudioSourceBuiltin pCVar1;

		pCVar1 = CustomLogicAudioSourceBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_12: clean
	private BuiltinClassInstance c__CreateFactory_b__10_12(Object[] args)
	{
		CustomLogicColliderBuiltin pCVar1;

		pCVar1 = CustomLogicColliderBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_13: clean
	private BuiltinClassInstance c__CreateFactory_b__10_13(Object[] args)
	{
		CustomLogicCollisionBuiltin pCVar1;

		pCVar1 = CustomLogicCollisionBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_14: clean
	private BuiltinClassInstance c__CreateFactory_b__10_14(Object[] args)
	{
		CustomLogicLightBuiltin pCVar1;

		pCVar1 = CustomLogicLightBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_15: clean
	private BuiltinClassInstance c__CreateFactory_b__10_15(Object[] args)
	{
		CustomLogicLineRendererBuiltin pCVar1;

		pCVar1 = CustomLogicLineRendererBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_16: clean
	private BuiltinClassInstance c__CreateFactory_b__10_16(Object[] args)
	{
		CustomLogicLodBuiltin pCVar1;

		pCVar1 = CustomLogicLodBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_17: clean
	private BuiltinClassInstance c__CreateFactory_b__10_17(Object[] args)
	{
		CustomLogicMapTargetableBuiltin pCVar1;

		pCVar1 = CustomLogicMapTargetableBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_18: clean
	private BuiltinClassInstance c__CreateFactory_b__10_18(Object[] args)
	{
		CustomLogicNavmeshObstacleBuiltin pCVar1;

		pCVar1 = CustomLogicNavmeshObstacleBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_19: clean
	private BuiltinClassInstance c__CreateFactory_b__10_19(Object[] args)
	{
		CustomLogicPhysicsMaterialBuiltin pCVar1;

		pCVar1 = CustomLogicPhysicsMaterialBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_20: clean
	private BuiltinClassInstance c__CreateFactory_b__10_20(Object[] args)
	{
		CustomLogicRigidbodyBuiltin pCVar1;

		pCVar1 = CustomLogicRigidbodyBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_21: clean
	private BuiltinClassInstance c__CreateFactory_b__10_21(Object[] args)
	{
		CustomLogicVideoPlayerBuiltin pCVar1;

		pCVar1 = CustomLogicVideoPlayerBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_22: clean
	private BuiltinClassInstance c__CreateFactory_b__10_22(Object[] args)
	{
		CustomLogicCharacterBuiltin pCVar1;

		pCVar1 = CustomLogicCharacterBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_23: clean
	private BuiltinClassInstance c__CreateFactory_b__10_23(Object[] args)
	{
		CustomLogicHorseBuiltin pCVar1;

		pCVar1 = CustomLogicHorseBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_24: clean
	private BuiltinClassInstance c__CreateFactory_b__10_24(Object[] args)
	{
		CustomLogicHumanBuiltin pCVar1;

		pCVar1 = CustomLogicHumanBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_25: clean
	private BuiltinClassInstance c__CreateFactory_b__10_25(Object[] args)
	{
		CustomLogicMapObjectBuiltin pCVar1;

		pCVar1 = CustomLogicMapObjectBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_26: clean
	private BuiltinClassInstance c__CreateFactory_b__10_26(Object[] args)
	{
		CustomLogicNetworkViewBuiltin pCVar1;

		pCVar1 = CustomLogicNetworkViewBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_27: clean
	private BuiltinClassInstance c__CreateFactory_b__10_27(Object[] args)
	{
		CustomLogicPlayerBuiltin pCVar1;

		pCVar1 = CustomLogicPlayerBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_28: clean
	private BuiltinClassInstance c__CreateFactory_b__10_28(Object[] args)
	{
		CustomLogicPrefabBuiltin pCVar1;

		pCVar1 = CustomLogicPrefabBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_29: clean
	private BuiltinClassInstance c__CreateFactory_b__10_29(Object[] args)
	{
		CustomLogicShifterBuiltin pCVar1;

		pCVar1 = CustomLogicShifterBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_30: clean
	private BuiltinClassInstance c__CreateFactory_b__10_30(Object[] args)
	{
		CustomLogicTitanBuiltin pCVar1;

		pCVar1 = CustomLogicTitanBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_31: clean
	private BuiltinClassInstance c__CreateFactory_b__10_31(Object[] args)
	{
		CustomLogicTransformBuiltin pCVar1;

		pCVar1 = CustomLogicTransformBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_32: clean
	private BuiltinClassInstance c__CreateFactory_b__10_32(Object[] args)
	{
		CustomLogicWallColossalBuiltin pCVar1;

		pCVar1 = CustomLogicWallColossalBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_33: clean
	private BuiltinClassInstance c__CreateFactory_b__10_33(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicAlignEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_34: clean
	private BuiltinClassInstance c__CreateFactory_b__10_34(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicAngleUnitEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_35: clean
	private BuiltinClassInstance c__CreateFactory_b__10_35(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicAnnieAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_36: clean
	private BuiltinClassInstance c__CreateFactory_b__10_36(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicAspectRatioEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_37: clean
	private BuiltinClassInstance c__CreateFactory_b__10_37(Object[] args)
	{
		CustomLogicCameraModeEnum pCVar1;

		pCVar1 = CustomLogicCameraModeEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_38: clean
	private BuiltinClassInstance c__CreateFactory_b__10_38(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCharacterTypeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_39: clean
	private BuiltinClassInstance c__CreateFactory_b__10_39(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCollideModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_40: clean
	private BuiltinClassInstance c__CreateFactory_b__10_40(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCollideWithEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_41: clean
	private BuiltinClassInstance c__CreateFactory_b__10_41(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCollisionDetectionModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_42: clean
	private BuiltinClassInstance c__CreateFactory_b__10_42(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicDummyAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_43: clean
	private BuiltinClassInstance c__CreateFactory_b__10_43(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicEffectNameEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_44: clean
	private BuiltinClassInstance c__CreateFactory_b__10_44(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicErenAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_45: clean
	private BuiltinClassInstance c__CreateFactory_b__10_45(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicFlexDirectionEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_46: clean
	private BuiltinClassInstance c__CreateFactory_b__10_46(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicFontScaleModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_47: clean
	private BuiltinClassInstance c__CreateFactory_b__10_47(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicFontStyleEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_48: clean
	private BuiltinClassInstance c__CreateFactory_b__10_48(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicForceModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_49: clean
	private BuiltinClassInstance c__CreateFactory_b__10_49(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicGradientModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_50: clean
	private BuiltinClassInstance c__CreateFactory_b__10_50(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicHandStateEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_51: clean
	private BuiltinClassInstance c__CreateFactory_b__10_51(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicHorseAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_52: clean
	private BuiltinClassInstance c__CreateFactory_b__10_52(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicHumanAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_53: clean
	private BuiltinClassInstance c__CreateFactory_b__10_53(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicHumanParticleEffectEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_54: clean
	private BuiltinClassInstance c__CreateFactory_b__10_54(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicHumanSoundEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_55: clean
	private BuiltinClassInstance c__CreateFactory_b__10_55(Object[] args)
	{
		CustomLogicHumanStateEnum pCVar1;

		pCVar1 = CustomLogicHumanStateEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_56: clean
	private BuiltinClassInstance c__CreateFactory_b__10_56(Object[] args)
	{
		CustomLogicInputAnnieShifterEnum pCVar1;

		pCVar1 = CustomLogicInputAnnieShifterEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_57: clean
	private BuiltinClassInstance c__CreateFactory_b__10_57(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicInputCategoryEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_58: clean
	private BuiltinClassInstance c__CreateFactory_b__10_58(Object[] args)
	{
		CustomLogicInputErenShifterEnum pCVar1;

		pCVar1 = CustomLogicInputErenShifterEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_59: clean
	private BuiltinClassInstance c__CreateFactory_b__10_59(Object[] args)
	{
		CustomLogicInputGeneralEnum pCVar1;

		pCVar1 = CustomLogicInputGeneralEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_60: clean
	private BuiltinClassInstance c__CreateFactory_b__10_60(Object[] args)
	{
		CustomLogicInputHumanEnum pCVar1;

		pCVar1 = CustomLogicInputHumanEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_61: clean
	private BuiltinClassInstance c__CreateFactory_b__10_61(Object[] args)
	{
		CustomLogicInputInteractionEnum pCVar1;

		pCVar1 = CustomLogicInputInteractionEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_62: clean
	private BuiltinClassInstance c__CreateFactory_b__10_62(Object[] args)
	{
		CustomLogicInputTitanEnum pCVar1;

		pCVar1 = CustomLogicInputTitanEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_63: clean
	private BuiltinClassInstance c__CreateFactory_b__10_63(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicJustifyEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_64: clean
	private BuiltinClassInstance c__CreateFactory_b__10_64(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicLanguageEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_65: clean
	private BuiltinClassInstance c__CreateFactory_b__10_65(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicLineAlignmentEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_66: clean
	private BuiltinClassInstance c__CreateFactory_b__10_66(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicLineTextureModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_67: clean
	private BuiltinClassInstance c__CreateFactory_b__10_67(Object[] args)
	{
		CustomLogicLoadoutEnum pCVar1;

		pCVar1 = CustomLogicLoadoutEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_68: clean
	private BuiltinClassInstance c__CreateFactory_b__10_68(Object[] args)
	{
		CustomLogicOutlineModeEnum pCVar1;

		pCVar1 = CustomLogicOutlineModeEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_69: clean
	private BuiltinClassInstance c__CreateFactory_b__10_69(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicOverflowEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_70: clean
	private BuiltinClassInstance c__CreateFactory_b__10_70(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicPhysicMaterialCombineEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_71: clean
	private BuiltinClassInstance c__CreateFactory_b__10_71(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicPlayerStatusEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_72: clean
	private BuiltinClassInstance c__CreateFactory_b__10_72(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicProfileIconEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_73: clean
	private BuiltinClassInstance c__CreateFactory_b__10_73(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicProjectileNameEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_74: clean
	private BuiltinClassInstance c__CreateFactory_b__10_74(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicScaleModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_75: clean
	private BuiltinClassInstance c__CreateFactory_b__10_75(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicScrollElasticityEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_76: clean
	private BuiltinClassInstance c__CreateFactory_b__10_76(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicShadowCastingModeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_77: clean
	private BuiltinClassInstance c__CreateFactory_b__10_77(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicShifterSoundEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_78: clean
	private BuiltinClassInstance c__CreateFactory_b__10_78(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicShifterTypeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_79: clean
	private BuiltinClassInstance c__CreateFactory_b__10_79(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicSliderDirectionEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_80: clean
	private BuiltinClassInstance c__CreateFactory_b__10_80(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicSpecialEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_81: clean
	private BuiltinClassInstance c__CreateFactory_b__10_81(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicSteamStateEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_82: clean
	private BuiltinClassInstance c__CreateFactory_b__10_82(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicStunStateEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_83: clean
	private BuiltinClassInstance c__CreateFactory_b__10_83(Object[] args)
	{
		CustomLogicTSKillSoundEnum pCVar1;

		pCVar1 = CustomLogicTSKillSoundEnum.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_84: clean
	private BuiltinClassInstance c__CreateFactory_b__10_84(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTeamEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_85: clean
	private BuiltinClassInstance c__CreateFactory_b__10_85(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTextAlignEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_86: clean
	private BuiltinClassInstance c__CreateFactory_b__10_86(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTextOverflowEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_87: clean
	private BuiltinClassInstance c__CreateFactory_b__10_87(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTitanAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_88: clean
	private BuiltinClassInstance c__CreateFactory_b__10_88(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTitanDeathTypeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_89: clean
	private BuiltinClassInstance c__CreateFactory_b__10_89(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTitanSoundEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_90: clean
	private BuiltinClassInstance c__CreateFactory_b__10_90(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTitanTypeEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_91: clean
	private BuiltinClassInstance c__CreateFactory_b__10_91(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicUILabelEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_92: clean
	private BuiltinClassInstance c__CreateFactory_b__10_92(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicUnityComponentEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_93: clean
	private BuiltinClassInstance c__CreateFactory_b__10_93(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicWallColossalAnimationEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_94: clean
	private BuiltinClassInstance c__CreateFactory_b__10_94(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicWeaponEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_95: clean
	private BuiltinClassInstance c__CreateFactory_b__10_95(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicWrapEnum.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_96: clean
	private BuiltinClassInstance c__CreateFactory_b__10_96(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCameraBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_97: clean
	private BuiltinClassInstance c__CreateFactory_b__10_97(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCommandsBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_98: clean
	private BuiltinClassInstance c__CreateFactory_b__10_98(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicCutsceneBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_99: clean
	private BuiltinClassInstance c__CreateFactory_b__10_99(Object[] args)
	{
		CustomLogicExperienceScoreBuiltin pCVar1;

		pCVar1 = CustomLogicExperienceScoreBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_100: clean
	private BuiltinClassInstance c__CreateFactory_b__10_100(Object[] args)
	{
		CustomLogicGameBuiltin pCVar1;

		pCVar1 = CustomLogicGameBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_101: clean
	private BuiltinClassInstance c__CreateFactory_b__10_101(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicInputBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_102: clean
	private BuiltinClassInstance c__CreateFactory_b__10_102(Object[] args)
	{
		CustomLogicLocaleBuiltin pCVar1;

		pCVar1 = CustomLogicLocaleBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_103: clean
	private BuiltinClassInstance c__CreateFactory_b__10_103(Object[] args)
	{
		CustomLogicMapBuiltin pCVar1;

		pCVar1 = CustomLogicMapBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_104: clean
	private BuiltinClassInstance c__CreateFactory_b__10_104(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicNetworkBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_105: clean
	private BuiltinClassInstance c__CreateFactory_b__10_105(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicPersistentDataBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_106: clean
	private BuiltinClassInstance c__CreateFactory_b__10_106(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicPhysicsBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_107: clean
	private BuiltinClassInstance c__CreateFactory_b__10_107(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicRoomDataBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_108: clean
	private BuiltinClassInstance c__CreateFactory_b__10_108(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicServicesBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_109: clean
	private BuiltinClassInstance c__CreateFactory_b__10_109(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicTimeBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_110: clean
	private BuiltinClassInstance c__CreateFactory_b__10_110(Object[] args)
	{
		CustomLogicButtonBuiltin pCVar1;

		pCVar1 = CustomLogicButtonBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_111: clean
	private BuiltinClassInstance c__CreateFactory_b__10_111(Object[] args)
	{
		CustomLogicDropdownBuiltin pCVar1;

		pCVar1 = CustomLogicDropdownBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_112: clean
	private BuiltinClassInstance c__CreateFactory_b__10_112(Object[] args)
	{
		CustomLogicIconBuiltin pCVar1;

		pCVar1 = CustomLogicIconBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_113: clean
	private BuiltinClassInstance c__CreateFactory_b__10_113(Object[] args)
	{
		CustomLogicImageBuiltin pCVar1;

		pCVar1 = CustomLogicImageBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_114: clean
	private BuiltinClassInstance c__CreateFactory_b__10_114(Object[] args)
	{
		CustomLogicLabelBuiltin pCVar1;

		pCVar1 = CustomLogicLabelBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_115: clean
	private BuiltinClassInstance c__CreateFactory_b__10_115(Object[] args)
	{
		CustomLogicProgressBarBuiltin pCVar1;

		pCVar1 = CustomLogicProgressBarBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_116: clean
	private BuiltinClassInstance c__CreateFactory_b__10_116(Object[] args)
	{
		CustomLogicScrollViewBuiltin pCVar1;

		pCVar1 = CustomLogicScrollViewBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_117: clean
	private BuiltinClassInstance c__CreateFactory_b__10_117(Object[] args)
	{
		CustomLogicSliderBuiltin pCVar1;

		pCVar1 = CustomLogicSliderBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_118: clean
	private BuiltinClassInstance c__CreateFactory_b__10_118(Object[] args)
	{
		CustomLogicTextFieldBuiltin pCVar1;

		pCVar1 = CustomLogicTextFieldBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_119: clean
	private BuiltinClassInstance c__CreateFactory_b__10_119(Object[] args)
	{
		CustomLogicToggleBuiltin pCVar1;

		pCVar1 = CustomLogicToggleBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_120: clean
	private BuiltinClassInstance c__CreateFactory_b__10_120(Object[] args)
	{
		CustomLogicUIBuiltin pCVar1;

		pCVar1 = CustomLogicUIBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_121: clean
	private BuiltinClassInstance c__CreateFactory_b__10_121(Object[] args)
	{
		CustomLogicVisualElementBuiltin pCVar1;

		pCVar1 = CustomLogicVisualElementBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_122: clean
	private BuiltinClassInstance c__CreateFactory_b__10_122(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicConvertBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_123: clean
	private BuiltinClassInstance c__CreateFactory_b__10_123(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicJsonBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_124: clean
	private BuiltinClassInstance c__CreateFactory_b__10_124(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicMathBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_125: clean
	private BuiltinClassInstance c__CreateFactory_b__10_125(Object[] args)
	{
		CustomLogicRandomBuiltin pCVar1;

		pCVar1 = CustomLogicRandomBuiltin.Factory.CreateInstance(args);
		return (BuiltinClassInstance)pCVar1;
	}

	// CustomLogic.CustomLogicBuiltinTypes.<>c$$<CreateFactory>b__10_126: clean
	private BuiltinClassInstance c__CreateFactory_b__10_126(Object[] args)
	{
		BuiltinClassInstance pCVar1;

		pCVar1 = (BuiltinClassInstance)CustomLogicStringBuiltin.Factory.CreateInstance(args);
		return pCVar1;
	}
}
