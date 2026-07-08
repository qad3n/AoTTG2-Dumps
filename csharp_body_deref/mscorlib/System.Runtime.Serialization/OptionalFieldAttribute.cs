using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003EA")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class OptionalFieldAttribute : Attribute
{
	[Token(Token = "0x400101A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int versionAdded;

	[Token(Token = "0x1700043B")]
	public int VersionAdded
	{
		[Token(Token = "0x6001FF0")]
		[Address(RVA = "0x4EB9760", Offset = "0x4EB9760", VA = "0x4EB9760")]
		set
		{
		}
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x4EB9750", Offset = "0x4EB9750", VA = "0x4EB9750")]
	public OptionalFieldAttribute()
	{
	}
}
