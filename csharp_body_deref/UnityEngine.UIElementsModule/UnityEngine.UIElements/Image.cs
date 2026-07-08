using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A6")]
public class Image : VisualElement
{
	[Token(Token = "0x20000A7")]
	public new class UxmlFactory : UxmlFactory<Image, UxmlTraits>
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x4C1BC60", Offset = "0x4C1BC60", VA = "0x4C1BC60")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x4C1BCA0", Offset = "0x4C1BCA0", VA = "0x4C1BCA0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty imageProperty;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty spriteProperty;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty vectorImageProperty;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty sourceRectProperty;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty uvProperty;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x320")]
	internal static readonly DataBindingProperty scaleModeProperty;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x3C0")]
	internal static readonly DataBindingProperty tintColorProperty;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x3D8")]
	private ScaleMode m_ScaleMode;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x3E0")]
	private Texture m_Image;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x3E8")]
	private Sprite m_Sprite;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x3F0")]
	private VectorImage m_VectorImage;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x3F8")]
	private Rect m_UV;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x408")]
	private Color m_TintColor;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x418")]
	internal bool m_ImageIsInline;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x419")]
	private bool m_ScaleModeIsInline;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x41A")]
	private bool m_TintColorIsInline;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x460")]
	public static readonly string ussClassName;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x468")]
	private static CustomStyleProperty<Texture2D> s_ImageProperty;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x470")]
	private static CustomStyleProperty<Sprite> s_SpriteProperty;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x478")]
	private static CustomStyleProperty<VectorImage> s_VectorImageProperty;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x480")]
	private static CustomStyleProperty<string> s_ScaleModeProperty;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x488")]
	private static CustomStyleProperty<Color> s_TintColorProperty;

	[Token(Token = "0x1700009C")]
	[CreateProperty]
	public Texture image
	{
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x4C19420", Offset = "0x4C19420", VA = "0x4C19420")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x4C19430", Offset = "0x4C19430", VA = "0x4C19430")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	[CreateProperty]
	public Sprite sprite
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x4C19570", Offset = "0x4C19570", VA = "0x4C19570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x4C19580", Offset = "0x4C19580", VA = "0x4C19580")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	[CreateProperty]
	public VectorImage vectorImage
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x4C196B0", Offset = "0x4C196B0", VA = "0x4C196B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x4C196C0", Offset = "0x4C196C0", VA = "0x4C196C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	[CreateProperty]
	public Rect sourceRect
	{
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x4C197F0", Offset = "0x4C197F0", VA = "0x4C197F0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x4C199B0", Offset = "0x4C199B0", VA = "0x4C199B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	[CreateProperty]
	public Rect uv
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x4C19CF0", Offset = "0x4C19CF0", VA = "0x4C19CF0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x4C19D10", Offset = "0x4C19D10", VA = "0x4C19D10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	[CreateProperty]
	public ScaleMode scaleMode
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x4C19E00", Offset = "0x4C19E00", VA = "0x4C19E00")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x4C19E10", Offset = "0x4C19E10", VA = "0x4C19E10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	[CreateProperty]
	public Color tintColor
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x4C19F70", Offset = "0x4C19F70", VA = "0x4C19F70")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x4C19F90", Offset = "0x4C19F90", VA = "0x4C19F90")]
		set
		{
		}
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4C1A200", Offset = "0x4C1A200", VA = "0x4C1A200")]
	public Image()
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4C1A3D0", Offset = "0x4C1A3D0", VA = "0x4C1A3D0")]
	private Vector2 GetTextureDisplaySize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4C1A4A0", Offset = "0x4C1A4A0", VA = "0x4C1A4A0")]
	private Vector2 GetTextureDisplaySize(Sprite sprite)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4C1A5B0", Offset = "0x4C1A5B0", VA = "0x4C1A5B0", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4C1A7E0", Offset = "0x4C1A7E0", VA = "0x4C1A7E0")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4C1AF20", Offset = "0x4C1AF20", VA = "0x4C1AF20")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4C1AF50", Offset = "0x4C1AF50", VA = "0x4C1AF50")]
	private void ReadCustomProperties(ICustomStyle customStyleProvider)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	private void SetProperty<T0, T1, T2>(T0 src, ref T0 dst, ref T1 alt0, ref T2 alt1, DataBindingProperty binding) where T0 : Object where T1 : Object where T2 : Object
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4C1B6D0", Offset = "0x4C1B6D0", VA = "0x4C1B6D0")]
	private void ClearProperty()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4C19EC0", Offset = "0x4C19EC0", VA = "0x4C19EC0")]
	private void SetScaleMode(ScaleMode mode)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4C1A110", Offset = "0x4C1A110", VA = "0x4C1A110")]
	private void SetTintColor(Color color)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4C19B30", Offset = "0x4C19B30", VA = "0x4C19B30")]
	private void CalculateUV(Rect srcRect)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4C19800", Offset = "0x4C19800", VA = "0x4C19800")]
	private Rect GetSourceRect()
	{
		return default(Rect);
	}
}
