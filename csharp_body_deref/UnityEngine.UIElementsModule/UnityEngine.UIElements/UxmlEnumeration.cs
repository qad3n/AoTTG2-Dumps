using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000445")]
public class UxmlEnumeration : UxmlTypeRestriction
{
	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x10")]
	private List<string> m_Values;

	[Token(Token = "0x17000726")]
	public IEnumerable<string> values
	{
		[Token(Token = "0x6001B00")]
		[Address(RVA = "0x4C448C0", Offset = "0x4C448C0", VA = "0x4C448C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B01")]
		[Address(RVA = "0x4C448D0", Offset = "0x4C448D0", VA = "0x4C448D0")]
		set
		{
		}
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x4C44930", Offset = "0x4C44930", VA = "0x4C44930", Slot = "5")]
	public override bool Equals(UxmlTypeRestriction other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x4C44A60", Offset = "0x4C44A60", VA = "0x4C44A60")]
	public UxmlEnumeration()
	{
	}
}
