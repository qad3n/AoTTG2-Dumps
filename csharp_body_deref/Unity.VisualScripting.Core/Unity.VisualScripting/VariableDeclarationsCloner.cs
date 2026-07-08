using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D5")]
public sealed class VariableDeclarationsCloner : Cloner<VariableDeclarations>
{
	[Token(Token = "0x400094C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly VariableDeclarationsCloner instance;

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x4A424E0", Offset = "0x4A424E0", VA = "0x4A424E0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x4A42550", Offset = "0x4A42550", VA = "0x4A42550", Slot = "11")]
	public override VariableDeclarations ConstructClone(Type type, VariableDeclarations original)
	{
		return null;
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x4A42610", Offset = "0x4A42610", VA = "0x4A42610", Slot = "12")]
	public override void FillClone(Type type, ref VariableDeclarations clone, VariableDeclarations original, CloningContext context)
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x4A42960", Offset = "0x4A42960", VA = "0x4A42960")]
	public VariableDeclarationsCloner()
	{
	}
}
