// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Keyframe_DirectConverter
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

[Token(Token = "0x20001E2")]
public class Keyframe_DirectConverter : fsDirectConverter<Keyframe>
{
	[Token(Token = "0x6001189")]
	[Address(RVA = "0x68556D0", Offset = "0x68546D0", VA = "0x68556D0", Slot = "10")]
	protected override fsResult DoSerialize(Keyframe model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x68558D0", Offset = "0x68548D0", VA = "0x68558D0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Keyframe model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x6855B60", Offset = "0x6854B60", VA = "0x6855B60", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x6855BB0", Offset = "0x6854BB0", VA = "0x6855BB0")]
	public Keyframe_DirectConverter()
	{
	}
}
