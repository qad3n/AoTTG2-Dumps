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
	[Address(RVA = "0x2E53730", Offset = "0x2E51D30", VA = "0x182E53730", Slot = "10")]
	protected override fsResult DoSerialize(Keyframe model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x2E533E0", Offset = "0x2E519E0", VA = "0x182E533E0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Keyframe model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x2E53380", Offset = "0x2E51980", VA = "0x182E53380", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x2E539E0", Offset = "0x2E51FE0", VA = "0x182E539E0")]
	public Keyframe_DirectConverter()
	{
	}
}
