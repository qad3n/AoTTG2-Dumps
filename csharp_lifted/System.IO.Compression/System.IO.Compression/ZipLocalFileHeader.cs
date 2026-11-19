// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipLocalFileHeader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000034")]
internal readonly struct ZipLocalFileHeader
{
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x5F70EF0", Offset = "0x5F6FEF0", VA = "0x5F70EF0")]
	public static List<ZipGenericExtraField> GetExtraFields(BinaryReader reader)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x5F700F0", Offset = "0x5F6F0F0", VA = "0x5F700F0")]
	public static bool TrySkipBlock(BinaryReader reader)
	{
		return default(bool);
	}
}
