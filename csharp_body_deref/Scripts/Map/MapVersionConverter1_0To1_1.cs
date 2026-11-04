// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter1_0To1_1
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter1_0To1_1.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003C4")]
public sealed class MapVersionConverter1_0To1_1 : IMapVersionConverter
{
	[Token(Token = "0x40013A1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IReadOnlyList<string> ChangeList;

	[Token(Token = "0x17000281")]
	public string FromVersion
	{
		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x1EDD630", Offset = "0x1EDBC30", VA = "0x181EDD630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public string ToVersion
	{
		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x1EDD660", Offset = "0x1EDBC60", VA = "0x181EDD660", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	public bool IsReversible
	{
		[Token(Token = "0x60017C1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000284")]
	public IReadOnlyList<string> Changes
	{
		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x1EDD5E0", Offset = "0x1EDBBE0", VA = "0x181EDD5E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x1EDD2D0", Offset = "0x1EDB8D0", VA = "0x181EDD2D0", Slot = "8")]
	public void Upgrade(MapScript mapScript)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x1EDD160", Offset = "0x1EDB760", VA = "0x181EDD160", Slot = "9")]
	public void Downgrade(MapScript mapScript)
	{
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MapVersionConverter1_0To1_1()
	{
	}
}
