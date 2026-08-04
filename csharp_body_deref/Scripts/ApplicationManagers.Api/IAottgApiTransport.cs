// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.IAottgApiTransport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Cysharp.Threading.Tasks;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007CC")]
public interface IAottgApiTransport
{
	[Token(Token = "0x6004AA2")]
	UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken);
}
