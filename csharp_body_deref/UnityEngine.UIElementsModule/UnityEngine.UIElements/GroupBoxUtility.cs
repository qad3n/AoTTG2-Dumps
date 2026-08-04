// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GroupBoxUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000213")]
internal static class GroupBoxUtility
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<IGroupBox, IGroupManager> s_GroupManagers;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<IGroupBoxOption, IGroupManager> s_GroupOptionManagerCache;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type k_GenericGroupBoxType;

	[Token(Token = "0x6000DBB")]
	public static void RegisterGroupBoxOption<T>(this T option) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6000DBC")]
	public static void UnregisterGroupBoxOption<T>(this T option) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6000DBD")]
	public static void OnOptionSelected<T>(this T selectedOption) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x5046460", Offset = "0x5046460", VA = "0x5046460")]
	private static IGroupManager FindOrCreateGroupManager(IGroupBox groupBox)
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x5046B40", Offset = "0x5046B40", VA = "0x5046B40")]
	private static void OnGroupBoxDetachedFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x5046C10", Offset = "0x5046C10", VA = "0x5046C10")]
	private static void OnPanelDestroyed(BaseVisualElementPanel panel)
	{
	}
}
