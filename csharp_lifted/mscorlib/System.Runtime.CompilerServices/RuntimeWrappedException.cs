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
[Token(Token = "0x2000489")]
public sealed class RuntimeWrappedException : Exception
{
	[Token(Token = "0x4001265")]
	[FieldOffset(Offset = "0x90")]
	private object _wrappedException;

	[Token(Token = "0x17000476")]
	public object WrappedException
	{
		[Token(Token = "0x60022D5")]
		[Address(RVA = "0x53C8BE0", Offset = "0x53C7BE0", VA = "0x53C8BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022D2")]
	[Address(RVA = "0x53C89C0", Offset = "0x53C79C0", VA = "0x53C89C0")]
	public RuntimeWrappedException(object thrownObject)
	{
	}

	[Token(Token = "0x60022D3")]
	[Address(RVA = "0x53C8A50", Offset = "0x53C7A50", VA = "0x53C8A50")]
	private RuntimeWrappedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60022D4")]
	[Address(RVA = "0x53C8B30", Offset = "0x53C7B30", VA = "0x53C8B30", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60022D6")]
	[Address(RVA = "0x53C8BF0", Offset = "0x53C7BF0", VA = "0x53C8BF0")]
	internal RuntimeWrappedException()
	{
	}
}
