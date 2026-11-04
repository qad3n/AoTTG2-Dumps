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
[Token(Token = "0x200030A")]
[ComVisible(true)]
public struct DSAParameters
{
	[Token(Token = "0x4000D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public byte[] P;

	[Token(Token = "0x4000D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public byte[] Q;

	[Token(Token = "0x4000D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public byte[] G;

	[Token(Token = "0x4000D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public byte[] Y;

	[Token(Token = "0x4000D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public byte[] J;

	[NonSerialized]
	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public byte[] X;

	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public byte[] Seed;

	[Token(Token = "0x4000D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int Counter;
}
