using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000123")]
public sealed class TypeInitializationException : SystemException
{
	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x90")]
	private string _typeName;

	[Token(Token = "0x170000FD")]
	public string TypeName
	{
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x4FF1D10", Offset = "0x4FF1D10", VA = "0x4FF1D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4FF1930", Offset = "0x4FF1930", VA = "0x4FF1930")]
	private TypeInitializationException()
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4FF19E0", Offset = "0x4FF19E0", VA = "0x4FF19E0")]
	public TypeInitializationException(string fullTypeName, Exception innerException)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4FF1AA0", Offset = "0x4FF1AA0", VA = "0x4FF1AA0")]
	internal TypeInitializationException(string fullTypeName, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4FF1B30", Offset = "0x4FF1B30", VA = "0x4FF1B30")]
	internal TypeInitializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4FF1C20", Offset = "0x4FF1C20", VA = "0x4FF1C20", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
