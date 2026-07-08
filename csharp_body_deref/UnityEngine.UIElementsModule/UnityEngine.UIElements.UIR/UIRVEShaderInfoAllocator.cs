using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004D7")]
internal struct UIRVEShaderInfoAllocator
{
	[Token(Token = "0x4000FBA")]
	[FieldOffset(Offset = "0x0")]
	private BaseShaderInfoStorage m_Storage;

	[Token(Token = "0x4000FBB")]
	[FieldOffset(Offset = "0x8")]
	private BitmapAllocator32 m_TransformAllocator;

	[Token(Token = "0x4000FBC")]
	[FieldOffset(Offset = "0x28")]
	private BitmapAllocator32 m_ClipRectAllocator;

	[Token(Token = "0x4000FBD")]
	[FieldOffset(Offset = "0x48")]
	private BitmapAllocator32 m_OpacityAllocator;

	[Token(Token = "0x4000FBE")]
	[FieldOffset(Offset = "0x68")]
	private BitmapAllocator32 m_ColorAllocator;

	[Token(Token = "0x4000FBF")]
	[FieldOffset(Offset = "0x88")]
	private BitmapAllocator32 m_TextSettingsAllocator;

	[Token(Token = "0x4000FC0")]
	[FieldOffset(Offset = "0xA8")]
	private bool m_StorageReallyCreated;

