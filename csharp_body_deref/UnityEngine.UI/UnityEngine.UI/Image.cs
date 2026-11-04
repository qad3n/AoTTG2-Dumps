// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Image
// Update status: CHANGED in this game update
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
[AddComponentMenu("UI (Canvas)/Image", 11)]
[UnityEngine.UGUIHelpURL("Image")]
public class Image : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter
{
	[Token(Token = "0x2000025")]
	public enum Type
	{
		[Token(Token = "0x40000A9")]
		Simple,
		[Token(Token = "0x40000AA")]
		Sliced,
		[Token(Token = "0x40000AB")]
		Tiled,
		[Token(Token = "0x40000AC")]
		Filled
	}

	[Token(Token = "0x2000026")]
	public enum FillMethod
	{
		[Token(Token = "0x40000AE")]
		Horizontal,
		[Token(Token = "0x40000AF")]
		Vertical,
		[Token(Token = "0x40000B0")]
		Radial90,
		[Token(Token = "0x40000B1")]
		Radial180,
		[Token(Token = "0x40000B2")]
		Radial360
	}

	[Token(Token = "0x2000027")]
	public enum OriginHorizontal
	{
		[Token(Token = "0x40000B4")]
		Left,
		[Token(Token = "0x40000B5")]
		Right
	}

	[Token(Token = "0x2000028")]
	public enum OriginVertical
	{
		[Token(Token = "0x40000B7")]
		Bottom,
		[Token(Token = "0x40000B8")]
		Top
	}

	[Token(Token = "0x2000029")]
	public enum Origin90
	{
		[Token(Token = "0x40000BA")]
		BottomLeft,
		[Token(Token = "0x40000BB")]
		TopLeft,
		[Token(Token = "0x40000BC")]
		TopRight,
		[Token(Token = "0x40000BD")]
		BottomRight
	}

	[Token(Token = "0x200002A")]
	public enum Origin180
	{
		[Token(Token = "0x40000BF")]
		Bottom,
		[Token(Token = "0x40000C0")]
		Left,
		[Token(Token = "0x40000C1")]
		Top,
		[Token(Token = "0x40000C2")]
		Right
	}

	[Token(Token = "0x200002B")]
	public enum Origin360
	{
		[Token(Token = "0x40000C4")]
		Bottom,
		[Token(Token = "0x40000C5")]
		Right,
		[Token(Token = "0x40000C6")]
		Top,
		[Token(Token = "0x40000C7")]
		Left
	}

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_ETC1DefaultUI;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0xE0")]
	[FormerlySerializedAs("m_Frame")]
	[SerializeField]
	private Sprite m_Sprite;

