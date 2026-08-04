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
			[Address(RVA = "0x3ABF5D0", Offset = "0x3ABF5D0", VA = "0x3ABF5D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000079")]
		public byte[] PrivateKey
		{
			[Token(Token = "0x6000181")]
			[Address(RVA = "0x3ABF5E0", Offset = "0x3ABF5E0", VA = "0x3ABF5E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3ABF260", Offset = "0x3ABF260", VA = "0x3ABF260")]
		public PrivateKeyInfo()
		{
		}

		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3ABF2D0", Offset = "0x3ABF2D0", VA = "0x3ABF2D0")]
		public PrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000182")]
		[Address(RVA = "0x3ABF350", Offset = "0x3ABF350", VA = "0x3ABF350")]
		private void Decode(byte[] data)
		{
		}

		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3ABF650", Offset = "0x3ABF650", VA = "0x3ABF650")]
		private static byte[] RemoveLeadingZero(byte[] bigInt)
		{
			return null;
		}

		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3ABF6D0", Offset = "0x3ABF6D0", VA = "0x3ABF6D0")]
		private static byte[] Normalize(byte[] bigInt, int length)
		{
			return null;
		}

		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3ABF7C0", Offset = "0x3ABF7C0", VA = "0x3ABF7C0")]
		public static RSA DecodeRSA(byte[] keypair)
		{
			return null;
		}

		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3ABFDF0", Offset = "0x3ABFDF0", VA = "0x3ABFDF0")]
		public static byte[] Encode(RSA rsa)
		{
			return null;
		}

		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3ABFFF0", Offset = "0x3ABFFF0", VA = "0x3ABFFF0")]
		public static DSA DecodeDSA(byte[] privateKey, DSAParameters dsaParameters)
		{
			return null;
		}

		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3AC0150", Offset = "0x3AC0150", VA = "0x3AC0150")]
		public static byte[] Encode(DSA dsa)
		{
			return null;
		}

		[Token(Token = "0x6000189")]
		[Address(RVA = "0x3AC01B0", Offset = "0x3AC01B0", VA = "0x3AC01B0")]
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
			[Address(RVA = "0x3AC0630", Offset = "0x3AC0630", VA = "0x3AC0630")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007B")]
		public byte[] EncryptedData
		{
			[Token(Token = "0x600018D")]
			[Address(RVA = "0x3AC0640", Offset = "0x3AC0640", VA = "0x3AC0640")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public byte[] Salt
		{
			[Token(Token = "0x600018E")]
			[Address(RVA = "0x3AC06B0", Offset = "0x3AC06B0", VA = "0x3AC06B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public int IterationCount
		{
			[Token(Token = "0x600018F")]
			[Address(RVA = "0x3AC0780", Offset = "0x3AC0780", VA = "0x3AC0780")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600018A")]
		[Address(RVA = "0x3AC0310", Offset = "0x3AC0310", VA = "0x3AC0310")]
		public EncryptedPrivateKeyInfo()
		{
		}

		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3AC0320", Offset = "0x3AC0320", VA = "0x3AC0320")]
		public EncryptedPrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000190")]
		[Address(RVA = "0x3AC0340", Offset = "0x3AC0340", VA = "0x3AC0340")]
		private void Decode(byte[] data)
		{
		}
	}
}
