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

[Token(Token = "0x2000008")]
internal class DynamicAtlas : AtlasBase
{
	[Token(Token = "0x2000009")]
	private class TextureInfo : LinkedPoolItem<TextureInfo>
	{
		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x18")]
		public DynamicAtlasPage page;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x20")]
		public int counter;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x28")]
		public Allocator2D.Alloc2D alloc;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x58")]
		public RectInt rect;

		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x0")]
		public static readonly LinkedPool<TextureInfo> pool;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4F0C950", Offset = "0x4F0C950", VA = "0x4F0C950")]
		private static TextureInfo Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4F0CA00", Offset = "0x4F0CA00", VA = "0x4F0CA00")]
		private static void Reset(TextureInfo info)
		{
		}

		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4F0C9C0", Offset = "0x4F0C9C0", VA = "0x4F0C9C0")]
		public TextureInfo()
		{
		}
	}

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Texture, TextureInfo> m_Database;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x20")]
	private DynamicAtlasPage m_PointPage;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x28")]
	private DynamicAtlasPage m_BilinearPage;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x30")]
	private ColorSpace m_ColorSpace;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x38")]
	private List<IPanel> m_Panels;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x40")]
	private int m_MinAtlasSize;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x44")]
	private int m_MaxAtlasSize;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x48")]
	private int m_MaxSubTextureSize;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x4C")]
	private DynamicAtlasFilters m_ActiveFilters;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x50")]
	private DynamicAtlasCustomFilter m_CustomFilter;

	[Token(Token = "0x17000001")]
	internal bool isInitialized
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4F0BC80", Offset = "0x4F0BC80", VA = "0x4F0BC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public int minAtlasSize
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4F0C7A0", Offset = "0x4F0C7A0", VA = "0x4F0C7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public int maxAtlasSize
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4F0C7C0", Offset = "0x4F0C7C0", VA = "0x4F0C7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4F0C7E0", Offset = "0x4F0C7E0", VA = "0x4F0C7E0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000005")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4F0C7F0", Offset = "0x4F0C7F0", VA = "0x4F0C7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4F0C790", Offset = "0x4F0C790", VA = "0x4F0C790")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4F0C810", Offset = "0x4F0C810", VA = "0x4F0C810")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4F0C830", Offset = "0x4F0C830", VA = "0x4F0C830")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4F0BCA0", Offset = "0x4F0BCA0", VA = "0x4F0BCA0", Slot = "7")]
	protected override void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4F0BD60", Offset = "0x4F0BD60", VA = "0x4F0BD60", Slot = "8")]
	protected override void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4F0BE90", Offset = "0x4F0BE90", VA = "0x4F0BE90", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4F0BF40", Offset = "0x4F0BF40", VA = "0x4F0BF40")]
	private void InitPages()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4F0BDF0", Offset = "0x4F0BDF0", VA = "0x4F0BDF0")]
	private void DestroyPages()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4F0C040", Offset = "0x4F0C040", VA = "0x4F0C040", Slot = "4")]
	public override bool TryGetAtlas(VisualElement ve, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4F0C470", Offset = "0x4F0C470", VA = "0x4F0C470", Slot = "5")]
	public override void ReturnAtlas(VisualElement ve, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4F0C5C0", Offset = "0x4F0C5C0", VA = "0x4F0C5C0", Slot = "9")]
	protected override void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4F0C630", Offset = "0x4F0C630", VA = "0x4F0C630")]
	internal static bool IsTextureFormatSupported(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4F0C650", Offset = "0x4F0C650", VA = "0x4F0C650", Slot = "10")]
	public virtual bool IsTextureValid(Texture2D texture, FilterMode atlasFilterMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4F0C880", Offset = "0x4F0C880", VA = "0x4F0C880")]
	public DynamicAtlas()
	{
	}
}
