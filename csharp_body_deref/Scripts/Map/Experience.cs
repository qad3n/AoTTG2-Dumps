// ==================== AoTTG2 cross-reference ====================
// Type: Map.Experience
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/Experience.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x2000392")]
public class Experience
{
	[Token(Token = "0x4001284")]
	[FieldOffset(Offset = "0x10")]
	public string Category;

	[Token(Token = "0x4001285")]
	[FieldOffset(Offset = "0x18")]
	public string SubCategory;

	[Token(Token = "0x4001286")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4001287")]
	[FieldOffset(Offset = "0x28")]
	public string Description;

	[Token(Token = "0x4001288")]
	[FieldOffset(Offset = "0x30")]
	public string Preview;

	[Token(Token = "0x4001289")]
	[FieldOffset(Offset = "0x38")]
	public bool HasScoring;

	[Token(Token = "0x600169D")]
	[Address(RVA = "0x1E8ADB0", Offset = "0x1E893B0", VA = "0x181E8ADB0")]
	public Experience(string category, string subCategory, string name, string description, string preview, bool hasScoring = false)
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x1E8AB80", Offset = "0x1E89180", VA = "0x181E8AB80")]
	public Experience(JSONNode node)
	{
	}

	[Token(Token = "0x600169F")]
	[Address(RVA = "0x1E8A9B0", Offset = "0x1E88FB0", VA = "0x181E8A9B0")]
	public JSONNode Serialize()
	{
		return null;
	}
}
