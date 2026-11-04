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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(TextureId);
		}
		[Token(Token = "0x6001302")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E0")]
	public RenderTexture atlas
	{
		[Token(Token = "0x6001303")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001304")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E1")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6001305")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
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
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
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
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001309")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x32ADA00", Offset = "0x32AC000", VA = "0x1832ADA00")]
	public DynamicAtlasPage(RenderTextureFormat format, FilterMode filterMode, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x32ACEC0", Offset = "0x32AB4C0", VA = "0x1832ACEC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x32ACCF0", Offset = "0x32AB2F0", VA = "0x1832ACCF0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x32AD020", Offset = "0x32AB620", VA = "0x1832AD020")]
	public bool TryAdd(Texture2D image, out Allocator2D.Alloc2D alloc, out RectInt rect)
	{
		return default(bool);
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x32AD830", Offset = "0x32ABE30", VA = "0x1832AD830")]
	public void Update(Texture2D image, RectInt rect)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x32ACF20", Offset = "0x32AB520", VA = "0x1832ACF20")]
	public void Remove(Allocator2D.Alloc2D alloc)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x32ACB50", Offset = "0x32AB150", VA = "0x1832ACB50")]
	public void Commit()
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x32AD3D0", Offset = "0x32AB9D0", VA = "0x1832AD3D0")]
	private void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x32ACB90", Offset = "0x32AB190", VA = "0x1832ACB90")]
	private RenderTexture CreateAtlasTexture()
	{
		return null;
	}
}
