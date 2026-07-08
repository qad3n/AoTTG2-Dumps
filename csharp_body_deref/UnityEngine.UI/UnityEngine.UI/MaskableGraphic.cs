using System;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000057")]
public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier
{
	[Serializable]
	[Token(Token = "0x2000058")]
	public class CullStateChangedEvent : UnityEvent<bool>
	{
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x4DB06D0", Offset = "0x4DB06D0", VA = "0x4DB06D0")]
		public CullStateChangedEvent()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0xA1")]
	protected bool m_ShouldRecalculateStencil;

	[NonSerialized]
	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0xA8")]
	protected Material m_MaskMaterial;

	[NonSerialized]
	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0xB0")]
	private RectMask2D m_ParentMask;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private bool m_Maskable;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0xB9")]
	private bool m_IsMaskingGraphic;

	[NonSerialized]
	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0xBA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	protected bool m_IncludeForMasking;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private CullStateChangedEvent m_OnCullStateChanged;

	[NonSerialized]
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0xC8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore", true)]
	protected bool m_ShouldRecalculate;

	[NonSerialized]
	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0xCC")]
	protected int m_StencilValue;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0xD0")]
	private readonly Vector3[] m_Corners;

	[Token(Token = "0x170000D8")]
	public CullStateChangedEvent onCullStateChanged
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x4DAFB00", Offset = "0x4DAFB00", VA = "0x4DAFB00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x4DAFB10", Offset = "0x4DAFB10", VA = "0x4DAFB10")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public bool maskable
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x4DAFB30", Offset = "0x4DAFB30", VA = "0x4DAFB30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x4DAFB40", Offset = "0x4DAFB40", VA = "0x4DAFB40")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool isMaskingGraphic
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x4DAFB70", Offset = "0x4DAFB70", VA = "0x4DAFB70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x4DADDD0", Offset = "0x4DADDD0", VA = "0x4DADDD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x4DAFDE0", Offset = "0x4DAFDE0", VA = "0x4DAFDE0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4DAFB80", Offset = "0x4DAFB80", VA = "0x4DAFB80", Slot = "58")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4DAFCC0", Offset = "0x4DAFCC0", VA = "0x4DAFCC0", Slot = "59")]
	public virtual void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4DB00D0", Offset = "0x4DB00D0", VA = "0x4DB00D0")]
	private void UpdateCull(bool cull)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4DB01A0", Offset = "0x4DB01A0", VA = "0x4DB01A0", Slot = "60")]
	public virtual void SetClipRect(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4DB01F0", Offset = "0x4DB01F0", VA = "0x4DB01F0", Slot = "61")]
	public virtual void SetClipSoftness(Vector2 clipSoftness)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4DB0220", Offset = "0x4DB0220", VA = "0x4DB0220", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4DB03D0", Offset = "0x4DB03D0", VA = "0x4DB03D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4DB0490", Offset = "0x4DB0490", VA = "0x4DB0490", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4DB04E0", Offset = "0x4DB04E0", VA = "0x4DB04E0", Slot = "62")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	public virtual void ParentMaskStateChanged()
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4DB04F0", Offset = "0x4DB04F0", VA = "0x4DB04F0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4DB0270", Offset = "0x4DB0270", VA = "0x4DB0270")]
	private void UpdateClipParent()
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4DB0540", Offset = "0x4DB0540", VA = "0x4DB0540", Slot = "63")]
	public virtual void RecalculateClipping()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4DB0550", Offset = "0x4DB0550", VA = "0x4DB0550", Slot = "64")]
	public virtual void RecalculateMasking()
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4DB05E0", Offset = "0x4DB05E0", VA = "0x4DB05E0")]
	protected MaskableGraphic()
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4DB06C0", Offset = "0x4DB06C0", VA = "0x4DB06C0", Slot = "50")]
	private GameObject UnityEngine_002EUI_002EIClippable_002Eget_gameObject()
	{
		return null;
	}
}
