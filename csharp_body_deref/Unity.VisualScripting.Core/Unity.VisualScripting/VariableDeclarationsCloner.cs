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
	[Token(Token = "0x400094A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly VariableDeclarationsCloner instance;

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x6850FE0", Offset = "0x684FFE0", VA = "0x6850FE0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x6851050", Offset = "0x6850050", VA = "0x6851050", Slot = "11")]
	public override VariableDeclarations ConstructClone(Type type, VariableDeclarations original)
	{
		return null;
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x6851110", Offset = "0x6850110", VA = "0x6851110", Slot = "12")]
	public override void FillClone(Type type, ref VariableDeclarations clone, VariableDeclarations original, CloningContext context)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x6851400", Offset = "0x6850400", VA = "0x6851400")]
	public VariableDeclarationsCloner()
	{
	}
}
