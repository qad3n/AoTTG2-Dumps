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
		[Address(RVA = "0x4A22BB0", Offset = "0x4A22BB0", VA = "0x4A22BB0")]
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
		[Address(RVA = "0x4A22BC0", Offset = "0x4A22BC0", VA = "0x4A22BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x4A22B70", Offset = "0x4A22B70", VA = "0x4A22B70")]
	public RenamedNamespaceAttribute(string previousName, string newName)
	{
	}
}
