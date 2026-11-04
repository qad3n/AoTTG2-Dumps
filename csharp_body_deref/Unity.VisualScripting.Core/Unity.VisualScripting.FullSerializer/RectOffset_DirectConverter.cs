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

[Token(Token = "0x20001E4")]
public class RectOffset_DirectConverter : fsDirectConverter<RectOffset>
{
	[Token(Token = "0x6001191")]
	[Address(RVA = "0x2E54450", Offset = "0x2E52A50", VA = "0x182E54450", Slot = "10")]
	protected override fsResult DoSerialize(RectOffset model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x2E54150", Offset = "0x2E52750", VA = "0x182E54150", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref RectOffset model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x2E54100", Offset = "0x2E52700", VA = "0x182E54100", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x2E546A0", Offset = "0x2E52CA0", VA = "0x182E546A0")]
	public RectOffset_DirectConverter()
	{
	}
}
