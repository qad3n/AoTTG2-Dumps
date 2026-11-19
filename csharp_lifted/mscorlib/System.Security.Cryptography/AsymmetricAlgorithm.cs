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

[Token(Token = "0x20002D1")]
[ComVisible(true)]
public abstract class AsymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000C3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int KeySizeValue;

	[Token(Token = "0x4000C3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x1700028F")]
	public virtual int KeySize
	{
		[Token(Token = "0x60018BE")]
		[Address(RVA = "0x5336100", Offset = "0x5335100", VA = "0x5336100", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018BF")]
		[Address(RVA = "0x5336110", Offset = "0x5335110", VA = "0x5336110", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000290")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x60018C0")]
		[Address(RVA = "0x53361F0", Offset = "0x53351F0", VA = "0x53361F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	public virtual string SignatureAlgorithm
	{
		[Token(Token = "0x60018C1")]
		[Address(RVA = "0x5336270", Offset = "0x5335270", VA = "0x5336270", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	public virtual string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60018C2")]
		[Address(RVA = "0x53362B0", Offset = "0x53352B0", VA = "0x53362B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x5336000", Offset = "0x5335000", VA = "0x5336000")]
	protected AsymmetricAlgorithm()
	{
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x5336010", Offset = "0x5335010", VA = "0x5336010", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x5336080", Offset = "0x5335080", VA = "0x5336080")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x53360F0", Offset = "0x53350F0", VA = "0x53360F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x53362F0", Offset = "0x53352F0", VA = "0x53362F0")]
	public static AsymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x5336330", Offset = "0x5335330", VA = "0x5336330")]
	public static AsymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x53363C0", Offset = "0x53353C0", VA = "0x53363C0", Slot = "11")]
	public virtual void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x5336400", Offset = "0x5335400", VA = "0x5336400", Slot = "12")]
	public virtual string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x5336440", Offset = "0x5335440", VA = "0x5336440", Slot = "13")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x5336480", Offset = "0x5335480", VA = "0x5336480", Slot = "14")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x53364C0", Offset = "0x53354C0", VA = "0x53364C0", Slot = "15")]
	public virtual byte[] ExportPkcs8PrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x5336500", Offset = "0x5335500", VA = "0x5336500", Slot = "16")]
	public virtual byte[] ExportSubjectPublicKeyInfo()
	{
		return null;
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x5336540", Offset = "0x5335540", VA = "0x5336540", Slot = "17")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x5336580", Offset = "0x5335580", VA = "0x5336580", Slot = "18")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x53365C0", Offset = "0x53355C0", VA = "0x53365C0", Slot = "19")]
	public virtual void ImportPkcs8PrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x5336600", Offset = "0x5335600", VA = "0x5336600", Slot = "20")]
	public virtual void ImportSubjectPublicKeyInfo(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x5336640", Offset = "0x5335640", VA = "0x5336640", Slot = "21")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x5336680", Offset = "0x5335680", VA = "0x5336680", Slot = "22")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x53366C0", Offset = "0x53356C0", VA = "0x53366C0", Slot = "23")]
	public virtual bool TryExportPkcs8PrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x5336700", Offset = "0x5335700", VA = "0x5336700", Slot = "24")]
	public virtual bool TryExportSubjectPublicKeyInfo(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
