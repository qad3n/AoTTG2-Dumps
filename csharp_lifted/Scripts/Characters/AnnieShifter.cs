// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnnieShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AnnieShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using Utility;

namespace Characters;

[Token(Token = "0x20006F2")]
internal class AnnieShifter : BaseShifter
{
	[Token(Token = "0x40020C5")]
	[FieldOffset(Offset = "0x2D8")]
	protected AnnieComponentCache AnnieCache;

	[Token(Token = "0x40020C6")]
	[FieldOffset(Offset = "0x2E0")]
	protected AnnieAnimations AnnieAnimations;

	[Token(Token = "0x17000B88")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6004326")]
		[Address(RVA = "0x5B14190", Offset = "0x5B13190", VA = "0x5B14190", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$get_EmoteActions): 8 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			String[] pSVar3;
			String pSVar5;
			List<string> __this_00;

			__this_00 = new List<string>();
			pSVar5 = "Salute";
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					pSVar5 = "Roar";
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							__this_00.AddWithResize((object)pSVar5);
						}
						pSVar5 = "Taunt";
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_00._items;
						if (pSVar3 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this_00._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar5;
							}
							else {
								__this_00.AddWithResize((object)pSVar5);
							}
							pSVar5 = "Wave";
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this_00._items;
							if (pSVar3 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar3.Length) {
									__this_00._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar5;
								}
								else {
									__this_00.AddWithResize((object)pSVar5);
								}
								return __this_00;
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000B89")]
	protected override bool BasicAttacksStunOnly
	{
		[Token(Token = "0x600432E")]
		[Address(RVA = "0x5B147F0", Offset = "0x5B137F0", VA = "0x5B147F0", Slot = "142")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$get_BasicAttacksStunOnly): clean
			return true;
		}
	}

