using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DF")]
public class GUIStyleState_DirectConverter : fsDirectConverter<GUIStyleState>
{
	[Token(Token = "0x600116F")]
	[Address(RVA = "0x4A448C0", Offset = "0x4A448C0", VA = "0x4A448C0", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyleState model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x4A44A10", Offset = "0x4A44A10", VA = "0x4A44A10", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyleState model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x4A44BB0", Offset = "0x4A44BB0", VA = "0x4A44BB0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x4A44BF0", Offset = "0x4A44BF0", VA = "0x4A44BF0")]
	public GUIStyleState_DirectConverter()
	{
	}
}
