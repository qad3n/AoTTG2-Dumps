// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextMeshProUGUI
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6774D20", Offset = "0x6773D20", VA = "0x6774D20", Slot = "4")]
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
			[Address(RVA = "0x6774D70", Offset = "0x6773D70", VA = "0x6774D70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600071A")]
		[Address(RVA = "0x6774C20", Offset = "0x6773C20", VA = "0x6774C20")]
		[DebuggerHidden]
		public _003CDelayedGraphicRebuild_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600071B")]
		[Address(RVA = "0x6774C40", Offset = "0x6773C40", VA = "0x6774C40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600071C")]
		[Address(RVA = "0x6774C50", Offset = "0x6773C50", VA = "0x6774C50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x6774D30", Offset = "0x6773D30", VA = "0x6774D30", Slot = "8")]
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
			[Address(RVA = "0x6774E90", Offset = "0x6773E90", VA = "0x6774E90", Slot = "4")]
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
			[Address(RVA = "0x6774EE0", Offset = "0x6773EE0", VA = "0x6774EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000720")]
		[Address(RVA = "0x6774D80", Offset = "0x6773D80", VA = "0x6774D80")]
		[DebuggerHidden]
		public _003CDelayedMaterialRebuild_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x6774DA0", Offset = "0x6773DA0", VA = "0x6774DA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x6774DB0", Offset = "0x6773DB0", VA = "0x6774DB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x6774EA0", Offset = "0x6773EA0", VA = "0x6774EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x6E8")]
	private bool m_isRebuildingLayout;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x6F0")]
	private Coroutine m_DelayedGraphicRebuild;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x6F8")]
	private Coroutine m_DelayedMaterialRebuild;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x700")]
	private bool m_ShouldUpdateCulling;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x704")]
	private Rect m_ClipRect;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x714")]
	private bool m_ValidRect;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x718")]
	[CompilerGenerated]
	private new Action<TMP_TextInfo> m_OnPreRenderText;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x720")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x728")]
	protected TMP_SubMeshUI[] m_subTextObjects;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x730")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x738")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x740")]
	private CanvasRenderer m_canvasRenderer;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x748")]
	private Canvas m_canvas;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x750")]
	private float m_CanvasScaleFactor;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x754")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x758")]
	private int m_max_characters;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x760")]
	[SerializeField]
	private Material m_baseMaterial;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x768")]
	private bool m_isScrollRegionSet;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x76C")]
	[SerializeField]
	private Vector4 m_maskOffset;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x77C")]
	private Matrix4x4 m_EnvMapMatrix;

	[NonSerialized]
	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x7BC")]
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
	[FieldOffset(Offset = "0x7C0")]
	private Dictionary<int, int> materialIndexPairs;

	[Token(Token = "0x170001A2")]
	public override Material materialForRendering
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x676AFE0", Offset = "0x6769FE0", VA = "0x676AFE0", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x676B040", Offset = "0x676A040", VA = "0x676B040", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x676B050", Offset = "0x676A050", VA = "0x676B050", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public override Mesh mesh
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x676B0D0", Offset = "0x676A0D0", VA = "0x676B0D0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public new CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x676B0E0", Offset = "0x676A0E0", VA = "0x676B0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public Vector4 maskOffset
	{
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x676BBE0", Offset = "0x676ABE0", VA = "0x676BBE0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x676BC00", Offset = "0x676AC00", VA = "0x676BC00")]
		set
		{
		}
	}

	[Token(Token = "0x14000006")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x676C960", Offset = "0x676B960", VA = "0x676C960", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x676CA10", Offset = "0x676BA10", VA = "0x676CA10", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x676B180", Offset = "0x676A180", VA = "0x676B180", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x676B190", Offset = "0x676A190", VA = "0x676B190", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x676B1A0", Offset = "0x676A1A0", VA = "0x676B1A0", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x676B290", Offset = "0x676A290", VA = "0x676B290", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x676B370", Offset = "0x676A370", VA = "0x676B370", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x676B460", Offset = "0x676A460", VA = "0x676B460", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x676B4A0", Offset = "0x676A4A0", VA = "0x676B4A0")]
	[IteratorStateMachine(typeof(_003CDelayedGraphicRebuild_003Ed__18))]
	private IEnumerator DelayedGraphicRebuild()
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x676B510", Offset = "0x676A510", VA = "0x676B510")]
	[IteratorStateMachine(typeof(_003CDelayedMaterialRebuild_003Ed__19))]
	private IEnumerator DelayedMaterialRebuild()
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x676B580", Offset = "0x676A580", VA = "0x676B580", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x676B910", Offset = "0x676A910", VA = "0x676B910")]
	private void UpdateSubObjectPivot()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x676B9E0", Offset = "0x676A9E0", VA = "0x676B9E0", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x676BB00", Offset = "0x676AB00", VA = "0x676BB00", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x676C060", Offset = "0x676B060", VA = "0x676C060", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x676C070", Offset = "0x676B070", VA = "0x676C070", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x676C270", Offset = "0x676B270", VA = "0x676C270", Slot = "102")]
	internal override void UpdateCulling()
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x676C460", Offset = "0x676B460", VA = "0x676C460", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x676C570", Offset = "0x676B570", VA = "0x676C570", Slot = "112")]
	protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x676C630", Offset = "0x676B630", VA = "0x676C630", Slot = "113")]
	protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x676C6D0", Offset = "0x676B6D0", VA = "0x676C6D0", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x676C780", Offset = "0x676B780", VA = "0x676C780", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x676C870", Offset = "0x676B870", VA = "0x676C870", Slot = "129")]
	public override void ClearMesh()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x676CAC0", Offset = "0x676BAC0", VA = "0x676CAC0", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x676CB30", Offset = "0x676BB30", VA = "0x676CB30", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x676CF00", Offset = "0x676BF00", VA = "0x676CF00", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x676D250", Offset = "0x676C250", VA = "0x676D250")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x676D270", Offset = "0x676C270", VA = "0x676D270", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x676D5C0", Offset = "0x676C5C0", VA = "0x676D5C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x676D8D0", Offset = "0x676C8D0", VA = "0x676D8D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x676DAC0", Offset = "0x676CAC0", VA = "0x676DAC0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x676DCA0", Offset = "0x676CCA0", VA = "0x676DCA0", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x676D770", Offset = "0x676C770", VA = "0x676D770")]
	private Canvas GetCanvas()
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x676E2D0", Offset = "0x676D2D0", VA = "0x676E2D0")]
	private void ValidateEnvMapProperty()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x676E400", Offset = "0x676D400", VA = "0x676E400")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x676E6F0", Offset = "0x676D6F0", VA = "0x676E6F0")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x676E8F0", Offset = "0x676D8F0", VA = "0x676E8F0")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x676BC20", Offset = "0x676AC20", VA = "0x676BC20")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x676E900", Offset = "0x676D900", VA = "0x676E900", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x676EA60", Offset = "0x676DA60", VA = "0x676EA60", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x676EC80", Offset = "0x676DC80", VA = "0x676EC80", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x676ECD0", Offset = "0x676DCD0", VA = "0x676ECD0", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x676EEC0", Offset = "0x676DEC0", VA = "0x676EEC0", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x676F400", Offset = "0x676E400", VA = "0x676F400", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x676F620", Offset = "0x676E620", VA = "0x676F620", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x676F780", Offset = "0x676E780", VA = "0x676F780", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x676F8E0", Offset = "0x676E8E0", VA = "0x676F8E0", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x676F980", Offset = "0x676E980", VA = "0x676F980", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x676FCC0", Offset = "0x676ECC0", VA = "0x676FCC0")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x676FD50", Offset = "0x676ED50", VA = "0x676FD50")]
	private void SetMeshArrays(int size)
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x676FE00", Offset = "0x676EE00", VA = "0x676FE00", Slot = "114")]
	internal override int SetArraySizes(TextProcessingElement[] textProcessingArray)
	{
		return default(int);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x6773040", Offset = "0x6772040", VA = "0x6773040", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x6773170", Offset = "0x6772170", VA = "0x6773170", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x67731B0", Offset = "0x67721B0", VA = "0x67731B0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x6773390", Offset = "0x6772390", VA = "0x6773390", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x67733E0", Offset = "0x67723E0", VA = "0x67733E0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x67736D0", Offset = "0x67726D0", VA = "0x67736D0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x676B650", Offset = "0x676A650", VA = "0x676B650")]
	private void OnPreRenderCanvas()
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x674D150", Offset = "0x674C150", VA = "0x674D150", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x6773A90", Offset = "0x6772A90", VA = "0x6773A90", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x6773B30", Offset = "0x6772B30", VA = "0x6773B30", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x6773C40", Offset = "0x6772C40", VA = "0x6773C40", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x6773D30", Offset = "0x6772D30", VA = "0x6773D30", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x6773FA0", Offset = "0x6772FA0", VA = "0x6773FA0", Slot = "117")]
	internal override Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x6773790", Offset = "0x6772790", VA = "0x6773790")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x67741C0", Offset = "0x67731C0", VA = "0x67741C0")]
	public TextMeshProUGUI()
	{
	}
}
