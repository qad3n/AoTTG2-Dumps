// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.NetworkInformationException
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Serializable]
[Token(Token = "0x200031F")]
public class NetworkInformationException : Win32Exception
{
	[Token(Token = "0x170004DE")]
	public override int ErrorCode
	{
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x61A4620", Offset = "0x61A3620", VA = "0x61A4620", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x61A45C0", Offset = "0x61A35C0", VA = "0x61A45C0")]
	public NetworkInformationException()
	{
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x61A4610", Offset = "0x61A3610", VA = "0x61A4610")]
	protected NetworkInformationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
