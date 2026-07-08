using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x2000499")]
internal abstract class BaseUseable
{
	[Token(Token = "0x4001498")]
	[FieldOffset(Offset = "0x10")]
	public float Cooldown;

	[Token(Token = "0x4001499")]
	[FieldOffset(Offset = "0x14")]
	public int UsesLeft;

	[Token(Token = "0x400149A")]
	[FieldOffset(Offset = "0x18")]
	public int MaxUses;

	[Token(Token = "0x400149B")]
	[FieldOffset(Offset = "0x1C")]
	public bool IsActive;

	[Token(Token = "0x400149C")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x400149D")]
	[FieldOffset(Offset = "0x28")]
	protected float _lastUseTime;

	[Token(Token = "0x400149E")]
	[FieldOffset(Offset = "0x30")]
	protected BaseCharacter _owner;

	[Token(Token = "0x600318E")]
	[Address(RVA = "0x3E9C3F0", Offset = "0x3E9C3F0", VA = "0x3E9C3F0")]
	public BaseUseable(BaseCharacter owner, float cooldown = 0f, int maxUses = -1)
	{
	}

	[Token(Token = "0x600318F")]
	[Address(RVA = "0x3E9C450", Offset = "0x3E9C450", VA = "0x3E9C450", Slot = "4")]
	public virtual void Reload()
	{
	}

	[Token(Token = "0x6003190")]
	[Address(RVA = "0x3E9C460", Offset = "0x3E9C460", VA = "0x3E9C460", Slot = "5")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6003191")]
	[Address(RVA = "0x3E9C470", Offset = "0x3E9C470", VA = "0x3E9C470")]
	public void SetCooldownLeft(float cooldownLeft)
	{
	}

	[Token(Token = "0x6003192")]
	[Address(RVA = "0x3E9C4A0", Offset = "0x3E9C4A0", VA = "0x3E9C4A0")]
	public float GetCooldownLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6003193")]
	[Address(RVA = "0x3E9C4F0", Offset = "0x3E9C4F0", VA = "0x3E9C4F0")]
	public void SetCooldownRatio(float ratio)
	{
	}

	[Token(Token = "0x6003194")]
	[Address(RVA = "0x3E9C540", Offset = "0x3E9C540", VA = "0x3E9C540")]
	public float GetCooldownRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6003195")]
	[Address(RVA = "0x3E9C5A0", Offset = "0x3E9C5A0", VA = "0x3E9C5A0")]
	public bool HasUsesLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003196")]
	[Address(RVA = "0x3E9C5B0", Offset = "0x3E9C5B0", VA = "0x3E9C5B0")]
	public float GetUsesRatio()
	{
		return default(float);
	}

	[Token(Token = "0x6003197")]
	[Address(RVA = "0x3E9C5D0", Offset = "0x3E9C5D0", VA = "0x3E9C5D0", Slot = "6")]
	public virtual bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003198")]
	[Address(RVA = "0x3E9C600", Offset = "0x3E9C600", VA = "0x3E9C600", Slot = "7")]
	public virtual bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x6003199")]
	[Address(RVA = "0x3E9C610", Offset = "0x3E9C610", VA = "0x3E9C610", Slot = "8")]
	protected virtual void OnUse()
	{
	}

	[Token(Token = "0x600319A")]
	[Address(RVA = "0x3E9C630", Offset = "0x3E9C630", VA = "0x3E9C630", Slot = "9")]
	protected virtual void Activate()
	{
	}

	[Token(Token = "0x600319B")]
	[Address(RVA = "0x3E9C640", Offset = "0x3E9C640", VA = "0x3E9C640", Slot = "10")]
	protected virtual void Deactivate()
	{
	}

	[Token(Token = "0x600319C")]
	[Address(RVA = "0x3E9C650", Offset = "0x3E9C650", VA = "0x3E9C650", Slot = "11")]
	public virtual void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x600319D")]
	[Address(RVA = "0x3E9C660", Offset = "0x3E9C660", VA = "0x3E9C660", Slot = "12")]
	public virtual void SetInput(bool key)
	{
	}

	[Token(Token = "0x600319E")]
	[Address(RVA = "0x3E9C670", Offset = "0x3E9C670", VA = "0x3E9C670", Slot = "13")]
	public virtual void OnFixedUpdate()
	{
	}
}
