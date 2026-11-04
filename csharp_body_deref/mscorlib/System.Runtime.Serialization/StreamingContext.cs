// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.StreamingContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x2000420")]
[ComVisible(true)]
public readonly struct StreamingContext
{
	[Token(Token = "0x400102E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object m_additionalContext;

	[Token(Token = "0x400102F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly StreamingContextStates m_state;

	[Token(Token = "0x1700044D")]
	public object Context
	{
		[Token(Token = "0x600209B")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044E")]
	public StreamingContextStates State
	{
		[Token(Token = "0x600209E")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(StreamingContextStates);
		}
	}

	[Token(Token = "0x6002099")]
	[Address(RVA = "0x1A221F0", Offset = "0x1A207F0", VA = "0x181A221F0")]
	public StreamingContext(StreamingContextStates state)
	{
	}

	[Token(Token = "0x600209A")]
	[Address(RVA = "0x1A22210", Offset = "0x1A20810", VA = "0x181A22210")]
	public StreamingContext(StreamingContextStates state, object additional)
	{
	}

	[Token(Token = "0x600209C")]
	[Address(RVA = "0x1A22140", Offset = "0x1A20740", VA = "0x181A22140", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600209D")]
	[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
