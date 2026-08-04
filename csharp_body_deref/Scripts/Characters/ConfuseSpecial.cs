// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ConfuseSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ConfuseSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000520")]
internal class ConfuseSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001814")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x170009ED")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035D1")]
		[Address(RVA = "0x41F45E0", Offset = "0x41F45E0", VA = "0x41F45E0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009EE")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60035D2")]
		[Address(RVA = "0x41F45F0", Offset = "0x41F45F0", VA = "0x41F45F0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035D3")]
	[Address(RVA = "0x41E4370", Offset = "0x41E4370", VA = "0x41E4370")]
	public ConfuseSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035D4")]
	[Address(RVA = "0x41F4600", Offset = "0x41F4600", VA = "0x41F4600", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035D5")]
	[Address(RVA = "0x41F49E0", Offset = "0x41F49E0", VA = "0x41F49E0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
