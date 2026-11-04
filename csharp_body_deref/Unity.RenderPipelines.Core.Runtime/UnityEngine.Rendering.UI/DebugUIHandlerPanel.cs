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

[Token(Token = "0x20002E8")]
public class DebugUIHandlerPanel : MonoBehaviour
{
	[Token(Token = "0x4000D73")]
	[FieldOffset(Offset = "0x20")]
	public Text nameLabel;

	[Token(Token = "0x4000D74")]
	[FieldOffset(Offset = "0x28")]
	public ScrollRect scrollRect;

	[Token(Token = "0x4000D75")]
	[FieldOffset(Offset = "0x30")]
	public RectTransform viewport;

	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x38")]
	public DebugUIHandlerCanvas Canvas;

	[Token(Token = "0x4000D77")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform m_ScrollTransform;

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform m_ContentTransform;

	[Token(Token = "0x4000D79")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform m_MaskTransform;

	[Token(Token = "0x4000D7A")]
	[FieldOffset(Offset = "0x58")]
	private DebugUIHandlerWidget m_ScrollTarget;

	[Token(Token = "0x4000D7B")]
	[FieldOffset(Offset = "0x60")]
	protected internal DebugUI.Panel m_Panel;

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x2BAEC50", Offset = "0x2BAD250", VA = "0x182BAEC50")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x2BAEE80", Offset = "0x2BAD480", VA = "0x182BAEE80")]
	internal void SetPanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
	internal DebugUI.Panel GetPanel()
	{
		return null;
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x2BAEDE0", Offset = "0x2BAD3E0", VA = "0x182BAEDE0")]
	public void SelectNextItem()
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x2BAEE60", Offset = "0x2BAD460", VA = "0x182BAEE60")]
	public void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x2BAED20", Offset = "0x2BAD320", VA = "0x182BAED20")]
	public void OnScrollbarClicked()
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
	internal void SetScrollTarget(DebugUIHandlerWidget target)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x2BAEED0", Offset = "0x2BAD4D0", VA = "0x182BAEED0")]
	internal void UpdateScroll()
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x2BAEAA0", Offset = "0x2BAD0A0", VA = "0x182BAEAA0")]
	private float GetYPosInScroll(RectTransform target)
	{
		return default(float);
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x2BAEA50", Offset = "0x2BAD050", VA = "0x182BAEA50")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x2BAED80", Offset = "0x2BAD380", VA = "0x182BAED80")]
	public void ResetDebugManager()
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugUIHandlerPanel()
	{
	}
}
