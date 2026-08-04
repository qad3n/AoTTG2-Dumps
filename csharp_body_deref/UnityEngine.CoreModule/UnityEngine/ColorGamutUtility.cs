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

[Token(Token = "0x20000B4")]
public class ColorGamutUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4DC42B0", Offset = "0x4DC42B0", VA = "0x4DC42B0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ColorPrimaries GetColorPrimaries(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x4DC42E0", Offset = "0x4DC42E0", VA = "0x4DC42E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern WhitePoint GetWhitePoint(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4DC4310", Offset = "0x4DC4310", VA = "0x4DC4310")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern TransferFunction GetTransferFunction(ColorGamut gamut);
}
