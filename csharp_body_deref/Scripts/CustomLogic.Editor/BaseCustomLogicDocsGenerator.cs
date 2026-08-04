// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.BaseCustomLogicDocsGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/BaseCustomLogicDocsGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using CustomLogic.Editor.Models;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x20004A3")]
internal abstract class BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x4001438")]
	[FieldOffset(Offset = "0x10")]
	protected readonly CLType[] AllTypes;

	[Token(Token = "0x6003103")]
	[Address(RVA = "0x417CEF0", Offset = "0x417CEF0", VA = "0x417CEF0")]
	protected BaseCustomLogicDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6003104")]
	public abstract string GetRelativeFilePath(CLType type);

	[Token(Token = "0x6003105")]
	public abstract string Generate(CLType type);
}
