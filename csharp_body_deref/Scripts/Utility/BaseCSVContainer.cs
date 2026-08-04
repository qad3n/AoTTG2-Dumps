// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVContainer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200072D")]
public class BaseCSVContainer : BaseCSVObject
{
	[Token(Token = "0x17000DB3")]
	public override char Delimiter
	{
		[Token(Token = "0x6004698")]
		[Address(RVA = "0x438C830", Offset = "0x438C830", VA = "0x438C830", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000DB4")]
	protected virtual bool UseNewlines
	{
		[Token(Token = "0x6004699")]
		[Address(RVA = "0x438C840", Offset = "0x438C840", VA = "0x438C840", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600469A")]
	[Address(RVA = "0x438C850", Offset = "0x438C850", VA = "0x438C850", Slot = "8")]
	public override string Serialize()
	{
		return null;
	}

	[Token(Token = "0x600469B")]
	[Address(RVA = "0x438CAD0", Offset = "0x438CAD0", VA = "0x438CAD0", Slot = "19")]
	public virtual string InsertNewlines(string str)
	{
		return null;
	}

	[Token(Token = "0x600469C")]
	[Address(RVA = "0x438CBA0", Offset = "0x438CBA0", VA = "0x438CBA0")]
	public BaseCSVContainer()
	{
	}
}
