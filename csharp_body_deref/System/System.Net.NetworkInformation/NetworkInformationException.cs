// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.NetworkInformationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Serializable]
[Token(Token = "0x20001D6")]
public class NetworkInformationException : Win32Exception
{
	[Token(Token = "0x170002B7")]
	public override int ErrorCode
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x49A4280", Offset = "0x49A4280", VA = "0x49A4280", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x49A4220", Offset = "0x49A4220", VA = "0x49A4220")]
	public NetworkInformationException()
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x49A4270", Offset = "0x49A4270", VA = "0x49A4270")]
	protected NetworkInformationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
