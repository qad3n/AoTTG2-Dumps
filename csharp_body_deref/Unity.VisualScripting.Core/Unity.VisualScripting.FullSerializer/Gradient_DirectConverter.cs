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

[Token(Token = "0x20001E1")]
public class Gradient_DirectConverter : fsDirectConverter<Gradient>
{
	[Token(Token = "0x6001184")]
	[Address(RVA = "0x2E52EF0", Offset = "0x2E514F0", VA = "0x182E52EF0", Slot = "10")]
	protected override fsResult DoSerialize(Gradient model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x2E52BE0", Offset = "0x2E511E0", VA = "0x182E52BE0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Gradient model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x2E53150", Offset = "0x2E51750", VA = "0x182E53150")]
	private static void LogWarning(string phase)
	{
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x2E52B90", Offset = "0x2E51190", VA = "0x182E52B90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x2E532C0", Offset = "0x2E518C0", VA = "0x182E532C0")]
	public Gradient_DirectConverter()
	{
	}
}
