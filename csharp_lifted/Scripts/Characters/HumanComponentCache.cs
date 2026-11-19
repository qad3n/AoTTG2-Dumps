// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006C1")]
internal class HumanComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001F67")]
	[FieldOffset(Offset = "0x38")]
	public Transform HandL;

	[Token(Token = "0x4001F68")]
	[FieldOffset(Offset = "0x40")]
	public Transform HandR;

	[Token(Token = "0x4001F69")]
	[FieldOffset(Offset = "0x48")]
	public Transform Head;

	[Token(Token = "0x4001F6A")]
	[FieldOffset(Offset = "0x50")]
	public Transform Neck;

	[Token(Token = "0x4001F6B")]
	[FieldOffset(Offset = "0x58")]
	public Transform Spine;

	[Token(Token = "0x4001F6C")]
	[FieldOffset(Offset = "0x60")]
	public Transform Chest;

	[Token(Token = "0x4001F6D")]
	[FieldOffset(Offset = "0x68")]
	public Transform ForearmL;

	[Token(Token = "0x4001F6E")]
	[FieldOffset(Offset = "0x70")]
	public Transform ForearmR;

	[Token(Token = "0x4001F6F")]
	[FieldOffset(Offset = "0x78")]
	public Transform UpperarmL;

	[Token(Token = "0x4001F70")]
	[FieldOffset(Offset = "0x80")]
	public Transform UpperarmR;

	[Token(Token = "0x4001F71")]
	[FieldOffset(Offset = "0x88")]
	public ParticleSystem Sparks;

	[Token(Token = "0x4001F72")]
	[FieldOffset(Offset = "0x90")]
	public ParticleSystem Smoke;

	[Token(Token = "0x4001F73")]
	[FieldOffset(Offset = "0x98")]
	public ParticleSystem Wind;

	[Token(Token = "0x4001F74")]
	[FieldOffset(Offset = "0xA0")]
	public Transform WindTransform;

	[Token(Token = "0x4001F75")]
	[FieldOffset(Offset = "0xA8")]
	public Transform HookLeftAnchorDefault;

	[Token(Token = "0x4001F76")]
	[FieldOffset(Offset = "0xB0")]
	public Transform HookRightAnchorDefault;

	[Token(Token = "0x4001F77")]
	[FieldOffset(Offset = "0xB8")]
	public Transform HookLeftAnchorGun;

	[Token(Token = "0x4001F78")]
	[FieldOffset(Offset = "0xC0")]
	public Transform HookRightAnchorGun;

	[Token(Token = "0x4001F79")]
	[FieldOffset(Offset = "0xC8")]
	public BaseHitbox BladeHitLeft;

	[Token(Token = "0x4001F7A")]
	[FieldOffset(Offset = "0xD0")]
	public BaseHitbox BladeHitRight;

	[Token(Token = "0x4001F7B")]
	[FieldOffset(Offset = "0xD8")]
	public BaseHitbox AHSSHit;

	[Token(Token = "0x4001F7C")]
	[FieldOffset(Offset = "0xE0")]
	public BaseHitbox APGHit;

	[Token(Token = "0x4001F7D")]
	[FieldOffset(Offset = "0xE8")]
	public Transform GroundLeft;

	[Token(Token = "0x4001F7E")]
	[FieldOffset(Offset = "0xF0")]
	public Transform GroundRight;

	[Token(Token = "0x4001F7F")]
	[FieldOffset(Offset = "0xF8")]
	public Transform Buff1;

	[Token(Token = "0x4001F80")]
	[FieldOffset(Offset = "0x100")]
	public Transform Buff2;

	[Token(Token = "0x4001F81")]
	[FieldOffset(Offset = "0x108")]
	public Transform Fire1;

	[Token(Token = "0x60041DD")]
	[Address(RVA = "0x5AE6A00", Offset = "0x5AE5A00", VA = "0x5AE6A00")]
	public HumanComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/HumanComponentCache.c (Characters.HumanComponentCache$$.ctor): 10 lines keep C-only constructs
		Transform* targetAddress;
		Transform* targetAddress_00;
		ParticleSystem* targetAddress_01;
		bool bVar1;
		Transform pUVar2;
		ParticleSystem pUVar3;
		BaseCharacter owner_00;
		GameObject pUVar4;
		BaseHitbox pCVar5;

		base(owner);
		pUVar2 = this.Transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.Find("Armature/Core/Controller_Body/hip/spine");
			this.Spine = pUVar2;
			pUVar2 = this.Spine;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.Find("chest");
				this.Chest = pUVar2;
				pUVar2 = this.Transform;
				if (pUVar2 != null) {
					pUVar2 = pUVar2.Find("GroundLeft");
					this.GroundLeft = pUVar2;
					pUVar2 = this.Transform;
					if (pUVar2 != null) {
						pUVar2 = pUVar2.Find("GroundRight");
						this.GroundRight = pUVar2;
						pUVar2 = this.Chest;
						if (pUVar2 != null) {
							pUVar2 = pUVar2.Find("neck");
							this.Neck = pUVar2;
							pUVar2 = this.Neck;
							if (pUVar2 != null) {
								pUVar2 = pUVar2.Find("head");
								this.Head = pUVar2;
								pUVar2 = this.Chest;
								if (pUVar2 != null) {
									pUVar2 = pUVar2.Find("shoulder_L/upper_arm_L");
									this.UpperarmL = pUVar2;
									pUVar2 = this.Chest;
									if (pUVar2 != null) {
										pUVar2 = pUVar2.Find("shoulder_R/upper_arm_R");
										this.UpperarmR = pUVar2;
										pUVar2 = this.UpperarmL;
										if (pUVar2 != null) {
											pUVar2 = pUVar2.Find("forearm_L");
											this.ForearmL = pUVar2;
											pUVar2 = this.UpperarmR;
											if (pUVar2 != null) {
												pUVar2 = pUVar2.Find("forearm_R");
												this.ForearmR = pUVar2;
												pUVar2 = this.ForearmL;
												if (pUVar2 != null) {
													pUVar2 = pUVar2.Find("hand_L");
													targetAddress = &this.HandL;
													this.HandL = pUVar2;
													pUVar2 = this.ForearmR;
													if (pUVar2 != null) {
														pUVar2 = pUVar2.Find("hand_R") ;
														targetAddress_00 = &this.HandR;
														this.HandR = pUVar2;
														pUVar2 = this.Transform;
														if (pUVar2 != null) {
															pUVar2 = pUVar2.Find("slideSparks");
															if (pUVar2 != null) {
																pUVar3 = pUVar2.GetComponent<ParticleSystem>();
																targetAddress_01 = &this.Sparks;
																this.Sparks = pUVar3;
																pUVar2 = this.Transform;
																if (pUVar2 != null) {
																	pUVar2 = pUVar2.Find("3dmg_smoke");
																	if (pUVar2 != null) {
																		pUVar3 = pUVar2.GetComponent<ParticleSystem>();
																		this.Smoke = pUVar3;
																		pUVar2 = this.Transform;
																		if (pUVar2 != null) {
																			pUVar2 = pUVar2.Find("buff1");
																			this.Buff1 = pUVar2;
																			pUVar2 = this.Transform;
																			if (pUVar2 != null) {
																				pUVar2 = pUVar2.Find("buff2");
																				this.Buff2 = pUVar2;
																				pUVar2 = this.Transform;
																				if (pUVar2 != null) {
																					pUVar2 = pUVar2.Find("fire1");
																					this.Fire1 = pUVar2;
																					pUVar3 = this.Smoke;
																					if (pUVar3 != null) {
																						pUVar3.Stop();
																						pUVar3 = *targetAddress_01;
																						if (pUVar3 != null) {
																							pUVar3.Stop() ;
																							pUVar2 = this.Transform;
																							if (pUVar2 != null) {
																								pUVar2 = pUVar2.Find("speedFX");
																								if (pUVar2 != null) {
																									pUVar3 = pUVar2.GetComponentInChildren<ParticleSystem>();
																									this.Wind = pUVar3;
																									pUVar3 = this.Wind;
																									if (pUVar3 != null) {
																										pUVar3.Stop();
																										pUVar2 = this.Transform;
																										if (pUVar2 != null) {
																											pUVar2 = pUVar2.Find("speedFX");
																											this.WindTransform = pUVar2;
																											Il2CppCodeGenWriteBarrier(&this.WindTransform) ;
																											pUVar2 = this.Chest;
																											if (pUVar2 != null) {
																												pUVar2 = pUVar2.Find("hookRefL1");
																												this.HookLeftAnchorDefault = pUVar2;
																												pUVar2 = this.Chest;
																												if (pUVar2 != null) {
																													pUVar2 = pUVar2.Find("hookRefR1");
																													this.HookRightAnchorDefault = pUVar2;
																													pUVar2 = this.HandL;
																													if (pUVar2 != null) {
																														pUVar2 = pUVar2.Find("hookRef");
																														this.HookLeftAnchorGun = pUVar2;
																														pUVar2 = this.HandR;
																														if (pUVar2 != null) {
																															pUVar2 = pUVar2.Find("hookRef");
																															this.HookRightAnchorGun = pUVar2;
																															if (owner != null) {
																																owner_00 = owner.GetComponent<BaseCharacter>();
																												if ((typeof(Object)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar1 = ((Object)owner_00 != null);
																												if (!bVar1) {
																													return;
																												}
																												pUVar2 = *targetAddress;
																												if (pUVar2 != null) {
																													pUVar2 = pUVar2.Find("checkBox");
																													if (pUVar2 != null) {
																														pUVar4 = pUVar2.gameObject;
																														pCVar5 = BaseHitbox.Create(owner_00, pUVar4, null);
																														this.BladeHitLeft = pCVar5;
																														pCVar5 = this.BladeHitLeft;
																														if (pCVar5 != null) {
																															pCVar5.TwoFixedUpdates = true;
																															pUVar2 = *targetAddress_00;
																															if (pUVar2 != null) {
																																pUVar2 = pUVar2.Find("checkBox");
																												if (pUVar2 != null) {
																													pUVar4 = pUVar2.gameObject;
																													pCVar5 = BaseHitbox.Create(owner_00, pUVar4, null);
																													this.BladeHitRight = pCVar5;
																													pCVar5 = this.BladeHitRight;
																													if (pCVar5 != null) {
																														pCVar5.TwoFixedUpdates = true;
																														this.CreateAHSSHitbox(owner_00);
																														this.CreateAPGHitbox(owner_00);
																														this.LoadAudio("Human/Prefabs/HumanSounds", this.Transform);
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
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041DE")]
	[Address(RVA = "0x5AF50F0", Offset = "0x5AF40F0", VA = "0x5AF50F0")]
	private void CreateAHSSHitbox(BaseCharacter human)
	{
		// Lifted from source/cpp/Characters/HumanComponentCache.c (Characters.HumanComponentCache$$CreateAHSSHitbox): 6 lines keep C-only constructs
		byte[] auVar1 = new byte[12];
		GameObject __this_00;
		Rigidbody __this_01;
		CapsuleCollider __this_02;
		JSONNode pSVar2;
		long plVar3;
		BaseHitbox pCVar4;
		float fVar5;

		__this_00 = new GameObject();
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<Rigidbody>();
			if (__this_01 != null) {
				__this_01.useGravity = false;
				__this_01.isKinematic = true;
				__this_00.layer = PhysicsLayer.Hitbox;
				__this_02 = __this_00.AddComponent<CapsuleCollider>();
				if (__this_02 != null) {
					__this_02.direction = 2;
					__this_02.isTrigger = true;
					pSVar2 = CharacterData.HumanWeaponInfo;
					if (pSVar2 != null) {
						pSVar2 = pSVar2.get_Item("AHSS");
						if (pSVar2 != null) {
							plVar3 = (long)pSVar2.get_Item("Radius");
							if (plVar3 != null) {
								fVar5 = (float)(**(code*)(*plVar3 + 0x388))(plVar3);
								__this_02.radius = fVar5;
								plVar3 = (long)pSVar2.get_Item("Range");
								if (plVar3 != null) {
									fVar5 = (float)(**(code*)(*plVar3 + 0x388))(plVar3);
									__this_02.height = fVar5;
									fVar5 = __this_02.height;
									auVar1._4_8_ = 0;
									auVar1._0_4_ = fVar5 * 0.5 + 0.5;
									__this_02.center = (Vector3)(auVar1 << 0x40);
									pCVar4 = BaseHitbox.Create(human, __this_00, null);
									this.AHSSHit = pCVar4;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041DF")]
	[Address(RVA = "0x5AF5370", Offset = "0x5AF4370", VA = "0x5AF5370")]
	private void CreateAPGHitbox(BaseCharacter human)
	{
		// Lifted from source/cpp/Characters/HumanComponentCache.c (Characters.HumanComponentCache$$CreateAPGHitbox): 5 lines keep C-only constructs
		byte[] auVar1 = new byte[12];
		GameObject __this_00;
		Rigidbody __this_01;
		CapsuleCollider __this_02;
		JSONNode pSVar2;
		long plVar3;
		BaseHitbox pCVar4;
		float fVar5;

		__this_00 = new GameObject();
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<Rigidbody>();
			if (__this_01 != null) {
				__this_01.useGravity = false;
				__this_01.isKinematic = true;
				__this_00.layer = PhysicsLayer.Hitbox;
				__this_02 = __this_00.AddComponent<CapsuleCollider>();
				if (__this_02 != null) {
					__this_02.direction = 2;
					__this_02.isTrigger = true;
					pSVar2 = CharacterData.HumanWeaponInfo;
					if (pSVar2 != null) {
						pSVar2 = pSVar2.get_Item("APG");
						if (pSVar2 != null) {
							plVar3 = (long)pSVar2.get_Item("Radius");
							if (plVar3 != null) {
								fVar5 = (float)(**(code*)(*plVar3 + 0x388))(plVar3);
								__this_02.radius = fVar5;
								__this_02.height = 10.0;
								fVar5 = __this_02.height;
								auVar1._4_8_ = 0;
								auVar1._0_4_ = fVar5 * 0.5 + 0.5;
								__this_02.center = (Vector3)(auVar1 << 0x40);
								pCVar4 = BaseHitbox.Create(human, __this_00, null);
								this.APGHit = pCVar4;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
