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

[Token(Token = "0x200003A")]
[RequireComponent(typeof(Canvas))]
[ExecuteAlways]
[AddComponentMenu("Layout/Canvas Scaler", 101)]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("CanvasScaler")]
public class CanvasScaler : UIBehaviour
{
	[Token(Token = "0x200003B")]
	public enum ScaleMode
	{
		[Token(Token = "0x4000142")]
		ConstantPixelSize,
		[Token(Token = "0x4000143")]
		ScaleWithScreenSize,
		[Token(Token = "0x4000144")]
		ConstantPhysicalSize
	}

	[Token(Token = "0x200003C")]
	public enum ScreenMatchMode
	{
		[Token(Token = "0x4000146")]
		MatchWidthOrHeight,
		[Token(Token = "0x4000147")]
		Expand,
		[Token(Token = "0x4000148")]
		Shrink
	}

	[Token(Token = "0x200003D")]
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

	[Token(Token = "0x1700009C")]
	public ScaleMode uiScaleMode
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x18A4260", Offset = "0x18A2860", VA = "0x1818A4260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x18A4270", Offset = "0x18A2870", VA = "0x1818A4270")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public float scaleFactor
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x32C3B40", Offset = "0x32C2140", VA = "0x1832C3B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public Vector2 referenceResolution
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x32C3A80", Offset = "0x32C2080", VA = "0x1832C3A80")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x32C3AC0", Offset = "0x32C20C0", VA = "0x1832C3AC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public ScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(ScreenMatchMode);
		}
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public float matchWidthOrHeight
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x1ED2F30", Offset = "0x1ED1530", VA = "0x181ED2F30")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public Unit physicalUnit
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(Unit);
		}
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public float fallbackScreenDPI
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000270")]
		[Address(RVA = "0xE8F730", Offset = "0xE8DD30", VA = "0x180E8F730")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public float defaultSpriteDPI
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x2AC3BA0", Offset = "0x2AC21A0", VA = "0x182AC3BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x32C3AA0", Offset = "0x32C20A0", VA = "0x1832C3AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public float dynamicPixelsPerUnit
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x5853E0", Offset = "0x5839E0", VA = "0x1805853E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x2E847A0", Offset = "0x2E82DA0", VA = "0x182E847A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x32C3A30", Offset = "0x32C2030", VA = "0x1832C3A30")]
	protected CanvasScaler()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x32C38D0", Offset = "0x32C1ED0", VA = "0x1832C38D0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x1F0DB10", Offset = "0x1F0C110", VA = "0x181F0DB10")]
	private void Canvas_preWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x32C37E0", Offset = "0x32C1DE0", VA = "0x1832C37E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x32C36C0", Offset = "0x32C1CC0", VA = "0x1832C36C0", Slot = "17")]
	protected virtual void Handle()
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x32C3640", Offset = "0x32C1C40", VA = "0x1832C3640", Slot = "18")]
	protected virtual void HandleWorldCanvas()
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x32C3380", Offset = "0x32C1980", VA = "0x1832C3380", Slot = "19")]
	protected virtual void HandleConstantPixelSize()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x32C3400", Offset = "0x32C1A00", VA = "0x1832C3400", Slot = "20")]
	protected virtual void HandleScaleWithScreenSize()
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x32C3280", Offset = "0x32C1880", VA = "0x1832C3280", Slot = "21")]
	protected virtual void HandleConstantPhysicalSize()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x32C39D0", Offset = "0x32C1FD0", VA = "0x1832C39D0")]
	protected void SetScaleFactor(float scaleFactor)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x32C3990", Offset = "0x32C1F90", VA = "0x1832C3990")]
	protected void SetReferencePixelsPerUnit(float referencePixelsPerUnit)
	{
	}
}
