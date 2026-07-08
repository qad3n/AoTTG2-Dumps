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
		[Address(RVA = "0x4E36230", Offset = "0x4E36230", VA = "0x4E36230")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600175B")]
	[Address(RVA = "0x4E36460", Offset = "0x4E36460", VA = "0x4E36460")]
	internal static extern string InternalCodePage(ref int code_page);

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x4E323D0", Offset = "0x4E323D0", VA = "0x4E323D0")]
	internal static Encoding GetDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x4E307A0", Offset = "0x4E307A0", VA = "0x4E307A0")]
	internal static object InvokeI18N(string name, params object[] args)
	{
		return null;
	}
}
