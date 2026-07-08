using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A1")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true, Inherited = false)]
public sealed class InternalsVisibleToAttribute : Attribute
{
	[Token(Token = "0x4001337")]
	[FieldOffset(Offset = "0x10")]
	private string _assemblyName;

	[Token(Token = "0x4001338")]
	[FieldOffset(Offset = "0x18")]
	private bool _allInternalsVisible;

	[Token(Token = "0x17000482")]
	public bool AllInternalsVisible
	{
		[Token(Token = "0x60022FD")]
		[Address(RVA = "0x4EDE570", Offset = "0x4EDE570", VA = "0x4EDE570")]
		set
		{
		}
	}

	[Token(Token = "0x60022FC")]
	[Address(RVA = "0x4EDE540", Offset = "0x4EDE540", VA = "0x4EDE540")]
	public InternalsVisibleToAttribute(string assemblyName)
	{
	}
}
