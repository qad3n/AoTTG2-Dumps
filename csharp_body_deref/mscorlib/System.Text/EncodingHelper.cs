// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncodingHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200029C")]
internal static class EncodingHelper
{
	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding utf8EncodingWithoutMarkers;

	[Token(Token = "0x4000C05")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object lockobj;

	[Token(Token = "0x4000C06")]
	[FieldOffset(Offset = "0x10")]
	private static Assembly i18nAssembly;

	[Token(Token = "0x4000C07")]
	[FieldOffset(Offset = "0x18")]
	private static bool i18nDisabled;

	[Token(Token = "0x1700025B")]
	internal static Encoding UTF8Unmarked
	{
		[Token(Token = "0x600175A")]
		[Address(RVA = "0x3B1BD50", Offset = "0x3B1BD50", VA = "0x3B1BD50")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600175B")]
	[Address(RVA = "0x3B1BF80", Offset = "0x3B1BF80", VA = "0x3B1BF80")]
	internal static extern string InternalCodePage(ref int code_page);

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x3B17EF0", Offset = "0x3B17EF0", VA = "0x3B17EF0")]
	internal static Encoding GetDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x3B162C0", Offset = "0x3B162C0", VA = "0x3B162C0")]
	internal static object InvokeI18N(string name, params object[] args)
	{
		return null;
	}
}
