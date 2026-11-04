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

[Token(Token = "0x20001DD")]
public class AnimationCurve_DirectConverter : fsDirectConverter<AnimationCurve>
{
	[Token(Token = "0x6001174")]
	[Address(RVA = "0x2E4EFB0", Offset = "0x2E4D5B0", VA = "0x182E4EFB0", Slot = "10")]
	protected override fsResult DoSerialize(AnimationCurve model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x2E4ED30", Offset = "0x2E4D330", VA = "0x182E4ED30", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref AnimationCurve model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x2E4ECE0", Offset = "0x2E4D2E0", VA = "0x182E4ECE0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x2E4F1B0", Offset = "0x2E4D7B0", VA = "0x182E4F1B0")]
	public AnimationCurve_DirectConverter()
	{
	}
}
