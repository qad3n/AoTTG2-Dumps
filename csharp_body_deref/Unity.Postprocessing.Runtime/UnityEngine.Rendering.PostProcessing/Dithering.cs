// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Dithering
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
	[Address(RVA = "0x4B3C1A0", Offset = "0x4B3C1A0", VA = "0x4B3C1A0")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B3C370", Offset = "0x4B3C370", VA = "0x4B3C370")]
	public Dithering()
	{
	}
}
