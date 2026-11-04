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

[Token(Token = "0x20002CB")]
internal static class EncodingHelper
{
	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding utf8EncodingWithoutMarkers;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object lockobj;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x10")]
	private static Assembly i18nAssembly;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0x18")]
	private static bool i18nDisabled;

	[Token(Token = "0x1700025D")]
	internal static Encoding UTF8Unmarked
	{
		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x198E580", Offset = "0x198CB80", VA = "0x18198E580")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x198DF80", Offset = "0x198C580", VA = "0x18198DF80")]
	internal static extern string InternalCodePage(ref int code_page);

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x198DE70", Offset = "0x198C470", VA = "0x18198DE70")]
	internal static Encoding GetDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x198DF90", Offset = "0x198C590", VA = "0x18198DF90")]
	internal static object InvokeI18N(string name, params object[] args)
	{
		return null;
	}
}
