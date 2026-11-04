// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E8")]
internal class UIRVEShaderInfoAllocator
{
	[Token(Token = "0x40015FC")]
	[FieldOffset(Offset = "0x10")]
	private BaseShaderInfoStorage m_Storage;

	[Token(Token = "0x40015FD")]
	[FieldOffset(Offset = "0x18")]
	private BitmapAllocator32 m_TransformAllocator;

	[Token(Token = "0x40015FE")]
	[FieldOffset(Offset = "0x38")]
	private BitmapAllocator32 m_ClipRectAllocator;

	[Token(Token = "0x40015FF")]
	[FieldOffset(Offset = "0x58")]
	private BitmapAllocator32 m_OpacityAllocator;

	[Token(Token = "0x4001600")]
	[FieldOffset(Offset = "0x78")]
	private BitmapAllocator32 m_ColorAllocator;

	[Token(Token = "0x4001601")]
	[FieldOffset(Offset = "0x98")]
	private BitmapAllocator32 m_TextSettingsAllocator;

	[Token(Token = "0x4001602")]
	[FieldOffset(Offset = "0xB8")]
	private bool m_StorageReallyCreated;

	[Token(Token = "0x4001603")]
	[FieldOffset(Offset = "0xBC")]
	private ColorSpace m_ColorSpace;

