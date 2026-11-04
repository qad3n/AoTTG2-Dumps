// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Long1024
// Update status: NEW in this game update
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
		[Address(RVA = "0x868160", Offset = "0x866760", VA = "0x180868160", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x29B0F30", Offset = "0x29AF530", VA = "0x1829B0F30", Slot = "6")]
	public unsafe ref long ElementAt(int index)
	{
		return ref *(long*)null;
	}
}
