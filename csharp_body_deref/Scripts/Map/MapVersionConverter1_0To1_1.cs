// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter1_0To1_1
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter1_0To1_1.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000423")]
public sealed class MapVersionConverter1_0To1_1 : IMapVersionConverter
{
	[Token(Token = "0x4001541")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IReadOnlyList<string> ChangeList;

	[Token(Token = "0x170002C2")]
	public string FromVersion
	{
		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x58A5DB0", Offset = "0x58A4DB0", VA = "0x58A5DB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C3")]
	public string ToVersion
	{
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x58A5DE0", Offset = "0x58A4DE0", VA = "0x58A5DE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C4")]
	public bool IsReversible
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x58A5E10", Offset = "0x58A4E10", VA = "0x58A5E10", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C5")]
	public IReadOnlyList<string> Changes
	{
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x58A5E20", Offset = "0x58A4E20", VA = "0x58A5E20", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x58A5E90", Offset = "0x58A4E90", VA = "0x58A5E90", Slot = "8")]
	public void Upgrade(MapScript mapScript)
	{
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x58A6020", Offset = "0x58A5020", VA = "0x58A6020", Slot = "9")]
	public void Downgrade(MapScript mapScript)
	{
	}

	[Token(Token = "0x6001A3C")]
	[Address(RVA = "0x58A5AF0", Offset = "0x58A4AF0", VA = "0x58A5AF0")]
	public MapVersionConverter1_0To1_1()
	{
	}
}
