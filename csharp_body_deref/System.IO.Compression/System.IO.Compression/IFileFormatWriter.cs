// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.IFileFormatWriter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001D")]
internal interface IFileFormatWriter
{
	[Token(Token = "0x60000AD")]
	byte[] GetHeader();

	[Token(Token = "0x60000AE")]
	void UpdateWithBytesRead(byte[] buffer, int offset, int bytesToCopy);

	[Token(Token = "0x60000AF")]
	byte[] GetFooter();
}
