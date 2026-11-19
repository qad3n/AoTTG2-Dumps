// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IncludeInSettingsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003E")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct, AllowMultiple = false, Inherited = true)]
public sealed class IncludeInSettingsAttribute : Attribute
{
	[Token(Token = "0x17000061")]
	public bool include
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x6792DE0", Offset = "0x6791DE0", VA = "0x6792DE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x6792DF0", Offset = "0x6791DF0", VA = "0x6792DF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x6792DC0", Offset = "0x6791DC0", VA = "0x6792DC0")]
	public IncludeInSettingsAttribute(bool include)
	{
	}
}
