// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200008C")]
internal static class MonoBtlsUtils
{
	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] emailOid;

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x2836C70", Offset = "0x2835270", VA = "0x182836C70")]
	public static bool Compare(byte[] a, byte[] b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x2836620", Offset = "0x2834C20", VA = "0x182836620")]
	private static bool AppendEntry(StringBuilder sb, MonoBtlsX509Name name, int index, string separator, bool quotes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x2836CE0", Offset = "0x28352E0", VA = "0x182836CE0")]
	public static string FormatName(MonoBtlsX509Name name, bool reversed, string separator, bool quotes)
	{
		return null;
	}
}
