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

[Token(Token = "0x20003EF")]
internal class MapConverter
{
	[Token(Token = "0x400141E")]
	[FieldOffset(Offset = "0x0")]
	private static int _currentId;

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x5879A10", Offset = "0x5878A10", VA = "0x5879A10")]
	public static bool IsLegacy(string map)
	{
		return default(bool);
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x5879AF0", Offset = "0x5878AF0", VA = "0x5879AF0")]
	private static MapScriptSceneObject CreateForestFloor()
	{
		return null;
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x5879D50", Offset = "0x5878D50", VA = "0x5879D50")]
	private static MapScriptSceneObject CreateLight()
	{
		return null;
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x5879E90", Offset = "0x5878E90", VA = "0x5879E90")]
	private static List<MapScriptBaseObject> CreateFengBounds()
	{
		return null;
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x587A180", Offset = "0x5879180", VA = "0x587A180")]
	private static MapScriptSceneObject CreateBound(Vector3 center, Vector3 size, Vector3 rotation)
	{
		return null;
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x587A2F0", Offset = "0x58792F0", VA = "0x587A2F0")]
	public static MapScript Convert(string map)
	{
		return null;
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x5879D10", Offset = "0x5878D10", VA = "0x5879D10")]
	private static int GetNextId()
	{
		return default(int);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x587D0E0", Offset = "0x587C0E0", VA = "0x587D0E0")]
	public MapConverter()
	{
	}
}
