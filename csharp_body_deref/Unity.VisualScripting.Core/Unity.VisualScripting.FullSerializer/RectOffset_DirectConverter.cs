using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E4")]
public class RectOffset_DirectConverter : fsDirectConverter<RectOffset>
{
	[Token(Token = "0x6001184")]
	[Address(RVA = "0x4A473C0", Offset = "0x4A473C0", VA = "0x4A473C0", Slot = "10")]
	protected override fsResult DoSerialize(RectOffset model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x4A475A0", Offset = "0x4A475A0", VA = "0x4A475A0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref RectOffset model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x4A47820", Offset = "0x4A47820", VA = "0x4A47820", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4A47860", Offset = "0x4A47860", VA = "0x4A47860")]
	public RectOffset_DirectConverter()
	{
	}
}
