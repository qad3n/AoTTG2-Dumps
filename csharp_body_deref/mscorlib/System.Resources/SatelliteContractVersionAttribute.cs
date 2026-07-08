using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004B3")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false)]
public sealed class SatelliteContractVersionAttribute : Attribute
{
	[Token(Token = "0x1700048A")]
	public string Version
	{
		[Token(Token = "0x6002354")]
		[Address(RVA = "0x4EE00B0", Offset = "0x4EE00B0", VA = "0x4EE00B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002353")]
	[Address(RVA = "0x4EE0030", Offset = "0x4EE0030", VA = "0x4EE0030")]
	public SatelliteContractVersionAttribute(string version)
	{
	}
}
