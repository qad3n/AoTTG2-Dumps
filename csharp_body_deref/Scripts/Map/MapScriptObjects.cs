// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptObjects
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScriptObjects.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000419")]
public class MapScriptObjects : BaseCSVContainer
{
	[Token(Token = "0x400152A")]
	[FieldOffset(Offset = "0x10")]
	public List<MapScriptBaseObject> Objects;

	[Token(Token = "0x400152B")]
	private const int MaxErrorRowLength = 80;

	[Token(Token = "0x6001A10")]
	[Address(RVA = "0x58A3700", Offset = "0x58A2700", VA = "0x58A3700")]
	public void DeserializeSkippingErrors(string csv, List<string> errors)
	{
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x58A4770", Offset = "0x58A3770", VA = "0x58A4770", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x58A2ED0", Offset = "0x58A1ED0", VA = "0x58A2ED0")]
	public MapScriptObjects()
	{
	}
}
