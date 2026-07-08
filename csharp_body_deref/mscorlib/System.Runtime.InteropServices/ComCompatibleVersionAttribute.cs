using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200044D")]
[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
[ComVisible(true)]
public sealed class ComCompatibleVersionAttribute : Attribute
{
	[Token(Token = "0x40012C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int _major;

	[Token(Token = "0x40012C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int _minor;

	[Token(Token = "0x40012C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int _build;

	[Token(Token = "0x40012C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal int _revision;

	[Token(Token = "0x60021DC")]
	[Address(RVA = "0x4ED7DA0", Offset = "0x4ED7DA0", VA = "0x4ED7DA0")]
	public ComCompatibleVersionAttribute(int major, int minor, int build, int revision)
	{
	}
}
