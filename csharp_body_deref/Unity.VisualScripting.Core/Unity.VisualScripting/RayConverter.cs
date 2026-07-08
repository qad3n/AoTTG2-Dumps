using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200017F")]
public class RayConverter : fsDirectConverter<Ray>
{
	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x4A31FF0", Offset = "0x4A31FF0", VA = "0x4A31FF0", Slot = "10")]
	protected override fsResult DoSerialize(Ray model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4A32110", Offset = "0x4A32110", VA = "0x4A32110", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Ray model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x4A323A0", Offset = "0x4A323A0", VA = "0x4A323A0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4A323F0", Offset = "0x4A323F0", VA = "0x4A323F0")]
	public RayConverter()
	{
	}
}
