using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000007")]
public sealed class DictionaryCloner : Cloner<IDictionary>
{
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4979DC0", Offset = "0x4979DC0", VA = "0x4979DC0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4979E40", Offset = "0x4979E40", VA = "0x4979E40", Slot = "12")]
	public override void FillClone(Type type, ref IDictionary clone, IDictionary original, CloningContext context)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x497A240", Offset = "0x497A240", VA = "0x497A240")]
	public DictionaryCloner()
	{
	}
}
