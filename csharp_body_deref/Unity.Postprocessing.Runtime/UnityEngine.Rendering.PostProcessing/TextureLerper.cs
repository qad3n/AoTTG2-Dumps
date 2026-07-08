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
		[Address(RVA = "0x4841D50", Offset = "0x4841D50", VA = "0x4841D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4841DE0", Offset = "0x4841DE0", VA = "0x4841DE0")]
	private TextureLerper()
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4841E90", Offset = "0x4841E90", VA = "0x4841E90")]
	internal void BeginFrame(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4841EF0", Offset = "0x4841EF0", VA = "0x4841EF0")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4842130", Offset = "0x4842130", VA = "0x4842130")]
	private RenderTexture Get(RenderTextureFormat format, int w, int h, int d = 1, bool enableRandomWrite = false, bool force3D = false)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4842530", Offset = "0x4842530", VA = "0x4842530")]
	internal Texture Lerp(Texture from, Texture to, float t)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4842E00", Offset = "0x4842E00", VA = "0x4842E00")]
	internal Texture Lerp(Texture from, Color to, float t)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4843530", Offset = "0x4843530", VA = "0x4843530")]
	internal void Clear()
	{
	}
}
