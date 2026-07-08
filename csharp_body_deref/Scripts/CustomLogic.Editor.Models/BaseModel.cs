using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000474")]
internal abstract class BaseModel
{
	[Token(Token = "0x1700090F")]
	public string ObsoleteMessage
	{
		[Token(Token = "0x6002FAA")]
		[Address(RVA = "0x3E7A630", Offset = "0x3E7A630", VA = "0x3E7A630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FAB")]
		[Address(RVA = "0x3E7A640", Offset = "0x3E7A640", VA = "0x3E7A640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000910")]
	public bool IsObsolete
	{
		[Token(Token = "0x6002FAC")]
		[Address(RVA = "0x3E7A650", Offset = "0x3E7A650", VA = "0x3E7A650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FAD")]
	[Address(RVA = "0x3E7A660", Offset = "0x3E7A660", VA = "0x3E7A660")]
	protected BaseModel()
	{
	}
}
