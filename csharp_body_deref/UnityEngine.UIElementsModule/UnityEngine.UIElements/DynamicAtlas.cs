// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DynamicAtlas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000009")]
internal class DynamicAtlas : AtlasBase
{
	[Token(Token = "0x200000A")]
	internal class TextureInfo : LinkedPoolItem<TextureInfo>
	{
		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x18")]
		public DynamicAtlasPage page;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x20")]
		public int counter;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x28")]
		public Allocator2D.Alloc2D alloc;

		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x58")]
		public RectInt rect;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x0")]
		public static readonly LinkedPool<TextureInfo> pool;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3096D00", Offset = "0x3095300", VA = "0x183096D00")]
		private static TextureInfo Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3096D70", Offset = "0x3095370", VA = "0x183096D70")]
		private static void Reset(TextureInfo info)
		{
		}

		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3096EE0", Offset = "0x30954E0", VA = "0x183096EE0")]
		public TextureInfo()
		{
		}
	}

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Texture, TextureInfo> m_Database;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x20")]
	private DynamicAtlasPage m_PointPage;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x28")]
	private DynamicAtlasPage m_BilinearPage;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x30")]
	private ColorSpace m_ColorSpace;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x38")]
	private List<IPanel> m_Panels;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x40")]
	private int m_MinAtlasSize;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x44")]
	private int m_MaxAtlasSize;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x48")]
	private int m_MaxSubTextureSize;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x4C")]
	private DynamicAtlasFilters m_ActiveFilters;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x50")]
	private DynamicAtlasCustomFilter m_CustomFilter;

	[Token(Token = "0x17000001")]
	internal bool isInitialized
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x3091870", Offset = "0x308FE70", VA = "0x183091870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public int minAtlasSize
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x3091940", Offset = "0x308FF40", VA = "0x183091940")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public int maxAtlasSize
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3091900", Offset = "0x308FF00", VA = "0x183091900")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x26C39F0", Offset = "0x26C1FF0", VA = "0x1826C39F0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000005")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3091890", Offset = "0x308FE90", VA = "0x183091890")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x2E926C0", Offset = "0x2E90CC0", VA = "0x182E926C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3091920", Offset = "0x308FF20", VA = "0x183091920")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x30918B0", Offset = "0x308FEB0", VA = "0x1830918B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3090CC0", Offset = "0x308F2C0", VA = "0x183090CC0", Slot = "7")]
	protected override void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3090D90", Offset = "0x308F390", VA = "0x183090D90", Slot = "8")]
	protected override void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3090EA0", Offset = "0x308F4A0", VA = "0x183090EA0", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3090920", Offset = "0x308EF20", VA = "0x183090920")]
	private void InitPages()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3090890", Offset = "0x308EE90", VA = "0x183090890")]
	private void DestroyPages()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3091180", Offset = "0x308F780", VA = "0x183091180", Slot = "4")]
	public override bool TryGetAtlas(VisualElement ve, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3091020", Offset = "0x308F620", VA = "0x183091020", Slot = "5")]
	public override void ReturnAtlas(VisualElement ve, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3090E20", Offset = "0x308F420", VA = "0x183090E20", Slot = "9")]
	protected override void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3090A70", Offset = "0x308F070", VA = "0x183090A70")]
	internal static bool IsTextureFormatSupported(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3090B00", Offset = "0x308F100", VA = "0x183090B00", Slot = "10")]
	public virtual bool IsTextureValid(Texture2D texture, FilterMode atlasFilterMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3091710", Offset = "0x308FD10", VA = "0x183091710")]
	public DynamicAtlas()
	{
	}
}
