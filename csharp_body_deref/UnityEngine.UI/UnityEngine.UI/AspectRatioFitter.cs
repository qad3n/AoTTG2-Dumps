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
		[Address(RVA = "0x4DA4980", Offset = "0x4DA4980", VA = "0x4DA4980")]
		get
		{
			return default(AspectMode);
		}
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x4DA4990", Offset = "0x4DA4990", VA = "0x4DA4990")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public float aspectRatio
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x4DA4A00", Offset = "0x4DA4A00", VA = "0x4DA4A00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x4DA4A10", Offset = "0x4DA4A10", VA = "0x4DA4A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x4DA4A70", Offset = "0x4DA4A70", VA = "0x4DA4A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4DA4B00", Offset = "0x4DA4B00", VA = "0x4DA4B00")]
	protected AspectRatioFitter()
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4DA4B10", Offset = "0x4DA4B10", VA = "0x4DA4B10", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4DA4BA0", Offset = "0x4DA4BA0", VA = "0x4DA4BA0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4DA4CB0", Offset = "0x4DA4CB0", VA = "0x4DA4CB0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4DA50E0", Offset = "0x4DA50E0", VA = "0x4DA50E0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4DA5170", Offset = "0x4DA5170", VA = "0x4DA5170", Slot = "19")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4DA5180", Offset = "0x4DA5180", VA = "0x4DA5180", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4DA5190", Offset = "0x4DA5190", VA = "0x4DA5190")]
	private void UpdateRect()
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4DA5640", Offset = "0x4DA5640", VA = "0x4DA5640")]
	private float GetSizeDeltaToProduceSize(float size, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4DA5560", Offset = "0x4DA5560", VA = "0x4DA5560")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4DA5740", Offset = "0x4DA5740", VA = "0x4DA5740", Slot = "20")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4DA5750", Offset = "0x4DA5750", VA = "0x4DA5750", Slot = "21")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4DA49F0", Offset = "0x4DA49F0", VA = "0x4DA49F0")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4DA4BE0", Offset = "0x4DA4BE0", VA = "0x4DA4BE0")]
	public bool IsComponentValidOnObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4DA4C90", Offset = "0x4DA4C90", VA = "0x4DA4C90")]
	public bool IsAspectModeValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4DA5760", Offset = "0x4DA5760", VA = "0x4DA5760")]
	private bool DoesParentExists()
	{
		return default(bool);
	}
}
