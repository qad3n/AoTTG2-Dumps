// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ContentSizeFitter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50CDB20", Offset = "0x50CDB20", VA = "0x50CDB20")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x50CDB30", Offset = "0x50CDB30", VA = "0x50CDB30")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public FitMode verticalFit
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x50CDC50", Offset = "0x50CDC50", VA = "0x50CDC50")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x50CDC60", Offset = "0x50CDC60", VA = "0x50CDC60")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x50CDD10", Offset = "0x50CDD10", VA = "0x50CDD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x50CDDA0", Offset = "0x50CDDA0", VA = "0x50CDDA0")]
	protected ContentSizeFitter()
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x50CDDB0", Offset = "0x50CDDB0", VA = "0x50CDDB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x50CDE30", Offset = "0x50CDE30", VA = "0x50CDE30", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x50CDEA0", Offset = "0x50CDEA0", VA = "0x50CDEA0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x50CDF10", Offset = "0x50CDF10", VA = "0x50CDF10")]
	private void HandleSelfFittingAlongAxis(int axis)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x50CE000", Offset = "0x50CE000", VA = "0x50CE000", Slot = "19")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x50CE020", Offset = "0x50CE020", VA = "0x50CE020", Slot = "20")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x50CDBE0", Offset = "0x50CDBE0", VA = "0x50CDBE0")]
	protected void SetDirty()
	{
	}
}
