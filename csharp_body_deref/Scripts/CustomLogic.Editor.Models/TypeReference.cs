// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.TypeReference
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/TypeReference.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000614")]
internal class TypeReference
{
	[Token(Token = "0x4001AF2")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x4001AF3")]
	[FieldOffset(Offset = "0x18")]
	public TypeReference[] Arguments;

	[Token(Token = "0x6003B77")]
	[Address(RVA = "0x2101B30", Offset = "0x2100130", VA = "0x182101B30")]
	public TypeReference(string name)
	{
	}

	[Token(Token = "0x6003B78")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public TypeReference(string name, TypeReference[] arguments)
	{
	}
}
