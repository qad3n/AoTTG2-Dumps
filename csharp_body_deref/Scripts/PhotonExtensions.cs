// ==================== AoTTG2 cross-reference ====================
// Type: PhotonExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PhotonExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

[Token(Token = "0x2000028")]
internal static class PhotonExtensions
{
	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1DAD0F0", Offset = "0x1DAB6F0", VA = "0x181DAD0F0")]
	public static void SetCustomProperty(this Player player, string key, object value)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1DACE40", Offset = "0x1DAB440", VA = "0x181DACE40")]
	public static void SetCustomProperties(this Player player, Dictionary<string, object> dictionary)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1DAC6C0", Offset = "0x1DAACC0", VA = "0x181DAC6C0")]
	public static object GetCustomProperty(this Player player, string key)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1DAC820", Offset = "0x1DAAE20", VA = "0x181DAC820")]
	public static int GetIntProperty(this Player player, string key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x1DAC740", Offset = "0x1DAAD40", VA = "0x181DAC740")]
	public static float GetFloatProperty(this Player player, string key, float defaultValue = 0f)
	{
		return default(float);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1DAC500", Offset = "0x1DAAB00", VA = "0x181DAC500")]
	public static bool GetBoolProperty(this Player player, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1DACC10", Offset = "0x1DAB210", VA = "0x181DACC10")]
	public static string GetStringProperty(this Player player, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1DACB40", Offset = "0x1DAB140", VA = "0x181DACB40")]
	public static string GetStringProperty(this RoomInfo room, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x1DAC5E0", Offset = "0x1DAABE0", VA = "0x181DAC5E0")]
	public static bool GetBoolProperty(this RoomInfo room, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x1DACDB0", Offset = "0x1DAB3B0", VA = "0x181DACDB0")]
	public static bool HasSpawnPoint(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x1DAC8F0", Offset = "0x1DAAEF0", VA = "0x181DAC8F0")]
	public static Vector3 GetSpawnPoint(this Player player)
	{
		return default(Vector3);
	}
}
