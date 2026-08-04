// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseEmoteSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseEmoteSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200051B")]
internal class BaseEmoteSpecial : ExtendedUseable
{
	[Token(Token = "0x400180A")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x170009E5")]
	protected virtual bool GroundedOnly
	{
		[Token(Token = "0x60035B7")]
		[Address(RVA = "0x41F2AE0", Offset = "0x41F2AE0", VA = "0x41F2AE0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035B8")]
	[Address(RVA = "0x41F2AF0", Offset = "0x41F2AF0", VA = "0x41F2AF0")]
	public BaseEmoteSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035B9")]
	[Address(RVA = "0x41F2BA0", Offset = "0x41F2BA0", VA = "0x41F2BA0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60035BA")]
	[Address(RVA = "0x41F2BF0", Offset = "0x41F2BF0", VA = "0x41F2BF0")]
	protected bool InSpecial()
	{
		return default(bool);
	}
}
