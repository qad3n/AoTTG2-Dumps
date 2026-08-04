// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004F4")]
internal readonly struct LayoutHandle
{
	[Token(Token = "0x4001085")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Version;

	[Token(Token = "0x170007A5")]
	public static LayoutHandle Undefined
	{
		[Token(Token = "0x6001E8D")]
		[Address(RVA = "0x4FB42D0", Offset = "0x4FB42D0", VA = "0x4FB42D0")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x4FB4420", Offset = "0x4FB4420", VA = "0x4FB4420")]
	internal LayoutHandle(int index, int version)
	{
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x4FB4320", Offset = "0x4FB4320", VA = "0x4FB4320")]
	public bool Equals(LayoutHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x4FB4430", Offset = "0x4FB4430", VA = "0x4FB4430", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x4FB44A0", Offset = "0x4FB44A0", VA = "0x4FB44A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
