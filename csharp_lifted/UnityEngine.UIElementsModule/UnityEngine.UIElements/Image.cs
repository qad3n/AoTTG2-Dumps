// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Image
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000E3")]
public class Image : VisualElement
{
	[Token(Token = "0x20000E4")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Image, UxmlTraits>
	{
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x6BE8FE0", Offset = "0x6BE7FE0", VA = "0x6BE8FE0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000E5")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x6BE9020", Offset = "0x6BE8020", VA = "0x6BE9020")]
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

	[Token(Token = "0x17000103")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[CreateProperty]
	internal Object source
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x6BE6710", Offset = "0x6BE5710", VA = "0x6BE6710")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x6BE6720", Offset = "0x6BE5720", VA = "0x6BE6720")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	[CreateProperty]
	public Texture image
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x6BE6970", Offset = "0x6BE5970", VA = "0x6BE6970")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x6BD4BB0", Offset = "0x6BD3BB0", VA = "0x6BD4BB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	[CreateProperty]
	public Sprite sprite
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x6BE69E0", Offset = "0x6BE59E0", VA = "0x6BE69E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x6BD4C40", Offset = "0x6BD3C40", VA = "0x6BD4C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	[CreateProperty]
	public VectorImage vectorImage
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x6BE6A30", Offset = "0x6BE5A30", VA = "0x6BE6A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x6BD4CD0", Offset = "0x6BD3CD0", VA = "0x6BD4CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	[CreateProperty]
	public Rect sourceRect
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x6BE6A80", Offset = "0x6BE5A80", VA = "0x6BE6A80")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x6BE6DD0", Offset = "0x6BE5DD0", VA = "0x6BE6DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	[CreateProperty]
	public Rect uv
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x6BE7240", Offset = "0x6BE6240", VA = "0x6BE7240")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x6BE7260", Offset = "0x6BE6260", VA = "0x6BE7260")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	[CreateProperty]
	public ScaleMode scaleMode
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x6BE7380", Offset = "0x6BE6380", VA = "0x6BE7380")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x6BE7390", Offset = "0x6BE6390", VA = "0x6BE7390")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	[CreateProperty]
	public Color tintColor
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x6BE74C0", Offset = "0x6BE64C0", VA = "0x6BE74C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x6BE74E0", Offset = "0x6BE64E0", VA = "0x6BE74E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x6BD5250", Offset = "0x6BD4250", VA = "0x6BD5250")]
	public Image()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x6BE76F0", Offset = "0x6BE66F0", VA = "0x6BE76F0")]
	private Vector2 GetTextureDisplaySize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x6BE77C0", Offset = "0x6BE67C0", VA = "0x6BE77C0")]
	private Vector2 GetTextureDisplaySize(Sprite sprite)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x6BE78D0", Offset = "0x6BE68D0", VA = "0x6BE78D0", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x6BE7C00", Offset = "0x6BE6C00", VA = "0x6BE7C00")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x6BE8280", Offset = "0x6BE7280", VA = "0x6BE8280")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x6BE82B0", Offset = "0x6BE72B0", VA = "0x6BE82B0")]
	private void ReadCustomProperties(ICustomStyle customStyleProvider)
	{
	}

	[Token(Token = "0x600064E")]
	private void SetInlineProperty<T>(Object value, BindingId binding)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x6BE8990", Offset = "0x6BE7990", VA = "0x6BE8990")]
	private void SetCustomProperty(Object value, BindingId binding)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x6BE8A80", Offset = "0x6BE7A80", VA = "0x6BE8A80")]
	private void ClearProperty()
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x6BE7430", Offset = "0x6BE6430", VA = "0x6BE7430")]
	private void SetScaleMode(ScaleMode mode)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x6BE7610", Offset = "0x6BE6610", VA = "0x6BE7610")]
	private void SetTintColor(Color color)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x6BE6FB0", Offset = "0x6BE5FB0", VA = "0x6BE6FB0")]
	private void CalculateUV(Rect srcRect)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x6BE6A90", Offset = "0x6BE5A90", VA = "0x6BE6A90")]
	private Rect GetSourceRect()
	{
		return default(Rect);
	}
}
