using System.Collections;
using System.Collections.Specialized;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.VisualScripting;

[Token(Token = "0x2000014")]
public sealed class AotDictionary : OrderedDictionary
{
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x497E580", Offset = "0x497E580", VA = "0x497E580")]
	public AotDictionary()
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x497E590", Offset = "0x497E590", VA = "0x497E590")]
	public AotDictionary(IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x497E5A0", Offset = "0x497E5A0", VA = "0x497E5A0")]
	public AotDictionary(int capacity)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x497E5B0", Offset = "0x497E5B0", VA = "0x497E5B0")]
	public AotDictionary(int capacity, IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x497E5C0", Offset = "0x497E5C0", VA = "0x497E5C0")]
	[Preserve]
	public static void AotStubs()
	{
	}
}
