// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.MaskableGraphic
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000056")]
public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier
{
	[Serializable]
	[Token(Token = "0x2000057")]
	public class CullStateChangedEvent : UnityEvent<bool>
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x50D7850", Offset = "0x50D7850", VA = "0x50D7850")]
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
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x50D6800", Offset = "0x50D6800", VA = "0x50D6800")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x50D6810", Offset = "0x50D6810", VA = "0x50D6810")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public bool maskable
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x50D6830", Offset = "0x50D6830", VA = "0x50D6830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x50D6840", Offset = "0x50D6840", VA = "0x50D6840")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool isMaskingGraphic
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x50D6870", Offset = "0x50D6870", VA = "0x50D6870")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x50D5700", Offset = "0x50D5700", VA = "0x50D5700")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x50D6AE0", Offset = "0x50D6AE0", VA = "0x50D6AE0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x50D6880", Offset = "0x50D6880", VA = "0x50D6880", Slot = "58")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x50D69C0", Offset = "0x50D69C0", VA = "0x50D69C0", Slot = "59")]
	public virtual void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x50D6DD0", Offset = "0x50D6DD0", VA = "0x50D6DD0")]
	private void UpdateCull(bool cull)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x50D6EA0", Offset = "0x50D6EA0", VA = "0x50D6EA0", Slot = "60")]
	public virtual void SetClipRect(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x50D6EF0", Offset = "0x50D6EF0", VA = "0x50D6EF0", Slot = "61")]
	public virtual void SetClipSoftness(Vector2 clipSoftness)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x50D6F20", Offset = "0x50D6F20", VA = "0x50D6F20", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x50D70D0", Offset = "0x50D70D0", VA = "0x50D70D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x50D7190", Offset = "0x50D7190", VA = "0x50D7190", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x50D71E0", Offset = "0x50D71E0", VA = "0x50D71E0", Slot = "62")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	public virtual void ParentMaskStateChanged()
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x50D71F0", Offset = "0x50D71F0", VA = "0x50D71F0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x50D6F70", Offset = "0x50D6F70", VA = "0x50D6F70")]
	private void UpdateClipParent()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x50D76B0", Offset = "0x50D76B0", VA = "0x50D76B0", Slot = "63")]
	public virtual void RecalculateClipping()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x50D76C0", Offset = "0x50D76C0", VA = "0x50D76C0", Slot = "64")]
	public virtual void RecalculateMasking()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x50D7750", Offset = "0x50D7750", VA = "0x50D7750")]
	protected MaskableGraphic()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x50D7890", Offset = "0x50D7890", VA = "0x50D7890", Slot = "50")]
	private GameObject UnityEngine_002EUI_002EIClippable_002Eget_gameObject()
	{
		return null;
	}
}
