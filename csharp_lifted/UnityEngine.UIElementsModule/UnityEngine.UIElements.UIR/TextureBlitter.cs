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

[Token(Token = "0x20005C5")]
internal class TextureBlitter : IDisposable
{
	[Token(Token = "0x20005C6")]
	private struct BlitInfo
	{
		[Token(Token = "0x4001503")]
		[FieldOffset(Offset = "0x0")]
		public Texture src;

		[Token(Token = "0x4001504")]
		[FieldOffset(Offset = "0x8")]
		public RectInt srcRect;

		[Token(Token = "0x4001505")]
		[FieldOffset(Offset = "0x18")]
		public Vector2Int dstPos;

		[Token(Token = "0x4001506")]
		[FieldOffset(Offset = "0x20")]
		public int border;

		[Token(Token = "0x4001507")]
		[FieldOffset(Offset = "0x24")]
		public Color tint;
	}

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] k_TextureIds;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker s_CommitSampler;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x10")]
	private BlitInfo[] m_SingleBlit;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x18")]
	private Material m_BlitMaterial;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x20")]
	private MaterialPropertyBlock m_Properties;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x28")]
	private RectInt m_Viewport;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture m_PrevRT;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0x40")]
	private List<BlitInfo> m_PendingBlits;

	[Token(Token = "0x17000A9B")]
	protected bool disposed
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x6BAB100", Offset = "0x6BAA100", VA = "0x6BAB100")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B07")]
		[Address(RVA = "0x6BAB110", Offset = "0x6BAA110", VA = "0x6BAB110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B08")]
	[Address(RVA = "0x6BAB120", Offset = "0x6BAA120", VA = "0x6BAB120", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B09")]
	[Address(RVA = "0x6BAB190", Offset = "0x6BAA190", VA = "0x6BAB190", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B0A")]
	[Address(RVA = "0x6BAB210", Offset = "0x6BAA210", VA = "0x6BAB210")]
	static TextureBlitter()
	{
	}

	[Token(Token = "0x6002B0B")]
	[Address(RVA = "0x6BAB350", Offset = "0x6BAA350", VA = "0x6BAB350")]
	public TextureBlitter(int capacity = 512)
	{
	}

	[Token(Token = "0x6002B0C")]
	[Address(RVA = "0x6BAB400", Offset = "0x6BAA400", VA = "0x6BAB400")]
	public void QueueBlit(Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6002B0D")]
	[Address(RVA = "0x6BAB620", Offset = "0x6BAA620", VA = "0x6BAB620")]
	public void BlitOneNow(RenderTexture dst, Texture src, RectInt srcRect, Vector2Int dstPos, bool addBorder, Color tint)
	{
	}

	[Token(Token = "0x6002B0E")]
	[Address(RVA = "0x6BAC010", Offset = "0x6BAB010", VA = "0x6BAC010")]
	public void Commit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6002B0F")]
	[Address(RVA = "0x6BAB740", Offset = "0x6BAA740", VA = "0x6BAB740")]
	private void BeginBlit(RenderTexture dst)
	{
	}

	[Token(Token = "0x6002B10")]
	[Address(RVA = "0x6BAB980", Offset = "0x6BAA980", VA = "0x6BAB980")]
	private void DoBlit(IList<BlitInfo> blitInfos, int startIndex)
	{
	}

	[Token(Token = "0x6002B11")]
	[Address(RVA = "0x6BABF80", Offset = "0x6BAAF80", VA = "0x6BABF80")]
	private void EndBlit()
	{
	}
}
