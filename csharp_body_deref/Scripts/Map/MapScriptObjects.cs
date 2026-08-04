// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptObjects
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptObjects.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x200027A")]
public class MapScriptObjects : BaseCSVContainer
{
	[Token(Token = "0x4000D82")]
	[FieldOffset(Offset = "0x10")]
	public List<MapScriptBaseObject> Objects;

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x3FB5E10", Offset = "0x3FB5E10", VA = "0x3FB5E10", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x3FB5C10", Offset = "0x3FB5C10", VA = "0x3FB5C10")]
	public MapScriptObjects()
	{
	}
}
