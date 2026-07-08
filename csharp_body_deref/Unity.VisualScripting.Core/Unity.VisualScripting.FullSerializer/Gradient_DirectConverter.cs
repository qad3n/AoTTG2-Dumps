using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E1")]
public class Gradient_DirectConverter : fsDirectConverter<Gradient>
{
	[Token(Token = "0x6001177")]
	[Address(RVA = "0x4A464A0", Offset = "0x4A464A0", VA = "0x4A464A0", Slot = "10")]
	protected override fsResult DoSerialize(Gradient model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x4A468A0", Offset = "0x4A468A0", VA = "0x4A468A0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Gradient model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x4A46730", Offset = "0x4A46730", VA = "0x4A46730")]
	private static void LogWarning(string phase)
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x4A46BC0", Offset = "0x4A46BC0", VA = "0x4A46BC0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x4A46C00", Offset = "0x4A46C00", VA = "0x4A46C00")]
	public Gradient_DirectConverter()
	{
	}
}
