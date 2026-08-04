// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.EnumInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C1")]
internal class EnumInfo
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x10")]
	public readonly bool IsFlags;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x18")]
	public readonly ulong[] Values;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x20")]
	public readonly string[] Names;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x28")]
	public readonly string[] ResolvedNames;

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x3DB7500", Offset = "0x3DB7500", VA = "0x3DB7500")]
	public EnumInfo(bool isFlags, ulong[] values, string[] names, string[] resolvedNames)
	{
	}
}
