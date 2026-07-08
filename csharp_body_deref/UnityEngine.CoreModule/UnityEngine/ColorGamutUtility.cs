using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000B4")]
public class ColorGamutUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4A9CA90", Offset = "0x4A9CA90", VA = "0x4A9CA90")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ColorPrimaries GetColorPrimaries(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x4A9CAC0", Offset = "0x4A9CAC0", VA = "0x4A9CAC0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern WhitePoint GetWhitePoint(ColorGamut gamut);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4A9CAF0", Offset = "0x4A9CAF0", VA = "0x4A9CAF0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern TransferFunction GetTransferFunction(ColorGamut gamut);
}
