// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RenamedAssemblyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000169")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class RenamedAssemblyAttribute : Attribute
{
	[Token(Token = "0x17000176")]
	public string previousName
	{
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x6833420", Offset = "0x6832420", VA = "0x6833420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	public string newName
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x6833430", Offset = "0x6832430", VA = "0x6833430")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x68333E0", Offset = "0x68323E0", VA = "0x68333E0")]
	public RenamedAssemblyAttribute(string previousName, string newName)
	{
	}
}
