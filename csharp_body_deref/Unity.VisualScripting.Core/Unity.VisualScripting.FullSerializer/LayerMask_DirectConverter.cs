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

[Token(Token = "0x20001E3")]
public class LayerMask_DirectConverter : fsDirectConverter<LayerMask>
{
	[Token(Token = "0x600118D")]
	[Address(RVA = "0x2E53B90", Offset = "0x2E52190", VA = "0x182E53B90", Slot = "10")]
	protected override fsResult DoSerialize(LayerMask model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x2E53A60", Offset = "0x2E52060", VA = "0x182E53A60", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref LayerMask model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x2E53A20", Offset = "0x2E52020", VA = "0x182E53A20", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x2E53CA0", Offset = "0x2E522A0", VA = "0x182E53CA0")]
	public LayerMask_DirectConverter()
	{
	}
}
