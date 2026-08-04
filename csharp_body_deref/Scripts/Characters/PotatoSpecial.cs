// ==================== AoTTG2 cross-reference ====================
// Type: Characters.PotatoSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/PotatoSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/PotatoSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000526")]
internal class PotatoSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001818")]
	[FieldOffset(Offset = "0x48")]
	private float _oldSpeed;

	[Token(Token = "0x4001819")]
	[FieldOffset(Offset = "0x4C")]
	private float _currentSpeed;

	[Token(Token = "0x170009F4")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035ED")]
		[Address(RVA = "0x41F7410", Offset = "0x41F7410", VA = "0x41F7410", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009F5")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035EE")]
		[Address(RVA = "0x41F7420", Offset = "0x41F7420", VA = "0x41F7420", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035EF")]
	[Address(RVA = "0x41E4140", Offset = "0x41E4140", VA = "0x41E4140")]
	public PotatoSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035F0")]
	[Address(RVA = "0x41F7430", Offset = "0x41F7430", VA = "0x41F7430", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035F1")]
	[Address(RVA = "0x41F74F0", Offset = "0x41F74F0", VA = "0x41F74F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60035F2")]
	[Address(RVA = "0x41F7520", Offset = "0x41F7520", VA = "0x41F7520", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
