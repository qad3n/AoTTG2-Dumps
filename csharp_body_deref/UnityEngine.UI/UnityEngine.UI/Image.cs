using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;
using UnityEngine.U2D;

namespace UnityEngine.UI;

[Token(Token = "0x2000026")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/Image", 11)]
public class Image : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter
{
	[Token(Token = "0x2000027")]
	public enum Type
	{
		[Token(Token = "0x40000AC")]
		Simple,
		[Token(Token = "0x40000AD")]
		Sliced,
		[Token(Token = "0x40000AE")]
		Tiled,
		[Token(Token = "0x40000AF")]
		Filled
	}

	[Token(Token = "0x2000028")]
	public enum FillMethod
	{
		[Token(Token = "0x40000B1")]
		Horizontal,
		[Token(Token = "0x40000B2")]
		Vertical,
		[Token(Token = "0x40000B3")]
		Radial90,
		[Token(Token = "0x40000B4")]
		Radial180,
		[Token(Token = "0x40000B5")]
		Radial360
	}

	[Token(Token = "0x2000029")]
	public enum OriginHorizontal
	{
		[Token(Token = "0x40000B7")]
		Left,
		[Token(Token = "0x40000B8")]
		Right
	}

	[Token(Token = "0x200002A")]
	public enum OriginVertical
	{
		[Token(Token = "0x40000BA")]
		Bottom,
		[Token(Token = "0x40000BB")]
		Top
	}

	[Token(Token = "0x200002B")]
	public enum Origin90
	{
		[Token(Token = "0x40000BD")]
		BottomLeft,
		[Token(Token = "0x40000BE")]
		TopLeft,
		[Token(Token = "0x40000BF")]
		TopRight,
		[Token(Token = "0x40000C0")]
		BottomRight
	}

	[Token(Token = "0x200002C")]
	public enum Origin180
	{
		[Token(Token = "0x40000C2")]
		Bottom,
		[Token(Token = "0x40000C3")]
		Left,
		[Token(Token = "0x40000C4")]
		Top,
		[Token(Token = "0x40000C5")]
		Right
	}

	[Token(Token = "0x200002D")]
	public enum Origin360
	{
		[Token(Token = "0x40000C7")]
		Bottom,
		[Token(Token = "0x40000C8")]
		Right,
		[Token(Token = "0x40000C9")]
		Top,
		[Token(Token = "0x40000CA")]
		Left
	}

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_ETC1DefaultUI;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0xD8")]
	[FormerlySerializedAs("m_Frame")]
	[SerializeField]
	private Sprite m_Sprite;

	[NonSerialized]
	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xE0")]
	private Sprite m_OverrideSprite;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Type m_Type;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0xEC")]
	[SerializeField]
	private bool m_PreserveAspect;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0xED")]
	[SerializeField]
	private bool m_FillCenter;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private FillMethod m_FillMethod;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0xF4")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_FillAmount;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private bool m_FillClockwise;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0xFC")]
	[SerializeField]
	private int m_FillOrigin;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x100")]
	private float m_AlphaHitTestMinimumThreshold;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x104")]
	private bool m_Tracked;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x105")]
	[SerializeField]
	private bool m_UseSpriteMesh;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private float m_PixelsPerUnitMultiplier;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x10C")]
	private float m_CachedReferencePixelsPerUnit;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2[] s_VertScratch;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2[] s_UVScratch;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3[] s_Xy;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector3[] s_Uv;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x28")]
	private static List<Image> m_TrackedTexturelessImages;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x30")]
	private static bool s_Initialized;

	[Token(Token = "0x1700004C")]
	public Sprite sprite
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4BDC080", Offset = "0x4BDC080", VA = "0x4BDC080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4BCC730", Offset = "0x4BCC730", VA = "0x4BCC730")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public Sprite overrideSprite
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4BDC290", Offset = "0x4BDC290", VA = "0x4BDC290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4BDC370", Offset = "0x4BDC370", VA = "0x4BDC370")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	private Sprite activeSprite
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4BDC300", Offset = "0x4BDC300", VA = "0x4BDC300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public Type type
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x4BDC3E0", Offset = "0x4BDC3E0", VA = "0x4BDC3E0")]
		get
		{
			return default(Type);
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x4BCCAA0", Offset = "0x4BCCAA0", VA = "0x4BCCAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool preserveAspect
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x4BDC3F0", Offset = "0x4BDC3F0", VA = "0x4BDC3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x4BDC400", Offset = "0x4BDC400", VA = "0x4BDC400")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool fillCenter
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x4BDC470", Offset = "0x4BDC470", VA = "0x4BDC470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x4BDC480", Offset = "0x4BDC480", VA = "0x4BDC480")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public FillMethod fillMethod
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x4BDC4F0", Offset = "0x4BDC4F0", VA = "0x4BDC4F0")]
		get
		{
			return default(FillMethod);
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x4BDC500", Offset = "0x4BDC500", VA = "0x4BDC500")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public float fillAmount
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x4BDC570", Offset = "0x4BDC570", VA = "0x4BDC570")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4BDC580", Offset = "0x4BDC580", VA = "0x4BDC580")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public bool fillClockwise
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4BDC600", Offset = "0x4BDC600", VA = "0x4BDC600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4BDC610", Offset = "0x4BDC610", VA = "0x4BDC610")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public int fillOrigin
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4BDC680", Offset = "0x4BDC680", VA = "0x4BDC680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x4BDC690", Offset = "0x4BDC690", VA = "0x4BDC690")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
	public float eventAlphaThreshold
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4BDC700", Offset = "0x4BDC700", VA = "0x4BDC700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x4BDC720", Offset = "0x4BDC720", VA = "0x4BDC720")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public float alphaHitTestMinimumThreshold
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x4BDC880", Offset = "0x4BDC880", VA = "0x4BDC880")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x4BDC740", Offset = "0x4BDC740", VA = "0x4BDC740")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public bool useSpriteMesh
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x4BDC890", Offset = "0x4BDC890", VA = "0x4BDC890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x4BDC8A0", Offset = "0x4BDC8A0", VA = "0x4BDC8A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public static Material defaultETC1GraphicMaterial
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4BDC960", Offset = "0x4BDC960", VA = "0x4BDC960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override Texture mainTexture
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4BDCA40", Offset = "0x4BDCA40", VA = "0x4BDCA40", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public bool hasBorder
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4BDCC50", Offset = "0x4BDCC50", VA = "0x4BDCC50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public float pixelsPerUnitMultiplier
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4BDCD90", Offset = "0x4BDCD90", VA = "0x4BDCD90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4BDCDA0", Offset = "0x4BDCDA0", VA = "0x4BDCDA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4BDCDD0", Offset = "0x4BDCDD0", VA = "0x4BDCDD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005E")]
	protected float multipliedPixelsPerUnit
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4BDCFF0", Offset = "0x4BDCFF0", VA = "0x4BDCFF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005F")]
	public override Material material
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4BDD010", Offset = "0x4BDD010", VA = "0x4BDD010", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4BDD1C0", Offset = "0x4BDD1C0", VA = "0x4BDD1C0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public virtual float minWidth
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x4BE2A40", Offset = "0x4BE2A40", VA = "0x4BE2A40", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000061")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x4BE2A50", Offset = "0x4BE2A50", VA = "0x4BE2A50", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000062")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4BE2BE0", Offset = "0x4BE2BE0", VA = "0x4BE2BE0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000063")]
	public virtual float minHeight
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x4BE2BF0", Offset = "0x4BE2BF0", VA = "0x4BE2BF0", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000064")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x4BE2C00", Offset = "0x4BE2C00", VA = "0x4BE2C00", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000065")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x4BE2DA0", Offset = "0x4BE2DA0", VA = "0x4BE2DA0", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000066")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x4BE2DB0", Offset = "0x4BE2DB0", VA = "0x4BE2DB0", Slot = "87")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4BDC280", Offset = "0x4BDC280", VA = "0x4BDC280")]
	public void DisableSpriteOptimizations()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4BDC910", Offset = "0x4BDC910", VA = "0x4BDC910")]
	protected Image()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4BDD250", Offset = "0x4BDD250", VA = "0x4BDD250", Slot = "77")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4BDD260", Offset = "0x4BDD260", VA = "0x4BDD260", Slot = "78")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4BDD2C0", Offset = "0x4BDD2C0", VA = "0x4BDD2C0")]
	private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4BDD450", Offset = "0x4BDD450", VA = "0x4BDD450")]
	private Vector4 GetDrawingDimensions(bool shouldPreserveAspect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4BDDA90", Offset = "0x4BDDA90", VA = "0x4BDDA90", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4BDDD90", Offset = "0x4BDDD90", VA = "0x4BDDD90", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4BDC110", Offset = "0x4BDC110", VA = "0x4BDC110")]
	private void TrackSprite()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4BE1B90", Offset = "0x4BE1B90", VA = "0x4BE1B90", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4BE1BB0", Offset = "0x4BE1BB0", VA = "0x4BE1BB0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4BE1D40", Offset = "0x4BE1D40", VA = "0x4BE1D40", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4BE1EC0", Offset = "0x4BE1EC0", VA = "0x4BE1EC0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4BDDEF0", Offset = "0x4BDDEF0", VA = "0x4BDDEF0")]
	private void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4BDE1C0", Offset = "0x4BDE1C0", VA = "0x4BDE1C0")]
	private void GenerateSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4BDE730", Offset = "0x4BDE730", VA = "0x4BDE730")]
	private void GenerateSlicedSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4BDF450", Offset = "0x4BDF450", VA = "0x4BDF450")]
	private void GenerateTiledSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4BE2320", Offset = "0x4BE2320", VA = "0x4BE2320")]
	private static void AddQuad(VertexHelper vertexHelper, Vector3[] quadPositions, Color32 color, Vector3[] quadUVs)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4BE2210", Offset = "0x4BE2210", VA = "0x4BE2210")]
	private static void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4BE2090", Offset = "0x4BE2090", VA = "0x4BE2090")]
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4BE0C50", Offset = "0x4BE0C50", VA = "0x4BE0C50")]
	private void GenerateFilledSprite(VertexHelper toFill, bool preserveAspect)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4BE2480", Offset = "0x4BE2480", VA = "0x4BE2480")]
	private static bool RadialCut(Vector3[] xy, Vector3[] uv, float fill, bool invert, int corner)
	{
		return default(bool);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4BE25B0", Offset = "0x4BE25B0", VA = "0x4BE25B0")]
	private static void RadialCut(Vector3[] xy, float cos, float sin, bool invert, int corner)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4BE2A20", Offset = "0x4BE2A20", VA = "0x4BE2A20", Slot = "79")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4BE2A30", Offset = "0x4BE2A30", VA = "0x4BE2A30", Slot = "80")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4BE2DC0", Offset = "0x4BE2DC0", VA = "0x4BE2DC0", Slot = "88")]
	public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4BE34B0", Offset = "0x4BE34B0", VA = "0x4BE34B0")]
	private Vector2 MapCoordinate(Vector2 local, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4BE39E0", Offset = "0x4BE39E0", VA = "0x4BE39E0")]
	private static void RebuildImage(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x4BE19D0", Offset = "0x4BE19D0", VA = "0x4BE19D0")]
	private static void TrackImage(Image g)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4BE1CA0", Offset = "0x4BE1CA0", VA = "0x4BE1CA0")]
	private static void UnTrackImage(Image g)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4BE3C80", Offset = "0x4BE3C80", VA = "0x4BE3C80", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
