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
[Token(Token = "0x20004B0")]
public sealed class RuntimeWrappedException : Exception
{
	[Token(Token = "0x4001305")]
	[FieldOffset(Offset = "0x90")]
	private object _wrappedException;

	[Token(Token = "0x17000477")]
	public object WrappedException
	{
		[Token(Token = "0x6002308")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002305")]
	[Address(RVA = "0x1A36DA0", Offset = "0x1A353A0", VA = "0x181A36DA0")]
	public RuntimeWrappedException(object thrownObject)
	{
	}

	[Token(Token = "0x6002306")]
	[Address(RVA = "0x1A36CC0", Offset = "0x1A352C0", VA = "0x181A36CC0")]
	private RuntimeWrappedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002307")]
	[Address(RVA = "0x1A36BD0", Offset = "0x1A351D0", VA = "0x181A36BD0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002309")]
	[Address(RVA = "0x1A36C90", Offset = "0x1A35290", VA = "0x181A36C90")]
	internal RuntimeWrappedException()
	{
	}
}
