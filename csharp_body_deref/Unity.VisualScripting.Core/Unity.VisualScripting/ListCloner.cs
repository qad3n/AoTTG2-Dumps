// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ListCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000C")]
public sealed class ListCloner : Cloner<IList>
{
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2DB2120", Offset = "0x2DB0720", VA = "0x182DB2120", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2DB1BF0", Offset = "0x2DB01F0", VA = "0x182DB1BF0", Slot = "12")]
	public override void FillClone(Type type, ref IList clone, IList original, CloningContext context)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2DB21A0", Offset = "0x2DB07A0", VA = "0x182DB21A0")]
	public ListCloner()
	{
	}
}
