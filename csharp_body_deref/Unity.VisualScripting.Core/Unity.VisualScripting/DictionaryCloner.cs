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

[Token(Token = "0x2000006")]
public sealed class DictionaryCloner : Cloner<IDictionary>
{
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2DA2940", Offset = "0x2DA0F40", VA = "0x182DA2940", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2DA25D0", Offset = "0x2DA0BD0", VA = "0x182DA25D0", Slot = "12")]
	public override void FillClone(Type type, ref IDictionary clone, IDictionary original, CloningContext context)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2DA29C0", Offset = "0x2DA0FC0", VA = "0x182DA29C0")]
	public DictionaryCloner()
	{
	}
}
