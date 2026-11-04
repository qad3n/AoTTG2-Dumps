// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005EA")]
internal readonly struct LayoutHandle
{
	[Token(Token = "0x400161A")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x400161B")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Version;

	[Token(Token = "0x17000AB5")]
	public static LayoutHandle Undefined
	{
		[Token(Token = "0x6002BCC")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x6002BCD")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	internal LayoutHandle(int index, int version)
	{
	}

	[Token(Token = "0x6002BCE")]
	[Address(RVA = "0x2ED5CB0", Offset = "0x2ED42B0", VA = "0x182ED5CB0")]
	public bool Equals(LayoutHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BCF")]
	[Address(RVA = "0x31A3ED0", Offset = "0x31A24D0", VA = "0x1831A3ED0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BD0")]
	[Address(RVA = "0x2F6AE60", Offset = "0x2F69460", VA = "0x182F6AE60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
