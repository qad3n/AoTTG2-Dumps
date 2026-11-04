// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Operators
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006F")]
internal sealed class Operators
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] s_priority;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] s_looks;

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x25227F0", Offset = "0x2520DF0", VA = "0x1825227F0")]
	internal static bool IsArithmetical(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x2522810", Offset = "0x2520E10", VA = "0x182522810")]
	internal static bool IsLogical(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2522830", Offset = "0x2520E30", VA = "0x182522830")]
	internal static bool IsRelational(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x2522840", Offset = "0x2520E40", VA = "0x182522840")]
	internal static int Priority(int op)
	{
		return default(int);
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x25228E0", Offset = "0x2520EE0", VA = "0x1825228E0")]
	internal static string ToString(int op)
	{
		return null;
	}
}
