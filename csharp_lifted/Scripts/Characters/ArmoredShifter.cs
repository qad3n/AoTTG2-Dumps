// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ArmoredShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ArmoredShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006F5")]
internal class ArmoredShifter : BaseShifter
{
	[Token(Token = "0x40020C7")]
	[FieldOffset(Offset = "0x2D8")]
	protected ArmoredComponentCache ArmoredCache;

	[Token(Token = "0x40020C8")]
	[FieldOffset(Offset = "0x2E0")]
	protected ArmoredAnimations ArmoredAnimations;

	[Token(Token = "0x17000B90")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600433B")]
		[Address(RVA = "0x5B15960", Offset = "0x5B14960", VA = "0x5B15960", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$get_EmoteActions): clean
			List<string> __this_00;

			__this_00 = new List<string>();
			return __this_00;
		}
	}

	[Token(Token = "0x17000B91")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x600433C")]
		[Address(RVA = "0x5B159C0", Offset = "0x5B149C0", VA = "0x5B159C0", Slot = "130")]
		get
		{
			// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$get_DefaultRunSpeed): clean
			return 110.0;
		}
	}

	[Token(Token = "0x600433D")]
	[Address(RVA = "0x5B159D0", Offset = "0x5B149D0", VA = "0x5B159D0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$CreateCache): clean
		GameObject owner;
		ArmoredComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new ArmoredComponentCache(owner);
		this.ArmoredCache = __this_00;
		this.CreateCache((BaseComponentCache)this.ArmoredCache);
		return;
	}

	[Token(Token = "0x600433E")]
	[Address(RVA = "0x5B15A50", Offset = "0x5B14A50", VA = "0x5B15A50", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$CreateAnimations): clean
		ArmoredAnimations __this_00;

		__this_00 = new ArmoredAnimations();
		this.ArmoredAnimations = __this_00;
		this.CreateAnimations((BaseTitanAnimations)this.ArmoredAnimations);
		return;
	}

	[Token(Token = "0x600433F")]
	[Address(RVA = "0x5B15AC0", Offset = "0x5B14AC0", VA = "0x5B15AC0", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$Emote): clean
		return;
	}

	[Token(Token = "0x6004340")]
	[Address(RVA = "0x5B15AD0", Offset = "0x5B14AD0", VA = "0x5B15AD0", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$CreateCustomSkinLoader): clean
		GameObject __this_00;
		BaseCustomSkinLoader pCVar1;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = (BaseCustomSkinLoader)__this_00.AddComponent<AnnieCustomSkinLoader>();
		return pCVar1;
	}

	[Token(Token = "0x6004341")]
	[Address(RVA = "0x5B15B20", Offset = "0x5B14B20", VA = "0x5B15B20", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$GetSkinURL): clean
		StringSetting pSVar1;

		if ((set == null) ||(pSVar1 = set.Annie, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	[Token(Token = "0x6004342")]
	[Address(RVA = "0x5B15B60", Offset = "0x5B14B60", VA = "0x5B15B60", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$GetRootMotionAnimations): clean
		Dictionary<string, float> __this_00;

		__this_00 = new Dictionary<string, float>();
		return __this_00;
	}

	[Token(Token = "0x6004343")]
	[Address(RVA = "0x5B15BC0", Offset = "0x5B14BC0", VA = "0x5B15BC0", Slot = "187")]
	protected override void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$UpdateAttack): clean
		String a;
		ArmoredComponentCache pCVar1;
		BaseHitbox pCVar2;
		bool bVar3;
		float fVar4;

		fVar4 = this.GetAnimationTime();
		if (this.ArmoredAnimations != null) {
			a = this._currentStateAnimation;
			bVar3 = (a == "Amarture_VER2|dt_attack_swipe_L");
			if (((!bVar3) || (fVar4 <= 0.06)) || (this._currentAttackStage != 0)) {
				return;
			}
			this._currentAttackStage = 1;
			pCVar1 = this.ArmoredCache;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1.HandLHitbox, pCVar2 != null)) {
				pCVar2.Activate(0.0, 0.35 / this._currentAttackSpeed);
				this.PlaySound(TitanSounds.Swing1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004344")]
	[Address(RVA = "0x5B15CF0", Offset = "0x5B14CF0", VA = "0x5B15CF0", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$LateUpdate): clean
		uint uVar1;
		uint uVar2;
		Transform pUVar4;
		Vector3 value;

		pUVar4 = this.transform;
		if (pUVar4 != null) {
			pUVar4 = pUVar4.Find("Amarture_VER2");
			if (pUVar4 != null) {
				value.z = (Vector3.oneVector).z * 15.0;
				uVar1 = (Vector3.oneVector).x;
				uVar2 = (Vector3.oneVector).y;
				value.x = (float)uVar1 * 15.0;
				value.y = (float)uVar2 * 15.0;
				pUVar4.localScale = value;
				this.LateUpdate();
				this.UpdateDeathVisuals();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004345")]
	[Address(RVA = "0x5B15DD0", Offset = "0x5B14DD0", VA = "0x5B15DD0", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$GetCameraAnchor): clean
		Transform pUVar1;

		pUVar1 = this.transform;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1 = pUVar1.Find("Anchor");
		return pUVar1;
	}

	[Token(Token = "0x6004346")]
	[Address(RVA = "0x5B15E20", Offset = "0x5B14E20", VA = "0x5B15E20")]
	public ArmoredShifter()
	{
		// Lifted from source/cpp/Characters/ArmoredShifter.c (Characters.ArmoredShifter$$.ctor): clean
		this._needRoar = true;
		this.DeathAnimationLength = 2.0;
		base();
		return;
	}
}
