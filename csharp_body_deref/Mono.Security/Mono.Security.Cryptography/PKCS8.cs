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
			[Address(RVA = "0x3A52910", Offset = "0x3A52910", VA = "0x3A52910")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000079")]
		public byte[] PrivateKey
		{
			[Token(Token = "0x6000181")]
			[Address(RVA = "0x3A52920", Offset = "0x3A52920", VA = "0x3A52920")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3A525A0", Offset = "0x3A525A0", VA = "0x3A525A0")]
		public PrivateKeyInfo()
		{
		}

		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3A52610", Offset = "0x3A52610", VA = "0x3A52610")]
		public PrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000182")]
		[Address(RVA = "0x3A52690", Offset = "0x3A52690", VA = "0x3A52690")]
		private void Decode(byte[] data)
		{
		}

		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3A52990", Offset = "0x3A52990", VA = "0x3A52990")]
		private static byte[] RemoveLeadingZero(byte[] bigInt)
		{
			return null;
		}

		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3A52A10", Offset = "0x3A52A10", VA = "0x3A52A10")]
		private static byte[] Normalize(byte[] bigInt, int length)
		{
			return null;
		}

		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3A52B00", Offset = "0x3A52B00", VA = "0x3A52B00")]
		public static RSA DecodeRSA(byte[] keypair)
		{
			return null;
		}

		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3A53130", Offset = "0x3A53130", VA = "0x3A53130")]
		public static byte[] Encode(RSA rsa)
		{
			return null;
		}

		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3A53330", Offset = "0x3A53330", VA = "0x3A53330")]
		public static DSA DecodeDSA(byte[] privateKey, DSAParameters dsaParameters)
		{
			return null;
		}

		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3A53490", Offset = "0x3A53490", VA = "0x3A53490")]
		public static byte[] Encode(DSA dsa)
		{
			return null;
		}

		[Token(Token = "0x6000189")]
		[Address(RVA = "0x3A534F0", Offset = "0x3A534F0", VA = "0x3A534F0")]
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
			[Address(RVA = "0x3A53970", Offset = "0x3A53970", VA = "0x3A53970")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007B")]
		public byte[] EncryptedData
		{
			[Token(Token = "0x600018D")]
			[Address(RVA = "0x3A53980", Offset = "0x3A53980", VA = "0x3A53980")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public byte[] Salt
		{
			[Token(Token = "0x600018E")]
			[Address(RVA = "0x3A539F0", Offset = "0x3A539F0", VA = "0x3A539F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public int IterationCount
		{
			[Token(Token = "0x600018F")]
			[Address(RVA = "0x3A53AC0", Offset = "0x3A53AC0", VA = "0x3A53AC0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600018A")]
		[Address(RVA = "0x3A53650", Offset = "0x3A53650", VA = "0x3A53650")]
		public EncryptedPrivateKeyInfo()
		{
		}

		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3A53660", Offset = "0x3A53660", VA = "0x3A53660")]
		public EncryptedPrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x6000190")]
		[Address(RVA = "0x3A53680", Offset = "0x3A53680", VA = "0x3A53680")]
		private void Decode(byte[] data)
		{
		}
	}
}
