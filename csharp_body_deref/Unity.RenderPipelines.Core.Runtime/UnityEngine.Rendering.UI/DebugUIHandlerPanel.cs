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
	[Address(RVA = "0x48F0230", Offset = "0x48F0230", VA = "0x48F0230")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x48F0300", Offset = "0x48F0300", VA = "0x48F0300")]
	internal void SetPanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x48F0350", Offset = "0x48F0350", VA = "0x48F0350")]
	internal DebugUI.Panel GetPanel()
	{
		return null;
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x48F0360", Offset = "0x48F0360", VA = "0x48F0360")]
	public void SelectNextItem()
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x48F0380", Offset = "0x48F0380", VA = "0x48F0380")]
	public void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x48F03A0", Offset = "0x48F03A0", VA = "0x48F03A0")]
	public void OnScrollbarClicked()
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x48F0420", Offset = "0x48F0420", VA = "0x48F0420")]
	internal void SetScrollTarget(DebugUIHandlerWidget target)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x48F0430", Offset = "0x48F0430", VA = "0x48F0430")]
	internal void UpdateScroll()
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x48F05E0", Offset = "0x48F05E0", VA = "0x48F05E0")]
	private float GetYPosInScroll(RectTransform target)
	{
		return default(float);
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x48F06D0", Offset = "0x48F06D0", VA = "0x48F06D0")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x48F0720", Offset = "0x48F0720", VA = "0x48F0720")]
	public void ResetDebugManager()
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x48F0790", Offset = "0x48F0790", VA = "0x48F0790")]
	public DebugUIHandlerPanel()
	{
	}
}
