// ==================== AoTTG2 cross-reference ====================
// Type: Map.Experience
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/Experience.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003ED")]
public class Experience
{
	[Token(Token = "0x4001416")]
	[FieldOffset(Offset = "0x10")]
	public string Category;

	[Token(Token = "0x4001417")]
	[FieldOffset(Offset = "0x18")]
	public string SubCategory;

	[Token(Token = "0x4001418")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4001419")]
	[FieldOffset(Offset = "0x28")]
	public string TemplateName;

	[Token(Token = "0x400141A")]
	[FieldOffset(Offset = "0x30")]
	public string Preview;

	[Token(Token = "0x400141B")]
	[FieldOffset(Offset = "0x38")]
	public bool HasScoring;

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x5879840", Offset = "0x5878840", VA = "0x5879840")]
	public Experience(string category, string subCategory, string name, string preview, bool hasScoring, string templateName)
	{
	}
}
