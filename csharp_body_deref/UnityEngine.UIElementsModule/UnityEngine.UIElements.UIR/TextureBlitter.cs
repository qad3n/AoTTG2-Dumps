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

[Token(Token = "0x20004D0")]
internal class TextureBlitter : IDisposable
{
	[Token(Token = "0x20004D1")]
	private struct BlitInfo
	{
		[Token(Token = "0x4000F9A")]
		[FieldOffset(Offset = "0x0")]
		public Texture src;

		[Token(Token = "0x4000F9B")]
		[FieldOffset(Offset = "0x8")]
		public RectInt srcRect;

		[Token(Token = "0x4000F9C")]
		[FieldOffset(Offset = "0x18")]
		public Vector2Int dstPos;

		[Token(Token = "0x4000F9D")]
		[FieldOffset(Offset = "0x20")]
		public int border;

		[Token(Token = "0x4000F9E")]
		[FieldOffset(Offset = "0x24")]
		public Color tint;
	}

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] k_TextureIds;

	[Token(Token = "0x4000F92")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_CommitSampler;

	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x10")]
	private BlitInfo[] m_SingleBlit;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x18")]
	private Material m_BlitMaterial;

	[Token(Token = "0x4000F95")]
	[FieldOffset(Offset = "0x20")]
	private MaterialPropertyBlock m_Properties;

	[Token(Token = "0x4000F96")]
	[FieldOffset(Offset = "0x28")]
	private RectInt m_Viewport;

	[Token(Token = "0x4000F97")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture m_PrevRT;

	[Token(Token = "0x4000F98")]
	[FieldOffset(Offset = "0x40")]
	private List<BlitInfo> m_PendingBlits;

	[Token(Token = "0x1700078B")]
	protected bool disposed
	{
		[Token(Token = "0x6001DD2")]
		[Address(RVA = "0x4FA6A00", Offset = "0x4FA6A00", VA = "0x4FA6A00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001DD3")]
		[Address(RVA = "0x4FA6A10", Offset = "0x4FA6A10", VA = "0x4FA6A10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x4FA6A20", Offset = "0x4FA6A20", VA = "0x4FA6A20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x4FA6A90", Offset = "0x4FA6A90", VA = "0x4FA6A90", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x4FA6B10", Offset = "0x4FA6B10", VA = "0x4FA6B10")]
	static TextureBlitter()
	{
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x4FA6C50", Offset = "0x4FA6C50", VA = "0x4FA6C50")]
	public TextureBlitter(int capacity = 512)
	{
	}

	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x4FA6D00", Offset = "0x4FA6D00", VA = "0x4FA6D00")]
	public void QueueBlit(Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x4FA6F70", Offset = "0x4FA6F70", VA = "0x4FA6F70")]
	public void BlitOneNow(RenderTexture dst, Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x4FA7B40", Offset = "0x4FA7B40", VA = "0x4FA7B40")]
	public void Commit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x4FA71A0", Offset = "0x4FA71A0", VA = "0x4FA71A0")]
	private void BeginBlit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x4FA73E0", Offset = "0x4FA73E0", VA = "0x4FA73E0")]
	private void DoBlit(IList<BlitInfo> blitInfos, int startIndex)
	{
	}

	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x4FA7AC0", Offset = "0x4FA7AC0", VA = "0x4FA7AC0")]
	private void EndBlit()
	{
	}
}
