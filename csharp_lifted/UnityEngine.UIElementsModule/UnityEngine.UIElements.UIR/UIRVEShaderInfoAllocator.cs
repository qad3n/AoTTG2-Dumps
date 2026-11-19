// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005CC")]
internal class UIRVEShaderInfoAllocator
{
	[Token(Token = "0x4001525")]
	[FieldOffset(Offset = "0x10")]
	private BaseShaderInfoStorage m_Storage;

	[Token(Token = "0x4001526")]
	[FieldOffset(Offset = "0x18")]
	private BitmapAllocator32 m_TransformAllocator;

	[Token(Token = "0x4001527")]
	[FieldOffset(Offset = "0x38")]
	private BitmapAllocator32 m_ClipRectAllocator;

	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0x58")]
	private BitmapAllocator32 m_OpacityAllocator;

	[Token(Token = "0x4001529")]
	[FieldOffset(Offset = "0x78")]
	private BitmapAllocator32 m_ColorAllocator;

	[Token(Token = "0x400152A")]
	[FieldOffset(Offset = "0x98")]
	private BitmapAllocator32 m_TextSettingsAllocator;

	[Token(Token = "0x400152B")]
	[FieldOffset(Offset = "0xB8")]
	private bool m_StorageReallyCreated;

	[Token(Token = "0x400152C")]
	[FieldOffset(Offset = "0xBC")]
	private ColorSpace m_ColorSpace;

