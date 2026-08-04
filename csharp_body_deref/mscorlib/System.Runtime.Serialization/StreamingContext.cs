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
[Token(Token = "0x20003F1")]
[ComVisible(true)]
public readonly struct StreamingContext
{
	[Token(Token = "0x400102C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object m_additionalContext;

	[Token(Token = "0x400102D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly StreamingContextStates m_state;

	[Token(Token = "0x1700044B")]
	public object Context
	{
		[Token(Token = "0x600202C")]
		[Address(RVA = "0x3BA0AF0", Offset = "0x3BA0AF0", VA = "0x3BA0AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	public StreamingContextStates State
	{
		[Token(Token = "0x600202F")]
		[Address(RVA = "0x3BA0B90", Offset = "0x3BA0B90", VA = "0x3BA0B90")]
		get
		{
			return default(StreamingContextStates);
		}
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x3BA0AC0", Offset = "0x3BA0AC0", VA = "0x3BA0AC0")]
	public StreamingContext(StreamingContextStates state)
	{
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x3BA0AE0", Offset = "0x3BA0AE0", VA = "0x3BA0AE0")]
	public StreamingContext(StreamingContextStates state, object additional)
	{
	}

	[Token(Token = "0x600202D")]
	[Address(RVA = "0x3BA0B00", Offset = "0x3BA0B00", VA = "0x3BA0B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600202E")]
	[Address(RVA = "0x3BA0B80", Offset = "0x3BA0B80", VA = "0x3BA0B80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
