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
[Token(Token = "0x20002B6")]
[Obsolete("CAS support is not available with Silverlight applications.")]
[ComVisible(true)]
public enum SecurityAction
{
	[Token(Token = "0x4000C5F")]
	Demand = 2,
	[Token(Token = "0x4000C60")]
	Assert,
	[Token(Token = "0x4000C61")]
	[Obsolete("This requests should not be used")]
	Deny,
	[Token(Token = "0x4000C62")]
	PermitOnly,
	[Token(Token = "0x4000C63")]
	LinkDemand,
	[Token(Token = "0x4000C64")]
	InheritanceDemand,
	[Token(Token = "0x4000C65")]
	[Obsolete("This requests should not be used")]
	RequestMinimum,
	[Token(Token = "0x4000C66")]
	[Obsolete("This requests should not be used")]
	RequestOptional,
	[Token(Token = "0x4000C67")]
	[Obsolete("This requests should not be used")]
	RequestRefuse
}
