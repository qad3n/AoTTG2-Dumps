// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Rect_DirectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F5")]
public class Rect_DirectConverter : fsDirectConverter<Rect>
{
	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x4D78CB0", Offset = "0x4D78CB0", VA = "0x4D78CB0", Slot = "10")]
	protected override fsResult DoSerialize(Rect model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x4D78F70", Offset = "0x4D78F70", VA = "0x4D78F70", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Rect model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x4D792C0", Offset = "0x4D792C0", VA = "0x4D792C0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x4D79300", Offset = "0x4D79300", VA = "0x4D79300")]
	public Rect_DirectConverter()
	{
	}
}
