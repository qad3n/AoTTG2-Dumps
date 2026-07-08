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
		[Address(RVA = "0x4BE5020", Offset = "0x4BE5020", VA = "0x4BE5020")]
		private static TextureInfo Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4BE50D0", Offset = "0x4BE50D0", VA = "0x4BE50D0")]
		private static void Reset(TextureInfo info)
		{
		}

		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4BE5090", Offset = "0x4BE5090", VA = "0x4BE5090")]
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
		[Address(RVA = "0x4BE4350", Offset = "0x4BE4350", VA = "0x4BE4350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public int minAtlasSize
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4BE4E70", Offset = "0x4BE4E70", VA = "0x4BE4E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public int maxAtlasSize
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4BE4E90", Offset = "0x4BE4E90", VA = "0x4BE4E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4BE4EB0", Offset = "0x4BE4EB0", VA = "0x4BE4EB0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000005")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4BE4EC0", Offset = "0x4BE4EC0", VA = "0x4BE4EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4BE4E60", Offset = "0x4BE4E60", VA = "0x4BE4E60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4BE4EE0", Offset = "0x4BE4EE0", VA = "0x4BE4EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4BE4F00", Offset = "0x4BE4F00", VA = "0x4BE4F00")]
		set
		{
		}
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4BE4370", Offset = "0x4BE4370", VA = "0x4BE4370", Slot = "7")]
	protected override void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4BE4430", Offset = "0x4BE4430", VA = "0x4BE4430", Slot = "8")]
	protected override void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4BE4560", Offset = "0x4BE4560", VA = "0x4BE4560", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4BE4610", Offset = "0x4BE4610", VA = "0x4BE4610")]
	private void InitPages()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4BE44C0", Offset = "0x4BE44C0", VA = "0x4BE44C0")]
	private void DestroyPages()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4BE4710", Offset = "0x4BE4710", VA = "0x4BE4710", Slot = "4")]
	public override bool TryGetAtlas(VisualElement ve, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4BE4B40", Offset = "0x4BE4B40", VA = "0x4BE4B40", Slot = "5")]
	public override void ReturnAtlas(VisualElement ve, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4BE4C90", Offset = "0x4BE4C90", VA = "0x4BE4C90", Slot = "9")]
	protected override void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4BE4D00", Offset = "0x4BE4D00", VA = "0x4BE4D00")]
	internal static bool IsTextureFormatSupported(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4BE4D20", Offset = "0x4BE4D20", VA = "0x4BE4D20", Slot = "10")]
	public virtual bool IsTextureValid(Texture2D texture, FilterMode atlasFilterMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4BE4F50", Offset = "0x4BE4F50", VA = "0x4BE4F50")]
	public DynamicAtlas()
	{
	}
}
