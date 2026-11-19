// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.IFileFormatReader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001E")]
internal interface IFileFormatReader
{
	[Token(Token = "0x60000B0")]
	bool ReadHeader(InputBuffer input);

	[Token(Token = "0x60000B1")]
	bool ReadFooter(InputBuffer input);

	[Token(Token = "0x60000B2")]
	void UpdateWithBytesRead(byte[] buffer, int offset, int bytesToCopy);

	[Token(Token = "0x60000B3")]
	void Validate();
}
