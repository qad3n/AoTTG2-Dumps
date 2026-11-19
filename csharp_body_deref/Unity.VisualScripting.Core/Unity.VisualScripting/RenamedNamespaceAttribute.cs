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
	[Token(Token = "0x17000179")]
	public string previousName
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x68334C0", Offset = "0x68324C0", VA = "0x68334C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	public string newName
	{
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x68334D0", Offset = "0x68324D0", VA = "0x68334D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x6833480", Offset = "0x6832480", VA = "0x6833480")]
	public RenamedNamespaceAttribute(string previousName, string newName)
	{
	}
}
