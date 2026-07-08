using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200010D")]
public static class DocumentationUtils
{
	[Token(Token = "0x60008AE")]
	public static string GetHelpURL<TEnum>([Optional] TEnum mask) where TEnum : struct, IConvertible
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x488B410", Offset = "0x488B410", VA = "0x488B410")]
	public static bool TryGetHelpURL(Type type, out string url)
	{
		return default(bool);
	}
}
