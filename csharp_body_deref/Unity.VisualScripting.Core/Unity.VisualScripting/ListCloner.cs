using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000C")]
public sealed class ListCloner : Cloner<IList>
{
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x497AFF0", Offset = "0x497AFF0", VA = "0x497AFF0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x497B070", Offset = "0x497B070", VA = "0x497B070", Slot = "12")]
	public override void FillClone(Type type, ref IList clone, IList original, CloningContext context)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x497BAE0", Offset = "0x497BAE0", VA = "0x497BAE0")]
	public ListCloner()
	{
	}
}
