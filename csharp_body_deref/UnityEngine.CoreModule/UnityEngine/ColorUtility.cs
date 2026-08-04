// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ColorUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000118")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorUtility.h")]
public class ColorUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600079C")]
	[Address(RVA = "0x4DE6320", Offset = "0x4DE6320", VA = "0x4DE6320")]
	[UnityEngine.Bindings.FreeFunction("TryParseHtmlColor", true)]
	internal static extern bool DoTryParseHtmlColor(string htmlString, out Color32 color);

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x4DE6360", Offset = "0x4DE6360", VA = "0x4DE6360")]
	public static bool TryParseHtmlString(string htmlString, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x4DE63F0", Offset = "0x4DE63F0", VA = "0x4DE63F0")]
	public static string ToHtmlStringRGB(Color color)
	{
		return null;
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x4DE6870", Offset = "0x4DE6870", VA = "0x4DE6870")]
	public static string ToHtmlStringRGBA(Color color)
	{
		return null;
	}
}
