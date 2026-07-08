using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001B")]
public interface IErrorInfoCallback
{
	[Token(Token = "0x60000DC")]
	void OnErrorInfo(ErrorInfo errorInfo);
}
