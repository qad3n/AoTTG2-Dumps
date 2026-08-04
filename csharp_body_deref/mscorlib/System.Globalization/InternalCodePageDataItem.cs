// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.InternalCodePageDataItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
