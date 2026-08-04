// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Versioning.TargetFrameworkAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B93A20", Offset = "0x3B93A20", VA = "0x3B93A20")]
		set
		{
		}
	}

	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x3B939A0", Offset = "0x3B939A0", VA = "0x3B939A0")]
	public TargetFrameworkAttribute(string frameworkName)
	{
	}
}
