// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicJsonDocsGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicJsonDocsGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using CustomLogic.Editor.Models;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor;

[Token(Token = "0x20005FD")]
internal class CustomLogicJsonDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x4001A84")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSerializerSettings _settings;

	[Token(Token = "0x6003A8E")]
	[Address(RVA = "0x20E4610", Offset = "0x20E2C10", VA = "0x1820E4610")]
	public CustomLogicJsonDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6003A8F")]
	[Address(RVA = "0x20E45B0", Offset = "0x20E2BB0", VA = "0x1820E45B0", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x6003A90")]
	[Address(RVA = "0x20E4540", Offset = "0x20E2B40", VA = "0x1820E4540", Slot = "5")]
	public override string Generate(CLType type)
	{
		return null;
	}
}
