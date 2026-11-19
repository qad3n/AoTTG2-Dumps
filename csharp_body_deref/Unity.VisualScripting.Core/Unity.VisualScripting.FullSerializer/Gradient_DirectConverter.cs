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
	[Address(RVA = "0x6854F90", Offset = "0x6853F90", VA = "0x6854F90", Slot = "10")]
	protected override fsResult DoSerialize(Gradient model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x6855370", Offset = "0x6854370", VA = "0x6855370", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Gradient model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x6855200", Offset = "0x6854200", VA = "0x6855200")]
	private static void LogWarning(string phase)
	{
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x6855650", Offset = "0x6854650", VA = "0x6855650", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x6855690", Offset = "0x6854690", VA = "0x6855690")]
	public Gradient_DirectConverter()
	{
	}
}
