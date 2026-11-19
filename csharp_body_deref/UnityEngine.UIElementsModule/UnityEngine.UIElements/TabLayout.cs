// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabLayout
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6C3C0F0", Offset = "0x6C3B0F0", VA = "0x6C3C0F0")]
	public TabLayout(TabView tabView, bool isVertical)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x6C3C140", Offset = "0x6C3B140", VA = "0x6C3C140")]
	public static float GetHeight(VisualElement t)
	{
		return default(float);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x6C3C1B0", Offset = "0x6C3B1B0", VA = "0x6C3C1B0")]
	public static float GetWidth(VisualElement t)
	{
		return default(float);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x6C3C220", Offset = "0x6C3B220", VA = "0x6C3C220")]
	public float GetTabOffset(VisualElement tab)
	{
		return default(float);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x6C3C400", Offset = "0x6C3B400", VA = "0x6C3C400")]
	private void InitOrderTabs()
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x6C3C480", Offset = "0x6C3B480", VA = "0x6C3C480")]
	public void ReorderDisplay(int from, int to)
	{
	}
}
