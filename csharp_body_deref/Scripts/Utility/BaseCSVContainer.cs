// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVContainer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200090F")]
public class BaseCSVContainer : BaseCSVObject
{
	[Token(Token = "0x17000EEC")]
	public override char Delimiter
	{
		[Token(Token = "0x60055F4")]
		[Address(RVA = "0x5CE0FA0", Offset = "0x5CDFFA0", VA = "0x5CE0FA0", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000EED")]
	protected virtual bool UseNewlines
	{
		[Token(Token = "0x60055F5")]
		[Address(RVA = "0x5CE0FB0", Offset = "0x5CDFFB0", VA = "0x5CE0FB0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60055F6")]
	[Address(RVA = "0x5CE0FC0", Offset = "0x5CDFFC0", VA = "0x5CE0FC0", Slot = "8")]
	public override string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60055F7")]
	[Address(RVA = "0x5CE1240", Offset = "0x5CE0240", VA = "0x5CE1240", Slot = "19")]
	public virtual string InsertNewlines(string str)
	{
		return null;
	}

	[Token(Token = "0x60055F8")]
	[Address(RVA = "0x5CE1300", Offset = "0x5CE0300", VA = "0x5CE1300")]
	public BaseCSVContainer()
	{
	}
}
