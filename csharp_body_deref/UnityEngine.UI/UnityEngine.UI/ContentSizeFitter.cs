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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x32C3FC0", Offset = "0x32C25C0", VA = "0x1832C3FC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public FitMode verticalFit
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(FitMode);
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x32C4020", Offset = "0x32C2620", VA = "0x1832C4020")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x32C3F30", Offset = "0x32C2530", VA = "0x1832C3F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	protected ContentSizeFitter()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x32C3CC0", Offset = "0x32C22C0", VA = "0x1832C3CC0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x32C3C40", Offset = "0x32C2240", VA = "0x1832C3C40", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x32C3CE0", Offset = "0x32C22E0", VA = "0x1832C3CE0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x32C3B60", Offset = "0x32C2160", VA = "0x1832C3B60")]
	private void HandleSelfFittingAlongAxis(int axis)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x32C3D70", Offset = "0x32C2370", VA = "0x1832C3D70", Slot = "19")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x32C3E50", Offset = "0x32C2450", VA = "0x1832C3E50", Slot = "20")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x32C3CF0", Offset = "0x32C22F0", VA = "0x1832C3CF0")]
	protected void SetDirty()
	{
	}
}
