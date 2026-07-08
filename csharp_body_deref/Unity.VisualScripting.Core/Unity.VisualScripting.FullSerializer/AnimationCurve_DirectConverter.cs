using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DD")]
public class AnimationCurve_DirectConverter : fsDirectConverter<AnimationCurve>
{
	[Token(Token = "0x6001167")]
	[Address(RVA = "0x4A44140", Offset = "0x4A44140", VA = "0x4A44140", Slot = "10")]
	protected override fsResult DoSerialize(AnimationCurve model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x4A442F0", Offset = "0x4A442F0", VA = "0x4A442F0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref AnimationCurve model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x4A44500", Offset = "0x4A44500", VA = "0x4A44500", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x4A44540", Offset = "0x4A44540", VA = "0x4A44540")]
	public AnimationCurve_DirectConverter()
	{
	}
}
