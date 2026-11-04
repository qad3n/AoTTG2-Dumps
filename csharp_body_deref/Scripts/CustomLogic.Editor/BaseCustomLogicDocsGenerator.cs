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

[Token(Token = "0x20005FC")]
internal abstract class BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x4001A83")]
	[FieldOffset(Offset = "0x10")]
	protected readonly CLType[] AllTypes;

	[Token(Token = "0x6003A8B")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	protected BaseCustomLogicDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6003A8C")]
	public abstract string GetRelativeFilePath(CLType type);

	[Token(Token = "0x6003A8D")]
	public abstract string Generate(CLType type);
}
