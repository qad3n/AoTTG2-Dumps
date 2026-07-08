using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DE")]
public class Bounds_DirectConverter : fsDirectConverter<Bounds>
{
	[Token(Token = "0x600116B")]
	[Address(RVA = "0x4A44580", Offset = "0x4A44580", VA = "0x4A44580", Slot = "10")]
	protected override fsResult DoSerialize(Bounds model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x4A446A0", Offset = "0x4A446A0", VA = "0x4A446A0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Bounds model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x4A44830", Offset = "0x4A44830", VA = "0x4A44830", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4A44880", Offset = "0x4A44880", VA = "0x4A44880")]
	public Bounds_DirectConverter()
	{
	}
}
