// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.WarningException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20001AE")]
public class WarningException : SystemException
{
	[Token(Token = "0x17000271")]
	public string HelpUrl
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x624BCB0", Offset = "0x624ACB0", VA = "0x624BCB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000272")]
	public string HelpTopic
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x624BCC0", Offset = "0x624ACC0", VA = "0x624BCC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x624BA00", Offset = "0x624AA00", VA = "0x624BA00")]
	public WarningException()
	{
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x624BAA0", Offset = "0x624AAA0", VA = "0x624BAA0")]
	public WarningException(string message)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x624BAF0", Offset = "0x624AAF0", VA = "0x624BAF0")]
	public WarningException(string message, string helpUrl)
	{
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x624BB40", Offset = "0x624AB40", VA = "0x624BB40")]
	public WarningException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x624BA50", Offset = "0x624AA50", VA = "0x624BA50")]
	public WarningException(string message, string helpUrl, string helpTopic)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x624BB50", Offset = "0x624AB50", VA = "0x624BB50")]
	protected WarningException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x624BCD0", Offset = "0x624ACD0", VA = "0x624BCD0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
