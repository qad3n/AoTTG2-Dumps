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
	[Address(RVA = "0x6855E10", Offset = "0x6854E10", VA = "0x6855E10", Slot = "10")]
	protected override fsResult DoSerialize(RectOffset model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x6855FF0", Offset = "0x6854FF0", VA = "0x6855FF0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref RectOffset model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x6856270", Offset = "0x6855270", VA = "0x6856270", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x68562B0", Offset = "0x68552B0", VA = "0x68562B0")]
	public RectOffset_DirectConverter()
	{
	}
}
