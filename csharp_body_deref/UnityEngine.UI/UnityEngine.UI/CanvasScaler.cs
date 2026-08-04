// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CanvasScaler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x200003C")]
[RequireComponent(typeof(Canvas))]
[ExecuteAlways]
[AddComponentMenu("Layout/Canvas Scaler", 101)]
[DisallowMultipleComponent]
public class CanvasScaler : UIBehaviour
{
	[Token(Token = "0x200003D")]
	public enum ScaleMode
	{
		[Token(Token = "0x4000142")]
		ConstantPixelSize,
		[Token(Token = "0x4000143")]
		ScaleWithScreenSize,
		[Token(Token = "0x4000144")]
		ConstantPhysicalSize
	}

	[Token(Token = "0x200003E")]
	public enum ScreenMatchMode
	{
		[Token(Token = "0x4000146")]
		MatchWidthOrHeight,
		[Token(Token = "0x4000147")]
		Expand,
		[Token(Token = "0x4000148")]
		Shrink
	}

	[Token(Token = "0x200003F")]
	public enum Unit
	{
		[Token(Token = "0x400014A")]
		Centimeters,
		[Token(Token = "0x400014B")]
		Millimeters,
		[Token(Token = "0x400014C")]
		Inches,
		[Token(Token = "0x400014D")]
		Points,
		[Token(Token = "0x400014E")]
		Picas
	}

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Determines how UI elements in the Canvas are scaled.")]
	[SerializeField]
	private ScaleMode m_UiScaleMode;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x24")]
	[Tooltip("If a sprite has this 'Pixels Per Unit' setting, then one pixel in the sprite will cover one unit in the UI.")]
	[SerializeField]
	protected float m_ReferencePixelsPerUnit;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Scales all UI elements in the Canvas by this factor.")]
	[SerializeField]
	protected float m_ScaleFactor;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x2C")]
	[Tooltip("The resolution the UI layout is designed for. If the screen resolution is larger, the UI will be scaled up, and if it's smaller, the UI will be scaled down. This is done in accordance with the Screen Match Mode.")]
	[SerializeField]
	protected Vector2 m_ReferenceResolution;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x34")]
	[Tooltip("A mode used to scale the canvas area if the aspect ratio of the current resolution doesn't fit the reference resolution.")]
	[SerializeField]
	protected ScreenMatchMode m_ScreenMatchMode;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Determines if the scaling is using the width or height as reference, or a mix in between.")]
	[Range(0f, 1f)]
	[SerializeField]
	protected float m_MatchWidthOrHeight;

	[Token(Token = "0x4000138")]
	private const float kLogBase = 2f;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x3C")]
	[Tooltip("The physical unit to specify positions and sizes in.")]
	[SerializeField]
	protected Unit m_PhysicalUnit;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("The DPI to assume if the screen DPI is not known.")]
	[SerializeField]
	protected float m_FallbackScreenDPI;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x44")]
	[Tooltip("The pixels per inch to use for sprites that have a 'Pixels Per Unit' setting that matches the 'Reference Pixels Per Unit' setting.")]
	[SerializeField]
	protected float m_DefaultSpriteDPI;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("The amount of pixels per unit to use for dynamically created bitmaps in the UI, such as Text.")]
	[SerializeField]
	protected float m_DynamicPixelsPerUnit;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x50")]
	private Canvas m_Canvas;

	[NonSerialized]
	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x58")]
	private float m_PrevScaleFactor;

	[NonSerialized]
	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x5C")]
	private float m_PrevReferencePixelsPerUnit;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	protected bool m_PresetInfoIsWorld;

	[Token(Token = "0x1700009B")]
	public ScaleMode uiScaleMode
	{
		[Token(Token = "0x6000258")]
		[Address(RVA = "0x50CD0A0", Offset = "0x50CD0A0", VA = "0x50CD0A0")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x50CD0B0", Offset = "0x50CD0B0", VA = "0x50CD0B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x50CD0C0", Offset = "0x50CD0C0", VA = "0x50CD0C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x50CD0D0", Offset = "0x50CD0D0", VA = "0x50CD0D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float scaleFactor
	{
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x50CD0E0", Offset = "0x50CD0E0", VA = "0x50CD0E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x50CD0F0", Offset = "0x50CD0F0", VA = "0x50CD0F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public Vector2 referenceResolution
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x50CD110", Offset = "0x50CD110", VA = "0x50CD110")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x50CD120", Offset = "0x50CD120", VA = "0x50CD120")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public ScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x50CD190", Offset = "0x50CD190", VA = "0x50CD190")]
		get
		{
			return default(ScreenMatchMode);
		}
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x50CD1A0", Offset = "0x50CD1A0", VA = "0x50CD1A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public float matchWidthOrHeight
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x50CD1B0", Offset = "0x50CD1B0", VA = "0x50CD1B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x50CD1C0", Offset = "0x50CD1C0", VA = "0x50CD1C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public Unit physicalUnit
	{
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x50CD1D0", Offset = "0x50CD1D0", VA = "0x50CD1D0")]
		get
		{
			return default(Unit);
		}
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x50CD1E0", Offset = "0x50CD1E0", VA = "0x50CD1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public float fallbackScreenDPI
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x50CD1F0", Offset = "0x50CD1F0", VA = "0x50CD1F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x50CD200", Offset = "0x50CD200", VA = "0x50CD200")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public float defaultSpriteDPI
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x50CD210", Offset = "0x50CD210", VA = "0x50CD210")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x50CD220", Offset = "0x50CD220", VA = "0x50CD220")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public float dynamicPixelsPerUnit
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x50CD240", Offset = "0x50CD240", VA = "0x50CD240")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x50CD250", Offset = "0x50CD250", VA = "0x50CD250")]
		set
		{
		}
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x50CD260", Offset = "0x50CD260", VA = "0x50CD260")]
	protected CanvasScaler()
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x50CD2B0", Offset = "0x50CD2B0", VA = "0x50CD2B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x50CD370", Offset = "0x50CD370", VA = "0x50CD370")]
	private void Canvas_preWillRenderCanvases()
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x50CD390", Offset = "0x50CD390", VA = "0x50CD390", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x50CD530", Offset = "0x50CD530", VA = "0x50CD530", Slot = "17")]
	protected virtual void Handle()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x50CD630", Offset = "0x50CD630", VA = "0x50CD630", Slot = "18")]
	protected virtual void HandleWorldCanvas()
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x50CD6B0", Offset = "0x50CD6B0", VA = "0x50CD6B0", Slot = "19")]
	protected virtual void HandleConstantPixelSize()
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x50CD730", Offset = "0x50CD730", VA = "0x50CD730", Slot = "20")]
	protected virtual void HandleScaleWithScreenSize()
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x50CDA50", Offset = "0x50CDA50", VA = "0x50CDA50", Slot = "21")]
	protected virtual void HandleConstantPhysicalSize()
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x50CD490", Offset = "0x50CD490", VA = "0x50CD490")]
	protected void SetScaleFactor(float scaleFactor)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x50CD4E0", Offset = "0x50CD4E0", VA = "0x50CD4E0")]
	protected void SetReferencePixelsPerUnit(float referencePixelsPerUnit)
	{
	}
}
