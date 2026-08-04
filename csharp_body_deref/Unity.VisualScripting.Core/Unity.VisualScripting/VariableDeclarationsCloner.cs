// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariableDeclarationsCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D670A0", Offset = "0x4D670A0", VA = "0x4D670A0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x4D67110", Offset = "0x4D67110", VA = "0x4D67110", Slot = "11")]
	public override VariableDeclarations ConstructClone(Type type, VariableDeclarations original)
	{
		return null;
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x4D671D0", Offset = "0x4D671D0", VA = "0x4D671D0", Slot = "12")]
	public override void FillClone(Type type, ref VariableDeclarations clone, VariableDeclarations original, CloningContext context)
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x4D67520", Offset = "0x4D67520", VA = "0x4D67520")]
	public VariableDeclarationsCloner()
	{
	}
}
