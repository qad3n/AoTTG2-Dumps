// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentOutOfRangeException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B5")]
public class ArgumentOutOfRangeException : ArgumentException
{
	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x98")]
	private object _actualValue;

	[Token(Token = "0x17000057")]
	public override string Message
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x1A783E0", Offset = "0x1A769E0", VA = "0x181A783E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x1A782D0", Offset = "0x1A768D0", VA = "0x181A782D0")]
	public ArgumentOutOfRangeException()
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x1A78320", Offset = "0x1A76920", VA = "0x181A78320")]
	public ArgumentOutOfRangeException(string paramName)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x1A78390", Offset = "0x1A76990", VA = "0x181A78390")]
	public ArgumentOutOfRangeException(string paramName, string message)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x1A78150", Offset = "0x1A76750", VA = "0x181A78150")]
	public ArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x1A781C0", Offset = "0x1A767C0", VA = "0x181A781C0")]
	protected ArgumentOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x1A78030", Offset = "0x1A76630", VA = "0x181A78030", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
