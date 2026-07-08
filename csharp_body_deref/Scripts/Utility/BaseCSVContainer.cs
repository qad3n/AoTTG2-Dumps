using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006D1")]
public class BaseCSVContainer : BaseCSVObject
{
	[Token(Token = "0x17000D2E")]
	public override char Delimiter
	{
		[Token(Token = "0x60043D9")]
		[Address(RVA = "0x40516C0", Offset = "0x40516C0", VA = "0x40516C0", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000D2F")]
	protected virtual bool UseNewlines
	{
		[Token(Token = "0x60043DA")]
		[Address(RVA = "0x40516D0", Offset = "0x40516D0", VA = "0x40516D0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60043DB")]
	[Address(RVA = "0x40516E0", Offset = "0x40516E0", VA = "0x40516E0", Slot = "8")]
	public override string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60043DC")]
	[Address(RVA = "0x4051960", Offset = "0x4051960", VA = "0x4051960", Slot = "19")]
	public virtual string InsertNewlines(string str)
	{
		return null;
	}

	[Token(Token = "0x60043DD")]
	[Address(RVA = "0x4051A30", Offset = "0x4051A30", VA = "0x4051A30")]
	public BaseCSVContainer()
	{
	}
}
