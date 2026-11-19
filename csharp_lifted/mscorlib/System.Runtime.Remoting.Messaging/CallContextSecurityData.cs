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
[Token(Token = "0x20003A0")]
internal class CallContextSecurityData : ICloneable
{
	[Token(Token = "0x4000EA6")]
	[FieldOffset(Offset = "0x10")]
	private IPrincipal _principal;

	[Token(Token = "0x1700039D")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E43")]
		[Address(RVA = "0x538E260", Offset = "0x538D260", VA = "0x538E260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x538E1E0", Offset = "0x538D1E0", VA = "0x538E1E0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x538E450", Offset = "0x538D450", VA = "0x538E450")]
	public CallContextSecurityData()
	{
	}
}
