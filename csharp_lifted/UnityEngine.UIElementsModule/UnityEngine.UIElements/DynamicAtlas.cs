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
		[Address(RVA = "0x6A7AA60", Offset = "0x6A79A60", VA = "0x6A7AA60")]
		private static TextureInfo Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x6A7AB10", Offset = "0x6A79B10", VA = "0x6A7AB10")]
		private static void Reset(TextureInfo info)
		{
		}

		[Token(Token = "0x600002A")]
		[Address(RVA = "0x6A7AAD0", Offset = "0x6A79AD0", VA = "0x6A7AAD0")]
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
		[Address(RVA = "0x6A79DC0", Offset = "0x6A78DC0", VA = "0x6A79DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public int minAtlasSize
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x6A7A8B0", Offset = "0x6A798B0", VA = "0x6A7A8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public int maxAtlasSize
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x6A7A8D0", Offset = "0x6A798D0", VA = "0x6A7A8D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x6A7A8F0", Offset = "0x6A798F0", VA = "0x6A7A8F0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000005")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x6A7A900", Offset = "0x6A79900", VA = "0x6A7A900")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x6A7A8A0", Offset = "0x6A798A0", VA = "0x6A7A8A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x6A7A920", Offset = "0x6A79920", VA = "0x6A7A920")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x6A7A940", Offset = "0x6A79940", VA = "0x6A7A940")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6A79DE0", Offset = "0x6A78DE0", VA = "0x6A79DE0", Slot = "7")]
	protected override void OnAssignedToPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6A79EA0", Offset = "0x6A78EA0", VA = "0x6A79EA0", Slot = "8")]
	protected override void OnRemovedFromPanel(IPanel panel)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x6A79FD0", Offset = "0x6A78FD0", VA = "0x6A79FD0", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6A7A080", Offset = "0x6A79080", VA = "0x6A7A080")]
	private void InitPages()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6A79F30", Offset = "0x6A78F30", VA = "0x6A79F30")]
	private void DestroyPages()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6A7A1B0", Offset = "0x6A791B0", VA = "0x6A7A1B0", Slot = "4")]
	public override bool TryGetAtlas(VisualElement ve, Texture2D src, out TextureId atlas, out RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6A7A580", Offset = "0x6A79580", VA = "0x6A7A580", Slot = "5")]
	public override void ReturnAtlas(VisualElement ve, Texture2D src, TextureId atlas)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6A7A6D0", Offset = "0x6A796D0", VA = "0x6A7A6D0", Slot = "9")]
	protected override void OnUpdateDynamicTextures(IPanel panel)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6A7A740", Offset = "0x6A79740", VA = "0x6A7A740")]
	internal static bool IsTextureFormatSupported(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6A7A760", Offset = "0x6A79760", VA = "0x6A7A760", Slot = "10")]
	public virtual bool IsTextureValid(Texture2D texture, FilterMode atlasFilterMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6A7A990", Offset = "0x6A79990", VA = "0x6A7A990")]
	public DynamicAtlas()
	{
	}
}
