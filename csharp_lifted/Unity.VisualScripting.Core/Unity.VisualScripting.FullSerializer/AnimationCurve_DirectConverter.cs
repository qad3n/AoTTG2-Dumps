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
	[Address(RVA = "0x6852C30", Offset = "0x6851C30", VA = "0x6852C30", Slot = "10")]
	protected override fsResult DoSerialize(AnimationCurve model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x6852DE0", Offset = "0x6851DE0", VA = "0x6852DE0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref AnimationCurve model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x6853000", Offset = "0x6852000", VA = "0x6853000", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x6853040", Offset = "0x6852040", VA = "0x6853040")]
	public AnimationCurve_DirectConverter()
	{
	}
}