	[Token(Token = "0x400152D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2Int identityTransformTexel;

	[Token(Token = "0x400152E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2Int infiniteClipRectTexel;

	[Token(Token = "0x400152F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2Int fullOpacityTexel;

	[Token(Token = "0x4001530")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2Int clearColorTexel;

	[Token(Token = "0x4001531")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2Int defaultTextCoreSettingsTexel;

	[Token(Token = "0x4001532")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Matrix4x4 identityTransformValue;

	[Token(Token = "0x4001533")]
	[FieldOffset(Offset = "0x68")]
	private static readonly Vector4 identityTransformRow0Value;

	[Token(Token = "0x4001534")]
	[FieldOffset(Offset = "0x78")]
	private static readonly Vector4 identityTransformRow1Value;

	[Token(Token = "0x4001535")]
	[FieldOffset(Offset = "0x88")]
	private static readonly Vector4 identityTransformRow2Value;

	[Token(Token = "0x4001536")]
	[FieldOffset(Offset = "0x98")]
	private static readonly Vector4 infiniteClipRectValue;

	[Token(Token = "0x4001537")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly Vector4 fullOpacityValue;

	[Token(Token = "0x4001538")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly Vector4 clearColorValue;

	[Token(Token = "0x4001539")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly TextCoreSettings defaultTextCoreSettingsValue;

	[Token(Token = "0x400153A")]
	[FieldOffset(Offset = "0x108")]
	public static readonly BMPAlloc identityTransform;

	[Token(Token = "0x400153B")]
	[FieldOffset(Offset = "0x110")]
	public static readonly BMPAlloc infiniteClipRect;

	[Token(Token = "0x400153C")]
	[FieldOffset(Offset = "0x118")]
	public static readonly BMPAlloc fullOpacity;

	[Token(Token = "0x400153D")]
	[FieldOffset(Offset = "0x120")]
	public static readonly BMPAlloc clearColor;

	[Token(Token = "0x400153E")]
	[FieldOffset(Offset = "0x128")]
	public static readonly BMPAlloc defaultTextCoreSettings;

	[Token(Token = "0x400153F")]
	[FieldOffset(Offset = "0x130")]
	private static int s_DefaultShaderInfoTextureRefCount;

	[Token(Token = "0x4001540")]
	[FieldOffset(Offset = "0x138")]
	private static Texture2D s_DefaultShaderInfoTexture;

	[Token(Token = "0x17000A9F")]
	private static int pageWidth
	{
		[Token(Token = "0x6002B2A")]
		[Address(RVA = "0x6BAD650", Offset = "0x6BAC650", VA = "0x6BAD650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA0")]
	private static int pageHeight
	{
		[Token(Token = "0x6002B2B")]
		[Address(RVA = "0x6BAD660", Offset = "0x6BAC660", VA = "0x6BAD660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA1")]
	public Texture atlas
	{
		[Token(Token = "0x6002B30")]
		[Address(RVA = "0x6BADCE0", Offset = "0x6BACCE0", VA = "0x6BADCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B2C")]
	[Address(RVA = "0x6BAD670", Offset = "0x6BAC670", VA = "0x6BAD670")]
	private static void AcquireDefaultShaderInfoTexture()
	{
	}

	[Token(Token = "0x6002B2D")]
	[Address(RVA = "0x6BAD9B0", Offset = "0x6BAC9B0", VA = "0x6BAD9B0")]
	private static void ReleaseDefaultShaderInfoTexture()
	{
	}

	[Token(Token = "0x6002B2E")]
	[Address(RVA = "0x6BADAA0", Offset = "0x6BACAA0", VA = "0x6BADAA0")]
	private static Vector2Int AllocToTexelCoord(ref BitmapAllocator32 allocator, BMPAlloc alloc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6002B2F")]
	[Address(RVA = "0x6BADB30", Offset = "0x6BACB30", VA = "0x6BADB30")]
	private static bool AtlasRectMatchesPage(ref BitmapAllocator32 allocator, BMPAlloc defAlloc, RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B31")]
	[Address(RVA = "0x6BADD70", Offset = "0x6BACD70", VA = "0x6BADD70")]
	public UIRVEShaderInfoAllocator(ColorSpace colorSpace)
	{
	}

	[Token(Token = "0x6002B32")]
	[Address(RVA = "0x6BADF70", Offset = "0x6BACF70", VA = "0x6BADF70")]
	private void ReallyCreateStorage()
	{
	}

	[Token(Token = "0x6002B33")]
	[Address(RVA = "0x6BAEF40", Offset = "0x6BADF40", VA = "0x6BAEF40")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B34")]
	[Address(RVA = "0x6BAF010", Offset = "0x6BAE010", VA = "0x6BAF010")]
	public void IssuePendingStorageChanges()
	{
	}

	[Token(Token = "0x6002B35")]
	[Address(RVA = "0x6BAF030", Offset = "0x6BAE030", VA = "0x6BAF030")]
	public BMPAlloc AllocTransform()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B36")]
	[Address(RVA = "0x6BAF060", Offset = "0x6BAE060", VA = "0x6BAF060")]
	public BMPAlloc AllocClipRect()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B37")]
	[Address(RVA = "0x6BAF090", Offset = "0x6BAE090", VA = "0x6BAF090")]
	public BMPAlloc AllocOpacity()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B38")]
	[Address(RVA = "0x6BAF0C0", Offset = "0x6BAE0C0", VA = "0x6BAF0C0")]
	public BMPAlloc AllocColor()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B39")]
	[Address(RVA = "0x6BAF0F0", Offset = "0x6BAE0F0", VA = "0x6BAF0F0")]
	public BMPAlloc AllocTextCoreSettings(TextCoreSettings settings)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6002B3A")]
	[Address(RVA = "0x6BAE490", Offset = "0x6BAD490", VA = "0x6BAE490")]
	public void SetTransformValue(BMPAlloc alloc, Matrix4x4 xform)
	{
	}

	[Token(Token = "0x6002B3B")]
	[Address(RVA = "0x6BAE6E0", Offset = "0x6BAD6E0", VA = "0x6BAE6E0")]
	public void SetClipRectValue(BMPAlloc alloc, Vector4 clipRect)
	{
	}

	[Token(Token = "0x6002B3C")]
	[Address(RVA = "0x6BAE880", Offset = "0x6BAD880", VA = "0x6BAE880")]
	public void SetOpacityValue(BMPAlloc alloc, float opacity)
	{
	}

	[Token(Token = "0x6002B3D")]
	[Address(RVA = "0x6BAEA20", Offset = "0x6BADA20", VA = "0x6BAEA20")]
	public void SetColorValue(BMPAlloc alloc, Color color)
	{
	}

	[Token(Token = "0x6002B3E")]
	[Address(RVA = "0x6BAEBD0", Offset = "0x6BADBD0", VA = "0x6BAEBD0")]
	public void SetTextCoreSettingValue(BMPAlloc alloc, TextCoreSettings settings)
	{
	}

	[Token(Token = "0x6002B3F")]
	[Address(RVA = "0x6BAF120", Offset = "0x6BAE120", VA = "0x6BAF120")]
	public void FreeTransform(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B40")]
	[Address(RVA = "0x6BAF1E0", Offset = "0x6BAE1E0", VA = "0x6BAF1E0")]
	public void FreeClipRect(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B41")]
	[Address(RVA = "0x6BAF2A0", Offset = "0x6BAE2A0", VA = "0x6BAF2A0")]
	public void FreeOpacity(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B42")]
	[Address(RVA = "0x6BAF360", Offset = "0x6BAE360", VA = "0x6BAF360")]
	public void FreeColor(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B43")]
	[Address(RVA = "0x6BAF420", Offset = "0x6BAE420", VA = "0x6BAF420")]
	public void FreeTextCoreSettings(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6002B44")]
	[Address(RVA = "0x6BAF4E0", Offset = "0x6BAE4E0", VA = "0x6BAF4E0")]
	public Color32 TransformAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002B45")]
	[Address(RVA = "0x6BAF620", Offset = "0x6BAE620", VA = "0x6BAF620")]
	public Color32 ClipRectAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002B46")]
	[Address(RVA = "0x6BA9660", Offset = "0x6BA8660", VA = "0x6BA9660")]
	public Color32 OpacityAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002B47")]
	[Address(RVA = "0x6BAF760", Offset = "0x6BAE760", VA = "0x6BAF760")]
	public Color32 ColorAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6002B48")]
	[Address(RVA = "0x6BAF8A0", Offset = "0x6BAE8A0", VA = "0x6BAF8A0")]
	public Color32 TextCoreSettingsToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}
}
