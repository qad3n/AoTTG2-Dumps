using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200022E")]
internal class MapConverter
{
	[Token(Token = "0x4000C1A")]
	[FieldOffset(Offset = "0x0")]
	private static int _currentId;

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x3C9B9F0", Offset = "0x3C9B9F0", VA = "0x3C9B9F0")]
	public static bool IsLegacy(string map)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x3C9BAD0", Offset = "0x3C9BAD0", VA = "0x3C9BAD0")]
	private static MapScriptSceneObject CreateForestFloor()
	{
		return null;
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x3C9BD70", Offset = "0x3C9BD70", VA = "0x3C9BD70")]
	private static MapScriptSceneObject CreateLight()
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x3C9BF10", Offset = "0x3C9BF10", VA = "0x3C9BF10")]
	private static List<MapScriptBaseObject> CreateFengBounds()
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x3C9C200", Offset = "0x3C9C200", VA = "0x3C9C200")]
	private static MapScriptSceneObject CreateBound(Vector3 center, Vector3 size, Vector3 rotation)
	{
		return null;
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x3C9C3B0", Offset = "0x3C9C3B0", VA = "0x3C9C3B0")]
	public static MapScript Convert(string map)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x3C9BD30", Offset = "0x3C9BD30", VA = "0x3C9BD30")]
	private static int GetNextId()
	{
		return default(int);
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x3C9F4B0", Offset = "0x3C9F4B0", VA = "0x3C9F4B0")]
	public MapConverter()
	{
	}
}
