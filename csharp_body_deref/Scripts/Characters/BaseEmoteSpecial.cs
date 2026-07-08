using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004D6")]
internal class BaseEmoteSpecial : ExtendedUseable
{
	[Token(Token = "0x40016F9")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x1700097B")]
	protected virtual bool GroundedOnly
	{
		[Token(Token = "0x60033A9")]
		[Address(RVA = "0x3EE6220", Offset = "0x3EE6220", VA = "0x3EE6220", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033AA")]
	[Address(RVA = "0x3EE6230", Offset = "0x3EE6230", VA = "0x3EE6230")]
	public BaseEmoteSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033AB")]
	[Address(RVA = "0x3EE62E0", Offset = "0x3EE62E0", VA = "0x3EE62E0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033AC")]
	[Address(RVA = "0x3EE6330", Offset = "0x3EE6330", VA = "0x3EE6330")]
	protected bool InSpecial()
	{
		return default(bool);
	}
}
