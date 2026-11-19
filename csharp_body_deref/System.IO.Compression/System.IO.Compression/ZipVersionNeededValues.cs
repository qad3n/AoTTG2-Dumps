// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipVersionNeededValues
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200003B")]
internal enum ZipVersionNeededValues : ushort
{
	[Token(Token = "0x4000157")]
	Default = 10,
	[Token(Token = "0x4000158")]
	ExplicitDirectory = 20,
	[Token(Token = "0x4000159")]
	Deflate = ExplicitDirectory,
	[Token(Token = "0x400015A")]
	Deflate64 = 21,
	[Token(Token = "0x400015B")]
	Zip64 = 45
}
