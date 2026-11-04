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
[Token(Token = "0x20001ED")]
public class WarningException : SystemException
{
	[Token(Token = "0x170002A0")]
	public string HelpUrl
	{
		[Token(Token = "0x6000D09")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public string HelpTopic
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x28CB2C0", Offset = "0x28C98C0", VA = "0x1828CB2C0")]
	public WarningException()
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x28CB580", Offset = "0x28C9B80", VA = "0x1828CB580")]
	public WarningException(string message)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x28CB520", Offset = "0x28C9B20", VA = "0x1828CB520")]
	public WarningException(string message, string helpUrl)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x19E0110", Offset = "0x19DE710", VA = "0x1819E0110")]
	public WarningException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x28CB310", Offset = "0x28C9910", VA = "0x1828CB310")]
	public WarningException(string message, string helpUrl, string helpTopic)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x28CB370", Offset = "0x28C9970", VA = "0x1828CB370")]
	protected WarningException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x28CB210", Offset = "0x28C9810", VA = "0x1828CB210", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
