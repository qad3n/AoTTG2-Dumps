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
		[Address(RVA = "0x6CDD160", Offset = "0x6CDC160", VA = "0x6CDD160")]
		get
		{
			return default(ScaleMode);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x6CDD170", Offset = "0x6CDC170", VA = "0x6CDD170")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x6CDD180", Offset = "0x6CDC180", VA = "0x6CDD180")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x6CDD190", Offset = "0x6CDC190", VA = "0x6CDD190")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public float scaleFactor
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x6CDD1A0", Offset = "0x6CDC1A0", VA = "0x6CDD1A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x6CDD1B0", Offset = "0x6CDC1B0", VA = "0x6CDD1B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public Vector2 referenceResolution
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x6CDD1D0", Offset = "0x6CDC1D0", VA = "0x6CDD1D0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x6CDD1E0", Offset = "0x6CDC1E0", VA = "0x6CDD1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public ScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x6CDD250", Offset = "0x6CDC250", VA = "0x6CDD250")]
		get
		{
			return default(ScreenMatchMode);
		}
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x6CDD260", Offset = "0x6CDC260", VA = "0x6CDD260")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public float matchWidthOrHeight
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x6CDD270", Offset = "0x6CDC270", VA = "0x6CDD270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x6CDD280", Offset = "0x6CDC280", VA = "0x6CDD280")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public Unit physicalUnit
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x6CDD290", Offset = "0x6CDC290", VA = "0x6CDD290")]
		get
		{
			return default(Unit);
		}
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x6CDD2A0", Offset = "0x6CDC2A0", VA = "0x6CDD2A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public float fallbackScreenDPI
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x6CDD2B0", Offset = "0x6CDC2B0", VA = "0x6CDD2B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x6CDD2C0", Offset = "0x6CDC2C0", VA = "0x6CDD2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public float defaultSpriteDPI
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x6CDD2D0", Offset = "0x6CDC2D0", VA = "0x6CDD2D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x6CDD2E0", Offset = "0x6CDC2E0", VA = "0x6CDD2E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public float dynamicPixelsPerUnit
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x6CDD300", Offset = "0x6CDC300", VA = "0x6CDD300")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x6CDD310", Offset = "0x6CDC310", VA = "0x6CDD310")]
		set
		{
		}
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x6CDD320", Offset = "0x6CDC320", VA = "0x6CDD320")]
	protected CanvasScaler()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x6CDD360", Offset = "0x6CDC360", VA = "0x6CDD360", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x6CDD420", Offset = "0x6CDC420", VA = "0x6CDD420")]
	private void Canvas_preWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x6CDD440", Offset = "0x6CDC440", VA = "0x6CDD440", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x6CDD5D0", Offset = "0x6CDC5D0", VA = "0x6CDD5D0", Slot = "17")]
	protected virtual void Handle()
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x6CDD6D0", Offset = "0x6CDC6D0", VA = "0x6CDD6D0", Slot = "18")]
	protected virtual void HandleWorldCanvas()
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x6CDD760", Offset = "0x6CDC760", VA = "0x6CDD760", Slot = "19")]
	protected virtual void HandleConstantPixelSize()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x6CDD7F0", Offset = "0x6CDC7F0", VA = "0x6CDD7F0", Slot = "20")]
	protected virtual void HandleScaleWithScreenSize()
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x6CDDB10", Offset = "0x6CDCB10", VA = "0x6CDDB10", Slot = "21")]
	protected virtual void HandleConstantPhysicalSize()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x6CDD530", Offset = "0x6CDC530", VA = "0x6CDD530")]
	protected void SetScaleFactor(float scaleFactor)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x6CDD580", Offset = "0x6CDC580", VA = "0x6CDD580")]
	protected void SetReferencePixelsPerUnit(float referencePixelsPerUnit)
	{
	}
}
