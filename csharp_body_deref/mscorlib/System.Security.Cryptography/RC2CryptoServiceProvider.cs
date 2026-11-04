// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RC2CryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031F")]
[ComVisible(true)]
public sealed class RC2CryptoServiceProvider : RC2
{
	[Token(Token = "0x4000D38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool m_use40bitSalt;

	[Token(Token = "0x4000D39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BF")]
	public override int EffectiveKeySize
	{
		[Token(Token = "0x60019F9")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019FA")]
		[Address(RVA = "0x19ADFB0", Offset = "0x19AC5B0", VA = "0x1819ADFB0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	[ComVisible(false)]
	public bool UseSalt
	{
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x174C1E0", Offset = "0x174A7E0", VA = "0x18174C1E0")]
		set
		{
		}
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x19ADD70", Offset = "0x19AC370", VA = "0x1819ADD70")]
	public RC2CryptoServiceProvider()
	{
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x19ADA80", Offset = "0x19AC080", VA = "0x1819ADA80", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x19AD9B0", Offset = "0x19ABFB0", VA = "0x1819AD9B0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x19ADBF0", Offset = "0x19AC1F0", VA = "0x1819ADBF0", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x19ADB50", Offset = "0x19AC150", VA = "0x1819ADB50", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
