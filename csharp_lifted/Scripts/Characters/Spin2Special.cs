// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin2Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin2Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E4")]
internal class Spin2Special : BaseAttackSpecial
{
	[Token(Token = "0x400206F")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4002070")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4002071")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4002072")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B78")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042D9")]
		[Address(RVA = "0x5B0E8A0", Offset = "0x5B0D8A0", VA = "0x5B0E8A0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/Spin2Special.c (Characters.Spin2Special$$get_ActiveTime): clean
			return 0.74;
		}
	}

	[Token(Token = "0x60042DA")]
	[Address(RVA = "0x5B0E8B0", Offset = "0x5B0D8B0", VA = "0x5B0E8B0")]
	public Spin2Special(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/Spin2Special.c (Characters.Spin2Special$$.ctor): clean
		this.AnimationLoopStartTime = 0.35;
		this.AnimationLoopEndTime = 0.48;
		this.Loops = 3;
		base(owner);
		this.Cooldown = 5.0;
		return;
	}

	[Token(Token = "0x60042DB")]
	[Address(RVA = "0x5B0E8E0", Offset = "0x5B0D8E0", VA = "0x5B0E8E0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/Spin2Special.c (Characters.Spin2Special$$Activate): clean
		Human __this_00;

		this._stage = 0;
		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StartSpecialAttack(HumanAnimations.SpecialPetra);
		return;
	}

	[Token(Token = "0x60042DC")]
	[Address(RVA = "0x5B0E960", Offset = "0x5B0D960", VA = "0x5B0E960", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/Spin2Special.c (Characters.Spin2Special$$ActiveFixedUpdate): 12 lines keep C-only constructs
		float pfVar1;
		int piVar2;
		int iVar3;
		uint uVar4;
		AnimationHandler pCVar5;
		SoundSettings pSVar6;
		BoolSetting pSVar7;
		bool bVar8;
		String* ppSVar9;
		Human pCVar10;
		float fVar11;

		pCVar10 = this._human;
		if (pCVar10 != null) {
			if (pCVar10._state != 9) {
				this.IsActive = false;
			}
			pCVar5 = pCVar10.Animation;
			if (pCVar5 == null) goto label_05c0ec3d;
			bVar8 = pCVar5.IsPlaying(HumanAnimations.SpecialPetra);
			if (!bVar8) {
				return;
			}
			pCVar10 = this._human;
			if (pCVar10 == null) goto label_05c0ec3d;
			pCVar5 = pCVar10.Animation;
			if (pCVar5 == null) goto label_05c0ec3d;
			fVar11 = pCVar5.GetNormalizedTime(HumanAnimations.SpecialPetra);
			iVar3 = this._stage;
			if ((iVar3 != 0) ||(pfVar1 = &this.AnimationLoopStartTime, fVar11 < *pfVar1 || fVar11 == *pfVar1)) {
				if (this.Loops <= iVar3) {
					return;
				}
				pfVar1 = &this.AnimationLoopEndTime;
				if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
					return;
				}
				pCVar10 = this._human;
				if (pCVar10 == null) goto label_05c0ec3d;
				pCVar10.PlayAnimation(HumanAnimations.SpecialPetra, this.AnimationLoopStartTime);
				pSVar6 = SettingsManager.SoundSettings;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.OldBladeEffect, pSVar7 == null)) goto label_05c0ec3d;
				pCVar10 = this._human;
				uVar4 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
				if (pSVar7._value != false) {
					if (uVar4 == 0) {
					}
					if (pCVar10 == null) goto label_05c0ec3d;
					ppSVar9 = &HumanSounds.OldBladeSwing;
					goto label_05c0ec26;
				}
			}
			else {
				pCVar10 = this._human;
				if (pCVar10 == null) goto label_05c0ec3d;
				pCVar10.ActivateBlades();
				pSVar6 = SettingsManager.SoundSettings;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.OldBladeEffect, pSVar7 == null)) goto label_05c0ec3d;
				pCVar10 = this._human;
				uVar4 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
				if (pSVar7._value == false) {
					if (uVar4 == 0) {
					}
					if (pCVar10 == null) goto label_05c0ec3d;
					ppSVar9 = &HumanSounds.BladeSwing4;
				}
				else {
					if (uVar4 == 0) {
					}
					if (pCVar10 == null) goto label_05c0ec3d;
					ppSVar9 = &HumanSounds.OldBladeSwing;
				}
				pCVar10.PlaySound(*ppSVar9);
				pCVar10 = this._human;
				uVar4 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			if (pCVar10 != null) {
				ppSVar9 = &HumanSounds.BladeSwing3;
	label_05c0ec26: ;
				pCVar10.PlaySound(*ppSVar9);
				piVar2 = &this._stage;
				*piVar2 = *piVar2 + 1;
				return;
			}
		}
	label_05c0ec3d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042DD")]
	[Address(RVA = "0x5B0EC50", Offset = "0x5B0DC50", VA = "0x5B0EC50")]
	protected float GetAnimationTime()
	{
		// Lifted from source/cpp/Characters/Spin2Special.c (Characters.Spin2Special$$GetAnimationTime): clean
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
