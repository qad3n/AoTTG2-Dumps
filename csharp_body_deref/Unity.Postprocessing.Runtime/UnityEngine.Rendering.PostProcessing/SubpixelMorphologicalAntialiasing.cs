using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200003F")]
[Preserve]
public sealed class SubpixelMorphologicalAntialiasing
{
	[Token(Token = "0x2000040")]
	private enum Pass
	{
		[Token(Token = "0x4000110")]
		EdgeDetection = 0,
		[Token(Token = "0x4000111")]
		BlendWeights = 3,
		[Token(Token = "0x4000112")]
		NeighborhoodBlending = 6
	}

	[Token(Token = "0x2000041")]
	public enum Quality
	{
		[Token(Token = "0x4000114")]
		Low,
		[Token(Token = "0x4000115")]
		Medium,
		[Token(Token = "0x4000116")]
		High
	}

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x10")]
	[Tooltip("Lower quality is faster at the expense of visual quality (Low = ~60%, Medium = ~80%).")]
	public Quality quality;

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4820E60", Offset = "0x4820E60", VA = "0x4820E60")]
	public bool IsSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4820EA0", Offset = "0x4820EA0", VA = "0x4820EA0")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4821440", Offset = "0x4821440", VA = "0x4821440")]
	public SubpixelMorphologicalAntialiasing()
	{
	}
}
