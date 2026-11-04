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
		[Address(RVA = "0x2728820", Offset = "0x2726E20", VA = "0x182728820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x27288A0", Offset = "0x2726EA0", VA = "0x1827288A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	internal int Length
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x27287A0", Offset = "0x2726DA0", VA = "0x1827287A0")]
	internal HWStack(int GrowthRate)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x2728720", Offset = "0x2726D20", VA = "0x182728720")]
	internal HWStack(int GrowthRate, int limit)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x27285A0", Offset = "0x2726BA0", VA = "0x1827285A0")]
	internal object Push()
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x2728560", Offset = "0x2726B60", VA = "0x182728560")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x2728520", Offset = "0x2726B20", VA = "0x182728520")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x2728380", Offset = "0x2726980", VA = "0x182728380")]
	internal void AddToTop(object o)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x27286D0", Offset = "0x2726CD0", VA = "0x1827286D0")]
	private HWStack(object[] stack, int growthRate, int used, int size)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x2728410", Offset = "0x2726A10", VA = "0x182728410", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
