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
	[Address(RVA = "0x4D1EB30", Offset = "0x4D1EB30", VA = "0x4D1EB30")]
	private static IGroupManager FindOrCreateGroupManager(IGroupBox groupBox)
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x4D1F210", Offset = "0x4D1F210", VA = "0x4D1F210")]
	private static void OnGroupBoxDetachedFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x4D1F2E0", Offset = "0x4D1F2E0", VA = "0x4D1F2E0")]
	private static void OnPanelDestroyed(BaseVisualElementPanel panel)
	{
	}
}
