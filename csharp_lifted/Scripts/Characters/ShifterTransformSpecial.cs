// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterTransformSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterTransformSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E0")]
internal class ShifterTransformSpecial : RechargeableUseable
{
	[Token(Token = "0x4002065")]
	[FieldOffset(Offset = "0x40")]
	public float LiveTime;

	[Token(Token = "0x4002066")]
	[FieldOffset(Offset = "0x48")]
	protected string _shifter;

	[Token(Token = "0x17000B74")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042C9")]
		[Address(RVA = "0x5B0DAB0", Offset = "0x5B0CAB0", VA = "0x5B0DAB0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/ShifterTransformSpecial.c (Characters.ShifterTransformSpecial$$get_ActiveTime): clean
			return 0.8;
		}
	}

	[Token(Token = "0x60042CA")]
	[Address(RVA = "0x5B0DAC0", Offset = "0x5B0CAC0", VA = "0x5B0DAC0")]
	public ShifterTransformSpecial(BaseCharacter owner, string shifter)
	{
		// Lifted from source/cpp/Characters/ShifterTransformSpecial.c (Characters.ShifterTransformSpecial$$.ctor): clean
		this.LiveTime = 60.0;
		base(owner, 0.0);
		this._shifter = shifter;
		this.UsesLeft = -1;
		this.MaxUses = 1;
		this.Cooldown = 300.0;
		this.ReduceCooldownAmount = 20.0;
		this.SetCooldownLeft(300.0);
		return;
	}

	[Token(Token = "0x60042CB")]
	[Address(RVA = "0x5B0DB20", Offset = "0x5B0CB20", VA = "0x5B0DB20", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/ShifterTransformSpecial.c (Characters.ShifterTransformSpecial$$Activate): 1 lines keep C-only constructs
		byte bVar1;
		Human __this_00;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		__this_00.EmoteAnimation(HumanAnimations.SpecialShifter);
		return;
	}

	[Token(Token = "0x60042CC")]
	[Address(RVA = "0x5B0DBD0", Offset = "0x5B0CBD0", VA = "0x5B0DBD0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/ShifterTransformSpecial.c (Characters.ShifterTransformSpecial$$Deactivate): 1 lines keep C-only constructs
		byte bVar1;
		Human __this_00;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		if (__this_00.Dead == false) {
			__this_00.TransformShifter(this._shifter, this.LiveTime);
			return;
		}
		return;
	}
}
