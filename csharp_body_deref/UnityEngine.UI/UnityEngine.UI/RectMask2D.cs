// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.RectMask2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x200005D")]
[AddComponentMenu("UI (Canvas)/Rect Mask 2D", 14)]
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("RectMask2D")]
public class RectMask2D : UIBehaviour, IClipper, ICanvasRaycastFilter
{
	[NonSerialized]
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x20")]
	private readonly RectangularVertexClipper m_VertexClipper;

	[NonSerialized]
	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform m_RectTransform;

	[NonSerialized]
	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<MaskableGraphic> m_MaskableTargets;

	[NonSerialized]
	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x38")]
	private HashSet<IClippable> m_ClipTargets;

	[NonSerialized]
	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x40")]
	private bool m_ShouldRecalculateClipRects;

	[NonSerialized]
	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x48")]
	private List<RectMask2D> m_Clippers;

	[NonSerialized]
	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x50")]
	private Rect m_LastClipRectCanvasSpace;

	[NonSerialized]
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x60")]
	private bool m_ForceClip;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private Vector4 m_Padding;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Vector2Int m_Softness;

	[NonSerialized]
	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x80")]
	private Canvas m_Canvas;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x88")]
	private Vector3[] m_Corners;

	[Token(Token = "0x170000E7")]
	public Vector4 padding
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x32DD6B0", Offset = "0x32DBCB0", VA = "0x1832DD6B0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x32DD930", Offset = "0x32DBF30", VA = "0x1832DD930")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public Vector2Int softness
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x32DD920", Offset = "0x32DBF20", VA = "0x1832DD920")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x32DD940", Offset = "0x32DBF40", VA = "0x1832DD940")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	internal Canvas Canvas
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x32DD4A0", Offset = "0x32DBAA0", VA = "0x1832DD4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	public Rect canvasRect
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x32DD610", Offset = "0x32DBC10", VA = "0x1832DD610")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x170000EB")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x32DD6C0", Offset = "0x32DBCC0", VA = "0x1832DD6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EC")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x32DD730", Offset = "0x32DBD30", VA = "0x1832DD730")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x32DD330", Offset = "0x32DB930", VA = "0x1832DD330")]
	protected RectMask2D()
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x32DC280", Offset = "0x32DA880", VA = "0x1832DC280", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x32DC1C0", Offset = "0x32DA7C0", VA = "0x1832DC1C0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x32DC1A0", Offset = "0x32DA7A0", VA = "0x1832DC1A0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x32DC050", Offset = "0x32DA650", VA = "0x1832DC050", Slot = "19")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x32DC2B0", Offset = "0x32DA8B0", VA = "0x1832DC2B0", Slot = "20")]
	public virtual void PerformClipping()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x32DD020", Offset = "0x32DB620", VA = "0x1832DD020", Slot = "21")]
	public virtual void UpdateClipSoftness()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x32DBF40", Offset = "0x32DA540", VA = "0x1832DBF40")]
	public void AddClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x32DCE70", Offset = "0x32DB470", VA = "0x1832DCE70")]
	public void RemoveClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x32DC160", Offset = "0x32DA760", VA = "0x1832DC160", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x32DC160", Offset = "0x32DA760", VA = "0x1832DC160", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}
}
