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

[Token(Token = "0x20001E5")]
public class Rect_DirectConverter : fsDirectConverter<Rect>
{
	[Token(Token = "0x6001195")]
	[Address(RVA = "0x68562F0", Offset = "0x68552F0", VA = "0x68562F0", Slot = "10")]
	protected override fsResult DoSerialize(Rect model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x68564C0", Offset = "0x68554C0", VA = "0x68564C0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Rect model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x6856800", Offset = "0x6855800", VA = "0x6856800", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x6856840", Offset = "0x6855840", VA = "0x6856840")]
	public Rect_DirectConverter()
	{
	}
}
