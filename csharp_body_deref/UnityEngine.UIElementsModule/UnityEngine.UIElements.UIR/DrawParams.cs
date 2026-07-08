using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004F1")]
internal class DrawParams
{
	[Token(Token = "0x4001071")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Rect k_UnlimitedRect;

	[Token(Token = "0x4001072")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Rect k_FullNormalizedRect;

	[Token(Token = "0x4001073")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Stack<Matrix4x4> view;

	[Token(Token = "0x4001074")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Stack<Rect> scissor;

	[Token(Token = "0x4001075")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<RenderTexture> renderTexture;

	[Token(Token = "0x4001076")]
	[FieldOffset(Offset = "0x28")]
	internal readonly List<Material> defaultMaterial;

	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x4C8AD20", Offset = "0x4C8AD20", VA = "0x4C8AD20")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x4C8AF10", Offset = "0x4C8AF10", VA = "0x4C8AF10")]
	public DrawParams()
	{
	}
}
