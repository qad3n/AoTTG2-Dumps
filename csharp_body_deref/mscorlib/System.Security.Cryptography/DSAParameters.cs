using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002DB")]
[ComVisible(true)]
public struct DSAParameters
{
	[Token(Token = "0x4000CFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte[] P;

	[Token(Token = "0x4000CFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public byte[] Q;

	[Token(Token = "0x4000D00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public byte[] G;

	[Token(Token = "0x4000D01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public byte[] Y;

	[Token(Token = "0x4000D02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public byte[] J;

	[NonSerialized]
	[Token(Token = "0x4000D03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public byte[] X;

	[Token(Token = "0x4000D04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public byte[] Seed;

	[Token(Token = "0x4000D05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int Counter;
}
