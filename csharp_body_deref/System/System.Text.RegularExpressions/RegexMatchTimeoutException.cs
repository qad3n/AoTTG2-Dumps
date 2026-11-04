// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexMatchTimeoutException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000F5")]
public class RegexMatchTimeoutException : TimeoutException, ISerializable
{
	[Token(Token = "0x170000E7")]
	public string Input
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	public string Pattern
	{
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	public TimeSpan MatchTimeout
	{
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x2867DB0", Offset = "0x28663B0", VA = "0x182867DB0")]
	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x2868020", Offset = "0x2866620", VA = "0x182868020")]
	public RegexMatchTimeoutException()
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x2867EB0", Offset = "0x28664B0", VA = "0x182867EB0")]
	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x2867CC0", Offset = "0x28662C0", VA = "0x182867CC0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
