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

[Token(Token = "0x2000638")]
internal abstract class ExtendedUseable : BaseUseable
{
	[Token(Token = "0x4001C22")]
	[FieldOffset(Offset = "0x38")]
	protected float _activeTimeLeft;

	[Token(Token = "0x17000AD3")]
	protected virtual float ActiveTime
	{
		[Token(Token = "0x6003D8F")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003D90")]
	[Address(RVA = "0x21177E0", Offset = "0x2115DE0", VA = "0x1821177E0")]
	public ExtendedUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003D91")]
	[Address(RVA = "0xB62CF0", Offset = "0xB612F0", VA = "0x180B62CF0", Slot = "15")]
	protected virtual float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003D92")]
	[Address(RVA = "0x2117730", Offset = "0x2115D30", VA = "0x182117730", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x6003D93")]
	[Address(RVA = "0x2117770", Offset = "0x2115D70", VA = "0x182117770", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6003D94")]
	[Address(RVA = "0x21176C0", Offset = "0x2115CC0", VA = "0x1821176C0", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x6003D95")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	protected virtual void ActiveFixedUpdate()
	{
	}
}
