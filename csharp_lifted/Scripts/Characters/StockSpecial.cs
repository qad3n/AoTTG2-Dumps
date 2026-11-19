// ==================== AoTTG2 cross-reference ====================
// Type: Characters.StockSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/StockSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E6")]
internal class StockSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x60042E3")]
	[Address(RVA = "0x5B0F520", Offset = "0x5B0E520", VA = "0x5B0F520")]
	public StockSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$.ctor): clean
		base(owner);
		return;
	}

	[Token(Token = "0x60042E4")]
	[Address(RVA = "0x5B0F530", Offset = "0x5B0E530", VA = "0x5B0F530", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$CanUse): clean
		Human pCVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = this.CanUse();
		if (bVar2) {
			pCVar1 = this._human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1._state == 0;
		}
		return bVar3;
	}

	[Token(Token = "0x60042E5")]
	[Address(RVA = "0x5B0F570", Offset = "0x5B0E570", VA = "0x5B0F570")]
	public void FalseAttack()
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$FalseAttack): clean
		this.IsActive = false;
		this.Deactivate();
		return;
	}

	[Token(Token = "0x60042E6")]
	[Address(RVA = "0x5B0F590", Offset = "0x5B0E590", VA = "0x5B0F590", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$Activate): 1 lines keep C-only constructs
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
		__this_00.StartBladeSwing();
		return;
	}

	[Token(Token = "0x60042E7")]
	[Address(RVA = "0x5B0F600", Offset = "0x5B0E600", VA = "0x5B0F600", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$ActiveFixedUpdate): clean
		Human pCVar1;
		AnimationHandler __this_00;
		float fVar2;

		this.ActiveFixedUpdate();
		pCVar1 = this._human;
		if ((pCVar1 != null) &&(__this_00 = pCVar1.Animation, __this_00 != null)) {
			fVar2 = __this_00.GetNormalizedTime(pCVar1.AttackAnimation);
			if (0.32 <= fVar2) {
				pCVar1 = this._human;
				if (pCVar1 == null) goto label_05c0f676;
				pCVar1.PauseAnimation();
			}
			pCVar1 = this._human;
			if (pCVar1 != null) {
				if (pCVar1.Grounded == false) {
					return;
				}
				this.IsActive = false;
				this.Deactivate();
				return;
			}
		}
	label_05c0f676: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042E8")]
	[Address(RVA = "0x5B0F680", Offset = "0x5B0E680", VA = "0x5B0F680", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/StockSpecial.c (Characters.StockSpecial$$Deactivate): clean
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ContinueAnimation();
		return;
	}
}
