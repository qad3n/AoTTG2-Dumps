// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Sampling.SamplingResources
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Sampling;

[Token(Token = "0x2000237")]
internal sealed class SamplingResources : IDisposable
{
	[Token(Token = "0x2000238")]
	internal enum ResourceType
	{
		[Token(Token = "0x40009FA")]
		BlueNoiseTextures = 1,
		[Token(Token = "0x40009FB")]
		SobolMatrices,
		[Token(Token = "0x40009FC")]
		All
	}

	[Token(Token = "0x40009F4")]
	[FieldOffset(Offset = "0x10")]
	private Texture2D m_SobolScramblingTile;

	[Token(Token = "0x40009F5")]
	[FieldOffset(Offset = "0x18")]
	private Texture2D m_SobolRankingTile;

	[Token(Token = "0x40009F6")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_SobolOwenScrambled256Samples;

	[Token(Token = "0x40009F7")]
	[FieldOffset(Offset = "0x28")]
	private GraphicsBuffer m_SobolBuffer;

	[Token(Token = "0x40009F8")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint[] sobolMatrices;

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x2B80C70", Offset = "0x2B7F270", VA = "0x182B80C70")]
	public static void Bind(CommandBuffer cmd, SamplingResources resources)
	{
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x2B80E80", Offset = "0x2B7F480", VA = "0x182B80E80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SamplingResources()
	{
	}
}
