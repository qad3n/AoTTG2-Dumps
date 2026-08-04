// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColorPage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000255")]
internal struct ColorPage
{
	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x0")]
	public bool isValid;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x4")]
	public Color32 pageAndID;

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x5074480", Offset = "0x5074480", VA = "0x5074480")]
	public static ColorPage Init(RenderChain renderChain, BMPAlloc alloc)
	{
		return default(ColorPage);
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x5074550", Offset = "0x5074550", VA = "0x5074550")]
	public MeshBuilderNative.NativeColorPage ToNativeColorPage()
	{
		return default(MeshBuilderNative.NativeColorPage);
	}
}
