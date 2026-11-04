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
[Token(Token = "0x20003C7")]
internal class CallContextSecurityData : ICloneable
{
	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x10")]
	private IPrincipal _principal;

	[Token(Token = "0x1700039E")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E6D")]
		[Address(RVA = "0x19DA120", Offset = "0x19D8720", VA = "0x1819DA120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x19F1330", Offset = "0x19EF930", VA = "0x1819F1330", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CallContextSecurityData()
	{
	}
}
