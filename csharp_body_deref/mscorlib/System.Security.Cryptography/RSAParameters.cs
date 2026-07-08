using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002F7")]
[ComVisible(true)]
public struct RSAParameters
{
	[Token(Token = "0x4000D4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte[] Exponent;

	[Token(Token = "0x4000D4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public byte[] Modulus;

	[NonSerialized]
	[Token(Token = "0x4000D50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public byte[] P;

	[NonSerialized]
	[Token(Token = "0x4000D51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public byte[] Q;

	[NonSerialized]
	[Token(Token = "0x4000D52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public byte[] DP;

	[NonSerialized]
	[Token(Token = "0x4000D53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public byte[] DQ;

	[NonSerialized]
	[Token(Token = "0x4000D54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public byte[] InverseQ;

	[NonSerialized]
	[Token(Token = "0x4000D55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public byte[] D;
}
