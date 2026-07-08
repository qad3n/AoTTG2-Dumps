using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000028")]
[Preserve]
internal sealed class Dithering
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x10")]
	private int m_NoiseTextureIndex;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x18")]
	private System.Random m_Random;

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x48170B0", Offset = "0x48170B0", VA = "0x48170B0")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4817280", Offset = "0x4817280", VA = "0x4817280")]
	public Dithering()
	{
	}
}
