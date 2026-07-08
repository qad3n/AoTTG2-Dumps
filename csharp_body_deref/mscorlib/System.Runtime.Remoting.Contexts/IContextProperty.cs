using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x200036F")]
[ComVisible(true)]
public interface IContextProperty
{
	[Token(Token = "0x1700036C")]
	string Name
	{
		[Token(Token = "0x6001D71")]
		get;
	}

	[Token(Token = "0x6001D72")]
	void Freeze(Context newContext);

	[Token(Token = "0x6001D73")]
	bool IsNewContextOK(Context newCtx);
}
