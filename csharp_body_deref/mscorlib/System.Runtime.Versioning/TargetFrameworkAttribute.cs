// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Versioning.TargetFrameworkAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Versioning;

[Token(Token = "0x20003F4")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false, Inherited = false)]
public sealed class TargetFrameworkAttribute : Attribute
{
	[Token(Token = "0x4000FC9")]
	[FieldOffset(Offset = "0x10")]
	private string _frameworkName;

	[Token(Token = "0x4000FCA")]
	[FieldOffset(Offset = "0x18")]
	private string _frameworkDisplayName;

	[Token(Token = "0x17000412")]
	public string FrameworkDisplayName
	{
		[Token(Token = "0x6001F8B")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x1A09820", Offset = "0x1A07E20", VA = "0x181A09820")]
	public TargetFrameworkAttribute(string frameworkName)
	{
	}
}