	[NonSerialized]
	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0xE8")]
	private Sprite m_OverrideSprite;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private Type m_Type;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0xF4")]
	[SerializeField]
	private bool m_PreserveAspect;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0xF5")]
	[SerializeField]
	private bool m_FillCenter;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private FillMethod m_FillMethod;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xFC")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_FillAmount;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private bool m_FillClockwise;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x104")]
	[SerializeField]
	private int m_FillOrigin;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x108")]
	private float m_AlphaHitTestMinimumThreshold;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x10C")]
	private bool m_Tracked;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x10D")]
	[SerializeField]
	private bool m_UseSpriteMesh;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private float m_PixelsPerUnitMultiplier;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x114")]
	private float m_CachedReferencePixelsPerUnit;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	private static SecondarySpriteTexture[] s_TempNewSecondaryTextures;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x118")]
	private SecondarySpriteTexture[] m_SecondaryTextures;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2[] s_VertScratch;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2[] s_UVScratch;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector3[] s_Xy;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector3[] s_Uv;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x30")]
	private static List<Image> m_TrackedTexturelessImages;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x38")]
	private static bool s_Initialized;

	[Token(Token = "0x1700004C")]
	public Sprite sprite
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x307C200", Offset = "0x307A800", VA = "0x18307C200")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public Sprite overrideSprite
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x307B800", Offset = "0x3079E00", VA = "0x18307B800")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x307C0F0", Offset = "0x307A6F0", VA = "0x18307C0F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	private Sprite activeSprite
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x307B1C0", Offset = "0x30797C0", VA = "0x18307B1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public Type type
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x27E58E0", Offset = "0x27E3EE0", VA = "0x1827E58E0")]
		get
		{
			return default(Type);
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x307C610", Offset = "0x307AC10", VA = "0x18307C610")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool preserveAspect
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x222E020", Offset = "0x222C620", VA = "0x18222E020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x307C190", Offset = "0x307A790", VA = "0x18307C190")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool fillCenter
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x307B360", Offset = "0x3079960", VA = "0x18307B360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x307BF30", Offset = "0x307A530", VA = "0x18307BF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public FillMethod fillMethod
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x2C12060", Offset = "0x2C10660", VA = "0x182C12060")]
		get
		{
			return default(FillMethod);
		}
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x307C010", Offset = "0x307A610", VA = "0x18307C010")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public float fillAmount
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x2B2AA30", Offset = "0x2B29030", VA = "0x182B2AA30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x307BEA0", Offset = "0x307A4A0", VA = "0x18307BEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public bool fillClockwise
	{
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x1C41DE0", Offset = "0x1C403E0", VA = "0x181C41DE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x307BFA0", Offset = "0x307A5A0", VA = "0x18307BFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public int fillOrigin
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x2B2AA50", Offset = "0x2B29050", VA = "0x182B2AA50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x307C080", Offset = "0x307A680", VA = "0x18307C080")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
	public float eventAlphaThreshold
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x307B340", Offset = "0x3079940", VA = "0x18307B340")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x307BD30", Offset = "0x307A330", VA = "0x18307BD30")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public float alphaHitTestMinimumThreshold
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x2B2AA40", Offset = "0x2B29040", VA = "0x182B2AA40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x307BBD0", Offset = "0x307A1D0", VA = "0x18307BBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public bool useSpriteMesh
	{
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x307BBC0", Offset = "0x307A1C0", VA = "0x18307BBC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x307C680", Offset = "0x307AC80", VA = "0x18307C680")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public static Material defaultETC1GraphicMaterial
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x307B240", Offset = "0x3079840", VA = "0x18307B240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override Texture mainTexture
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x307B440", Offset = "0x3079A40", VA = "0x18307B440", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public bool hasBorder
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x307B370", Offset = "0x3079970", VA = "0x18307B370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public float pixelsPerUnitMultiplier
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x307B810", Offset = "0x3079E10", VA = "0x18307B810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x307C160", Offset = "0x307A760", VA = "0x18307C160")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x307B820", Offset = "0x3079E20", VA = "0x18307B820")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005E")]
	protected float multipliedPixelsPerUnit
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x307B7E0", Offset = "0x3079DE0", VA = "0x18307B7E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005F")]
	public override Material material
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x307B5C0", Offset = "0x3079BC0", VA = "0x18307B5C0", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x3073C00", Offset = "0x3072200", VA = "0x183073C00", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	internal SecondarySpriteTexture[] secondaryTextures
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public virtual float minWidth
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000062")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x307BA90", Offset = "0x307A090", VA = "0x18307BA90", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000063")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000064")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000065")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x307B960", Offset = "0x3079F60", VA = "0x18307B960", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000066")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000067")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "87")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x30743F0", Offset = "0x30729F0", VA = "0x1830743F0")]
	public void DisableSpriteOptimizations()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x307B160", Offset = "0x3079760", VA = "0x18307B160")]
	protected Image()
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "77")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3079250", Offset = "0x3077850", VA = "0x183079250", Slot = "78")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x30796B0", Offset = "0x3077CB0", VA = "0x1830796B0")]
	private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3078380", Offset = "0x3076980", VA = "0x183078380")]
	private Vector4 GetDrawingDimensions(bool shouldPreserveAspect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x307A100", Offset = "0x3078700", VA = "0x18307A100", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3079560", Offset = "0x3077B60", VA = "0x183079560", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x307A740", Offset = "0x3078D40", VA = "0x18307A740")]
	private void TrackSprite()
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3079540", Offset = "0x3077B40", VA = "0x183079540", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3079470", Offset = "0x3077A70", VA = "0x183079470", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3074340", Offset = "0x3072940", VA = "0x183074340")]
	private static void ClearArray(ref SecondarySpriteTexture[] array)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x30740A0", Offset = "0x30726A0", VA = "0x1830740A0")]
	private bool CheckSecondaryTexturesChanged(Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3074130", Offset = "0x3072730", VA = "0x183074130")]
	private bool CheckSecondaryTexturesChanged(Sprite sprite, ref SecondarySpriteTexture[] newSecondaryTextures)
	{
		return default(bool);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x307A340", Offset = "0x3078940", VA = "0x18307A340")]
	internal void SetSecondaryTextures(CanvasRenderer renderer)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x307AD90", Offset = "0x3079390", VA = "0x18307AD90", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x30792D0", Offset = "0x30778D0", VA = "0x1830792D0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3075840", Offset = "0x3073E40", VA = "0x183075840")]
	private void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x30765D0", Offset = "0x3074BD0", VA = "0x1830765D0")]
	private void GenerateSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3075B60", Offset = "0x3074160", VA = "0x183075B60")]
	private void GenerateSlicedSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3076BF0", Offset = "0x30751F0", VA = "0x183076BF0")]
	private void GenerateTiledSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x3073F80", Offset = "0x3072580", VA = "0x183073F80")]
	private static void AddQuad(VertexHelper vertexHelper, Vector3[] quadPositions, Color32 color, Vector3[] quadUVs)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3073D80", Offset = "0x3072380", VA = "0x183073D80")]
	private static void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3077FB0", Offset = "0x30765B0", VA = "0x183077FB0")]
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3074400", Offset = "0x3072A00", VA = "0x183074400")]
	private void GenerateFilledSprite(VertexHelper toFill, bool preserveAspect)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3079880", Offset = "0x3077E80", VA = "0x183079880")]
	private static bool RadialCut(Vector3[] xy, Vector3[] uv, float fill, bool invert, int corner)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x30799D0", Offset = "0x3077FD0", VA = "0x1830799D0")]
	private static void RadialCut(Vector3[] xy, float cos, float sin, bool invert, int corner)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "79")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "80")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x30786B0", Offset = "0x3076CB0", VA = "0x1830786B0", Slot = "88")]
	public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x3078AF0", Offset = "0x30770F0", VA = "0x183078AF0")]
	private Vector2 MapCoordinate(Vector2 local, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x3079F00", Offset = "0x3078500", VA = "0x183079F00")]
	private static void RebuildImage(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x307A5D0", Offset = "0x3078BD0", VA = "0x18307A5D0")]
	private static void TrackImage(Image g)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x307AD10", Offset = "0x3079310", VA = "0x18307AD10")]
	private static void UnTrackImage(Image g)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x3079430", Offset = "0x3077A30", VA = "0x183079430", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
