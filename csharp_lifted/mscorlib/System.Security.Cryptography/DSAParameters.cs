// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DSAParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Serializable]
[Token(Token = "0x20002E3")]
[ComVisible(true)]
public struct DSAParameters
{
	[Token(Token = "0x4000C6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte[] P;

	[Token(Token = "0x4000C6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public byte[] Q;

	[Token(Token = "0x4000C6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public byte[] G;

	[Token(Token = "0x4000C6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public byte[] Y;

	[Token(Token = "0x4000C6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public byte[] J;

	[NonSerialized]
	[Token(Token = "0x4000C70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public byte[] X;

	[Token(Token = "0x4000C71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public byte[] Seed;

	[Token(Token = "0x4000C72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int Counter;
}
