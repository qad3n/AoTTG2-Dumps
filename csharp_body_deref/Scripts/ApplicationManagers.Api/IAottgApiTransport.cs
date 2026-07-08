using System.Threading;
using Cysharp.Threading.Tasks;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x200076A")]
public interface IAottgApiTransport
{
	[Token(Token = "0x60047AF")]
	UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken);
}
