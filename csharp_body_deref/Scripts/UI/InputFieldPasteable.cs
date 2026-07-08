using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005B3")]
public class InputFieldPasteable : InputField
{
	[Token(Token = "0x6003A7D")]
	[Address(RVA = "0x3F85930", Offset = "0x3F85930", VA = "0x3F85930")]
	protected bool IsModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A7E")]
	[Address(RVA = "0x3F859D0", Offset = "0x3F859D0", VA = "0x3F859D0")]
	protected bool IsCopy()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A7F")]
	[Address(RVA = "0x3F859E0", Offset = "0x3F859E0", VA = "0x3F859E0")]
	protected bool IsPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A80")]
	[Address(RVA = "0x3F859F0", Offset = "0x3F859F0", VA = "0x3F859F0")]
	protected bool IsCut()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A81")]
	[Address(RVA = "0x3F85A00", Offset = "0x3F85A00", VA = "0x3F85A00", Slot = "67")]
	protected override void Append(char input)
	{
	}

	[Token(Token = "0x6003A82")]
	[Address(RVA = "0x3F85AC0", Offset = "0x3F85AC0", VA = "0x3F85AC0", Slot = "66")]
	protected override void Append(string input)
	{
	}

	[Token(Token = "0x6003A83")]
	[Address(RVA = "0x3F85CA0", Offset = "0x3F85CA0", VA = "0x3F85CA0")]
	private string GetClipboard()
	{
		return null;
	}

	[Token(Token = "0x6003A84")]
	[Address(RVA = "0x3F85CB0", Offset = "0x3F85CB0", VA = "0x3F85CB0")]
	public InputFieldPasteable()
	{
	}
}
