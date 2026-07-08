using CustomLogic.Editor.Models;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x200045E")]
internal abstract class BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x4001329")]
	[FieldOffset(Offset = "0x10")]
	protected readonly CLType[] AllTypes;

	[Token(Token = "0x6002EF6")]
	[Address(RVA = "0x3E70A00", Offset = "0x3E70A00", VA = "0x3E70A00")]
	protected BaseCustomLogicDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6002EF7")]
	public abstract string GetRelativeFilePath(CLType type);

	[Token(Token = "0x6002EF8")]
	public abstract string Generate(CLType type);
}
