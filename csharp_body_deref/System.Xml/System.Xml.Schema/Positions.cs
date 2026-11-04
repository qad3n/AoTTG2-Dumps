// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Positions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000174")]
internal class Positions
{
	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList positions;

	[Token(Token = "0x1700041B")]
	public Position this[int pos]
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x2783970", Offset = "0x2781F70", VA = "0x182783970")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700041C")]
	public int Count
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x2783850", Offset = "0x2781E50", VA = "0x182783850")]
	public int Add(int symbol, object particle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x2783900", Offset = "0x2781F00", VA = "0x182783900")]
	public Positions()
	{
	}
}
