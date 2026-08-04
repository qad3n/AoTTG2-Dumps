// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsymmetricAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C9")]
[ComVisible(true)]
public abstract class AsymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000CD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int KeySizeValue;

	[Token(Token = "0x4000CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x1700028E")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001879")]
		[Address(RVA = "0x3B2C0C0", Offset = "0x3B2C0C0", VA = "0x3B2C0C0", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600187A")]
		[Address(RVA = "0x3B2C0D0", Offset = "0x3B2C0D0", VA = "0x3B2C0D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x600187B")]
		[Address(RVA = "0x3B2C1C0", Offset = "0x3B2C1C0", VA = "0x3B2C1C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000290")]
	public virtual string SignatureAlgorithm
	{
		[Token(Token = "0x600187C")]
		[Address(RVA = "0x3B2C240", Offset = "0x3B2C240", VA = "0x3B2C240", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	public virtual string KeyExchangeAlgorithm
	{
		[Token(Token = "0x600187D")]
		[Address(RVA = "0x3B2C280", Offset = "0x3B2C280", VA = "0x3B2C280", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x3B2BFC0", Offset = "0x3B2BFC0", VA = "0x3B2BFC0")]
	protected AsymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x3B2BFD0", Offset = "0x3B2BFD0", VA = "0x3B2BFD0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x3B2C040", Offset = "0x3B2C040", VA = "0x3B2C040")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x3B2C0B0", Offset = "0x3B2C0B0", VA = "0x3B2C0B0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x3B2C2C0", Offset = "0x3B2C2C0", VA = "0x3B2C2C0")]
	public static AsymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x3B2C300", Offset = "0x3B2C300", VA = "0x3B2C300")]
	public static AsymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x3B2C390", Offset = "0x3B2C390", VA = "0x3B2C390", Slot = "11")]
	public virtual void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x3B2C3D0", Offset = "0x3B2C3D0", VA = "0x3B2C3D0", Slot = "12")]
	public virtual string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x3B2C410", Offset = "0x3B2C410", VA = "0x3B2C410", Slot = "13")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x3B2C450", Offset = "0x3B2C450", VA = "0x3B2C450", Slot = "14")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x3B2C490", Offset = "0x3B2C490", VA = "0x3B2C490", Slot = "15")]
	public virtual byte[] ExportPkcs8PrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x3B2C4D0", Offset = "0x3B2C4D0", VA = "0x3B2C4D0", Slot = "16")]
	public virtual byte[] ExportSubjectPublicKeyInfo()
	{
		return null;
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x3B2C510", Offset = "0x3B2C510", VA = "0x3B2C510", Slot = "17")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001887")]
	[Address(RVA = "0x3B2C550", Offset = "0x3B2C550", VA = "0x3B2C550", Slot = "18")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x3B2C590", Offset = "0x3B2C590", VA = "0x3B2C590", Slot = "19")]
	public virtual void ImportPkcs8PrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x3B2C5D0", Offset = "0x3B2C5D0", VA = "0x3B2C5D0", Slot = "20")]
	public virtual void ImportSubjectPublicKeyInfo(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x3B2C610", Offset = "0x3B2C610", VA = "0x3B2C610", Slot = "21")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x3B2C650", Offset = "0x3B2C650", VA = "0x3B2C650", Slot = "22")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x3B2C690", Offset = "0x3B2C690", VA = "0x3B2C690", Slot = "23")]
	public virtual bool TryExportPkcs8PrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x3B2C6D0", Offset = "0x3B2C6D0", VA = "0x3B2C6D0", Slot = "24")]
	public virtual bool TryExportSubjectPublicKeyInfo(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
