// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ICertificatePolicy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200013E")]
public interface ICertificatePolicy
{
	[Token(Token = "0x60007C5")]
	bool CheckValidationResult(ServicePoint srvPoint, X509Certificate certificate, WebRequest request, int certificateProblem);
}
