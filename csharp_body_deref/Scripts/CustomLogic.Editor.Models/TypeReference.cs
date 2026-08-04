// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.TypeReference
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/TypeReference.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x20004BF")]
internal class TypeReference
{
	[Token(Token = "0x40014B5")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40014B6")]
	[FieldOffset(Offset = "0x18")]
	public TypeReference[] Arguments;

	[Token(Token = "0x6003202")]
	[Address(RVA = "0x4187020", Offset = "0x4187020", VA = "0x4187020")]
	public TypeReference(string name)
	{
	}

	[Token(Token = "0x6003203")]
	[Address(RVA = "0x4187110", Offset = "0x4187110", VA = "0x4187110")]
	public TypeReference(string name, TypeReference[] arguments)
	{
	}
}
