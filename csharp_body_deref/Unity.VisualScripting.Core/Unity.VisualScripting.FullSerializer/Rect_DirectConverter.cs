using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E5")]
public class Rect_DirectConverter : fsDirectConverter<Rect>
{
	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4A478A0", Offset = "0x4A478A0", VA = "0x4A478A0", Slot = "10")]
	protected override fsResult DoSerialize(Rect model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4A47A50", Offset = "0x4A47A50", VA = "0x4A47A50", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Rect model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4A47C90", Offset = "0x4A47C90", VA = "0x4A47C90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4A47CD0", Offset = "0x4A47CD0", VA = "0x4A47CD0")]
	public Rect_DirectConverter()
	{
	}
}
