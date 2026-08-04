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
		[Address(RVA = "0x5071DB0", Offset = "0x5071DB0", VA = "0x5071DB0")]
		[CompilerGenerated]
		get
		{
			return default(TextureId);
		}
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x5071DC0", Offset = "0x5071DC0", VA = "0x5071DC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002F5")]
	public RenderTexture atlas
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x5071DD0", Offset = "0x5071DD0", VA = "0x5071DD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x5071DE0", Offset = "0x5071DE0", VA = "0x5071DE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002F6")]
	public RenderTextureFormat format
	{
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x5071DF0", Offset = "0x5071DF0", VA = "0x5071DF0")]
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
		[Address(RVA = "0x5071E00", Offset = "0x5071E00", VA = "0x5071E00")]
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
		[Address(RVA = "0x5071FD0", Offset = "0x5071FD0", VA = "0x5071FD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x5071FE0", Offset = "0x5071FE0", VA = "0x5071FE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x5071E10", Offset = "0x5071E10", VA = "0x5071E10")]
	public DynamicAtlasPage(RenderTextureFormat format, FilterMode filterMode, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x5071FF0", Offset = "0x5071FF0", VA = "0x5071FF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x5072060", Offset = "0x5072060", VA = "0x5072060", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x5072640", Offset = "0x5072640", VA = "0x5072640")]
	public bool TryAdd(Texture2D image, out Allocator2D.Alloc2D alloc, out RectInt rect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x5072940", Offset = "0x5072940", VA = "0x5072940")]
	public void Update(Texture2D image, RectInt rect)
	{
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x5072A80", Offset = "0x5072A80", VA = "0x5072A80")]
	public void Remove(Allocator2D.Alloc2D alloc)
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x5072B60", Offset = "0x5072B60", VA = "0x5072B60")]
	public void Commit()
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x5072BA0", Offset = "0x5072BA0", VA = "0x5072BA0")]
	private void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x5072F80", Offset = "0x5072F80", VA = "0x5072F80")]
	private RenderTexture CreateAtlasTexture()
	{
		return null;
	}
}
