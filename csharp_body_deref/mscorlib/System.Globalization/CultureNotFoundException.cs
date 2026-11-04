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
[Token(Token = "0x200056B")]
public class CultureNotFoundException : ArgumentException
{
	[Token(Token = "0x40015C8")]
	[FieldOffset(Offset = "0x98")]
	private string _invalidCultureName;

	[Token(Token = "0x40015C9")]
	[FieldOffset(Offset = "0xA0")]
	private int? _invalidCultureId;

	[Token(Token = "0x170005D2")]
	public virtual int? InvalidCultureId
	{
		[Token(Token = "0x60028C1")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D3")]
	public virtual string InvalidCultureName
	{
		[Token(Token = "0x60028C2")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D4")]
	private static string DefaultMessage
	{
		[Token(Token = "0x60028C3")]
		[Address(RVA = "0x1A5F840", Offset = "0x1A5DE40", VA = "0x181A5F840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D5")]
	private string FormatedInvalidCultureId
	{
		[Token(Token = "0x60028C4")]
		[Address(RVA = "0x1A5F870", Offset = "0x1A5DE70", VA = "0x181A5F870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D6")]
	public override string Message
	{
		[Token(Token = "0x60028C5")]
		[Address(RVA = "0x1A5F980", Offset = "0x1A5DF80", VA = "0x181A5F980", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60028BD")]
	[Address(RVA = "0x1A5F660", Offset = "0x1A5DC60", VA = "0x181A5F660")]
	public CultureNotFoundException()
	{
	}

	[Token(Token = "0x60028BE")]
	[Address(RVA = "0x1A5F640", Offset = "0x1A5DC40", VA = "0x181A5F640")]
	public CultureNotFoundException(string paramName, string message)
	{
	}

	[Token(Token = "0x60028BF")]
	[Address(RVA = "0x1A5F6A0", Offset = "0x1A5DCA0", VA = "0x181A5F6A0")]
	protected CultureNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60028C0")]
	[Address(RVA = "0x1A5F520", Offset = "0x1A5DB20", VA = "0x181A5F520", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
