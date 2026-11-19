// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.CopyEncoder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000012")]
internal sealed class CopyEncoder
{
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5F63C10", Offset = "0x5F62C10", VA = "0x5F63C10")]
	public void GetBlock(DeflateInput input, OutputBuffer output, bool isFinal)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5F63F00", Offset = "0x5F62F00", VA = "0x5F63F00")]
	private void WriteLenNLen(ushort len, OutputBuffer output)
	{
	}
}
