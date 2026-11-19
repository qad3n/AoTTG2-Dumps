// ==================== AoTTG2 cross-reference ====================
// Type: Characters.PotatoSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/PotatoSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DF")]
internal class PotatoSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4002063")]
	[FieldOffset(Offset = "0x48")]
	private float _oldSpeed;

	[Token(Token = "0x4002064")]
	[FieldOffset(Offset = "0x4C")]
	private float _currentSpeed;

	[Token(Token = "0x17000B72")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042C3")]
		[Address(RVA = "0x5B0D800", Offset = "0x5B0C800", VA = "0x5B0D800", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$get_ActiveTime): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000B73")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042C4")]
		[Address(RVA = "0x5B0D810", Offset = "0x5B0C810", VA = "0x5B0D810", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042C5")]
	[Address(RVA = "0x5B0D820", Offset = "0x5B0C820", VA = "0x5B0D820")]
	public PotatoSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$.ctor): clean
		base(owner);
		this.Cooldown = 20.0;
		return;
	}

	[Token(Token = "0x60042C6")]
	[Address(RVA = "0x5B0D840", Offset = "0x5B0C840", VA = "0x5B0D840", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$Activate): clean
		float fVar1;
		Human pCVar2;
		HumanStats pCVar3;

		pCVar2 = this._human;
		if ((pCVar2 != null) &&(pCVar3 = pCVar2.Stats, pCVar3 != null)) {
			fVar1 = pCVar3.RunSpeed;
			this._oldSpeed = fVar1;
			this._currentSpeed = fVar1 + 40.0;
			pCVar2.RunAnimation = HumanAnimations.RunBuffed;
			pCVar2 = this._human;
			if (pCVar2 != null) {
				pCVar2.EmoteAnimation(HumanAnimations.SpecialSasha);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042C7")]
	[Address(RVA = "0x5B0D900", Offset = "0x5B0C900", VA = "0x5B0D900", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$ActiveFixedUpdate): clean
		Human pCVar1;
		HumanStats pCVar2;

		pCVar1 = this._human;
		if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
			throw new NullReferenceException();
		}
		pCVar2.RunSpeed = this._currentSpeed;
		return;
	}

	[Token(Token = "0x60042C8")]
	[Address(RVA = "0x5B0D930", Offset = "0x5B0C930", VA = "0x5B0D930", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/PotatoSpecial.c (Characters.PotatoSpecial$$Deactivate): 5 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		HumanStats pCVar3;
		BaseUseable pCVar4;
		BaseUseable pCVar5;
		AnimationHandler __this_00;
		bool bVar6;
		String* ppSVar7;

		pCVar2 = this._human;
		if ((pCVar2 == null) ||(pCVar3 = pCVar2.Stats, pCVar3 == null)) goto label_05c0daa6;
		pCVar3.RunSpeed = this._oldSpeed;
		pCVar4 = pCVar2.Weapon;
		if (pCVar4 == null) {
	label_05c0d9c2: ;
			ppSVar7 = &HumanAnimations.Run;
		}
		else {
			pCVar5 = pCVar4.klass;
			bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if (((pCVar5._2).typeHierarchyDepth < bVar1) ||((pCVar5._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(ThunderspearWeapon)) ) goto label_05c0d9c2;
			ppSVar7 = &HumanAnimations.RunTS;
		}
		pCVar2.RunAnimation = *ppSVar7;
		pCVar2 = this._human;
		if (pCVar2 != null) {
			__this_00 = pCVar2.Animation;
			if (__this_00 != null) {
				bVar6 = __this_00.IsPlaying(HumanAnimations.RunBuffed);
				if (!bVar6) {
					return;
				}
				pCVar2 = this._human;
				if (pCVar2 != null) {
					pCVar2.CrossFade(pCVar2.RunAnimation, 0.1, 0.0);
					return;
				}
			}
		}
	label_05c0daa6: ;
		throw new NullReferenceException();
	}
}
