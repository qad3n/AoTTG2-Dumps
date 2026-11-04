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

[Token(Token = "0x20002F8")]
[ComVisible(true)]
public abstract class AsymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000CDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int KeySizeValue;

	[Token(Token = "0x4000CDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x17000290")]
	public virtual int KeySize
	{
		[Token(Token = "0x60018E1")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018E2")]
		[Address(RVA = "0x19A2F30", Offset = "0x19A1530", VA = "0x1819A2F30", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000291")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x60018E3")]
		[Address(RVA = "0x19A2E70", Offset = "0x19A1470", VA = "0x1819A2E70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	public virtual string SignatureAlgorithm
	{
		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x19A2EF0", Offset = "0x19A14F0", VA = "0x1819A2EF0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000293")]
	public virtual string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60018E5")]
		[Address(RVA = "0x19A2E30", Offset = "0x19A1430", VA = "0x1819A2E30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AsymmetricAlgorithm()
	{
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x19A2960", Offset = "0x19A0F60", VA = "0x1819A2960", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x19A2960", Offset = "0x19A0F60", VA = "0x1819A2960")]
	public void Clear()
	{
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x19A2A60", Offset = "0x19A1060", VA = "0x1819A2A60")]
	public static AsymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x19A29C0", Offset = "0x19A0FC0", VA = "0x1819A29C0")]
	public static AsymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x19A2BB0", Offset = "0x19A11B0", VA = "0x1819A2BB0", Slot = "11")]
	public virtual void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x19A2CF0", Offset = "0x19A12F0", VA = "0x1819A2CF0", Slot = "12")]
	public virtual string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x19A2AB0", Offset = "0x19A10B0", VA = "0x1819A2AB0", Slot = "13")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x19A2AF0", Offset = "0x19A10F0", VA = "0x1819A2AF0", Slot = "14")]
	public virtual byte[] ExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters)
	{
		return null;
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x19A2B30", Offset = "0x19A1130", VA = "0x1819A2B30", Slot = "15")]
	public virtual byte[] ExportPkcs8PrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x19A2B70", Offset = "0x19A1170", VA = "0x1819A2B70", Slot = "16")]
	public virtual byte[] ExportSubjectPublicKeyInfo()
	{
		return null;
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x19A2BF0", Offset = "0x19A11F0", VA = "0x1819A2BF0", Slot = "17")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x19A2C30", Offset = "0x19A1230", VA = "0x1819A2C30", Slot = "18")]
	public virtual void ImportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x19A2C70", Offset = "0x19A1270", VA = "0x1819A2C70", Slot = "19")]
	public virtual void ImportPkcs8PrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x19A2CB0", Offset = "0x19A12B0", VA = "0x1819A2CB0", Slot = "20")]
	public virtual void ImportSubjectPublicKeyInfo(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x19A2D30", Offset = "0x19A1330", VA = "0x1819A2D30", Slot = "21")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<byte> passwordBytes, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x19A2D70", Offset = "0x19A1370", VA = "0x1819A2D70", Slot = "22")]
	public virtual bool TryExportEncryptedPkcs8PrivateKey(ReadOnlySpan<char> password, PbeParameters pbeParameters, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x19A2DB0", Offset = "0x19A13B0", VA = "0x1819A2DB0", Slot = "23")]
	public virtual bool TryExportPkcs8PrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x19A2DF0", Offset = "0x19A13F0", VA = "0x1819A2DF0", Slot = "24")]
	public virtual bool TryExportSubjectPublicKeyInfo(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
