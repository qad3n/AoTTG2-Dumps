using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E2")]
public class Keyframe_DirectConverter : fsDirectConverter<Keyframe>
{
	[Token(Token = "0x600117C")]
	[Address(RVA = "0x4A46C40", Offset = "0x4A46C40", VA = "0x4A46C40", Slot = "10")]
	protected override fsResult DoSerialize(Keyframe model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x4A46E40", Offset = "0x4A46E40", VA = "0x4A46E40", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Keyframe model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x4A47100", Offset = "0x4A47100", VA = "0x4A47100", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4A47150", Offset = "0x4A47150", VA = "0x4A47150")]
	public Keyframe_DirectConverter()
	{
	}
}
