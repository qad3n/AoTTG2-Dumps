// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DESCryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E2")]
[ComVisible(true)]
public sealed class DESCryptoServiceProvider : DES
{
	[Token(Token = "0x6001931")]
	[Address(RVA = "0x5338C00", Offset = "0x5337C00", VA = "0x5338C00")]
	public DESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001932")]
	[Address(RVA = "0x5339030", Offset = "0x5338030", VA = "0x5339030", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x5339190", Offset = "0x5338190", VA = "0x5339190", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x53392E0", Offset = "0x53382E0", VA = "0x53392E0", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x5339440", Offset = "0x5338440", VA = "0x5339440", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
