// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Image
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000E1")]
public class Image : VisualElement
{
	[Token(Token = "0x20000E2")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Image, UxmlTraits>
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x31E3980", Offset = "0x31E1F80", VA = "0x1831E3980")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000E3")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x31E78E0", Offset = "0x31E5EE0", VA = "0x1831E78E0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId sourceProperty;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId imageProperty;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId spriteProperty;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId vectorImageProperty;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId sourceRectProperty;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x2F8")]
	internal static readonly BindingId uvProperty;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x390")]
	internal static readonly BindingId scaleModeProperty;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x428")]
	internal static readonly BindingId tintColorProperty;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x2C8")]
	private ScaleMode m_ScaleMode;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x2D0")]
	private Object m_Image;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x2D8")]
	private Rect m_UV;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x2E8")]
	private Color m_TintColor;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x2F8")]
	internal bool m_ImageIsInline;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x2F9")]
	internal bool m_ScaleModeIsInline;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x2FA")]
	internal bool m_TintColorIsInline;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x4C0")]
	public static readonly string ussClassName;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x4C8")]
	private static CustomStyleProperty<Texture2D> s_ImageProperty;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x4D0")]
	private static CustomStyleProperty<Sprite> s_SpriteProperty;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x4D8")]
	private static CustomStyleProperty<VectorImage> s_VectorImageProperty;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x4E0")]
	private static CustomStyleProperty<string> s_ScaleModeProperty;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x4E8")]
	private static CustomStyleProperty<Color> s_TintColorProperty;

	[Token(Token = "0x17000102")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[CreateProperty]
	internal Object source
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x31DCDE0", Offset = "0x31DB3E0", VA = "0x1831DCDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	[CreateProperty]
	public Texture image
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x31DC930", Offset = "0x31DAF30", VA = "0x1831DC930")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x31DCAC0", Offset = "0x31DB0C0", VA = "0x1831DCAC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	[CreateProperty]
	public Sprite sprite
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x31DCA00", Offset = "0x31DB000", VA = "0x1831DCA00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x31DCFD0", Offset = "0x31DB5D0", VA = "0x1831DCFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	[CreateProperty]
	public VectorImage vectorImage
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x31DCA70", Offset = "0x31DB070", VA = "0x1831DCA70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x31DD280", Offset = "0x31DB880", VA = "0x1831DD280")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	[CreateProperty]
	public Rect sourceRect
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x31DC9C0", Offset = "0x31DAFC0", VA = "0x1831DC9C0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x31DCC00", Offset = "0x31DB200", VA = "0x1831DCC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	[CreateProperty]
	public Rect uv
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x31DCA60", Offset = "0x31DB060", VA = "0x1831DCA60")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x31DD170", Offset = "0x31DB770", VA = "0x1831DD170")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	[CreateProperty]
	public ScaleMode scaleMode
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x31DC9B0", Offset = "0x31DAFB0", VA = "0x1831DC9B0")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x31DCBD0", Offset = "0x31DB1D0", VA = "0x1831DCBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	[CreateProperty]
	public Color tintColor
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x31DCA50", Offset = "0x31DB050", VA = "0x1831DCA50")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x31DD0E0", Offset = "0x31DB6E0", VA = "0x1831DD0E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x31DC740", Offset = "0x31DAD40", VA = "0x1831DC740")]
	public Image()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x31DAB40", Offset = "0x31D9140", VA = "0x1831DAB40")]
	private Vector2 GetTextureDisplaySize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x31DAC20", Offset = "0x31D9220", VA = "0x1831DAC20")]
	private Vector2 GetTextureDisplaySize(Sprite sprite)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x31DA3C0", Offset = "0x31D89C0", VA = "0x1831DA3C0", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x31DADA0", Offset = "0x31D93A0", VA = "0x1831DADA0")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x31DAD60", Offset = "0x31D9360", VA = "0x1831DAD60")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x31DB500", Offset = "0x31D9B00", VA = "0x1831DB500")]
	private void ReadCustomProperties(ICustomStyle customStyleProvider)
	{
	}

	[Token(Token = "0x6000649")]
	private void SetInlineProperty<T>(Object value, BindingId binding)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x31DBBF0", Offset = "0x31DA1F0", VA = "0x1831DBBF0")]
	private void SetCustomProperty(Object value, BindingId binding)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x31DA390", Offset = "0x31D8990", VA = "0x1831DA390")]
	private void ClearProperty()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x31DBCE0", Offset = "0x31DA2E0", VA = "0x1831DBCE0")]
	private void SetScaleMode(ScaleMode mode)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x31DBD70", Offset = "0x31DA370", VA = "0x1831DBD70")]
	private void SetTintColor(Color color)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x31DA150", Offset = "0x31D8750", VA = "0x1831DA150")]
	private void CalculateUV(Rect srcRect)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x31DA850", Offset = "0x31D8E50", VA = "0x1831DA850")]
	private Rect GetSourceRect()
	{
		return default(Rect);
	}
}
