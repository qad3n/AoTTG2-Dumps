// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerPanel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000229")]
public class DebugUIHandlerPanel : MonoBehaviour
{
	[Token(Token = "0x40008A1")]
	[FieldOffset(Offset = "0x20")]
	public Text nameLabel;

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x28")]
	public ScrollRect scrollRect;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x30")]
	public RectTransform viewport;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x38")]
	public DebugUIHandlerCanvas Canvas;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform m_ScrollTransform;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform m_ContentTransform;

	[Token(Token = "0x40008A7")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform m_MaskTransform;

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0x58")]
	private DebugUIHandlerWidget m_ScrollTarget;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x60")]
	protected internal DebugUI.Panel m_Panel;

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x4C152A0", Offset = "0x4C152A0", VA = "0x4C152A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4C15370", Offset = "0x4C15370", VA = "0x4C15370")]
	internal void SetPanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x4C153C0", Offset = "0x4C153C0", VA = "0x4C153C0")]
	internal DebugUI.Panel GetPanel()
	{
		return null;
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x4C153D0", Offset = "0x4C153D0", VA = "0x4C153D0")]
	public void SelectNextItem()
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x4C153F0", Offset = "0x4C153F0", VA = "0x4C153F0")]
	public void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4C15410", Offset = "0x4C15410", VA = "0x4C15410")]
	public void OnScrollbarClicked()
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4C15490", Offset = "0x4C15490", VA = "0x4C15490")]
	internal void SetScrollTarget(DebugUIHandlerWidget target)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4C154A0", Offset = "0x4C154A0", VA = "0x4C154A0")]
	internal void UpdateScroll()
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4C15650", Offset = "0x4C15650", VA = "0x4C15650")]
	private float GetYPosInScroll(RectTransform target)
	{
		return default(float);
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x4C15740", Offset = "0x4C15740", VA = "0x4C15740")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x4C15790", Offset = "0x4C15790", VA = "0x4C15790")]
	public void ResetDebugManager()
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4C15800", Offset = "0x4C15800", VA = "0x4C15800")]
	public DebugUIHandlerPanel()
	{
	}
}
