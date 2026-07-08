using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000006")]
public sealed class ArrayCloner : Cloner<Array>
{
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4979B60", Offset = "0x4979B60", VA = "0x4979B60", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4979B80", Offset = "0x4979B80", VA = "0x4979B80", Slot = "11")]
	public override Array ConstructClone(Type type, Array original)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4979BB0", Offset = "0x4979BB0", VA = "0x4979BB0", Slot = "12")]
	public override void FillClone(Type type, ref Array clone, Array original, CloningContext context)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4979D80", Offset = "0x4979D80", VA = "0x4979D80")]
	public ArrayCloner()
	{
	}
}
