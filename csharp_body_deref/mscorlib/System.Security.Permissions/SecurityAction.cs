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
