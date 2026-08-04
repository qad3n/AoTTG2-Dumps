// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Image
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F43590", Offset = "0x4F43590", VA = "0x4F43590")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x4F435D0", Offset = "0x4F435D0", VA = "0x4F435D0")]
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
		[Address(RVA = "0x4F40D50", Offset = "0x4F40D50", VA = "0x4F40D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x4F40D60", Offset = "0x4F40D60", VA = "0x4F40D60")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	[CreateProperty]
	public Sprite sprite
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x4F40EA0", Offset = "0x4F40EA0", VA = "0x4F40EA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x4F40EB0", Offset = "0x4F40EB0", VA = "0x4F40EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	[CreateProperty]
	public VectorImage vectorImage
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x4F40FE0", Offset = "0x4F40FE0", VA = "0x4F40FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x4F40FF0", Offset = "0x4F40FF0", VA = "0x4F40FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	[CreateProperty]
	public Rect sourceRect
	{
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x4F41120", Offset = "0x4F41120", VA = "0x4F41120")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x4F412E0", Offset = "0x4F412E0", VA = "0x4F412E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	[CreateProperty]
	public Rect uv
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x4F41620", Offset = "0x4F41620", VA = "0x4F41620")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x4F41640", Offset = "0x4F41640", VA = "0x4F41640")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	[CreateProperty]
	public ScaleMode scaleMode
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x4F41730", Offset = "0x4F41730", VA = "0x4F41730")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x4F41740", Offset = "0x4F41740", VA = "0x4F41740")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	[CreateProperty]
	public Color tintColor
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x4F418A0", Offset = "0x4F418A0", VA = "0x4F418A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x4F418C0", Offset = "0x4F418C0", VA = "0x4F418C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4F41B30", Offset = "0x4F41B30", VA = "0x4F41B30")]
	public Image()
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4F41D00", Offset = "0x4F41D00", VA = "0x4F41D00")]
	private Vector2 GetTextureDisplaySize(Texture texture)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4F41DD0", Offset = "0x4F41DD0", VA = "0x4F41DD0")]
	private Vector2 GetTextureDisplaySize(Sprite sprite)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4F41EE0", Offset = "0x4F41EE0", VA = "0x4F41EE0", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4F42110", Offset = "0x4F42110", VA = "0x4F42110")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4F42850", Offset = "0x4F42850", VA = "0x4F42850")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4F42880", Offset = "0x4F42880", VA = "0x4F42880")]
	private void ReadCustomProperties(ICustomStyle customStyleProvider)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	private void SetProperty<T0, T1, T2>(T0 src, ref T0 dst, ref T1 alt0, ref T2 alt1, DataBindingProperty binding) where T0 : Object where T1 : Object where T2 : Object
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4F43000", Offset = "0x4F43000", VA = "0x4F43000")]
	private void ClearProperty()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4F417F0", Offset = "0x4F417F0", VA = "0x4F417F0")]
	private void SetScaleMode(ScaleMode mode)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4F41A40", Offset = "0x4F41A40", VA = "0x4F41A40")]
	private void SetTintColor(Color color)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4F41460", Offset = "0x4F41460", VA = "0x4F41460")]
	private void CalculateUV(Rect srcRect)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4F41130", Offset = "0x4F41130", VA = "0x4F41130")]
	private Rect GetSourceRect()
	{
		return default(Rect);
	}
}
