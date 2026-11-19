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
[Token(Token = "0x20003F9")]
[ComVisible(true)]
public readonly struct StreamingContext
{
	[Token(Token = "0x4000F8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object m_additionalContext;

	[Token(Token = "0x4000F8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly StreamingContextStates m_state;

	[Token(Token = "0x1700044C")]
	public object Context
	{
		[Token(Token = "0x6002071")]
		[Address(RVA = "0x53A7FE0", Offset = "0x53A6FE0", VA = "0x53A7FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044D")]
	public StreamingContextStates State
	{
		[Token(Token = "0x6002074")]
		[Address(RVA = "0x53A8080", Offset = "0x53A7080", VA = "0x53A8080")]
		get
		{
			return default(StreamingContextStates);
		}
	}

	[Token(Token = "0x600206F")]
	[Address(RVA = "0x53A7FB0", Offset = "0x53A6FB0", VA = "0x53A7FB0")]
	public StreamingContext(StreamingContextStates state)
	{
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x53A7FD0", Offset = "0x53A6FD0", VA = "0x53A7FD0")]
	public StreamingContext(StreamingContextStates state, object additional)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x53A7FF0", Offset = "0x53A6FF0", VA = "0x53A7FF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x53A8070", Offset = "0x53A7070", VA = "0x53A8070", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
