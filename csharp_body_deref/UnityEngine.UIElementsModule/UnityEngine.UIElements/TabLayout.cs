// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabLayout
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000155")]
internal class TabLayout
{
	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x10")]
	private TabView m_TabView;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x18")]
	private List<VisualElement> m_TabHeaders;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x20")]
	private bool m_IsVertical;

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x32356E0", Offset = "0x3233CE0", VA = "0x1832356E0")]
	public TabLayout(TabView tabView, bool isVertical)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x3235340", Offset = "0x3233940", VA = "0x183235340")]
	public static float GetHeight(VisualElement t)
	{
		return default(float);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x3235540", Offset = "0x3233B40", VA = "0x183235540")]
	public static float GetWidth(VisualElement t)
	{
		return default(float);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x32353B0", Offset = "0x32339B0", VA = "0x1832353B0")]
	public float GetTabOffset(VisualElement tab)
	{
		return default(float);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x32355B0", Offset = "0x3233BB0", VA = "0x1832355B0")]
	private void InitOrderTabs()
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x3235630", Offset = "0x3233C30", VA = "0x183235630")]
	public void ReorderDisplay(int from, int to)
	{
	}
}
