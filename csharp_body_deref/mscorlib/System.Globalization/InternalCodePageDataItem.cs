using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005D0")]
internal struct InternalCodePageDataItem
{
	[Token(Token = "0x40019A0")]
	[FieldOffset(Offset = "0x0")]
	internal ushort codePage;

	[Token(Token = "0x40019A1")]
	[FieldOffset(Offset = "0x2")]
	internal ushort uiFamilyCodePage;

	[Token(Token = "0x40019A2")]
	[FieldOffset(Offset = "0x4")]
	internal uint flags;

	[Token(Token = "0x40019A3")]
	[FieldOffset(Offset = "0x8")]
	internal string Names;
}
