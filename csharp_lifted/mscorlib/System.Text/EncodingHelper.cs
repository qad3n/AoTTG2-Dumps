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

[Token(Token = "0x20002A4")]
internal static class EncodingHelper
{
	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding utf8EncodingWithoutMarkers;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object lockobj;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x10")]
	private static Assembly i18nAssembly;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x18")]
	private static bool i18nDisabled;

	[Token(Token = "0x1700025C")]
	internal static Encoding UTF8Unmarked
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x5325DB0", Offset = "0x5324DB0", VA = "0x5325DB0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x5325FA0", Offset = "0x5324FA0", VA = "0x5325FA0")]
	internal static extern string InternalCodePage(ref int code_page);

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x5322030", Offset = "0x5321030", VA = "0x5322030")]
	internal static Encoding GetDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x53204E0", Offset = "0x531F4E0", VA = "0x53204E0")]
	internal static object InvokeI18N(string name, params object[] args)
	{
		return null;
	}
}
