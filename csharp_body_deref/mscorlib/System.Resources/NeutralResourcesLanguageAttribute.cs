using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004AE")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false)]
public sealed class NeutralResourcesLanguageAttribute : Attribute
{
	[Token(Token = "0x17000486")]
	public string CultureName
	{
		[Token(Token = "0x600233C")]
		[Address(RVA = "0x4EDE8D0", Offset = "0x4EDE8D0", VA = "0x4EDE8D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000487")]
	public UltimateResourceFallbackLocation Location
	{
		[Token(Token = "0x600233D")]
		[Address(RVA = "0x4EDE8E0", Offset = "0x4EDE8E0", VA = "0x4EDE8E0")]
		[CompilerGenerated]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[Token(Token = "0x600233B")]
	[Address(RVA = "0x4EDE850", Offset = "0x4EDE850", VA = "0x4EDE850")]
	public NeutralResourcesLanguageAttribute(string cultureName)
	{
	}
}
