// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin1Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin1Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E3")]
internal class Spin1Special : BaseAttackSpecial
{
	[Token(Token = "0x400206B")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x400206C")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x400206D")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x400206E")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B77")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042D4")]
		[Address(RVA = "0x5B0E530", Offset = "0x5B0D530", VA = "0x5B0E530", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/Spin1Special.c (Characters.Spin1Special$$get_ActiveTime): clean
			return 0.8;
		}
	}

	[Token(Token = "0x60042D5")]
	[Address(RVA = "0x5B0E540", Offset = "0x5B0D540", VA = "0x5B0E540")]
	public Spin1Special(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/Spin1Special.c (Characters.Spin1Special$$.ctor): clean
		this.AnimationLoopStartTime = 0.35;
		this.AnimationLoopEndTime = 0.5;
		this.Loops = 3;
		base(owner);
		this.Cooldown = 5.0;
		return;
	}

	[Token(Token = "0x60042D6")]
	[Address(RVA = "0x5B0E570", Offset = "0x5B0D570", VA = "0x5B0E570", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/Spin1Special.c (Characters.Spin1Special$$Activate): clean
		Human __this_00;

		this._stage = 0;
		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StartSpecialAttack(HumanAnimations.SpecialLevi);
		return;
	}

	[Token(Token = "0x60042D7")]
	[Address(RVA = "0x5B0E5F0", Offset = "0x5B0D5F0", VA = "0x5B0E5F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/Spin1Special.c (Characters.Spin1Special$$ActiveFixedUpdate): 9 lines keep C-only constructs
		float pfVar1;
		int piVar2;
		int iVar3;
		uint uVar4;
		Human pCVar5;
		AnimationHandler pCVar6;
		SoundSettings pSVar7;
		BoolSetting pSVar8;
		bool bVar9;
		String* ppSVar10;
		float fVar11;

		pCVar5 = this._human;
		if (pCVar5 != null) {
			if (pCVar5._state != 9) {
				this.IsActive = false;
			}
			pCVar6 = pCVar5.Animation;
			if (pCVar6 != null) {
				bVar9 = pCVar6.IsPlaying(HumanAnimations.SpecialLevi);
				if (!bVar9) {
					return;
				}
				pCVar5 = this._human;
				if (pCVar5 != null) {
					pCVar6 = pCVar5.Animation;
					if (pCVar6 != null) {
						fVar11 = pCVar6.GetNormalizedTime(HumanAnimations.SpecialLevi);
						iVar3 = this._stage;
						if ((iVar3 != 0) ||(pfVar1 = &this.AnimationLoopStartTime, fVar11 < *pfVar1 || fVar11 == *pfVar1)) {
							if (this.Loops <= iVar3) {
								return;
							}
							pfVar1 = &this.AnimationLoopEndTime;
							if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
								return;
							}
							pCVar5 = this._human;
							if (pCVar5 == null) goto label_05c0e810;
							pCVar5.PlayAnimation(HumanAnimations.SpecialLevi, this.AnimationLoopStartTime);
						}
						else {
							pCVar5 = this._human;
							if (pCVar5 == null) goto label_05c0e810;
							pCVar5.ActivateBlades();
						}
						pSVar7 = SettingsManager.SoundSettings;
						if ((pSVar7 != null) &&(pSVar8 = pSVar7.OldBladeEffect, pSVar8 != null)) {
							pCVar5 = this._human;
							uVar4 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
							if (pSVar8._value == false) {
								if (uVar4 == 0) {
								}
								if (pCVar5 != null) {
									ppSVar10 = &HumanSounds.BladeSwing3;
									goto label_05c0e7f9;
								}
							}
							else {
								if (uVar4 == 0) {
								}
								if (pCVar5 != null) {
									ppSVar10 = &HumanSounds.OldBladeSwing;
	label_05c0e7f9: ;
									pCVar5.PlaySound(*ppSVar10);
									piVar2 = &this._stage;
									*piVar2 = *piVar2 + 1;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c0e810: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042D8")]
	[Address(RVA = "0x5B0E820", Offset = "0x5B0D820", VA = "0x5B0E820")]
	protected float GetAnimationTime()
	{
		// Lifted from source/cpp/Characters/Spin1Special.c (Characters.Spin1Special$$GetAnimationTime): clean
		Human pCVar1;
		AnimationHandler __this_00;
		float fVar2;

		pCVar1 = this._human;
		if (pCVar1 != null) {
			__this_00 = pCVar1.Animation;
			if (__this_00 != null) {
				return fVar2;
			}
		}
		throw new NullReferenceException();
	}
}
