// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Gradient_DirectConverter
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

[Token(Token = "0x20001EF")]
public class Gradient_DirectConverter : fsDirectConverter<Gradient>
{
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x4D74720", Offset = "0x4D74720", VA = "0x4D74720", Slot = "10")]
	protected override fsResult DoSerialize(Gradient model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x4D74BE0", Offset = "0x4D74BE0", VA = "0x4D74BE0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Gradient model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x4D74A70", Offset = "0x4D74A70", VA = "0x4D74A70")]
	private static void LogWarning(string phase)
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x4D74FC0", Offset = "0x4D74FC0", VA = "0x4D74FC0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x4D75000", Offset = "0x4D75000", VA = "0x4D75000")]
	public Gradient_DirectConverter()
	{
	}
}
