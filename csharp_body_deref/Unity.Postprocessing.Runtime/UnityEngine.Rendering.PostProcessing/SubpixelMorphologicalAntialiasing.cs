// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B45F50", Offset = "0x4B45F50", VA = "0x4B45F50")]
	public bool IsSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4B45F90", Offset = "0x4B45F90", VA = "0x4B45F90")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4B46530", Offset = "0x4B46530", VA = "0x4B46530")]
	public SubpixelMorphologicalAntialiasing()
	{
	}
}
