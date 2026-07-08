using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200017E")]
public class Ray2DConverter : fsDirectConverter<Ray2D>
{
	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x4A31C40", Offset = "0x4A31C40", VA = "0x4A31C40", Slot = "10")]
	protected override fsResult DoSerialize(Ray2D model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x4A31D50", Offset = "0x4A31D50", VA = "0x4A31D50", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Ray2D model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x4A31F70", Offset = "0x4A31F70", VA = "0x4A31F70", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x4A31FB0", Offset = "0x4A31FB0", VA = "0x4A31FB0")]
	public Ray2DConverter()
	{
	}
}
