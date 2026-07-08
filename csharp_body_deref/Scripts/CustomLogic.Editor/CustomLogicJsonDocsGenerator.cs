using CustomLogic.Editor.Models;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor;

[Token(Token = "0x200045F")]
internal class CustomLogicJsonDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x400132A")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSerializerSettings _settings;

	[Token(Token = "0x6002EF9")]
	[Address(RVA = "0x3E70A30", Offset = "0x3E70A30", VA = "0x3E70A30")]
	public CustomLogicJsonDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6002EFA")]
	[Address(RVA = "0x3E70B40", Offset = "0x3E70B40", VA = "0x3E70B40", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x6002EFB")]
	[Address(RVA = "0x3E70BA0", Offset = "0x3E70BA0", VA = "0x3E70BA0", Slot = "5")]
	public override string Generate(CLType type)
	{
		return null;
	}
}
