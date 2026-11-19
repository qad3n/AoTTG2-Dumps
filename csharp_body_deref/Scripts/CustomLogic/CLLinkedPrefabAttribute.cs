// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLLinkedPrefabAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLLinkedPrefabAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000449")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
[Conditional("UNITY_EDITOR")]
internal class CLLinkedPrefabAttribute : Attribute
{
	[Token(Token = "0x170002CF")]
	public string Name
	{
		[Token(Token = "0x6001A8A")]
		[Address(RVA = "0x58A97C0", Offset = "0x58A87C0", VA = "0x58A97C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D0")]
	public string Path
	{
		[Token(Token = "0x6001A8B")]
		[Address(RVA = "0x58A97D0", Offset = "0x58A87D0", VA = "0x58A97D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x58A97E0", Offset = "0x58A87E0", VA = "0x58A97E0")]
	public CLLinkedPrefabAttribute(string name, string path)
	{
	}
}
