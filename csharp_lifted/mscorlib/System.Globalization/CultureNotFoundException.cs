// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CultureNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x2000544")]
public class CultureNotFoundException : ArgumentException
{
	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0x98")]
	private string _invalidCultureName;

	[Token(Token = "0x4001529")]
	[FieldOffset(Offset = "0xA0")]
	private int? _invalidCultureId;

	[Token(Token = "0x170005D1")]
	public virtual int? InvalidCultureId
	{
		[Token(Token = "0x600288F")]
		[Address(RVA = "0x53F6530", Offset = "0x53F5530", VA = "0x53F6530", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D2")]
	public virtual string InvalidCultureName
	{
		[Token(Token = "0x6002890")]
		[Address(RVA = "0x53F6540", Offset = "0x53F5540", VA = "0x53F6540", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D3")]
	private static string DefaultMessage
	{
		[Token(Token = "0x6002891")]
		[Address(RVA = "0x53F6230", Offset = "0x53F5230", VA = "0x53F6230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D4")]
	private string FormatedInvalidCultureId
	{
		[Token(Token = "0x6002892")]
		[Address(RVA = "0x53F6550", Offset = "0x53F5550", VA = "0x53F6550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D5")]
	public override string Message
	{
		[Token(Token = "0x6002893")]
		[Address(RVA = "0x53F6660", Offset = "0x53F5660", VA = "0x53F6660", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600288B")]
	[Address(RVA = "0x53F61F0", Offset = "0x53F51F0", VA = "0x53F61F0")]
	public CultureNotFoundException()
	{
	}

	[Token(Token = "0x600288C")]
	[Address(RVA = "0x53F6260", Offset = "0x53F5260", VA = "0x53F6260")]
	public CultureNotFoundException(string paramName, string message)
	{
	}

	[Token(Token = "0x600288D")]
	[Address(RVA = "0x53F6270", Offset = "0x53F5270", VA = "0x53F6270")]
	protected CultureNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600288E")]
	[Address(RVA = "0x53F6400", Offset = "0x53F5400", VA = "0x53F6400", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
