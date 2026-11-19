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
	[FieldOffset(Offset = "0xD8")]
	[FormerlySerializedAs("m_Frame")]
	[SerializeField]
	private Sprite m_Sprite;

	[NonSerialized]
	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0xE0")]
	private Sprite m_OverrideSprite;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Type m_Type;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0xEC")]
	[SerializeField]
	private bool m_PreserveAspect;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0xED")]
	[SerializeField]
	private bool m_FillCenter;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private FillMethod m_FillMethod;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xF4")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_FillAmount;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private bool m_FillClockwise;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0xFC")]
	[SerializeField]
	private int m_FillOrigin;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x100")]
	private float m_AlphaHitTestMinimumThreshold;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x104")]
	private bool m_Tracked;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x105")]
	[SerializeField]
	private bool m_UseSpriteMesh;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private float m_PixelsPerUnitMultiplier;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10C")]
	private float m_CachedReferencePixelsPerUnit;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	private static SecondarySpriteTexture[] s_TempNewSecondaryTextures;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x110")]
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
		[Address(RVA = "0x6A709E0", Offset = "0x6A6F9E0", VA = "0x6A709E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x6A613C0", Offset = "0x6A603C0", VA = "0x6A613C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public Sprite overrideSprite
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x6A70C70", Offset = "0x6A6FC70", VA = "0x6A70C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x6A70D50", Offset = "0x6A6FD50", VA = "0x6A70D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	private Sprite activeSprite
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x6A70CE0", Offset = "0x6A6FCE0", VA = "0x6A70CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public Type type
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x6A70DC0", Offset = "0x6A6FDC0", VA = "0x6A70DC0")]
		get
		{
			return default(Type);
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x6A61840", Offset = "0x6A60840", VA = "0x6A61840")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool preserveAspect
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x6A70DD0", Offset = "0x6A6FDD0", VA = "0x6A70DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x6A70DE0", Offset = "0x6A6FDE0", VA = "0x6A70DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool fillCenter
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x6A70E50", Offset = "0x6A6FE50", VA = "0x6A70E50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x6A70E60", Offset = "0x6A6FE60", VA = "0x6A70E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public FillMethod fillMethod
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x6A70ED0", Offset = "0x6A6FED0", VA = "0x6A70ED0")]
		get
		{
			return default(FillMethod);
		}
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x6A70EE0", Offset = "0x6A6FEE0", VA = "0x6A70EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public float fillAmount
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x6A70F50", Offset = "0x6A6FF50", VA = "0x6A70F50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x6A70F60", Offset = "0x6A6FF60", VA = "0x6A70F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public bool fillClockwise
	{
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x6A70FE0", Offset = "0x6A6FFE0", VA = "0x6A70FE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x6A70FF0", Offset = "0x6A6FFF0", VA = "0x6A70FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public int fillOrigin
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x6A71060", Offset = "0x6A70060", VA = "0x6A71060")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x6A71070", Offset = "0x6A70070", VA = "0x6A71070")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
	public float eventAlphaThreshold
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x6A710E0", Offset = "0x6A700E0", VA = "0x6A710E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x6A71100", Offset = "0x6A70100", VA = "0x6A71100")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public float alphaHitTestMinimumThreshold
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x6A71260", Offset = "0x6A70260", VA = "0x6A71260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x6A71120", Offset = "0x6A70120", VA = "0x6A71120")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public bool useSpriteMesh
	{
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x6A71270", Offset = "0x6A70270", VA = "0x6A71270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x6A71280", Offset = "0x6A70280", VA = "0x6A71280")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public static Material defaultETC1GraphicMaterial
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x6A71340", Offset = "0x6A70340", VA = "0x6A71340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override Texture mainTexture
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x6A71420", Offset = "0x6A70420", VA = "0x6A71420", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public bool hasBorder
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x6A71630", Offset = "0x6A70630", VA = "0x6A71630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public float pixelsPerUnitMultiplier
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x6A71770", Offset = "0x6A70770", VA = "0x6A71770")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x6A71780", Offset = "0x6A70780", VA = "0x6A71780")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x6A717B0", Offset = "0x6A707B0", VA = "0x6A717B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005E")]
	protected float multipliedPixelsPerUnit
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x6A719D0", Offset = "0x6A709D0", VA = "0x6A719D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700005F")]
	public override Material material
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x6A719F0", Offset = "0x6A709F0", VA = "0x6A719F0", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x6A71BA0", Offset = "0x6A70BA0", VA = "0x6A71BA0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	internal SecondarySpriteTexture[] secondaryTextures
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x6A76E90", Offset = "0x6A75E90", VA = "0x6A76E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public virtual float minWidth
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x6A782F0", Offset = "0x6A772F0", VA = "0x6A782F0", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000062")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x6A78300", Offset = "0x6A77300", VA = "0x6A78300", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000063")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x6A784C0", Offset = "0x6A774C0", VA = "0x6A784C0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000064")]
	public virtual float minHeight
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x6A784D0", Offset = "0x6A774D0", VA = "0x6A784D0", Slot = "84")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000065")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x6A784E0", Offset = "0x6A774E0", VA = "0x6A784E0", Slot = "85")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000066")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x6A786B0", Offset = "0x6A776B0", VA = "0x6A786B0", Slot = "86")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000067")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x6A786C0", Offset = "0x6A776C0", VA = "0x6A786C0", Slot = "87")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x6A70C60", Offset = "0x6A6FC60", VA = "0x6A70C60")]
	public void DisableSpriteOptimizations()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x6A712F0", Offset = "0x6A702F0", VA = "0x6A712F0")]
	protected Image()
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x6A71C30", Offset = "0x6A70C30", VA = "0x6A71C30", Slot = "77")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x6A71C40", Offset = "0x6A70C40", VA = "0x6A71C40", Slot = "78")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x6A71CA0", Offset = "0x6A70CA0", VA = "0x6A71CA0")]
	private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x6A71EE0", Offset = "0x6A70EE0", VA = "0x6A71EE0")]
	private Vector4 GetDrawingDimensions(bool shouldPreserveAspect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x6A72520", Offset = "0x6A71520", VA = "0x6A72520", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x6A72860", Offset = "0x6A71860", VA = "0x6A72860", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x6A70AF0", Offset = "0x6A6FAF0", VA = "0x6A70AF0")]
	private void TrackSprite()
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x6A76CE0", Offset = "0x6A75CE0", VA = "0x6A76CE0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x6A76D00", Offset = "0x6A75D00", VA = "0x6A76D00", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x6A76EA0", Offset = "0x6A75EA0", VA = "0x6A76EA0")]
	private static void ClearArray(ref SecondarySpriteTexture[] array)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x6A709F0", Offset = "0x6A6F9F0", VA = "0x6A709F0")]
	private bool CheckSecondaryTexturesChanged(Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x6A76F70", Offset = "0x6A75F70", VA = "0x6A76F70")]
	private bool CheckSecondaryTexturesChanged(Sprite sprite, ref SecondarySpriteTexture[] newSecondaryTextures)
	{
		return default(bool);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x6A77200", Offset = "0x6A76200", VA = "0x6A77200")]
	internal void SetSecondaryTextures(CanvasRenderer renderer)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x6A774C0", Offset = "0x6A764C0", VA = "0x6A774C0", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x6A77650", Offset = "0x6A76650", VA = "0x6A77650", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x6A729D0", Offset = "0x6A719D0", VA = "0x6A729D0")]
	private void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x6A72CA0", Offset = "0x6A71CA0", VA = "0x6A72CA0")]
	private void GenerateSprite(VertexHelper vh, bool lPreserveAspect)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x6A73290", Offset = "0x6A72290", VA = "0x6A73290")]
	private void GenerateSlicedSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x6A73DA0", Offset = "0x6A72DA0", VA = "0x6A73DA0")]
	private void GenerateTiledSprite(VertexHelper toFill)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x6A77C10", Offset = "0x6A76C10", VA = "0x6A77C10")]
	private static void AddQuad(VertexHelper vertexHelper, Vector3[] quadPositions, Color32 color, Vector3[] quadUVs)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x6A77B00", Offset = "0x6A76B00", VA = "0x6A77B00")]
	private static void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x6A77820", Offset = "0x6A76820", VA = "0x6A77820")]
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x6A75B80", Offset = "0x6A74B80", VA = "0x6A75B80")]
	private void GenerateFilledSprite(VertexHelper toFill, bool preserveAspect)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x6A77D70", Offset = "0x6A76D70", VA = "0x6A77D70")]
	private static bool RadialCut(Vector3[] xy, Vector3[] uv, float fill, bool invert, int corner)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x6A77EC0", Offset = "0x6A76EC0", VA = "0x6A77EC0")]
	private static void RadialCut(Vector3[] xy, float cos, float sin, bool invert, int corner)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x6A782D0", Offset = "0x6A772D0", VA = "0x6A782D0", Slot = "79")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x6A782E0", Offset = "0x6A772E0", VA = "0x6A782E0", Slot = "80")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x6A786D0", Offset = "0x6A776D0", VA = "0x6A786D0", Slot = "88")]
	public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x6A78DD0", Offset = "0x6A77DD0", VA = "0x6A78DD0")]
	private Vector2 MapCoordinate(Vector2 local, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x6A793E0", Offset = "0x6A783E0", VA = "0x6A793E0")]
	private static void RebuildImage(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x6A76B40", Offset = "0x6A75B40", VA = "0x6A76B40")]
	private static void TrackImage(Image g)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x6A76DF0", Offset = "0x6A75DF0", VA = "0x6A76DF0")]
	private static void UnTrackImage(Image g)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x6A79660", Offset = "0x6A78660", VA = "0x6A79660", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
