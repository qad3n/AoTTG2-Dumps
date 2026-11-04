// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.MaskableGraphic
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000055")]
public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier
{
	[Serializable]
	[Token(Token = "0x2000056")]
	public class CullStateChangedEvent : UnityEvent<bool>
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x32D9D70", Offset = "0x32D8370", VA = "0x1832D9D70")]
		public CullStateChangedEvent()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0xA8")]
	protected bool m_ShouldRecalculateStencil;

	[NonSerialized]
	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0xB0")]
	protected Material m_MaskMaterial;

	[NonSerialized]
	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0xB8")]
	private RectMask2D m_ParentMask;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private bool m_Maskable;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0xC1")]
	private bool m_IsMaskingGraphic;

	[NonSerialized]
	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0xC2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	protected bool m_IncludeForMasking;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private CullStateChangedEvent m_OnCullStateChanged;

	[NonSerialized]
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0xD0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore", true)]
	protected bool m_ShouldRecalculate;

	[NonSerialized]
	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0xD4")]
	protected int m_StencilValue;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0xD8")]
	private readonly Vector3[] m_Corners;

	[Token(Token = "0x170000D9")]
	public CullStateChangedEvent onCullStateChanged
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool maskable
	{
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x24BD3F0", Offset = "0x24BB9F0", VA = "0x1824BD3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x32D8A10", Offset = "0x32D7010", VA = "0x1832D8A10")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public bool isMaskingGraphic
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x2C11A50", Offset = "0x2C10050", VA = "0x182C11A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x32D8A00", Offset = "0x32D7000", VA = "0x1832D8A00")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x32D85E0", Offset = "0x32D6BE0", VA = "0x1832D85E0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x32D7E10", Offset = "0x32D6410", VA = "0x1832D7E10", Slot = "58")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x32D7C90", Offset = "0x32D6290", VA = "0x1832D7C90", Slot = "59")]
	public virtual void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x32D8430", Offset = "0x32D6A30", VA = "0x1832D8430")]
	private void UpdateCull(bool cull)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x32D8200", Offset = "0x32D6800", VA = "0x1832D8200", Slot = "60")]
	public virtual void SetClipRect(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x32D8260", Offset = "0x32D6860", VA = "0x1832D8260", Slot = "61")]
	public virtual void SetClipSoftness(Vector2 clipSoftness)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x32D8080", Offset = "0x32D6680", VA = "0x1832D8080", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x32D7FC0", Offset = "0x32D65C0", VA = "0x1832D7FC0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x32D80E0", Offset = "0x32D66E0", VA = "0x1832D80E0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "62")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	public virtual void ParentMaskStateChanged()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x32D7F70", Offset = "0x32D6570", VA = "0x1832D7F70", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x32D82B0", Offset = "0x32D68B0", VA = "0x1832D82B0")]
	private void UpdateClipParent()
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x32D8160", Offset = "0x32D6760", VA = "0x1832D8160", Slot = "63")]
	public virtual void RecalculateClipping()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x32D8170", Offset = "0x32D6770", VA = "0x1832D8170", Slot = "64")]
	public virtual void RecalculateMasking()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x32D8130", Offset = "0x32D6730", VA = "0x1832D8130", Slot = "46")]
	public override bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x32D8500", Offset = "0x32D6B00", VA = "0x1832D8500")]
	protected MaskableGraphic()
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x32D82A0", Offset = "0x32D68A0", VA = "0x1832D82A0", Slot = "50")]
	private GameObject UnityEngine_002EUI_002EIClippable_002Eget_gameObject()
	{
		return null;
	}
}
