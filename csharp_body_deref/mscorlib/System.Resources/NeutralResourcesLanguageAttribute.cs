// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.NeutralResourcesLanguageAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004DE")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false)]
public sealed class NeutralResourcesLanguageAttribute : Attribute
{
	[Token(Token = "0x17000489")]
	public string CultureName
	{
		[Token(Token = "0x60023BE")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048A")]
	public UltimateResourceFallbackLocation Location
	{
		[Token(Token = "0x60023BF")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[Token(Token = "0x60023BD")]
	[Address(RVA = "0x1A4B810", Offset = "0x1A49E10", VA = "0x181A4B810")]
	public NeutralResourcesLanguageAttribute(string cultureName)
	{
	}
}
