// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsError
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000075")]
internal static class MonoBtlsError
{
	[PreserveSig]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x2497FC0", Offset = "0x24965C0", VA = "0x182497FC0")]
	private static extern void mono_btls_error_clear_error();

	[PreserveSig]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x2498390", Offset = "0x2496990", VA = "0x182498390")]
	private static extern int mono_btls_error_get_error_line(out IntPtr file, out int line);

	[PreserveSig]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x2498420", Offset = "0x2496A20", VA = "0x182498420")]
	private static extern void mono_btls_error_get_error_string_n(int error, IntPtr buf, int len);

	[PreserveSig]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x2498030", Offset = "0x2496630", VA = "0x182498030")]
	private static extern int mono_btls_error_get_reason(int error);

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x2497FC0", Offset = "0x24965C0", VA = "0x182497FC0")]
	public static void ClearError()
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x24980B0", Offset = "0x24966B0", VA = "0x1824980B0")]
	public static string GetErrorString(int error)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2498290", Offset = "0x2496890", VA = "0x182498290")]
	public static int GetError(out string file, out int line)
	{
		return default(int);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2498030", Offset = "0x2496630", VA = "0x182498030")]
	public static int GetErrorReason(int error)
	{
		return default(int);
	}
}
