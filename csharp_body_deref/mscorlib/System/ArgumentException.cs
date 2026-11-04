// ==================== AoTTG2 cross-reference ====================
// Type: System.ArgumentException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B3")]
public class ArgumentException : SystemException
{
	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x90")]
	private string _paramName;

	[Token(Token = "0x17000056")]
	public override string Message
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x1A77E80", Offset = "0x1A76480", VA = "0x181A77E80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x1A77CE0", Offset = "0x1A762E0", VA = "0x181A77CE0")]
	public ArgumentException()
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x1A77CC0", Offset = "0x1A762C0", VA = "0x181A77CC0")]
	public ArgumentException(string message)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x1A77E60", Offset = "0x1A76460", VA = "0x181A77E60")]
	public ArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x1A77D30", Offset = "0x1A76330", VA = "0x181A77D30")]
	public ArgumentException(string message, string paramName, Exception innerException)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x1A77D80", Offset = "0x1A76380", VA = "0x181A77D80")]
	public ArgumentException(string message, string paramName)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x1A77DC0", Offset = "0x1A763C0", VA = "0x181A77DC0")]
	protected ArgumentException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x1A77C00", Offset = "0x1A76200", VA = "0x181A77C00", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
