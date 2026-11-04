// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseEmoteSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseEmoteSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000675")]
internal class BaseEmoteSpecial : ExtendedUseable
{
	[Token(Token = "0x4001EA7")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x17000B19")]
	protected virtual bool GroundedOnly
	{
		[Token(Token = "0x6003FF5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003FF6")]
	[Address(RVA = "0x2166FC0", Offset = "0x21655C0", VA = "0x182166FC0")]
	public BaseEmoteSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003FF7")]
	[Address(RVA = "0x2166F30", Offset = "0x2165530", VA = "0x182166F30", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF8")]
	[Address(RVA = "0x2166F90", Offset = "0x2165590", VA = "0x182166F90")]
	protected bool InSpecial()
	{
		return default(bool);
	}
}
