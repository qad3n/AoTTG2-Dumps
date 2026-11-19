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
	}

	[Token(Token = "0x6004011")]
	[Address(RVA = "0x5ABCA40", Offset = "0x5ABBA40", VA = "0x5ABCA40", Slot = "4")]
	public virtual void Reload()
	{
	}

	[Token(Token = "0x6004012")]
	[Address(RVA = "0x5ABCA50", Offset = "0x5ABBA50", VA = "0x5ABCA50", Slot = "5")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6004013")]
	[Address(RVA = "0x5ABCA60", Offset = "0x5ABBA60", VA = "0x5ABCA60")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6004014")]
	[Address(RVA = "0x5AAC920", Offset = "0x5AAB920", VA = "0x5AAC920")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6004015")]
	[Address(RVA = "0x5ABCA90", Offset = "0x5ABBA90", VA = "0x5ABCA90")]
	public void SetCooldownRatio(float ratio)
	{
	}

	[Token(Token = "0x6004016")]
	[Address(RVA = "0x5ABCAE0", Offset = "0x5ABBAE0", VA = "0x5ABCAE0")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6004017")]
	[Address(RVA = "0x5ABCB40", Offset = "0x5ABBB40", VA = "0x5ABCB40")]
	public bool HasUsesLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6004018")]
	[Address(RVA = "0x5ABCB50", Offset = "0x5ABBB50", VA = "0x5ABCB50")]
	public float GetUsesRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6004019")]
	[Address(RVA = "0x5ABCB70", Offset = "0x5ABBB70", VA = "0x5ABCB70", Slot = "6")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600401A")]
	[Address(RVA = "0x5ABCBB0", Offset = "0x5ABBBB0", VA = "0x5ABCBB0", Slot = "7")]
	public virtual bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x600401B")]
	[Address(RVA = "0x5ABCBC0", Offset = "0x5ABBBC0", VA = "0x5ABCBC0", Slot = "8")]
	protected virtual void OnUse()
	{
	}

	[Token(Token = "0x600401C")]
	[Address(RVA = "0x5ABCBE0", Offset = "0x5ABBBE0", VA = "0x5ABCBE0", Slot = "9")]
	protected virtual void Activate()
	{
	}

	[Token(Token = "0x600401D")]
	[Address(RVA = "0x5ABCBF0", Offset = "0x5ABBBF0", VA = "0x5ABCBF0", Slot = "10")]
	protected virtual void Deactivate()
	{
	}

	[Token(Token = "0x600401E")]
	[Address(RVA = "0x5ABCC00", Offset = "0x5ABBC00", VA = "0x5ABCC00", Slot = "11")]
	public virtual void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x600401F")]
	[Address(RVA = "0x5ABCC10", Offset = "0x5ABBC10", VA = "0x5ABCC10", Slot = "12")]
	public virtual void SetInput(bool key)
	{
	}

	[Token(Token = "0x6004020")]
	[Address(RVA = "0x5ABCC20", Offset = "0x5ABBC20", VA = "0x5ABCC20", Slot = "13")]
	public virtual void OnFixedUpdate()
	{
	}
}
