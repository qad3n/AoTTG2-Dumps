// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Watermark
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x200036B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/DrawSplashScreenAndWatermarks.h")]
public class Watermark
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600156C")]
	[Address(RVA = "0x6954EE0", Offset = "0x6953EE0", VA = "0x6954EE0")]
	[UnityEngine.Bindings.FreeFunction("IsAnyWatermarkVisible")]
	public static extern bool IsVisible();
}
