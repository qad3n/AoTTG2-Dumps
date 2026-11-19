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

[Token(Token = "0x200003E")]
[AddComponentMenu("Layout/Content Size Fitter", 141)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("ContentSizeFitter")]
public class ContentSizeFitter : UIBehaviour, ILayoutSelfController, ILayoutController
{
	[Token(Token = "0x200003F")]
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

	[Token(Token = "0x170000A6")]
	public FitMode horizontalFit
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x6CDDBF0", Offset = "0x6CDCBF0", VA = "0x6CDDBF0")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x6CDDC00", Offset = "0x6CDCC00", VA = "0x6CDDC00")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public FitMode verticalFit
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x6CDDD20", Offset = "0x6CDCD20", VA = "0x6CDDD20")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x6CDDD30", Offset = "0x6CDCD30", VA = "0x6CDDD30")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x6CDDDE0", Offset = "0x6CDCDE0", VA = "0x6CDDDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x6CDDE70", Offset = "0x6CDCE70", VA = "0x6CDDE70")]
	protected ContentSizeFitter()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x6CDDE80", Offset = "0x6CDCE80", VA = "0x6CDDE80", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x6CDDF00", Offset = "0x6CDCF00", VA = "0x6CDDF00", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x6CDDF70", Offset = "0x6CDCF70", VA = "0x6CDDF70", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x6CDDFE0", Offset = "0x6CDCFE0", VA = "0x6CDDFE0")]
	private void HandleSelfFittingAlongAxis(int axis)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x6CDE0C0", Offset = "0x6CDD0C0", VA = "0x6CDE0C0", Slot = "19")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x6CDE0E0", Offset = "0x6CDD0E0", VA = "0x6CDE0E0", Slot = "20")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x6CDDCB0", Offset = "0x6CDCCB0", VA = "0x6CDDCB0")]
	protected void SetDirty()
	{
	}
}
