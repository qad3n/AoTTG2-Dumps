using System.Collections;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.VisualScripting;

[Token(Token = "0x2000015")]
public sealed class AotList : ArrayList
{
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x497E660", Offset = "0x497E660", VA = "0x497E660")]
	public AotList()
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x497E670", Offset = "0x497E670", VA = "0x497E670")]
	public AotList(int capacity)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x497E680", Offset = "0x497E680", VA = "0x497E680")]
	public AotList(ICollection c)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x497E690", Offset = "0x497E690", VA = "0x497E690")]
	[Preserve]
	public static void AotStubs()
	{
	}
}
