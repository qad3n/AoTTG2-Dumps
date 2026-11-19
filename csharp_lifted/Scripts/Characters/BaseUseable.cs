// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/BaseUseable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x2000696")]
internal abstract class BaseUseable
{
	[Token(Token = "0x4001DC2")]
	[FieldOffset(Offset = "0x10")]
	public float Cooldown;

	[Token(Token = "0x4001DC3")]
	[FieldOffset(Offset = "0x14")]
	public int UsesLeft;

	[Token(Token = "0x4001DC4")]
	[FieldOffset(Offset = "0x18")]
	public int MaxUses;

	[Token(Token = "0x4001DC5")]
	[FieldOffset(Offset = "0x1C")]
	public bool IsActive;

	[Token(Token = "0x4001DC6")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4001DC7")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x4001DC8")]
	[FieldOffset(Offset = "0x30")]
	protected BaseCharacter _owner;

	[Token(Token = "0x6004010")]
	[Address(RVA = "0x5ABC9E0", Offset = "0x5ABB9E0", VA = "0x5ABC9E0")]
	public BaseUseable(BaseCharacter owner, float cooldown = 0f, int maxUses = -1)
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$.ctor): clean
		this._lastUseTime = -1000.0;
		base();
		this._owner = owner;
		this.Cooldown = cooldown;
		this.MaxUses = maxUses;
		this.UsesLeft = maxUses;
		return;
	}

	[Token(Token = "0x6004011")]
	[Address(RVA = "0x5ABCA40", Offset = "0x5ABBA40", VA = "0x5ABCA40", Slot = "4")]
	public virtual void Reload()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$Reload): clean
		return;
	}

	[Token(Token = "0x6004012")]
	[Address(RVA = "0x5ABCA50", Offset = "0x5ABBA50", VA = "0x5ABCA50", Slot = "5")]
	public virtual void Reset()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$Reset): clean
		this.UsesLeft = this.MaxUses;
		return;
	}

	[Token(Token = "0x6004013")]
	[Address(RVA = "0x5ABCA60", Offset = "0x5ABBA60", VA = "0x5ABCA60")]
	public void SetCooldownLeft(float cooldownLeft)
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$SetCooldownLeft): clean
		float fVar1;

		fVar1 = Time.time;
		this._lastUseTime = (fVar1 - this.Cooldown) + cooldownLeft;
		return;
	}

	[Token(Token = "0x6004014")]
	[Address(RVA = "0x5AAC920", Offset = "0x5AAB920", VA = "0x5AAC920")]
	public float GetCooldownLeft()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$GetCooldownLeft): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar3 = this.Cooldown;
		fVar1 = Time.time;
		fVar2 = this.Cooldown;
		fVar3 = fVar3 - (fVar1 - this._lastUseTime);
		if (fVar3 <= fVar2) {
			fVar2 = fVar3;
		}
		return (float)(-(uint)(0.0 <= fVar3) & (uint)fVar2);
	}

	[Token(Token = "0x6004015")]
	[Address(RVA = "0x5ABCA90", Offset = "0x5ABBA90", VA = "0x5ABCA90")]
	public void SetCooldownRatio(float ratio)
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$SetCooldownRatio): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar3 = 1.0;
		if (ratio <= 1.0) {
			fVar3 = ratio;
		}
		fVar1 = this.Cooldown;
		fVar2 = Time.time;
		this._lastUseTime =(fVar2 - this.Cooldown) + (float)(-(uint)(0.0 <= ratio) & (uint)fVar3) * fVar1;
		return;
	}

	[Token(Token = "0x6004016")]
	[Address(RVA = "0x5ABCAE0", Offset = "0x5ABBAE0", VA = "0x5ABCAE0")]
	public float GetCooldownRatio()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$GetCooldownRatio): clean
		float fVar1;
		float fVar2;

		if (this.UsesLeft == 0) {
			return 0.0;
		}
		fVar1 = this.Cooldown;
		if ((fVar1 == 0.0) && (!NAN(fVar1))) {
			return 1.0;
		}
		fVar1 = Time.time;
		fVar2 = (fVar1 - this._lastUseTime) / this.Cooldown;
		fVar1 = 1.0;
		if (fVar2 <= 1.0) {
			fVar1 = fVar2;
		}
		return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
	}

	[Token(Token = "0x6004017")]
	[Address(RVA = "0x5ABCB40", Offset = "0x5ABBB40", VA = "0x5ABCB40")]
	public bool HasUsesLeft()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$HasUsesLeft): clean
		return this.UsesLeft != 0;
	}

	[Token(Token = "0x6004018")]
	[Address(RVA = "0x5ABCB50", Offset = "0x5ABBB50", VA = "0x5ABCB50")]
	public float GetUsesRatio()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$GetUsesRatio): clean
		uint uVar1;
		uint uVar2;
		float fVar3;

		uVar1 = this.MaxUses;
		if ((0 < (int)uVar1) && (uVar2 = this.UsesLeft, -1 < (int)uVar2)) {
			fVar3 = (float)(int)(uVar2 / uVar1);
		}
		return fVar3;
	}

	[Token(Token = "0x6004019")]
	[Address(RVA = "0x5ABCB70", Offset = "0x5ABBB70", VA = "0x5ABCB70", Slot = "6")]
	public virtual bool CanUse()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$CanUse): clean
		int iVar1;
		bool bVar2;
		float fVar3;

		fVar3 = Time.time;
		if (this.Cooldown <= fVar3 - this._lastUseTime) {
			iVar1 = this.UsesLeft;
			bVar2 = 0 < iVar1 || iVar1 == -1;
		}
		return bVar2;
	}

	[Token(Token = "0x600401A")]
	[Address(RVA = "0x5ABCBB0", Offset = "0x5ABBBB0", VA = "0x5ABCBB0", Slot = "7")]
	public virtual bool HasDurability()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$HasDurability): clean
		return false;
	}

	[Token(Token = "0x600401B")]
	[Address(RVA = "0x5ABCBC0", Offset = "0x5ABBBC0", VA = "0x5ABCBC0", Slot = "8")]
	protected virtual void OnUse()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$OnUse): clean
		int iVar1;
		float fVar2;

		iVar1 = this.UsesLeft;
		if (0 < iVar1) {
			this.UsesLeft = iVar1 + -1;
		}
		fVar2 = Time.time;
		this._lastUseTime = fVar2;
		return;
	}

	[Token(Token = "0x600401C")]
	[Address(RVA = "0x5ABCBE0", Offset = "0x5ABBBE0", VA = "0x5ABCBE0", Slot = "9")]
	protected virtual void Activate()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$Activate): clean
		return;
	}

	[Token(Token = "0x600401D")]
	[Address(RVA = "0x5ABCBF0", Offset = "0x5ABBBF0", VA = "0x5ABCBF0", Slot = "10")]
	protected virtual void Deactivate()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$Deactivate): clean
		return;
	}

	[Token(Token = "0x600401E")]
	[Address(RVA = "0x5ABCC00", Offset = "0x5ABBC00", VA = "0x5ABCC00", Slot = "11")]
	public virtual void ReadInput(KeybindSetting keybind)
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$ReadInput): clean
		return;
	}

	[Token(Token = "0x600401F")]
	[Address(RVA = "0x5ABCC10", Offset = "0x5ABBC10", VA = "0x5ABCC10", Slot = "12")]
	public virtual void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$SetInput): clean
		return;
	}

	[Token(Token = "0x6004020")]
	[Address(RVA = "0x5ABCC20", Offset = "0x5ABBC20", VA = "0x5ABCC20", Slot = "13")]
	public virtual void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/BaseUseable.c (Characters.BaseUseable$$OnFixedUpdate): clean
		return;
	}
}
