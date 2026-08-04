// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TextureLerper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200008D")]
internal class TextureLerper
{
	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x0")]
	private static TextureLerper m_Instance;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x10")]
	private CommandBuffer m_Command;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x18")]
	private PropertySheetFactory m_PropertySheets;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessResources m_Resources;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x28")]
	private List<RenderTexture> m_Recycled;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x30")]
	private List<RenderTexture> m_Actives;

	[Token(Token = "0x1700004C")]
	internal static TextureLerper instance
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x4B66E40", Offset = "0x4B66E40", VA = "0x4B66E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4B66ED0", Offset = "0x4B66ED0", VA = "0x4B66ED0")]
	private TextureLerper()
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4B66F80", Offset = "0x4B66F80", VA = "0x4B66F80")]
	internal void BeginFrame(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4B66FE0", Offset = "0x4B66FE0", VA = "0x4B66FE0")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4B67220", Offset = "0x4B67220", VA = "0x4B67220")]
	private RenderTexture Get(RenderTextureFormat format, int w, int h, int d = 1, bool enableRandomWrite = false, bool force3D = false)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4B67620", Offset = "0x4B67620", VA = "0x4B67620")]
	internal Texture Lerp(Texture from, Texture to, float t)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4B67EF0", Offset = "0x4B67EF0", VA = "0x4B67EF0")]
	internal Texture Lerp(Texture from, Color to, float t)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4B68620", Offset = "0x4B68620", VA = "0x4B68620")]
	internal void Clear()
	{
	}
}
