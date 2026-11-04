// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x2000326")]
[ComVisible(true)]
public struct RSAParameters
{
	[Token(Token = "0x4000D5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte[] Exponent;

	[Token(Token = "0x4000D5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public byte[] Modulus;

	[NonSerialized]
	[Token(Token = "0x4000D5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public byte[] P;

	[NonSerialized]
	[Token(Token = "0x4000D5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public byte[] Q;

	[NonSerialized]
	[Token(Token = "0x4000D5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public byte[] DP;

	[NonSerialized]
	[Token(Token = "0x4000D60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public byte[] DQ;

	[NonSerialized]
	[Token(Token = "0x4000D61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public byte[] InverseQ;

	[NonSerialized]
	[Token(Token = "0x4000D62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public byte[] D;
}
