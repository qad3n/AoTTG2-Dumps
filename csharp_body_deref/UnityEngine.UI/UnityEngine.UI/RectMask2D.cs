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

[Token(Token = "0x200005F")]
[AddComponentMenu("UI/Rect Mask 2D", 14)]
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
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

	[Token(Token = "0x170000E6")]
	public Vector4 padding
	{
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x50D9790", Offset = "0x50D9790", VA = "0x50D9790")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x50D97A0", Offset = "0x50D97A0", VA = "0x50D97A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public Vector2Int softness
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x50D97B0", Offset = "0x50D97B0", VA = "0x50D97B0")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x50D97C0", Offset = "0x50D97C0", VA = "0x50D97C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	internal Canvas Canvas
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x50D97F0", Offset = "0x50D97F0", VA = "0x50D97F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	public Rect canvasRect
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x50D9980", Offset = "0x50D9980", VA = "0x50D9980")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x170000EA")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x50D9A20", Offset = "0x50D9A20", VA = "0x50D9A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	private Rect rootCanvasRect
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x50D9E00", Offset = "0x50D9E00", VA = "0x50D9E00")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x50D9A80", Offset = "0x50D9A80", VA = "0x50D9A80")]
	protected RectMask2D()
	{
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x50D9C00", Offset = "0x50D9C00", VA = "0x50D9C00", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x50D9C30", Offset = "0x50D9C30", VA = "0x50D9C30", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x50D9CF0", Offset = "0x50D9CF0", VA = "0x50D9CF0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x50D9D10", Offset = "0x50D9D10", VA = "0x50D9D10", Slot = "19")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x50DA070", Offset = "0x50DA070", VA = "0x50DA070", Slot = "20")]
	public virtual void PerformClipping()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x50DAA70", Offset = "0x50DAA70", VA = "0x50DAA70", Slot = "21")]
	public virtual void UpdateClipSoftness()
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x50DADF0", Offset = "0x50DADF0", VA = "0x50DADF0")]
	public void AddClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x50DAF00", Offset = "0x50DAF00", VA = "0x50DAF00")]
	public void RemoveClippable(IClippable clippable)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x50DB080", Offset = "0x50DB080", VA = "0x50DB080", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x50DB0B0", Offset = "0x50DB0B0", VA = "0x50DB0B0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}
}
