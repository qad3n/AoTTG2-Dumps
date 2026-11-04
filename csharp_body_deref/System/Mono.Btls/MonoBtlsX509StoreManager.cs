// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509StoreManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A2")]
internal static class MonoBtlsX509StoreManager
{
	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x0")]
	private static bool initialized;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x8")]
	private static string machineTrustedRootPath;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x10")]
	private static string machineIntermediateCAPath;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x18")]
	private static string machineUntrustedPath;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x20")]
	private static string userTrustedRootPath;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x28")]
	private static string userIntermediateCAPath;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x30")]
	private static string userUntrustedPath;

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x283B5D0", Offset = "0x2839BD0", VA = "0x18283B5D0")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x283B290", Offset = "0x2839890", VA = "0x18283B290")]
	private static void DoInitialize()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x283B490", Offset = "0x2839A90", VA = "0x18283B490")]
	public static string GetStorePath(MonoBtlsX509StoreType type)
	{
		return null;
	}
}
