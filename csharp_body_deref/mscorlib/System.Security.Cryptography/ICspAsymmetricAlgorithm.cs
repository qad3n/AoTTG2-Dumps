// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.ICspAsymmetricAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E7")]
public interface ICspAsymmetricAlgorithm
{
	[Token(Token = "0x17000272")]
	CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001863")]
		get;
	}

	[Token(Token = "0x6001864")]
	byte[] ExportCspBlob(bool includePrivateParameters);

	[Token(Token = "0x6001865")]
	void ImportCspBlob(byte[] rawData);
}
