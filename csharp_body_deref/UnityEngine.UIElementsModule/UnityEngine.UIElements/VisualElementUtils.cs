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
	[Address(RVA = "0x4C50FF0", Offset = "0x4C50FF0", VA = "0x4C50FF0")]
	public static string GetUniqueName(string nameBase)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x4C51110", Offset = "0x4C51110", VA = "0x4C51110")]
	internal static int GetFoldoutDepth(this VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x4C51200", Offset = "0x4C51200", VA = "0x4C51200")]
	internal static void AssignInspectorStyleIfNecessary(this VisualElement element, string classNameToEnable)
	{
	}
}
