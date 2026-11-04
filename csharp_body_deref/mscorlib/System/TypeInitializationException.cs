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
[Token(Token = "0x200014A")]
public sealed class TypeInitializationException : SystemException
{
	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x90")]
	private string _typeName;

	[Token(Token = "0x170000FE")]
	public string TypeName
	{
		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x1B44D50", Offset = "0x1B43350", VA = "0x181B44D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x1B50240", Offset = "0x1B4E840", VA = "0x181B50240")]
	private TypeInitializationException()
	{
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x1B502D0", Offset = "0x1B4E8D0", VA = "0x181B502D0")]
	public TypeInitializationException(string fullTypeName, Exception innerException)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x1B50460", Offset = "0x1B4EA60", VA = "0x181B50460")]
	internal TypeInitializationException(string fullTypeName, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x1B50390", Offset = "0x1B4E990", VA = "0x181B50390")]
	internal TypeInitializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x1B50150", Offset = "0x1B4E750", VA = "0x181B50150", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
