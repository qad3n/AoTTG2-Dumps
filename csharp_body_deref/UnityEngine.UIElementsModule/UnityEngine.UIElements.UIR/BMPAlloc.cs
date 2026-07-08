using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004D4")]
internal struct BMPAlloc
{
	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BMPAlloc Invalid;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x0")]
	public int page;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x4")]
	public ushort pageLine;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x6")]
	public byte bitIndex;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x7")]
	public OwnedState ownedState;

	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x4C76030", Offset = "0x4C76030", VA = "0x4C76030")]
	public bool Equals(BMPAlloc other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x4C77920", Offset = "0x4C77920", VA = "0x4C77920")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x4C80D90", Offset = "0x4C80D90", VA = "0x4C80D90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