	[Token(Token = "0x4001604")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2Int identityTransformTexel;

	[Token(Token = "0x4001605")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2Int infiniteClipRectTexel;

	[Token(Token = "0x4001606")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2Int fullOpacityTexel;

	[Token(Token = "0x4001607")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2Int clearColorTexel;

	[Token(Token = "0x4001608")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2Int defaultTextCoreSettingsTexel;

	[Token(Token = "0x4001609")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Matrix4x4 identityTransformValue;

	[Token(Token = "0x400160A")]
	[FieldOffset(Offset = "0x68")]
	private static readonly Vector4 identityTransformRow0Value;

	[Token(Token = "0x400160B")]
	[FieldOffset(Offset = "0x78")]
	private static readonly Vector4 identityTransformRow1Value;

	[Token(Token = "0x400160C")]
	[FieldOffset(Offset = "0x88")]
	private static readonly Vector4 identityTransformRow2Value;

	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x98")]
	private static readonly Vector4 infiniteClipRectValue;

	[Token(Token = "0x400160E")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly Vector4 fullOpacityValue;

	[Token(Token = "0x400160F")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly Vector4 clearColorValue;

	[Token(Token = "0x4001610")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly TextCoreSettings defaultTextCoreSettingsValue;

	[Token(Token = "0x4001611")]
	[FieldOffset(Offset = "0x108")]
	public static readonly BMPAlloc identityTransform;

	[Token(Token = "0x4001612")]
	[FieldOffset(Offset = "0x110")]
	public static readonly BMPAlloc infiniteClipRect;

	[Token(Token = "0x4001613")]
	[FieldOffset(Offset = "0x118")]
	public static readonly BMPAlloc fullOpacity;

	[Token(Token = "0x4001614")]
	[FieldOffset(Offset = "0x120")]
	public static readonly BMPAlloc clearColor;

	[Token(Token = "0x4001615")]
	[FieldOffset(Offset = "0x128")]
	public static readonly BMPAlloc defaultTextCoreSettings;

	[Token(Token = "0x4001616")]
	[FieldOffset(Offset = "0x130")]
	private static int s_DefaultShaderInfoTextureRefCount;

	[Token(Token = "0x4001617")]
	[FieldOffset(Offset = "0x138")]
	private static Texture2D s_DefaultShaderInfoTexture;

	[Token(Token = "0x17000AAD")]
	private static int pageWidth
	{
		[Token(Token = "0x6002BA5")]
		[Address(RVA = "0x2FD9D20", Offset = "0x2FD8320", VA = "0x182FD9D20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AAE")]
	private static int pageHeight
	{
		[Token(Token = "0x6002BA6")]
		[Address(RVA = "0x31B60A0", Offset = "0x31B46A0", VA = "0x1831B60A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AAF")]
	public Texture atlas
	{
		[Token(Token = "0x6002BAB")]
		[Address(RVA = "0x31B6010", Offset = "0x31B4610", VA = "0x1831B6010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BA7")]
	[Address(RVA = "0x31B3490", Offset = "0x31B1A90", VA = "0x1831B3490")]
	private static void AcquireDefaultShaderInfoTexture()
	{
	}

	[Token(Token = "0x6002BA8")]
	[Address(RVA = "0x31B4F60", Offset = "0x31B3560", VA = "0x1831B4F60")]
	private static void ReleaseDefaultShaderInfoTexture()
	{
	}

	[Token(Token = "0x6002BA9")]
	[Address(RVA = "0x31B3950", Offset = "0x31B1F50", VA = "0x1831B3950")]
	private static Vector2Int AllocToTexelCoord(ref BitmapAllocator32 allocator, BMPAlloc alloc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6002BAA")]
	[Address(RVA = "0x31B3A10", Offset = "0x31B2010", VA = "0x1831B3A10")]
	private static bool AtlasRectMatchesPage(ref BitmapAllocator32 allocator, BMPAlloc defAlloc, RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BAC")]
	[Address(RVA = "0x31B5DE0", Offset = "0x31B43E0", VA = "0x1831B5DE0")]
	public UIRVEShaderInfoAllocator(ColorSpace colorSpace)
	{
	}

	[Token(Token = "0x6002BAD")]
	[Address(RVA = "0x31B43F0", Offset = "0x31B29F0", VA = "0x1831B43F0")]
	private void ReallyCreateStorage()
	{
	}

	[Token(Token = "0x6002BAE")]
	[Address(RVA = "0x31B3DF0", Offset = "0x31B23F0", VA = "0x1831B3DF0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002BAF")]
	[Address(RVA = "0x31B42B0", Offset = "0x31B28B0", VA = "0x1831B42B0")]
	public void IssuePendingStorageChanges()
	{
	}

	[Token(Token = "0x6002BB0")]
	[Address(RVA = "0x31B39E0", Offset = "0x31B1FE0", VA = "0x1831B39E0")]
	public BMPAlloc AllocTransform()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BB1")]
	[Address(RVA = "0x31B3880", Offset = "0x31B1E80", VA = "0x1831B3880")]
	public BMPAlloc AllocClipRect()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BB2")]
	[Address(RVA = "0x31B38E0", Offset = "0x31B1EE0", VA = "0x1831B38E0")]
	public BMPAlloc AllocOpacity()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BB3")]
	[Address(RVA = "0x31B38B0", Offset = "0x31B1EB0", VA = "0x1831B38B0")]
	public BMPAlloc AllocColor()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BB4")]
	[Address(RVA = "0x31B3910", Offset = "0x31B1F10", VA = "0x1831B3910")]
	public BMPAlloc AllocTextCoreSettings(TextCoreSettings settings)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002BB5")]
	[Address(RVA = "0x31B5690", Offset = "0x31B3C90", VA = "0x1831B5690")]
	public void SetTransformValue(BMPAlloc alloc, Matrix4x4 xform)
	{
	}

	[Token(Token = "0x6002BB6")]
	[Address(RVA = "0x31B5060", Offset = "0x31B3660", VA = "0x1831B5060")]
	public void SetClipRectValue(BMPAlloc alloc, Vector4 clipRect)
	{
	}

	[Token(Token = "0x6002BB7")]
	[Address(RVA = "0x31B5240", Offset = "0x31B3840", VA = "0x1831B5240")]
	public void SetOpacityValue(BMPAlloc alloc, float opacity)
	{
	}

	[Token(Token = "0x6002BB8")]
	[Address(RVA = "0x31B5150", Offset = "0x31B3750", VA = "0x1831B5150")]
	public void SetColorValue(BMPAlloc alloc, Color color)
	{
	}

	[Token(Token = "0x6002BB9")]
	[Address(RVA = "0x31B5360", Offset = "0x31B3960", VA = "0x1831B5360")]
	public void SetTextCoreSettingValue(BMPAlloc alloc, TextCoreSettings settings)
	{
	}

	[Token(Token = "0x6002BBA")]
	[Address(RVA = "0x31B4210", Offset = "0x31B2810", VA = "0x1831B4210")]
	public void FreeTransform(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BBB")]
	[Address(RVA = "0x31B3F90", Offset = "0x31B2590", VA = "0x1831B3F90")]
	public void FreeClipRect(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BBC")]
	[Address(RVA = "0x31B40D0", Offset = "0x31B26D0", VA = "0x1831B40D0")]
	public void FreeOpacity(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BBD")]
	[Address(RVA = "0x31B4030", Offset = "0x31B2630", VA = "0x1831B4030")]
	public void FreeColor(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BBE")]
	[Address(RVA = "0x31B4170", Offset = "0x31B2770", VA = "0x1831B4170")]
	public void FreeTextCoreSettings(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002BBF")]
	[Address(RVA = "0x31B5990", Offset = "0x31B3F90", VA = "0x1831B5990")]
	public Color32 TransformAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002BC0")]
	[Address(RVA = "0x31B3BA0", Offset = "0x31B21A0", VA = "0x1831B3BA0")]
	public Color32 ClipRectAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002BC1")]
	[Address(RVA = "0x31B42D0", Offset = "0x31B28D0", VA = "0x1831B42D0")]
	public Color32 OpacityAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002BC2")]
	[Address(RVA = "0x31B3CC0", Offset = "0x31B22C0", VA = "0x1831B3CC0")]
	public Color32 ColorAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002BC3")]
	[Address(RVA = "0x31B5860", Offset = "0x31B3E60", VA = "0x1831B5860")]
	public Color32 TextCoreSettingsToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}
}
