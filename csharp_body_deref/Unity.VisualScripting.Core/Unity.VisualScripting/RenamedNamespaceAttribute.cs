// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RenamedNamespaceAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200016B")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class RenamedNamespaceAttribute : Attribute
{
	[Token(Token = "0x17000176")]
	public string previousName
	{
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x4D47780", Offset = "0x4D47780", VA = "0x4D47780")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	public string newName
	{
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x4D47790", Offset = "0x4D47790", VA = "0x4D47790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x4D47740", Offset = "0x4D47740", VA = "0x4D47740")]
	public RenamedNamespaceAttribute(string previousName, string newName)
	{
	}
}
