// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Permissions.SecurityAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Permissions;

[Serializable]
[Token(Token = "0x20002E5")]
[Obsolete("CAS support is not available with Silverlight applications.")]
[ComVisible(true)]
public enum SecurityAction
{
	[Token(Token = "0x4000C6C")]
	Demand = 2,
	[Token(Token = "0x4000C6D")]
	Assert,
	[Token(Token = "0x4000C6E")]
	[Obsolete("This requests should not be used")]
	Deny,
	[Token(Token = "0x4000C6F")]
	PermitOnly,
	[Token(Token = "0x4000C70")]
	LinkDemand,
	[Token(Token = "0x4000C71")]
	InheritanceDemand,
	[Token(Token = "0x4000C72")]
	[Obsolete("This requests should not be used")]
	RequestMinimum,
	[Token(Token = "0x4000C73")]
	[Obsolete("This requests should not be used")]
	RequestOptional,
	[Token(Token = "0x4000C74")]
	[Obsolete("This requests should not be used")]
	RequestRefuse
}
