// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLLinkedPrefabAttribute
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLLinkedPrefabAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003EA")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
[Conditional("UNITY_EDITOR")]
internal class CLLinkedPrefabAttribute : Attribute
{
	[Token(Token = "0x1700028E")]
	public string Name
	{
		[Token(Token = "0x6001813")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028F")]
	public string Path
	{
		[Token(Token = "0x6001814")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001815")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public CLLinkedPrefabAttribute(string name, string path)
	{
	}
}
