// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.DictionaryCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000007")]
public sealed class DictionaryCloner : Cloner<IDictionary>
{
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4C9E990", Offset = "0x4C9E990", VA = "0x4C9E990", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4C9EA10", Offset = "0x4C9EA10", VA = "0x4C9EA10", Slot = "12")]
	public override void FillClone(Type type, ref IDictionary clone, IDictionary original, CloningContext context)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4C9EE10", Offset = "0x4C9EE10", VA = "0x4C9EE10")]
	public DictionaryCloner()
	{
	}
}
