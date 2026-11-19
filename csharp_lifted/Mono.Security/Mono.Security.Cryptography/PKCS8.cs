// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.PKCS8
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200003B")]
public sealed class PKCS8
{
	[Token(Token = "0x200003C")]
	public class PrivateKeyInfo
	{
		[Token(Token = "0x4000212")]
		[FieldOffset(Offset = "0x10")]
		private int _version;

		[Token(Token = "0x4000213")]
		[FieldOffset(Offset = "0x18")]
		private string _algorithm;

		[Token(Token = "0x4000214")]
		[FieldOffset(Offset = "0x20")]
		private byte[] _key;

		[Token(Token = "0x4000215")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _list;

		[Token(Token = "0x17000078")]
		public string Algorithm
		{
			[Token(Token = "0x6000180")]
			[Address(RVA = "0x52CB1E0", Offset = "0x52CA1E0", VA = "0x52CB1E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000079")]
		public byte[] PrivateKey
		{
			[Token(Token = "0x6000181")]
			[Address(RVA = "0x52CB1F0", Offset = "0x52CA1F0", VA = "0x52CB1F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600017E")]
		[Address(RVA = "0x52CAE70", Offset = "0x52C9E70", VA = "0x52CAE70")]
		public PrivateKeyInfo()
		{
		}

		[Token(Token = "0x600017F")]
		[Address(RVA = "0x52CAEE0", Offset = "0x52C9EE0", VA = "0x52CAEE0")]
		public PrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000182")]
		[Address(RVA = "0x52CAF60", Offset = "0x52C9F60", VA = "0x52CAF60")]
		private void Decode(byte[] data)
		{
		}

		[Token(Token = "0x6000183")]
		[Address(RVA = "0x52CB260", Offset = "0x52CA260", VA = "0x52CB260")]
		private static byte[] RemoveLeadingZero(byte[] bigInt)
		{
			return null;
		}

		[Token(Token = "0x6000184")]
		[Address(RVA = "0x52CB2E0", Offset = "0x52CA2E0", VA = "0x52CB2E0")]
		private static byte[] Normalize(byte[] bigInt, int length)
		{
			return null;
		}

		[Token(Token = "0x6000185")]
		[Address(RVA = "0x52CB3D0", Offset = "0x52CA3D0", VA = "0x52CB3D0")]
		public static RSA DecodeRSA(byte[] keypair)
		{
			return null;
		}

		[Token(Token = "0x6000186")]
		[Address(RVA = "0x52CB970", Offset = "0x52CA970", VA = "0x52CB970")]
		public static byte[] Encode(RSA rsa)
		{
			return null;
		}

		[Token(Token = "0x6000187")]
		[Address(RVA = "0x52CBB70", Offset = "0x52CAB70", VA = "0x52CBB70")]
		public static DSA DecodeDSA(byte[] privateKey, DSAParameters dsaParameters)
		{
			return null;
		}

		[Token(Token = "0x6000188")]
		[Address(RVA = "0x52CBCA0", Offset = "0x52CACA0", VA = "0x52CBCA0")]
		public static byte[] Encode(DSA dsa)
		{
			return null;
		}

		[Token(Token = "0x6000189")]
		[Address(RVA = "0x52CBD00", Offset = "0x52CAD00", VA = "0x52CBD00")]
		public static byte[] Encode(AsymmetricAlgorithm aa)
		{
			return null;
		}
	}

	[Token(Token = "0x200003D")]
	public class EncryptedPrivateKeyInfo
	{
		[Token(Token = "0x4000216")]
		[FieldOffset(Offset = "0x10")]
		private string _algorithm;

		[Token(Token = "0x4000217")]
		[FieldOffset(Offset = "0x18")]
		private byte[] _salt;

		[Token(Token = "0x4000218")]
		[FieldOffset(Offset = "0x20")]
		private int _iterations;

		[Token(Token = "0x4000219")]
		[FieldOffset(Offset = "0x28")]
		private byte[] _data;

		[Token(Token = "0x1700007A")]
		public string Algorithm
		{
			[Token(Token = "0x600018C")]
			[Address(RVA = "0x52CC190", Offset = "0x52CB190", VA = "0x52CC190")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007B")]
		public byte[] EncryptedData
		{
			[Token(Token = "0x600018D")]
			[Address(RVA = "0x52CC1A0", Offset = "0x52CB1A0", VA = "0x52CC1A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public byte[] Salt
		{
			[Token(Token = "0x600018E")]
			[Address(RVA = "0x52CC210", Offset = "0x52CB210", VA = "0x52CC210")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public int IterationCount
		{
			[Token(Token = "0x600018F")]
			[Address(RVA = "0x52CC2E0", Offset = "0x52CB2E0", VA = "0x52CC2E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600018A")]
		[Address(RVA = "0x52CBE60", Offset = "0x52CAE60", VA = "0x52CBE60")]
		public EncryptedPrivateKeyInfo()
		{
		}

		[Token(Token = "0x600018B")]
		[Address(RVA = "0x52CBE70", Offset = "0x52CAE70", VA = "0x52CBE70")]
		public EncryptedPrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000190")]
		[Address(RVA = "0x52CBEA0", Offset = "0x52CAEA0", VA = "0x52CBEA0")]
		private void Decode(byte[] data)
		{
		}
	}
}
