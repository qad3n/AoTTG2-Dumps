// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.RectOffset_DirectConverter
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

[Token(Token = "0x20001F4")]
public class RectOffset_DirectConverter : fsDirectConverter<RectOffset>
{
	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x4D78590", Offset = "0x4D78590", VA = "0x4D78590", Slot = "10")]
	protected override fsResult DoSerialize(RectOffset model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x4D78890", Offset = "0x4D78890", VA = "0x4D78890", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref RectOffset model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x4D78C30", Offset = "0x4D78C30", VA = "0x4D78C30", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x4D78C70", Offset = "0x4D78C70", VA = "0x4D78C70")]
	public RectOffset_DirectConverter()
	{
	}
}
