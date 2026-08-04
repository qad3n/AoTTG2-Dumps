// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Image
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;
using UnityEngine.U2D;

namespace UnityEngine.UI;

[Token(Token = "0x2000024")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/Image", 11)]
public class Image : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter
{
	[Token(Token = "0x2000025")]
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

	[Token(Token = "0x2000026")]
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

	[Token(Token = "0x2000027")]
	public enum OriginHorizontal
	{
		[Token(Token = "0x40000B7")]
		Left,
		[Token(Token = "0x40000B8")]
		Right
	}

	[Token(Token = "0x2000028")]
	public enum OriginVertical
	{
		[Token(Token = "0x40000BA")]
		Bottom,
		[Token(Token = "0x40000BB")]
		Top
	}

	[Token(Token = "0x2000029")]
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

	[Token(Token = "0x200002A")]
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

	[Token(Token = "0x200002B")]
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

	[Token(Token = "0x1700004B")]
	public Sprite sprite
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x4F039B0", Offset = "0x4F039B0", VA = "0x4F039B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x4EF4060", Offset = "0x4EF4060", VA = "0x4EF4060")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public Sprite overrideSprite
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4F03BC0", Offset = "0x4F03BC0", VA = "0x4F03BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4F03CA0", Offset = "0x4F03CA0", VA = "0x4F03CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	private Sprite activeSprite
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x4F03C30", Offset = "0x4F03C30", VA = "0x4F03C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	public Type type
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4F03D10", Offset = "0x4F03D10", VA = "0x4F03D10")]
		get
		{
			return default(Type);
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4EF43D0", Offset = "0x4EF43D0", VA = "0x4EF43D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public bool preserveAspect
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4F03D20", Offset = "0x4F03D20", VA = "0x4F03D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x4F03D30", Offset = "0x4F03D30", VA = "0x4F03D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool fillCenter
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x4F03DA0", Offset = "0x4F03DA0", VA = "0x4F03DA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x4F03DB0", Offset = "0x4F03DB0", VA = "0x4F03DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public FillMethod fillMethod
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x4F03E20", Offset = "0x4F03E20", VA = "0x4F03E20")]
		get
		{
			return default(FillMethod);
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x4F03E30", Offset = "0x4F03E30", VA = "0x4F03E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public float fillAmount
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x4F03EA0", Offset = "0x4F03EA0", VA = "0x4F03EA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x4F03EB0", Offset = "0x4F03EB0", VA = "0x4F03EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public bool fillClockwise
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x4F03F30", Offset = "0x4F03F30", VA = "0x4F03F30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x4F03F40", Offset = "0x4F03F40", VA = "0x4F03F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public int fillOrigin
	{
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4F03FB0", Offset = "0x4F03FB0", VA = "0x4F03FB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4F03FC0", Offset = "0x4F03FC0", VA = "0x4F03FC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	[Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
	public float eventAlphaThreshold
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4F04030", Offset = "0x4F04030", VA = "0x4F04030")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4F04050", Offset = "0x4F04050", VA = "0x4F04050")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public float alphaHitTestMinimumThreshold
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x4F041B0", Offset = "0x4F041B0", VA = "0x4F041B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4F04070", Offset = "0x4F04070", VA = "0x4F04070")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public bool useSpriteMesh
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x4F041C0", Offset = "0x4F041C0", VA = "0x4F041C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x4F041D0", Offset = "0x4F041D0", VA = "0x4F041D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public static Material defaultETC1GraphicMaterial
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x4F04290", Offset = "0x4F04290", VA = "0x4F04290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x4F04370", Offset = "0x4F04370", VA = "0x4F04370", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public bool hasBorder
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x4F04580", Offset = "0x4F04580", VA = "0x4F04580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	public float pixelsPerUnitMultiplier
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4F046C0", Offset = "0x4F046C0", VA = "0x4F046C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4F046D0", Offset = "0x4F046D0", VA = "0x4F046D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4F04700", Offset = "0x4F04700", VA = "0x4F04700")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005D")]
	protected float multipliedPixelsPerUnit
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4F04920", Offset = "0x4F04920", VA = "0x4F04920")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005E")]
	public override Material material
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4F04940", Offset = "0x4F04940", VA = "0x4F04940", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4F04AF0", Offset = "0x4F04AF0", VA = "0x4F04AF0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x4F0A370", Offset = "0x4F0A370", VA = "0x4F0A370", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000060")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x4F0A380", Offset = "0x4F0A380", VA = "0x4F0A380", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000061")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x4F0A510", Offset = "0x4F0A510", VA = "0x4F0A510", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000062")]
	public virtual float minHeight
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x4F0A520", Offset = "0x4F0A520", VA = "0x4F0A520", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000063")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x4F0A530", Offset = "0x4F0A530", VA = "0x4F0A530", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000064")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4F0A6D0", Offset = "0x4F0A6D0", VA = "0x4F0A6D0", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000065")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x4F0A6E0", Offset = "0x4F0A6E0", VA = "0x4F0A6E0", Slot = "87")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4F03BB0", Offset = "0x4F03BB0", VA = "0x4F03BB0")]
	public void DisableSpriteOptimizations()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4F04240", Offset = "0x4F04240", VA = "0x4F04240")]
	protected Image()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4F04B80", Offset = "0x4F04B80", VA = "0x4F04B80", Slot = "77")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4F04B90", Offset = "0x4F04B90", VA = "0x4F04B90", Slot = "78")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x4F04BF0", Offset = "0x4F04BF0", VA = "0x4F04BF0")]
	private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4F04D80", Offset = "0x4F04D80", VA = "0x4F04D80")]
	private Vector4 GetDrawingDimensions(bool shouldPreserveAspect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4F053C0", Offset = "0x4F053C0", VA = "0x4F053C0", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4F056C0", Offset = "0x4F056C0", VA = "0x4F056C0", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4F03A40", Offset = "0x4F03A40", VA = "0x4F03A40")]
	private void TrackSprite()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4F094C0", Offset = "0x4F094C0", VA = "0x4F094C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4F094E0", Offset = "0x4F094E0", VA = "0x4F094E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4F09670", Offset = "0x4F09670", VA = "0x4F09670", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4F097F0", Offset = "0x4F097F0", VA = "0x4F097F0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4F05820", Offset = "0x4F05820", VA = "0x4F05820")]
	private void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4F05AF0", Offset = "0x4F05AF0", VA = "0x4F05AF0")]
	private void GenerateSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4F06060", Offset = "0x4F06060", VA = "0x4F06060")]
	private void GenerateSlicedSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4F06D80", Offset = "0x4F06D80", VA = "0x4F06D80")]
	private void GenerateTiledSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4F09C50", Offset = "0x4F09C50", VA = "0x4F09C50")]
	private static void AddQuad(VertexHelper vertexHelper, Vector3[] quadPositions, Color32 color, Vector3[] quadUVs)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4F09B40", Offset = "0x4F09B40", VA = "0x4F09B40")]
	private static void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4F099C0", Offset = "0x4F099C0", VA = "0x4F099C0")]
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4F08580", Offset = "0x4F08580", VA = "0x4F08580")]
	private void GenerateFilledSprite(VertexHelper toFill, bool preserveAspect)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4F09DB0", Offset = "0x4F09DB0", VA = "0x4F09DB0")]
	private static bool RadialCut(Vector3[] xy, Vector3[] uv, float fill, bool invert, int corner)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4F09EE0", Offset = "0x4F09EE0", VA = "0x4F09EE0")]
	private static void RadialCut(Vector3[] xy, float cos, float sin, bool invert, int corner)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4F0A350", Offset = "0x4F0A350", VA = "0x4F0A350", Slot = "79")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4F0A360", Offset = "0x4F0A360", VA = "0x4F0A360", Slot = "80")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4F0A6F0", Offset = "0x4F0A6F0", VA = "0x4F0A6F0", Slot = "88")]
	public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4F0ADE0", Offset = "0x4F0ADE0", VA = "0x4F0ADE0")]
	private Vector2 MapCoordinate(Vector2 local, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4F0B310", Offset = "0x4F0B310", VA = "0x4F0B310")]
	private static void RebuildImage(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4F09300", Offset = "0x4F09300", VA = "0x4F09300")]
	private static void TrackImage(Image g)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4F095D0", Offset = "0x4F095D0", VA = "0x4F095D0")]
	private static void UnTrackImage(Image g)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4F0B5B0", Offset = "0x4F0B5B0", VA = "0x4F0B5B0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
