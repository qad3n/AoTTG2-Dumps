using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E3")]
public class LayerMask_DirectConverter : fsDirectConverter<LayerMask>
{
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x4A47190", Offset = "0x4A47190", VA = "0x4A47190", Slot = "10")]
	protected override fsResult DoSerialize(LayerMask model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x4A47250", Offset = "0x4A47250", VA = "0x4A47250", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref LayerMask model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x4A47340", Offset = "0x4A47340", VA = "0x4A47340", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x4A47380", Offset = "0x4A47380", VA = "0x4A47380")]
	public LayerMask_DirectConverter()
	{
	}
}
