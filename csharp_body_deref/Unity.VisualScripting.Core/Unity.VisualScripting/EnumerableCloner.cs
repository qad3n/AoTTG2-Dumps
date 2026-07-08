using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000008")]
public sealed class EnumerableCloner : Cloner<IEnumerable>
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, IOptimizedInvoker> addMethods;

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x497A280", Offset = "0x497A280", VA = "0x497A280", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x497A5C0", Offset = "0x497A5C0", VA = "0x497A5C0", Slot = "12")]
	public override void FillClone(Type type, ref IEnumerable clone, IEnumerable original, CloningContext context)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x497A380", Offset = "0x497A380", VA = "0x497A380")]
	private IOptimizedInvoker GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x497AA70", Offset = "0x497AA70", VA = "0x497AA70")]
	public EnumerableCloner()
	{
	}
}
