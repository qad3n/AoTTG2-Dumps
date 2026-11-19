// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Long1024
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000041")]
internal struct Long1024 : IIndexable<long>
{
	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x0")]
	internal Long512 f0;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x1000")]
	internal Long512 f1;

	[Token(Token = "0x1700002C")]
	public int Length
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x635FFB0", Offset = "0x635EFB0", VA = "0x635FFB0", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x635FFC0", Offset = "0x635EFC0", VA = "0x635FFC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x635B2D0", Offset = "0x635A2D0", VA = "0x635B2D0", Slot = "6")]
	public unsafe ref long ElementAt(int index)
	{
		return ref *(long*)null;
	}
}
