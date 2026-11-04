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

[Token(Token = "0x200004E")]
public sealed class PKCS8
{
	[Token(Token = "0x200004F")]
	public class PrivateKeyInfo
	{
		[Token(Token = "0x400021C")]
		[FieldOffset(Offset = "0x10")]
		private int _version;

		[Token(Token = "0x400021D")]
		[FieldOffset(Offset = "0x18")]
		private string _algorithm;

		[Token(Token = "0x400021E")]
		[FieldOffset(Offset = "0x20")]
		private byte[] _key;

		[Token(Token = "0x400021F")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _list;

		[Token(Token = "0x1700007B")]
		public string Algorithm
		{
			[Token(Token = "0x60001A8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001A9")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x1700007C")]
		public byte[] PrivateKey
		{
			[Token(Token = "0x60001AA")]
			[Address(RVA = "0x193AB00", Offset = "0x1939100", VA = "0x18193AB00")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001AB")]
			[Address(RVA = "0x193AB80", Offset = "0x1939180", VA = "0x18193AB80")]
			set
			{
			}
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x193AA00", Offset = "0x1939000", VA = "0x18193AA00")]
		public PrivateKeyInfo()
		{
		}

		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x193AA70", Offset = "0x1939070", VA = "0x18193AA70")]
		public PrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x1939D50", Offset = "0x1938350", VA = "0x181939D50")]
		private void Decode(byte[] data)
		{
		}

		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x193A4B0", Offset = "0x1938AB0", VA = "0x18193A4B0")]
		public byte[] GetBytes()
		{
			return null;
		}

		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x193A950", Offset = "0x1938F50", VA = "0x18193A950")]
		private static byte[] RemoveLeadingZero(byte[] bigInt)
		{
			return null;
		}

		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x193A8A0", Offset = "0x1938EA0", VA = "0x18193A8A0")]
		private static byte[] Normalize(byte[] bigInt, int length)
		{
			return null;
		}

		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x1939860", Offset = "0x1937E60", VA = "0x181939860")]
		public static RSA DecodeRSA(byte[] keypair)
		{
			return null;
		}

		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x193A0B0", Offset = "0x19386B0", VA = "0x18193A0B0")]
		public static byte[] Encode(RSA rsa)
		{
			return null;
		}

		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x19396A0", Offset = "0x1937CA0", VA = "0x1819396A0")]
		public static DSA DecodeDSA(byte[] privateKey, DSAParameters dsaParameters)
		{
			return null;
		}

		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x193A050", Offset = "0x1938650", VA = "0x18193A050")]
		public static byte[] Encode(DSA dsa)
		{
			return null;
		}

		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x193A2F0", Offset = "0x19388F0", VA = "0x18193A2F0")]
		public static byte[] Encode(AsymmetricAlgorithm aa)
		{
			return null;
		}
	}

	[Token(Token = "0x2000050")]
	public class EncryptedPrivateKeyInfo
	{
		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x10")]
		private string _algorithm;

		[Token(Token = "0x4000221")]
		[FieldOffset(Offset = "0x18")]
		private byte[] _salt;

		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x20")]
		private int _iterations;

		[Token(Token = "0x4000223")]
		[FieldOffset(Offset = "0x28")]
		private byte[] _data;

		[Token(Token = "0x1700007D")]
		public string Algorithm
		{
			[Token(Token = "0x60001B7")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001B8")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x1700007E")]
		public byte[] EncryptedData
		{
			[Token(Token = "0x60001B9")]
			[Address(RVA = "0x1931BC0", Offset = "0x19301C0", VA = "0x181931BC0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001BA")]
			[Address(RVA = "0x1931D10", Offset = "0x1930310", VA = "0x181931D10")]
			set
			{
			}
		}

		[Token(Token = "0x1700007F")]
		public byte[] Salt
		{
			[Token(Token = "0x60001BB")]
			[Address(RVA = "0x1931C40", Offset = "0x1930240", VA = "0x181931C40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000080")]
		public int IterationCount
		{
			[Token(Token = "0x60001BC")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60001BD")]
			[Address(RVA = "0x1931DB0", Offset = "0x19303B0", VA = "0x181931DB0")]
			set
			{
			}
		}

		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public EncryptedPrivateKeyInfo()
		{
		}

		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x1931B90", Offset = "0x1930190", VA = "0x181931B90")]
		public EncryptedPrivateKeyInfo(byte[] data)
		{
		}

		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x19315F0", Offset = "0x192FBF0", VA = "0x1819315F0")]
		private void Decode(byte[] data)
		{
		}

		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x19319A0", Offset = "0x192FFA0", VA = "0x1819319A0")]
		public byte[] GetBytes()
		{
			return null;
		}
	}
}
