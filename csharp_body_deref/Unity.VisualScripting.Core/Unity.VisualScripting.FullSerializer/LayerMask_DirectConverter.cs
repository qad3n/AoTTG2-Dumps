// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter
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

[Token(Token = "0x20001F3")]
public class LayerMask_DirectConverter : fsDirectConverter<LayerMask>
{
	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x4D782E0", Offset = "0x4D782E0", VA = "0x4D782E0", Slot = "10")]
	protected override fsResult DoSerialize(LayerMask model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x4D783E0", Offset = "0x4D783E0", VA = "0x4D783E0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref LayerMask model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x4D78510", Offset = "0x4D78510", VA = "0x4D78510", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x4D78550", Offset = "0x4D78550", VA = "0x4D78550")]
	public LayerMask_DirectConverter()
	{
	}
}
