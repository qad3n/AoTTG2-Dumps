// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomAssetEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomAssetEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000418")]
public class CustomAssetEntry
{
	[Token(Token = "0x4001525")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] PlatformKeys;

	[Token(Token = "0x4001526")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] PlatformNames;

	[Token(Token = "0x4001527")]
	[FieldOffset(Offset = "0x10")]
	public string Bundle;

	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0x18")]
	public string DefaultUrl;

	[Token(Token = "0x4001529")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, string> PlatformUrls;

	[Token(Token = "0x170002B5")]
	public static string CurrentPlatformKey
	{
		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x58A4270", Offset = "0x58A3270", VA = "0x58A4270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x589D5E0", Offset = "0x589C5E0", VA = "0x589D5E0")]
	public static CustomAssetEntry Parse(string str)
	{
		return null;
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x58A3E80", Offset = "0x58A2E80", VA = "0x58A3E80")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x589D890", Offset = "0x589C890", VA = "0x589D890")]
	public string GetUrl()
	{
		return null;
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x58A41C0", Offset = "0x58A31C0", VA = "0x58A41C0")]
	public string GetPlatformUrl(string key)
	{
		return null;
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x58A4380", Offset = "0x58A3380", VA = "0x58A4380")]
	public void SetPlatformUrl(string key, string url)
	{
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x58A4470", Offset = "0x58A3470", VA = "0x58A4470")]
	public static string GetPlatformKey(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x58A3DC0", Offset = "0x58A2DC0", VA = "0x58A3DC0")]
	public CustomAssetEntry()
	{
	}
}
