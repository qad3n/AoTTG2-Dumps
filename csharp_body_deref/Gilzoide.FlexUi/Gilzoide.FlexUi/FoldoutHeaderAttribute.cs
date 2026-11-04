// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.FoldoutHeaderAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/FoldoutHeaderAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000005")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public class FoldoutHeaderAttribute : Attribute
{
	[Token(Token = "0x1700002B")]
	public string Title
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public FoldoutHeaderAttribute(string title)
	{
	}
}
