// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.AspectRatioFitter
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
[AddComponentMenu("Layout/Aspect Ratio Fitter", 142)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
public class AspectRatioFitter : UIBehaviour, ILayoutSelfController, ILayoutController
{
	[Token(Token = "0x200003B")]
	public enum AspectMode
	{
		[Token(Token = "0x400012D")]
		None,
		[Token(Token = "0x400012E")]
		WidthControlsHeight,
		[Token(Token = "0x400012F")]
		HeightControlsWidth,
		[Token(Token = "0x4000130")]
		FitInParent,
		[Token(Token = "0x4000131")]
		EnvelopeParent
	}

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AspectMode m_AspectMode;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_AspectRatio;

	[NonSerialized]
	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform m_Rect;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x30")]
	private bool m_DelayedSetDirty;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x31")]
	private bool m_DoesParentExist;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x32")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x17000098")]
	public AspectMode aspectMode
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x50CC2B0", Offset = "0x50CC2B0", VA = "0x50CC2B0")]
		get
		{
			return default(AspectMode);
		}
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x50CC2C0", Offset = "0x50CC2C0", VA = "0x50CC2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public float aspectRatio
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x50CC330", Offset = "0x50CC330", VA = "0x50CC330")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x50CC340", Offset = "0x50CC340", VA = "0x50CC340")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x50CC3A0", Offset = "0x50CC3A0", VA = "0x50CC3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x50CC430", Offset = "0x50CC430", VA = "0x50CC430")]
	protected AspectRatioFitter()
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x50CC440", Offset = "0x50CC440", VA = "0x50CC440", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x50CC4D0", Offset = "0x50CC4D0", VA = "0x50CC4D0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x50CC5E0", Offset = "0x50CC5E0", VA = "0x50CC5E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x50CCA10", Offset = "0x50CCA10", VA = "0x50CCA10", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x50CCAA0", Offset = "0x50CCAA0", VA = "0x50CCAA0", Slot = "19")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x50CCAB0", Offset = "0x50CCAB0", VA = "0x50CCAB0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x50CCAC0", Offset = "0x50CCAC0", VA = "0x50CCAC0")]
	private void UpdateRect()
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x50CCF70", Offset = "0x50CCF70", VA = "0x50CCF70")]
	private float GetSizeDeltaToProduceSize(float size, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x50CCE90", Offset = "0x50CCE90", VA = "0x50CCE90")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x50CD070", Offset = "0x50CD070", VA = "0x50CD070", Slot = "20")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x50CD080", Offset = "0x50CD080", VA = "0x50CD080", Slot = "21")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x50CC320", Offset = "0x50CC320", VA = "0x50CC320")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x50CC510", Offset = "0x50CC510", VA = "0x50CC510")]
	public bool IsComponentValidOnObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x50CC5C0", Offset = "0x50CC5C0", VA = "0x50CC5C0")]
	public bool IsAspectModeValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x50CD090", Offset = "0x50CD090", VA = "0x50CD090")]
	private bool DoesParentExists()
	{
		return default(bool);
	}
}
