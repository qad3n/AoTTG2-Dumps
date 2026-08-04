// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.AnimationCurve_DirectConverter
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

[Token(Token = "0x20001ED")]
public class AnimationCurve_DirectConverter : fsDirectConverter<AnimationCurve>
{
	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x4D73CF0", Offset = "0x4D73CF0", VA = "0x4D73CF0", Slot = "10")]
	protected override fsResult DoSerialize(AnimationCurve model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x4D73F60", Offset = "0x4D73F60", VA = "0x4D73F60", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref AnimationCurve model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x4D74240", Offset = "0x4D74240", VA = "0x4D74240", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x4D74280", Offset = "0x4D74280", VA = "0x4D74280")]
	public AnimationCurve_DirectConverter()
	{
	}
}
