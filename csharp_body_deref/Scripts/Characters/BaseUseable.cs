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

[Token(Token = "0x2000637")]
internal abstract class BaseUseable
{
	[Token(Token = "0x4001C1B")]
	[FieldOffset(Offset = "0x10")]
	public float Cooldown;

	[Token(Token = "0x4001C1C")]
	[FieldOffset(Offset = "0x14")]
	public int UsesLeft;

	[Token(Token = "0x4001C1D")]
	[FieldOffset(Offset = "0x18")]
	public int MaxUses;

	[Token(Token = "0x4001C1E")]
	[FieldOffset(Offset = "0x1C")]
	public bool IsActive;

	[Token(Token = "0x4001C1F")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4001C20")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x4001C21")]
	[FieldOffset(Offset = "0x30")]
	protected BaseCharacter _owner;

	[Token(Token = "0x6003D7E")]
	[Address(RVA = "0x21131F0", Offset = "0x21117F0", VA = "0x1821131F0")]
	public BaseUseable(BaseCharacter owner, float cooldown = 0f, int maxUses = -1)
	{
	}

	[Token(Token = "0x6003D7F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public virtual void Reload()
	{
	}

	[Token(Token = "0x6003D80")]
	[Address(RVA = "0x2113140", Offset = "0x2111740", VA = "0x182113140", Slot = "5")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6003D81")]
	[Address(RVA = "0x2113150", Offset = "0x2111750", VA = "0x182113150")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6003D82")]
	[Address(RVA = "0x2113000", Offset = "0x2111600", VA = "0x182113000")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6003D83")]
	[Address(RVA = "0x2113190", Offset = "0x2111790", VA = "0x182113190")]
	public void SetCooldownRatio(float ratio)
	{
	}

	[Token(Token = "0x6003D84")]
	[Address(RVA = "0x2113060", Offset = "0x2111660", VA = "0x182113060")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6003D85")]
	[Address(RVA = "0x2113100", Offset = "0x2111700", VA = "0x182113100")]
	public bool HasUsesLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D86")]
	[Address(RVA = "0x21130E0", Offset = "0x21116E0", VA = "0x1821130E0")]
	public float GetUsesRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6003D87")]
	[Address(RVA = "0x2112FC0", Offset = "0x21115C0", VA = "0x182112FC0", Slot = "6")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D88")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
	public virtual bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D89")]
	[Address(RVA = "0x2113110", Offset = "0x2111710", VA = "0x182113110", Slot = "8")]
	protected virtual void OnUse()
	{
	}

	[Token(Token = "0x6003D8A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void Activate()
	{
	}

	[Token(Token = "0x6003D8B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected virtual void Deactivate()
	{
	}

	[Token(Token = "0x6003D8C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public virtual void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x6003D8D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public virtual void SetInput(bool key)
	{
	}

	[Token(Token = "0x6003D8E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public virtual void OnFixedUpdate()
	{
	}
}
