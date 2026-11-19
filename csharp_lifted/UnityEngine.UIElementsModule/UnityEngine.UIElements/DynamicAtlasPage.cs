// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DynamicAtlasPage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002CD")]
internal class DynamicAtlasPage : IDisposable
{
	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly Vector2Int _003CminSize_003Ek__BackingField;

	[Token(Token = "0x4000ACF")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly Vector2Int _003CmaxSize_003Ek__BackingField;

	[Token(Token = "0x4000AD0")]
	[FieldOffset(Offset = "0x38")]
	private readonly int m_1Padding;

	[Token(Token = "0x4000AD1")]
	[FieldOffset(Offset = "0x3C")]
	private readonly int m_2Padding;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0x40")]
	private Allocator2D m_Allocator;

	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0x48")]
	private TextureBlitter m_Blitter;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0x50")]
	private Vector2Int m_CurrentSize;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0x0")]
	private static int s_TextureCounter;

	[Token(Token = "0x170003DF")]
	public TextureId textureId
	{
		[Token(Token = "0x6001301")]
		[Address(RVA = "0x6CBC9F0", Offset = "0x6CBB9F0", VA = "0x6CBC9F0")]
		[CompilerGenerated]
		get
		{
			return default(TextureId);
		}
		[Token(Token = "0x6001302")]
		[Address(RVA = "0x6CBCA00", Offset = "0x6CBBA00", VA = "0x6CBCA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E0")]
	public RenderTexture atlas
	{
		[Token(Token = "0x6001303")]
		[Address(RVA = "0x6CBCA10", Offset = "0x6CBBA10", VA = "0x6CBCA10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001304")]
		[Address(RVA = "0x6CBCA20", Offset = "0x6CBBA20", VA = "0x6CBCA20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E1")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6001305")]
		[Address(RVA = "0x6CBCA30", Offset = "0x6CBBA30", VA = "0x6CBCA30")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x170003E2")]
	public FilterMode filterMode
	{
		[Token(Token = "0x6001306")]
		[Address(RVA = "0x6CBCA40", Offset = "0x6CBBA40", VA = "0x6CBCA40")]
		[CompilerGenerated]
		get
		{
			return default(FilterMode);
		}
	}

	[Token(Token = "0x170003E3")]
	protected bool disposed
	{
		[Token(Token = "0x6001308")]
		[Address(RVA = "0x6CBCC10", Offset = "0x6CBBC10", VA = "0x6CBCC10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001309")]
		[Address(RVA = "0x6CBCC20", Offset = "0x6CBBC20", VA = "0x6CBCC20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x6CBCA50", Offset = "0x6CBBA50", VA = "0x6CBCA50")]
	public DynamicAtlasPage(RenderTextureFormat format, FilterMode filterMode, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x6CBCC30", Offset = "0x6CBBC30", VA = "0x6CBCC30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x6CBCCA0", Offset = "0x6CBBCA0", VA = "0x6CBCCA0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x6CBD260", Offset = "0x6CBC260", VA = "0x6CBD260")]
	public bool TryAdd(Texture2D image, out Allocator2D.Alloc2D alloc, out RectInt rect)
	{
		return default(bool);
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x6CBD480", Offset = "0x6CBC480", VA = "0x6CBD480")]
	public void Update(Texture2D image, RectInt rect)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x6CBD640", Offset = "0x6CBC640", VA = "0x6CBD640")]
	public void Remove(Allocator2D.Alloc2D alloc)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x6CBD720", Offset = "0x6CBC720", VA = "0x6CBD720")]
	public void Commit()
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x6CBD760", Offset = "0x6CBC760", VA = "0x6CBD760")]
	private void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x6CBDB40", Offset = "0x6CBCB40", VA = "0x6CBDB40")]
	private RenderTexture CreateAtlasTexture()
	{
		return null;
	}
}
