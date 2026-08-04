// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextMeshPro
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x200000E")]
[DisallowMultipleComponent]
[RequireComponent(typeof(MeshRenderer))]
[AddComponentMenu("Mesh/TextMeshPro - Text")]
[ExecuteAlways]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@3.0")]
public class TextMeshPro : TMP_Text, ILayoutElement
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x6C8")]
	[SerializeField]
	internal int _SortingLayer;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x6CC")]
	[SerializeField]
	internal int _SortingLayerID;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x6D0")]
	[SerializeField]
	internal int _SortingOrder;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x6E0")]
	private bool m_currentAutoSizeMode;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x6E1")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x6E4")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x6E8")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x6F0")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x6F8")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x6FC")]
	private int m_max_characters;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x700")]
	private int m_max_numberOfLines;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x708")]
	private TMP_SubMesh[] m_subTextObjects;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x710")]
	[SerializeField]
	private MaskingTypes m_maskType;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x714")]
	private Matrix4x4 m_EnvMapMatrix;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x758")]
	private Vector3[] m_RectTransformCorners;

	[NonSerialized]
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x760")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x17000011")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x4C32450", Offset = "0x4C32450", VA = "0x4C32450")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x4C32570", Offset = "0x4C32570", VA = "0x4C32570")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int sortingOrder
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x4C32720", Offset = "0x4C32720", VA = "0x4C32720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x4C327A0", Offset = "0x4C327A0", VA = "0x4C327A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x4C32950", Offset = "0x4C32950", VA = "0x4C32950", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x4C32960", Offset = "0x4C32960", VA = "0x4C32960", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	[Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
	public TextContainer textContainer
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x4C329F0", Offset = "0x4C329F0", VA = "0x4C329F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public new Transform transform
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x4C32A00", Offset = "0x4C32A00", VA = "0x4C32A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public Renderer renderer
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x4C324D0", Offset = "0x4C324D0", VA = "0x4C324D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public override Mesh mesh
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x4C32AA0", Offset = "0x4C32AA0", VA = "0x4C32AA0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4C32B60", Offset = "0x4C32B60", VA = "0x4C32B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public MaskingTypes maskType
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4C32C80", Offset = "0x4C32C80", VA = "0x4C32C80")]
		get
		{
			return default(MaskingTypes);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4C32C90", Offset = "0x4C32C90", VA = "0x4C32C90")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4C339C0", Offset = "0x4C339C0", VA = "0x4C339C0", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x4C33A70", Offset = "0x4C33A70", VA = "0x4C33A70", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4C32E40", Offset = "0x4C32E40", VA = "0x4C32E40")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4C32F70", Offset = "0x4C32F70", VA = "0x4C32F70")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4C330C0", Offset = "0x4C330C0", VA = "0x4C330C0", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4C33160", Offset = "0x4C33160", VA = "0x4C33160", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4C33220", Offset = "0x4C33220", VA = "0x4C33220", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4C33240", Offset = "0x4C33240", VA = "0x4C33240", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4C33280", Offset = "0x4C33280", VA = "0x4C33280", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4C33630", Offset = "0x4C33630", VA = "0x4C33630", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4C33750", Offset = "0x4C33750", VA = "0x4C33750", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4C33860", Offset = "0x4C33860", VA = "0x4C33860", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4C33880", Offset = "0x4C33880", VA = "0x4C33880", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4C338F0", Offset = "0x4C338F0", VA = "0x4C338F0", Slot = "130")]
	public override void ClearMesh(bool updateMesh)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4C33B20", Offset = "0x4C33B20", VA = "0x4C33B20", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4C33B40", Offset = "0x4C33B40", VA = "0x4C33B40", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4C33D40", Offset = "0x4C33D40", VA = "0x4C33D40", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4C33F60", Offset = "0x4C33F60", VA = "0x4C33F60")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4C33F80", Offset = "0x4C33F80", VA = "0x4C33F80", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4C33F90", Offset = "0x4C33F90", VA = "0x4C33F90", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4C33FA0", Offset = "0x4C33FA0", VA = "0x4C33FA0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4C34430", Offset = "0x4C34430", VA = "0x4C34430", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4C34530", Offset = "0x4C34530", VA = "0x4C34530", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4C345C0", Offset = "0x4C345C0", VA = "0x4C345C0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4C34680", Offset = "0x4C34680", VA = "0x4C34680", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4C34D90", Offset = "0x4C34D90", VA = "0x4C34D90")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4C32CA0", Offset = "0x4C32CA0", VA = "0x4C32CA0")]
	private void SetMask(MaskingTypes maskType)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4C32ED0", Offset = "0x4C32ED0", VA = "0x4C32ED0")]
	private void SetMaskCoordinates(Vector4 coords)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4C32FC0", Offset = "0x4C32FC0", VA = "0x4C32FC0")]
	private void SetMaskCoordinates(Vector4 coords, float softX, float softY)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4C35090", Offset = "0x4C35090", VA = "0x4C35090")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4C35280", Offset = "0x4C35280", VA = "0x4C35280")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4C35200", Offset = "0x4C35200", VA = "0x4C35200")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4C354C0", Offset = "0x4C354C0", VA = "0x4C354C0", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4C355F0", Offset = "0x4C355F0", VA = "0x4C355F0", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4C35820", Offset = "0x4C35820", VA = "0x4C35820", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4C35870", Offset = "0x4C35870", VA = "0x4C35870", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4C35A70", Offset = "0x4C35A70", VA = "0x4C35A70", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4C35EF0", Offset = "0x4C35EF0", VA = "0x4C35EF0", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4C36060", Offset = "0x4C36060", VA = "0x4C36060", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4C361B0", Offset = "0x4C361B0", VA = "0x4C361B0", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4C353F0", Offset = "0x4C353F0", VA = "0x4C353F0")]
	private void CreateMaterialInstance()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4C36300", Offset = "0x4C36300", VA = "0x4C36300", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4C36410", Offset = "0x4C36410", VA = "0x4C36410", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4C36740", Offset = "0x4C36740", VA = "0x4C36740")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4C367C0", Offset = "0x4C367C0", VA = "0x4C367C0", Slot = "114")]
	internal override int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4C38EC0", Offset = "0x4C38EC0", VA = "0x4C38EC0", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4C38FE0", Offset = "0x4C38FE0", VA = "0x4C38FE0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4C39010", Offset = "0x4C39010", VA = "0x4C39010", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4C39040", Offset = "0x4C39040", VA = "0x4C39040", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4C391C0", Offset = "0x4C391C0", VA = "0x4C391C0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4C33350", Offset = "0x4C33350", VA = "0x4C33350")]
	private void OnPreRenderObject()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4C1AD40", Offset = "0x4C1AD40", VA = "0x4C1AD40", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4C395A0", Offset = "0x4C395A0", VA = "0x4C395A0", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4C39650", Offset = "0x4C39650", VA = "0x4C39650")]
	private void SetMeshFilters(bool state)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4C39940", Offset = "0x4C39940", VA = "0x4C39940", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4C39450", Offset = "0x4C39450", VA = "0x4C39450")]
	protected void SetActiveSubTextObjectRenderers(bool state)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4C39A60", Offset = "0x4C39A60", VA = "0x4C39A60", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4C32600", Offset = "0x4C32600", VA = "0x4C32600")]
	internal void UpdateSubMeshSortingLayerID(int id)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4C32830", Offset = "0x4C32830", VA = "0x4C32830")]
	internal void UpdateSubMeshSortingOrder(int order)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4C39B50", Offset = "0x4C39B50", VA = "0x4C39B50", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4C39280", Offset = "0x4C39280", VA = "0x4C39280")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4C39E50", Offset = "0x4C39E50", VA = "0x4C39E50")]
	public TextMeshPro()
	{
	}
}
