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
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4C9FBC0", Offset = "0x4C9FBC0", VA = "0x4C9FBC0", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4C9FC40", Offset = "0x4C9FC40", VA = "0x4C9FC40", Slot = "12")]
	public override void FillClone(Type type, ref IList clone, IList original, CloningContext context)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4CA06B0", Offset = "0x4CA06B0", VA = "0x4CA06B0")]
	public ListCloner()
	{
	}
}
