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
	[Address(RVA = "0x4D4CB50", Offset = "0x4D4CB50", VA = "0x4D4CB50")]
	public static ColorPage Init(RenderChain renderChain, BMPAlloc alloc)
	{
		return default(ColorPage);
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4D4CC20", Offset = "0x4D4CC20", VA = "0x4D4CC20")]
	public MeshBuilderNative.NativeColorPage ToNativeColorPage()
	{
		return default(MeshBuilderNative.NativeColorPage);
	}
}
