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

[Token(Token = "0x20001F2")]
public class Keyframe_DirectConverter : fsDirectConverter<Keyframe>
{
	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x4D77B10", Offset = "0x4D77B10", VA = "0x4D77B10", Slot = "10")]
	protected override fsResult DoSerialize(Keyframe model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x4D77E50", Offset = "0x4D77E50", VA = "0x4D77E50", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Keyframe model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x4D78250", Offset = "0x4D78250", VA = "0x4D78250", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x4D782A0", Offset = "0x4D782A0", VA = "0x4D782A0")]
	public Keyframe_DirectConverter()
	{
	}
}
