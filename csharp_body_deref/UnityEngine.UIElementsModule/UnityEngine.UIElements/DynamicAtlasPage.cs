using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000251")]
internal class DynamicAtlasPage : IDisposable
{
	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly Vector2Int _003CminSize_003Ek__BackingField;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly Vector2Int _003CmaxSize_003Ek__BackingField;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x38")]
	private readonly int m_1Padding;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x3C")]
	private readonly int m_2Padding;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x40")]
	private Allocator2D m_Allocator;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x48")]
	private TextureBlitter m_Blitter;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x50")]
	private Vector2Int m_CurrentSize;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x0")]
	private static int s_TextureCounter;

	[Token(Token = "0x170002F4")]
	public TextureId textureId
	{
		[Token(Token = "0x6000F47")]
		[Address(RVA = "0x4D4A480", Offset = "0x4D4A480", VA = "0x4D4A480")]
		[CompilerGenerated]
		get
		{
			return default(TextureId);
		}
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x4D4A490", Offset = "0x4D4A490", VA = "0x4D4A490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002F5")]
	public RenderTexture atlas
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x4D4A4A0", Offset = "0x4D4A4A0", VA = "0x4D4A4A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x4D4A4B0", Offset = "0x4D4A4B0", VA = "0x4D4A4B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002F6")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x4D4A4C0", Offset = "0x4D4A4C0", VA = "0x4D4A4C0")]
		[CompilerGenerated]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x170002F7")]
	public FilterMode filterMode
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x4D4A4D0", Offset = "0x4D4A4D0", VA = "0x4D4A4D0")]
		[CompilerGenerated]
		get
		{
			return default(FilterMode);
		}
	}

	[Token(Token = "0x170002F8")]
	protected bool disposed
	{
		[Token(Token = "0x6000F4E")]
		[Address(RVA = "0x4D4A6A0", Offset = "0x4D4A6A0", VA = "0x4D4A6A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x4D4A6B0", Offset = "0x4D4A6B0", VA = "0x4D4A6B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4D4A4E0", Offset = "0x4D4A4E0", VA = "0x4D4A4E0")]
	public DynamicAtlasPage(RenderTextureFormat format, FilterMode filterMode, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4D4A6C0", Offset = "0x4D4A6C0", VA = "0x4D4A6C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x4D4A730", Offset = "0x4D4A730", VA = "0x4D4A730", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x4D4AD10", Offset = "0x4D4AD10", VA = "0x4D4AD10")]
	public bool TryAdd(Texture2D image, out Allocator2D.Alloc2D alloc, out RectInt rect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x4D4B010", Offset = "0x4D4B010", VA = "0x4D4B010")]
	public void Update(Texture2D image, RectInt rect)
	{
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x4D4B150", Offset = "0x4D4B150", VA = "0x4D4B150")]
	public void Remove(Allocator2D.Alloc2D alloc)
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x4D4B230", Offset = "0x4D4B230", VA = "0x4D4B230")]
	public void Commit()
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x4D4B270", Offset = "0x4D4B270", VA = "0x4D4B270")]
	private void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4D4B650", Offset = "0x4D4B650", VA = "0x4D4B650")]
	private RenderTexture CreateAtlasTexture()
	{
		return null;
	}
}
