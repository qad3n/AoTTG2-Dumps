// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ExtendedUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ExtendedUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x20004DF")]
internal abstract class ExtendedUseable : BaseUseable
{
	[Token(Token = "0x40015B0")]
	[FieldOffset(Offset = "0x38")]
	protected float _activeTimeLeft;

	[Token(Token = "0x170009C3")]
	protected virtual float ActiveTime
	{
		[Token(Token = "0x60033AD")]
		[Address(RVA = "0x41A8F20", Offset = "0x41A8F20", VA = "0x41A8F20", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033AE")]
	[Address(RVA = "0x41A8F30", Offset = "0x41A8F30", VA = "0x41A8F30")]
	public ExtendedUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033AF")]
	[Address(RVA = "0x41A8F80", Offset = "0x41A8F80", VA = "0x41A8F80", Slot = "15")]
	protected virtual float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x60033B0")]
	[Address(RVA = "0x41A8FA0", Offset = "0x41A8FA0", VA = "0x41A8FA0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x60033B1")]
	[Address(RVA = "0x41A8FE0", Offset = "0x41A8FE0", VA = "0x41A8FE0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60033B2")]
	[Address(RVA = "0x41A9050", Offset = "0x41A9050", VA = "0x41A9050", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x60033B3")]
	[Address(RVA = "0x41A90D0", Offset = "0x41A90D0", VA = "0x41A90D0", Slot = "16")]
	protected virtual void ActiveFixedUpdate()
	{
	}
}
