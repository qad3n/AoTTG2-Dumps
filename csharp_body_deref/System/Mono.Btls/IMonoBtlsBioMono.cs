// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.IMonoBtlsBioMono
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200006E")]
internal interface IMonoBtlsBioMono
{
	[Token(Token = "0x600018C")]
	int Read(byte[] buffer, int offset, int size, out bool wantMore);

	[Token(Token = "0x600018D")]
	bool Write(byte[] buffer, int offset, int size);

	[Token(Token = "0x600018E")]
	void Flush();

	[Token(Token = "0x600018F")]
	void Close();
}
