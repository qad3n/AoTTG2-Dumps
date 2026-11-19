// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.BaseModel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/BaseModel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x200066D")]
internal abstract class BaseModel
{
	[Token(Token = "0x17000AB8")]
	public string ObsoleteMessage
	{
		[Token(Token = "0x6003DB8")]
		[Address(RVA = "0x5A97940", Offset = "0x5A96940", VA = "0x5A97940")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/BaseModel.c (CustomLogic.Editor.Models.BaseModel$$get_ObsoleteMessage): clean
			return this._ObsoleteMessage_k__BackingField;
		}
		[Token(Token = "0x6003DB9")]
		[Address(RVA = "0x5A97950", Offset = "0x5A96950", VA = "0x5A97950")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/BaseModel.c (CustomLogic.Editor.Models.BaseModel$$set_ObsoleteMessage): clean
			this._ObsoleteMessage_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AB9")]
	public bool IsObsolete
	{
		[Token(Token = "0x6003DBA")]
		[Address(RVA = "0x5A97960", Offset = "0x5A96960", VA = "0x5A97960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/BaseModel.c (CustomLogic.Editor.Models.BaseModel$$get_IsObsolete): clean
			bool bVar1;

			bVar1 = String.IsNullOrEmpty(this._ObsoleteMessage_k__BackingField);
			return !bVar1;
		}
	}

	[Token(Token = "0x6003DBB")]
	[Address(RVA = "0x5A97970", Offset = "0x5A96970", VA = "0x5A97970")]
	protected BaseModel()
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/BaseModel.c (CustomLogic.Editor.Models.BaseModel$$.ctor): clean
		base();
		return;
	}
}
