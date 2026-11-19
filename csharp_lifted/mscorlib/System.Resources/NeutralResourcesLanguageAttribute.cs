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

[Token(Token = "0x20004B7")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false)]
public sealed class NeutralResourcesLanguageAttribute : Attribute
{
	[Token(Token = "0x17000488")]
	public string CultureName
	{
		[Token(Token = "0x600238C")]
		[Address(RVA = "0x53CBE40", Offset = "0x53CAE40", VA = "0x53CBE40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000489")]
	public UltimateResourceFallbackLocation Location
	{
		[Token(Token = "0x600238D")]
		[Address(RVA = "0x53CBE50", Offset = "0x53CAE50", VA = "0x53CBE50")]
		[CompilerGenerated]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[Token(Token = "0x600238B")]
	[Address(RVA = "0x53CBDC0", Offset = "0x53CADC0", VA = "0x53CBDC0")]
	public NeutralResourcesLanguageAttribute(string cultureName)
	{
	}
}
