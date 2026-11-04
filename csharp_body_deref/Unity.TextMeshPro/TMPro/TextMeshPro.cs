// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextMeshPro
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x20000B5")]
[DisallowMultipleComponent]
[RequireComponent(typeof(MeshRenderer))]
[AddComponentMenu("Mesh/TextMeshPro - Text")]
[ExecuteAlways]
[TMPro.TMPHelpURL("index")]
public class TextMeshPro : TMP_Text, ILayoutElement
{
	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x6F0")]
	[SerializeField]
	internal int _SortingLayer;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x6F4")]
	[SerializeField]
	internal int _SortingLayerID;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x6F8")]
	[SerializeField]
	internal int _SortingOrder;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x700")]
	[CompilerGenerated]
	private new Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x708")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x70C")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x710")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x718")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x720")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x724")]
	private int m_max_characters;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x728")]
	private int m_max_numberOfLines;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x730")]
	private TMP_SubMesh[] m_subTextObjects;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x738")]
	[SerializeField]
	private MaskingTypes m_maskType;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x73C")]
	private Matrix4x4 m_EnvMapMatrix;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x780")]
	private Vector3[] m_RectTransformCorners;

	[NonSerialized]
	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x788")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveTextExtentMarker;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0xA0")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x790")]
	private Dictionary<int, int> materialIndexPairs;

	[Token(Token = "0x17000199")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x2D7DD70", Offset = "0x2D7C370", VA = "0x182D7DD70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x2D7E150", Offset = "0x2D7C750", VA = "0x182D7E150")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int sortingOrder
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x2D7DE00", Offset = "0x2D7C400", VA = "0x182D7DE00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x2D7E310", Offset = "0x2D7C910", VA = "0x182D7E310")]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x2D751C0", Offset = "0x2D737C0", VA = "0x182D751C0", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x2D7DFE0", Offset = "0x2D7C5E0", VA = "0x182D7DFE0", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	[Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
	public TextContainer textContainer
	{
		[Token(Token = "0x6000689")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public new Transform transform
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x2D7DE90", Offset = "0x2D7C490", VA = "0x182D7DE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public Renderer renderer
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x2D7DCD0", Offset = "0x2D7C2D0", VA = "0x182D7DCD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public override Mesh mesh
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x2D7DC00", Offset = "0x2D7C200", VA = "0x182D7DC00", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x2D7DAD0", Offset = "0x2D7C0D0", VA = "0x182D7DAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public MaskingTypes maskType
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x2D7DAC0", Offset = "0x2D7C0C0", VA = "0x182D7DAC0")]
		get
		{
			return default(MaskingTypes);
		}
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x2D7E140", Offset = "0x2D7C740", VA = "0x182D7E140")]
		set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x2D7DA10", Offset = "0x2D7C010", VA = "0x182D7DA10", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x2D7DF30", Offset = "0x2D7C530", VA = "0x182D7DF30", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x2D7B3D0", Offset = "0x2D799D0", VA = "0x182D7B3D0")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x2D7B620", Offset = "0x2D79C20", VA = "0x182D7B620")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x2D7C1E0", Offset = "0x2D7A7E0", VA = "0x182D7C1E0", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x2D7B170", Offset = "0x2D79770", VA = "0x182D7B170", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x1AC67A0", Offset = "0x1AC4DA0", VA = "0x181AC67A0", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x2D6EE80", Offset = "0x2D6D480", VA = "0x182D6EE80", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x2D77930", Offset = "0x2D75F30", VA = "0x182D77930", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x2D7C7B0", Offset = "0x2D7ADB0", VA = "0x182D7C7B0", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x2D7C8F0", Offset = "0x2D7AEF0", VA = "0x182D7C8F0", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x2D75F80", Offset = "0x2D74580", VA = "0x182D75F80", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x2D76860", Offset = "0x2D74E60", VA = "0x182D76860", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x2D757B0", Offset = "0x2D73DB0", VA = "0x182D757B0", Slot = "130")]
	public override void ClearMesh(bool updateMesh)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x2D7C650", Offset = "0x2D7AC50", VA = "0x182D7C650", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2D7CEA0", Offset = "0x2D7B4A0", VA = "0x182D7CEA0", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x2D7D080", Offset = "0x2D7B680", VA = "0x182D7D080", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x2D73950", Offset = "0x2D71F50", VA = "0x182D73950")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x2D75440", Offset = "0x2D73A40", VA = "0x182D75440", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x2D77290", Offset = "0x2D75890", VA = "0x182D77290", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x2D771F0", Offset = "0x2D757F0", VA = "0x182D771F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x2D77100", Offset = "0x2D75700", VA = "0x182D77100", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x2D769B0", Offset = "0x2D74FB0", VA = "0x182D769B0", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x2D7D290", Offset = "0x2D7B890", VA = "0x182D7D290")]
	private void ValidateEnvMapProperty()
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x2D7C370", Offset = "0x2D7A970", VA = "0x182D7C370")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x2D7B470", Offset = "0x2D79A70", VA = "0x182D7B470")]
	private void SetMask(MaskingTypes maskType)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x2D7B340", Offset = "0x2D79940", VA = "0x182D7B340")]
	private void SetMaskCoordinates(Vector4 coords)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x2D7B230", Offset = "0x2D79830", VA = "0x182D7B230")]
	private void SetMaskCoordinates(Vector4 coords, float softX, float softY)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x2D75E40", Offset = "0x2D74440", VA = "0x182D75E40")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x2D75BF0", Offset = "0x2D741F0", VA = "0x182D75BF0")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x2D7C670", Offset = "0x2D7AC70", VA = "0x182D7C670")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x2D76260", Offset = "0x2D74860", VA = "0x182D76260", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x2D763A0", Offset = "0x2D749A0", VA = "0x182D763A0", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x2D72D60", Offset = "0x2D71360", VA = "0x182D72D60", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x2D765C0", Offset = "0x2D74BC0", VA = "0x182D765C0", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x2D7BD70", Offset = "0x2D7A370", VA = "0x182D7BD70", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x2D7BAE0", Offset = "0x2D7A0E0", VA = "0x182D7BAE0", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x2D7AFF0", Offset = "0x2D795F0", VA = "0x182D7AFF0", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x2D7B960", Offset = "0x2D79F60", VA = "0x182D7B960", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x2D75A10", Offset = "0x2D74010", VA = "0x182D75A10")]
	private void CreateMaterialInstance()
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x2D7BD30", Offset = "0x2D7A330", VA = "0x182D7BD30", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x2D7ACB0", Offset = "0x2D792B0", VA = "0x182D7ACB0", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x2D7BC70", Offset = "0x2D7A270", VA = "0x182D7BC70")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x2D77CA0", Offset = "0x2D762A0", VA = "0x182D77CA0", Slot = "114")]
	internal override int SetArraySizes(TextProcessingElement[] textProcessingArray)
	{
		return default(int);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x2D758A0", Offset = "0x2D73EA0", VA = "0x182D758A0", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x2D771D0", Offset = "0x2D757D0", VA = "0x182D771D0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x2D778F0", Offset = "0x2D75EF0", VA = "0x182D778F0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x2D77720", Offset = "0x2D75D20", VA = "0x182D77720", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x2D768E0", Offset = "0x2D74EE0", VA = "0x182D768E0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x2D77380", Offset = "0x2D75980", VA = "0x182D77380")]
	private void OnPreRenderObject()
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x2D49210", Offset = "0x2D47810", VA = "0x182D49210", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x2D767B0", Offset = "0x2D74DB0", VA = "0x182D767B0", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x2D7B730", Offset = "0x2D79D30", VA = "0x182D7B730")]
	private void SetMeshFilters(bool state)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x2D77A10", Offset = "0x2D76010", VA = "0x182D77A10", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2D77B40", Offset = "0x2D76140", VA = "0x182D77B40")]
	protected void SetActiveSubTextObjectRenderers(bool state)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x2D75AF0", Offset = "0x2D740F0", VA = "0x182D75AF0", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x2D7CC20", Offset = "0x2D7B220", VA = "0x182D7CC20")]
	internal void UpdateSubMeshSortingLayerID(int id)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x2D7CD60", Offset = "0x2D7B360", VA = "0x182D7CD60")]
	internal void UpdateSubMeshSortingOrder(int order)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x2D75FA0", Offset = "0x2D745A0", VA = "0x182D75FA0", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x2D7CA00", Offset = "0x2D7B000", VA = "0x182D7CA00")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x2D7D8E0", Offset = "0x2D7BEE0", VA = "0x182D7D8E0")]
	public TextMeshPro()
	{
	}
}
