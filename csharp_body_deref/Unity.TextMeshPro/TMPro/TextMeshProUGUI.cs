// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextMeshProUGUI
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x20000B6")]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI (Canvas)/TextMeshPro - Text (UI)", 11)]
[ExecuteAlways]
[TMPro.TMPHelpURL("index")]
public class TextMeshProUGUI : TMP_Text, ILayoutElement
{
	[Token(Token = "0x20000B7")]
	[CompilerGenerated]
	private sealed class _003CDelayedGraphicRebuild_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000693")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000694")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000695")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x170001A7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600071D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600071F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600071A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDelayedGraphicRebuild_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600071B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600071C")]
		[Address(RVA = "0x2D7E970", Offset = "0x2D7CF70", VA = "0x182D7E970", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x2D7EA50", Offset = "0x2D7D050", VA = "0x182D7EA50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000B8")]
	[CompilerGenerated]
	private sealed class _003CDelayedMaterialRebuild_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000696")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000697")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000698")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x170001A9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000723")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001AA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000725")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000720")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDelayedMaterialRebuild_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x2D7EA90", Offset = "0x2D7D090", VA = "0x182D7EA90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x2D7EB80", Offset = "0x2D7D180", VA = "0x182D7EB80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x6F0")]
	private bool m_isRebuildingLayout;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x6F8")]
	private Coroutine m_DelayedGraphicRebuild;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x700")]
	private Coroutine m_DelayedMaterialRebuild;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x708")]
	private bool m_ShouldUpdateCulling;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x70C")]
	private Rect m_ClipRect;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x71C")]
	private bool m_ValidRect;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x720")]
	[CompilerGenerated]
	private new Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x728")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x730")]
	protected TMP_SubMeshUI[] m_subTextObjects;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x738")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x740")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x748")]
	private CanvasRenderer m_canvasRenderer;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x750")]
	private Canvas m_canvas;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x758")]
	private float m_CanvasScaleFactor;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x75C")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x760")]
	private int m_max_characters;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x768")]
	[SerializeField]
	private Material m_baseMaterial;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x770")]
	private bool m_isScrollRegionSet;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x774")]
	[SerializeField]
	private Vector4 m_maskOffset;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x784")]
	private Matrix4x4 m_EnvMapMatrix;

	[NonSerialized]
	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x7C4")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveTextExtentMarker;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0xA0")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x7C8")]
	private Dictionary<int, int> materialIndexPairs;

	[Token(Token = "0x170001A2")]
	public override Material materialForRendering
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x2D75280", Offset = "0x2D73880", VA = "0x182D75280", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x2D751C0", Offset = "0x2D737C0", VA = "0x182D751C0", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x2D75390", Offset = "0x2D73990", VA = "0x182D75390", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public override Mesh mesh
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x2D242E0", Offset = "0x2D228E0", VA = "0x182D242E0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public new CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x2D751D0", Offset = "0x2D737D0", VA = "0x182D751D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public Vector4 maskOffset
	{
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x2D75270", Offset = "0x2D73870", VA = "0x182D75270")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x2D75410", Offset = "0x2D73A10", VA = "0x182D75410")]
		set
		{
		}
	}

	[Token(Token = "0x14000006")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x2D75110", Offset = "0x2D73710", VA = "0x182D75110", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x2D752E0", Offset = "0x2D738E0", VA = "0x182D752E0", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x2D732C0", Offset = "0x2D718C0", VA = "0x182D732C0", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x2D725B0", Offset = "0x2D70BB0", VA = "0x182D725B0", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x2D72690", Offset = "0x2D70C90", VA = "0x182D72690", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x2D6EE80", Offset = "0x2D6D480", VA = "0x182D6EE80", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x2D6C110", Offset = "0x2D6A710", VA = "0x182D6C110")]
	[IteratorStateMachine(typeof(_003CDelayedGraphicRebuild_003Ed__18))]
	private IEnumerator DelayedGraphicRebuild()
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x2D6C180", Offset = "0x2D6A780", VA = "0x182D6C180")]
	[IteratorStateMachine(typeof(_003CDelayedMaterialRebuild_003Ed__19))]
	private IEnumerator DelayedMaterialRebuild()
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x2D6EC70", Offset = "0x2D6D270", VA = "0x182D6EC70", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x2D74410", Offset = "0x2D72A10", VA = "0x182D74410")]
	private void UpdateSubObjectPivot()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x2D6D0B0", Offset = "0x2D6B6B0", VA = "0x182D6D0B0", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x2D73EE0", Offset = "0x2D724E0", VA = "0x182D73EE0", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x2D44030", Offset = "0x2D42630", VA = "0x182D44030", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x2D6BDF0", Offset = "0x2D6A3F0", VA = "0x182D6BDF0", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x2D733A0", Offset = "0x2D719A0", VA = "0x182D733A0", Slot = "102")]
	internal override void UpdateCulling()
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x2D74040", Offset = "0x2D72640", VA = "0x182D74040", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x2D6D660", Offset = "0x2D6BC60", VA = "0x182D6D660", Slot = "112")]
	protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x2D6D5A0", Offset = "0x2D6BBA0", VA = "0x182D6D5A0", Slot = "113")]
	protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x2D6C530", Offset = "0x2D6AB30", VA = "0x182D6C530", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x2D6D4B0", Offset = "0x2D6BAB0", VA = "0x182D6D4B0", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x2D6BB60", Offset = "0x2D6A160", VA = "0x182D6BB60", Slot = "129")]
	public override void ClearMesh()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2D73970", Offset = "0x2D71F70", VA = "0x182D73970", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2D74500", Offset = "0x2D72B00", VA = "0x182D74500", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x2D74740", Offset = "0x2D72D40", VA = "0x182D74740", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x2D73950", Offset = "0x2D71F50", VA = "0x182D73950")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x2D6B830", Offset = "0x2D69E30", VA = "0x182D6B830", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x2D6E3A0", Offset = "0x2D6C9A0", VA = "0x182D6E3A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x2D6E210", Offset = "0x2D6C810", VA = "0x182D6E210", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x2D6E060", Offset = "0x2D6C660", VA = "0x182D6E060", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x2D6D810", Offset = "0x2D6BE10", VA = "0x182D6D810", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x2D6C900", Offset = "0x2D6AF00", VA = "0x182D6C900")]
	private Canvas GetCanvas()
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x2D749A0", Offset = "0x2D72FA0", VA = "0x182D749A0")]
	private void ValidateEnvMapProperty()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2D73690", Offset = "0x2D71C90", VA = "0x182D73690")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2D6C2F0", Offset = "0x2D6A8F0", VA = "0x182D6C2F0")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x2D73A00", Offset = "0x2D72000", VA = "0x182D73A00")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x2D6CD10", Offset = "0x2D6B310", VA = "0x182D6CD10", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x2D6CE80", Offset = "0x2D6B480", VA = "0x182D6CE80", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x2D72D60", Offset = "0x2D71360", VA = "0x182D72D60", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x2D6D210", Offset = "0x2D6B810", VA = "0x182D6D210", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x2D72DB0", Offset = "0x2D713B0", VA = "0x182D72DB0", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x2D729C0", Offset = "0x2D70FC0", VA = "0x182D729C0", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x2D72420", Offset = "0x2D70A20", VA = "0x182D72420", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x2D72830", Offset = "0x2D70E30", VA = "0x182D72830", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x2D72CB0", Offset = "0x2D712B0", VA = "0x182D72CB0", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x2D720A0", Offset = "0x2D706A0", VA = "0x182D720A0", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x2D72BF0", Offset = "0x2D711F0", VA = "0x182D72BF0")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x2D72770", Offset = "0x2D70D70", VA = "0x182D72770")]
	private void SetMeshArrays(int size)
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x2D6EED0", Offset = "0x2D6D4D0", VA = "0x182D6EED0", Slot = "114")]
	internal override int SetArraySizes(TextProcessingElement[] textProcessingArray)
	{
		return default(int);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x2D6BC80", Offset = "0x2D6A280", VA = "0x182D6BC80", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x2D6E1D0", Offset = "0x2D6C7D0", VA = "0x182D6E1D0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x2D6DF30", Offset = "0x2D6C530", VA = "0x182D6DF30", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x2D6EC20", Offset = "0x2D6D220", VA = "0x182D6EC20", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x2D6E8C0", Offset = "0x2D6CEC0", VA = "0x182D6E8C0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x2D6D740", Offset = "0x2D6BD40", VA = "0x182D6D740", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x2D6E610", Offset = "0x2D6CC10", VA = "0x182D6E610")]
	private void OnPreRenderCanvas()
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x2D54E20", Offset = "0x2D53420", VA = "0x182D54E20", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x2D6D400", Offset = "0x2D6BA00", VA = "0x182D6D400", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x2D6ED50", Offset = "0x2D6D350", VA = "0x182D6ED50", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x2D6C1F0", Offset = "0x2D6A7F0", VA = "0x182D6C1F0", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2D6CA50", Offset = "0x2D6B050", VA = "0x182D6CA50", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x2D6C5E0", Offset = "0x2D6ABE0", VA = "0x182D6C5E0", Slot = "117")]
	internal override Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x2D74150", Offset = "0x2D72750", VA = "0x182D74150")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x2D74FF0", Offset = "0x2D735F0", VA = "0x182D74FF0")]
	public TextMeshProUGUI()
	{
	}
}
