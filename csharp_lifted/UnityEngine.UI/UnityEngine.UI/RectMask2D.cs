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
		[Address(RVA = "0x6CE98D0", Offset = "0x6CE88D0", VA = "0x6CE98D0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x6CE98E0", Offset = "0x6CE88E0", VA = "0x6CE98E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public Vector2Int softness
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x6CE98F0", Offset = "0x6CE88F0", VA = "0x6CE98F0")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x6CE9900", Offset = "0x6CE8900", VA = "0x6CE9900")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	internal Canvas Canvas
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x6CE9930", Offset = "0x6CE8930", VA = "0x6CE9930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	public Rect canvasRect
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x6CE9AA0", Offset = "0x6CE8AA0", VA = "0x6CE9AA0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x170000EB")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x6CE9B40", Offset = "0x6CE8B40", VA = "0x6CE9B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EC")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x6CE9F20", Offset = "0x6CE8F20", VA = "0x6CE9F20")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x6CE9BA0", Offset = "0x6CE8BA0", VA = "0x6CE9BA0")]
	protected RectMask2D()
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x6CE9D20", Offset = "0x6CE8D20", VA = "0x6CE9D20", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x6CE9D50", Offset = "0x6CE8D50", VA = "0x6CE9D50", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x6CE9E10", Offset = "0x6CE8E10", VA = "0x6CE9E10", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x6CE9E30", Offset = "0x6CE8E30", VA = "0x6CE9E30", Slot = "19")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x6CEA190", Offset = "0x6CE9190", VA = "0x6CEA190", Slot = "20")]
	public virtual void PerformClipping()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x6CEABA0", Offset = "0x6CE9BA0", VA = "0x6CEABA0", Slot = "21")]
	public virtual void UpdateClipSoftness()
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x6CEAEF0", Offset = "0x6CE9EF0", VA = "0x6CEAEF0")]
	public void AddClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x6CEB000", Offset = "0x6CEA000", VA = "0x6CEB000")]
	public void RemoveClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x6CEB180", Offset = "0x6CEA180", VA = "0x6CEB180", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x6CEB1B0", Offset = "0x6CEA1B0", VA = "0x6CEB1B0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}
}
