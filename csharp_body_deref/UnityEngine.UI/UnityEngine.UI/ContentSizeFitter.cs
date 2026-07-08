using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x2000040")]
[AddComponentMenu("Layout/Content Size Fitter", 141)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class ContentSizeFitter : UIBehaviour, ILayoutSelfController, ILayoutController
{
	[Token(Token = "0x2000041")]
	public enum FitMode
	{
		[Token(Token = "0x4000154")]
		Unconstrained,
		[Token(Token = "0x4000155")]
		MinSize,
		[Token(Token = "0x4000156")]
		PreferredSize
	}

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	protected FitMode m_HorizontalFit;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	protected FitMode m_VerticalFit;

	[NonSerialized]
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform m_Rect;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x30")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x170000A5")]
	public FitMode horizontalFit
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x4DA61F0", Offset = "0x4DA61F0", VA = "0x4DA61F0")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x4DA6200", Offset = "0x4DA6200", VA = "0x4DA6200")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public FitMode verticalFit
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x4DA6320", Offset = "0x4DA6320", VA = "0x4DA6320")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x4DA6330", Offset = "0x4DA6330", VA = "0x4DA6330")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x4DA63E0", Offset = "0x4DA63E0", VA = "0x4DA63E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4DA6470", Offset = "0x4DA6470", VA = "0x4DA6470")]
	protected ContentSizeFitter()
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4DA6480", Offset = "0x4DA6480", VA = "0x4DA6480", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4DA6500", Offset = "0x4DA6500", VA = "0x4DA6500", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4DA6570", Offset = "0x4DA6570", VA = "0x4DA6570", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4DA65E0", Offset = "0x4DA65E0", VA = "0x4DA65E0")]
	private void HandleSelfFittingAlongAxis(int axis)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4DA66D0", Offset = "0x4DA66D0", VA = "0x4DA66D0", Slot = "19")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4DA66F0", Offset = "0x4DA66F0", VA = "0x4DA66F0", Slot = "20")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4DA62B0", Offset = "0x4DA62B0", VA = "0x4DA62B0")]
	protected void SetDirty()
	{
	}
}