	[Token(Token = "0x6004327")]
	[Address(RVA = "0x5B143A0", Offset = "0x5B133A0", VA = "0x5B143A0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$CreateCache): clean
		GameObject owner;
		AnnieComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new AnnieComponentCache(owner);
		this.AnnieCache = __this_00;
		this.CreateCache((BaseComponentCache)this.AnnieCache);
		return;
	}

	[Token(Token = "0x6004328")]
	[Address(RVA = "0x5B14420", Offset = "0x5B13420", VA = "0x5B14420", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$CreateAnimations): clean
		AnnieAnimations __this_00;

		__this_00 = new AnnieAnimations();
		this.AnnieAnimations = __this_00;
		this.CreateAnimations((BaseTitanAnimations)this.AnnieAnimations);
		return;
	}

	[Token(Token = "0x6004329")]
	[Address(RVA = "0x5B14490", Offset = "0x5B13490", VA = "0x5B14490", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$Emote): clean
		AnnieAnimations pCVar1;
		bool bVar2;
		IEnumerator routine;
		String a;

		bVar2 = this.CanEmote();
		if (bVar2) {
			a = (String)**(ulong*)(g_data_07556758 + 0xb8);
			bVar2 = (emote == "Salute");
			if (bVar2) {
				pCVar1 = this.AnnieAnimations;
				if (pCVar1 == null) {
	label_05c1466b: ;
					throw new NullReferenceException();
				}
				a = pCVar1.EmoteSalute;
			}
			else {
				bVar2 = (emote == "Roar");
				if (bVar2) {
					pCVar1 = this.AnnieAnimations;
					if (pCVar1 == null) goto label_05c1466b;
					a = pCVar1.EmoteRoar;
					routine = this.WaitAndPlaySound(ShifterSounds.AnnieRoar, 0.1);
					this.StartCoroutine(routine);
				}
				else {
					bVar2 = (emote == "Taunt");
					if (bVar2) {
						pCVar1 = this.AnnieAnimations;
						if (pCVar1 == null) goto label_05c1466b;
						a = pCVar1.EmoteTaunt;
					}
					else {
						bVar2 = (emote == "Wave");
						if (bVar2) {
							pCVar1 = this.AnnieAnimations;
							if (pCVar1 == null) goto label_05c1466b;
							a = pCVar1.EmoteWave;
						}
					}
				}
			}
			bVar2 = (a != "");
			if (bVar2) {
				this.StateAction(8, a, 0.1, true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600432A")]
	[Address(RVA = "0x5B14670", Offset = "0x5B13670", VA = "0x5B14670", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$CreateCustomSkinLoader): clean
		GameObject __this_00;
		BaseCustomSkinLoader pCVar1;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = (BaseCustomSkinLoader)__this_00.AddComponent<AnnieCustomSkinLoader>();
		return pCVar1;
	}

	[Token(Token = "0x600432B")]
	[Address(RVA = "0x5B146C0", Offset = "0x5B136C0", VA = "0x5B146C0", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$GetSkinURL): clean
		StringSetting pSVar1;

		if ((set == null) ||(pSVar1 = set.Annie, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	[Token(Token = "0x600432C")]
	[Address(RVA = "0x5B14700", Offset = "0x5B13700", VA = "0x5B14700", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$GetRootMotionAnimations): clean
		AnnieAnimations pCVar1;
		Dictionary<string, float> __this_00;

		__this_00 = new Dictionary<string, float>();
		pCVar1 = this.AnnieAnimations;
		if ((pCVar1 == null) ||(__this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)pCVar1.AttackCombo, 0.95);
		return __this_00;
	}

	[Token(Token = "0x600432D")]
	[Address(RVA = "0x5B147A0", Offset = "0x5B137A0", VA = "0x5B147A0", Slot = "140")]
	protected override bool IsComboAttack()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$IsComboAttack): clean
		AnnieAnimations pCVar1;
		bool bVar2;

		pCVar1 = this.AnnieAnimations;
		if (pCVar1 != null) {
			bVar2 = (this._currentAttackAnimation == pCVar1.AttackCombo);
			if (bVar2) {
				return true;
			}
			pCVar1 = this.AnnieAnimations;
			if (pCVar1 != null) {
				bVar2 = (this._currentAttackAnimation == pCVar1.AttackComboBlind);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600432F")]
	[Address(RVA = "0x5B14800", Offset = "0x5B13800", VA = "0x5B14800", Slot = "187")]
	protected override void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$UpdateAttack): clean
		int iVar1;
		AnnieAnimations pCVar2;
		AnnieComponentCache pCVar3;
		BaseTitanComponentCache pCVar4;
		bool bVar5;
		Transform pUVar6;
		BaseHitbox pCVar8;
		String pSVar9;
		float fVar11;
		float fVar12;
		Quaternion rotation;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		float local_38;

		fVar11 = this.GetAnimationTime();
		pCVar2 = this.AnnieAnimations;
		if (pCVar2 == null) goto label_05c15501;
		bVar5 = (this._currentAttackAnimation == pCVar2.AttackCombo);
		if (bVar5) {
			iVar1 = this._currentAttackStage;
			if ((fVar11 <= 0.155) || (iVar1 != 0)) {
				if ((fVar11 <= 0.32) || (iVar1 != 1)) {
					if (fVar11 <= 0.59) {
						return;
					}
					if (iVar1 != 2) {
						return;
					}
					this._currentAttackStage = 3;
					pCVar3 = this.AnnieCache;
					if (pCVar3 == null) goto label_05c15501;
					pCVar8 = pCVar3.FootRHitbox;
					fVar11 = this.GetHitboxTime(0.05);
	joined_r0x05c14c7c: ;
					if (pCVar8 != null) {
						pCVar8.Activate(0.0, fVar11);
						pSVar9 = TitanSounds.Swing3;
						goto label_05c14c13;
					}
					goto label_05c15501;
				}
				this._currentAttackStage = 2;
				pCVar3 = this.AnnieCache;
				if (pCVar3 == null) goto label_05c15501;
				pCVar8 = pCVar3.FootLHitbox;
				fVar11 = this.GetHitboxTime(0.06);
	joined_r0x05c14afa: ;
				if (pCVar8 != null) {
					pCVar8.Activate(0.0, fVar11);
					pSVar9 = TitanSounds.Swing2;
					goto label_05c14c13;
				}
				goto label_05c15501;
			}
			this._currentAttackStage = 1;
			pCVar3 = this.AnnieCache;
			if (pCVar3 == null) goto label_05c15501;
			pCVar8 = pCVar3.FootRHitbox;
			fVar11 = 0.07;
		}
		else {
			pCVar2 = this.AnnieAnimations;
			if (pCVar2 == null) goto label_05c15501;
			bVar5 = (this._currentAttackAnimation == pCVar2.AttackComboBlind);
			if (bVar5) {
				iVar1 = this._currentAttackStage;
				if ((fVar11 <= 0.222) || (iVar1 != 0)) {
					if ((fVar11 <= 0.386) || (iVar1 != 1)) {
						if (fVar11 <= 0.612) {
							return;
						}
						if (iVar1 != 2) {
							return;
						}
						this._currentAttackStage = 3;
						pCVar3 = this.AnnieCache;
						if (pCVar3 == null) goto label_05c15501;
						pCVar8 = pCVar3.FootRHitbox;
						fVar11 = this.GetHitboxTime(0.04);
						goto joined_r0x05c14c7c;
					}
					this._currentAttackStage = 2;
					pCVar3 = this.AnnieCache;
					if (pCVar3 == null) goto label_05c15501;
					pCVar8 = pCVar3.HandRHitbox;
					fVar11 = this.GetHitboxTime(0.07);
					goto joined_r0x05c14afa;
				}
				this._currentAttackStage = 1;
				pCVar3 = this.AnnieCache;
				if (pCVar3 == null) goto label_05c15501;
				pCVar8 = pCVar3.HandRHitbox;
				fVar11 = 0.04;
			}
			else {
				pCVar2 = this.AnnieAnimations;
				if (pCVar2 == null) goto label_05c15501;
				bVar5 = (this._currentAttackAnimation == pCVar2.AttackKick);
				if (bVar5) {
					if (fVar11 <= 0.395) {
						return;
					}
					if (this._currentAttackStage != 0) {
						return;
					}
					this._currentAttackStage = 1;
					pCVar3 = this.AnnieCache;
					if (pCVar3 == null) goto label_05c15501;
					pCVar8 = pCVar3.FootRHitbox;
					fVar11 = 0.12;
				}
				else {
					pCVar2 = this.AnnieAnimations;
					if (pCVar2 == null) goto label_05c15501;
					bVar5 = (this._currentAttackAnimation == pCVar2.AttackSwing);
					if (bVar5) {
						if (fVar11 <= 0.47) {
							return;
						}
	label_05c14b80: ;
						if (this._currentAttackStage != 0) {
							return;
						}
						this._currentAttackStage = 1;
						pCVar3 = this.AnnieCache;
						if (pCVar3 == null) goto label_05c15501;
						pCVar8 = pCVar3.HandRHitbox;
	label_05c14bb0: ;
						fVar11 = 0.09;
					}
					else {
						pCVar2 = this.AnnieAnimations;
						if (pCVar2 == null) goto label_05c15501;
						bVar5 = (this._currentAttackAnimation == pCVar2.AttackStomp);
						if (bVar5) {
							iVar1 = this._currentAttackStage;
							if ((fVar11 <= 0.24) || (iVar1 != 0)) {
								if (fVar11 <= 0.33) {
									return;
								}
								if (iVar1 != 1) {
									return;
								}
								pCVar4 = this.BaseTitanCache;
								if (((pCVar4 != null) &&(pCVar8 = pCVar4.FootLHitbox, pCVar8 != null)) &&(pUVar6 = pCVar8.transform, pUVar6 != null)) {
									UVar13 = pUVar6.position;
									pCVar4 = this.BaseTitanCache;
									if ((pCVar4 != null) &&(pUVar6 = pCVar4.Transform, pUVar6 != null)) {
										UVar14 = pUVar6.position;
										pCVar4 = this.BaseTitanCache;
										if ((pCVar4 != null) &&(pUVar6 = pCVar4.Transform, pUVar6 != null)) {
											local_38 = UVar13.x;
											pSVar9 = EffectPrefabs.Boom5;
											rotation = pUVar6.rotation;
											fVar11 = this.Size;
											fVar12 = this.get_SizeMultiplier();
											UVar13.x = local_38;
											UVar13.y = UVar14.y;
											EffectSpawner.Spawn(pSVar9, UVar13, rotation, fVar11 * fVar12, true, null);
											UVar15.z = UVar13.z;
											UVar15.x = local_38;
											UVar15.y = UVar14.y;
											this.SpawnShatter(UVar15);
											this._currentAttackStage = 2;
											return;
										}
									}
								}
								goto label_05c15501;
							}
							this._currentAttackStage = 1;
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.FootLHitbox;
							fVar11 = 0.09;
	label_05c15035: ;
							fVar11 = this.GetHitboxTime(fVar11);
							if (pCVar8 != null) {
								pCVar8.Activate(0.0, fVar11);
								return;
							}
							goto label_05c15501;
						}
						pCVar2 = this.AnnieAnimations;
						if (pCVar2 == null) goto label_05c15501;
						bVar5 = (this._currentAttackAnimation == pCVar2.AttackHead);
						if (bVar5) {
							if (fVar11 <= 0.26) {
								return;
							}
							if (this._currentAttackStage != 0) {
								return;
							}
							this._currentAttackStage = 1;
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.HandLHitbox;
							fVar11 = this.GetHitboxTime(0.08);
							if (pCVar8 == null) goto label_05c15501;
							pCVar8.Activate(0.0, fVar11);
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.HandRHitbox;
							fVar11 = 0.08;
							goto label_05c14bc2;
						}
						pCVar2 = this.AnnieAnimations;
						if (pCVar2 == null) goto label_05c15501;
						bVar5 = (this._currentAttackAnimation == pCVar2.AttackBite);
						if (bVar5) {
							if (fVar11 <= 0.27) {
								return;
							}
							if (this._currentAttackStage != 0) {
								return;
							}
							this._currentAttackStage = 1;
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.MouthHitbox;
							fVar11 = 0.12;
							goto label_05c15035;
						}
						pCVar2 = this.AnnieAnimations;
						if (pCVar2 == null) goto label_05c15501;
						bVar5 = (this._currentAttackAnimation == pCVar2.AttackBrushBack);
						if (bVar5) {
							if (fVar11 <= 0.41) {
								return;
							}
	label_05c150dd: ;
							if (this._currentAttackStage != 0) {
								return;
							}
							this._currentAttackStage = 1;
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.HandRHitbox;
						}
						else {
							pCVar2 = this.AnnieAnimations;
							if (pCVar2 == null) goto label_05c15501;
							bVar5 = (this._currentAttackAnimation == pCVar2.AttackBrushFrontL);
							if (bVar5) {
								if (fVar11 <= 0.45) {
									return;
								}
								goto label_05c150dd;
							}
							pCVar2 = this.AnnieAnimations;
							if (pCVar2 == null) goto label_05c15501;
							bVar5 = (this._currentAttackAnimation == pCVar2.AttackBrushFrontR);
							if (!bVar5) {
								pCVar2 = this.AnnieAnimations;
								if (pCVar2 == null) goto label_05c15501;
								bVar5 = (this._currentAttackAnimation == pCVar2.AttackBrushHeadL);
								if (bVar5) {
									if (fVar11 <= 0.42) {
										return;
									}
									if (this._currentAttackStage != 0) {
										return;
									}
									this._currentAttackStage = 1;
									pCVar3 = this.AnnieCache;
									if (pCVar3 == null) goto label_05c15501;
									pCVar8 = pCVar3.HandLHitbox;
									goto label_05c14bb0;
								}
								pCVar2 = this.AnnieAnimations;
								if (pCVar2 == null) goto label_05c15501;
								bVar5 = (this._currentAttackAnimation == pCVar2.AttackBrushHeadR);
								if (bVar5) {
									if (fVar11 <= 0.42) {
										return;
									}
									goto label_05c14b80;
								}
								pCVar2 = this.AnnieAnimations;
								if (pCVar2 == null) goto label_05c15501;
								bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabBottomLeft);
								if (bVar5) {
									if (fVar11 <= 0.31) {
										return;
									}
									if (this._currentAttackStage != 0) {
										return;
									}
									this._currentAttackStage = 1;
									pCVar3 = this.AnnieCache;
									if (pCVar3 == null) goto label_05c15501;
									pCVar8 = pCVar3.HandRHitbox;
								}
								else {
									pCVar2 = this.AnnieAnimations;
									if (pCVar2 == null) goto label_05c15501;
									bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabBottomRight);
									if (!bVar5) {
										pCVar2 = this.AnnieAnimations;
										if (pCVar2 == null) goto label_05c15501;
										bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabMidLeft);
										if (bVar5) {
											if (fVar11 <= 0.31) {
												return;
											}
	label_05c1535c: ;
											if (this._currentAttackStage != 0) {
												return;
											}
											this._currentAttackStage = 1;
											pCVar3 = this.AnnieCache;
											if (pCVar3 == null) goto label_05c15501;
											pCVar8 = pCVar3.HandRHitbox;
										}
										else {
											pCVar2 = this.AnnieAnimations;
											if (pCVar2 == null) goto label_05c15501;
											bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabMidRight);
											if (bVar5) {
												if (fVar11 <= 0.31) {
													return;
												}
											}
											else {
												pCVar2 = this.AnnieAnimations;
												if (pCVar2 == null) goto label_05c15501;
												bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabUp);
												if (bVar5) {
													if (fVar11 <= 0.27) {
														return;
													}
													if (this._currentAttackStage != 0) {
														return;
													}
													this._currentAttackStage = 1;
													pCVar3 = this.AnnieCache;
													if (pCVar3 == null) goto label_05c15501;
													pCVar8 = pCVar3.HandLHitbox;
													fVar11 = 0.1;
													goto label_05c15035;
												}
												pCVar2 = this.AnnieAnimations;
												if (pCVar2 == null) goto label_05c15501;
												bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabUpLeft);
												if (!bVar5) {
													pCVar2 = this.AnnieAnimations;
													if (pCVar2 == null) goto label_05c15501;
													bVar5 = (this._currentAttackAnimation == pCVar2.AttackGrabUpRight);
													if (!bVar5) {
														return;
													}
													if (fVar11 <= 0.28) {
														return;
													}
													goto label_05c1535c;
												}
												if (fVar11 <= 0.28) {
													return;
												}
											}
											if (this._currentAttackStage != 0) {
												return;
											}
											this._currentAttackStage = 1;
											pCVar3 = this.AnnieCache;
											if (pCVar3 == null) goto label_05c15501;
											pCVar8 = pCVar3.HandLHitbox;
										}
										fVar11 = 0.05;
										goto label_05c15035;
									}
									if (fVar11 <= 0.31) {
										return;
									}
									if (this._currentAttackStage != 0) {
										return;
									}
									this._currentAttackStage = 1;
									pCVar3 = this.AnnieCache;
									if (pCVar3 == null) goto label_05c15501;
									pCVar8 = pCVar3.HandLHitbox;
								}
								fVar11 = 0.04;
								goto label_05c15035;
							}
							if (fVar11 <= 0.45) {
								return;
							}
							if (this._currentAttackStage != 0) {
								return;
							}
							this._currentAttackStage = 1;
							pCVar3 = this.AnnieCache;
							if (pCVar3 == null) goto label_05c15501;
							pCVar8 = pCVar3.HandLHitbox;
						}
						fVar11 = 0.18;
					}
				}
			}
		}
	label_05c14bc2: ;
		fVar11 = this.GetHitboxTime(fVar11);
		if (pCVar8 != null) {
			pCVar8.Activate(0.0, fVar11);
			pSVar9 = TitanSounds.Swing1;
	label_05c14c13: ;
			this.PlaySound(pSVar9);
			return;
		}
	label_05c15501: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004330")]
	[Address(RVA = "0x5B15510", Offset = "0x5B14510", VA = "0x5B15510", Slot = "196")]
	protected override void DamagedGrunt(float chance = 1f)
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$DamagedGrunt): clean
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.TitanVocalEffect, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar2._value != false) {
			bVar3 = RandomGen.Roll(chance);
			if (bVar3) {
				this.PlaySound(ShifterSounds.AnnieHurt);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004331")]
	[Address(RVA = "0x5B155E0", Offset = "0x5B145E0", VA = "0x5B155E0", Slot = "168")]
	public override void Blind()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$Blind): clean
		AnnieAnimations pCVar1;
		bool bVar2;
		float fVar3;

		pCVar1 = this.AnnieAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = (this._currentAttackAnimation != pCVar1.AttackComboBlind);
		if ((bVar2) && (this._disableCooldownLeft <= 0.0)) {
			this.DamagedGrunt(1.0);
			this.Attack("AttackComboBlind");
			fVar3 = this.get_DisableCooldown();
			this._disableCooldownLeft = fVar3 + 2.0;
		}
		return;
	}

	[Token(Token = "0x6004332")]
	[Address(RVA = "0x5B15690", Offset = "0x5B14690", VA = "0x5B15690")]
	public AnnieShifter()
	{
		// Lifted from source/cpp/Characters/AnnieShifter.c (Characters.AnnieShifter$$.ctor): clean
		this._needRoar = true;
		this.DeathAnimationLength = 2.0;
		base();
		return;
	}
}
