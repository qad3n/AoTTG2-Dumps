// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseEmoteSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseEmoteSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D4")]
internal class BaseEmoteSpecial : ExtendedUseable
{
	[Token(Token = "0x4002055")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x17000B63")]
	protected virtual bool GroundedOnly
	{
		[Token(Token = "0x600428D")]
		[Address(RVA = "0x5B08D80", Offset = "0x5B07D80", VA = "0x5B08D80", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600428E")]
	[Address(RVA = "0x5B08D90", Offset = "0x5B07D90", VA = "0x5B08D90")]
	public BaseEmoteSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600428F")]
	[Address(RVA = "0x5B08E40", Offset = "0x5B07E40", VA = "0x5B08E40", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004290")]
	[Address(RVA = "0x5B08E90", Offset = "0x5B07E90", VA = "0x5B08E90")]
	protected bool InSpecial()
	{
		return default(bool);
	}
}
