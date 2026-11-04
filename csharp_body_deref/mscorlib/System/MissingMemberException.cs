// ==================== AoTTG2 cross-reference ====================
// Type: System.MissingMemberException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200016C")]
public class MissingMemberException : MemberAccessException
{
	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x90")]
	protected string ClassName;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x98")]
	protected string MemberName;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0xA0")]
	protected byte[] Signature;

	[Token(Token = "0x17000116")]
	public override string Message
	{
		[Token(Token = "0x6000CD6")]
		[Address(RVA = "0x1B44880", Offset = "0x1B42E80", VA = "0x181B44880", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x1B44600", Offset = "0x1B42C00", VA = "0x181B44600")]
	public MissingMemberException()
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x1B44650", Offset = "0x1B42C50", VA = "0x181B44650")]
	public MissingMemberException(string message)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x1B44820", Offset = "0x1B42E20", VA = "0x181B44820")]
	public MissingMemberException(string className, string memberName)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x1B44670", Offset = "0x1B42C70", VA = "0x181B44670")]
	protected MissingMemberException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x1B44460", Offset = "0x1B42A60", VA = "0x181B44460", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010")]
	internal static string FormatSignature(byte[] signature)
	{
		return null;
	}
}
