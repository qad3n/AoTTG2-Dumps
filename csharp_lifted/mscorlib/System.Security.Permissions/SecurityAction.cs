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
[Token(Token = "0x20002BE")]
[ComVisible(true)]
[Obsolete("CAS support is not available with Silverlight applications.")]
public enum SecurityAction
{
	[Token(Token = "0x4000BCC")]
	Demand = 2,
	[Token(Token = "0x4000BCD")]
	Assert,
	[Token(Token = "0x4000BCE")]
	[Obsolete("This requests should not be used")]
	Deny,
	[Token(Token = "0x4000BCF")]
	PermitOnly,
	[Token(Token = "0x4000BD0")]
	LinkDemand,
	[Token(Token = "0x4000BD1")]
	InheritanceDemand,
	[Token(Token = "0x4000BD2")]
	[Obsolete("This requests should not be used")]
	RequestMinimum,
	[Token(Token = "0x4000BD3")]
	[Obsolete("This requests should not be used")]
	RequestOptional,
	[Token(Token = "0x4000BD4")]
	[Obsolete("This requests should not be used")]
	RequestRefuse
}
