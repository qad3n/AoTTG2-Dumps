using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000115")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorUtility.h")]
public class ColorUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x4ABE9F0", Offset = "0x4ABE9F0", VA = "0x4ABE9F0")]
	[UnityEngine.Bindings.FreeFunction("TryParseHtmlColor", true)]
	internal static extern bool DoTryParseHtmlColor(string htmlString, out Color32 color);

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x4ABEA30", Offset = "0x4ABEA30", VA = "0x4ABEA30")]
	public static bool TryParseHtmlString(string htmlString, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x4ABEAC0", Offset = "0x4ABEAC0", VA = "0x4ABEAC0")]
	public static string ToHtmlStringRGB(Color color)
	{
		return null;
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x4ABEF40", Offset = "0x4ABEF40", VA = "0x4ABEF40")]
	public static string ToHtmlStringRGBA(Color color)
	{
		return null;
	}
}
