using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E0")]
public class GUIStyle_DirectConverter : fsDirectConverter<GUIStyle>
{
	[Token(Token = "0x6001173")]
	[Address(RVA = "0x4A44C30", Offset = "0x4A44C30", VA = "0x4A44C30", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyle model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x4A45590", Offset = "0x4A45590", VA = "0x4A45590", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyle model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x4A46420", Offset = "0x4A46420", VA = "0x4A46420", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x4A46460", Offset = "0x4A46460", VA = "0x4A46460")]
	public GUIStyle_DirectConverter()
	{
	}
}
