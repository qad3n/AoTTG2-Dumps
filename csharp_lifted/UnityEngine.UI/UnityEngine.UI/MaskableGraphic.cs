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

[Token(Token = "0x2000055")]
public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier
{
	[Serializable]
	[Token(Token = "0x2000056")]
	public class CullStateChangedEvent : UnityEvent<bool>
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x6CE81F0", Offset = "0x6CE71F0", VA = "0x6CE81F0")]
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

	[Token(Token = "0x170000D9")]
	public CullStateChangedEvent onCullStateChanged
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x6CE7540", Offset = "0x6CE6540", VA = "0x6CE7540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x6CE7550", Offset = "0x6CE6550", VA = "0x6CE7550")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool maskable
	{
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x6CE7570", Offset = "0x6CE6570", VA = "0x6CE7570")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x6CE7580", Offset = "0x6CE6580", VA = "0x6CE7580")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public bool isMaskingGraphic
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x6CE75B0", Offset = "0x6CE65B0", VA = "0x6CE75B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x6CE5820", Offset = "0x6CE4820", VA = "0x6CE5820")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x6CE7760", Offset = "0x6CE6760", VA = "0x6CE7760")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x6CE75C0", Offset = "0x6CE65C0", VA = "0x6CE75C0", Slot = "58")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x6CE76D0", Offset = "0x6CE66D0", VA = "0x6CE76D0", Slot = "59")]
	public virtual void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x6CE7BC0", Offset = "0x6CE6BC0", VA = "0x6CE7BC0")]
	private void UpdateCull(bool cull)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x6CE7C90", Offset = "0x6CE6C90", VA = "0x6CE7C90", Slot = "60")]
	public virtual void SetClipRect(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x6CE7CF0", Offset = "0x6CE6CF0", VA = "0x6CE7CF0", Slot = "61")]
	public virtual void SetClipSoftness(Vector2 clipSoftness)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x6CE7D20", Offset = "0x6CE6D20", VA = "0x6CE7D20", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x6CE7ED0", Offset = "0x6CE6ED0", VA = "0x6CE7ED0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x6CE7F90", Offset = "0x6CE6F90", VA = "0x6CE7F90", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x6CE7FE0", Offset = "0x6CE6FE0", VA = "0x6CE7FE0", Slot = "62")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Not used anymore.", true)]
	public virtual void ParentMaskStateChanged()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x6CE7FF0", Offset = "0x6CE6FF0", VA = "0x6CE7FF0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x6CE7D70", Offset = "0x6CE6D70", VA = "0x6CE7D70")]
	private void UpdateClipParent()
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x6CE8040", Offset = "0x6CE7040", VA = "0x6CE8040", Slot = "63")]
	public virtual void RecalculateClipping()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x6CE8050", Offset = "0x6CE7050", VA = "0x6CE8050", Slot = "64")]
	public virtual void RecalculateMasking()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x6CE80E0", Offset = "0x6CE70E0", VA = "0x6CE80E0", Slot = "46")]
	public override bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x6CE8100", Offset = "0x6CE7100", VA = "0x6CE8100")]
	protected MaskableGraphic()
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x6CE81E0", Offset = "0x6CE71E0", VA = "0x6CE81E0", Slot = "50")]
	private GameObject UnityEngine_002EUI_002EIClippable_002Eget_gameObject()
	{
		return null;
	}
}
