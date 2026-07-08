using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Services;

[Token(Token = "0x2000359")]
[ComVisible(true)]
public interface ITrackingHandler
{
	[Token(Token = "0x6001CE7")]
	void DisconnectedObject(object obj);

	[Token(Token = "0x6001CE8")]
	void MarshaledObject(object obj, ObjRef or);

	[Token(Token = "0x6001CE9")]
	void UnmarshaledObject(object obj, ObjRef or);
}
