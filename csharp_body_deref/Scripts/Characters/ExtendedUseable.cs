using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x200049A")]
internal abstract class ExtendedUseable : BaseUseable
{
	[Token(Token = "0x400149F")]
	[FieldOffset(Offset = "0x38")]
	protected float _activeTimeLeft;

	[Token(Token = "0x17000959")]
	protected virtual float ActiveTime
	{
		[Token(Token = "0x600319F")]
		[Address(RVA = "0x3E9C680", Offset = "0x3E9C680", VA = "0x3E9C680", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60031A0")]
	[Address(RVA = "0x3E9C690", Offset = "0x3E9C690", VA = "0x3E9C690")]
	public ExtendedUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60031A1")]
	[Address(RVA = "0x3E9C6E0", Offset = "0x3E9C6E0", VA = "0x3E9C6E0", Slot = "15")]
	protected virtual float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x60031A2")]
	[Address(RVA = "0x3E9C700", Offset = "0x3E9C700", VA = "0x3E9C700", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x60031A3")]
	[Address(RVA = "0x3E9C740", Offset = "0x3E9C740", VA = "0x3E9C740", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60031A4")]
	[Address(RVA = "0x3E9C7B0", Offset = "0x3E9C7B0", VA = "0x3E9C7B0", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x60031A5")]
	[Address(RVA = "0x3E9C830", Offset = "0x3E9C830", VA = "0x3E9C830", Slot = "16")]
	protected virtual void ActiveFixedUpdate()
	{
	}
}
