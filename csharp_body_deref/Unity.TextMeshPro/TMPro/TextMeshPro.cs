using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x20000A1")]
[DisallowMultipleComponent]
[RequireComponent(typeof(MeshRenderer))]
[AddComponentMenu("Mesh/TextMeshPro - Text")]
[ExecuteAlways]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@3.0")]
public class TextMeshPro : TMP_Text, ILayoutElement
{
	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x6C8")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x6CC")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x6D0")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x6D8")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x6E0")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x6E4")]
	private int m_max_characters;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x6E8")]
	private int m_max_numberOfLines;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x6F0")]
	private TMP_SubMesh[] m_subTextObjects;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x6F8")]
	[SerializeField]
	private MaskingTypes m_maskType;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x6FC")]
	private Matrix4x4 m_EnvMapMatrix;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x740")]
	private Vector3[] m_RectTransformCorners;

	[NonSerialized]
	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x748")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x74C")]
	[SerializeField]
	internal int _SortingLayer;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x750")]
	[SerializeField]
	internal int _SortingLayerID;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x754")]
	[SerializeField]
	internal int _SortingOrder;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x760")]
	private bool m_currentAutoSizeMode;

	[Token(Token = "0x17000152")]
	public int sortingLayerID
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x496E380", Offset = "0x496E380", VA = "0x496E380")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x496E4A0", Offset = "0x496E4A0", VA = "0x496E4A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public int sortingOrder
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x496E530", Offset = "0x496E530", VA = "0x496E530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x496E5B0", Offset = "0x496E5B0", VA = "0x496E5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x496E640", Offset = "0x496E640", VA = "0x496E640", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x496E650", Offset = "0x496E650", VA = "0x496E650", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	[Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
	public TextContainer textContainer
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x496E740", Offset = "0x496E740", VA = "0x496E740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	public new Transform transform
	{
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x4967E10", Offset = "0x4967E10", VA = "0x4967E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public Renderer renderer
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x496E400", Offset = "0x496E400", VA = "0x496E400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000158")]
	public override Mesh mesh
	{
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x496E750", Offset = "0x496E750", VA = "0x496E750", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x4968010", Offset = "0x4968010", VA = "0x4968010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public MaskingTypes maskType
	{
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x496E810", Offset = "0x496E810", VA = "0x496E810")]
		get
		{
			return default(MaskingTypes);
		}
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x496E820", Offset = "0x496E820", VA = "0x496E820")]
		set
		{
		}
	}

	[Token(Token = "0x14000004")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x496EF90", Offset = "0x496EF90", VA = "0x496EF90", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x496F040", Offset = "0x496F040", VA = "0x496F040", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4967980", Offset = "0x4967980", VA = "0x4967980", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4967EB0", Offset = "0x4967EB0", VA = "0x4967EB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4968130", Offset = "0x4968130", VA = "0x4968130", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4968230", Offset = "0x4968230", VA = "0x4968230", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4968350", Offset = "0x4968350", VA = "0x4968350", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4968A60", Offset = "0x4968A60", VA = "0x4968A60")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4968D60", Offset = "0x4968D60", VA = "0x4968D60")]
	private void SetMask(MaskingTypes maskType)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4968F00", Offset = "0x4968F00", VA = "0x4968F00")]
	private void SetMaskCoordinates(Vector4 coords)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4968FA0", Offset = "0x4968FA0", VA = "0x4968FA0")]
	private void SetMaskCoordinates(Vector4 coords, float softX, float softY)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x49690A0", Offset = "0x49690A0", VA = "0x49690A0")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4969290", Offset = "0x4969290", VA = "0x4969290")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4969210", Offset = "0x4969210", VA = "0x4969210")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x49694D0", Offset = "0x49694D0", VA = "0x49694D0", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4969600", Offset = "0x4969600", VA = "0x4969600", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4969830", Offset = "0x4969830", VA = "0x4969830", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4969880", Offset = "0x4969880", VA = "0x4969880", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4969A80", Offset = "0x4969A80", VA = "0x4969A80", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4969F00", Offset = "0x4969F00", VA = "0x4969F00", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x496A070", Offset = "0x496A070", VA = "0x496A070", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x496A1C0", Offset = "0x496A1C0", VA = "0x496A1C0", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4969400", Offset = "0x4969400", VA = "0x4969400")]
	private void CreateMaterialInstance()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x496A310", Offset = "0x496A310", VA = "0x496A310", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x496A420", Offset = "0x496A420", VA = "0x496A420", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x496A750", Offset = "0x496A750", VA = "0x496A750")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x496A7D0", Offset = "0x496A7D0", VA = "0x496A7D0", Slot = "114")]
	internal override int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x496CED0", Offset = "0x496CED0", VA = "0x496CED0", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x496CFF0", Offset = "0x496CFF0", VA = "0x496CFF0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x496D020", Offset = "0x496D020", VA = "0x496D020", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x496D050", Offset = "0x496D050", VA = "0x496D050", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x496D1D0", Offset = "0x496D1D0", VA = "0x496D1D0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x496D460", Offset = "0x496D460", VA = "0x496D460")]
	private void OnPreRenderObject()
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x494EF70", Offset = "0x494EF70", VA = "0x494EF70", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x496D890", Offset = "0x496D890", VA = "0x496D890", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x496D940", Offset = "0x496D940", VA = "0x496D940")]
	private void SetMeshFilters(bool state)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x496DC30", Offset = "0x496DC30", VA = "0x496DC30", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x496D740", Offset = "0x496D740", VA = "0x496D740")]
	protected void SetActiveSubTextObjectRenderers(bool state)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x496DD50", Offset = "0x496DD50", VA = "0x496DD50", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x496DE40", Offset = "0x496DE40", VA = "0x496DE40")]
	internal void UpdateSubMeshSortingLayerID(int id)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x496DF60", Offset = "0x496DF60", VA = "0x496DF60")]
	internal void UpdateSubMeshSortingOrder(int order)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x496E080", Offset = "0x496E080", VA = "0x496E080", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x496D290", Offset = "0x496D290", VA = "0x496D290")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x496E830", Offset = "0x496E830", VA = "0x496E830")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x496E8C0", Offset = "0x496E8C0", VA = "0x496E8C0")]
	public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x496E910", Offset = "0x496E910", VA = "0x496E910", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x496EA10", Offset = "0x496EA10", VA = "0x496EA10", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x496EAD0", Offset = "0x496EAD0", VA = "0x496EAD0", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x496EAF0", Offset = "0x496EAF0", VA = "0x496EAF0", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x496EB30", Offset = "0x496EB30", VA = "0x496EB30", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x496EC00", Offset = "0x496EC00", VA = "0x496EC00", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x496ED20", Offset = "0x496ED20", VA = "0x496ED20", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x496EE30", Offset = "0x496EE30", VA = "0x496EE30", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x496EE50", Offset = "0x496EE50", VA = "0x496EE50", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x496EEC0", Offset = "0x496EEC0", VA = "0x496EEC0", Slot = "130")]
	public override void ClearMesh(bool updateMesh)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x496F0F0", Offset = "0x496F0F0", VA = "0x496F0F0", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x496F110", Offset = "0x496F110", VA = "0x496F110", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x496F310", Offset = "0x496F310", VA = "0x496F310", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x496F530", Offset = "0x496F530", VA = "0x496F530")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x496F550", Offset = "0x496F550", VA = "0x496F550", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x496F560", Offset = "0x496F560", VA = "0x496F560", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x496F570", Offset = "0x496F570", VA = "0x496F570")]
	public TextMeshPro()
	{
	}
}
