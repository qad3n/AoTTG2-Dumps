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

[Token(Token = "0x20000A2")]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/TextMeshPro - Text (UI)", 11)]
[ExecuteAlways]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@3.0")]
public class TextMeshProUGUI : TMP_Text, ILayoutElement
{
	[Token(Token = "0x20000A3")]
	[CompilerGenerated]
	private sealed class _003CDelayedGraphicRebuild_003Ed__89 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40005EF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40005F0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40005F1")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x17000160")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000625")]
			[Address(RVA = "0x4978780", Offset = "0x4978780", VA = "0x4978780", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000161")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000627")]
			[Address(RVA = "0x49787D0", Offset = "0x49787D0", VA = "0x49787D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000622")]
		[Address(RVA = "0x4976BB0", Offset = "0x4976BB0", VA = "0x4976BB0")]
		[DebuggerHidden]
		public _003CDelayedGraphicRebuild_003Ed__89(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000623")]
		[Address(RVA = "0x49786A0", Offset = "0x49786A0", VA = "0x49786A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000624")]
		[Address(RVA = "0x49786B0", Offset = "0x49786B0", VA = "0x49786B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x4978790", Offset = "0x4978790", VA = "0x4978790", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000A4")]
	[CompilerGenerated]
	private sealed class _003CDelayedMaterialRebuild_003Ed__90 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40005F2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40005F3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40005F4")]
		[FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI _003C_003E4__this;

		[Token(Token = "0x17000162")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600062B")]
			[Address(RVA = "0x49788D0", Offset = "0x49788D0", VA = "0x49788D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000163")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600062D")]
			[Address(RVA = "0x4978920", Offset = "0x4978920", VA = "0x4978920", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000628")]
		[Address(RVA = "0x4976C40", Offset = "0x4976C40", VA = "0x4976C40")]
		[DebuggerHidden]
		public _003CDelayedMaterialRebuild_003Ed__90(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000629")]
		[Address(RVA = "0x49787E0", Offset = "0x49787E0", VA = "0x49787E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600062A")]
		[Address(RVA = "0x49787F0", Offset = "0x49787F0", VA = "0x49787F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600062C")]
		[Address(RVA = "0x49788E0", Offset = "0x49788E0", VA = "0x49788E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x6C8")]
	[SerializeField]
	private bool m_hasFontAssetChanged;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x6D0")]
	protected TMP_SubMeshUI[] m_subTextObjects;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x6D8")]
	private float m_previousLossyScaleY;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x6E0")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x6E8")]
	private CanvasRenderer m_canvasRenderer;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x6F0")]
	private Canvas m_canvas;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x6F8")]
	private float m_CanvasScaleFactor;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x6FC")]
	private bool m_isFirstAllocation;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x700")]
	private int m_max_characters;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x708")]
	[SerializeField]
	private Material m_baseMaterial;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x710")]
	private bool m_isScrollRegionSet;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x714")]
	[SerializeField]
	private Vector4 m_maskOffset;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x724")]
	private Matrix4x4 m_EnvMapMatrix;

	[NonSerialized]
	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x764")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_SetArraySizesMarker;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_GenerateTextPhaseIMarker;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_ParseMarkupTextMarker;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_CharacterLookupMarker;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_HandleGPOSFeaturesMarker;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_CalculateVerticesPositionMarker;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_ComputeTextMetricsMarker;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_HandleVisibleCharacterMarker;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_HandleWhiteSpacesMarker;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x58")]
	private static ProfilerMarker k_HandleVerticalLineBreakingMarker;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x60")]
	private static ProfilerMarker k_SaveGlyphVertexDataMarker;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x68")]
	private static ProfilerMarker k_ComputeCharacterAdvanceMarker;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x70")]
	private static ProfilerMarker k_HandleCarriageReturnMarker;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilerMarker k_HandleLineTerminationMarker;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x80")]
	private static ProfilerMarker k_SavePageInfoMarker;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x88")]
	private static ProfilerMarker k_SaveProcessingStatesMarker;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x90")]
	private static ProfilerMarker k_GenerateTextPhaseIIMarker;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x98")]
	private static ProfilerMarker k_GenerateTextPhaseIIIMarker;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x765")]
	private bool m_isRebuildingLayout;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x768")]
	private Coroutine m_DelayedGraphicRebuild;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x770")]
	private Coroutine m_DelayedMaterialRebuild;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x778")]
	private Rect m_ClipRect;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x788")]
	private bool m_ValidRect;

	[Token(Token = "0x1700015B")]
	public override Material materialForRendering
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x4976680", Offset = "0x4976680", VA = "0x4976680", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	public override bool autoSizeTextContainer
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x49766E0", Offset = "0x49766E0", VA = "0x49766E0", Slot = "75")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x49766F0", Offset = "0x49766F0", VA = "0x49766F0", Slot = "76")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public override Mesh mesh
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x4976780", Offset = "0x4976780", VA = "0x4976780", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public new CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x4976790", Offset = "0x4976790", VA = "0x4976790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public Vector4 maskOffset
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x4976F30", Offset = "0x4976F30", VA = "0x4976F30")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x4976F50", Offset = "0x4976F50", VA = "0x4976F50")]
		set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public override event Action<TMP_TextInfo> OnPreRenderText
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x4977A80", Offset = "0x4977A80", VA = "0x4977A80", Slot = "78")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x4977B30", Offset = "0x4977B30", VA = "0x4977B30", Slot = "79")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x496FAB0", Offset = "0x496FAB0", VA = "0x496FAB0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x496FF00", Offset = "0x496FF00", VA = "0x496FF00", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4970210", Offset = "0x4970210", VA = "0x4970210", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4970400", Offset = "0x4970400", VA = "0x4970400", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x49705E0", Offset = "0x49705E0", VA = "0x49705E0", Slot = "89")]
	protected override void LoadFontAsset()
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x49700B0", Offset = "0x49700B0", VA = "0x49700B0")]
	private Canvas GetCanvas()
	{
		return null;
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4970BF0", Offset = "0x4970BF0", VA = "0x4970BF0")]
	private void UpdateEnvMapMatrix()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4970EF0", Offset = "0x4970EF0", VA = "0x4970EF0")]
	private void EnableMasking()
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4971500", Offset = "0x4971500", VA = "0x4971500")]
	private void DisableMasking()
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x49710F0", Offset = "0x49710F0", VA = "0x49710F0")]
	private void UpdateMask()
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4971510", Offset = "0x4971510", VA = "0x4971510", Slot = "91")]
	protected override Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4971670", Offset = "0x4971670", VA = "0x4971670", Slot = "95")]
	protected override Material[] GetMaterials(Material[] mats)
	{
		return null;
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x49718A0", Offset = "0x49718A0", VA = "0x49718A0", Slot = "90")]
	protected override void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x49718F0", Offset = "0x49718F0", VA = "0x49718F0", Slot = "93")]
	protected override Material[] GetSharedMaterials()
	{
		return null;
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4971AF0", Offset = "0x4971AF0", VA = "0x4971AF0", Slot = "94")]
	protected override void SetSharedMaterials(Material[] materials)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4971FB0", Offset = "0x4971FB0", VA = "0x4971FB0", Slot = "99")]
	protected override void SetOutlineThickness(float thickness)
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x49721D0", Offset = "0x49721D0", VA = "0x49721D0", Slot = "97")]
	protected override void SetFaceColor(Color32 color)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4972320", Offset = "0x4972320", VA = "0x4972320", Slot = "98")]
	protected override void SetOutlineColor(Color32 color)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4972470", Offset = "0x4972470", VA = "0x4972470", Slot = "100")]
	protected override void SetShaderDepth()
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x49725B0", Offset = "0x49725B0", VA = "0x49725B0", Slot = "101")]
	protected override void SetCulling()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4972900", Offset = "0x4972900", VA = "0x4972900")]
	private void SetPerspectiveCorrection()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4972980", Offset = "0x4972980", VA = "0x4972980")]
	private void SetMeshArrays(int size)
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4972A30", Offset = "0x4972A30", VA = "0x4972A30", Slot = "114")]
	internal override int SetArraySizes(UnicodeChar[] unicodeChars)
	{
		return default(int);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4975260", Offset = "0x4975260", VA = "0x4975260", Slot = "119")]
	public override void ComputeMarginSize()
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4975380", Offset = "0x4975380", VA = "0x4975380", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x49753C0", Offset = "0x49753C0", VA = "0x49753C0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x49755A0", Offset = "0x49755A0", VA = "0x49755A0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x49755F0", Offset = "0x49755F0", VA = "0x49755F0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4975900", Offset = "0x4975900", VA = "0x4975900", Slot = "132")]
	internal override void InternalUpdate()
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4975C40", Offset = "0x4975C40", VA = "0x4975C40")]
	private void OnPreRenderCanvas()
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4959810", Offset = "0x4959810", VA = "0x4959810", Slot = "142")]
	protected virtual void GenerateTextMesh()
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4975F10", Offset = "0x4975F10", VA = "0x4975F10", Slot = "105")]
	protected override Vector3[] GetTextContainerLocalCorners()
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4975FC0", Offset = "0x4975FC0", VA = "0x4975FC0", Slot = "127")]
	protected override void SetActiveSubMeshes(bool state)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x49760E0", Offset = "0x49760E0", VA = "0x49760E0", Slot = "128")]
	protected override void DestroySubMeshObjects()
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x49761D0", Offset = "0x49761D0", VA = "0x49761D0", Slot = "116")]
	protected override Bounds GetCompoundBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x49764D0", Offset = "0x49764D0", VA = "0x49764D0", Slot = "117")]
	internal override Rect GetCanvasSpaceClippingRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x49759C0", Offset = "0x49759C0", VA = "0x49759C0")]
	private void UpdateSDFScale(float scaleDelta)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4976830", Offset = "0x4976830", VA = "0x4976830", Slot = "133")]
	public void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4976840", Offset = "0x4976840", VA = "0x4976840", Slot = "134")]
	public void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4976850", Offset = "0x4976850", VA = "0x4976850", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4976930", Offset = "0x4976930", VA = "0x4976930", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4976A10", Offset = "0x4976A10", VA = "0x4976A10", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4976B00", Offset = "0x4976B00", VA = "0x4976B00", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4976B40", Offset = "0x4976B40", VA = "0x4976B40")]
	[IteratorStateMachine(typeof(_003CDelayedGraphicRebuild_003Ed__89))]
	private IEnumerator DelayedGraphicRebuild()
	{
		return null;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4976BD0", Offset = "0x4976BD0", VA = "0x4976BD0")]
	[IteratorStateMachine(typeof(_003CDelayedMaterialRebuild_003Ed__90))]
	private IEnumerator DelayedMaterialRebuild()
	{
		return null;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4976C60", Offset = "0x4976C60", VA = "0x4976C60", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4975830", Offset = "0x4975830", VA = "0x4975830")]
	private void UpdateSubObjectPivot()
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x4976D30", Offset = "0x4976D30", VA = "0x4976D30", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4976E50", Offset = "0x4976E50", VA = "0x4976E50", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x4976F70", Offset = "0x4976F70", VA = "0x4976F70", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x4976F80", Offset = "0x4976F80", VA = "0x4976F80", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x49772F0", Offset = "0x49772F0", VA = "0x49772F0", Slot = "102")]
	internal override void UpdateCulling()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4977580", Offset = "0x4977580", VA = "0x4977580", Slot = "111")]
	public override void UpdateMeshPadding()
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4977690", Offset = "0x4977690", VA = "0x4977690", Slot = "112")]
	protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4977750", Offset = "0x4977750", VA = "0x4977750", Slot = "113")]
	protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x49777F0", Offset = "0x49777F0", VA = "0x49777F0", Slot = "106")]
	public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x49778A0", Offset = "0x49778A0", VA = "0x49778A0", Slot = "118")]
	public override TMP_TextInfo GetTextInfo(string text)
	{
		return null;
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4977990", Offset = "0x4977990", VA = "0x4977990", Slot = "129")]
	public override void ClearMesh()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4977BE0", Offset = "0x4977BE0", VA = "0x4977BE0", Slot = "107")]
	public override void UpdateGeometry(Mesh mesh, int index)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4977C50", Offset = "0x4977C50", VA = "0x4977C50", Slot = "108")]
	public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4977EC0", Offset = "0x4977EC0", VA = "0x4977EC0", Slot = "109")]
	public override void UpdateVertexData()
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4978150", Offset = "0x4978150", VA = "0x4978150")]
	public void UpdateFontAsset()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4978170", Offset = "0x4978170", VA = "0x4978170")]
	public TextMeshProUGUI()
	{
	}
}
