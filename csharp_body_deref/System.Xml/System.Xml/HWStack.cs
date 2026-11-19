// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.HWStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BD")]
internal class HWStack : ICloneable
{
	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x10")]
	private object[] stack;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x18")]
	private int growthRate;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x1C")]
	private int used;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x20")]
	private int size;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x24")]
	private int limit;

	[Token(Token = "0x170002E0")]
	internal object this[int index]
	{
		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x60E7FA0", Offset = "0x60E6FA0", VA = "0x60E7FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x60E8010", Offset = "0x60E7010", VA = "0x60E8010")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	internal int Length
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x60E80C0", Offset = "0x60E70C0", VA = "0x60E80C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x60E7CD0", Offset = "0x60E6CD0", VA = "0x60E7CD0")]
	internal HWStack(int GrowthRate)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x60E7D40", Offset = "0x60E6D40", VA = "0x60E7D40")]
	internal HWStack(int GrowthRate, int limit)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x60E7DB0", Offset = "0x60E6DB0", VA = "0x60E7DB0")]
	internal object Push()
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x60E7EC0", Offset = "0x60E6EC0", VA = "0x60E7EC0")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x60E7F00", Offset = "0x60E6F00", VA = "0x60E7F00")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x60E7F30", Offset = "0x60E6F30", VA = "0x60E7F30")]
	internal void AddToTop(object o)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x60E80D0", Offset = "0x60E70D0", VA = "0x60E80D0")]
	private HWStack(object[] stack, int growthRate, int used, int size)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x60E8120", Offset = "0x60E7120", VA = "0x60E8120", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
