using Il2CppDummyDll;

namespace System.Runtime.Versioning;

[Token(Token = "0x20003C5")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false, Inherited = false)]
public sealed class TargetFrameworkAttribute : Attribute
{
	[Token(Token = "0x4000FC3")]
	[FieldOffset(Offset = "0x10")]
	private string _frameworkName;

	[Token(Token = "0x4000FC4")]
	[FieldOffset(Offset = "0x18")]
	private string _frameworkDisplayName;

	[Token(Token = "0x17000410")]
	public string FrameworkDisplayName
	{
		[Token(Token = "0x6001F1C")]
		[Address(RVA = "0x4EADF00", Offset = "0x4EADF00", VA = "0x4EADF00")]
		set
		{
		}
	}

	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x4EADE80", Offset = "0x4EADE80", VA = "0x4EADE80")]
	public TargetFrameworkAttribute(string frameworkName)
	{
	}
}
