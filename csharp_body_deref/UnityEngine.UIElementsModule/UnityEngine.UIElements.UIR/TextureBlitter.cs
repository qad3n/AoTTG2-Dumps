// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TextureBlitter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005DA")]
internal class TextureBlitter : IDisposable
{
	[Token(Token = "0x20005DB")]
	private struct BlitInfo
	{
		[Token(Token = "0x40015C1")]
		[FieldOffset(Offset = "0x0")]
		public Texture src;

		[Token(Token = "0x40015C2")]
		[FieldOffset(Offset = "0x8")]
		public RectInt srcRect;

		[Token(Token = "0x40015C3")]
		[FieldOffset(Offset = "0x18")]
		public Vector2Int dstPos;

		[Token(Token = "0x40015C4")]
		[FieldOffset(Offset = "0x20")]
		public int border;

		[Token(Token = "0x40015C5")]
		[FieldOffset(Offset = "0x24")]
		public Color tint;
	}

	[Token(Token = "0x40015B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] k_TextureIds;

	[Token(Token = "0x40015B9")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_CommitSampler;

	[Token(Token = "0x40015BA")]
	[FieldOffset(Offset = "0x10")]
	private BlitInfo[] m_SingleBlit;

	[Token(Token = "0x40015BB")]
	[FieldOffset(Offset = "0x18")]
	private Material m_BlitMaterial;

	[Token(Token = "0x40015BC")]
	[FieldOffset(Offset = "0x20")]
	private MaterialPropertyBlock m_Properties;

	[Token(Token = "0x40015BD")]
	[FieldOffset(Offset = "0x28")]
	private RectInt m_Viewport;

	[Token(Token = "0x40015BE")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture m_PrevRT;

	[Token(Token = "0x40015BF")]
	[FieldOffset(Offset = "0x40")]
	private List<BlitInfo> m_PendingBlits;

	[Token(Token = "0x17000AA7")]
	protected bool disposed
	{
		[Token(Token = "0x6002B67")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B68")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B69")]
	[Address(RVA = "0x31B16F0", Offset = "0x31AFCF0", VA = "0x1831B16F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x31B1750", Offset = "0x31AFD50", VA = "0x1831B1750", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x31B2080", Offset = "0x31B0680", VA = "0x1831B2080")]
	static TextureBlitter()
	{
	}

	[Token(Token = "0x6002B6C")]
	[Address(RVA = "0x31B21B0", Offset = "0x31B07B0", VA = "0x1831B21B0")]
	public TextureBlitter(int capacity = 512)
	{
	}

	[Token(Token = "0x6002B6D")]
	[Address(RVA = "0x31B1F00", Offset = "0x31B0500", VA = "0x1831B1F00")]
	public void QueueBlit(Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6002B6E")]
	[Address(RVA = "0x31B14C0", Offset = "0x31AFAC0", VA = "0x1831B14C0")]
	public void BlitOneNow(RenderTexture dst, Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6002B6F")]
	[Address(RVA = "0x31B15F0", Offset = "0x31AFBF0", VA = "0x1831B15F0")]
	public void Commit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6002B70")]
	[Address(RVA = "0x31B1280", Offset = "0x31AF880", VA = "0x1831B1280")]
	private void BeginBlit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x31B17D0", Offset = "0x31AFDD0", VA = "0x1831B17D0")]
	private void DoBlit(IList<BlitInfo> blitInfos, int startIndex)
	{
	}

	[Token(Token = "0x6002B72")]
	[Address(RVA = "0x31B1E40", Offset = "0x31B0440", VA = "0x1831B1E40")]
	private void EndBlit()
	{
	}
}
