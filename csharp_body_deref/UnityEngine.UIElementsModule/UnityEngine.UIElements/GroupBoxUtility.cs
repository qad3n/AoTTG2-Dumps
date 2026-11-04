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

[Token(Token = "0x2000289")]
internal static class GroupBoxUtility
{
	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<IGroupBox, IGroupManager> s_GroupManagers;

	[Token(Token = "0x4000998")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<IGroupBoxOption, IGroupManager> s_GroupOptionManagerCache;

	[Token(Token = "0x4000999")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type k_GenericGroupBoxType;

	[Token(Token = "0x6001156")]
	public static void RegisterGroupBoxOption<T>(this T option) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6001157")]
	public static void UnregisterGroupBoxOption<T>(this T option) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6001158")]
	public static void OnOptionSelected<T>(this T selectedOption) where T : VisualElement, IGroupBoxOption
	{
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x3274B00", Offset = "0x3273100", VA = "0x183274B00")]
	private static IGroupManager FindOrCreateGroupManager(IGroupBox groupBox)
	{
		return null;
	}

	[Token(Token = "0x600115A")]
	[Address(RVA = "0x3274FA0", Offset = "0x32735A0", VA = "0x183274FA0")]
	private static void OnGroupBoxDetachedFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x3275060", Offset = "0x3273660", VA = "0x183275060")]
	private static void OnPanelDestroyed(BaseVisualElementPanel panel)
	{
	}
}
