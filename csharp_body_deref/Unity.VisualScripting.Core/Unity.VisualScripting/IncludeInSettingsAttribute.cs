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
	[Token(Token = "0x17000060")]
	public bool include
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x4CA39C0", Offset = "0x4CA39C0", VA = "0x4CA39C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x4CA39D0", Offset = "0x4CA39D0", VA = "0x4CA39D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4CA39A0", Offset = "0x4CA39A0", VA = "0x4CA39A0")]
	public IncludeInSettingsAttribute(bool include)
	{
	}
}
