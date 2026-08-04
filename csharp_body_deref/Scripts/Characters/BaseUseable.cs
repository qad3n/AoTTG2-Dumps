// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/BaseUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x20004DE")]
internal abstract class BaseUseable
{
	[Token(Token = "0x40015A9")]
	[FieldOffset(Offset = "0x10")]
	public float Cooldown;

	[Token(Token = "0x40015AA")]
	[FieldOffset(Offset = "0x14")]
	public int UsesLeft;

	[Token(Token = "0x40015AB")]
	[FieldOffset(Offset = "0x18")]
	public int MaxUses;

	[Token(Token = "0x40015AC")]
	[FieldOffset(Offset = "0x1C")]
	public bool IsActive;

	[Token(Token = "0x40015AD")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x40015AE")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x40015AF")]
	[FieldOffset(Offset = "0x30")]
	protected BaseCharacter _owner;

	[Token(Token = "0x600339C")]
	[Address(RVA = "0x41A8C90", Offset = "0x41A8C90", VA = "0x41A8C90")]
	public BaseUseable(BaseCharacter owner, float cooldown = 0f, int maxUses = -1)
	{
	}

	[Token(Token = "0x600339D")]
	[Address(RVA = "0x41A8CF0", Offset = "0x41A8CF0", VA = "0x41A8CF0", Slot = "4")]
	public virtual void Reload()
	{
	}

	[Token(Token = "0x600339E")]
	[Address(RVA = "0x41A8D00", Offset = "0x41A8D00", VA = "0x41A8D00", Slot = "5")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600339F")]
	[Address(RVA = "0x41A8D10", Offset = "0x41A8D10", VA = "0x41A8D10")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x60033A0")]
	[Address(RVA = "0x41A8D40", Offset = "0x41A8D40", VA = "0x41A8D40")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x60033A1")]
	[Address(RVA = "0x41A8D90", Offset = "0x41A8D90", VA = "0x41A8D90")]
	public void SetCooldownRatio(float ratio)
	{
	}

	[Token(Token = "0x60033A2")]
	[Address(RVA = "0x41A8DE0", Offset = "0x41A8DE0", VA = "0x41A8DE0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60033A3")]
	[Address(RVA = "0x41A8E40", Offset = "0x41A8E40", VA = "0x41A8E40")]
	public bool HasUsesLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A4")]
	[Address(RVA = "0x41A8E50", Offset = "0x41A8E50", VA = "0x41A8E50")]
	public float GetUsesRatio()
	{
		return default(float);
	}

	[Token(Token = "0x60033A5")]
	[Address(RVA = "0x41A8E70", Offset = "0x41A8E70", VA = "0x41A8E70", Slot = "6")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A6")]
	[Address(RVA = "0x41A8EA0", Offset = "0x41A8EA0", VA = "0x41A8EA0", Slot = "7")]
	public virtual bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A7")]
	[Address(RVA = "0x41A8EB0", Offset = "0x41A8EB0", VA = "0x41A8EB0", Slot = "8")]
	protected virtual void OnUse()
	{
	}

	[Token(Token = "0x60033A8")]
	[Address(RVA = "0x41A8ED0", Offset = "0x41A8ED0", VA = "0x41A8ED0", Slot = "9")]
	protected virtual void Activate()
	{
	}

	[Token(Token = "0x60033A9")]
	[Address(RVA = "0x41A8EE0", Offset = "0x41A8EE0", VA = "0x41A8EE0", Slot = "10")]
	protected virtual void Deactivate()
	{
	}

	[Token(Token = "0x60033AA")]
	[Address(RVA = "0x41A8EF0", Offset = "0x41A8EF0", VA = "0x41A8EF0", Slot = "11")]
	public virtual void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x60033AB")]
	[Address(RVA = "0x41A8F00", Offset = "0x41A8F00", VA = "0x41A8F00", Slot = "12")]
	public virtual void SetInput(bool key)
	{
	}

	[Token(Token = "0x60033AC")]
	[Address(RVA = "0x41A8F10", Offset = "0x41A8F10", VA = "0x41A8F10", Slot = "13")]
	public virtual void OnFixedUpdate()
	{
	}
}
