// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CallContextSecurityData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Principal;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x2000398")]
internal class CallContextSecurityData : ICloneable
{
	[Token(Token = "0x4000F3C")]
	[FieldOffset(Offset = "0x10")]
	private IPrincipal _principal;

	[Token(Token = "0x1700039C")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x3B86310", Offset = "0x3B86310", VA = "0x3B86310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x3B86290", Offset = "0x3B86290", VA = "0x3B86290", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x3B86500", Offset = "0x3B86500", VA = "0x3B86500")]
	public CallContextSecurityData()
	{
	}
}
