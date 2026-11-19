// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.TypeReference
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/TypeReference.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000673")]
internal class TypeReference
{
	[Token(Token = "0x4001C93")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x4001C94")]
	[FieldOffset(Offset = "0x18")]
	public TypeReference[] Arguments;

	[Token(Token = "0x6003E05")]
	[Address(RVA = "0x5A97E70", Offset = "0x5A96E70", VA = "0x5A97E70")]
	public TypeReference(string name)
	{
	}

	[Token(Token = "0x6003E06")]
	[Address(RVA = "0x5A97F60", Offset = "0x5A96F60", VA = "0x5A97F60")]
	public TypeReference(string name, TypeReference[] arguments)
	{
	}
}
