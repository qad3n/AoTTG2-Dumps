// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapConverter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapConverter.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapConverter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000267")]
internal class MapConverter
{
	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x0")]
	private static int _currentId;

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x3FA1280", Offset = "0x3FA1280", VA = "0x3FA1280")]
	public static bool IsLegacy(string map)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x3FA1360", Offset = "0x3FA1360", VA = "0x3FA1360")]
	private static MapScriptSceneObject CreateForestFloor()
	{
		return null;
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x3FA15D0", Offset = "0x3FA15D0", VA = "0x3FA15D0")]
	private static MapScriptSceneObject CreateLight()
	{
		return null;
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x3FA1700", Offset = "0x3FA1700", VA = "0x3FA1700")]
	private static List<MapScriptBaseObject> CreateFengBounds()
	{
		return null;
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x3FA19F0", Offset = "0x3FA19F0", VA = "0x3FA19F0")]
	private static MapScriptSceneObject CreateBound(Vector3 center, Vector3 size, Vector3 rotation)
	{
		return null;
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x3FA1B70", Offset = "0x3FA1B70", VA = "0x3FA1B70")]
	public static MapScript Convert(string map)
	{
		return null;
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x3FA1590", Offset = "0x3FA1590", VA = "0x3FA1590")]
	private static int GetNextId()
	{
		return default(int);
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x3FA47D0", Offset = "0x3FA47D0", VA = "0x3FA47D0")]
	public MapConverter()
	{
	}
}
