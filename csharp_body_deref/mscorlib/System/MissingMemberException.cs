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
[Token(Token = "0x2000144")]
public class MissingMemberException : MemberAccessException
{
	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x90")]
	protected string ClassName;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x98")]
	protected string MemberName;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0xA0")]
	protected byte[] Signature;

	[Token(Token = "0x17000116")]
	public override string Message
	{
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x54E2180", Offset = "0x54E1180", VA = "0x54E2180", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x54E1E80", Offset = "0x54E0E80", VA = "0x54E1E80")]
	public MissingMemberException()
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x54E1DC0", Offset = "0x54E0DC0", VA = "0x54E1DC0")]
	public MissingMemberException(string message)
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x54E2260", Offset = "0x54E1260", VA = "0x54E2260")]
	public MissingMemberException(string className, string memberName)
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x54E1ED0", Offset = "0x54E0ED0", VA = "0x54E1ED0")]
	protected MissingMemberException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x54E22B0", Offset = "0x54E12B0", VA = "0x54E22B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x54E2440", Offset = "0x54E1440", VA = "0x54E2440")]
	internal static string FormatSignature(byte[] signature)
	{
		return null;
	}
}
