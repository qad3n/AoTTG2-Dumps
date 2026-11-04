// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ColorGamutUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000D8")]
public class ColorGamutUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x2EC0F40", Offset = "0x2EBF540", VA = "0x182EC0F40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ColorPrimaries GetColorPrimaries(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x2EC0FC0", Offset = "0x2EBF5C0", VA = "0x182EC0FC0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern WhitePoint GetWhitePoint(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x2EC0F80", Offset = "0x2EBF580", VA = "0x182EC0F80")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern TransferFunction GetTransferFunction(ColorGamut gamut);
}
