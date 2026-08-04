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
		[Address(RVA = "0x47E5560", Offset = "0x47E5560", VA = "0x47E5560")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x47E55D0", Offset = "0x47E55D0", VA = "0x47E55D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	internal int Length
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x47E5680", Offset = "0x47E5680", VA = "0x47E5680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x47E5280", Offset = "0x47E5280", VA = "0x47E5280")]
	internal HWStack(int GrowthRate)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x47E52F0", Offset = "0x47E52F0", VA = "0x47E52F0")]
	internal HWStack(int GrowthRate, int limit)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x47E5360", Offset = "0x47E5360", VA = "0x47E5360")]
	internal object Push()
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x47E5470", Offset = "0x47E5470", VA = "0x47E5470")]
	internal object Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x47E54B0", Offset = "0x47E54B0", VA = "0x47E54B0")]
	internal object Peek()
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x47E54E0", Offset = "0x47E54E0", VA = "0x47E54E0")]
	internal void AddToTop(object o)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x47E5690", Offset = "0x47E5690", VA = "0x47E5690")]
	private HWStack(object[] stack, int growthRate, int used, int size)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x47E56E0", Offset = "0x47E56E0", VA = "0x47E56E0", Slot = "4")]
	public object Clone()
	{
		return null;
	}
}
