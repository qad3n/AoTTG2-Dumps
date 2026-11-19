// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextMeshPro
// Update status: unchanged since the previous dump
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
	[FieldOffset(Offset = "0x6E8")]
	[SerializeField]
	internal int _SortingLayer;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x6EC")]
	[SerializeField]
	internal int _SortingLayerID;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x6F0")]
	[SerializeField]
	internal int _SortingOrder;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x6F8")]
	[CompilerGenerated]
	private new Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x700")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x704")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x708")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x710")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x718")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x71C")]
	private int m_max_characters;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x720")]
	private int m_max_numberOfLines;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x728")]
	private TMP_SubMesh[] m_subTextObjects;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x730")]
	[SerializeField]
	private MaskingTypes m_maskType;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x734")]
	private Matrix4x4 m_EnvMapMatrix;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x778")]
	private Vector3[] m_RectTransformCorners;

	[NonSerialized]
	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x780")]
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
	[FieldOffset(Offset = "0x788")]
	private Dictionary<int, int> materialIndexPairs;

	[Token(Token = "0x17000199")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x67623C0", Offset = "0x67613C0", VA = "0x67623C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x67624E0", Offset = "0x67614E0", VA = "0x67624E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int sortingOrder
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x6762690", Offset = "0x6761690", VA = "0x6762690")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x6762710", Offset = "0x6761710", VA = "0x6762710")]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x67628C0", Offset = "0x67618C0", VA = "0x67628C0", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x67628D0", Offset = "0x67618D0", VA = "0x67628D0", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	[Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
	public TextContainer textContainer
	{
		[Token(Token = "0x6000689")]
		[Address(RVA = "0x67629B0", Offset = "0x67619B0", VA = "0x67629B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public new Transform transform
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x67629C0", Offset = "0x67619C0", VA = "0x67629C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public Renderer renderer
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x6762440", Offset = "0x6761440", VA = "0x6762440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public override Mesh mesh
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x6762A60", Offset = "0x6761A60", VA = "0x6762A60", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x6762B20", Offset = "0x6761B20", VA = "0x6762B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public MaskingTypes maskType
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x6762C40", Offset = "0x6761C40", VA = "0x6762C40")]
		get
		{
			return default(MaskingTypes);
		}
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x6762C50", Offset = "0x6761C50", VA = "0x6762C50")]
		set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x67639E0", Offset = "0x67629E0", VA = "0x67639E0", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x6763A90", Offset = "0x6762A90", VA = "0x6763A90", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x6762DF0", Offset = "0x6761DF0", VA = "0x6762DF0")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x6762F20", Offset = "0x6761F20", VA = "0x6762F20")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x6763070", Offset = "0x6762070", VA = "0x6763070", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x6763180", Offset = "0x6762180", VA = "0x6763180", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x6763240", Offset = "0x6762240", VA = "0x6763240", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x6763260", Offset = "0x6762260", VA = "0x6763260", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x67632A0", Offset = "0x67622A0", VA = "0x67632A0", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x6763650", Offset = "0x6762650", VA = "0x6763650", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x6763770", Offset = "0x6762770", VA = "0x6763770", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x6763880", Offset = "0x6762880", VA = "0x6763880", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x67638A0", Offset = "0x67628A0", VA = "0x67638A0", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x6763910", Offset = "0x6762910", VA = "0x6763910", Slot = "130")]
	public override void ClearMesh(bool updateMesh)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x6763B40", Offset = "0x6762B40", VA = "0x6763B40", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x6763B60", Offset = "0x6762B60", VA = "0x6763B60", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x6763ED0", Offset = "0x6762ED0", VA = "0x6763ED0", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x67641C0", Offset = "0x67631C0", VA = "0x67641C0")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x67641E0", Offset = "0x67631E0", VA = "0x67641E0", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x67641F0", Offset = "0x67631F0", VA = "0x67641F0", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x6764200", Offset = "0x6763200", VA = "0x6764200", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x6764570", Offset = "0x6763570", VA = "0x6764570", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x67646D0", Offset = "0x67636D0", VA = "0x67646D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x67647D0", Offset = "0x67637D0", VA = "0x67647D0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x67648F0", Offset = "0x67638F0", VA = "0x67648F0", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x6764F50", Offset = "0x6763F50", VA = "0x6764F50")]
	private void ValidateEnvMapProperty()
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x6765080", Offset = "0x6764080", VA = "0x6765080")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x6762C60", Offset = "0x6761C60", VA = "0x6762C60")]
	private void SetMask(MaskingTypes maskType)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x6762E80", Offset = "0x6761E80", VA = "0x6762E80")]
	private void SetMaskCoordinates(Vector4 coords)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x6762F70", Offset = "0x6761F70", VA = "0x6762F70")]
	private void SetMaskCoordinates(Vector4 coords, float softX, float softY)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x6765380", Offset = "0x6764380", VA = "0x6765380")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x6765570", Offset = "0x6764570", VA = "0x6765570")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x67654F0", Offset = "0x67644F0", VA = "0x67654F0")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x67657B0", Offset = "0x67647B0", VA = "0x67657B0", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x67658E0", Offset = "0x67648E0", VA = "0x67658E0", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x6765B00", Offset = "0x6764B00", VA = "0x6765B00", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x6765B50", Offset = "0x6764B50", VA = "0x6765B50", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x6765D40", Offset = "0x6764D40", VA = "0x6765D40", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x67661A0", Offset = "0x67651A0", VA = "0x67661A0", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x6766310", Offset = "0x6765310", VA = "0x6766310", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x6766470", Offset = "0x6765470", VA = "0x6766470", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x67656E0", Offset = "0x67646E0", VA = "0x67656E0")]
	private void CreateMaterialInstance()
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x67665D0", Offset = "0x67655D0", VA = "0x67665D0", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x6766610", Offset = "0x6765610", VA = "0x6766610", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x6766940", Offset = "0x6765940", VA = "0x6766940")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x67669D0", Offset = "0x67659D0", VA = "0x67669D0", Slot = "114")]
	internal override int SetArraySizes(TextProcessingElement[] textProcessingArray)
	{
		return default(int);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x6769A80", Offset = "0x6768A80", VA = "0x6769A80", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x6769BB0", Offset = "0x6768BB0", VA = "0x6769BB0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x6769BE0", Offset = "0x6768BE0", VA = "0x6769BE0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x6769C10", Offset = "0x6768C10", VA = "0x6769C10", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x6769DE0", Offset = "0x6768DE0", VA = "0x6769DE0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x6763370", Offset = "0x6762370", VA = "0x6763370")]
	private void OnPreRenderObject()
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x6741EF0", Offset = "0x6740EF0", VA = "0x6741EF0", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x676A200", Offset = "0x6769200", VA = "0x676A200", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x676A2A0", Offset = "0x67692A0", VA = "0x676A2A0")]
	private void SetMeshFilters(bool state)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x676A5A0", Offset = "0x67695A0", VA = "0x676A5A0", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x676A0D0", Offset = "0x67690D0", VA = "0x676A0D0")]
	protected void SetActiveSubTextObjectRenderers(bool state)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x676A6B0", Offset = "0x67696B0", VA = "0x676A6B0", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x6762570", Offset = "0x6761570", VA = "0x6762570")]
	internal void UpdateSubMeshSortingLayerID(int id)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x67627A0", Offset = "0x67617A0", VA = "0x67627A0")]
	internal void UpdateSubMeshSortingOrder(int order)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x676A7A0", Offset = "0x67697A0", VA = "0x676A7A0", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x6769EA0", Offset = "0x6768EA0", VA = "0x6769EA0")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x676AA10", Offset = "0x6769A10", VA = "0x676AA10")]
	public TextMeshPro()
	{
	}
}
