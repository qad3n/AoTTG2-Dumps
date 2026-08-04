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

[Token(Token = "0x2000479")]
internal static class VisualElementUtils
{
	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> s_usedNames;

	[Token(Token = "0x4000D68")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type s_FoldoutType;

	[Token(Token = "0x4000D69")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_InspectorElementUssClassName;

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x4F78920", Offset = "0x4F78920", VA = "0x4F78920")]
	public static string GetUniqueName(string nameBase)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x4F78A40", Offset = "0x4F78A40", VA = "0x4F78A40")]
	internal static int GetFoldoutDepth(this VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x4F78B30", Offset = "0x4F78B30", VA = "0x4F78B30")]
	internal static void AssignInspectorStyleIfNecessary(this VisualElement element, string classNameToEnable)
	{
	}
}
