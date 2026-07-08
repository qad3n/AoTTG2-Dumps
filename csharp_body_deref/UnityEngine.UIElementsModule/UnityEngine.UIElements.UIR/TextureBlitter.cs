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
		[Address(RVA = "0x4C7F0D0", Offset = "0x4C7F0D0", VA = "0x4C7F0D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001DD3")]
		[Address(RVA = "0x4C7F0E0", Offset = "0x4C7F0E0", VA = "0x4C7F0E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x4C7F0F0", Offset = "0x4C7F0F0", VA = "0x4C7F0F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x4C7F160", Offset = "0x4C7F160", VA = "0x4C7F160", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x4C7F1E0", Offset = "0x4C7F1E0", VA = "0x4C7F1E0")]
	static TextureBlitter()
	{
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x4C7F320", Offset = "0x4C7F320", VA = "0x4C7F320")]
	public TextureBlitter(int capacity = 512)
	{
	}

	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x4C7F3D0", Offset = "0x4C7F3D0", VA = "0x4C7F3D0")]
	public void QueueBlit(Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x4C7F640", Offset = "0x4C7F640", VA = "0x4C7F640")]
	public void BlitOneNow(RenderTexture dst, Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x4C80210", Offset = "0x4C80210", VA = "0x4C80210")]
	public void Commit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x4C7F870", Offset = "0x4C7F870", VA = "0x4C7F870")]
	private void BeginBlit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x4C7FAB0", Offset = "0x4C7FAB0", VA = "0x4C7FAB0")]
	private void DoBlit(IList<BlitInfo> blitInfos, int startIndex)
	{
	}

	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x4C80190", Offset = "0x4C80190", VA = "0x4C80190")]
	private void EndBlit()
	{
	}
}
