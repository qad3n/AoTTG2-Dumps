// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeInitializationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000123")]
public sealed class TypeInitializationException : SystemException
{
	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x90")]
	private string _typeName;

	[Token(Token = "0x170000FE")]
	public string TypeName
	{
		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x54DB890", Offset = "0x54DA890", VA = "0x54DB890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x54DB4B0", Offset = "0x54DA4B0", VA = "0x54DB4B0")]
	private TypeInitializationException()
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x54DB560", Offset = "0x54DA560", VA = "0x54DB560")]
	public TypeInitializationException(string fullTypeName, Exception innerException)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x54DB620", Offset = "0x54DA620", VA = "0x54DB620")]
	internal TypeInitializationException(string fullTypeName, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x54DB6B0", Offset = "0x54DA6B0", VA = "0x54DB6B0")]
	internal TypeInitializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x54DB7A0", Offset = "0x54DA7A0", VA = "0x54DB7A0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
