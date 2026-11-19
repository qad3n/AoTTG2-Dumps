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

[Token(Token = "0x20000D9")]
public class ColorGamutUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x68D4840", Offset = "0x68D3840", VA = "0x68D4840")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ColorPrimaries GetColorPrimaries(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x68D4870", Offset = "0x68D3870", VA = "0x68D4870")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern WhitePoint GetWhitePoint(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x68D48A0", Offset = "0x68D38A0", VA = "0x68D48A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern TransferFunction GetTransferFunction(ColorGamut gamut);
}
