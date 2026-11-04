// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000552")]
internal static class VisualElementUtils
{
	[Token(Token = "0x40011FF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> s_usedNames;

	[Token(Token = "0x4001200")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type s_FoldoutType;

	[Token(Token = "0x4001201")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_InspectorElementUssClassName;

	[Token(Token = "0x6002827")]
	[Address(RVA = "0x316A430", Offset = "0x3168A30", VA = "0x18316A430")]
	public static string GetUniqueName(string nameBase)
	{
		return null;
	}

	[Token(Token = "0x6002828")]
	[Address(RVA = "0x316A340", Offset = "0x3168940", VA = "0x18316A340")]
	internal static int GetFoldoutDepth(this VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6002829")]
	[Address(RVA = "0x316A210", Offset = "0x3168810", VA = "0x18316A210")]
	internal static void AssignInspectorStyleIfNecessary(this VisualElement element, string classNameToEnable)
	{
	}
}