	[Token(Token = "0x4000FC1")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Vector2Int identityTransformTexel;

	[Token(Token = "0x4000FC2")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Vector2Int infiniteClipRectTexel;

	[Token(Token = "0x4000FC3")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Vector2Int fullOpacityTexel;

	[Token(Token = "0x4000FC4")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly Vector2Int clearColorTexel;

	[Token(Token = "0x4000FC5")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly Vector2Int defaultTextCoreSettingsTexel;

	[Token(Token = "0x4000FC6")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly Matrix4x4 identityTransformValue;

	[Token(Token = "0x4000FC7")]
	[FieldOffset(Offset = "0x68")]
	internal static readonly Vector4 identityTransformRow0Value;

	[Token(Token = "0x4000FC8")]
	[FieldOffset(Offset = "0x78")]
	internal static readonly Vector4 identityTransformRow1Value;

	[Token(Token = "0x4000FC9")]
	[FieldOffset(Offset = "0x88")]
	internal static readonly Vector4 identityTransformRow2Value;

	[Token(Token = "0x4000FCA")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly Vector4 infiniteClipRectValue;

	[Token(Token = "0x4000FCB")]
	[FieldOffset(Offset = "0xA8")]
	internal static readonly Vector4 fullOpacityValue;

	[Token(Token = "0x4000FCC")]
	[FieldOffset(Offset = "0xB8")]
	internal static readonly Vector4 clearColorValue;

	[Token(Token = "0x4000FCD")]
	[FieldOffset(Offset = "0xC8")]
	internal static readonly TextCoreSettings defaultTextCoreSettingsValue;

	[Token(Token = "0x4000FCE")]
	[FieldOffset(Offset = "0x108")]
	public static readonly BMPAlloc identityTransform;

	[Token(Token = "0x4000FCF")]
	[FieldOffset(Offset = "0x110")]
	public static readonly BMPAlloc infiniteClipRect;

	[Token(Token = "0x4000FD0")]
	[FieldOffset(Offset = "0x118")]
	public static readonly BMPAlloc fullOpacity;

	[Token(Token = "0x4000FD1")]
	[FieldOffset(Offset = "0x120")]
	public static readonly BMPAlloc clearColor;

	[Token(Token = "0x4000FD2")]
	[FieldOffset(Offset = "0x128")]
	public static readonly BMPAlloc defaultTextCoreSettings;

	[Token(Token = "0x1700078F")]
	private static int pageWidth
	{
		[Token(Token = "0x6001DF5")]
		[Address(RVA = "0x4C81840", Offset = "0x4C81840", VA = "0x4C81840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000790")]
	private static int pageHeight
	{
		[Token(Token = "0x6001DF6")]
		[Address(RVA = "0x4C81850", Offset = "0x4C81850", VA = "0x4C81850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000791")]
	public Texture atlas
	{
		[Token(Token = "0x6001DF9")]
		[Address(RVA = "0x4C81AF0", Offset = "0x4C81AF0", VA = "0x4C81AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x4C81860", Offset = "0x4C81860", VA = "0x4C81860")]
	private static Vector2Int AllocToTexelCoord(ref BitmapAllocator32 allocator, BMPAlloc alloc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x4C818F0", Offset = "0x4C818F0", VA = "0x4C818F0")]
	private static bool AtlasRectMatchesPage(ref BitmapAllocator32 allocator, BMPAlloc defAlloc, RectInt atlasRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x4C81F70", Offset = "0x4C81F70", VA = "0x4C81F70")]
	public void Construct()
	{
	}

	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x4C82170", Offset = "0x4C82170", VA = "0x4C82170")]
	private void ReallyCreateStorage()
	{
	}

	[Token(Token = "0x6001DFC")]
	[Address(RVA = "0x4C82710", Offset = "0x4C82710", VA = "0x4C82710")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x4C827A0", Offset = "0x4C827A0", VA = "0x4C827A0")]
	public void IssuePendingStorageChanges()
	{
	}

	[Token(Token = "0x6001DFE")]
	[Address(RVA = "0x4C7A200", Offset = "0x4C7A200", VA = "0x4C7A200")]
	public BMPAlloc AllocTransform()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x4C7D1D0", Offset = "0x4C7D1D0", VA = "0x4C7D1D0")]
	public BMPAlloc AllocClipRect()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x4C7D230", Offset = "0x4C7D230", VA = "0x4C7D230")]
	public BMPAlloc AllocOpacity()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x4C7E440", Offset = "0x4C7E440", VA = "0x4C7E440")]
	public BMPAlloc AllocColor()
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001E02")]
	[Address(RVA = "0x4C7DEE0", Offset = "0x4C7DEE0", VA = "0x4C7DEE0")]
	public BMPAlloc AllocTextCoreSettings(TextCoreSettings settings)
	{
		return default(BMPAlloc);
	}

	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x4C7ADA0", Offset = "0x4C7ADA0", VA = "0x4C7ADA0")]
	public void SetTransformValue(BMPAlloc alloc, Matrix4x4 xform)
	{
	}

	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x4C7D430", Offset = "0x4C7D430", VA = "0x4C7D430")]
	public void SetClipRectValue(BMPAlloc alloc, Vector4 clipRect)
	{
	}

	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x4C7D290", Offset = "0x4C7D290", VA = "0x4C7D290")]
	public void SetOpacityValue(BMPAlloc alloc, float opacity)
	{
	}

	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x4C7E4A0", Offset = "0x4C7E4A0", VA = "0x4C7E4A0")]
	public void SetColorValue(BMPAlloc alloc, Color color, bool isEditorContext)
	{
	}

	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x4C7DF40", Offset = "0x4C7DF40", VA = "0x4C7DF40")]
	public void SetTextCoreSettingValue(BMPAlloc alloc, TextCoreSettings settings, bool isEditorContext)
	{
	}

	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x4C7C430", Offset = "0x4C7C430", VA = "0x4C7C430")]
	public void FreeTransform(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x4C7C380", Offset = "0x4C7C380", VA = "0x4C7C380")]
	public void FreeClipRect(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x4C7C220", Offset = "0x4C7C220", VA = "0x4C7C220")]
	public void FreeOpacity(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x4C7C2D0", Offset = "0x4C7C2D0", VA = "0x4C7C2D0")]
	public void FreeColor(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x4C7C160", Offset = "0x4C7C160", VA = "0x4C7C160")]
	public void FreeTextCoreSettings(BMPAlloc alloc)
	{
	}

	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x4C827C0", Offset = "0x4C827C0", VA = "0x4C827C0")]
	public Color32 TransformAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x4C82900", Offset = "0x4C82900", VA = "0x4C82900")]
	public Color32 ClipRectAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001E0F")]
	[Address(RVA = "0x4C77520", Offset = "0x4C77520", VA = "0x4C77520")]
	public Color32 OpacityAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001E10")]
	[Address(RVA = "0x4C82A40", Offset = "0x4C82A40", VA = "0x4C82A40")]
	public Color32 ColorAllocToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x4C82B80", Offset = "0x4C82B80", VA = "0x4C82B80")]
	public Color32 TextCoreSettingsToVertexData(BMPAlloc alloc)
	{
		return default(Color32);
	}
}
