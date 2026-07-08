using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000241")]
public class MapScriptObjects : BaseCSVContainer
{
	[Token(Token = "0x4000C9C")]
	[FieldOffset(Offset = "0x10")]
	public List<MapScriptBaseObject> Objects;

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x3CAFE60", Offset = "0x3CAFE60", VA = "0x3CAFE60", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x3CAFD40", Offset = "0x3CAFD40", VA = "0x3CAFD40")]
	public MapScriptObjects()
	{
	}
}
