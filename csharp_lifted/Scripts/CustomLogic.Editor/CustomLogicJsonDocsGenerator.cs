// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicJsonDocsGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicJsonDocsGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using CustomLogic.Editor.Models;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor;

[Token(Token = "0x200065C")]
internal class CustomLogicJsonDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x4001C25")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSerializerSettings _settings;

	[Token(Token = "0x6003D1C")]
	[Address(RVA = "0x5A91B60", Offset = "0x5A90B60", VA = "0x5A91B60")]
	public CustomLogicJsonDocsGenerator(CLType[] allTypes)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicJsonDocsGenerator$$.ctor): clean
		JsonSerializerSettings __this_00;
		DefaultContractResolver __this_01;
		CamelCaseNamingStrategy __this_02;

		__this_00 = new JsonSerializerSettings();
		__this_01 = new DefaultContractResolver();
		__this_02 = new CamelCaseNamingStrategy();
		if (__this_01 != null) {
			__this_01._NamingStrategy_k__BackingField =(NamingStrategy)__this_02;
			if (__this_00 != null) {
				__this_00._ContractResolver_k__BackingField =(IContractResolver)__this_01;
				this._settings = __this_00;
				base();
				this.AllTypes = allTypes;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D1D")]
	[Address(RVA = "0x5A91C70", Offset = "0x5A90C70", VA = "0x5A91C70", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicJsonDocsGenerator$$GetRelativeFilePath): clean
		String pSVar1;

		if (type == null) {
			throw new NullReferenceException();
		}
		pSVar1 = String.Concat("json/", type._Name_k__BackingField, ".json");
		return pSVar1;
	}

	[Token(Token = "0x6003D1E")]
	[Address(RVA = "0x5A91CD0", Offset = "0x5A90CD0", VA = "0x5A91CD0", Slot = "5")]
	public override string Generate(CLType type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicJsonDocsGenerator$$Generate): clean
		JsonSerializerSettings settings;
		String pSVar1;

		settings = this._settings;
		pSVar1 = JsonConvert.SerializeObject((object)type, 1, settings);
		return pSVar1;
	}
}
