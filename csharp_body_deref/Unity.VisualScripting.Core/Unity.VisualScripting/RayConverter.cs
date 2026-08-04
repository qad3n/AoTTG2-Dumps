// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RayConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200017F")]
public class RayConverter : fsDirectConverter<Ray>
{
	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x4D56BC0", Offset = "0x4D56BC0", VA = "0x4D56BC0", Slot = "10")]
	protected override fsResult DoSerialize(Ray model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4D56CE0", Offset = "0x4D56CE0", VA = "0x4D56CE0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Ray model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x4D56F70", Offset = "0x4D56F70", VA = "0x4D56F70", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4D56FC0", Offset = "0x4D56FC0", VA = "0x4D56FC0")]
	public RayConverter()
	{
	}
}
