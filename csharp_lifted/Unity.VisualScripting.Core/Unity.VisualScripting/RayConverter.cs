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
	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x68417C0", Offset = "0x68407C0", VA = "0x68417C0", Slot = "10")]
	protected override fsResult DoSerialize(Ray model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x68418E0", Offset = "0x68408E0", VA = "0x68418E0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Ray model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x6841B20", Offset = "0x6840B20", VA = "0x6841B20", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x6841B70", Offset = "0x6840B70", VA = "0x6841B70")]
	public RayConverter()
	{
	}
}
