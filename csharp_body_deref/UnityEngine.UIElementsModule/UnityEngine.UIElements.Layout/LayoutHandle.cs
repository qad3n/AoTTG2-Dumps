using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004F4")]
internal readonly struct LayoutHandle
{
	[Token(Token = "0x4001085")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Version;

	[Token(Token = "0x170007A5")]
	public static LayoutHandle Undefined
	{
		[Token(Token = "0x6001E8D")]
		[Address(RVA = "0x4C8C9A0", Offset = "0x4C8C9A0", VA = "0x4C8C9A0")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x4C8CAF0", Offset = "0x4C8CAF0", VA = "0x4C8CAF0")]
	internal LayoutHandle(int index, int version)
	{
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x4C8C9F0", Offset = "0x4C8C9F0", VA = "0x4C8C9F0")]
	public bool Equals(LayoutHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x4C8CB00", Offset = "0x4C8CB00", VA = "0x4C8CB00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x4C8CB70", Offset = "0x4C8CB70", VA = "0x4C8CB70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
