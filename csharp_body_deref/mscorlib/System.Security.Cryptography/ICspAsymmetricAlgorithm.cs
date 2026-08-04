// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.ICspAsymmetricAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002B8")]
public interface ICspAsymmetricAlgorithm
{
	[Token(Token = "0x17000270")]
	CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x60017FB")]
		get;
	}

	[Token(Token = "0x60017FC")]
	byte[] ExportCspBlob(bool includePrivateParameters);

	[Token(Token = "0x60017FD")]
	void ImportCspBlob(byte[] rawData);
}
