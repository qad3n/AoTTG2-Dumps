using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000340")]
[ComVisible(true)]
public interface IRemotingTypeInfo
{
	[Token(Token = "0x17000330")]
	string TypeName
	{
		[Token(Token = "0x6001C1C")]
		get;
	}

	[Token(Token = "0x6001C1D")]
	bool CanCastTo(Type fromType, object o);
}
