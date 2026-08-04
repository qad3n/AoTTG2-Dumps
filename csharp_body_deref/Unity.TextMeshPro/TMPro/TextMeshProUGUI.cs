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

[Token(Token = "0x200000F")]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/TextMeshPro - Text (UI)", 11)]
[ExecuteAlways]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@3.0")]
public class TextMeshProUGUI : TMP_Text, ILayoutElement
{
	[Token(Token = "0x2000010")]
	[CompilerGenerated]
	private sealed class _003CDelayedGraphicRebuild_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x1700001F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000E9")]
			[Address(RVA = "0x4C42DB0", Offset = "0x4C42DB0", VA = "0x4C42DB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000020")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000EB")]
			[Address(RVA = "0x4C42E00", Offset = "0x4C42E00", VA = "0x4C42E00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4C3A8C0", Offset = "0x4C3A8C0", VA = "0x4C3A8C0")]
		[DebuggerHidden]
		public _003CDelayedGraphicRebuild_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4C42CD0", Offset = "0x4C42CD0", VA = "0x4C42CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4C42CE0", Offset = "0x4C42CE0", VA = "0x4C42CE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4C42DC0", Offset = "0x4C42DC0", VA = "0x4C42DC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000011")]
	[CompilerGenerated]
	private sealed class _003CDelayedMaterialRebuild_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x17000021")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000EF")]
			[Address(RVA = "0x4C42F00", Offset = "0x4C42F00", VA = "0x4C42F00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000F1")]
			[Address(RVA = "0x4C42F50", Offset = "0x4C42F50", VA = "0x4C42F50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x4C3A950", Offset = "0x4C3A950", VA = "0x4C3A950")]
		[DebuggerHidden]
		public _003CDelayedMaterialRebuild_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x4C42E10", Offset = "0x4C42E10", VA = "0x4C42E10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x4C42E20", Offset = "0x4C42E20", VA = "0x4C42E20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x4C42F10", Offset = "0x4C42F10", VA = "0x4C42F10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x6C8")]
	private bool m_isRebuildingLayout;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x6D0")]
	private Coroutine m_DelayedGraphicRebuild;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x6D8")]
	private Coroutine m_DelayedMaterialRebuild;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x6E0")]
	private Rect m_ClipRect;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x6F0")]
	private bool m_ValidRect;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x700")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x708")]
	protected TMP_SubMeshUI[] m_subTextObjects;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x710")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x718")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x720")]
	private CanvasRenderer m_canvasRenderer;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x728")]
	private Canvas m_canvas;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x730")]
	private float m_CanvasScaleFactor;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x734")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x738")]
	private int m_max_characters;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x740")]
	[SerializeField]
	private Material m_baseMaterial;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x748")]
	private bool m_isScrollRegionSet;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x74C")]
	[SerializeField]
	private Vector4 m_maskOffset;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x75C")]
	private Matrix4x4 m_EnvMapMatrix;

	[NonSerialized]
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x79C")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x1700001A")]
	public override Material materialForRendering
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x4C3A390", Offset = "0x4C3A390", VA = "0x4C3A390", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x4C3A3F0", Offset = "0x4C3A3F0", VA = "0x4C3A3F0", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x4C3A400", Offset = "0x4C3A400", VA = "0x4C3A400", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public override Mesh mesh
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x4C3A490", Offset = "0x4C3A490", VA = "0x4C3A490", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public new CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x4C3A4A0", Offset = "0x4C3A4A0", VA = "0x4C3A4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public Vector4 maskOffset
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x4C3AFE0", Offset = "0x4C3AFE0", VA = "0x4C3AFE0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x4C3B000", Offset = "0x4C3B000", VA = "0x4C3B000")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4C3BEB0", Offset = "0x4C3BEB0", VA = "0x4C3BEB0", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4C3BF60", Offset = "0x4C3BF60", VA = "0x4C3BF60", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4C3A540", Offset = "0x4C3A540", VA = "0x4C3A540", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4C3A550", Offset = "0x4C3A550", VA = "0x4C3A550", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4C3A560", Offset = "0x4C3A560", VA = "0x4C3A560", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4C3A640", Offset = "0x4C3A640", VA = "0x4C3A640", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4C3A720", Offset = "0x4C3A720", VA = "0x4C3A720", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4C3A810", Offset = "0x4C3A810", VA = "0x4C3A810", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4C3A850", Offset = "0x4C3A850", VA = "0x4C3A850")]
	[IteratorStateMachine(typeof(_003CDelayedGraphicRebuild_003Ed__18))]
	private IEnumerator DelayedGraphicRebuild()
	{
		return null;
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4C3A8E0", Offset = "0x4C3A8E0", VA = "0x4C3A8E0")]
	[IteratorStateMachine(typeof(_003CDelayedMaterialRebuild_003Ed__19))]
	private IEnumerator DelayedMaterialRebuild()
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4C3A970", Offset = "0x4C3A970", VA = "0x4C3A970", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4C3AD10", Offset = "0x4C3AD10", VA = "0x4C3AD10")]
	private void UpdateSubObjectPivot()
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4C3ADE0", Offset = "0x4C3ADE0", VA = "0x4C3ADE0", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4C3AF00", Offset = "0x4C3AF00", VA = "0x4C3AF00", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4C3B430", Offset = "0x4C3B430", VA = "0x4C3B430", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4C3B440", Offset = "0x4C3B440", VA = "0x4C3B440", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4C3B720", Offset = "0x4C3B720", VA = "0x4C3B720", Slot = "102")]
	internal override void UpdateCulling()
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4C3B9B0", Offset = "0x4C3B9B0", VA = "0x4C3B9B0", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4C3BAC0", Offset = "0x4C3BAC0", VA = "0x4C3BAC0", Slot = "112")]
	protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4C3BB80", Offset = "0x4C3BB80", VA = "0x4C3BB80", Slot = "113")]
	protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4C3BC20", Offset = "0x4C3BC20", VA = "0x4C3BC20", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4C3BCD0", Offset = "0x4C3BCD0", VA = "0x4C3BCD0", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4C3BDC0", Offset = "0x4C3BDC0", VA = "0x4C3BDC0", Slot = "129")]
	public override void ClearMesh()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4C3C010", Offset = "0x4C3C010", VA = "0x4C3C010", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4C3C080", Offset = "0x4C3C080", VA = "0x4C3C080", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4C3C2F0", Offset = "0x4C3C2F0", VA = "0x4C3C2F0", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4C3C580", Offset = "0x4C3C580", VA = "0x4C3C580")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4C3C5A0", Offset = "0x4C3C5A0", VA = "0x4C3C5A0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4C3C9F0", Offset = "0x4C3C9F0", VA = "0x4C3C9F0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4C3CC90", Offset = "0x4C3CC90", VA = "0x4C3CC90", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4C3CE20", Offset = "0x4C3CE20", VA = "0x4C3CE20", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4C3CF80", Offset = "0x4C3CF80", VA = "0x4C3CF80", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4C3CB30", Offset = "0x4C3CB30", VA = "0x4C3CB30")]
	private Canvas GetCanvas()
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4C3D590", Offset = "0x4C3D590", VA = "0x4C3D590")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4C3D890", Offset = "0x4C3D890", VA = "0x4C3D890")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4C3DA90", Offset = "0x4C3DA90", VA = "0x4C3DA90")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4C3B020", Offset = "0x4C3B020", VA = "0x4C3B020")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4C3DAA0", Offset = "0x4C3DAA0", VA = "0x4C3DAA0", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4C3DC00", Offset = "0x4C3DC00", VA = "0x4C3DC00", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4C3DE30", Offset = "0x4C3DE30", VA = "0x4C3DE30", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4C3DE80", Offset = "0x4C3DE80", VA = "0x4C3DE80", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4C3E080", Offset = "0x4C3E080", VA = "0x4C3E080", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4C3E540", Offset = "0x4C3E540", VA = "0x4C3E540", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4C3E760", Offset = "0x4C3E760", VA = "0x4C3E760", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4C3E8B0", Offset = "0x4C3E8B0", VA = "0x4C3E8B0", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4C3EA00", Offset = "0x4C3EA00", VA = "0x4C3EA00", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4C3EB40", Offset = "0x4C3EB40", VA = "0x4C3EB40", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4C3EE90", Offset = "0x4C3EE90", VA = "0x4C3EE90")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4C3EF10", Offset = "0x4C3EF10", VA = "0x4C3EF10")]
	private void SetMeshArrays(int size)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4C3EFC0", Offset = "0x4C3EFC0", VA = "0x4C3EFC0", Slot = "114")]
	internal override int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4C417E0", Offset = "0x4C417E0", VA = "0x4C417E0", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4C41900", Offset = "0x4C41900", VA = "0x4C41900", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4C41940", Offset = "0x4C41940", VA = "0x4C41940", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4C41A60", Offset = "0x4C41A60", VA = "0x4C41A60", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4C41AB0", Offset = "0x4C41AB0", VA = "0x4C41AB0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4C41CF0", Offset = "0x4C41CF0", VA = "0x4C41CF0", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4C3AA40", Offset = "0x4C3AA40", VA = "0x4C3AA40")]
	private void OnPreRenderCanvas()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4C255E0", Offset = "0x4C255E0", VA = "0x4C255E0", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4C42030", Offset = "0x4C42030", VA = "0x4C42030", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4C420E0", Offset = "0x4C420E0", VA = "0x4C420E0", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4C42200", Offset = "0x4C42200", VA = "0x4C42200", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4C422F0", Offset = "0x4C422F0", VA = "0x4C422F0", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4C425F0", Offset = "0x4C425F0", VA = "0x4C425F0", Slot = "117")]
	internal override Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4C41DB0", Offset = "0x4C41DB0", VA = "0x4C41DB0")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4C427A0", Offset = "0x4C427A0", VA = "0x4C427A0")]
	public TextMeshProUGUI()
	{
	}
}
