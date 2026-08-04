// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.RuntimeWrappedException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000481")]
public sealed class RuntimeWrappedException : Exception
{
	[Token(Token = "0x4001303")]
	[FieldOffset(Offset = "0x90")]
	private object _wrappedException;

	[Token(Token = "0x17000474")]
	public object WrappedException
	{
		[Token(Token = "0x6002288")]
		[Address(RVA = "0x3BC12C0", Offset = "0x3BC12C0", VA = "0x3BC12C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002285")]
	[Address(RVA = "0x3BC10A0", Offset = "0x3BC10A0", VA = "0x3BC10A0")]
	public RuntimeWrappedException(object thrownObject)
	{
	}

	[Token(Token = "0x6002286")]
	[Address(RVA = "0x3BC1130", Offset = "0x3BC1130", VA = "0x3BC1130")]
	private RuntimeWrappedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002287")]
	[Address(RVA = "0x3BC1210", Offset = "0x3BC1210", VA = "0x3BC1210", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002289")]
	[Address(RVA = "0x3BC12D0", Offset = "0x3BC12D0", VA = "0x3BC12D0")]
	internal RuntimeWrappedException()
	{
	}
}
