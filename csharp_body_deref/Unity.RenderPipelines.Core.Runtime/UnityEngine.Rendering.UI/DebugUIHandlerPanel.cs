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
	[Address(RVA = "0x65AA320", Offset = "0x65A9320", VA = "0x65AA320")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x65A52C0", Offset = "0x65A42C0", VA = "0x65A52C0")]
	internal void SetPanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x65AA3F0", Offset = "0x65A93F0", VA = "0x65AA3F0")]
	internal DebugUI.Panel GetPanel()
	{
		return null;
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x65AA400", Offset = "0x65A9400", VA = "0x65AA400")]
	public void SelectNextItem()
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x65AA460", Offset = "0x65A9460", VA = "0x65AA460")]
	public void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x65AA4D0", Offset = "0x65A94D0", VA = "0x65AA4D0")]
	public void OnScrollbarClicked()
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x65AA550", Offset = "0x65A9550", VA = "0x65AA550")]
	internal void SetScrollTarget(DebugUIHandlerWidget target)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x65A47C0", Offset = "0x65A37C0", VA = "0x65A47C0")]
	internal void UpdateScroll()
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x65AA560", Offset = "0x65A9560", VA = "0x65AA560")]
	private float GetYPosInScroll(RectTransform target)
	{
		return default(float);
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x65A5DC0", Offset = "0x65A4DC0", VA = "0x65A5DC0")]
	internal DebugUIHandlerWidget GetFirstItem()
	{
		return null;
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x65AA680", Offset = "0x65A9680", VA = "0x65AA680")]
	public void ResetDebugManager()
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x65AA6F0", Offset = "0x65A96F0", VA = "0x65AA6F0")]
	public DebugUIHandlerPanel()
	{
	}
}
