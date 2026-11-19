// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BMPAlloc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005C9")]
internal struct BMPAlloc
{
	[Token(Token = "0x4001517")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BMPAlloc Invalid;

	[Token(Token = "0x4001518")]
	[FieldOffset(Offset = "0x0")]
	public int page;

	[Token(Token = "0x4001519")]
	[FieldOffset(Offset = "0x4")]
	public ushort pageLine;

	[Token(Token = "0x400151A")]
	[FieldOffset(Offset = "0x6")]
	public byte bitIndex;

	[Token(Token = "0x400151B")]
	[FieldOffset(Offset = "0x7")]
	public OwnedState ownedState;

	[Token(Token = "0x6002B1E")]
	[Address(RVA = "0x6BA9030", Offset = "0x6BA8030", VA = "0x6BA9030")]
	public bool Equals(BMPAlloc other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B1F")]
	[Address(RVA = "0x6BACBB0", Offset = "0x6BABBB0", VA = "0x6BACBB0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B20")]
	[Address(RVA = "0x6BACBC0", Offset = "0x6BABBC0", VA = "0x6BACBC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
