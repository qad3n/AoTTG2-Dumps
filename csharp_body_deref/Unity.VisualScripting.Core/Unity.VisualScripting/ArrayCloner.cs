// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ArrayCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000006")]
public sealed class ArrayCloner : Cloner<Array>
{
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4C9E730", Offset = "0x4C9E730", VA = "0x4C9E730", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4C9E750", Offset = "0x4C9E750", VA = "0x4C9E750", Slot = "11")]
	public override Array ConstructClone(Type type, Array original)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4C9E780", Offset = "0x4C9E780", VA = "0x4C9E780", Slot = "12")]
	public override void FillClone(Type type, ref Array clone, Array original, CloningContext context)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4C9E950", Offset = "0x4C9E950", VA = "0x4C9E950")]
	public ArrayCloner()
	{
	}
}
