// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Bounds_DirectConverter
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

[Token(Token = "0x20001DE")]
public class Bounds_DirectConverter : fsDirectConverter<Bounds>
{
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x6853080", Offset = "0x6852080", VA = "0x6853080", Slot = "10")]
	protected override fsResult DoSerialize(Bounds model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x68531A0", Offset = "0x68521A0", VA = "0x68531A0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Bounds model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x6853310", Offset = "0x6852310", VA = "0x6853310", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x6853360", Offset = "0x6852360", VA = "0x6853360")]
	public Bounds_DirectConverter()
	{
	}
}
