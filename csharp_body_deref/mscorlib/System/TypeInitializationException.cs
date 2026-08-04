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
	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x90")]
	private string _typeName;

	[Token(Token = "0x170000FD")]
	public string TypeName
	{
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x3CD7830", Offset = "0x3CD7830", VA = "0x3CD7830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x3CD7450", Offset = "0x3CD7450", VA = "0x3CD7450")]
	private TypeInitializationException()
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x3CD7500", Offset = "0x3CD7500", VA = "0x3CD7500")]
	public TypeInitializationException(string fullTypeName, Exception innerException)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x3CD75C0", Offset = "0x3CD75C0", VA = "0x3CD75C0")]
	internal TypeInitializationException(string fullTypeName, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x3CD7650", Offset = "0x3CD7650", VA = "0x3CD7650")]
	internal TypeInitializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x3CD7740", Offset = "0x3CD7740", VA = "0x3CD7740", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
